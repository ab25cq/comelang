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

struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
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
    struct sMemHeaderTiny* mFreeMem[4096];
};

extern struct sHeapPage gHeapPages;

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
    _Bool mDefferRightValue;
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
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
    _Bool mExceptionGenericsType;
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
    _Bool mComma;
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
    _Bool mConstFun;
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
    _Bool mConstFun;
};

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
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
    struct list$1char$ph* key_list;
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
    struct sType* mObjType;
    char* mObjValue;
    _Bool mNoFree;
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
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
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
    _Bool emb_cpp;
    _Bool gcc_compiler;
    _Bool in_method_block;
    _Bool prohibits_output_last_code;
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
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6) __attribute__((availability(macosx,introduced=10.10)));
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int printf(const char* anonymous_var_nameX15, ...) __attribute__((__format__ (__printf__, 1, 2)));
void clearerr(struct __sFILE* anonymous_var_nameX36);
int fclose(struct __sFILE* anonymous_var_nameX37);
int feof(struct __sFILE* anonymous_var_nameX38);
int ferror(struct __sFILE* anonymous_var_nameX39);
int fflush(struct __sFILE* anonymous_var_nameX40);
int fgetc(struct __sFILE* anonymous_var_nameX41);
int fgetpos(struct __sFILE* anonymous_var_nameX42, long long* anonymous_var_nameX43);
char* fgets(char* anonymous_var_nameX44, int anonymous_var_nameX45, struct __sFILE* anonymous_var_nameX46);
struct __sFILE* fopen(const char* __filename, const char* __mode) __asm("_" "fopen" );
int fprintf(struct __sFILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int anonymous_var_nameX49, struct __sFILE* anonymous_var_nameX50);
int fputs(const char* anonymous_var_nameX51, struct __sFILE* anonymous_var_nameX52) __asm("_" "fputs" );
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX53, const char* anonymous_var_nameX54, struct __sFILE* anonymous_var_nameX55) __asm("_" "freopen" );
int fscanf(struct __sFILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(struct __sFILE* anonymous_var_nameX58, long anonymous_var_nameX59, int anonymous_var_nameX60);
int fsetpos(struct __sFILE* anonymous_var_nameX61, const long long* anonymous_var_nameX62);
long ftell(struct __sFILE* anonymous_var_nameX63);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream) __asm("_" "fwrite" );
int getc(struct __sFILE* anonymous_var_nameX64);
int getchar();
char* gets(char* anonymous_var_nameX65);
void perror(const char* anonymous_var_nameX66) __attribute__((__cold__));
int putc(int anonymous_var_nameX67, struct __sFILE* anonymous_var_nameX68);
int putchar(int anonymous_var_nameX69);
int puts(const char* anonymous_var_nameX70);
int remove(const char* anonymous_var_nameX71);
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* anonymous_var_nameX72);
int scanf(const char* anonymous_var_nameX73, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(struct __sFILE* anonymous_var_nameX74, char* anonymous_var_nameX75);
int setvbuf(struct __sFILE* anonymous_var_nameX76, char* anonymous_var_nameX77, int anonymous_var_nameX78, unsigned long  int anonymous_var_nameX79);
int sprintf(char* anonymous_var_nameX80, const char* anonymous_var_nameX81, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char* anonymous_var_nameX82, const char* anonymous_var_nameX83, ...) __attribute__((__format__ (__scanf__, 2, 3)));
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX84);
int ungetc(int anonymous_var_nameX85, struct __sFILE* anonymous_var_nameX86);
int vfprintf(struct __sFILE* anonymous_var_nameX87, const char* anonymous_var_nameX88, va_list anonymous_var_nameX89) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char* anonymous_var_nameX90, va_list anonymous_var_nameX91) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char* anonymous_var_nameX92, const char* anonymous_var_nameX93, va_list anonymous_var_nameX94) __attribute__((__format__ (__printf__, 2, 0)));
char* ctermid(char* anonymous_var_nameX95);
struct __sFILE* fdopen(int anonymous_var_nameX96, const char* anonymous_var_nameX97) __asm("_" "fdopen" );
int fileno(struct __sFILE* anonymous_var_nameX98);
int pclose(struct __sFILE* anonymous_var_nameX99) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));
struct __sFILE* popen(const char* anonymous_var_nameX100, const char* anonymous_var_nameX101) __asm("_" "popen" ) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));
int __srget(struct __sFILE* anonymous_var_nameX102);
int __svfscanf(struct __sFILE* anonymous_var_nameX103, const char* anonymous_var_nameX104, va_list anonymous_var_nameX105) __attribute__((__format__ (__scanf__, 2, 0)));
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
char* tempnam(const char* __dir, const char* __prefix) __asm("_" "tempnam" );
int fseeko(struct __sFILE* __stream, long long __offset, int __whence);
long long ftello(struct __sFILE* __stream);
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX118) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char* __format, va_list anonymous_var_nameX119) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX120) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX121) __attribute__((__format__ (__scanf__, 2, 0)));
int dprintf(int anonymous_var_nameX122, const char* anonymous_var_nameX123, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream) __attribute__((availability(macosx,introduced=10.7)));
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream) __attribute__((availability(macosx,introduced=10.7)));
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
int asprintf(char** anonymous_var_nameX127, const char* anonymous_var_nameX128, ...) __attribute__((__format__ (__printf__, 2, 3)));
char* ctermid_r(char* anonymous_var_nameX129);
char* fgetln(struct __sFILE* anonymous_var_nameX130, unsigned long  int* anonymous_var_nameX131);
const char* fmtcheck(const char* anonymous_var_nameX132, const char* anonymous_var_nameX133) __attribute__((format_arg(2)));
int fpurge(struct __sFILE* anonymous_var_nameX134);
void setbuffer(struct __sFILE* anonymous_var_nameX135, char* anonymous_var_nameX136, int anonymous_var_nameX137);
int setlinebuf(struct __sFILE* anonymous_var_nameX138);
int vasprintf(char** anonymous_var_nameX139, const char* anonymous_var_nameX140, va_list anonymous_var_nameX141) __attribute__((__format__ (__printf__, 2, 0)));
struct __sFILE* funopen(const void* anonymous_var_nameX142, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int anonymous_var_nameX173, unsigned int anonymous_var_nameX174);
int getiopolicy_np(int anonymous_var_nameX175, int anonymous_var_nameX176) __attribute__((availability(macosx,introduced=10.5)));
int getrlimit(int anonymous_var_nameX177, struct rlimit* anonymous_var_nameX178) __asm("_" "getrlimit" );
int getrusage(int anonymous_var_nameX179, struct rusage* anonymous_var_nameX180);
int setpriority(int anonymous_var_nameX181, unsigned int anonymous_var_nameX182, int anonymous_var_nameX183);
int setiopolicy_np(int anonymous_var_nameX184, int anonymous_var_nameX185, int anonymous_var_nameX186) __attribute__((availability(macosx,introduced=10.5)));
int setrlimit(int anonymous_var_nameX187, const struct rlimit* anonymous_var_nameX188) __asm("_" "setrlimit" );
int wait(int* anonymous_var_nameX189) __asm("_" "wait" );
int waitpid(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192) __asm("_" "waitpid" );
int waitid(enum anonymous_typeY2 anonymous_var_nameX193, unsigned int anonymous_var_nameX194, struct __siginfo* anonymous_var_nameX195, int anonymous_var_nameX196) __asm("_" "waitid" );
int wait3(int* anonymous_var_nameX197, int anonymous_var_nameX198, struct rusage* anonymous_var_nameX199);
int wait4(int anonymous_var_nameX200, int* anonymous_var_nameX201, int anonymous_var_nameX202, struct rusage* anonymous_var_nameX203);
void* alloca(unsigned long  int anonymous_var_nameX204);
void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2)));
void malloc_type_free(void* ptr, unsigned long  long type_id);
void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2,3)));
void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));
void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));
void* malloc(unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1))) ;
void* calloc(unsigned long  int __count, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2))) ;
void free(void* anonymous_var_nameX205);
void* realloc(void* __ptr, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2))) ;
void* reallocf(void* __ptr, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* valloc(unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1))) ;
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_align(1))) __attribute__((alloc_size(2))) __attribute__((availability(macosx,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size) __attribute__((availability(macosx,introduced=10.6)));
void abort() __attribute__((__cold__)) __attribute__((__noreturn__));
int abs(int anonymous_var_nameX206) __attribute__((__const__));
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX207);
int atoi(const char* anonymous_var_nameX208);
long atol(const char* anonymous_var_nameX209);
long long atoll(const char* anonymous_var_nameX210);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX213, int anonymous_var_nameX214) __attribute__((__const__));
void exit(int anonymous_var_nameX215) __attribute__((__noreturn__));
char* getenv(const char* anonymous_var_nameX216);
long labs(long anonymous_var_nameX217) __attribute__((__const__));
struct anonymous_typeX6 ldiv(long anonymous_var_nameX218, long anonymous_var_nameX219) __attribute__((__const__));
long long llabs(long  long anonymous_var_nameX220);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX221, long  long anonymous_var_nameX222);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX223, const char* anonymous_var_nameX224, unsigned long  int anonymous_var_nameX225);
int mbtowc(int* anonymous_var_nameX226, const char* anonymous_var_nameX227, unsigned long  int anonymous_var_nameX228);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX231) __attribute__((__noreturn__));
int rand() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
void srand(unsigned int anonymous_var_nameX232) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
double strtod(const char* anonymous_var_nameX233, char** anonymous_var_nameX234) __asm("_" "strtod" );
float strtof(const char* anonymous_var_nameX235, char** anonymous_var_nameX236) __asm("_" "strtof" );
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX237, char** anonymous_var_nameX238);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* anonymous_var_nameX239) __asm("_" "system" );
unsigned long  int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
int wctomb(char* anonymous_var_nameX243, int anonymous_var_nameX244);
void _Exit(int anonymous_var_nameX245) __attribute__((__noreturn__));
long a64l(const char* anonymous_var_nameX246);
double drand48();
char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);
double erand48(unsigned short int anonymous_var_nameX251[3]);
char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);
char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);
int getsubopt(char** anonymous_var_nameX259, char** anonymous_var_nameX260, char** anonymous_var_nameX261);
int grantpt(int anonymous_var_nameX262);
char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, unsigned long  int anonymous_var_nameX265);
long jrand48(unsigned short int anonymous_var_nameX266[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char* l64a(long anonymous_var_nameX267);
void lcong48(unsigned short int anonymous_var_nameX268[7]);
long lrand48() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char* mktemp(char* anonymous_var_nameX269);
int mkstemp(char* anonymous_var_nameX270);
long mrand48() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
long nrand48(unsigned short int anonymous_var_nameX271[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int posix_openpt(int anonymous_var_nameX272);
char* ptsname(int anonymous_var_nameX273);
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen) __attribute__((availability(macos,introduced=10.13.4))) __attribute__((availability(ios,introduced=11.3))) __attribute__((availability(tvos,introduced=11.3))) __attribute__((availability(watchos,introduced=4.3)));
int putenv(char* anonymous_var_nameX274) __asm("_" "putenv" );
long random() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int rand_r(unsigned int* anonymous_var_nameX275) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char* realpath(const char* anonymous_var_nameX276, char* anonymous_var_nameX277) __asm("_" "realpath" "$DARWIN_EXTSN");
unsigned short int* seed48(unsigned short int anonymous_var_nameX278[3]);
int setenv(const char* __name, const char* __value, int __overwrite) __asm("_" "setenv" );
void setkey(const char* anonymous_var_nameX279) __asm("_" "setkey" );
char* setstate(const char* anonymous_var_nameX280);
void srand48(long anonymous_var_nameX281);
void srandom(unsigned int anonymous_var_nameX282);
int unlockpt(int anonymous_var_nameX283);
int unsetenv(const char* anonymous_var_nameX284) __asm("_" "unsetenv" );
unsigned int arc4random();
void arc4random_addrandom(unsigned char* anonymous_var_nameX285, int anonymous_var_nameX286) __attribute__((availability(macosx,introduced=10.0))) __attribute__((availability(macosx,deprecated=10.12,message="use arc4random_stir")))
    __attribute__((availability(ios,introduced=2.0))) __attribute__((availability(ios,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(tvos,introduced=2.0))) __attribute__((availability(tvos,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(watchos,introduced=1.0))) __attribute__((availability(watchos,deprecated=3.0,message="use arc4random_stir")));
void arc4random_buf(void* __buf, unsigned long  int __nbytes) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound) __attribute__((availability(macosx,introduced=10.7)));
int atexit_b(void (*anonymous_lambda_var_nameZ8)()) __attribute__((availability(macosx,introduced=10.6)));
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
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
int daemon(int anonymous_var_nameX311, int anonymous_var_nameX312) __asm("_" "daemon" ) __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message="Use posix_spawn APIs instead."))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char* devname(int anonymous_var_nameX313, unsigned short int anonymous_var_nameX314);
char* devname_r(int anonymous_var_nameX315, unsigned short int anonymous_var_nameX316, char* buf, int len);
char* getbsize(int* anonymous_var_nameX317, long* anonymous_var_nameX318);
int getloadavg(double anonymous_var_nameX319[], int anonymous_var_nameX320);
const char* getprogname();
void setprogname(const char* anonymous_var_nameX321);
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX334, int (*__compar)(void*,const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__))) __attribute__((availability(macosx,introduced=10.6)));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX340, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX344) __attribute__((availability(macos,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp) __attribute__((availability(macos,introduced=11.0))) __attribute__((availability(ios,introduced=14.0))) __attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)));
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
char* strerror(int __errnum) __asm("_" "strerror" );
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
char* stpncpy(char* __dst, const char* __src, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)));
char* strndup(const char* __s1, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)));
unsigned long  int strnlen(const char* __s1, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)));
char* strsignal(int __sig);
int memset_s(void* __s, unsigned long  int __smax, int __c, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.9)));
void* memmem(const void* __big, unsigned long  int __big_len, const void* __little, unsigned long  int __little_len) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void* __b, const void* __pattern4, unsigned long  int __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void* __b, const void* __pattern8, unsigned long  int __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void* __b, const void* __pattern16, unsigned long  int __len) __attribute__((availability(macosx,introduced=10.5)));
char* strcasestr(const char* __big, const char* __little);
char* strnstr(const char* __big, const char* __little, unsigned long  int __len);
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size);
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* anonymous_var_nameX345, void* anonymous_var_nameX346, long anonymous_var_nameX347);
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* anonymous_var_nameX348, const void* anonymous_var_nameX349, unsigned long  int anonymous_var_nameX350);
void bcopy(const void* anonymous_var_nameX351, void* anonymous_var_nameX352, unsigned long  int anonymous_var_nameX353);
void bzero(void* anonymous_var_nameX354, unsigned long  int anonymous_var_nameX355);
char* index(const char* anonymous_var_nameX356, int anonymous_var_nameX357);
char* rindex(const char* anonymous_var_nameX358, int anonymous_var_nameX359);
int ffs(int anonymous_var_nameX360);
int strcasecmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362);
int strncasecmp(const char* anonymous_var_nameX363, const char* anonymous_var_nameX364, unsigned long  int anonymous_var_nameX365);
int ffsl(long anonymous_var_nameX366) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long  long anonymous_var_nameX367) __attribute__((availability(macosx,introduced=10.9)));
int fls(int anonymous_var_nameX368) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long anonymous_var_nameX369) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long  long anonymous_var_nameX370) __attribute__((availability(macosx,introduced=10.9)));
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
unsigned long  int clock() __asm("_" "clock" );
char* ctime(const long* anonymous_var_nameX413);
double difftime(long anonymous_var_nameX414, long anonymous_var_nameX415);
struct tm* getdate(const char* anonymous_var_nameX416);
struct tm* gmtime(const long* anonymous_var_nameX417);
struct tm* localtime(const long* anonymous_var_nameX418);
long mktime(struct tm* anonymous_var_nameX419) __asm("_" "mktime" );
unsigned long  int strftime(char* anonymous_var_nameX420, unsigned long  int anonymous_var_nameX421, const char* anonymous_var_nameX422, const struct tm* anonymous_var_nameX423) __asm("_" "strftime" );
char* strptime(const char* anonymous_var_nameX424, const char* anonymous_var_nameX425, struct tm* anonymous_var_nameX426) __asm("_" "strptime" );
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
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp) __asm("_" "nanosleep" );
int clock_getres(enum anonymous_typeY12 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY12 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY12 __clock_id);
int clock_settime(enum anonymous_typeY12 __clock_id, const struct timespec* __tp);
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
unsigned long  int wcsftime(int* anonymous_var_nameX518, unsigned long  int anonymous_var_nameX519, const int* anonymous_var_nameX520, const struct tm* anonymous_var_nameX521) __asm("_" "wcsftime" );
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
int* wcpcpy(int* anonymous_var_nameX602, const int* anonymous_var_nameX603) __attribute__((availability(macosx,introduced=10.7)));
int* wcpncpy(int* anonymous_var_nameX604, const int* anonymous_var_nameX605, unsigned long  int anonymous_var_nameX606) __attribute__((availability(macosx,introduced=10.7)));
int* wcsdup(const int* anonymous_var_nameX607) __attribute__((availability(macosx,introduced=10.7)));
int wcscasecmp(const int* anonymous_var_nameX608, const int* anonymous_var_nameX609) __attribute__((availability(macosx,introduced=10.7)));
int wcsncasecmp(const int* anonymous_var_nameX610, const int* anonymous_var_nameX611, unsigned long  int n) __attribute__((availability(macosx,introduced=10.7)));
unsigned long  int wcsnlen(const int* anonymous_var_nameX612, unsigned long  int anonymous_var_nameX613) __attribute__((availability(macosx,introduced=10.7)));
unsigned long  int wcsnrtombs(char* anonymous_var_nameX614, const int** anonymous_var_nameX615, unsigned long  int anonymous_var_nameX616, unsigned long  int anonymous_var_nameX617, union anonymous_typeZ1* anonymous_var_nameX618);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
int* fgetwln(struct __sFILE* anonymous_var_nameX619, unsigned long  int* anonymous_var_nameX620) __attribute__((availability(macosx,introduced=10.7)));
unsigned long  int wcslcat(int* anonymous_var_nameX621, const int* anonymous_var_nameX622, unsigned long  int anonymous_var_nameX623);
unsigned long  int wcslcpy(int* anonymous_var_nameX624, const int* anonymous_var_nameX625, unsigned long  int anonymous_var_nameX626);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
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
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
_Bool bool_equals(_Bool self, _Bool right);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
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
unsigned int _Bool_get_hash_key(_Bool value);
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
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* _Bool_to_string(_Bool self);
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
int _Bool_compare(_Bool left, _Bool right);
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
void FILE_on_drop(struct __sFILE* self);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct __sFILE* f);
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
int assert_v2(int exp);
_Bool wchar_t_equals(int left, int right);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
char* wchar_t_to_string(int wc);
void int_times(int self, void* parent, void (*block)(void*,int));
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
int err_msg(struct sInfo* info, char* msg, ...);
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
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
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
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
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
int poll(struct pollfd* anonymous_var_nameX848, unsigned int anonymous_var_nameX849, int anonymous_var_nameX850) __asm("_" "poll" );
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
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info);
char* sOutputNode_kind(struct sOutputNode* self);
_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info);
static void sOutputNode_finalize(struct sOutputNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
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
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
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
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
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
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
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
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
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
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
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
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_121;
struct list$1char$* __result_obj__59;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_121=0;    i_121<num_value;    i_121++    ){
        list$1char$_push_back(self,values[i_121]);
    }
    __result_obj__59 = (struct list$1char$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__59,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__59;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_122;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_123;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_124;
struct list$1char$* __result_obj__58;
    if(    self->len==0) {
        litem_122=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1char$*"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1char$*"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1char$*"))));
        litem_124->prev=self->tail;
        litem_124->next=((void*)0);
        litem_124->item=item;
        self->tail->next=litem_124;
        self->tail=litem_124;
    }
    self->len++;
    __result_obj__58 = self;
    return __result_obj__58;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_125;
struct list_item$1char$* prev_it_126;
    it_125=self->head;
    while(    it_125!=((void*)0)) {
        prev_it_126=it_125;
        it_125=it_125->next;
        /*c*/ come_call_finalizer3(prev_it_126,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_127;
struct list$1char$p* __result_obj__62;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_127=0;    i_127<num_value;    i_127++    ){
        list$1char$p_push_back(self,values[i_127]);
    }
    __result_obj__62 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__62,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_128;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_129;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_130;
struct list$1char$p* __result_obj__61;
    if(    self->len==0) {
        litem_128=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1char$p*"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1char$p*"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1char$p*"))));
        litem_130->prev=self->tail;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail->next=litem_130;
        self->tail=litem_130;
    }
    self->len++;
    __result_obj__61 = self;
    return __result_obj__61;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_131;
struct list_item$1char$p* prev_it_132;
    it_131=self->head;
    while(    it_131!=((void*)0)) {
        prev_it_132=it_131;
        it_131=it_131->next;
        /*c*/ come_call_finalizer3(prev_it_132,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_133;
struct list$1short$* __result_obj__65;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_133=0;    i_133<num_value;    i_133++    ){
        list$1short$_push_back(self,values[i_133]);
    }
    __result_obj__65 = (struct list$1short$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__65,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_134;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_135;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_136;
struct list$1short$* __result_obj__64;
    if(    self->len==0) {
        litem_134=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1short$*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1short$*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1short$*"))));
        litem_136->prev=self->tail;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail->next=litem_136;
        self->tail=litem_136;
    }
    self->len++;
    __result_obj__64 = self;
    return __result_obj__64;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_137;
struct list_item$1short$* prev_it_138;
    it_137=self->head;
    while(    it_137!=((void*)0)) {
        prev_it_138=it_137;
        it_137=it_137->next;
        /*c*/ come_call_finalizer3(prev_it_138,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_139;
struct list$1int$* __result_obj__68;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_139=0;    i_139<num_value;    i_139++    ){
        list$1int$_push_back(self,values[i_139]);
    }
    __result_obj__68 = (struct list$1int$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__68,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__68;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_140;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_141;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_142;
struct list$1int$* __result_obj__67;
    if(    self->len==0) {
        litem_140=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1int$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1int$*"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result_obj__67 = self;
    return __result_obj__67;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_143;
struct list_item$1int$* prev_it_144;
    it_143=self->head;
    while(    it_143!=((void*)0)) {
        prev_it_144=it_143;
        it_143=it_143->next;
        /*c*/ come_call_finalizer3(prev_it_144,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_145;
struct list$1long$* __result_obj__71;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_145=0;    i_145<num_value;    i_145++    ){
        list$1long$_push_back(self,values[i_145]);
    }
    __result_obj__71 = (struct list$1long$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__71,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__71;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_146;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_147;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_148;
struct list$1long$* __result_obj__70;
    if(    self->len==0) {
        litem_146=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1long$*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1long$*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1long$*"))));
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result_obj__70 = self;
    return __result_obj__70;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_149;
struct list_item$1long$* prev_it_150;
    it_149=self->head;
    while(    it_149!=((void*)0)) {
        prev_it_150=it_149;
        it_149=it_149->next;
        /*c*/ come_call_finalizer3(prev_it_150,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_151;
struct list$1float$* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_151=0;    i_151<num_value;    i_151++    ){
        list$1float$_push_back(self,values[i_151]);
    }
    __result_obj__74 = (struct list$1float$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__74,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_152;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_153;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_154;
struct list$1float$* __result_obj__73;
    if(    self->len==0) {
        litem_152=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1float$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1float$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1float$*"))));
        litem_154->prev=self->tail;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail->next=litem_154;
        self->tail=litem_154;
    }
    self->len++;
    __result_obj__73 = self;
    return __result_obj__73;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_155;
struct list_item$1float$* prev_it_156;
    it_155=self->head;
    while(    it_155!=((void*)0)) {
        prev_it_156=it_155;
        it_155=it_155->next;
        /*c*/ come_call_finalizer3(prev_it_156,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_157;
struct list$1double$* __result_obj__77;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_157=0;    i_157<num_value;    i_157++    ){
        list$1double$_push_back(self,values[i_157]);
    }
    __result_obj__77 = (struct list$1double$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_158;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_159;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_160;
struct list$1double$* __result_obj__76;
    if(    self->len==0) {
        litem_158=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1double$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1double$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1double$*"))));
        litem_160->prev=self->tail;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail->next=litem_160;
        self->tail=litem_160;
    }
    self->len++;
    __result_obj__76 = self;
    return __result_obj__76;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_161;
struct list_item$1double$* prev_it_162;
    it_161=self->head;
    while(    it_161!=((void*)0)) {
        prev_it_162=it_161;
        it_161=it_161->next;
        /*c*/ come_call_finalizer3(prev_it_162,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__111 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__111,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__111;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_196;
struct list_item$1char$ph* prev_it_197;
    it_196=self->head;
    while(    it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        /*c*/ come_call_finalizer3(prev_it_197,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_201;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_202;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_203;
char* __dec_obj15;
struct list$1char$ph* __result_obj__113;
    if(    self->len==0) {
        litem_201=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj13=litem_201->item,
        litem_201->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1) {
        litem_202=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj14=litem_202->item,
        litem_202->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_203->prev=self->tail;
        litem_203->next=((void*)0);
        __dec_obj15=litem_203->item,
        litem_203->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_203;
        self->tail=litem_203;
    }
    self->len++;
    __result_obj__113 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__113;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value189 = (void*)0;
struct sNode* __dec_obj16;
void* __right_value190 = (void*)0;
char* __dec_obj17;
struct sReturnNode* __result_obj__165;
    ((struct sNodeBase*)(__right_value189=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value189,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj16=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj17=self->value_source,
    self->value_source=(char*)come_increment_ref_count((char*)come_memdup(value_source, "05call.c", 13, "char*"));
    __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__165 = (struct sReturnNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__165,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__165;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value191 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value191=__builtin_string("sReturnNode"))));
    (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__166;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_239;
void* __right_value230 = (void*)0;
struct sType* result_type_240;
void* __right_value231 = (void*)0;
struct sType* result_type2_268;
struct sType* result_type3_269;
_Bool Value_270;
_Bool __result_obj__182;
void* __right_value232 = (void*)0;
struct CVALUE* come_value_271;
void* __right_value233 = (void*)0;
struct sType* come_value_type_272;
void* __right_value234 = (void*)0;
struct sType* __dec_obj42;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
char* type_name_274;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __if_result__0_275 = (void*)0;
struct list$1sVar$ph* o2_saved_276;
struct sVar* it_279;
void* __right_value245 = (void*)0;
struct list$1sVar$ph* __dec_obj43;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sFun* come_fun_286;
void* __if_result__1_287 = (void*)0;
struct list$1sVar$ph* o2_saved_288;
struct sVar* it_289;
void* __right_value251 = (void*)0;
struct list$1sVar$ph* __dec_obj44;
void* __right_value252 = (void*)0;
    if(    self->value) {
        come_fun_239=info->come_fun;
        result_type_240=(struct sType*)come_increment_ref_count(sType_clone(come_fun_239->mResultType));
        result_type2_268=(struct sType*)come_increment_ref_count(solve_generics(result_type_240,info->generics_type,info));
        result_type3_269=result_type2_268->mNoSolvedGenericsType;
        if(        result_type2_268->mNoSolvedGenericsType) {
            result_type3_269=result_type2_268->mNoSolvedGenericsType;
        }
        else {
            result_type3_269=result_type2_268;
        }
        Value_270=node_compile(self->value,info);
        if(        !Value_270) {
            __result_obj__182 = (_Bool)0;
            /*c*/ come_call_finalizer3(result_type_240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type2_268,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__182;
        }
        else {
        }
        come_value_271=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type_272=(struct sType*)come_increment_ref_count(solve_generics(come_value_271->type,info->generics_type,info));
        __dec_obj42=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_271->type));
        /*b*/ come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_271->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_239->mBlock,info,come_value_271->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_271->c_value);
        }
        else {
            static int result_num_273=0;
            result_num_273++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value237=make_define_var(result_type2_268,((char*)(__right_value236=xsprintf("__result_obj__\%s",((char*)(__right_value235=int_to_string(result_num_273)))))),(_Bool)0,info))));
            (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value236 = come_decrement_ref_count(__right_value236, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value237 = come_decrement_ref_count(__right_value237, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_268->mClass->mName)>strlen("tuple")&&memcmp(result_type2_268->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_268,come_value_type_272,come_value_271,(_Bool)0,(_Bool)1,(_Bool)1,info);
                }
                if(                result_type2_268->mHeap) {
                    type_name_274=(char*)come_increment_ref_count(make_type_name_string(come_value_271->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    add_come_code(info,((char*)(__right_value240=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char*)(__right_value239=int_to_string(result_num_273)))))),type_name_274,come_value_271->c_value);
                    (__right_value239 = come_decrement_ref_count(__right_value239, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value240 = come_decrement_ref_count(__right_value240, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_274 = come_decrement_ref_count(type_name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value242=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value241=int_to_string(result_num_273)))))),come_value_271->c_value);
                    (__right_value241 = come_decrement_ref_count(__right_value241, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value244=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value243=int_to_string(result_num_273)))))),come_value_271->c_value);
                (__right_value243 = come_decrement_ref_count(__right_value243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value244 = come_decrement_ref_count(__right_value244, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_239->mBlock,info,come_value_271->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_276=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_279=list$1sVar$ph_begin((o2_saved_276));                    !list$1sVar$ph_end((o2_saved_276));                    it_279=list$1sVar$ph_next((o2_saved_276))                    ){
                        free_object(((struct sType*)(__right_value245=sType_clone(it_279->mType))),it_279->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value245,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_276,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __dec_obj43=info->match_it_var,
                    __if_result__0_275=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    /*b*/ come_call_finalizer3(__dec_obj43,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                /*c*/ come_call_finalizer3(__if_result__0_275,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value246=xsprintf("come_heap_final();\n"))));
                (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            result_type2_268->mHeap) {
                free_object(result_type2_268,((char*)(__right_value248=xsprintf("__result_obj__\%s",((char*)(__right_value247=int_to_string(result_num_273)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                (__right_value247 = come_decrement_ref_count(__right_value247, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value248 = come_decrement_ref_count(__right_value248, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value250=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value249=int_to_string(result_num_273)))))));
            (__right_value249 = come_decrement_ref_count(__right_value249, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(result_type_240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_268,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_271,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_type_272,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_fun_286=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_286->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_288=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_289=list$1sVar$ph_begin((o2_saved_288));                !list$1sVar$ph_end((o2_saved_288));                it_289=list$1sVar$ph_next((o2_saved_288))                ){
                    free_object(((struct sType*)(__right_value251=sType_clone(it_289->mType))),it_289->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    /*c*/ come_call_finalizer3(__right_value251,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_288,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj44=info->match_it_var,
                __if_result__1_287=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                /*b*/ come_call_finalizer3(__dec_obj44,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            /*c*/ come_call_finalizer3(__if_result__1_287,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value252=xsprintf("come_heap_final();\n"))));
            (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        (self->value_source = come_decrement_ref_count(self->value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__167;
void* __right_value192 = (void*)0;
struct sType* result_245;
void* __right_value193 = (void*)0;
struct sType* __dec_obj18;
void* __right_value194 = (void*)0;
struct sType* __dec_obj19;
void* __right_value202 = (void*)0;
struct list$1sType$ph* __dec_obj23;
void* __right_value203 = (void*)0;
struct sType* __dec_obj24;
void* __right_value204 = (void*)0;
struct sType* __dec_obj25;
void* __right_value206 = (void*)0;
struct sNode* __dec_obj26;
void* __right_value207 = (void*)0;
struct sNode* __dec_obj27;
void* __right_value208 = (void*)0;
char* __dec_obj28;
void* __right_value209 = (void*)0;
char* __dec_obj29;
void* __right_value210 = (void*)0;
char* __dec_obj30;
void* __right_value218 = (void*)0;
struct list$1sNode$ph* __dec_obj34;
void* __right_value219 = (void*)0;
char* __dec_obj35;
void* __right_value220 = (void*)0;
struct list$1sType$ph* __dec_obj36;
void* __right_value228 = (void*)0;
struct list$1char$ph* __dec_obj40;
void* __right_value229 = (void*)0;
struct sType* __dec_obj41;
struct sType* __result_obj__181;
    if(    self==(void*)0) {
        __result_obj__167 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__167,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__167;
    }
    result_245=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_245->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj18=result_245->mOriginalLoadVarType,
        result_245->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj19=result_245->mChannelType,
        result_245->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj23=result_245->mGenericsTypes,
        result_245->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj23,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj24=result_245->mNoSolvedGenericsType,
        result_245->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_245->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj25=result_245->mAnyOriginalType,
        result_245->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj26=result_245->mSizeNum,
        result_245->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj27=result_245->mAlignas,
        result_245->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj28=result_245->mTupleName,
        result_245->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj29=result_245->mAttribute,
        result_245->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_245->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_245->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_245->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_245->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_245->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_245->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_245->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_245->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_245->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_245->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_245->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_245->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_245->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_245->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_245->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_245->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_245->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_245->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_245->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_245->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_245->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_245->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_245->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_245->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj30=result_245->mAsmName,
        result_245->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_245->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_245->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_245->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj34=result_245->mArrayNum,
        result_245->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj34,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_245->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_245->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_245->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_245->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_245->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj35=result_245->mOriginalTypeName,
        result_245->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_245->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_245->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_245->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_245->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj36=result_245->mParamTypes,
        result_245->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj36,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj40=result_245->mParamNames,
        result_245->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj40,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj41=result_245->mResultType,
        result_245->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_245->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_245->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__181 = (struct sType*)come_increment_ref_count(result_245);
    /*c*/ come_call_finalizer3(result_245,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__181,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__181;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mChannelType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_241;
struct list_item$1sType$ph* prev_it_242;
    it_241=self->head;
    while(    it_241!=((void*)0)) {
        prev_it_242=it_241;
        it_241=it_241->next;
        /*c*/ come_call_finalizer3(prev_it_242,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_243;
struct list_item$1sNode$ph* prev_it_244;
    it_243=self->head;
    while(    it_243!=((void*)0)) {
        prev_it_244=it_243;
        it_243=it_243->next;
        /*c*/ come_call_finalizer3(prev_it_244,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__168;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct list$1sType$ph* result_246;
struct list_item$1sType$ph* it_247;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct list$1sType$ph* __result_obj__171;
    if(    self==((void*)0)) {
        __result_obj__168 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__168,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__168;
    }
    result_246=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1sType$ph*"))));
    it_247=self->head;
    while(    it_247!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_246,(struct sType*)come_increment_ref_count(sType_clone(it_247->item)));
        }
        else {
            list$1sType$ph_add(result_246,(struct sType*)come_increment_ref_count(sType_clone(it_247->item)));
        }
        it_247=it_247->next;
    }
    __result_obj__171 = (struct list$1sType$ph*)come_increment_ref_count(result_246);
    /*c*/ come_call_finalizer3(result_246,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__169;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__169 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value197 = (void*)0;
struct list_item$1sType$ph* litem_248;
struct sType* __dec_obj20;
void* __right_value198 = (void*)0;
struct list_item$1sType$ph* litem_249;
struct sType* __dec_obj21;
void* __right_value199 = (void*)0;
struct list_item$1sType$ph* litem_250;
struct sType* __dec_obj22;
struct list$1sType$ph* __result_obj__170;
    if(    self->len==0) {
        litem_248=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value197=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_248->prev=((void*)0);
        litem_248->next=((void*)0);
        __dec_obj20=litem_248->item,
        litem_248->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_248;
        self->head=litem_248;
    }
    else if(    self->len==1) {
        litem_249=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value198=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_249->prev=self->head;
        litem_249->next=((void*)0);
        __dec_obj21=litem_249->item,
        litem_249->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_249;
        self->head->next=litem_249;
    }
    else {
        litem_250=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value199=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_250->prev=self->tail;
        litem_250->next=((void*)0);
        __dec_obj22=litem_250->item,
        litem_250->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_250;
        self->tail=litem_250;
    }
    self->len++;
    __result_obj__170 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__170;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_251;
struct list_item$1sType$ph* prev_it_252;
    it_251=self->head;
    while(    it_251!=((void*)0)) {
        prev_it_252=it_251;
        it_251=it_251->next;
        /*c*/ come_call_finalizer3(prev_it_252,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__172;
void* __right_value205 = (void*)0;
struct sNode* result_253;
struct sNode* __result_obj__173;
    if(    self==(void*)0) {
        __result_obj__172 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__172) ? __result_obj__172 = come_decrement_ref_count(__result_obj__172, ((struct sNode*)__result_obj__172)->finalize, ((struct sNode*)__result_obj__172)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__172;
    }
    result_253=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_253->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_253->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_253->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_253->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_253->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_253->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_253->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_253->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_253->kind=self->kind;
    }
    __result_obj__173 = (struct sNode*)come_increment_ref_count(result_253);
    ((result_253) ? result_253 = come_decrement_ref_count(result_253, ((struct sNode*)result_253)->finalize, ((struct sNode*)result_253)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__173) ? __result_obj__173 = come_decrement_ref_count(__result_obj__173, ((struct sNode*)__result_obj__173)->finalize, ((struct sNode*)__result_obj__173)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__173;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__174;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct list$1sNode$ph* result_254;
struct list_item$1sNode$ph* it_255;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct list$1sNode$ph* __result_obj__177;
    if(    self==((void*)0)) {
        __result_obj__174 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__174,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__174;
    }
    result_254=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_255=self->head;
    while(    it_255!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_254,(struct sNode*)come_increment_ref_count(sNode_clone(it_255->item)));
        }
        else {
            list$1sNode$ph_add(result_254,(struct sNode*)come_increment_ref_count(sNode_clone(it_255->item)));
        }
        it_255=it_255->next;
    }
    __result_obj__177 = (struct list$1sNode$ph*)come_increment_ref_count(result_254);
    /*c*/ come_call_finalizer3(result_254,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__177,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__177;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__175;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__175 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__175,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value213 = (void*)0;
struct list_item$1sNode$ph* litem_256;
struct sNode* __dec_obj31;
void* __right_value214 = (void*)0;
struct list_item$1sNode$ph* litem_257;
struct sNode* __dec_obj32;
void* __right_value215 = (void*)0;
struct list_item$1sNode$ph* litem_258;
struct sNode* __dec_obj33;
struct list$1sNode$ph* __result_obj__176;
    if(    self->len==0) {
        litem_256=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value213=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_256->prev=((void*)0);
        litem_256->next=((void*)0);
        __dec_obj31=litem_256->item,
        litem_256->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_256;
        self->head=litem_256;
    }
    else if(    self->len==1) {
        litem_257=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value214=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_257->prev=self->head;
        litem_257->next=((void*)0);
        __dec_obj32=litem_257->item,
        litem_257->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_257;
        self->head->next=litem_257;
    }
    else {
        litem_258=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value215=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_258->prev=self->tail;
        litem_258->next=((void*)0);
        __dec_obj33=litem_258->item,
        litem_258->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_258;
        self->tail=litem_258;
    }
    self->len++;
    __result_obj__176 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__176;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_259;
struct list_item$1sNode$ph* prev_it_260;
    it_259=self->head;
    while(    it_259!=((void*)0)) {
        prev_it_260=it_259;
        it_259=it_259->next;
        /*c*/ come_call_finalizer3(prev_it_260,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__178;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct list$1char$ph* result_261;
struct list_item$1char$ph* it_262;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct list$1char$ph* __result_obj__180;
    if(    self==((void*)0)) {
        __result_obj__178 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__178;
    }
    result_261=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1char$ph*"))));
    it_262=self->head;
    while(    it_262!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_261,(char*)come_increment_ref_count((char*)come_memdup(it_262->item, "/usr/local/include/comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_261,(char*)come_increment_ref_count((char*)come_memdup(it_262->item, "/usr/local/include/comelang.h", 1032, "char*")));
        }
        it_262=it_262->next;
    }
    __result_obj__180 = (struct list$1char$ph*)come_increment_ref_count(result_261);
    /*c*/ come_call_finalizer3(result_261,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__180,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__180;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value223 = (void*)0;
struct list_item$1char$ph* litem_263;
char* __dec_obj37;
void* __right_value224 = (void*)0;
struct list_item$1char$ph* litem_264;
char* __dec_obj38;
void* __right_value225 = (void*)0;
struct list_item$1char$ph* litem_265;
char* __dec_obj39;
struct list$1char$ph* __result_obj__179;
    if(    self->len==0) {
        litem_263=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value223=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_263->prev=((void*)0);
        litem_263->next=((void*)0);
        __dec_obj37=litem_263->item,
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_263;
        self->head=litem_263;
    }
    else if(    self->len==1) {
        litem_264=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value224=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_264->prev=self->head;
        litem_264->next=((void*)0);
        __dec_obj38=litem_264->item,
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_264;
        self->head->next=litem_264;
    }
    else {
        litem_265=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value225=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_265->prev=self->tail;
        litem_265->next=((void*)0);
        __dec_obj39=litem_265->item,
        litem_265->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_265;
        self->tail=litem_265;
    }
    self->len++;
    __result_obj__179 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__179;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_266;
struct list_item$1char$ph* prev_it_267;
    it_266=self->head;
    while(    it_266!=((void*)0)) {
        prev_it_267=it_266;
        it_266=it_266->next;
        /*c*/ come_call_finalizer3(prev_it_267,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_277;
struct sVar* __result_obj__183;
struct sVar* __result_obj__184;
struct sVar* result_278;
struct sVar* __result_obj__185;
result_277 = (void*)0;
result_278 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_277,0,sizeof(struct sVar*));
        __result_obj__183 = result_277;
        return __result_obj__183;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__184 = self->it->item;
        return __result_obj__184;
    }
    memset(&result_278,0,sizeof(struct sVar*));
    __result_obj__185 = result_278;
    return __result_obj__185;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_280;
struct sVar* __result_obj__186;
struct sVar* __result_obj__187;
struct sVar* result_281;
struct sVar* __result_obj__188;
result_280 = (void*)0;
result_281 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_280,0,sizeof(struct sVar*));
        __result_obj__186 = result_280;
        return __result_obj__186;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__187 = self->it->item;
        return __result_obj__187;
    }
    memset(&result_281,0,sizeof(struct sVar*));
    __result_obj__188 = result_281;
    return __result_obj__188;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_282;
struct list_item$1sVar$ph* prev_it_283;
    it_282=self->head;
    while(    it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        /*c*/ come_call_finalizer3(prev_it_283,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_284;
struct list_item$1sVar$ph* prev_it_285;
    it_284=self->head;
    while(    it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        /*c*/ come_call_finalizer3(prev_it_285,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value253 = (void*)0;
char* __dec_obj45;
struct sOutputNode* __result_obj__189;
    ((struct sNodeBase*)(__right_value253=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value253,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj45=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__189 = (struct sOutputNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__189,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__189;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value254 = (void*)0;
char* __result_obj__190;
    __result_obj__190 = (char*)come_increment_ref_count(((char*)(__right_value254=__builtin_string("sOutputNode"))));
    (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__190;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        (self->contents = come_decrement_ref_count(self->contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info){
void* __right_value255 = (void*)0;
char* __dec_obj46;
struct list$1sNode$ph* __dec_obj47;
struct sInlineAssembler* __result_obj__191;
    ((struct sNodeBase*)(__right_value255=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value255,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj46=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj47=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    /*b*/ come_call_finalizer3(__dec_obj47,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__191 = (struct sInlineAssembler*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__191,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__191;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value256 = (void*)0;
char* __result_obj__192;
    __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value256=__builtin_string("sInlineAssembler"))));
    (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__192;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_290;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct CVALUE* come_value_291;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct buffer* buf_292;
char* p_293;
_Bool dquort_294;
int num_exp_295;
void* __right_value261 = (void*)0;
struct sNode* node_296;
_Bool Value_303;
_Bool __result_obj__197;
void* __right_value262 = (void*)0;
struct CVALUE* come_value_304;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
char* __dec_obj48;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__199;
    source_290=(char*)come_increment_ref_count(self->source);
    come_value_291=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 179, "struct CVALUE*"))));
    buf_292=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 181, "struct buffer*"))));
    p_293=source_290;
    while(    *p_293!=40) {
        buffer_append_char(buf_292,*p_293);
        p_293++;
    }
    if(    *p_293==40) {
        buffer_append_char(buf_292,*p_293);
        p_293++;
        while(        *p_293==32||*p_293==9||*p_293==10) {
            buffer_append_char(buf_292,*p_293);
            p_293++;
        }
    }
    dquort_294=(_Bool)0;
    num_exp_295=0;
    while(    *p_293) {
        if(        *p_293==34) {
            buffer_append_char(buf_292,*p_293);
            p_293++;
            dquort_294=!dquort_294;
        }
        else if(        dquort_294) {
            buffer_append_char(buf_292,*p_293);
            p_293++;
        }
        else if(        *p_293==40) {
            buffer_append_char(buf_292,*p_293);
            p_293++;
            node_296=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(self->exps,num_exp_295++));
            Value_303=node_compile(node_296,info);
            if(            !Value_303) {
                __result_obj__197 = (_Bool)0;
                ((node_296) ? node_296 = come_decrement_ref_count(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (source_290 = come_decrement_ref_count(source_290, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_291,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_292,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__197;
            }
            else {
            }
            come_value_304=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_292,come_value_304->c_value);
            if(            *p_293==41) {
                buffer_append_char(buf_292,*p_293);
                p_293++;
            }
            ((node_296) ? node_296 = come_decrement_ref_count(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_304,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            buffer_append_char(buf_292,*p_293);
            p_293++;
        }
    }
    __dec_obj48=come_value_291->c_value,
    come_value_291->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value264=buffer_to_string(buf_292)))));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value264 = come_decrement_ref_count(__right_value264, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj49=come_value_291->type,
    come_value_291->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 238, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_291->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_291));
    add_come_last_code(info,"%s",come_value_291->c_value);
    __result_obj__199 = (_Bool)1;
    (source_290 = come_decrement_ref_count(source_290, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_291,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_292,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        (self->source = come_decrement_ref_count(self->source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->exps,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_297;
int i_298;
struct sNode* __result_obj__193;
struct sNode* default_value_299;
struct sNode* __result_obj__194;
default_value_299 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_297=self->head;
    i_298=0;
    while(    it_297!=((void*)0)) {
        if(        position==i_298) {
            __result_obj__193 = (struct sNode*)come_increment_ref_count(it_297->item);
            ((__result_obj__193) ? __result_obj__193 = come_decrement_ref_count(__result_obj__193, ((struct sNode*)__result_obj__193)->finalize, ((struct sNode*)__result_obj__193)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__193;
        }
        it_297=it_297->next;
        i_298++;
    }
    memset(&default_value_299,0,sizeof(struct sNode*));
    __result_obj__194 = (struct sNode*)come_increment_ref_count(default_value_299);
    ((default_value_299) ? default_value_299 = come_decrement_ref_count(default_value_299, ((struct sNode*)default_value_299)->finalize, ((struct sNode*)default_value_299)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__194) ? __result_obj__194 = come_decrement_ref_count(__result_obj__194, ((struct sNode*)__result_obj__194)->finalize, ((struct sNode*)__result_obj__194)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__194;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_300;
int i_301;
struct sNode* __result_obj__195;
struct sNode* default_value_302;
struct sNode* __result_obj__196;
default_value_302 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_300=self->head;
    i_301=0;
    while(    it_300!=((void*)0)) {
        if(        position==i_301) {
            __result_obj__195 = (struct sNode*)come_increment_ref_count(it_300->item);
            ((__result_obj__195) ? __result_obj__195 = come_decrement_ref_count(__result_obj__195, ((struct sNode*)__result_obj__195)->finalize, ((struct sNode*)__result_obj__195)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__195;
        }
        it_300=it_300->next;
        i_301++;
    }
    memset(&default_value_302,0,sizeof(struct sNode*));
    __result_obj__196 = (struct sNode*)come_increment_ref_count(default_value_302);
    ((default_value_302) ? default_value_302 = come_decrement_ref_count(default_value_302, ((struct sNode*)default_value_302)->finalize, ((struct sNode*)default_value_302)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__196) ? __result_obj__196 = come_decrement_ref_count(__result_obj__196, ((struct sNode*)__result_obj__196)->finalize, ((struct sNode*)__result_obj__196)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__196;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value269 = (void*)0;
struct list_item$1CVALUE$ph* litem_305;
struct CVALUE* __dec_obj50;
void* __right_value270 = (void*)0;
struct list_item$1CVALUE$ph* litem_306;
struct CVALUE* __dec_obj51;
void* __right_value271 = (void*)0;
struct list_item$1CVALUE$ph* litem_307;
struct CVALUE* __dec_obj52;
struct list$1CVALUE$ph* __result_obj__198;
    if(    self->len==0) {
        litem_305=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value269=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_305->prev=((void*)0);
        litem_305->next=((void*)0);
        __dec_obj50=litem_305->item,
        litem_305->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_305;
        self->head=litem_305;
    }
    else if(    self->len==1) {
        litem_306=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value270=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_306->prev=self->head;
        litem_306->next=((void*)0);
        __dec_obj51=litem_306->item,
        litem_306->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_306;
        self->head->next=litem_306;
    }
    else {
        litem_307=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value271=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_307->prev=self->tail;
        litem_307->next=((void*)0);
        __dec_obj52=litem_307->item,
        litem_307->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_307;
        self->tail=litem_307;
    }
    self->len++;
    __result_obj__198 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__198;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value272 = (void*)0;
struct sCurrentNode2* __result_obj__200;
    ((struct sNodeBase*)(__right_value272=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value272,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__200 = (struct sCurrentNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__200,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__200;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value273 = (void*)0;
char* __result_obj__201;
    __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value273=__builtin_string(self->sname))));
    (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__201;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __right_value274 = (void*)0;
char* __result_obj__202;
    __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value274=__builtin_string("sCurrentNode"))));
    (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__202;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value275 = (void*)0;
char* class_name_308;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct sClass* current_stack_309;
struct sVarTable* vtable_310;
struct map$2char$phsVar$ph* o2_saved_311;
char* it_314;
char* key_317;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sVar* value_318;
void* __right_value281 = (void*)0;
struct sType* type2_325;
void* __right_value282 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct tuple2$2char$phsType$ph* item_326;
void* __right_value288 = (void*)0;
struct sType* type3_337;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct tuple2$2char$phsType$ph* item2_340;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_389;
char* it_390;
char* key_391;
void* __right_value302 = (void*)0;
struct sVar* value_392;
void* __right_value303 = (void*)0;
struct sType* type2_393;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct tuple2$2char$phsType$ph* item_394;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct CVALUE* come_value_395;
void* __right_value308 = (void*)0;
char* __dec_obj60;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* __dec_obj61;
_Bool __result_obj__243;
    info->current_stack_num++;
    class_name_308=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_309=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "./common.h", 437, "struct sClass*")),(char*)come_increment_ref_count(class_name_308),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_310=info->lv_table;
    while(    vtable_310) {
        for(        o2_saved_311=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_310->mVars)),it_314=map$2char$phsVar$ph_begin((o2_saved_311));        !map$2char$phsVar$ph_end((o2_saved_311));        it_314=map$2char$phsVar$ph_next((o2_saved_311))        ){
            key_317=it_314;
            value_318=((struct sVar*)(__right_value280=map$2char$phsVar$ph_operator_load_element(vtable_310->mVars,((char*)(__right_value279=__builtin_string(key_317))))));
            (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value280,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_325=(struct sType*)come_increment_ref_count(sType_clone(value_318->mType));
            type2_325->mPointerNum++;
            item_326=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 450, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_318->mCValueName)),(struct sType*)come_increment_ref_count(type2_325)));
            if(            value_318->mCValueName!=((void*)0)) {
                if(                strcmp(value_318->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_318->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_318->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_318->mType->mClass->mName,"va_list")||string_operator_equals(value_318->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph_length(type2_325->mArrayNum)==1) {
                    type3_337=(struct sType*)come_increment_ref_count(sType_clone(type2_325));
                    list$1sNode$ph_reset(type3_337->mArrayNum);
                    type3_337->mPointerNum=1;
                    type3_337->mOriginIsArray=(_Bool)1;
                    item2_340=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 470, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_318->mCValueName)),(struct sType*)come_increment_ref_count(type3_337)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_309->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_340)));
                    value_318->mType->mOriginIsArray=(_Bool)1;
                    /*c*/ come_call_finalizer3(type3_337,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(item2_340,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_309->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item_326)));
                }
            }
            /*c*/ come_call_finalizer3(type2_325,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_326,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_311,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_310=vtable_310->mParent;
    }
    output_struct(current_stack_309,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_308),(struct sClass*)come_increment_ref_count(current_stack_309));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_308,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_308);
    vtable_310=info->lv_table;
    while(    vtable_310) {
        for(        o2_saved_389=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_310->mVars)),it_390=map$2char$phsVar$ph_begin((o2_saved_389));        !map$2char$phsVar$ph_end((o2_saved_389));        it_390=map$2char$phsVar$ph_next((o2_saved_389))        ){
            key_391=it_390;
            value_392=((struct sVar*)(__right_value302=map$2char$phsVar$ph_operator_load_element(vtable_310->mVars,key_391)));
            /*c*/ come_call_finalizer3(__right_value302,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_393=(struct sType*)come_increment_ref_count(sType_clone(value_392->mType));
            item_394=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 499, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_392->mCValueName),(struct sType*)come_increment_ref_count(type2_393)));
            if(            value_392->mCValueName!=((void*)0)) {
                if(                strcmp(value_392->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_392->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_392->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_392->mType->mClass->mName,"va_list")||string_operator_equals(value_392->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(value_392->mFunName,info->come_fun->mName)) {
                        if(                        string_operator_equals(type2_393->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_392->mCValueName,value_392->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_392->mCValueName,value_392->mCValueName);
                        }
                    }
                    else {
                        if(                        string_operator_equals(type2_393->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_392->mCValueName,value_392->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_392->mCValueName,value_392->mCValueName);
                        }
                    }
                }
            }
            /*c*/ come_call_finalizer3(type2_393,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_394,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_389,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_310=vtable_310->mParent;
    }
    come_value_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "./common.h", 538, "struct CVALUE*"))));
    __dec_obj60=come_value_395->c_value,
    come_value_395->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj61=come_value_395->type,
    come_value_395->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "./common.h", 541, "struct sType*")),(char*)come_increment_ref_count(class_name_308),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_395->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_395->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_395));
    __result_obj__243 = (_Bool)1;
    (class_name_308 = come_decrement_ref_count(class_name_308, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(current_stack_309,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_395,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__243;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_312;
char* __result_obj__203;
char* __result_obj__204;
char* result_313;
char* __result_obj__205;
result_312 = (void*)0;
result_313 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_312,0,sizeof(char*));
        __result_obj__203 = result_312;
        return __result_obj__203;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__204 = self->key_list->it->item;
        return __result_obj__204;
    }
    memset(&result_313,0,sizeof(char*));
    __result_obj__205 = result_313;
    return __result_obj__205;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_315;
char* __result_obj__206;
char* __result_obj__207;
char* result_316;
char* __result_obj__208;
result_315 = (void*)0;
result_316 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_315,0,sizeof(char*));
        __result_obj__206 = result_315;
        return __result_obj__206;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__207 = self->key_list->it->item;
        return __result_obj__207;
    }
    memset(&result_316,0,sizeof(char*));
    __result_obj__208 = result_316;
    return __result_obj__208;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_319;
unsigned int hash_320;
unsigned int it_321;
struct sVar* __result_obj__209;
struct sVar* __result_obj__210;
struct sVar* __result_obj__211;
struct sVar* __result_obj__212;
default_value_319 = (void*)0;
    memset(&default_value_319,0,sizeof(struct sVar*));
    hash_320=string_get_hash_key(((char*)key))%self->size;
    it_321=hash_320;
    while(    (_Bool)1) {
        if(        self->item_existance[it_321]) {
            if(            string_equals(self->keys[it_321],key)) {
                __result_obj__209 = (struct sVar*)come_increment_ref_count(self->items[it_321]);
                /*c*/ come_call_finalizer3(default_value_319,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__209,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__209;
            }
            it_321++;
            if(            it_321>=self->size) {
                it_321=0;
            }
            else if(            it_321==hash_320) {
                __result_obj__210 = (struct sVar*)come_increment_ref_count(default_value_319);
                /*c*/ come_call_finalizer3(default_value_319,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__210,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__210;
            }
        }
        else {
            __result_obj__211 = (struct sVar*)come_increment_ref_count(default_value_319);
            /*c*/ come_call_finalizer3(default_value_319,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__211,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__211;
        }
    }
    __result_obj__212 = (struct sVar*)come_increment_ref_count(default_value_319);
    /*c*/ come_call_finalizer3(default_value_319,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__212,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__212;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_322;
unsigned int hash_323;
unsigned int it_324;
struct sVar* __result_obj__213;
struct sVar* __result_obj__214;
struct sVar* __result_obj__215;
struct sVar* __result_obj__216;
default_value_322 = (void*)0;
    memset(&default_value_322,0,sizeof(struct sVar*));
    hash_323=string_get_hash_key(((char*)key))%self->size;
    it_324=hash_323;
    while(    (_Bool)1) {
        if(        self->item_existance[it_324]) {
            if(            string_equals(self->keys[it_324],key)) {
                __result_obj__213 = (struct sVar*)come_increment_ref_count(self->items[it_324]);
                /*c*/ come_call_finalizer3(default_value_322,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__213,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__213;
            }
            it_324++;
            if(            it_324>=self->size) {
                it_324=0;
            }
            else if(            it_324==hash_323) {
                __result_obj__214 = (struct sVar*)come_increment_ref_count(default_value_322);
                /*c*/ come_call_finalizer3(default_value_322,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__214,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__214;
            }
        }
        else {
            __result_obj__215 = (struct sVar*)come_increment_ref_count(default_value_322);
            /*c*/ come_call_finalizer3(default_value_322,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__215,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__215;
        }
    }
    __result_obj__216 = (struct sVar*)come_increment_ref_count(default_value_322);
    /*c*/ come_call_finalizer3(default_value_322,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__216,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__217;
void* __right_value283 = (void*)0;
struct tuple2$2char$phsType$ph* result_327;
void* __right_value284 = (void*)0;
char* __dec_obj53;
void* __right_value285 = (void*)0;
struct sType* __dec_obj54;
struct tuple2$2char$phsType$ph* __result_obj__218;
    if(    self==(void*)0) {
        __result_obj__217 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__217,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__217;
    }
    result_327=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj53=result_327->v1,
        result_327->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj54=result_327->v2,
        result_327->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__218 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_327);
    /*c*/ come_call_finalizer3(result_327,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__218,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_328;
    result_328=0;
    result_328+=int_get_hash_key(((int)self->v1));
    result_328+=int_get_hash_key(((int)self->v2));
    return result_328;
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
    if(    !list$1sType$ph_equals(left->mGenericsTypes,right->mGenericsTypes)) {
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
    if(    !bool_equals(left->mDefferRightValue,right->mDefferRightValue)) {
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
    if(    !list$1sNode$ph_equals(left->mArrayNum,right->mArrayNum)) {
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
    if(    !list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExceptionGenericsType,right->mExceptionGenericsType)) {
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
    if(    !list$1tuple2$2char$phsType$ph$ph_equals(left->mFields,right->mFields)) {
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

static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_329;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_330;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_329=left->head;
    it2_330=right->head;
    while(    it_329!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_329->item,it2_330->item)) {
            return (_Bool)0;
        }
        it_329=it_329->next;
        it2_330=it2_330->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_331;
struct list_item$1sType$ph* it2_332;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_331=left->head;
    it2_332=right->head;
    while(    it_331!=((void*)0)) {
        if(        !sType_equals(it_331->item,it2_332->item)) {
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

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_333;
struct list_item$1sNode$ph* it2_334;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_333=left->head;
    it2_334=right->head;
    while(    it_333!=((void*)0)) {
        if(        !sNode_equals(it_333->item,it2_334->item)) {
            return (_Bool)0;
        }
        it_333=it_333->next;
        it2_334=it2_334->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_335;
struct list_item$1char$ph* it2_336;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_335=left->head;
    it2_336=right->head;
    while(    it_335!=((void*)0)) {
        if(        !string_equals(it_335->item,it2_336->item)) {
            return (_Bool)0;
        }
        it_335=it_335->next;
        it2_336=it2_336->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj55;
struct sType* __dec_obj56;
struct tuple2$2char$phsType$ph* __result_obj__219;
    __dec_obj55=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj56=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__219 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__219,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__219;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_338;
struct list_item$1sNode$ph* prev_it_339;
struct list$1sNode$ph* __result_obj__220;
    it_338=self->head;
    while(    it_338!=((void*)0)) {
        prev_it_339=it_338;
        it_338=it_338->next;
        /*c*/ come_call_finalizer3(prev_it_339,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__220 = self;
    return __result_obj__220;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value292 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_341;
struct tuple2$2char$phsType$ph* __dec_obj57;
void* __right_value293 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_342;
struct tuple2$2char$phsType$ph* __dec_obj58;
void* __right_value294 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_343;
struct tuple2$2char$phsType$ph* __dec_obj59;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__221;
    if(    self->len==0) {
        litem_341=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value292=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_341->prev=((void*)0);
        litem_341->next=((void*)0);
        __dec_obj57=litem_341->item,
        litem_341->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj57,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_341;
        self->head=litem_341;
    }
    else if(    self->len==1) {
        litem_342=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value293=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_342->prev=self->head;
        litem_342->next=((void*)0);
        __dec_obj58=litem_342->item,
        litem_342->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj58,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_342;
        self->head->next=litem_342;
    }
    else {
        litem_343=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value294=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_343->prev=self->tail;
        litem_343->next=((void*)0);
        __dec_obj59=litem_343->item,
        litem_343->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj59,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_343;
        self->tail=litem_343;
    }
    self->len++;
    __result_obj__221 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_344;
int i_345;
    for(    i_344=0;    i_344<self->size;    i_344++    ){
        if(        self->item_existance[i_344]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_344],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_345=0;    i_345<self->size;    i_345++    ){
        if(        self->item_existance[i_345]) {
            if(            1) {
                (self->keys[i_345] = come_decrement_ref_count(self->keys[i_345], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_365;
unsigned int it_366;
_Bool same_key_exist_383;
char* it2_386;
struct map$2char$phsClass$ph* __result_obj__242;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_365=string_get_hash_key(((char*)key))%self->size;
    it_366=hash_365;
    while(    (_Bool)1) {
        if(        self->item_existance[it_366]) {
            if(            string_equals(self->keys[it_366],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_366]);
                    (self->keys[it_366] = come_decrement_ref_count(self->keys[it_366], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_366]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_366]);
                    self->keys[it_366]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_366],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_366]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_366]=item;
                }
                break;
            }
            it_366++;
            if(            it_366>=self->size) {
                it_366=0;
            }
            else if(            it_366==hash_365) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_366]=(_Bool)1;
            if(            1) {
                self->keys[it_366]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_366]=key;
            }
            if(            1) {
                self->items[it_366]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_366]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_383=(_Bool)0;
    for(    it2_386=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_386=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_386,key)) {
            same_key_exist_383=(_Bool)1;
        }
    }
    if(    !same_key_exist_383) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__242 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__242;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_346;
void* __right_value297 = (void*)0;
char** keys_347;
void* __right_value298 = (void*)0;
struct sClass** items_348;
void* __right_value299 = (void*)0;
_Bool* item_existance_349;
int len_350;
char* it_353;
struct sClass* default_value_356;
void* __right_value300 = (void*)0;
struct sClass* it2_357;
unsigned int hash_362;
int n_363;
struct sClass* default_value_364;
void* __right_value301 = (void*)0;
default_value_356 = (void*)0;
default_value_364 = (void*)0;
    size_346=self->size*10;
    keys_347=(char**)come_increment_ref_count(((char**)(__right_value297=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_346)), "/usr/local/include/comelang.h", 2167, "char**"))));
    items_348=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value298=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_346)), "/usr/local/include/comelang.h", 2168, "struct sClass**"))));
    item_existance_349=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value299=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_346)), "/usr/local/include/comelang.h", 2169, "_Bool*"))));
    len_350=0;
    for(    it_353=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_353=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_356,0,sizeof(struct sClass*));
        it2_357=((struct sClass*)(__right_value300=map$2char$phsClass$ph_at(self,it_353,(struct sClass*)come_increment_ref_count(default_value_356))));
        /*c*/ come_call_finalizer3(__right_value300,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_362=string_get_hash_key(((char*)it_353))%size_346;
        n_363=hash_362;
        while(        (_Bool)1) {
            if(            item_existance_349[n_363]) {
                n_363++;
                if(                n_363>=size_346) {
                    n_363=0;
                }
                else if(                n_363==hash_362) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_349[n_363]=(_Bool)1;
                keys_347[n_363]=it_353;
                items_348[n_363]=((struct sClass*)(__right_value301=map$2char$phsClass$ph_at(self,it_353,(struct sClass*)come_increment_ref_count(default_value_364))));
                /*c*/ come_call_finalizer3(__right_value301,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_350++;
                /*c*/ come_call_finalizer3(default_value_364,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_364,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_356,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_347;
    self->items=items_348;
    self->item_existance=item_existance_349;
    self->size=size_346;
    self->len=len_350;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_351;
char* __result_obj__222;
char* __result_obj__223;
char* result_352;
char* __result_obj__224;
result_351 = (void*)0;
result_352 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_351,0,sizeof(char*));
        __result_obj__222 = result_351;
        return __result_obj__222;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__223 = self->key_list->it->item;
        return __result_obj__223;
    }
    memset(&result_352,0,sizeof(char*));
    __result_obj__224 = result_352;
    return __result_obj__224;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_354;
char* __result_obj__225;
char* __result_obj__226;
char* result_355;
char* __result_obj__227;
result_354 = (void*)0;
result_355 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_354,0,sizeof(char*));
        __result_obj__225 = result_354;
        return __result_obj__225;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__226 = self->key_list->it->item;
        return __result_obj__226;
    }
    memset(&result_355,0,sizeof(char*));
    __result_obj__227 = result_355;
    return __result_obj__227;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_358;
unsigned int it_359;
struct sClass* __result_obj__228;
struct sClass* __result_obj__229;
struct sClass* __result_obj__230;
struct sClass* __result_obj__231;
    hash_358=string_get_hash_key(((char*)key))%self->size;
    it_359=hash_358;
    while(    (_Bool)1) {
        if(        self->item_existance[it_359]) {
            if(            string_equals(self->keys[it_359],key)) {
                __result_obj__228 = (struct sClass*)come_increment_ref_count(self->items[it_359]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__228,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__228;
            }
            it_359++;
            if(            it_359>=self->size) {
                it_359=0;
            }
            else if(            it_359==hash_358) {
                __result_obj__229 = (struct sClass*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__229,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__229;
            }
        }
        else {
            __result_obj__230 = (struct sClass*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__230,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__230;
        }
    }
    __result_obj__231 = (struct sClass*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__231,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__231;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_360;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_361;
    it_360=self->head;
    while(    it_360!=((void*)0)) {
        prev_it_361=it_360;
        it_360=it_360->next;
        /*c*/ come_call_finalizer3(prev_it_361,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_367;
struct list_item$1char$ph* it_368;
struct list$1char$ph* __result_obj__235;
    it2_367=0;
    it_368=self->head;
    while(    it_368!=((void*)0)) {
        if(        string_equals(it_368->item,item)) {
            list$1char$ph_delete(self,it2_367,it2_367+1);
            break;
        }
        it2_367++;
        it_368=it_368->next;
    }
    __result_obj__235 = self;
    return __result_obj__235;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_369;
struct list$1char$ph* __result_obj__232;
struct list_item$1char$ph* it_372;
int i_373;
struct list_item$1char$ph* prev_it_374;
struct list_item$1char$ph* it_375;
int i_376;
struct list_item$1char$ph* prev_it_377;
struct list_item$1char$ph* it_378;
struct list_item$1char$ph* head_prev_it_379;
struct list_item$1char$ph* tail_it_380;
int i_381;
struct list_item$1char$ph* prev_it_382;
struct list$1char$ph* __result_obj__234;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_369=tail;
        tail=head;
        head=tmp_369;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__232 = self;
        return __result_obj__232;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_372=self->head;
        i_373=0;
        while(        it_372!=((void*)0)) {
            if(            i_373<tail) {
                prev_it_374=it_372;
                it_372=it_372->next;
                i_373++;
                /*c*/ come_call_finalizer3(prev_it_374,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_373==tail) {
                self->head=it_372;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_372=it_372->next;
                i_373++;
            }
        }
    }
    else if(    tail==self->len) {
        it_375=self->head;
        i_376=0;
        while(        it_375!=((void*)0)) {
            if(            i_376==head) {
                self->tail=it_375->prev;
                self->tail->next=((void*)0);
            }
            if(            i_376>=head) {
                prev_it_377=it_375;
                it_375=it_375->next;
                i_376++;
                /*c*/ come_call_finalizer3(prev_it_377,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_375=it_375->next;
                i_376++;
            }
        }
    }
    else {
        it_378=self->head;
        head_prev_it_379=((void*)0);
        tail_it_380=((void*)0);
        i_381=0;
        while(        it_378!=((void*)0)) {
            if(            i_381==head) {
                head_prev_it_379=it_378->prev;
            }
            if(            i_381==tail) {
                tail_it_380=it_378;
            }
            if(            i_381>=head&&i_381<tail) {
                prev_it_382=it_378;
                it_378=it_378->next;
                i_381++;
                /*c*/ come_call_finalizer3(prev_it_382,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_378=it_378->next;
                i_381++;
            }
        }
        if(        head_prev_it_379!=((void*)0)) {
            head_prev_it_379->next=tail_it_380;
        }
        if(        tail_it_380!=((void*)0)) {
            tail_it_380->prev=head_prev_it_379;
        }
    }
    __result_obj__234 = self;
    return __result_obj__234;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_370;
struct list_item$1char$ph* prev_it_371;
struct list$1char$ph* __result_obj__233;
    it_370=self->head;
    while(    it_370!=((void*)0)) {
        prev_it_371=it_370;
        it_370=it_370->next;
        /*c*/ come_call_finalizer3(prev_it_371,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__233 = self;
    return __result_obj__233;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_384;
char* __result_obj__236;
char* __result_obj__237;
char* result_385;
char* __result_obj__238;
result_384 = (void*)0;
result_385 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_384,0,sizeof(char*));
        __result_obj__236 = result_384;
        return __result_obj__236;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__237 = self->it->item;
        return __result_obj__237;
    }
    memset(&result_385,0,sizeof(char*));
    __result_obj__238 = result_385;
    return __result_obj__238;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_387;
char* __result_obj__239;
char* __result_obj__240;
char* result_388;
char* __result_obj__241;
result_387 = (void*)0;
result_388 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_387,0,sizeof(char*));
        __result_obj__239 = result_387;
        return __result_obj__239;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__240 = self->it->item;
        return __result_obj__240;
    }
    memset(&result_388,0,sizeof(char*));
    __result_obj__241 = result_388;
    return __result_obj__241;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value311 = (void*)0;
struct sLineNode* __result_obj__244;
    ((struct sNodeBase*)(__right_value311=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value311,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__244 = (struct sLineNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__244,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__244;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value312 = (void*)0;
char* __result_obj__245;
    __result_obj__245 = (char*)come_increment_ref_count(((char*)(__right_value312=__builtin_string("sLineNode"))));
    (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__245 = come_decrement_ref_count(__result_obj__245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__245;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct CVALUE* come_value_396;
void* __right_value315 = (void*)0;
char* __dec_obj62;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sType* __dec_obj63;
_Bool __result_obj__246;
    come_value_396=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 268, "struct CVALUE*"))));
    __dec_obj62=come_value_396->c_value,
    come_value_396->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj63=come_value_396->type,
    come_value_396->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 271, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_396->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_396));
    add_come_last_code(info,"%s",come_value_396->c_value);
    __result_obj__246 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_396,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value319 = (void*)0;
struct sSNameNode* __result_obj__247;
    ((struct sNodeBase*)(__right_value319=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value319,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__247 = (struct sSNameNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__247,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__247;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value320 = (void*)0;
char* __result_obj__248;
    __result_obj__248 = (char*)come_increment_ref_count(((char*)(__right_value320=__builtin_string("sSNameNode"))));
    (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__248;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct CVALUE* come_value_397;
void* __right_value323 = (void*)0;
char* __dec_obj64;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct sType* __dec_obj65;
_Bool __result_obj__249;
    come_value_397=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 296, "struct CVALUE*"))));
    __dec_obj64=come_value_397->c_value,
    come_value_397->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj65=come_value_397->type,
    come_value_397->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 299, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_397->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_397));
    add_come_last_code(info,"%s",come_value_397->c_value);
    __result_obj__249 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_397,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value327 = (void*)0;
struct sFuncNode* __result_obj__250;
    ((struct sNodeBase*)(__right_value327=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value327,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__250 = (struct sFuncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__250,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__250;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value328 = (void*)0;
char* __result_obj__251;
    __result_obj__251 = (char*)come_increment_ref_count(((char*)(__right_value328=__builtin_string("sFuncNode"))));
    (__right_value328 = come_decrement_ref_count(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__251 = come_decrement_ref_count(__result_obj__251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__251;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct CVALUE* come_value_398;
void* __right_value331 = (void*)0;
char* __dec_obj66;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sType* __dec_obj67;
_Bool __result_obj__252;
    come_value_398=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 324, "struct CVALUE*"))));
    __dec_obj66=come_value_398->c_value,
    come_value_398->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj67=come_value_398->type,
    come_value_398->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 327, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_398->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_398));
    add_come_last_code(info,"%s",come_value_398->c_value);
    __result_obj__252 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_398,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value335 = (void*)0;
struct sWildCard* __result_obj__253;
    ((struct sNodeBase*)(__right_value335=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value335,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__253 = (struct sWildCard*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__253,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__253;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value336 = (void*)0;
char* __result_obj__254;
    __result_obj__254 = (char*)come_increment_ref_count(((char*)(__right_value336=__builtin_string("sWildCard"))));
    (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__254 = come_decrement_ref_count(__result_obj__254, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__254;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sNode* value_node_399;
_Bool Value_400;
_Bool __result_obj__255;
_Bool __result_obj__256;
    value_node_399=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value337=xsprintf("Value"))),info));
    (__right_value337 = come_decrement_ref_count(__right_value337, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    Value_400=node_compile(value_node_399,info);
    if(    !Value_400) {
        __result_obj__255 = (_Bool)0;
        ((value_node_399) ? value_node_399 = come_decrement_ref_count(value_node_399, ((struct sNode*)value_node_399)->finalize, ((struct sNode*)value_node_399)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__255;
    }
    else {
    }
    __result_obj__256 = (_Bool)1;
    ((value_node_399) ? value_node_399 = come_decrement_ref_count(value_node_399, ((struct sNode*)value_node_399)->finalize, ((struct sNode*)value_node_399)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__256;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value339 = (void*)0;
struct sCallerFuncNode* __result_obj__257;
    ((struct sNodeBase*)(__right_value339=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value339,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__257 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__257,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value340 = (void*)0;
char* __result_obj__258;
    __result_obj__258 = (char*)come_increment_ref_count(((char*)(__right_value340=__builtin_string("sCallerFuncNode"))));
    (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__258 = come_decrement_ref_count(__result_obj__258, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__258;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct CVALUE* come_value_401;
void* __right_value343 = (void*)0;
char* __dec_obj68;
void* __right_value344 = (void*)0;
char* __dec_obj69;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* __dec_obj70;
_Bool __result_obj__259;
    come_value_401=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 376, "struct CVALUE*"))));
    if(    info->caller_fun) {
        __dec_obj68=come_value_401->c_value,
        come_value_401->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj69=come_value_401->c_value,
        come_value_401->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj70=come_value_401->type,
    come_value_401->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 384, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj70,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_401->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_401));
    add_come_last_code(info,"%s",come_value_401->c_value);
    __result_obj__259 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_401,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value348 = (void*)0;
struct sCallerLineNode* __result_obj__260;
    ((struct sNodeBase*)(__right_value348=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value348,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__260 = (struct sCallerLineNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__260,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct CVALUE* come_value_402;
void* __right_value351 = (void*)0;
char* __dec_obj71;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sType* __dec_obj72;
_Bool __result_obj__261;
    come_value_402=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 405, "struct CVALUE*"))));
    __dec_obj71=come_value_402->c_value,
    come_value_402->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj72=come_value_402->type,
    come_value_402->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 408, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj72,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_402->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_402));
    add_come_last_code(info,"%s",come_value_402->c_value);
    __result_obj__261 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_402,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value355 = (void*)0;
char* __result_obj__262;
    __result_obj__262 = (char*)come_increment_ref_count(((char*)(__right_value355=__builtin_string("sCallerLineNode"))));
    (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__262 = come_decrement_ref_count(__result_obj__262, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__262;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value356 = (void*)0;
struct sCallerSNameNode* __result_obj__263;
    ((struct sNodeBase*)(__right_value356=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value356,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__263 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct CVALUE* come_value_403;
void* __right_value359 = (void*)0;
char* __dec_obj73;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* __dec_obj74;
_Bool __result_obj__264;
    come_value_403=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 433, "struct CVALUE*"))));
    __dec_obj73=come_value_403->c_value,
    come_value_403->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj74=come_value_403->type,
    come_value_403->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 436, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_403->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_403));
    add_come_last_code(info,"%s",come_value_403->c_value);
    __result_obj__264 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_403,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__264;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value363 = (void*)0;
char* __result_obj__265;
    __result_obj__265 = (char*)come_increment_ref_count(((char*)(__right_value363=__builtin_string("sCallerSNameNode"))));
    (__right_value363 = come_decrement_ref_count(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__265 = come_decrement_ref_count(__result_obj__265, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__265;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
char* __dec_obj75;
void* __right_value376 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj81;
struct list$1sType$ph* __dec_obj82;
struct buffer* __dec_obj83;
struct sFunCallNode* __result_obj__272;
    ((struct sNodeBase*)(__right_value364=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value364,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj75=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj81=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj81,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->guard_break=guard_break;
    __dec_obj82=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj82,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj83=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    /*b*/ come_call_finalizer3(__dec_obj83,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__272 = (struct sFunCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__272,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__272;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value377 = (void*)0;
char* __result_obj__273;
    __result_obj__273 = (char*)come_increment_ref_count(((char*)(__right_value377=__builtin_string("sFunCallNode"))));
    (__right_value377 = come_decrement_ref_count(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__273 = come_decrement_ref_count(__result_obj__273, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__273;
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
char* fun_name_414;
struct list$1tuple2$2char$phsNode$ph$ph* params_415;
struct buffer* method_block_416;
int method_block_sline_417;
struct sVar* var__418;
struct sType* lambda_type_419;
void* __right_value378 = (void*)0;
struct sType* result_type_420;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1CVALUE$ph* come_params_421;
int i_424;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_425;
struct tuple2$2char$phsNode$ph* it_428;
struct tuple2$2char$phsNode$ph* multiple_assign_var1 = (void*)0;
char* label_431=0;
struct sNode* node_432=0;
_Bool Value_433;
_Bool __result_obj__281;
void* __right_value381 = (void*)0;
struct CVALUE* come_value_434;
void* __right_value382 = (void*)0;
struct sType* __dec_obj84;
void* __right_value383 = (void*)0;
_Bool _if_conditional1;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
_Bool _if_conditional2;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct buffer* buf_441;
int j_442;
struct list$1CVALUE$ph* o2_saved_443;
struct CVALUE* it_446;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct CVALUE* come_value_449;
void* __right_value394 = (void*)0;
char* __dec_obj85;
void* __right_value395 = (void*)0;
struct sType* __dec_obj86;
_Bool __result_obj__292;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sGenericsFun* generics_fun_450;
_Bool method_generics_453;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1sType$ph* method_generics_types_454;
void* __right_value400 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_455=0;
struct sGenericsFun* gfun_456=0;
char* generics_fun_name_457;
void* __right_value401 = (void*)0;
struct sFun* fun_458;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct list$1CVALUE$ph* come_params_461;
void* __right_value404 = (void*)0;
struct sFun* fun_462;
_Bool no_output_come_code_463;
_Bool __result_obj__301;
void* __right_value405 = (void*)0;
struct CVALUE* method_block_node_464;
void* __right_value406 = (void*)0;
struct sType* method_block_lambda_type_471;
void* __right_value407 = (void*)0;
struct sType* method_block_result_type_472;
void* __right_value408 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_473;
struct sType* generics_fun_method_block_result_type_474;
int method_generics_num_475;
void* __right_value412 = (void*)0;
int n_484;
struct list$1sType$ph* o2_saved_485;
struct sType* it_488;
int method_generics_num_491;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct list$1CVALUE$ph* come_params_492;
int i_493;
struct sType* result_type_494;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_495;
struct tuple2$2char$phsNode$ph* it_496;
struct tuple2$2char$phsNode$ph* multiple_assign_var3 = (void*)0;
char* label_497=0;
struct sNode* node_498=0;
_Bool Value_499;
_Bool __result_obj__315;
void* __right_value417 = (void*)0;
struct CVALUE* come_value_500;
void* __right_value418 = (void*)0;
struct sType* __dec_obj91;
int method_generics_num_504;
void* __right_value422 = (void*)0;
int n_505;
struct list$1sType$ph* o2_saved_506;
struct sType* it_507;
int method_generics_num_508;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name_511=0;
struct sGenericsFun* gfun_512=0;
char* __dec_obj95;
void* __right_value426 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5 = (void*)0;
char* name_513=0;
struct sGenericsFun* gfun_514=0;
char* __dec_obj96;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct list$1CVALUE$ph* come_params_515;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_516;
struct tuple2$2char$phsNode$ph* it_517;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* label_518=0;
struct sNode* node_519=0;
_Bool Value_520;
_Bool __result_obj__318;
void* __right_value429 = (void*)0;
struct CVALUE* come_value_521;
void* __right_value430 = (void*)0;
struct sType* __dec_obj97;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct buffer* buf_522;
int j_523;
struct list$1CVALUE$ph* o2_saved_524;
struct CVALUE* it_525;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct CVALUE* come_value_526;
void* __right_value435 = (void*)0;
char* __dec_obj98;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sType* __dec_obj99;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sType* __dec_obj100;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sType* __dec_obj101;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* __dec_obj102;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sType* __dec_obj103;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sType* __dec_obj104;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sType* __dec_obj105;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sType* __dec_obj106;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sType* __dec_obj107;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sType* __dec_obj108;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sType* __dec_obj109;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sType* __dec_obj110;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sType* __dec_obj111;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sType* __dec_obj112;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* __dec_obj113;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sType* __dec_obj114;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sType* __dec_obj115;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sType* __dec_obj116;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* __dec_obj117;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sType* __dec_obj118;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sType* __dec_obj119;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sType* __dec_obj120;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* __dec_obj121;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* __dec_obj122;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* __dec_obj123;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj124;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sType* __dec_obj125;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj126;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj127;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* __dec_obj128;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj129;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* __dec_obj130;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj131;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* __dec_obj132;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj133;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj134;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __dec_obj135;
_Bool __result_obj__319;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct list$1CVALUE$ph* come_params_527;
int i_528;
struct sType* result_type_529;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_530;
struct tuple2$2char$phsNode$ph* it_531;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_532=0;
struct sNode* node_533=0;
_Bool Value_534;
_Bool __result_obj__320;
void* __right_value540 = (void*)0;
struct CVALUE* come_value_535;
void* __right_value541 = (void*)0;
struct sType* __dec_obj136;
struct sType* __dec_obj137;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct buffer* buf_536;
int j_537;
struct list$1CVALUE$ph* o2_saved_538;
struct CVALUE* it_539;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct CVALUE* come_value_540;
void* __right_value546 = (void*)0;
char* __dec_obj138;
struct sType* __dec_obj139;
_Bool __result_obj__321;
void* __right_value547 = (void*)0;
char* __dec_obj140;
void* __right_value548 = (void*)0;
char* __dec_obj141;
char* p_541;
int version_542;
char* p2_543;
int i_545;
void* __right_value549 = (void*)0;
char* new_fun_name_546;
void* __right_value550 = (void*)0;
_Bool _if_conditional3;
void* __right_value551 = (void*)0;
char* __dec_obj142;
void* __right_value552 = (void*)0;
char* new_fun_name_553;
void* __right_value553 = (void*)0;
_Bool _if_conditional4;
void* __right_value554 = (void*)0;
char* __dec_obj143;
int i_554;
void* __right_value555 = (void*)0;
char* new_fun_name_555;
void* __right_value556 = (void*)0;
_Bool _if_conditional5;
void* __right_value557 = (void*)0;
char* __dec_obj144;
void* __right_value558 = (void*)0;
struct sFun* fun_556;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct list$1CVALUE$ph* come_params_557;
int i_558;
struct sType* result_type_559;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_560;
struct tuple2$2char$phsNode$ph* it_561;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_562=0;
struct sNode* node_563=0;
_Bool Value_564;
_Bool __result_obj__330;
void* __right_value561 = (void*)0;
struct CVALUE* come_value_565;
void* __right_value562 = (void*)0;
struct sType* __dec_obj145;
struct sType* __dec_obj146;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct buffer* buf_566;
int j_567;
struct list$1CVALUE$ph* o2_saved_568;
struct CVALUE* it_569;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct CVALUE* come_value_570;
void* __right_value567 = (void*)0;
char* __dec_obj147;
struct sType* __dec_obj148;
_Bool __result_obj__331;
void* __right_value568 = (void*)0;
struct sType* result_type_571;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct list$1sType$ph* param_types_572;
struct list$1sType$ph* o2_saved_573;
struct sType* it_574;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sType* it2_575;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sType* __dec_obj149;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct list$1CVALUE$ph* come_params_576;
int i_577;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_578;
struct tuple2$2char$phsNode$ph* it_579;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_580=0;
struct sNode* node_581=0;
_Bool Value_582;
_Bool __result_obj__332;
void* __right_value577 = (void*)0;
struct CVALUE* come_value_583;
void* __right_value578 = (void*)0;
struct sType* __dec_obj150;
int n_584;
struct list$1char$ph* o2_saved_585;
char* it_586;
void* __right_value579 = (void*)0;
_Bool _if_conditional6;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
_Bool _if_conditional7;
void* __right_value586 = (void*)0;
int i_592;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_593;
struct tuple2$2char$phsNode$ph* it_594;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_595=0;
struct sNode* node_596=0;
_Bool Value_597;
_Bool __result_obj__335;
void* __right_value587 = (void*)0;
struct CVALUE* come_value_598;
void* __right_value588 = (void*)0;
struct sType* __dec_obj152;
void* __right_value589 = (void*)0;
_Bool _if_conditional8;
_Bool Value_599;
_Bool __result_obj__336;
void* __right_value590 = (void*)0;
struct CVALUE* come_value_600;
void* __right_value591 = (void*)0;
struct sType* __dec_obj153;
void* __right_value592 = (void*)0;
_Bool _if_conditional9;
void* __right_value593 = (void*)0;
_Bool _if_conditional10;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
_Bool _if_conditional11;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
_Bool _if_conditional12;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
char* default_param_601;
void* __right_value604 = (void*)0;
char* param_name_608;
void* __right_value605 = (void*)0;
_Bool _if_conditional13;
struct buffer* source_609;
char* p_610;
char* head_611;
int sline_612;
void* __right_value606 = (void*)0;
struct buffer* __dec_obj154;
void* __right_value607 = (void*)0;
struct sNode* node_613;
_Bool Value_614;
_Bool __result_obj__341;
struct buffer* __dec_obj155;
void* __right_value608 = (void*)0;
struct CVALUE* come_value_615;
void* __right_value609 = (void*)0;
struct sType* __dec_obj156;
void* __right_value610 = (void*)0;
_Bool _if_conditional14;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
_Bool _if_conditional15;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
_Bool _if_conditional16;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value623 = (void*)0;
struct sNode* current_stack_frame_node_616;
_Bool Value_618;
_Bool __result_obj__344;
void* __right_value624 = (void*)0;
struct CVALUE* come_value_619;
void* __right_value625 = (void*)0;
struct sType* __dec_obj158;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct buffer* method_block2_620;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sType* method_block_type_621;
void* __right_value630 = (void*)0;
char* class_name_622;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sClass* current_stack_frame_struct_629;
void* __right_value633 = (void*)0;
int num_method_block_630;
void* __right_value634 = (void*)0;
struct sType* result_type_631;
void* __right_value635 = (void*)0;
struct list$1sType$ph* param_types_632;
struct list$1char$ph* param_names_633;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct buffer* all_alhabet_sname_634;
char* p_635;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct list$1sType$ph* o2_saved_636;
struct sType* it_637;
struct sType* param_type_638;
void* __right_value640 = (void*)0;
char* param_name_639;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
char* param_name_640;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
char* param_name_641;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct buffer* source3_642;
char* p_643;
char* head_644;
int sline_645;
struct buffer* __dec_obj159;
void* __right_value647 = (void*)0;
struct sNode* node_646;
_Bool Value_647;
_Bool __result_obj__353;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
char* method_block_name_648;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct CVALUE* come_value2_649;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sFun* fun2_650;
struct sType* method_block_type2_651;
void* __right_value654 = (void*)0;
char* __dec_obj160;
void* __right_value655 = (void*)0;
struct sType* __dec_obj161;
struct buffer* __dec_obj162;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct buffer* buf_652;
int j_653;
struct list$1CVALUE$ph* o2_saved_654;
struct CVALUE* it_655;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct CVALUE* come_value_656;
void* __right_value660 = (void*)0;
char* __dec_obj163;
void* __right_value661 = (void*)0;
struct sType* __dec_obj164;
void* __right_value662 = (void*)0;
char* __dec_obj165;
_Bool __result_obj__354;
memset(&i_545, 0, sizeof(int));
    fun_name_414=(char*)come_increment_ref_count(self->fun_name);
    params_415=self->params;
    method_block_416=self->method_block;
    method_block_sline_417=self->method_block_sline;
    var__418=get_variable_from_table(info->lv_table,fun_name_414);
    if(    var__418==((void*)0)) {
        var__418=get_variable_from_table(info->gv_table,fun_name_414);
    }
    if(    var__418) {
        lambda_type_419=var__418->mType;
        if(        string_operator_not_equals(lambda_type_419->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_414);
        }
        result_type_420=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_419->mResultType));
        result_type_420->mStatic=(_Bool)0;
        come_params_421=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 506, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type_419->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_415)&&!lambda_type_419->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_414,list$1sType$ph_length(lambda_type_419->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_415));
        }
        i_424=0;
        for(        o2_saved_425=(params_415),it_428=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_425));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_425));        it_428=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_425))        ){
            multiple_assign_var1=it_428;
            label_431=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_432=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_433=node_compile(node_432,info);
            if(            !Value_433) {
                __result_obj__281 = (_Bool)0;
                (label_431 = come_decrement_ref_count(label_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_432) ? node_432 = come_decrement_ref_count(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(result_type_420,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_421,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__281;
            }
            else {
            }
            come_value_434=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj84=come_value_434->type,
            come_value_434->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_434->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            if(            (_if_conditional1=(lambda_type_419->mVarArgs&&((struct sType*)(__right_value383=list$1sType$ph_operator_load_element(lambda_type_419->mParamTypes,i_424)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value383,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional1) {
            }
            else {
                check_assign_type(((char*)(__right_value386=xsprintf("\%s calling param #\%s",((char*)(__right_value384=string_to_string(fun_name_414))),((char*)(__right_value385=int_to_string(i_424)))))),((struct sType*)(__right_value387=list$1sType$ph_operator_load_element(lambda_type_419->mParamTypes,i_424))),come_value_434->type,come_value_434,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value384 = come_decrement_ref_count(__right_value384, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value385 = come_decrement_ref_count(__right_value385, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value386 = come_decrement_ref_count(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value387,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                (_if_conditional2=(((struct sType*)(__right_value388=list$1sType$ph_operator_load_element(lambda_type_419->mParamTypes,i_424)))->mHeap&&come_value_434->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value388,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)(__right_value389=list$1sType$ph_operator_load_element(lambda_type_419->mParamTypes,i_424))),come_value_434->type,come_value_434,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value389,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            list$1CVALUE$ph_push_back(come_params_421,(struct CVALUE*)come_increment_ref_count(come_value_434));
            i_424++;
            (label_431 = come_decrement_ref_count(label_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_432) ? node_432 = come_decrement_ref_count(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_441=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 540, "struct buffer*"))));
        buffer_append_str(buf_441,var__418->mCValueName);
        buffer_append_str(buf_441,"(");
        j_442=0;
        for(        o2_saved_443=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_421)),it_446=list$1CVALUE$ph_begin((o2_saved_443));        !list$1CVALUE$ph_end((o2_saved_443));        it_446=list$1CVALUE$ph_next((o2_saved_443))        ){
            buffer_append_str(buf_441,it_446->c_value);
            if(            j_442!=list$1CVALUE$ph_length(come_params_421)-1) {
                buffer_append_str(buf_441,",");
            }
            j_442++;
        }
        /*c*/ come_call_finalizer3(o2_saved_443,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_441,")");
        come_value_449=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 557, "struct CVALUE*"))));
        __dec_obj85=come_value_449->c_value,
        come_value_449->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_441));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj86=come_value_449->type,
        come_value_449->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_420));
        /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_449->type->mStatic=(_Bool)0;
        come_value_449->var=((void*)0);
        if(        lambda_type_419->mResultType->mHeap) {
            append_object_to_right_values2(come_value_449,(struct sType*)come_increment_ref_count(lambda_type_419->mResultType),info,(_Bool)0,((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_449->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_449));
        info->calling_fun=((void*)0);
        __result_obj__292 = (_Bool)1;
        /*c*/ come_call_finalizer3(result_type_420,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_421,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_441,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_449,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__292;
        /*c*/ come_call_finalizer3(result_type_420,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_421,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_441,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_449,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    generics_fun_450=((struct sGenericsFun*)(__right_value397=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value396=__builtin_string(fun_name_414))),((void*)0))));
    (__right_value396 = come_decrement_ref_count(__right_value396, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value397,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    method_generics_453=(_Bool)0;
    if(    generics_fun_450) {
        method_generics_453=list$1char$ph_length(generics_fun_450->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics_453) {
        if(        list$1sType$ph_length(self->method_generics_types)==0) {
            method_generics_types_454=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 582, "struct list$1sType$ph*"))));
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value400=make_method_generics_function((char*)come_increment_ref_count(fun_name_414),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_454),info)));
            name_455=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun_456=multiple_assign_var2->v2;
            /*c*/ come_call_finalizer3(__right_value400,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            generics_fun_name_457=(char*)come_increment_ref_count(name_455);
            fun_458=((struct sFun*)(__right_value401=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_457,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value401,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            method_block_416) {
                come_params_461=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 589, "struct list$1CVALUE$ph*"))));
                fun_462=((struct sFun*)(__right_value404=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_457,((void*)0))));
                /*c*/ come_call_finalizer3(__right_value404,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                no_output_come_code_463=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_416,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_461),fun_462,fun_name_414,method_block_sline_417,info,(_Bool)1)) {
                    __result_obj__301 = (_Bool)0;
                    /*c*/ come_call_finalizer3(come_params_461,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_454,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_455 = come_decrement_ref_count(name_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_457 = come_decrement_ref_count(generics_fun_name_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__301;
                }
                info->no_output_come_code=no_output_come_code_463;
                method_block_node_464=((struct CVALUE*)(__right_value405=list$1CVALUE$ph_operator_load_element(come_params_461,-1)));
                /*c*/ come_call_finalizer3(__right_value405,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                method_block_lambda_type_471=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_464->type));
                method_block_result_type_472=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_473=((struct sType*)(__right_value408=list$1sType$ph_operator_load_element(generics_fun_450->mParamTypes,-1)));
                /*c*/ come_call_finalizer3(__right_value408,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                generics_fun_method_block_result_type_474=generics_fun_method_block_lambda_type_473->mResultType;
                if(                generics_fun_method_block_result_type_474->mClass->mMethodGenerics) {
                    method_generics_num_475=generics_fun_method_block_result_type_474->mClass->mMethodGenericsNum;
                    list$1sType$ph$p_operator_store_element(method_generics_types_454,method_generics_num_475,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_472)));
                }
                n_484=0;
                for(                o2_saved_485=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_473->mParamTypes)),it_488=list$1sType$ph_begin((o2_saved_485));                !list$1sType$ph_end((o2_saved_485));                it_488=list$1sType$ph_next((o2_saved_485))                ){
                    if(                    it_488->mClass->mMethodGenerics) {
                        method_generics_num_491=it_488->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(method_generics_types_454,method_generics_num_491,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value413=list$1sType$ph_operator_load_element(method_block_lambda_type_471->mParamTypes,n_484))))));
                        /*c*/ come_call_finalizer3(__right_value413,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    n_484++;
                }
                /*c*/ come_call_finalizer3(o2_saved_485,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_461,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_lambda_type_471,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_block_result_type_472,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_params_492=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 621, "struct list$1CVALUE$ph*"))));
            i_493=0;
            result_type_494=((void*)0);
            for(            o2_saved_495=(params_415),it_496=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_495));            !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_495));            it_496=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_495))            ){
                multiple_assign_var3=it_496;
                label_497=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_498=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_499=node_compile(node_498,info);
                if(                !Value_499) {
                    __result_obj__315 = (_Bool)0;
                    (label_497 = come_decrement_ref_count(label_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_498) ? node_498 = come_decrement_ref_count(node_498, ((struct sNode*)node_498)->finalize, ((struct sNode*)node_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_454,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_455 = come_decrement_ref_count(name_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (generics_fun_name_457 = come_decrement_ref_count(generics_fun_name_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_params_492,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_494,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__315;
                }
                else {
                }
                come_value_500=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj91=come_value_500->type,
                come_value_500->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_500->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                list$1CVALUE$ph_add(come_params_492,(struct CVALUE*)come_increment_ref_count(come_value_500));
                (label_497 = come_decrement_ref_count(label_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_498) ? node_498 = come_decrement_ref_count(node_498, ((struct sNode*)node_498)->finalize, ((struct sNode*)node_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_500,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            generics_fun_450->mResultType->mClass->mMethodGenerics) {
                method_generics_num_504=generics_fun_450->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sType$ph$p_operator_store_element(method_generics_types_454,method_generics_num_504,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                }
            }
            n_505=0;
            for(            o2_saved_506=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_450->mParamTypes)),it_507=list$1sType$ph_begin((o2_saved_506));            !list$1sType$ph_end((o2_saved_506));            it_507=list$1sType$ph_next((o2_saved_506))            ){
                if(                it_507->mClass->mMethodGenerics) {
                    method_generics_num_508=it_507->mClass->mMethodGenericsNum;
                    if(                    n_505<list$1CVALUE$ph_length(come_params_492)) {
                        list$1sType$ph$p_operator_store_element(method_generics_types_454,method_generics_num_508,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value423=list$1CVALUE$ph_operator_load_element(come_params_492,n_505)))->type)));
                        /*c*/ come_call_finalizer3(__right_value423,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
                n_505++;
            }
            /*c*/ come_call_finalizer3(o2_saved_506,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_457);
            (name_455 = come_decrement_ref_count(name_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value425=make_method_generics_function((char*)come_increment_ref_count(fun_name_414),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_454),info)));
            name_511=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_512=multiple_assign_var4->v2;
            /*c*/ come_call_finalizer3(__right_value425,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj95=fun_name_414,
            fun_name_414=(char*)come_increment_ref_count(name_511);
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_454,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (generics_fun_name_457 = come_decrement_ref_count(generics_fun_name_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_params_492,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_494,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_511 = come_decrement_ref_count(name_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value426=make_method_generics_function((char*)come_increment_ref_count(fun_name_414),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_513=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            gfun_514=multiple_assign_var5->v2;
            /*c*/ come_call_finalizer3(__right_value426,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj96=fun_name_414,
            fun_name_414=(char*)come_increment_ref_count(name_513);
            __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (name_513 = come_decrement_ref_count(name_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_414,"__builtin_memmove")||string_operator_equals(fun_name_414,"__builtin_memset")||string_operator_equals(fun_name_414,"__builtin_ffs")||string_operator_equals(fun_name_414,"__builtin_ffsl")||string_operator_equals(fun_name_414,"__builtin_ffsll")||string_operator_equals(fun_name_414,"__builtin_bswap16")||string_operator_equals(fun_name_414,"__builtin_bswap32")||string_operator_equals(fun_name_414,"__builtin_bswap64")||string_operator_equals(fun_name_414,"__builtin_constant_p")||string_operator_equals(fun_name_414,"__builtin_expect")||string_operator_equals(fun_name_414,"__builtin___memset_chk")||string_operator_equals(fun_name_414,"__builtin_object_size")||string_operator_equals(fun_name_414,"__builtin___memcpy_chk")||string_operator_equals(fun_name_414,"__builtin___strncpy_chk")||string_operator_equals(fun_name_414,"__builtin___strncat_chk")||string_operator_equals(fun_name_414,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_414,"__builtin_strrchr")||string_operator_equals(fun_name_414,"__builtin_clz")||string_operator_equals(fun_name_414,"__dsb")||string_operator_equals(fun_name_414,"__isb")||string_operator_equals(fun_name_414,"__dmb")||(strlen(fun_name_414)==strlen("__builtin_arm_")&&memcmp(fun_name_414,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_414,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_414,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_414,"__c11_atomic_store")||string_operator_equals(fun_name_414,"__c11_atomic_load")||string_operator_equals(fun_name_414,"__c11_atomic_exchange")||string_operator_equals(fun_name_414,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_414,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_414,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_414,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_414,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_414,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_414,"__c11_atomic_fetch_xor")) {
        come_params_515=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 696, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_516=(params_415),it_517=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_516));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_516));        it_517=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_516))        ){
            multiple_assign_var6=it_517;
            label_518=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_519=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_520=node_compile(node_519,info);
            if(            !Value_520) {
                __result_obj__318 = (_Bool)0;
                (label_518 = come_decrement_ref_count(label_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_519) ? node_519 = come_decrement_ref_count(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_515,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__318;
            }
            else {
            }
            come_value_521=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj97=come_value_521->type,
            come_value_521->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_521->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1CVALUE$ph_push_back(come_params_515,(struct CVALUE*)come_increment_ref_count(come_value_521));
            (label_518 = come_decrement_ref_count(label_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_519) ? node_519 = come_decrement_ref_count(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_521,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_522=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 711, "struct buffer*"))));
        buffer_append_str(buf_522,fun_name_414);
        buffer_append_str(buf_522,"(");
        j_523=0;
        for(        o2_saved_524=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_515)),it_525=list$1CVALUE$ph_begin((o2_saved_524));        !list$1CVALUE$ph_end((o2_saved_524));        it_525=list$1CVALUE$ph_next((o2_saved_524))        ){
            buffer_append_str(buf_522,it_525->c_value);
            if(            j_523!=list$1CVALUE$ph_length(come_params_515)-1) {
                buffer_append_str(buf_522,",");
            }
            j_523++;
        }
        /*c*/ come_call_finalizer3(o2_saved_524,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_522,")");
        come_value_526=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 728, "struct CVALUE*"))));
        __dec_obj98=come_value_526->c_value,
        come_value_526->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_522));
        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(fun_name_414,"__builtin_memmove")||string_operator_equals(fun_name_414,"__builtin_memset")) {
            __dec_obj99=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 732, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_ffs")) {
            __dec_obj100=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 735, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_ffsl")) {
            __dec_obj101=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 738, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_ffsll")) {
            __dec_obj102=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 741, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_bswap16")) {
            __dec_obj103=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 744, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_bswap32")) {
            __dec_obj104=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 747, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_bswap64")) {
            __dec_obj105=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 750, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_constant_p")) {
            __dec_obj106=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 753, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_expect")) {
            __dec_obj107=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 756, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin___memset_chk")) {
            __dec_obj108=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 759, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_526->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_object_size")) {
            __dec_obj109=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 763, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin___memcpy_chk")) {
            __dec_obj110=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 766, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_526->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_414,"__builtin___strncpy_chk")) {
            __dec_obj111=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 770, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_526->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_414,"__builtin___strncat_chk")) {
            __dec_obj112=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 774, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_526->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_strrchr")) {
            __dec_obj113=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 778, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_526->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_414,"__builtin___vsnprintf_chk")) {
            __dec_obj114=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_clz")) {
            __dec_obj115=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 785, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__c11_atomic_thread_fence")) {
            __dec_obj116=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 788, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__c11_atomic_signal_fence")) {
            __dec_obj117=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 791, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__c11_atomic_exchange")) {
            __dec_obj118=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value493=list$1CVALUE$ph_operator_load_element(come_params_515,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value493,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__c11_atomic_exchange_strong")) {
            __dec_obj119=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value495=list$1CVALUE$ph_operator_load_element(come_params_515,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value495,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__c11_atomic_exchange_weak")) {
            __dec_obj120=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value497=list$1CVALUE$ph_operator_load_element(come_params_515,2)))->type));
            /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value497,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__c11_atomic_store")) {
            __dec_obj121=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 803, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__c11_atomic_load")) {
            __dec_obj122=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value502=list$1CVALUE$ph_operator_load_element(come_params_515,0)))->type));
            /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value502,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_value_526->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_414,"__c11_atomic_fetch_add")) {
            __dec_obj123=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value504=list$1CVALUE$ph_operator_load_element(come_params_515,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value504,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__c11_atomic_fetch_sub")) {
            __dec_obj124=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value506=list$1CVALUE$ph_operator_load_element(come_params_515,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value506,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__c11_atomic_fetch_and")) {
            __dec_obj125=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value508=list$1CVALUE$ph_operator_load_element(come_params_515,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value508,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__c11_atomic_fetch_or")) {
            __dec_obj126=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value510=list$1CVALUE$ph_operator_load_element(come_params_515,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value510,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__c11_atomic_fetch_xor")) {
            __dec_obj127=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value512=list$1CVALUE$ph_operator_load_element(come_params_515,1)))->type));
            /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value512,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__dsb")) {
            __dec_obj128=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 825, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__isb")) {
            __dec_obj129=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 828, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__dmb")) {
            __dec_obj130=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 831, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_arm_cdp")) {
            __dec_obj131=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 834, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_arm_ldc")) {
            __dec_obj132=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 837, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_arm_stc")) {
            __dec_obj133=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 840, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_arm_stcl")) {
            __dec_obj134=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 843, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"__builtin_arm_ldcl")) {
            __dec_obj135=come_value_526->type,
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 846, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_526->var=((void*)0);
        add_come_last_code(info,"%s",come_value_526->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_526));
        __result_obj__319 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_515,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_522,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_526,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__319;
        /*c*/ come_call_finalizer3(come_params_515,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_522,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_526,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    string_operator_equals(fun_name_414,"__builtin_va_arg")) {
        come_params_527=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 858, "struct list$1CVALUE$ph*"))));
        i_528=0;
        result_type_529=((void*)0);
        for(        o2_saved_530=(params_415),it_531=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_530));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_530));        it_531=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_530))        ){
            multiple_assign_var7=it_531;
            label_532=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_533=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_534=node_compile(node_533,info);
            if(            !Value_534) {
                __result_obj__320 = (_Bool)0;
                (label_532 = come_decrement_ref_count(label_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_533) ? node_533 = come_decrement_ref_count(node_533, ((struct sNode*)node_533)->finalize, ((struct sNode*)node_533)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_527,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_529,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__320;
            }
            else {
            }
            come_value_535=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj136=come_value_535->type,
            come_value_535->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_535->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1CVALUE$ph_add(come_params_527,(struct CVALUE*)come_increment_ref_count(come_value_535));
            __dec_obj137=result_type_529,
            result_type_529=(struct sType*)come_increment_ref_count(come_value_535->type);
            /*b*/ come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_532 = come_decrement_ref_count(label_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_533) ? node_533 = come_decrement_ref_count(node_533, ((struct sNode*)node_533)->finalize, ((struct sNode*)node_533)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_535,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_536=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 878, "struct buffer*"))));
        buffer_append_str(buf_536,fun_name_414);
        buffer_append_str(buf_536,"(");
        j_537=0;
        for(        o2_saved_538=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_527)),it_539=list$1CVALUE$ph_begin((o2_saved_538));        !list$1CVALUE$ph_end((o2_saved_538));        it_539=list$1CVALUE$ph_next((o2_saved_538))        ){
            buffer_append_str(buf_536,it_539->c_value);
            if(            j_537!=list$1CVALUE$ph_length(come_params_527)-1) {
                buffer_append_str(buf_536,",");
            }
            j_537++;
        }
        /*c*/ come_call_finalizer3(o2_saved_538,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_536,")");
        come_value_540=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 895, "struct CVALUE*"))));
        __dec_obj138=come_value_540->c_value,
        come_value_540->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_536));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj139=come_value_540->type,
        come_value_540->type=(struct sType*)come_increment_ref_count(result_type_529);
        /*b*/ come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_540->var=((void*)0);
        add_come_last_code(info,"%s",come_value_540->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_540));
        __result_obj__321 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_527,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_529,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_536,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_540,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__321;
        /*c*/ come_call_finalizer3(come_params_527,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_529,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_536,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_540,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    string_operator_equals(fun_name_414,"string")) {
        __dec_obj140=fun_name_414,
        fun_name_414=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_414,"wstring")) {
        __dec_obj141=fun_name_414,
        fun_name_414=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(fun_name_414,"inherit")) {
        p_541=info->come_fun->mName;
        version_542=0;
        while(        *p_541) {
            if(            *p_541==95&&*(p_541+1)==118&&xisdigit(*(p_541+2))) {
                p2_543=p_541+2;
                version_542=0;
                while(                xisdigit(*p2_543)) {
                    version_542=version_542*10+(*p2_543-48);
                    p2_543++;
                }
                break;
            }
            else {
                p_541++;
            }
        }
        char real_fun_name_544[2048];
        memset(&real_fun_name_544, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_544,info->come_fun->mName,p_541-info->come_fun->mName);
        real_fun_name_544[p_541-info->come_fun->mName]=0;
        for(        i_545=version_542-1;        i_545>=1;        i_545--        ){
            new_fun_name_546=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_544,i_545));
            if(            (_if_conditional3=(((struct sFun*)(__right_value550=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_546))))),            /*c*/ come_call_finalizer3(__right_value550,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional3) {
                __dec_obj142=fun_name_414,
                fun_name_414=(char*)come_increment_ref_count(__builtin_string(new_fun_name_546));
                __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_546 = come_decrement_ref_count(new_fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_546 = come_decrement_ref_count(new_fun_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_545==0) {
            new_fun_name_553=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_544));
            if(            (_if_conditional4=(((struct sFun*)(__right_value553=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_553))))),            /*c*/ come_call_finalizer3(__right_value553,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional4) {
                __dec_obj143=fun_name_414,
                fun_name_414=(char*)come_increment_ref_count(__builtin_string(new_fun_name_553));
                __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            string_operator_equals(fun_name_414,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
            }
            (new_fun_name_553 = come_decrement_ref_count(new_fun_name_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_554=128;        i_554>=1;        i_554--        ){
            new_fun_name_555=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_414,i_554));
            if(            (_if_conditional5=(((struct sFun*)(__right_value556=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_555))))),            /*c*/ come_call_finalizer3(__right_value556,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional5) {
                __dec_obj144=fun_name_414,
                fun_name_414=(char*)come_increment_ref_count(__builtin_string(new_fun_name_555));
                __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_555 = come_decrement_ref_count(new_fun_name_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_555 = come_decrement_ref_count(new_fun_name_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    fun_556=((struct sFun*)(__right_value558=map$2char$phsFun$ph_at(info->funcs,fun_name_414,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value558,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_556==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_414);
        come_params_557=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 975, "struct list$1CVALUE$ph*"))));
        i_558=0;
        result_type_559=((void*)0);
        for(        o2_saved_560=(params_415),it_561=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_560));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_560));        it_561=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_560))        ){
            multiple_assign_var8=it_561;
            label_562=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_563=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_564=node_compile(node_563,info);
            if(            !Value_564) {
                __result_obj__330 = (_Bool)0;
                (label_562 = come_decrement_ref_count(label_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_563) ? node_563 = come_decrement_ref_count(node_563, ((struct sNode*)node_563)->finalize, ((struct sNode*)node_563)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__330;
            }
            else {
            }
            come_value_565=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj145=come_value_565->type,
            come_value_565->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_565->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1CVALUE$ph_add(come_params_557,(struct CVALUE*)come_increment_ref_count(come_value_565));
            __dec_obj146=result_type_559,
            result_type_559=(struct sType*)come_increment_ref_count(come_value_565->type);
            /*b*/ come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (label_562 = come_decrement_ref_count(label_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_563) ? node_563 = come_decrement_ref_count(node_563, ((struct sNode*)node_563)->finalize, ((struct sNode*)node_563)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_565,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buf_566=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 995, "struct buffer*"))));
        buffer_append_str(buf_566,fun_name_414);
        buffer_append_str(buf_566,"(");
        j_567=0;
        for(        o2_saved_568=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_557)),it_569=list$1CVALUE$ph_begin((o2_saved_568));        !list$1CVALUE$ph_end((o2_saved_568));        it_569=list$1CVALUE$ph_next((o2_saved_568))        ){
            buffer_append_str(buf_566,it_569->c_value);
            if(            j_567!=list$1CVALUE$ph_length(come_params_557)-1) {
                buffer_append_str(buf_566,",");
            }
            j_567++;
        }
        /*c*/ come_call_finalizer3(o2_saved_568,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_566,")");
        come_value_570=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1012, "struct CVALUE*"))));
        __dec_obj147=come_value_570->c_value,
        come_value_570->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_566));
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj148=come_value_570->type,
        come_value_570->type=(struct sType*)come_increment_ref_count(result_type_559);
        /*b*/ come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_570->var=((void*)0);
        add_come_last_code(info,"%s",come_value_570->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_570));
        __result_obj__331 = (_Bool)1;
        /*c*/ come_call_finalizer3(come_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_566,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_570,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__331;
        /*c*/ come_call_finalizer3(come_params_557,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_566,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_570,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    result_type_571=(struct sType*)come_increment_ref_count(sType_clone(fun_556->mResultType));
    result_type_571->mStatic=(_Bool)0;
    param_types_572=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1027, "struct list$1sType$ph*"))));
    for(    o2_saved_573=(struct list$1sType$ph*)come_increment_ref_count((fun_556->mParamTypes)),it_574=list$1sType$ph_begin((o2_saved_573));    !list$1sType$ph_end((o2_saved_573));    it_574=list$1sType$ph_next((o2_saved_573))    ){
        it2_575=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value571=sType_clone(it_574))),info->generics_type,info));
        /*c*/ come_call_finalizer3(__right_value571,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_push_back(param_types_572,(struct sType*)come_increment_ref_count(sType_clone(it2_575)));
        /*c*/ come_call_finalizer3(it2_575,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_573,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj149=result_type_571,
    result_type_571=(struct sType*)come_increment_ref_count(solve_generics(result_type_571,info->generics_type,info));
    /*b*/ come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_params_576=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1035, "struct list$1CVALUE$ph*"))));
    for(    i_577=0;    i_577<list$1sType$ph_length(fun_556->mParamTypes)-(((method_block_416)?(2):(0)));    i_577++    ){
        list$1CVALUE$ph_add(come_params_576,((void*)0));
    }
    for(    o2_saved_578=(params_415),it_579=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_578));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_578));    it_579=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_578))    ){
        multiple_assign_var9=it_579;
        label_580=(char*)come_increment_ref_count(multiple_assign_var9->v1);
        node_581=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
        if(        fun_556->mVarArgs||string_operator_equals(fun_name_414,"__builtin_va_start")) {
        }
        else if(        label_580) {
            Value_582=node_compile(node_581,info);
            if(            !Value_582) {
                __result_obj__332 = (_Bool)0;
                (label_580 = come_decrement_ref_count(label_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_581) ? node_581 = come_decrement_ref_count(node_581, ((struct sNode*)node_581)->finalize, ((struct sNode*)node_581)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_571,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_572,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_576,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__332;
            }
            else {
            }
            come_value_583=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj150=come_value_583->type,
            come_value_583->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_583->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            n_584=0;
            for(            o2_saved_585=(struct list$1char$ph*)come_increment_ref_count((fun_556->mParamNames)),it_586=list$1char$ph_begin((o2_saved_585));            !list$1char$ph_end((o2_saved_585));            it_586=list$1char$ph_next((o2_saved_585))            ){
                if(                string_operator_equals(label_580,it_586)) {
                    break;
                }
                n_584++;
            }
            /*c*/ come_call_finalizer3(o2_saved_585,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            (_if_conditional6=(((struct sType*)(__right_value579=list$1sType$ph_operator_load_element(param_types_572,n_584))))),            /*c*/ come_call_finalizer3(__right_value579,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                check_assign_type(((char*)(__right_value582=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value580=string_to_string(fun_name_414))),((char*)(__right_value581=int_to_string(n_584)))))),((struct sType*)(__right_value583=list$1sType$ph_operator_load_element(param_types_572,n_584))),come_value_583->type,come_value_583,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value580 = come_decrement_ref_count(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value581 = come_decrement_ref_count(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value582 = come_decrement_ref_count(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value583,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            (_if_conditional7=(((struct sType*)(__right_value584=list$1sType$ph_operator_load_element(param_types_572,n_584)))&&((struct sType*)(__right_value585=list$1sType$ph_operator_load_element(param_types_572,n_584)))->mHeap&&come_value_583->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value584,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value585,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                std_move(((struct sType*)(__right_value586=list$1sType$ph_operator_load_element(param_types_572,n_584))),come_value_583->type,come_value_583,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value586,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_576,n_584,(struct CVALUE*)come_increment_ref_count(come_value_583));
            /*c*/ come_call_finalizer3(come_value_583,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_580 = come_decrement_ref_count(label_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_581) ? node_581 = come_decrement_ref_count(node_581, ((struct sNode*)node_581)->finalize, ((struct sNode*)node_581)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    i_592=0;
    for(    o2_saved_593=(params_415),it_594=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_593));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_593));    it_594=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_593))    ){
        multiple_assign_var10=it_594;
        label_595=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        node_596=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        fun_556->mVarArgs||string_operator_equals(fun_name_414,"__builtin_va_start")) {
            Value_597=node_compile(node_596,info);
            if(            !Value_597) {
                __result_obj__335 = (_Bool)0;
                (label_595 = come_decrement_ref_count(label_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_596) ? node_596 = come_decrement_ref_count(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_571,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_572,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_576,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__335;
            }
            else {
            }
            come_value_598=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj152=come_value_598->type,
            come_value_598->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_598->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj152,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while(            (_Bool)1) {
                if(                (_if_conditional8=(((struct CVALUE*)(__right_value589=list$1CVALUE$ph_operator_load_element(come_params_576,i_592)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value589,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional8) {
                    break;
                }
                else {
                    i_592++;
                }
            }
            list$1CVALUE$ph_replace(come_params_576,i_592,(struct CVALUE*)come_increment_ref_count(come_value_598));
            i_592++;
            /*c*/ come_call_finalizer3(come_value_598,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        label_595) {
        }
        else {
            Value_599=node_compile(node_596,info);
            if(            !Value_599) {
                __result_obj__336 = (_Bool)0;
                (label_595 = come_decrement_ref_count(label_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_596) ? node_596 = come_decrement_ref_count(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_571,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_572,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_576,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__336;
            }
            else {
            }
            come_value_600=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj153=come_value_600->type,
            come_value_600->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_600->type,info->generics_type,info));
            /*b*/ come_call_finalizer3(__dec_obj153,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while(            (_Bool)1) {
                if(                (_if_conditional9=(((struct CVALUE*)(__right_value592=list$1CVALUE$ph_operator_load_element(come_params_576,i_592)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value592,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional9) {
                    break;
                }
                else {
                    i_592++;
                }
            }
            if(            (_if_conditional10=(((struct sType*)(__right_value593=list$1sType$ph_operator_load_element(param_types_572,i_592))))),            /*c*/ come_call_finalizer3(__right_value593,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional10) {
                check_assign_type(((char*)(__right_value596=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value594=string_to_string(fun_name_414))),((char*)(__right_value595=int_to_string(i_592)))))),((struct sType*)(__right_value597=list$1sType$ph_operator_load_element(param_types_572,i_592))),come_value_600->type,come_value_600,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value594 = come_decrement_ref_count(__right_value594, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value595 = come_decrement_ref_count(__right_value595, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value596 = come_decrement_ref_count(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value597,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            (_if_conditional11=(((struct sType*)(__right_value598=list$1sType$ph_operator_load_element(param_types_572,i_592)))&&((struct sType*)(__right_value599=list$1sType$ph_operator_load_element(param_types_572,i_592)))->mHeap&&come_value_600->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value598,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value599,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional11) {
                std_move(((struct sType*)(__right_value600=list$1sType$ph_operator_load_element(param_types_572,i_592))),come_value_600->type,come_value_600,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value600,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_576,i_592,(struct CVALUE*)come_increment_ref_count(come_value_600));
            i_592++;
            /*c*/ come_call_finalizer3(come_value_600,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (label_595 = come_decrement_ref_count(label_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_596) ? node_596 = come_decrement_ref_count(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(    (_Bool)1) {
        if(        (_if_conditional12=(((struct CVALUE*)(__right_value601=list$1CVALUE$ph_operator_load_element(come_params_576,i_592)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value601,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional12) {
            break;
        }
        else {
            i_592++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params_415)<list$1sType$ph_length(fun_556->mParamTypes)) {
        for(        ;        i_592<list$1sType$ph_length(fun_556->mParamTypes)-(((method_block_416)?(2):(0)));        i_592++        ){
            default_param_601=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value602=list$1char$ph_operator_load_element(fun_556->mParamDefaultParametors,i_592))), "05call.c", 1144, "char*"));
            (__right_value602 = come_decrement_ref_count(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_name_608=((char*)(__right_value604=list$1char$ph_operator_load_element(fun_556->mParamNames,i_592)));
            (__right_value604 = come_decrement_ref_count(__right_value604, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            (_if_conditional13=(default_param_601&&string_operator_not_equals(default_param_601,"")&&((struct CVALUE*)(__right_value605=list$1CVALUE$ph_operator_load_element(come_params_576,i_592)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value605,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional13) {
                source_609=(struct buffer*)come_increment_ref_count(info->source);
                p_610=info->p;
                head_611=info->head;
                sline_612=info->sline;
                __dec_obj154=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_601));
                /*b*/ come_call_finalizer3(__dec_obj154,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_613=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_614=node_compile(node_613,info);
                if(                !Value_614) {
                    __result_obj__341 = (_Bool)0;
                    /*c*/ come_call_finalizer3(source_609,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((node_613) ? node_613 = come_decrement_ref_count(node_613, ((struct sNode*)node_613)->finalize, ((struct sNode*)node_613)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (default_param_601 = come_decrement_ref_count(default_param_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_571,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_572,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_576,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__341;
                }
                else {
                }
                __dec_obj155=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source_609);
                /*b*/ come_call_finalizer3(__dec_obj155,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->p=p_610;
                info->head=head_611;
                info->sline=sline_612;
                come_value_615=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj156=come_value_615->type,
                come_value_615->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_615->type,info->generics_type,info));
                /*b*/ come_call_finalizer3(__dec_obj156,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                (_if_conditional14=(((struct sType*)(__right_value610=list$1sType$ph_operator_load_element(param_types_572,i_592))))),                /*c*/ come_call_finalizer3(__right_value610,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional14) {
                    check_assign_type(((char*)(__right_value613=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value611=string_to_string(fun_name_414))),((char*)(__right_value612=int_to_string(i_592)))))),((struct sType*)(__right_value614=list$1sType$ph_operator_load_element(param_types_572,i_592))),come_value_615->type,come_value_615,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value611 = come_decrement_ref_count(__right_value611, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value612 = come_decrement_ref_count(__right_value612, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value613 = come_decrement_ref_count(__right_value613, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value614,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                (_if_conditional15=(((struct sType*)(__right_value615=list$1sType$ph_operator_load_element(param_types_572,i_592)))&&((struct sType*)(__right_value616=list$1sType$ph_operator_load_element(param_types_572,i_592)))->mHeap&&come_value_615->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value615,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value616,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional15) {
                    std_move(((struct sType*)(__right_value617=list$1sType$ph_operator_load_element(param_types_572,i_592))),come_value_615->type,come_value_615,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value617,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_576,i_592,(struct CVALUE*)come_increment_ref_count(come_value_615));
                /*c*/ come_call_finalizer3(source_609,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_613) ? node_613 = come_decrement_ref_count(node_613, ((struct sNode*)node_613)->finalize, ((struct sNode*)node_613)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_615,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                if(                (_if_conditional16=(((struct CVALUE*)(__right_value618=list$1CVALUE$ph_operator_load_element(come_params_576,i_592)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value618,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional16) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_556->mName,i_592);
                }
            }
            (default_param_601 = come_decrement_ref_count(default_param_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_556->mParamTypes)-(((method_block_416)?(2):(0)))!=list$1CVALUE$ph_length(come_params_576)&&!fun_556->mVarArgs&&string_operator_not_equals(fun_name_414,"__builtin_va_start")&&string_operator_not_equals(fun_name_414,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_414,list$1sType$ph_length(fun_556->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_415));
    }
    if(    method_block_416) {
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1194, "struct sNode");
        _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value620=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1194, "struct sCurrentNode2*")),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode2_finalize;
        _inf_value1->clone=(void*)sCurrentNode2_clone;
        _inf_value1->compile=(void*)sCurrentNode2_compile;
        _inf_value1->sline=(void*)sCurrentNode2_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode2_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_616=(struct sNode*)come_increment_ref_count(_inf_value1);
        /*c*/ come_call_finalizer3(__right_value620,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        Value_618=node_compile(current_stack_frame_node_616,info);
        if(        !Value_618) {
            __result_obj__344 = (_Bool)0;
            ((current_stack_frame_node_616) ? current_stack_frame_node_616 = come_decrement_ref_count(current_stack_frame_node_616, ((struct sNode*)current_stack_frame_node_616)->finalize, ((struct sNode*)current_stack_frame_node_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_571,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_572,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_576,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__344;
        }
        else {
        }
        come_value_619=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj158=come_value_619->type,
        come_value_619->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_619->type,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1CVALUE$ph_push_back(come_params_576,(struct CVALUE*)come_increment_ref_count(come_value_619));
        method_block2_620=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1204, "struct buffer*"))));
        method_block_type_621=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value628=list$1sType$ph_operator_load_element(fun_556->mParamTypes,-1)))));
        /*c*/ come_call_finalizer3(__right_value628,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        class_name_622=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value631=list$1sType$ph_operator_load_element(method_block_type_621->mParamTypes,0)))->mClass=((struct sClass*)(__right_value632=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_622)));
        /*c*/ come_call_finalizer3(__right_value631,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value632,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        current_stack_frame_struct_629=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value633=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_622)));
        /*c*/ come_call_finalizer3(__right_value633,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->num_method_block++;
        num_method_block_630=info->num_method_block;
        if(        string_operator_not_equals(method_block_type_621->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name_414);
        }
        result_type_631=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_621->mResultType));
        result_type_631->mStatic=(_Bool)0;
        param_types_632=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type_621->mParamTypes));
        param_names_633=method_block_type_621->mParamNames;
        all_alhabet_sname_634=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1226, "struct buffer*"))));
        {
            p_635=info->sname;
            while(            *p_635) {
                if(                xisalnum(*p_635)) {
                    buffer_append_char(all_alhabet_sname_634,*p_635++);
                }
                else {
                    p_635++;
                }
            }
        }
        buffer_append_format(method_block2_620,"%s fun_block%d_%s(",((char*)(__right_value638=make_type_name_string(result_type_631,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),num_method_block_630,((char*)(__right_value639=buffer_to_string(all_alhabet_sname_634))));
        (__right_value638 = come_decrement_ref_count(__right_value638, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value639 = come_decrement_ref_count(__right_value639, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        i_592=0;
        for(        o2_saved_636=(struct list$1sType$ph*)come_increment_ref_count((param_types_632)),it_637=list$1sType$ph_begin((o2_saved_636));        !list$1sType$ph_end((o2_saved_636));        it_637=list$1sType$ph_next((o2_saved_636))        ){
            param_type_638=it_637;
            if(            i_592==0) {
                param_name_639=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_620,"%s",((char*)(__right_value641=make_define_var(param_type_638,param_name_639,(_Bool)0,info))));
                (__right_value641 = come_decrement_ref_count(__right_value641, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_639 = come_decrement_ref_count(param_name_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            i_592==1) {
                param_name_640=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_620,"%s",((char*)(__right_value643=make_define_var_no_solved(param_type_638,param_name_640,(_Bool)0,(_Bool)1,info))));
                (__right_value643 = come_decrement_ref_count(__right_value643, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_640 = come_decrement_ref_count(param_name_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                param_name_641=(char*)come_increment_ref_count(xsprintf("it%d",i_592));
                buffer_append_format(method_block2_620,"%s",((char*)(__right_value645=make_define_var_no_solved(param_type_638,param_name_641,(_Bool)0,(_Bool)1,info))));
                (__right_value645 = come_decrement_ref_count(__right_value645, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (param_name_641 = come_decrement_ref_count(param_name_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            i_592!=list$1sType$ph_length(param_types_632)-1) {
                buffer_append_str(method_block2_620,",");
            }
            i_592++;
        }
        /*c*/ come_call_finalizer3(o2_saved_636,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(method_block2_620,")\n");
        buffer_append_str(method_block2_620,((char*)(__right_value646=buffer_to_string(method_block_416))));
        (__right_value646 = come_decrement_ref_count(__right_value646, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        source3_642=(struct buffer*)come_increment_ref_count(info->source);
        p_643=info->p;
        head_644=info->head;
        sline_645=info->sline;
        __dec_obj159=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2_620);
        /*b*/ come_call_finalizer3(__dec_obj159,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_417;
        node_646=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_647=node_compile(node_646,info);
        if(        !Value_647) {
            __result_obj__353 = (_Bool)0;
            ((current_stack_frame_node_616) ? current_stack_frame_node_616 = come_decrement_ref_count(current_stack_frame_node_616, ((struct sNode*)current_stack_frame_node_616)->finalize, ((struct sNode*)current_stack_frame_node_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_619,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block2_620,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_block_type_621,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (class_name_622 = come_decrement_ref_count(class_name_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_631,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_632,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(all_alhabet_sname_634,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(source3_642,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_646) ? node_646 = come_decrement_ref_count(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_571,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_572,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_576,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__353;
        }
        else {
        }
        method_block_name_648=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block_630,((char*)(__right_value648=buffer_to_string(all_alhabet_sname_634)))));
        (__right_value648 = come_decrement_ref_count(__right_value648, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_649=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1291, "struct CVALUE*"))));
        fun2_650=((struct sFun*)(__right_value653=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value652=__builtin_string(method_block_name_648))),((void*)0))));
        (__right_value652 = come_decrement_ref_count(__right_value652, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value653,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun2_650==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name_648);
        }
        method_block_type2_651=fun2_650->mLambdaType;
        __dec_obj160=come_value2_649->c_value,
        come_value2_649->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_648));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj161=come_value2_649->type,
        come_value2_649->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_651));
        /*b*/ come_call_finalizer3(__dec_obj161,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_649->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_576,(struct CVALUE*)come_increment_ref_count(come_value2_649));
        __dec_obj162=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_642);
        /*b*/ come_call_finalizer3(__dec_obj162,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_643;
        info->head=head_644;
        info->sline=sline_645;
        info->current_stack_frame_struct=current_stack_frame_struct_629;
        ((current_stack_frame_node_616) ? current_stack_frame_node_616 = come_decrement_ref_count(current_stack_frame_node_616, ((struct sNode*)current_stack_frame_node_616)->finalize, ((struct sNode*)current_stack_frame_node_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_619,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_620,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_621,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_622 = come_decrement_ref_count(class_name_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_631,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_632,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_634,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_642,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_646) ? node_646 = come_decrement_ref_count(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_648 = come_decrement_ref_count(method_block_name_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_649,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_652=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1315, "struct buffer*"))));
    buffer_append_str(buf_652,fun_name_414);
    buffer_append_str(buf_652,"(");
    j_653=0;
    for(    o2_saved_654=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_576)),it_655=list$1CVALUE$ph_begin((o2_saved_654));    !list$1CVALUE$ph_end((o2_saved_654));    it_655=list$1CVALUE$ph_next((o2_saved_654))    ){
        buffer_append_str(buf_652,it_655->c_value);
        if(        j_653!=list$1CVALUE$ph_length(come_params_576)-1) {
            buffer_append_str(buf_652,",");
        }
        j_653++;
    }
    /*c*/ come_call_finalizer3(o2_saved_654,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_652,")");
    come_value_656=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1332, "struct CVALUE*"))));
    __dec_obj163=come_value_656->c_value,
    come_value_656->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_652));
    __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj164=come_value_656->type,
    come_value_656->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_571));
    /*b*/ come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_656->type->mStatic=(_Bool)0;
    come_value_656->var=((void*)0);
    if(    fun_556->mResultType->mHeap) {
        append_object_to_right_values2(come_value_656,(struct sType*)come_increment_ref_count(result_type_571),info,(_Bool)0,((void*)0),((void*)0));
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_calloc_v2")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")&&string_operator_not_equals(info->come_fun->mName,"come_free_v2")) {
        if(        string_operator_not_equals(fun_name_414,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_414,"null_check")&&string_operator_not_equals(fun_name_414,"come_push_stackframe")&&string_operator_not_equals(fun_name_414,"come_push_stackframe_v2")&&string_operator_not_equals(fun_name_414,"come_pop_stackframe")&&string_operator_not_equals(fun_name_414,"come_pop_stackframe_v2")) {
            __dec_obj165=come_value_656->c_value,
            come_value_656->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_656->c_value,come_value_656->type,info));
            __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    add_come_last_code(info,"%s",come_value_656->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_656));
    info->calling_fun=fun_556;
    __result_obj__354 = (_Bool)1;
    (fun_name_414 = come_decrement_ref_count(fun_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_571,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_572,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_576,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_652,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_656,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__354;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__266;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_406;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_407;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__271;
    if(    self==((void*)0)) {
        __result_obj__266 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__266,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__266;
    }
    result_406=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_407=self->head;
    while(    it_407!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_406,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_407->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_406,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_407->item)));
        }
        it_407=it_407->next;
    }
    __result_obj__271 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_406);
    /*c*/ come_call_finalizer3(result_406,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__271,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_404;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_405;
    it_404=self->head;
    while(    it_404!=((void*)0)) {
        prev_it_405=it_404;
        it_404=it_404->next;
        /*c*/ come_call_finalizer3(prev_it_405,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__267;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__267 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__267,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__267;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value368 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_408;
struct tuple2$2char$phsNode$ph* __dec_obj76;
void* __right_value369 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_409;
struct tuple2$2char$phsNode$ph* __dec_obj77;
void* __right_value370 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_410;
struct tuple2$2char$phsNode$ph* __dec_obj78;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__268;
    if(    self->len==0) {
        litem_408=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value368=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_408->prev=((void*)0);
        litem_408->next=((void*)0);
        __dec_obj76=litem_408->item,
        litem_408->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj76,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_408;
        self->head=litem_408;
    }
    else if(    self->len==1) {
        litem_409=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value369=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_409->prev=self->head;
        litem_409->next=((void*)0);
        __dec_obj77=litem_409->item,
        litem_409->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj77,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_409;
        self->head->next=litem_409;
    }
    else {
        litem_410=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value370=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_410->prev=self->tail;
        litem_410->next=((void*)0);
        __dec_obj78=litem_410->item,
        litem_410->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj78,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_410;
        self->tail=litem_410;
    }
    self->len++;
    __result_obj__268 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__268;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__269;
void* __right_value371 = (void*)0;
struct tuple2$2char$phsNode$ph* result_411;
void* __right_value372 = (void*)0;
char* __dec_obj79;
void* __right_value373 = (void*)0;
struct sNode* __dec_obj80;
struct tuple2$2char$phsNode$ph* __result_obj__270;
    if(    self==(void*)0) {
        __result_obj__269 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__269,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__269;
    }
    result_411=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj79=result_411->v1,
        result_411->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj80=result_411->v2,
        result_411->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__270 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_411);
    /*c*/ come_call_finalizer3(result_411,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__270,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_412;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_413;
    it_412=self->head;
    while(    it_412!=((void*)0)) {
        prev_it_413=it_412;
        it_412=it_412->next;
        /*c*/ come_call_finalizer3(prev_it_413,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__274;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__274 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__274,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_422;
struct list_item$1CVALUE$ph* prev_it_423;
    it_422=self->head;
    while(    it_422!=((void*)0)) {
        prev_it_423=it_422;
        it_422=it_422->next;
        /*c*/ come_call_finalizer3(prev_it_423,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_426;
struct tuple2$2char$phsNode$ph* __result_obj__275;
struct tuple2$2char$phsNode$ph* __result_obj__276;
struct tuple2$2char$phsNode$ph* result_427;
struct tuple2$2char$phsNode$ph* __result_obj__277;
result_426 = (void*)0;
result_427 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_426,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__275 = result_426;
        return __result_obj__275;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__276 = self->it->item;
        return __result_obj__276;
    }
    memset(&result_427,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__277 = result_427;
    return __result_obj__277;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_429;
struct tuple2$2char$phsNode$ph* __result_obj__278;
struct tuple2$2char$phsNode$ph* __result_obj__279;
struct tuple2$2char$phsNode$ph* result_430;
struct tuple2$2char$phsNode$ph* __result_obj__280;
result_429 = (void*)0;
result_430 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_429,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__278 = result_429;
        return __result_obj__278;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__279 = self->it->item;
        return __result_obj__279;
    }
    memset(&result_430,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__280 = result_430;
    return __result_obj__280;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_435;
int i_436;
struct sType* __result_obj__282;
struct sType* default_value_437;
struct sType* __result_obj__283;
default_value_437 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_435=self->head;
    i_436=0;
    while(    it_435!=((void*)0)) {
        if(        position==i_436) {
            __result_obj__282 = (struct sType*)come_increment_ref_count(it_435->item);
            /*c*/ come_call_finalizer3(__result_obj__282,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__282;
        }
        it_435=it_435->next;
        i_436++;
    }
    memset(&default_value_437,0,sizeof(struct sType*));
    __result_obj__283 = (struct sType*)come_increment_ref_count(default_value_437);
    /*c*/ come_call_finalizer3(default_value_437,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__283,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__283;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_438;
int i_439;
struct sType* __result_obj__284;
struct sType* default_value_440;
struct sType* __result_obj__285;
default_value_440 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_438=self->head;
    i_439=0;
    while(    it_438!=((void*)0)) {
        if(        position==i_439) {
            __result_obj__284 = (struct sType*)come_increment_ref_count(it_438->item);
            /*c*/ come_call_finalizer3(__result_obj__284,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__284;
        }
        it_438=it_438->next;
        i_439++;
    }
    memset(&default_value_440,0,sizeof(struct sType*));
    __result_obj__285 = (struct sType*)come_increment_ref_count(default_value_440);
    /*c*/ come_call_finalizer3(default_value_440,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__285,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_444;
struct CVALUE* __result_obj__286;
struct CVALUE* __result_obj__287;
struct CVALUE* result_445;
struct CVALUE* __result_obj__288;
result_444 = (void*)0;
result_445 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_444,0,sizeof(struct CVALUE*));
        __result_obj__286 = result_444;
        return __result_obj__286;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__287 = self->it->item;
        return __result_obj__287;
    }
    memset(&result_445,0,sizeof(struct CVALUE*));
    __result_obj__288 = result_445;
    return __result_obj__288;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_447;
struct CVALUE* __result_obj__289;
struct CVALUE* __result_obj__290;
struct CVALUE* result_448;
struct CVALUE* __result_obj__291;
result_447 = (void*)0;
result_448 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_447,0,sizeof(struct CVALUE*));
        __result_obj__289 = result_447;
        return __result_obj__289;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__290 = self->it->item;
        return __result_obj__290;
    }
    memset(&result_448,0,sizeof(struct CVALUE*));
    __result_obj__291 = result_448;
    return __result_obj__291;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_451;
unsigned int it_452;
struct sGenericsFun* __result_obj__293;
struct sGenericsFun* __result_obj__294;
struct sGenericsFun* __result_obj__295;
struct sGenericsFun* __result_obj__296;
    hash_451=string_get_hash_key(((char*)key))%self->size;
    it_452=hash_451;
    while(    (_Bool)1) {
        if(        self->item_existance[it_452]) {
            if(            string_equals(self->keys[it_452],key)) {
                __result_obj__293 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_452]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__293,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__293;
            }
            it_452++;
            if(            it_452>=self->size) {
                it_452=0;
            }
            else if(            it_452==hash_451) {
                __result_obj__294 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__294,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__294;
            }
        }
        else {
            __result_obj__295 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__295,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__295;
        }
    }
    __result_obj__296 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__296,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__296;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mImplType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mGenericsTypeNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mMethodGenericsTypeNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_459;
unsigned int it_460;
struct sFun* __result_obj__297;
struct sFun* __result_obj__298;
struct sFun* __result_obj__299;
struct sFun* __result_obj__300;
    hash_459=string_get_hash_key(((char*)key))%self->size;
    it_460=hash_459;
    while(    (_Bool)1) {
        if(        self->item_existance[it_460]) {
            if(            string_equals(self->keys[it_460],key)) {
                __result_obj__297 = (struct sFun*)come_increment_ref_count(self->items[it_460]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__297,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__297;
            }
            it_460++;
            if(            it_460>=self->size) {
                it_460=0;
            }
            else if(            it_460==hash_459) {
                __result_obj__298 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__298,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__298;
            }
        }
        else {
            __result_obj__299 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__299,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__299;
        }
    }
    __result_obj__300 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__300,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mLambdaType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_465;
int i_466;
struct CVALUE* __result_obj__302;
struct CVALUE* default_value_467;
struct CVALUE* __result_obj__303;
default_value_467 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_465=self->head;
    i_466=0;
    while(    it_465!=((void*)0)) {
        if(        position==i_466) {
            __result_obj__302 = (struct CVALUE*)come_increment_ref_count(it_465->item);
            /*c*/ come_call_finalizer3(__result_obj__302,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__302;
        }
        it_465=it_465->next;
        i_466++;
    }
    memset(&default_value_467,0,sizeof(struct CVALUE*));
    __result_obj__303 = (struct CVALUE*)come_increment_ref_count(default_value_467);
    /*c*/ come_call_finalizer3(default_value_467,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__303,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__303;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_468;
int i_469;
struct CVALUE* __result_obj__304;
struct CVALUE* default_value_470;
struct CVALUE* __result_obj__305;
default_value_470 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_468=self->head;
    i_469=0;
    while(    it_468!=((void*)0)) {
        if(        position==i_469) {
            __result_obj__304 = (struct CVALUE*)come_increment_ref_count(it_468->item);
            /*c*/ come_call_finalizer3(__result_obj__304,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__304;
        }
        it_468=it_468->next;
        i_469++;
    }
    memset(&default_value_470,0,sizeof(struct CVALUE*));
    __result_obj__305 = (struct CVALUE*)come_increment_ref_count(default_value_470);
    /*c*/ come_call_finalizer3(default_value_470,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__305,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__305;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_476;
int i_477;
struct sType* default_value_478;
struct list$1sType$ph* __result_obj__307;
struct list_item$1sType$ph* it_482;
int i_483;
struct sType* __dec_obj90;
struct list$1sType$ph* __result_obj__308;
default_value_478 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_476=self->len;
        for(        i_477=0;        i_477<position-len_476;        i_477++        ){
            memset(&default_value_478,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_478));
            /*c*/ come_call_finalizer3(default_value_478,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__307 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__307;
    }
    it_482=self->head;
    i_483=0;
    while(    it_482!=((void*)0)) {
        if(        position==i_483) {
            __dec_obj90=it_482->item,
            it_482->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_482=it_482->next;
        i_483++;
    }
    __result_obj__308 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value409 = (void*)0;
struct list_item$1sType$ph* litem_479;
struct sType* __dec_obj87;
void* __right_value410 = (void*)0;
struct list_item$1sType$ph* litem_480;
struct sType* __dec_obj88;
void* __right_value411 = (void*)0;
struct list_item$1sType$ph* litem_481;
struct sType* __dec_obj89;
struct list$1sType$ph* __result_obj__306;
    if(    self->len==0) {
        litem_479=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value409=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_479->prev=((void*)0);
        litem_479->next=((void*)0);
        __dec_obj87=litem_479->item,
        litem_479->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_479;
        self->head=litem_479;
    }
    else if(    self->len==1) {
        litem_480=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value410=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_480->prev=self->head;
        litem_480->next=((void*)0);
        __dec_obj88=litem_480->item,
        litem_480->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_480;
        self->head->next=litem_480;
    }
    else {
        litem_481=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value411=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_481->prev=self->tail;
        litem_481->next=((void*)0);
        __dec_obj89=litem_481->item,
        litem_481->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_481;
        self->tail=litem_481;
    }
    self->len++;
    __result_obj__306 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__306;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_486;
struct sType* __result_obj__309;
struct sType* __result_obj__310;
struct sType* result_487;
struct sType* __result_obj__311;
result_486 = (void*)0;
result_487 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_486,0,sizeof(struct sType*));
        __result_obj__309 = result_486;
        return __result_obj__309;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__310 = self->it->item;
        return __result_obj__310;
    }
    memset(&result_487,0,sizeof(struct sType*));
    __result_obj__311 = result_487;
    return __result_obj__311;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_489;
struct sType* __result_obj__312;
struct sType* __result_obj__313;
struct sType* result_490;
struct sType* __result_obj__314;
result_489 = (void*)0;
result_490 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_489,0,sizeof(struct sType*));
        __result_obj__312 = result_489;
        return __result_obj__312;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__313 = self->it->item;
        return __result_obj__313;
    }
    memset(&result_490,0,sizeof(struct sType*));
    __result_obj__314 = result_490;
    return __result_obj__314;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value419 = (void*)0;
struct list_item$1CVALUE$ph* litem_501;
struct CVALUE* __dec_obj92;
void* __right_value420 = (void*)0;
struct list_item$1CVALUE$ph* litem_502;
struct CVALUE* __dec_obj93;
void* __right_value421 = (void*)0;
struct list_item$1CVALUE$ph* litem_503;
struct CVALUE* __dec_obj94;
struct list$1CVALUE$ph* __result_obj__316;
    if(    self->len==0) {
        litem_501=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value419=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1CVALUE$ph*"))));
        litem_501->prev=((void*)0);
        litem_501->next=((void*)0);
        __dec_obj92=litem_501->item,
        litem_501->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj92,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_501;
        self->head=litem_501;
    }
    else if(    self->len==1) {
        litem_502=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value420=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1CVALUE$ph*"))));
        litem_502->prev=self->head;
        litem_502->next=((void*)0);
        __dec_obj93=litem_502->item,
        litem_502->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj93,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_502;
        self->head->next=litem_502;
    }
    else {
        litem_503=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value421=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1CVALUE$ph*"))));
        litem_503->prev=self->tail;
        litem_503->next=((void*)0);
        __dec_obj94=litem_503->item,
        litem_503->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj94,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_503;
        self->tail=litem_503;
    }
    self->len++;
    __result_obj__316 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__316;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_509;
unsigned int it_510;
struct map$2char$phsFun$ph* __result_obj__317;
    hash_509=string_get_hash_key(((char*)key))%self->size;
    it_510=hash_509;
    while(    (_Bool)1) {
        if(        self->item_existance[it_510]) {
            if(            string_equals(self->keys[it_510],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_510]);
                self->item_existance[it_510]=(_Bool)0;
                if(                1) {
                    (self->keys[it_510] = come_decrement_ref_count(self->keys[it_510], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_510]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_510],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_510]=((void*)0);
                self->len--;
                break;
            }
            it_510++;
            if(            it_510>=self->size) {
                it_510=0;
            }
            else if(            it_510==hash_509) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__317 = self;
    return __result_obj__317;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_547;
unsigned int hash_548;
unsigned int it_549;
struct sFun* __result_obj__322;
struct sFun* __result_obj__323;
struct sFun* __result_obj__324;
struct sFun* __result_obj__325;
default_value_547 = (void*)0;
    memset(&default_value_547,0,sizeof(struct sFun*));
    hash_548=string_get_hash_key(((char*)key))%self->size;
    it_549=hash_548;
    while(    (_Bool)1) {
        if(        self->item_existance[it_549]) {
            if(            string_equals(self->keys[it_549],key)) {
                __result_obj__322 = (struct sFun*)come_increment_ref_count(self->items[it_549]);
                /*c*/ come_call_finalizer3(default_value_547,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__322,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__322;
            }
            it_549++;
            if(            it_549>=self->size) {
                it_549=0;
            }
            else if(            it_549==hash_548) {
                __result_obj__323 = (struct sFun*)come_increment_ref_count(default_value_547);
                /*c*/ come_call_finalizer3(default_value_547,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__323,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__323;
            }
        }
        else {
            __result_obj__324 = (struct sFun*)come_increment_ref_count(default_value_547);
            /*c*/ come_call_finalizer3(default_value_547,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__324,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__324;
        }
    }
    __result_obj__325 = (struct sFun*)come_increment_ref_count(default_value_547);
    /*c*/ come_call_finalizer3(default_value_547,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__325,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__325;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_550;
unsigned int hash_551;
unsigned int it_552;
struct sFun* __result_obj__326;
struct sFun* __result_obj__327;
struct sFun* __result_obj__328;
struct sFun* __result_obj__329;
default_value_550 = (void*)0;
    memset(&default_value_550,0,sizeof(struct sFun*));
    hash_551=string_get_hash_key(((char*)key))%self->size;
    it_552=hash_551;
    while(    (_Bool)1) {
        if(        self->item_existance[it_552]) {
            if(            string_equals(self->keys[it_552],key)) {
                __result_obj__326 = (struct sFun*)come_increment_ref_count(self->items[it_552]);
                /*c*/ come_call_finalizer3(default_value_550,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__326,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__326;
            }
            it_552++;
            if(            it_552>=self->size) {
                it_552=0;
            }
            else if(            it_552==hash_551) {
                __result_obj__327 = (struct sFun*)come_increment_ref_count(default_value_550);
                /*c*/ come_call_finalizer3(default_value_550,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__327,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__327;
            }
        }
        else {
            __result_obj__328 = (struct sFun*)come_increment_ref_count(default_value_550);
            /*c*/ come_call_finalizer3(default_value_550,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__328,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__328;
        }
    }
    __result_obj__329 = (struct sFun*)come_increment_ref_count(default_value_550);
    /*c*/ come_call_finalizer3(default_value_550,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__329,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__329;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_587;
int i_588;
struct CVALUE* default_value_589;
struct list$1CVALUE$ph* __result_obj__333;
struct list_item$1CVALUE$ph* it_590;
int i_591;
struct CVALUE* __dec_obj151;
struct list$1CVALUE$ph* __result_obj__334;
default_value_589 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_587=self->len;
        for(        i_588=0;        i_588<position-len_587;        i_588++        ){
            memset(&default_value_589,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_589));
            /*c*/ come_call_finalizer3(default_value_589,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__333 = self;
        /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__333;
    }
    it_590=self->head;
    i_591=0;
    while(    it_590!=((void*)0)) {
        if(        position==i_591) {
            __dec_obj151=it_590->item,
            it_590->item=(struct CVALUE*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj151,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_590=it_590->next;
        i_591++;
    }
    __result_obj__334 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__334;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_602;
int i_603;
char* __result_obj__337;
char* default_value_604;
char* __result_obj__338;
default_value_604 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_602=self->head;
    i_603=0;
    while(    it_602!=((void*)0)) {
        if(        position==i_603) {
            __result_obj__337 = (char*)come_increment_ref_count(it_602->item);
            (__result_obj__337 = come_decrement_ref_count(__result_obj__337, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__337;
        }
        it_602=it_602->next;
        i_603++;
    }
    memset(&default_value_604,0,sizeof(char*));
    __result_obj__338 = (char*)come_increment_ref_count(default_value_604);
    (default_value_604 = come_decrement_ref_count(default_value_604, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__338 = come_decrement_ref_count(__result_obj__338, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__338;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_605;
int i_606;
char* __result_obj__339;
char* default_value_607;
char* __result_obj__340;
default_value_607 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_605=self->head;
    i_606=0;
    while(    it_605!=((void*)0)) {
        if(        position==i_606) {
            __result_obj__339 = (char*)come_increment_ref_count(it_605->item);
            (__result_obj__339 = come_decrement_ref_count(__result_obj__339, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__339;
        }
        it_605=it_605->next;
        i_606++;
    }
    memset(&default_value_607,0,sizeof(char*));
    __result_obj__340 = (char*)come_increment_ref_count(default_value_607);
    (default_value_607 = come_decrement_ref_count(default_value_607, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__340 = come_decrement_ref_count(__result_obj__340, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__340;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
struct sCurrentNode2* __result_obj__342;
void* __right_value621 = (void*)0;
struct sCurrentNode2* result_617;
void* __right_value622 = (void*)0;
char* __dec_obj157;
struct sCurrentNode2* __result_obj__343;
    if(    self==(void*)0) {
        __result_obj__342 = (void*)0;
        return __result_obj__342;
    }
    result_617=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*"));
    if(    self!=((void*)0)) {
        result_617->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj157=result_617->sname,
        result_617->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode2_clone", 5, "char*"));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_617->sline_real=self->sline_real;
    }
    __result_obj__343 = result_617;
    /*c*/ come_call_finalizer3(result_617,sCurrentNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__343;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_623;
unsigned int hash_624;
unsigned int it_625;
struct sClass* __result_obj__345;
struct sClass* __result_obj__346;
struct sClass* __result_obj__347;
struct sClass* __result_obj__348;
default_value_623 = (void*)0;
    memset(&default_value_623,0,sizeof(struct sClass*));
    hash_624=string_get_hash_key(((char*)key))%self->size;
    it_625=hash_624;
    while(    (_Bool)1) {
        if(        self->item_existance[it_625]) {
            if(            string_equals(self->keys[it_625],key)) {
                __result_obj__345 = (struct sClass*)come_increment_ref_count(self->items[it_625]);
                /*c*/ come_call_finalizer3(default_value_623,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__345,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__345;
            }
            it_625++;
            if(            it_625>=self->size) {
                it_625=0;
            }
            else if(            it_625==hash_624) {
                __result_obj__346 = (struct sClass*)come_increment_ref_count(default_value_623);
                /*c*/ come_call_finalizer3(default_value_623,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__346,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__346;
            }
        }
        else {
            __result_obj__347 = (struct sClass*)come_increment_ref_count(default_value_623);
            /*c*/ come_call_finalizer3(default_value_623,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__347,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__347;
        }
    }
    __result_obj__348 = (struct sClass*)come_increment_ref_count(default_value_623);
    /*c*/ come_call_finalizer3(default_value_623,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__348,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__348;
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_626;
unsigned int hash_627;
unsigned int it_628;
struct sClass* __result_obj__349;
struct sClass* __result_obj__350;
struct sClass* __result_obj__351;
struct sClass* __result_obj__352;
default_value_626 = (void*)0;
    memset(&default_value_626,0,sizeof(struct sClass*));
    hash_627=string_get_hash_key(((char*)key))%self->size;
    it_628=hash_627;
    while(    (_Bool)1) {
        if(        self->item_existance[it_628]) {
            if(            string_equals(self->keys[it_628],key)) {
                __result_obj__349 = (struct sClass*)come_increment_ref_count(self->items[it_628]);
                /*c*/ come_call_finalizer3(default_value_626,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__349,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__349;
            }
            it_628++;
            if(            it_628>=self->size) {
                it_628=0;
            }
            else if(            it_628==hash_627) {
                __result_obj__350 = (struct sClass*)come_increment_ref_count(default_value_626);
                /*c*/ come_call_finalizer3(default_value_626,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__350,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__350;
            }
        }
        else {
            __result_obj__351 = (struct sClass*)come_increment_ref_count(default_value_626);
            /*c*/ come_call_finalizer3(default_value_626,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__351,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__351;
        }
    }
    __result_obj__352 = (struct sClass*)come_increment_ref_count(default_value_626);
    /*c*/ come_call_finalizer3(default_value_626,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__352,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__352;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value663 = (void*)0;
struct buffer* __dec_obj166;
struct sComeCallNode* __result_obj__355;
    ((struct sNodeBase*)(__right_value663=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value663,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj166=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    /*b*/ come_call_finalizer3(__dec_obj166,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__355 = (struct sComeCallNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__355,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__355;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value664 = (void*)0;
char* __result_obj__356;
    __result_obj__356 = (char*)come_increment_ref_count(((char*)(__right_value664=__builtin_string("sComeCallNode"))));
    (__right_value664 = come_decrement_ref_count(__right_value664, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__356 = come_decrement_ref_count(__result_obj__356, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__356;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_657;
struct buffer* come_block_658;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct list$1CVALUE$ph* come_params_659;
void* __right_value667 = (void*)0;
char* var_name_661;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sType* type__662;
void* __right_value671 = (void*)0;
struct sNode* var_node_665;
_Bool Value_666;
_Bool __result_obj__361;
void* __right_value672 = (void*)0;
struct CVALUE* thread_var_value_667;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct CVALUE* come_value_668;
void* __right_value675 = (void*)0;
char* __dec_obj167;
struct sType* __dec_obj168;
void* __right_value676 = (void*)0;
struct sNode* null_node_669;
_Bool Value_670;
_Bool __result_obj__362;
void* __right_value677 = (void*)0;
struct CVALUE* __dec_obj169;
void* __right_value678 = (void*)0;
struct sType* __dec_obj170;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value681 = (void*)0;
struct sNode* current_stack_frame_node_671;
_Bool Value_672;
_Bool __result_obj__363;
void* __right_value682 = (void*)0;
struct CVALUE* current_stack_frame_value_673;
void* __right_value683 = (void*)0;
char* fun_name_674;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct buffer* come_block2_675;
void* __right_value686 = (void*)0;
char* class_name_676;
void* __right_value687 = (void*)0;
struct sClass* current_stack_frame_struct_677;
void* __right_value688 = (void*)0;
struct buffer* source3_678;
char* p_679;
char* head_680;
int sline_681;
struct buffer* __dec_obj171;
void* __right_value689 = (void*)0;
struct sNode* node_682;
_Bool in_method_block_683;
_Bool Value_684;
_Bool __result_obj__364;
struct buffer* __dec_obj172;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct CVALUE* fun_value_685;
void* __right_value692 = (void*)0;
char* __dec_obj173;
struct sType* __dec_obj174;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct buffer* buf_686;
void* __right_value695 = (void*)0;
char* fun_name_687;
int j_688;
struct list$1CVALUE$ph* o2_saved_689;
struct CVALUE* it_690;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct CVALUE* come_value_691;
void* __right_value698 = (void*)0;
char* __dec_obj175;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct sType* type_692;
struct sType* __dec_obj176;
_Bool __result_obj__365;
    come_block_sline_657=self->come_block_sline;
    come_block_658=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_659=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1383, "struct list$1CVALUE$ph*"))));
    static int thread_num_660=0;
    thread_num_660++;
    var_name_661=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_660));
    type__662=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value669=map$2char$phsType$ph_at(info->types,((char*)(__right_value668=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value668 = come_decrement_ref_count(__right_value668, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value669,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type__662==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
    }
    var_node_665=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_661),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__662),(_Bool)1,((void*)0),info,(_Bool)0));
    Value_666=node_compile(var_node_665,info);
    if(    !Value_666) {
        __result_obj__361 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_658,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_659,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_661 = come_decrement_ref_count(var_name_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__662,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_665) ? var_node_665 = come_decrement_ref_count(var_node_665, ((struct sNode*)var_node_665)->finalize, ((struct sNode*)var_node_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__361;
    }
    else {
    }
    thread_var_value_667=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_668=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1404, "struct CVALUE*"))));
    __dec_obj167=come_value_668->c_value,
    come_value_668->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_667->c_value));
    __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj168=come_value_668->type,
    come_value_668->type=(struct sType*)come_increment_ref_count(thread_var_value_667->type);
    /*b*/ come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_668->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_659,(struct CVALUE*)come_increment_ref_count(come_value_668));
    null_node_669=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_670=node_compile(null_node_669,info);
    if(    !Value_670) {
        __result_obj__362 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_658,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_659,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_661 = come_decrement_ref_count(var_name_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__662,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_665) ? var_node_665 = come_decrement_ref_count(var_node_665, ((struct sNode*)var_node_665)->finalize, ((struct sNode*)var_node_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_667,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_668,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_669) ? null_node_669 = come_decrement_ref_count(null_node_669, ((struct sNode*)null_node_669)->finalize, ((struct sNode*)null_node_669)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__362;
    }
    else {
    }
    __dec_obj169=come_value_668,
    come_value_668=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    /*b*/ come_call_finalizer3(__dec_obj169,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj170=come_value_668->type,
    come_value_668->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_668->type,info->generics_type,info));
    /*b*/ come_call_finalizer3(__dec_obj170,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1CVALUE$ph_push_back(come_params_659,(struct CVALUE*)come_increment_ref_count(come_value_668));
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1423, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value680=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc_v2(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1423, "struct sCurrentNode2*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_671=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*c*/ come_call_finalizer3(__right_value680,sCurrentNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_672=node_compile(current_stack_frame_node_671,info);
    if(    !Value_672) {
        __result_obj__363 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_658,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_659,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_661 = come_decrement_ref_count(var_name_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__662,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_665) ? var_node_665 = come_decrement_ref_count(var_node_665, ((struct sNode*)var_node_665)->finalize, ((struct sNode*)var_node_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_667,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_668,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_669) ? null_node_669 = come_decrement_ref_count(null_node_669, ((struct sNode*)null_node_669)->finalize, ((struct sNode*)null_node_669)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_671) ? current_stack_frame_node_671 = come_decrement_ref_count(current_stack_frame_node_671, ((struct sNode*)current_stack_frame_node_671)->finalize, ((struct sNode*)current_stack_frame_node_671)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__363;
    }
    else {
    }
    current_stack_frame_value_673=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name_674=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_660));
    come_block2_675=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1433, "struct buffer*"))));
    class_name_676=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_675,"void* %s(%s* parent)\n",fun_name_674,class_name_676);
    buffer_append_str(come_block2_675,((char*)(__right_value687=buffer_to_string(come_block_658))));
    (__right_value687 = come_decrement_ref_count(__right_value687, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    current_stack_frame_struct_677=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value688=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_676)));
    /*c*/ come_call_finalizer3(__right_value688,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    source3_678=(struct buffer*)come_increment_ref_count(info->source);
    p_679=info->p;
    head_680=info->head;
    sline_681=info->sline;
    __dec_obj171=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2_675);
    /*b*/ come_call_finalizer3(__dec_obj171,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_657;
    node_682=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_683=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_684=node_compile(node_682,info);
    if(    !Value_684) {
        __result_obj__364 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_block_658,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_659,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_661 = come_decrement_ref_count(var_name_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type__662,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((var_node_665) ? var_node_665 = come_decrement_ref_count(var_node_665, ((struct sNode*)var_node_665)->finalize, ((struct sNode*)var_node_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(thread_var_value_667,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_668,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((null_node_669) ? null_node_669 = come_decrement_ref_count(null_node_669, ((struct sNode*)null_node_669)->finalize, ((struct sNode*)null_node_669)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((current_stack_frame_node_671) ? current_stack_frame_node_671 = come_decrement_ref_count(current_stack_frame_node_671, ((struct sNode*)current_stack_frame_node_671)->finalize, ((struct sNode*)current_stack_frame_node_671)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(current_stack_frame_value_673,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_674 = come_decrement_ref_count(fun_name_674, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_block2_675,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_676 = come_decrement_ref_count(class_name_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_678,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_682) ? node_682 = come_decrement_ref_count(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__364;
    }
    else {
    }
    info->in_method_block=in_method_block_683;
    __dec_obj172=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_678);
    /*b*/ come_call_finalizer3(__dec_obj172,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_679;
    info->head=head_680;
    info->sline=sline_681;
    info->current_stack_frame_struct=current_stack_frame_struct_677;
    fun_value_685=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1478, "struct CVALUE*"))));
    __dec_obj173=fun_value_685->c_value,
    fun_value_685->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_674));
    __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj174=come_value_668->type,
    come_value_668->type=((void*)0);
    /*b*/ come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_668->var=((void*)0);
    list$1CVALUE$ph_add(come_params_659,(struct CVALUE*)come_increment_ref_count(fun_value_685));
    list$1CVALUE$ph_add(come_params_659,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_673));
    buf_686=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1488, "struct buffer*"))));
    (fun_name_674 = come_decrement_ref_count(fun_name_674, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fun_name_687=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_686,"(");
    buffer_append_str(buf_686,fun_name_687);
    buffer_append_str(buf_686,"(");
    j_688=0;
    for(    o2_saved_689=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_659)),it_690=list$1CVALUE$ph_begin((o2_saved_689));    !list$1CVALUE$ph_end((o2_saved_689));    it_690=list$1CVALUE$ph_next((o2_saved_689))    ){
        buffer_append_str(buf_686,it_690->c_value);
        if(        j_688!=list$1CVALUE$ph_length(come_params_659)-1) {
            buffer_append_str(buf_686,",");
        }
        j_688++;
    }
    /*c*/ come_call_finalizer3(o2_saved_689,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_686,")");
    buffer_append_str(buf_686,", ");
    buffer_append_str(buf_686,thread_var_value_667->c_value);
    buffer_append_str(buf_686,")");
    /*c*/ come_call_finalizer3(come_value_668,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_691=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1511, "struct CVALUE*"))));
    __dec_obj175=come_value_691->c_value,
    come_value_691->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_686));
    __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    type_692=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value700=map$2char$phsType$ph_at(info->types,((char*)(__right_value699=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value699 = come_decrement_ref_count(__right_value699, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value700,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type_692==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
    }
    __dec_obj176=come_value_691->type,
    come_value_691->type=(struct sType*)come_increment_ref_count(type_692);
    /*b*/ come_call_finalizer3(__dec_obj176,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_691->var=((void*)0);
    add_come_last_code(info,"%s",come_value_691->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_691));
    __result_obj__365 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_block_658,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_659,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_661 = come_decrement_ref_count(var_name_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type__662,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((var_node_665) ? var_node_665 = come_decrement_ref_count(var_node_665, ((struct sNode*)var_node_665)->finalize, ((struct sNode*)var_node_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(thread_var_value_667,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((null_node_669) ? null_node_669 = come_decrement_ref_count(null_node_669, ((struct sNode*)null_node_669)->finalize, ((struct sNode*)null_node_669)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((current_stack_frame_node_671) ? current_stack_frame_node_671 = come_decrement_ref_count(current_stack_frame_node_671, ((struct sNode*)current_stack_frame_node_671)->finalize, ((struct sNode*)current_stack_frame_node_671)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(current_stack_frame_value_673,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_block2_675,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (class_name_676 = come_decrement_ref_count(class_name_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source3_678,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_682) ? node_682 = come_decrement_ref_count(node_682, ((struct sNode*)node_682)->finalize, ((struct sNode*)node_682)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(fun_value_685,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_686,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name_687 = come_decrement_ref_count(fun_name_687, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_691,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_692,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__365;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->come_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_663;
unsigned int it_664;
struct sType* __result_obj__357;
struct sType* __result_obj__358;
struct sType* __result_obj__359;
struct sType* __result_obj__360;
    hash_663=string_get_hash_key(((char*)key))%self->size;
    it_664=hash_663;
    while(    (_Bool)1) {
        if(        self->item_existance[it_664]) {
            if(            string_equals(self->keys[it_664],key)) {
                __result_obj__357 = (struct sType*)come_increment_ref_count(self->items[it_664]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__357,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__357;
            }
            it_664++;
            if(            it_664>=self->size) {
                it_664=0;
            }
            else if(            it_664==hash_663) {
                __result_obj__358 = (struct sType*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__358;
            }
        }
        else {
            __result_obj__359 = (struct sType*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__359,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__359;
        }
    }
    __result_obj__360 = (struct sType*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__360,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__360;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value702 = (void*)0;
struct sNode* __dec_obj177;
struct sComeJoinNode* __result_obj__366;
    ((struct sNodeBase*)(__right_value702=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value702,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj177=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__366 = (struct sComeJoinNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__366,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__366;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value703 = (void*)0;
char* __result_obj__367;
    __result_obj__367 = (char*)come_increment_ref_count(((char*)(__right_value703=__builtin_string("sComeJoinNode"))));
    (__right_value703 = come_decrement_ref_count(__right_value703, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__367 = come_decrement_ref_count(__result_obj__367, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__367;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_693;
_Bool Value_694;
_Bool __result_obj__368;
void* __right_value704 = (void*)0;
struct CVALUE* come_value_695;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct buffer* buf_696;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct CVALUE* come_value_697;
void* __right_value709 = (void*)0;
char* __dec_obj178;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sType* __dec_obj179;
_Bool __result_obj__369;
    node_693=(struct sNode*)come_increment_ref_count(self->node);
    Value_694=node_compile(node_693,info);
    if(    !Value_694) {
        __result_obj__368 = (_Bool)0;
        ((node_693) ? node_693 = come_decrement_ref_count(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__368;
    }
    else {
    }
    come_value_695=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf_696=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1558, "struct buffer*"))));
    buffer_append_str(buf_696,"pthread_join(");
    buffer_append_str(buf_696,come_value_695->c_value);
    buffer_append_str(buf_696,", 0)");
    /*c*/ come_call_finalizer3(come_value_695,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_697=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1563, "struct CVALUE*"))));
    __dec_obj178=come_value_697->c_value,
    come_value_697->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_696));
    __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj179=come_value_697->type,
    come_value_697->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1565, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj179,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_697->var=((void*)0);
    add_come_last_code(info,"%s",come_value_697->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_697));
    __result_obj__369 = (_Bool)1;
    ((node_693) ? node_693 = come_decrement_ref_count(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(buf_696,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_697,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__369;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __right_value713 = (void*)0;
struct list$1sNode$ph* __dec_obj180;
struct list$1sBlock$ph* __dec_obj181;
struct sBlock* __dec_obj182;
struct sComePollNode* __result_obj__370;
    ((struct sNodeBase*)(__right_value713=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value713,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj180=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    /*b*/ come_call_finalizer3(__dec_obj180,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj181=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    /*b*/ come_call_finalizer3(__dec_obj181,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj182=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    /*b*/ come_call_finalizer3(__dec_obj182,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->time_out=time_out;
    __result_obj__370 = (struct sComePollNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(vars,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(else_block,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__370,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__370;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value714 = (void*)0;
char* __result_obj__371;
    __result_obj__371 = (char*)come_increment_ref_count(((char*)(__right_value714=__builtin_string("sComePollNode"))));
    (__right_value714 = come_decrement_ref_count(__right_value714, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__371 = come_decrement_ref_count(__result_obj__371, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__371;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_702;
struct list$1sBlock$ph* blocks_703;
int time_out_704;
int n_706;
struct list$1sNode$ph* o2_saved_707;
struct sNode* it_710;
_Bool Value_713;
_Bool __result_obj__378;
void* __right_value715 = (void*)0;
struct CVALUE* come_value_714;
int n_715;
struct list$1sNode$ph* o2_saved_716;
struct sNode* it_717;
void* __right_value716 = (void*)0;
_Bool __result_obj__383;
    vars_702=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_703=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_704=self->time_out;
    static int var_num_705=0;
    var_num_705++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_705,list$1sNode$ph_length(vars_702));
    n_706=0;
    for(    o2_saved_707=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_710=list$1sNode$ph_begin((o2_saved_707));    !list$1sNode$ph_end((o2_saved_707));    it_710=list$1sNode$ph_next((o2_saved_707))    ){
        Value_713=node_compile(it_710,info);
        if(        !Value_713) {
            __result_obj__378 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_707,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(vars_702,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_703,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__378;
        }
        else {
        }
        come_value_714=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_705,n_706,come_value_714->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_705,n_706,1);
        n_706++;
        /*c*/ come_call_finalizer3(come_value_714,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_707,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_705,var_num_705,list$1sNode$ph_length(vars_702),time_out_704);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_705);
    n_715=0;
    for(    o2_saved_716=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_717=list$1sNode$ph_begin((o2_saved_716));    !list$1sNode$ph_end((o2_saved_716));    it_717=list$1sNode$ph_next((o2_saved_716))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_705,n_715,1);
        transpile_block(((struct sBlock*)(__right_value716=list$1sBlock$ph_operator_load_element(blocks_703,n_715))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        /*c*/ come_call_finalizer3(__right_value716,sBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        add_come_code(info,"}\n");
        n_715++;
    }
    /*c*/ come_call_finalizer3(o2_saved_716,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_705);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__383 = (_Bool)1;
    /*c*/ come_call_finalizer3(vars_702,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(blocks_703,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__383;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_698;
struct list_item$1sBlock$ph* prev_it_699;
    it_698=self->head;
    while(    it_698!=((void*)0)) {
        prev_it_699=it_698;
        it_698=it_698->next;
        /*c*/ come_call_finalizer3(prev_it_699,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->vars,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->blocks,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->else_block,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_700;
struct list_item$1sBlock$ph* prev_it_701;
    it_700=self->head;
    while(    it_700!=((void*)0)) {
        prev_it_701=it_700;
        it_700=it_700->next;
        /*c*/ come_call_finalizer3(prev_it_701,list_item$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_708;
struct sNode* __result_obj__372;
struct sNode* __result_obj__373;
struct sNode* result_709;
struct sNode* __result_obj__374;
result_708 = (void*)0;
result_709 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_708,0,sizeof(struct sNode*));
        __result_obj__372 = result_708;
        return __result_obj__372;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__373 = self->it->item;
        return __result_obj__373;
    }
    memset(&result_709,0,sizeof(struct sNode*));
    __result_obj__374 = result_709;
    return __result_obj__374;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_711;
struct sNode* __result_obj__375;
struct sNode* __result_obj__376;
struct sNode* result_712;
struct sNode* __result_obj__377;
result_711 = (void*)0;
result_712 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_711,0,sizeof(struct sNode*));
        __result_obj__375 = result_711;
        return __result_obj__375;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__376 = self->it->item;
        return __result_obj__376;
    }
    memset(&result_712,0,sizeof(struct sNode*));
    __result_obj__377 = result_712;
    return __result_obj__377;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_718;
int i_719;
struct sBlock* __result_obj__379;
struct sBlock* default_value_720;
struct sBlock* __result_obj__380;
default_value_720 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_718=self->head;
    i_719=0;
    while(    it_718!=((void*)0)) {
        if(        position==i_719) {
            __result_obj__379 = (struct sBlock*)come_increment_ref_count(it_718->item);
            /*c*/ come_call_finalizer3(__result_obj__379,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__379;
        }
        it_718=it_718->next;
        i_719++;
    }
    memset(&default_value_720,0,sizeof(struct sBlock*));
    __result_obj__380 = (struct sBlock*)come_increment_ref_count(default_value_720);
    /*c*/ come_call_finalizer3(default_value_720,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__380,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__380;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_721;
int i_722;
struct sBlock* __result_obj__381;
struct sBlock* default_value_723;
struct sBlock* __result_obj__382;
default_value_723 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_721=self->head;
    i_722=0;
    while(    it_721!=((void*)0)) {
        if(        position==i_722) {
            __result_obj__381 = (struct sBlock*)come_increment_ref_count(it_721->item);
            /*c*/ come_call_finalizer3(__result_obj__381,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__381;
        }
        it_721=it_721->next;
        i_722++;
    }
    memset(&default_value_723,0,sizeof(struct sBlock*));
    __result_obj__382 = (struct sBlock*)come_increment_ref_count(default_value_723);
    /*c*/ come_call_finalizer3(default_value_723,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__382,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__382;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value725 = (void*)0;
struct sNode* node_724;
void* __right_value726 = (void*)0;
struct sNode* __dec_obj188;
struct sNode* __result_obj__386;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1648, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value718=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1648, "struct sFunCallNode*")),fun_name,params,guard_break,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_724=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*c*/ come_call_finalizer3(__right_value718,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj188=node_724,
    node_724=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_724),info));
    (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__386 = (struct sNode*)come_increment_ref_count(node_724);
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_724) ? node_724 = come_decrement_ref_count(node_724, ((struct sNode*)node_724)->finalize, ((struct sNode*)node_724)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__386) ? __result_obj__386 = come_decrement_ref_count(__result_obj__386, ((struct sNode*)__result_obj__386)->finalize, ((struct sNode*)__result_obj__386)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__386;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__384;
void* __right_value719 = (void*)0;
struct sFunCallNode* result_725;
void* __right_value720 = (void*)0;
char* __dec_obj183;
void* __right_value721 = (void*)0;
char* __dec_obj184;
void* __right_value722 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj185;
void* __right_value723 = (void*)0;
struct list$1sType$ph* __dec_obj186;
void* __right_value724 = (void*)0;
struct buffer* __dec_obj187;
struct sFunCallNode* __result_obj__385;
    if(    self==(void*)0) {
        __result_obj__384 = (void*)0;
        return __result_obj__384;
    }
    result_725=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)) {
        result_725->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj183=result_725->sname,
        result_725->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_725->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj184=result_725->fun_name,
        result_725->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj185=result_725->params,
        result_725->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj185,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_725->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj186=result_725->method_generics_types,
        result_725->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        /*b*/ come_call_finalizer3(__dec_obj186,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj187=result_725->method_block,
        result_725->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        /*b*/ come_call_finalizer3(__dec_obj187,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_725->method_block_sline=self->method_block_sline;
    }
    __result_obj__385 = result_725;
    /*c*/ come_call_finalizer3(result_725,sFunCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__385;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value727 = (void*)0;
struct sNode* __dec_obj189;
void* __right_value728 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj190;
struct sLambdaCall* __result_obj__387;
    ((struct sNodeBase*)(__right_value727=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value727,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj189=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj190=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    /*b*/ come_call_finalizer3(__dec_obj190,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__387 = (struct sLambdaCall*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__387,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__387;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value729 = (void*)0;
char* __result_obj__388;
    __result_obj__388 = (char*)come_increment_ref_count(((char*)(__right_value729=__builtin_string("sLambdaCall"))));
    (__right_value729 = come_decrement_ref_count(__right_value729, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__388 = come_decrement_ref_count(__result_obj__388, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__388;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_726;
struct list$1tuple2$2char$phsNode$ph$ph* params_727;
_Bool Value_728;
_Bool __result_obj__389;
void* __right_value730 = (void*)0;
struct CVALUE* come_value_729;
struct sType* lambda_type_730;
void* __right_value731 = (void*)0;
struct sType* result_type_731;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct list$1CVALUE$ph* come_params_732;
_Bool __result_obj__390;
int i_733;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_734;
struct tuple2$2char$phsNode$ph* it_735;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_736=0;
struct sNode* node_737=0;
_Bool Value_738;
_Bool __result_obj__391;
void* __right_value734 = (void*)0;
struct CVALUE* come_value_739;
void* __right_value735 = (void*)0;
struct sType* __dec_obj191;
void* __right_value736 = (void*)0;
_Bool _if_conditional17;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
_Bool _if_conditional18;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct buffer* buf_740;
int j_741;
struct list$1CVALUE$ph* o2_saved_742;
struct CVALUE* it_743;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
struct CVALUE* come_value2_744;
void* __right_value746 = (void*)0;
char* __dec_obj192;
void* __right_value747 = (void*)0;
struct sType* __dec_obj193;
_Bool __result_obj__392;
    node_726=(struct sNode*)come_increment_ref_count(self->node);
    params_727=self->params;
    Value_728=node_compile(node_726,info);
    if(    !Value_728) {
        __result_obj__389 = (_Bool)0;
        ((node_726) ? node_726 = come_decrement_ref_count(node_726, ((struct sNode*)node_726)->finalize, ((struct sNode*)node_726)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__389;
    }
    else {
    }
    come_value_729=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type_730=come_value_729->type;
    if(    lambda_type_730->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
    }
    result_type_731=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_730->mResultType));
    result_type_731->mStatic=(_Bool)0;
    come_params_732=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1690, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type_730->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_727)&&!lambda_type_730->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type_730->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_727));
        __result_obj__390 = (_Bool)0;
        ((node_726) ? node_726 = come_decrement_ref_count(node_726, ((struct sNode*)node_726)->finalize, ((struct sNode*)node_726)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_729,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_731,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_732,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__390;
    }
    i_733=0;
    for(    o2_saved_734=(params_727),it_735=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_734));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_734));    it_735=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_734))    ){
        multiple_assign_var11=it_735;
        label_736=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        node_737=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        Value_738=node_compile(node_737,info);
        if(        !Value_738) {
            __result_obj__391 = (_Bool)0;
            (label_736 = come_decrement_ref_count(label_736, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_737) ? node_737 = come_decrement_ref_count(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_726) ? node_726 = come_decrement_ref_count(node_726, ((struct sNode*)node_726)->finalize, ((struct sNode*)node_726)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_729,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_731,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_params_732,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__391;
        }
        else {
        }
        come_value_739=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj191=come_value_739->type,
        come_value_739->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_739->type,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj191,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        (_if_conditional17=(lambda_type_730->mVarArgs&&((struct sType*)(__right_value736=list$1sType$ph_operator_load_element(lambda_type_730->mParamTypes,i_733)))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value736,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional17) {
        }
        else {
            check_assign_type(((char*)(__right_value738=xsprintf("calling param #\%s",((char*)(__right_value737=int_to_string(i_733)))))),((struct sType*)(__right_value739=list$1sType$ph_operator_load_element(lambda_type_730->mParamTypes,i_733))),come_value_739->type,come_value_739,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value737 = come_decrement_ref_count(__right_value737, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value738 = come_decrement_ref_count(__right_value738, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value739,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            (_if_conditional18=(((struct sType*)(__right_value740=list$1sType$ph_operator_load_element(lambda_type_730->mParamTypes,i_733)))->mHeap&&come_value_739->type->mHeap)),            /*c*/ come_call_finalizer3(__right_value740,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional18) {
                std_move(((struct sType*)(__right_value741=list$1sType$ph_operator_load_element(lambda_type_730->mParamTypes,i_733))),come_value_739->type,come_value_739,info,(_Bool)1);
                /*c*/ come_call_finalizer3(__right_value741,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        list$1CVALUE$ph_push_back(come_params_732,(struct CVALUE*)come_increment_ref_count(come_value_739));
        i_733++;
        (label_736 = come_decrement_ref_count(label_736, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_737) ? node_737 = come_decrement_ref_count(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_739,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    buf_740=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1722, "struct buffer*"))));
    buffer_append_str(buf_740,"(");
    buffer_append_str(buf_740,come_value_729->c_value);
    buffer_append_str(buf_740,")");
    buffer_append_str(buf_740,"(");
    j_741=0;
    for(    o2_saved_742=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_732)),it_743=list$1CVALUE$ph_begin((o2_saved_742));    !list$1CVALUE$ph_end((o2_saved_742));    it_743=list$1CVALUE$ph_next((o2_saved_742))    ){
        buffer_append_str(buf_740,it_743->c_value);
        if(        j_741!=list$1CVALUE$ph_length(come_params_732)-1) {
            buffer_append_str(buf_740,",");
        }
        j_741++;
    }
    /*c*/ come_call_finalizer3(o2_saved_742,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_740,")");
    come_value2_744=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1741, "struct CVALUE*"))));
    __dec_obj192=come_value2_744->c_value,
    come_value2_744->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_740));
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    if(    lambda_type_730->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_744,(struct sType*)come_increment_ref_count(lambda_type_730->mResultType),info,(_Bool)0,((void*)0),((void*)0));
    }
    __dec_obj193=come_value2_744->type,
    come_value2_744->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_731));
    /*b*/ come_call_finalizer3(__dec_obj193,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_744->type->mStatic=(_Bool)0;
    come_value2_744->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_744->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_744));
    __result_obj__392 = (_Bool)1;
    ((node_726) ? node_726 = come_decrement_ref_count(node_726, ((struct sNode*)node_726)->finalize, ((struct sNode*)node_726)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_729,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_731,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_params_732,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_740,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_744,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__392;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __right_value748 = (void*)0;
struct sType* __dec_obj194;
struct sVarArgTypeName* __result_obj__393;
    ((struct sNodeBase*)(__right_value748=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value748,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj194=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj194,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__393 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__393,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__393;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value749 = (void*)0;
char* __result_obj__394;
    __result_obj__394 = (char*)come_increment_ref_count(((char*)(__right_value749=__builtin_string("sVarArgTypeName"))));
    (__right_value749 = come_decrement_ref_count(__right_value749, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__394 = come_decrement_ref_count(__result_obj__394, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__394;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_745;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct CVALUE* come_value_746;
void* __right_value752 = (void*)0;
char* __dec_obj195;
struct sType* __dec_obj196;
_Bool __result_obj__395;
    type_745=(struct sType*)come_increment_ref_count(self->type);
    come_value_746=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1778, "struct CVALUE*"))));
    __dec_obj195=come_value_746->c_value,
    come_value_746->c_value=(char*)come_increment_ref_count(make_type_name_string(type_745,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj196=come_value_746->type,
    come_value_746->type=(struct sType*)come_increment_ref_count(type_745);
    /*b*/ come_call_finalizer3(__dec_obj196,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_746->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_746));
    __result_obj__395 = (_Bool)1;
    /*c*/ come_call_finalizer3(type_745,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_746,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__395;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct list$1sType$ph* method_generics_types_747;
void* __right_value755 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var12 = (void*)0;
struct sType* type_748=0;
char* name_749=0;
_Bool err_750=0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_751;
_Bool _va_arg_752;
char* p_753;
int sline_754;
_Bool err_flag_755;
void* __right_value759 = (void*)0;
char* label_756;
void* __right_value760 = (void*)0;
char* __dec_obj197;
char* __dec_obj198;
_Bool no_comma_757;
_Bool in_fun_param_758;
void* __right_value761 = (void*)0;
struct sNode* node_759;
void* __right_value762 = (void*)0;
struct sNode* __dec_obj199;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct buffer* method_block_764;
int method_block_sline_765;
char* head_766;
void* __right_value768 = (void*)0;
char* tail_767;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct buffer* __dec_obj205;
int len_768;
void* __right_value771 = (void*)0;
char* mem_769;
_Bool guard_break_770;
struct sNode* node_771;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj206;
void* __right_value775 = (void*)0;
struct sNode* __dec_obj207;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct sNode* _inf_value5;
struct sFunCallNode* _inf_obj_value5;
void* __right_value778 = (void*)0;
struct sNode* __dec_obj208;
void* __right_value779 = (void*)0;
struct sNode* __dec_obj209;
struct sNode* __result_obj__398;
node_771 = (void*)0;
    method_generics_types_747=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1792, "struct list$1sType$ph*"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
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
                multiple_assign_var12=((struct tuple3$3sType$phchar$phbool$*)(__right_value755=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_748=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                name_749=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                err_750=multiple_assign_var12->v3;
                /*c*/ come_call_finalizer3(__right_value755,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_750) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sType$ph_push_back(method_generics_types_747,(struct sType*)come_increment_ref_count(sType_clone(type_748)));
                /*c*/ come_call_finalizer3(type_748,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_749 = come_decrement_ref_count(name_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_751=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1830, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg_752=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while(    (_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_753=info->p;
        sline_754=info->sline;
        err_flag_755=(_Bool)0;
        label_756=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj197=label_756,
            label_756=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            err_flag_755=(_Bool)1;
        }
        if(        err_flag_755==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj198=label_756,
            label_756=((void*)0);
            __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->p=p_753;
            info->sline=sline_754;
        }
        no_comma_757=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_758=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_759=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj199=node_759,
        node_759=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_759),info));
        (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->no_comma=no_comma_757;
        info->in_fun_param=in_fun_param_758;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params_751,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1878, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_756),(struct sNode*)come_increment_ref_count(node_759))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_756 = come_decrement_ref_count(label_756, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_759) ? node_759 = come_decrement_ref_count(node_759, ((struct sNode*)node_759)->finalize, ((struct sNode*)node_759)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (label_756 = come_decrement_ref_count(label_756, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_759) ? node_759 = come_decrement_ref_count(node_759, ((struct sNode*)node_759)->finalize, ((struct sNode*)node_759)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->va_arg=_va_arg_752;
    parse_sharp_v5(info);
    method_block_764=((void*)0);
    method_block_sline_765=0;
    if(    *info->p==123) {
        head_766=info->p;
        method_block_sline_765=info->sline;
        ((char*)(__right_value768=skip_block(info)));
        (__right_value768 = come_decrement_ref_count(__right_value768, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_767=info->p;
        __dec_obj205=method_block_764,
        method_block_764=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1908, "struct buffer*"))));
        /*b*/ come_call_finalizer3(__dec_obj205,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_768=tail_767-head_766;
        mem_769=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_768+1)), "05call.c", 1911, "char*"));
        memcpy(mem_769,head_766,len_768);
        mem_769[len_768]=0;
        buffer_append_str(method_block_764,mem_769);
        buffer_append_str(method_block_764,"\n");
        (mem_769 = come_decrement_ref_count(mem_769, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    guard_break_770=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_770=(_Bool)1;
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1929, "struct sNode");
        _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value773=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1929, "struct sFunCallNode*")),fun_name,params_751,guard_break_770,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_747),(struct buffer*)come_increment_ref_count(method_block_764),method_block_sline_765,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sFunCallNode_finalize;
        _inf_value4->clone=(void*)sFunCallNode_clone;
        _inf_value4->compile=(void*)sFunCallNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sFunCallNode_terminated;
        _inf_value4->kind=(void*)sFunCallNode_kind;
        __dec_obj206=node_771,
        node_771=(struct sNode*)come_increment_ref_count(_inf_value4);
        (__dec_obj206 ? __dec_obj206 = come_decrement_ref_count(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value773,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj207=node_771,
        node_771=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_771),info));
        (__dec_obj207 ? __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    else {
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1934, "struct sNode");
        _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value777=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1934, "struct sFunCallNode*")),fun_name,params_751,guard_break_770,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_747),(struct buffer*)come_increment_ref_count(method_block_764),method_block_sline_765,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sFunCallNode_finalize;
        _inf_value5->clone=(void*)sFunCallNode_clone;
        _inf_value5->compile=(void*)sFunCallNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sFunCallNode_terminated;
        _inf_value5->kind=(void*)sFunCallNode_kind;
        __dec_obj208=node_771,
        node_771=(struct sNode*)come_increment_ref_count(_inf_value5);
        (__dec_obj208 ? __dec_obj208 = come_decrement_ref_count(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        /*c*/ come_call_finalizer3(__right_value777,sFunCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj209=node_771,
        node_771=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_771),info));
        (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    parse_sharp_v5(info);
    __result_obj__398 = (struct sNode*)come_increment_ref_count(node_771);
    /*c*/ come_call_finalizer3(method_generics_types_747,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(params_751,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_764,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_771) ? node_771 = come_decrement_ref_count(node_771, ((struct sNode*)node_771)->finalize, ((struct sNode*)node_771)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__398) ? __result_obj__398 = come_decrement_ref_count(__result_obj__398, ((struct sNode*)__result_obj__398)->finalize, ((struct sNode*)__result_obj__398)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__398;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value763 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_760;
struct tuple2$2char$phsNode$ph* __dec_obj200;
void* __right_value764 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_761;
struct tuple2$2char$phsNode$ph* __dec_obj201;
void* __right_value765 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_762;
struct tuple2$2char$phsNode$ph* __dec_obj202;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__396;
    if(    self->len==0) {
        litem_760=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value763=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_760->prev=((void*)0);
        litem_760->next=((void*)0);
        __dec_obj200=litem_760->item,
        litem_760->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj200,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_760;
        self->head=litem_760;
    }
    else if(    self->len==1) {
        litem_761=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value764=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_761->prev=self->head;
        litem_761->next=((void*)0);
        __dec_obj201=litem_761->item,
        litem_761->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj201,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_761;
        self->head->next=litem_761;
    }
    else {
        litem_762=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value765=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_762->prev=self->tail;
        litem_762->next=((void*)0);
        __dec_obj202=litem_762->item,
        litem_762->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj202,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_762;
        self->tail=litem_762;
    }
    self->len++;
    __result_obj__396 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__396;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_763;
    result_763=0;
    result_763+=int_get_hash_key(((int)self->v1));
    result_763+=int_get_hash_key(((int)self->v2));
    return result_763;
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
char* __dec_obj203;
struct sNode* __dec_obj204;
struct tuple2$2char$phsNode$ph* __result_obj__397;
    __dec_obj203=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj204=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj204 ? __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__397 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__397,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__397;
}

struct sNode* expression_node_v1(struct sInfo* info){
struct sNode* __result_obj__399;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p);
    stackframe_v2();
    exit(3);
    __result_obj__399 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__399) ? __result_obj__399 = come_decrement_ref_count(__result_obj__399, ((struct sNode*)__result_obj__399)->finalize, ((struct sNode*)__result_obj__399)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__399;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value786 = (void*)0;
struct sNode* __result_obj__402;
    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1958, "struct sNode");
    _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value781=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1958, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sReturnNode_finalize;
    _inf_value6->clone=(void*)sReturnNode_clone;
    _inf_value6->compile=(void*)sReturnNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sNodeBase_terminated;
    _inf_value6->kind=(void*)sReturnNode_kind;
    __result_obj__402 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value786=_inf_value6)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value781,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value786) ? __right_value786 = come_decrement_ref_count(__right_value786, ((struct sNode*)__right_value786)->finalize, ((struct sNode*)__right_value786)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__402) ? __result_obj__402 = come_decrement_ref_count(__result_obj__402, ((struct sNode*)__result_obj__402)->finalize, ((struct sNode*)__result_obj__402)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__402;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__400;
void* __right_value782 = (void*)0;
struct sReturnNode* result_772;
void* __right_value783 = (void*)0;
char* __dec_obj210;
void* __right_value784 = (void*)0;
struct sNode* __dec_obj211;
void* __right_value785 = (void*)0;
char* __dec_obj212;
struct sReturnNode* __result_obj__401;
    if(    self==(void*)0) {
        __result_obj__400 = (void*)0;
        return __result_obj__400;
    }
    result_772=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)) {
        result_772->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj210=result_772->sname,
        result_772->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_772->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj211=result_772->value,
        result_772->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj211 ? __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj212=result_772->value_source,
        result_772->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__401 = result_772;
    /*c*/ come_call_finalizer3(result_772,sReturnNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__401;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value790 = (void*)0;
struct sNode* __result_obj__403;
char* head_773;
void* __right_value791 = (void*)0;
struct sNode* value_774;
char* tail_775;
void* __right_value792 = (void*)0;
struct sNode* __dec_obj213;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* __right_value796 = (void*)0;
struct sNode* __result_obj__404;
int nest_777;
char* head_778;
int head_sline_779;
int sline_real_780;
void* __right_value797 = (void*)0;
char* buf_781;
_Bool is_type_name__782;
_Bool is_special_word_784;
_Bool define_function_pointer_flag_785;
void* __right_value798 = (void*)0;
_Bool lambda_flag_786;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
char* word2_787;
_Bool fun_name_with_type_name_788;
void* __right_value801 = (void*)0;
char* word2_789;
_Bool call_method_generics_fun_call_790;
void* __right_value802 = (void*)0;
char* __dec_obj214;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
_Bool _if_conditional19;
int nest_791;
_Bool inline_asm_792;
void* __right_value809 = (void*)0;
char* __dec_obj215;
void* __right_value810 = (void*)0;
char* __dec_obj216;
void* __right_value811 = (void*)0;
char* __dec_obj217;
void* __right_value812 = (void*)0;
struct sNode* node_793;
struct sNode* __result_obj__405;
_Bool no_comma_794;
void* __right_value813 = (void*)0;
struct sNode* exp_795;
void* __right_value814 = (void*)0;
struct sNode* exp2_796;
void* __right_value815 = (void*)0;
struct sNode* __result_obj__406;
void* __right_value816 = (void*)0;
char* block_text_797;
char* contents_798;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct sNode* _inf_value9;
struct sOutputNode* _inf_obj_value9;
void* __right_value822 = (void*)0;
struct sNode* __result_obj__409;
void* __right_value823 = (void*)0;
struct sNode* node_800;
struct sNode* __result_obj__410;
void* __right_value824 = (void*)0;
struct sNode* node_801;
struct sNode* __result_obj__411;
struct buffer* come_block_802;
int come_block_sline_803;
char* head_804;
void* __right_value825 = (void*)0;
char* tail_805;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct buffer* __dec_obj220;
int len_806;
void* __right_value828 = (void*)0;
char* mem_807;
char* head_808;
_Bool no_output_come_code_809;
void* __right_value829 = (void*)0;
char* tail_810;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct buffer* __dec_obj221;
int len_811;
void* __right_value832 = (void*)0;
char* mem_812;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sNode* _inf_value10;
struct sComeCallNode* _inf_obj_value10;
void* __right_value838 = (void*)0;
struct sNode* node_813;
struct sNode* __result_obj__414;
struct buffer* come_block_815;
int come_block_sline_816;
void* __right_value839 = (void*)0;
struct sNode* node_817;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct sNode* _inf_value11;
struct sComeJoinNode* _inf_obj_value11;
void* __right_value845 = (void*)0;
struct sNode* __result_obj__417;
int time_out_819;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct list$1sNode$ph* vars_820;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct list$1sBlock$ph* blocks_821;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct sBlock* else_block_822;
void* __right_value852 = (void*)0;
struct sBlock* __dec_obj226;
void* __right_value853 = (void*)0;
struct sNode* var_name_823;
void* __right_value854 = (void*)0;
struct sBlock* block_824;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct sNode* _inf_value12;
struct sComePollNode* _inf_obj_value12;
void* __right_value904 = (void*)0;
struct sNode* __result_obj__441;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
struct sNode* _inf_value13;
struct sFuncNode* _inf_obj_value13;
void* __right_value909 = (void*)0;
struct sNode* __result_obj__444;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct sNode* _inf_value14;
struct sWildCard* _inf_obj_value14;
void* __right_value914 = (void*)0;
struct sNode* __result_obj__447;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct sNode* _inf_value15;
struct sLineNode* _inf_obj_value15;
void* __right_value919 = (void*)0;
struct sNode* __result_obj__450;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct sNode* _inf_value16;
struct sSNameNode* _inf_obj_value16;
void* __right_value924 = (void*)0;
struct sNode* __result_obj__453;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct sNode* _inf_value17;
struct sCallerFuncNode* _inf_obj_value17;
void* __right_value929 = (void*)0;
struct sNode* __result_obj__456;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct sNode* _inf_value18;
struct sCallerLineNode* _inf_obj_value18;
void* __right_value934 = (void*)0;
struct sNode* __result_obj__459;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct sNode* _inf_value19;
struct sCallerSNameNode* _inf_obj_value19;
void* __right_value939 = (void*)0;
struct sNode* __result_obj__462;
void* __right_value940 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type_867=0;
char* name_868=0;
_Bool err_869=0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
struct sNode* _inf_value20;
struct sVarArgTypeName* _inf_obj_value20;
void* __right_value946 = (void*)0;
struct sNode* __result_obj__465;
void* __right_value947 = (void*)0;
struct sNode* node_871;
struct sNode* __result_obj__466;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct buffer* buf2_872;
void* __right_value950 = (void*)0;
char* word_873;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct list$1sNode$ph* exps_874;
void* __right_value953 = (void*)0;
struct sNode* exp_875;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct sNode* _inf_value21;
struct sInlineAssembler* _inf_obj_value21;
void* __right_value961 = (void*)0;
struct sNode* __result_obj__469;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct buffer* fun_name_877;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct sType* type_878;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct sClass* klass_885;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct sType* __dec_obj255;
void* __right_value974 = (void*)0;
char* buf2_886;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct sNode* node_887;
struct sNode* __result_obj__478;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
struct buffer* fun_name_888;
void* __right_value979 = (void*)0;
char* buf2_889;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct sNode* node_890;
struct sNode* __result_obj__479;
void* __right_value982 = (void*)0;
struct sNode* node_891;
struct sNode* __result_obj__480;
void* __right_value983 = (void*)0;
struct sNode* node_892;
struct sNode* __result_obj__481;
void* __right_value984 = (void*)0;
struct sNode* node_893;
struct sNode* __result_obj__482;
void* __right_value985 = (void*)0;
struct sNode* node_894;
struct sNode* __result_obj__483;
struct sNode* __result_obj__484;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1971, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value789=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1971, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result_obj__403 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value790=_inf_value7)));
            /*c*/ come_call_finalizer3(__right_value789,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value790) ? __right_value790 = come_decrement_ref_count(__right_value790, ((struct sNode*)__right_value790)->finalize, ((struct sNode*)__right_value790)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__403) ? __result_obj__403 = come_decrement_ref_count(__result_obj__403, ((struct sNode*)__result_obj__403)->finalize, ((struct sNode*)__result_obj__403)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__403;
        }
        else {
            head_773=info->p;
            value_774=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_775=info->p;
            __dec_obj213=value_774,
            value_774=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_774),info));
            (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            char buf_776[tail_775-head_773+1];
            memset(&buf_776, 0, sizeof(char)            *(tail_775-head_773+1)            );
            memcpy(buf_776,head_773,tail_775-head_773);
            buf_776[tail_775-head_773]=0;
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1983, "struct sNode");
            _inf_obj_value8=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value795=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1983, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value_774),(char*)come_increment_ref_count(__builtin_string(buf_776)),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sReturnNode_finalize;
            _inf_value8->clone=(void*)sReturnNode_clone;
            _inf_value8->compile=(void*)sReturnNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sReturnNode_kind;
            __result_obj__404 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value796=_inf_value8)));
            ((value_774) ? value_774 = come_decrement_ref_count(value_774, ((struct sNode*)value_774)->finalize, ((struct sNode*)value_774)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value795,sReturnNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value796) ? __right_value796 = come_decrement_ref_count(__right_value796, ((struct sNode*)__right_value796)->finalize, ((struct sNode*)__right_value796)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__404) ? __result_obj__404 = come_decrement_ref_count(__result_obj__404, ((struct sNode*)__result_obj__404)->finalize, ((struct sNode*)__result_obj__404)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__404;
            ((value_774) ? value_774 = come_decrement_ref_count(value_774, ((struct sNode*)value_774)->finalize, ((struct sNode*)value_774)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_777=0;
        while(        1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_777++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_777--;
                if(                nest_777==0) {
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
        while(        1) {
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
        head_778=info->p;
        head_sline_779=info->sline;
        sline_real_780=info->sline_real;
        info->sline_real=info->sline;
        buf_781=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__782=is_type_name(buf_781,info);
        static char* is_special_word_array_783[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_784=charppa_contained(is_special_word_array_783,19,buf_781);
        define_function_pointer_flag_785=(_Bool)0;
        if(        !is_special_word_784&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value798=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value798,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_785=(_Bool)1;
                }
            }
            info->p=head_778;
            info->sline=head_sline_779;
        }
        lambda_flag_786=(_Bool)0;
        if(        !is_special_word_784&&is_type_name__782) {
            info->p=head_778;
            info->sline=head_sline_779;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value799=backtrace_parse_type((_Bool)0,info)));
            /*c*/ come_call_finalizer3(__right_value799,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            word2_787=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_787,"lambda")) {
                lambda_flag_786=(_Bool)1;
            }
            info->p=head_778;
            info->sline=head_sline_779;
            (word2_787 = come_decrement_ref_count(word2_787, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_name_with_type_name_788=(_Bool)0;
        if(        !is_special_word_784) {
            info->p=head_778;
            info->sline=head_sline_779;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_789=(char*)come_increment_ref_count(parse_word(info));
                (word2_789 = come_decrement_ref_count(word2_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            while(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_788=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_778;
            info->sline=head_sline_779;
        }
        call_method_generics_fun_call_790=(_Bool)0;
        {
            info->p=head_778;
            info->sline=head_sline_779;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj214=buf_781,
                buf_781=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            (_if_conditional19=(!is_type_name(buf_781,info)&&((struct sVar*)(__right_value805=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value804=__builtin_string(buf_781))))))==((void*)0)&&((struct sVar*)(__right_value808=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char*)(__right_value807=__builtin_string(buf_781))))))==((void*)0)&&*info->p==60)),            (__right_value803 = come_decrement_ref_count(__right_value803, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value804 = come_decrement_ref_count(__right_value804, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value805,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            (__right_value806 = come_decrement_ref_count(__right_value806, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value807 = come_decrement_ref_count(__right_value807, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value808,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional19) {
                nest_791=0;
                while(                *info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_791++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_791==0) {
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
                    call_method_generics_fun_call_790=(_Bool)1;
                }
            }
            info->p=head_778;
            info->sline=head_sline_779;
        }
        inline_asm_792=(_Bool)0;
        {
            info->p=head_778;
            info->sline=head_sline_779;
            __dec_obj215=buf_781,
            buf_781=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            string_operator_equals(buf_781,"asm")||string_operator_equals(buf_781,"__asm")||string_operator_equals(buf_781,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_792=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj216=buf_781,
                        buf_781=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_792=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_778;
            info->sline=head_sline_779;
        }
        parse_sharp_v5(info);
        __dec_obj217=buf_781,
        buf_781=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_786) {
            info->p=head_778;
            info->sline=head_sline_779;
            node_793=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_780;
            __result_obj__405 = (struct sNode*)come_increment_ref_count(node_793);
            ((node_793) ? node_793 = come_decrement_ref_count(node_793, ((struct sNode*)node_793)->finalize, ((struct sNode*)node_793)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__405) ? __result_obj__405 = come_decrement_ref_count(__result_obj__405, ((struct sNode*)__result_obj__405)->finalize, ((struct sNode*)__result_obj__405)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__405;
            ((node_793) ? node_793 = come_decrement_ref_count(node_793, ((struct sNode*)node_793)->finalize, ((struct sNode*)node_793)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_781,"_Static_assert")||string_operator_equals(buf_781,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_794=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_795=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_794;
            expected_next_character(44,info);
            exp2_796=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__406 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value815=static_assert_node((struct sNode*)come_increment_ref_count(exp_795),(struct sNode*)come_increment_ref_count(exp2_796),info))));
            ((exp_795) ? exp_795 = come_decrement_ref_count(exp_795, ((struct sNode*)exp_795)->finalize, ((struct sNode*)exp_795)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_796) ? exp2_796 = come_decrement_ref_count(exp2_796, ((struct sNode*)exp2_796)->finalize, ((struct sNode*)exp2_796)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value815) ? __right_value815 = come_decrement_ref_count(__right_value815, ((struct sNode*)__right_value815)->finalize, ((struct sNode*)__right_value815)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__406) ? __result_obj__406 = come_decrement_ref_count(__result_obj__406, ((struct sNode*)__result_obj__406)->finalize, ((struct sNode*)__result_obj__406)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__406;
            ((exp_795) ? exp_795 = come_decrement_ref_count(exp_795, ((struct sNode*)exp_795)->finalize, ((struct sNode*)exp_795)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_796) ? exp2_796 = come_decrement_ref_count(exp2_796, ((struct sNode*)exp2_796)->finalize, ((struct sNode*)exp2_796)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_781,"output")&&*info->p==123) {
            block_text_797=(char*)come_increment_ref_count(skip_block(info));
            contents_798=(char*)come_increment_ref_count(block_text_797);
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2221, "struct sNode");
            _inf_obj_value9=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value818=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "05call.c", 2221, "struct sOutputNode*")),(char*)come_increment_ref_count(contents_798),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sOutputNode_finalize;
            _inf_value9->clone=(void*)sOutputNode_clone;
            _inf_value9->compile=(void*)sOutputNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sOutputNode_kind;
            __result_obj__409 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value822=_inf_value9)));
            (block_text_797 = come_decrement_ref_count(block_text_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_798 = come_decrement_ref_count(contents_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value818,sOutputNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value822) ? __right_value822 = come_decrement_ref_count(__right_value822, ((struct sNode*)__right_value822)->finalize, ((struct sNode*)__right_value822)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__409) ? __result_obj__409 = come_decrement_ref_count(__result_obj__409, ((struct sNode*)__result_obj__409)->finalize, ((struct sNode*)__result_obj__409)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__409;
            (block_text_797 = come_decrement_ref_count(block_text_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (contents_798 = come_decrement_ref_count(contents_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_781,"extern")) {
            node_800=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__410 = (struct sNode*)come_increment_ref_count(node_800);
            ((node_800) ? node_800 = come_decrement_ref_count(node_800, ((struct sNode*)node_800)->finalize, ((struct sNode*)node_800)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__410) ? __result_obj__410 = come_decrement_ref_count(__result_obj__410, ((struct sNode*)__result_obj__410)->finalize, ((struct sNode*)__result_obj__410)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__410;
            ((node_800) ? node_800 = come_decrement_ref_count(node_800, ((struct sNode*)node_800)->finalize, ((struct sNode*)node_800)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_781,"string")||string_operator_equals(buf_781,"wstring"))&&*info->p==40) {
            node_801=(struct sNode*)come_increment_ref_count(parse_function_call(buf_781,info,(_Bool)0));
            info->sline_real=sline_real_780;
            __result_obj__411 = (struct sNode*)come_increment_ref_count(node_801);
            ((node_801) ? node_801 = come_decrement_ref_count(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__411) ? __result_obj__411 = come_decrement_ref_count(__result_obj__411, ((struct sNode*)__result_obj__411)->finalize, ((struct sNode*)__result_obj__411)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__411;
            ((node_801) ? node_801 = come_decrement_ref_count(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_781,"come")) {
            come_block_802=((void*)0);
            come_block_sline_803=0;
            if(            *info->p==123) {
                head_804=info->p;
                come_block_sline_803=info->sline;
                ((char*)(__right_value825=skip_block(info)));
                (__right_value825 = come_decrement_ref_count(__right_value825, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                tail_805=info->p;
                __dec_obj220=come_block_802,
                come_block_802=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2246, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj220,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_806=tail_805-head_804;
                mem_807=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_806+1)), "05call.c", 2249, "char*"));
                memcpy(mem_807,head_804,len_806);
                mem_807[len_806]=0;
                buffer_append_str(come_block_802,mem_807);
                buffer_append_str(come_block_802,"\n");
                (mem_807 = come_decrement_ref_count(mem_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                head_808=info->p;
                come_block_sline_803=info->sline;
                no_output_come_code_809=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value829=expression_v13(info)));
                ((__right_value829) ? __right_value829 = come_decrement_ref_count(__right_value829, ((struct sNode*)__right_value829)->finalize, ((struct sNode*)__right_value829)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_809;
                tail_810=info->p;
                __dec_obj221=come_block_802,
                come_block_802=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2267, "struct buffer*"))));
                /*b*/ come_call_finalizer3(__dec_obj221,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                len_811=tail_810-head_808;
                mem_812=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_811+1)), "05call.c", 2270, "char*"));
                memcpy(mem_812,head_808,len_811);
                mem_812[len_811]=0;
                buffer_append_str(come_block_802,"{");
                buffer_append_str(come_block_802,mem_812);
                buffer_append_str(come_block_802,"; }");
                buffer_append_str(come_block_802,"return (void*)0;\n}");
                buffer_append_str(come_block_802,"\n");
                (mem_812 = come_decrement_ref_count(mem_812, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2281, "struct sNode");
            _inf_obj_value10=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value834=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2281, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block_802),come_block_sline_803,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeCallNode_finalize;
            _inf_value10->clone=(void*)sComeCallNode_clone;
            _inf_value10->compile=(void*)sComeCallNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeCallNode_terminated;
            _inf_value10->kind=(void*)sComeCallNode_kind;
            node_813=(struct sNode*)come_increment_ref_count(_inf_value10);
            /*c*/ come_call_finalizer3(__right_value834,sComeCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_780;
            __result_obj__414 = (struct sNode*)come_increment_ref_count(node_813);
            /*c*/ come_call_finalizer3(come_block_802,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_813) ? node_813 = come_decrement_ref_count(node_813, ((struct sNode*)node_813)->finalize, ((struct sNode*)node_813)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__414) ? __result_obj__414 = come_decrement_ref_count(__result_obj__414, ((struct sNode*)__result_obj__414)->finalize, ((struct sNode*)__result_obj__414)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__414;
            /*c*/ come_call_finalizer3(come_block_802,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_813) ? node_813 = come_decrement_ref_count(node_813, ((struct sNode*)node_813)->finalize, ((struct sNode*)node_813)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_781,"come_join")&&*info->p==40) {
            come_block_815=((void*)0);
            come_block_sline_816=0;
            expected_next_character(40,info);
            node_817=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_780;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2295, "struct sNode");
            _inf_obj_value11=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value841=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2295, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_817),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeJoinNode_finalize;
            _inf_value11->clone=(void*)sComeJoinNode_clone;
            _inf_value11->compile=(void*)sComeJoinNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeJoinNode_terminated;
            _inf_value11->kind=(void*)sComeJoinNode_kind;
            __result_obj__417 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value845=_inf_value11)));
            /*c*/ come_call_finalizer3(come_block_815,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_817) ? node_817 = come_decrement_ref_count(node_817, ((struct sNode*)node_817)->finalize, ((struct sNode*)node_817)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value841,sComeJoinNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value845) ? __right_value845 = come_decrement_ref_count(__right_value845, ((struct sNode*)__right_value845)->finalize, ((struct sNode*)__right_value845)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__417) ? __result_obj__417 = come_decrement_ref_count(__result_obj__417, ((struct sNode*)__result_obj__417)->finalize, ((struct sNode*)__result_obj__417)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__417;
            /*c*/ come_call_finalizer3(come_block_815,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_817) ? node_817 = come_decrement_ref_count(node_817, ((struct sNode*)node_817)->finalize, ((struct sNode*)node_817)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_781,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_819=1;
            if(            *info->p==40) {
                info->p++;
                while(                xisdigit(*info->p)) {
                    time_out_819=time_out_819*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_820=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2313, "struct list$1sNode$ph*"))));
            blocks_821=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2314, "struct list$1sBlock$ph*"))));
            else_block_822=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05call.c", 2315, "struct sBlock*")),info));
            while(            1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj226=else_block_822,
                    else_block_822=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    /*b*/ come_call_finalizer3(__dec_obj226,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_823=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_824=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars_820,(struct sNode*)come_increment_ref_count(var_name_823));
                    list$1sBlock$ph_add(blocks_821,(struct sBlock*)come_increment_ref_count(block_824));
                    if(                    *info->p==125) {
                        ((var_name_823) ? var_name_823 = come_decrement_ref_count(var_name_823, ((struct sNode*)var_name_823)->finalize, ((struct sNode*)var_name_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(block_824,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        break;
                    }
                    ((var_name_823) ? var_name_823 = come_decrement_ref_count(var_name_823, ((struct sNode*)var_name_823)->finalize, ((struct sNode*)var_name_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(block_824,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_780;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2345, "struct sNode");
            _inf_obj_value12=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value859=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "05call.c", 2345, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars_820),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_821),(struct sBlock*)come_increment_ref_count(else_block_822),time_out_819,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComePollNode_finalize;
            _inf_value12->clone=(void*)sComePollNode_clone;
            _inf_value12->compile=(void*)sComePollNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComePollNode_terminated;
            _inf_value12->kind=(void*)sComePollNode_kind;
            __result_obj__441 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value904=_inf_value12)));
            /*c*/ come_call_finalizer3(vars_820,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_821,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_822,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value859,sComePollNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value904) ? __right_value904 = come_decrement_ref_count(__right_value904, ((struct sNode*)__right_value904)->finalize, ((struct sNode*)__right_value904)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__441) ? __result_obj__441 = come_decrement_ref_count(__result_obj__441, ((struct sNode*)__result_obj__441)->finalize, ((struct sNode*)__result_obj__441)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__441;
            /*c*/ come_call_finalizer3(vars_820,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(blocks_821,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(else_block_822,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        string_operator_equals(buf_781,"__func__")||string_operator_equals(buf_781,"__FUNCTION__")) {
            info->sline_real=sline_real_780;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2350, "struct sNode");
            _inf_obj_value13=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value906=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "05call.c", 2350, "struct sFuncNode*")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFuncNode_finalize;
            _inf_value13->clone=(void*)sFuncNode_clone;
            _inf_value13->compile=(void*)sFuncNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFuncNode_kind;
            __result_obj__444 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value909=_inf_value13)));
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value906,sFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value909) ? __right_value909 = come_decrement_ref_count(__right_value909, ((struct sNode*)__right_value909)->finalize, ((struct sNode*)__right_value909)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__444) ? __result_obj__444 = come_decrement_ref_count(__result_obj__444, ((struct sNode*)__result_obj__444)->finalize, ((struct sNode*)__result_obj__444)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__444;
        }
        else if(        !gComeC&&string_operator_equals(buf_781,"wildcard")) {
            info->sline_real=sline_real_780;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2354, "struct sNode");
            _inf_obj_value14=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value911=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "05call.c", 2354, "struct sWildCard*")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sWildCard_finalize;
            _inf_value14->clone=(void*)sWildCard_clone;
            _inf_value14->compile=(void*)sWildCard_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sWildCard_kind;
            __result_obj__447 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value914=_inf_value14)));
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value911,sWildCard_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value914) ? __right_value914 = come_decrement_ref_count(__right_value914, ((struct sNode*)__right_value914)->finalize, ((struct sNode*)__right_value914)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__447) ? __result_obj__447 = come_decrement_ref_count(__result_obj__447, ((struct sNode*)__result_obj__447)->finalize, ((struct sNode*)__result_obj__447)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__447;
        }
        else if(        string_operator_equals(buf_781,"__line__")||string_operator_equals(buf_781,"__LINE__")) {
            info->sline_real=sline_real_780;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2358, "struct sNode");
            _inf_obj_value15=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value916=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 2358, "struct sLineNode*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLineNode_finalize;
            _inf_value15->clone=(void*)sLineNode_clone;
            _inf_value15->compile=(void*)sLineNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLineNode_kind;
            __result_obj__450 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value919=_inf_value15)));
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value916,sLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value919) ? __right_value919 = come_decrement_ref_count(__right_value919, ((struct sNode*)__right_value919)->finalize, ((struct sNode*)__right_value919)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__450) ? __result_obj__450 = come_decrement_ref_count(__result_obj__450, ((struct sNode*)__result_obj__450)->finalize, ((struct sNode*)__result_obj__450)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__450;
        }
        else if(        string_operator_equals(buf_781,"__sname__")) {
            info->sline_real=sline_real_780;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2362, "struct sNode");
            _inf_obj_value16=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value921=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 2362, "struct sSNameNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sSNameNode_finalize;
            _inf_value16->clone=(void*)sSNameNode_clone;
            _inf_value16->compile=(void*)sSNameNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sSNameNode_kind;
            __result_obj__453 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value924=_inf_value16)));
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value921,sSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value924) ? __right_value924 = come_decrement_ref_count(__right_value924, ((struct sNode*)__right_value924)->finalize, ((struct sNode*)__right_value924)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__453) ? __result_obj__453 = come_decrement_ref_count(__result_obj__453, ((struct sNode*)__result_obj__453)->finalize, ((struct sNode*)__result_obj__453)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__453;
        }
        else if(        string_operator_equals(buf_781,"__caller_func__")) {
            info->sline_real=sline_real_780;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2366, "struct sNode");
            _inf_obj_value17=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value926=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2366, "struct sCallerFuncNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value17->clone=(void*)sCallerFuncNode_clone;
            _inf_value17->compile=(void*)sCallerFuncNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerFuncNode_kind;
            __result_obj__456 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value929=_inf_value17)));
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value926,sCallerFuncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value929) ? __right_value929 = come_decrement_ref_count(__right_value929, ((struct sNode*)__right_value929)->finalize, ((struct sNode*)__right_value929)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__456) ? __result_obj__456 = come_decrement_ref_count(__result_obj__456, ((struct sNode*)__result_obj__456)->finalize, ((struct sNode*)__result_obj__456)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__456;
        }
        else if(        string_operator_equals(buf_781,"__caller_line__")) {
            info->sline_real=sline_real_780;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2370, "struct sNode");
            _inf_obj_value18=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value931=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2370, "struct sCallerLineNode*")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerLineNode_finalize;
            _inf_value18->clone=(void*)sCallerLineNode_clone;
            _inf_value18->compile=(void*)sCallerLineNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerLineNode_kind;
            __result_obj__459 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value934=_inf_value18)));
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value931,sCallerLineNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value934) ? __right_value934 = come_decrement_ref_count(__right_value934, ((struct sNode*)__right_value934)->finalize, ((struct sNode*)__right_value934)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__459) ? __result_obj__459 = come_decrement_ref_count(__result_obj__459, ((struct sNode*)__result_obj__459)->finalize, ((struct sNode*)__result_obj__459)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__459;
        }
        else if(        string_operator_equals(buf_781,"__caller_sname__")) {
            info->sline_real=sline_real_780;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2374, "struct sNode");
            _inf_obj_value19=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value936=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2374, "struct sCallerSNameNode*")),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value19->clone=(void*)sCallerSNameNode_clone;
            _inf_value19->compile=(void*)sCallerSNameNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCallerSNameNode_kind;
            __result_obj__462 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value939=_inf_value19)));
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value936,sCallerSNameNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value939) ? __right_value939 = come_decrement_ref_count(__right_value939, ((struct sNode*)__right_value939)->finalize, ((struct sNode*)__right_value939)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__462) ? __result_obj__462 = come_decrement_ref_count(__result_obj__462, ((struct sNode*)__result_obj__462)->finalize, ((struct sNode*)__result_obj__462)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__462;
        }
        else if(        info->va_arg&&is_type_name(buf_781,info)) {
            info->p=head_778;
            info->sline=head_sline_779;
            multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value940=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_867=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_868=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_869=multiple_assign_var13->v3;
            /*c*/ come_call_finalizer3(__right_value940,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_780;
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2383, "struct sNode");
            _inf_obj_value20=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value942=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2383, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type_867),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value20->clone=(void*)sVarArgTypeName_clone;
            _inf_value20->compile=(void*)sVarArgTypeName_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sVarArgTypeName_kind;
            __result_obj__465 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value946=_inf_value20)));
            /*c*/ come_call_finalizer3(type_867,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_868 = come_decrement_ref_count(name_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value942,sVarArgTypeName_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value946) ? __right_value946 = come_decrement_ref_count(__right_value946, ((struct sNode*)__right_value946)->finalize, ((struct sNode*)__right_value946)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__465) ? __result_obj__465 = come_decrement_ref_count(__result_obj__465, ((struct sNode*)__result_obj__465)->finalize, ((struct sNode*)__result_obj__465)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__465;
            /*c*/ come_call_finalizer3(type_867,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_868 = come_decrement_ref_count(name_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        string_operator_equals(buf_781,"sizeof")||string_operator_equals(buf_781,"_Alignof")||string_operator_equals(buf_781,"_Alignas")||string_operator_equals(buf_781,"__alignof__")) {
            node_871=(struct sNode*)come_increment_ref_count(string_node_v21(buf_781,head_778,head_sline_779,info));
            info->sline_real=sline_real_780;
            __result_obj__466 = (struct sNode*)come_increment_ref_count(node_871);
            ((node_871) ? node_871 = come_decrement_ref_count(node_871, ((struct sNode*)node_871)->finalize, ((struct sNode*)node_871)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__466) ? __result_obj__466 = come_decrement_ref_count(__result_obj__466, ((struct sNode*)__result_obj__466)->finalize, ((struct sNode*)__result_obj__466)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__466;
            ((node_871) ? node_871 = come_decrement_ref_count(node_871, ((struct sNode*)node_871)->finalize, ((struct sNode*)node_871)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        inline_asm_792) {
            buf2_872=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2392, "struct buffer*"))));
            if(            *info->p!=40) {
                word_873=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_872,word_873);
                (word_873 = come_decrement_ref_count(word_873, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_872,40);
            exps_874=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2403, "struct list$1sNode$ph*"))));
            while(            (_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_872,40);
                    info->p++;
                    exp_875=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_874,(struct sNode*)come_increment_ref_count(exp_875));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_872,41);
                    ((exp_875) ? exp_875 = come_decrement_ref_count(exp_875, ((struct sNode*)exp_875)->finalize, ((struct sNode*)exp_875)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_872,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_872,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_872,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_780;
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2440, "struct sNode");
            _inf_obj_value21=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value956=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2440, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2_872)),(struct list$1sNode$ph*)come_increment_ref_count(exps_874),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sInlineAssembler_finalize;
            _inf_value21->clone=(void*)sInlineAssembler_clone;
            _inf_value21->compile=(void*)sInlineAssembler_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sInlineAssembler_kind;
            __result_obj__469 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value961=_inf_value21)));
            /*c*/ come_call_finalizer3(buf2_872,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_874,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value956,sInlineAssembler_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value961) ? __right_value961 = come_decrement_ref_count(__right_value961, ((struct sNode*)__right_value961)->finalize, ((struct sNode*)__right_value961)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__469) ? __result_obj__469 = come_decrement_ref_count(__result_obj__469, ((struct sNode*)__result_obj__469)->finalize, ((struct sNode*)__result_obj__469)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__469;
            /*c*/ come_call_finalizer3(buf2_872,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(exps_874,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        fun_name_with_type_name_788) {
            fun_name_877=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2443, "struct buffer*"))));
            buffer_append_str(fun_name_877,buf_781);
            type_878=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value966=map$2char$phsType$ph_operator_load_element(info->types,((char*)(__right_value965=buffer_to_string(fun_name_877))))))));
            (__right_value964 = come_decrement_ref_count(__right_value964, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value965 = come_decrement_ref_count(__right_value965, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value966,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            type_878==((void*)0)) {
                klass_885=((struct sClass*)(__right_value970=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value969=buffer_to_string(fun_name_877))))));
                (__right_value968 = come_decrement_ref_count(__right_value968, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value969 = come_decrement_ref_count(__right_value969, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value970,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_885) {
                    __dec_obj255=type_878,
                    type_878=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 2453, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_781)),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj255,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_781);
                    exit(2);
                }
            }
            while(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_878->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_877,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_877,"_");
            buf2_886=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_877,buf2_886);
            node_887=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value975=buffer_to_string(fun_name_877))),info,(_Bool)0));
            (__right_value975 = come_decrement_ref_count(__right_value975, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_780;
            __result_obj__478 = (struct sNode*)come_increment_ref_count(node_887);
            /*c*/ come_call_finalizer3(fun_name_877,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_878,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_886 = come_decrement_ref_count(buf2_886, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_887) ? node_887 = come_decrement_ref_count(node_887, ((struct sNode*)node_887)->finalize, ((struct sNode*)node_887)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__478) ? __result_obj__478 = come_decrement_ref_count(__result_obj__478, ((struct sNode*)__result_obj__478)->finalize, ((struct sNode*)__result_obj__478)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__478;
            /*c*/ come_call_finalizer3(fun_name_877,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_878,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_886 = come_decrement_ref_count(buf2_886, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_887) ? node_887 = come_decrement_ref_count(node_887, ((struct sNode*)node_887)->finalize, ((struct sNode*)node_887)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_888=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2488, "struct buffer*"))));
            buffer_append_str(fun_name_888,buf_781);
            buffer_append_str(fun_name_888,"_");
            buf2_889=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_888,buf2_889);
            node_890=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value980=buffer_to_string(fun_name_888))),info,(_Bool)0));
            (__right_value980 = come_decrement_ref_count(__right_value980, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            info->sline_real=sline_real_780;
            __result_obj__479 = (struct sNode*)come_increment_ref_count(node_890);
            /*c*/ come_call_finalizer3(fun_name_888,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_889 = come_decrement_ref_count(buf2_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_890) ? node_890 = come_decrement_ref_count(node_890, ((struct sNode*)node_890)->finalize, ((struct sNode*)node_890)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__479) ? __result_obj__479 = come_decrement_ref_count(__result_obj__479, ((struct sNode*)__result_obj__479)->finalize, ((struct sNode*)__result_obj__479)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__479;
            /*c*/ come_call_finalizer3(fun_name_888,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (buf2_889 = come_decrement_ref_count(buf2_889, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_890) ? node_890 = come_decrement_ref_count(node_890, ((struct sNode*)node_890)->finalize, ((struct sNode*)node_890)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_790) {
            node_891=(struct sNode*)come_increment_ref_count(parse_function_call(buf_781,info,(_Bool)0));
            info->sline_real=sline_real_780;
            __result_obj__480 = (struct sNode*)come_increment_ref_count(node_891);
            ((node_891) ? node_891 = come_decrement_ref_count(node_891, ((struct sNode*)node_891)->finalize, ((struct sNode*)node_891)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__480) ? __result_obj__480 = come_decrement_ref_count(__result_obj__480, ((struct sNode*)__result_obj__480)->finalize, ((struct sNode*)__result_obj__480)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__480;
            ((node_891) ? node_891 = come_decrement_ref_count(node_891, ((struct sNode*)node_891)->finalize, ((struct sNode*)node_891)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !is_special_word_784&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__782)) {
            node_892=(struct sNode*)come_increment_ref_count(parse_function_call(buf_781,info,(_Bool)0));
            info->sline_real=sline_real_780;
            __result_obj__481 = (struct sNode*)come_increment_ref_count(node_892);
            ((node_892) ? node_892 = come_decrement_ref_count(node_892, ((struct sNode*)node_892)->finalize, ((struct sNode*)node_892)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__481) ? __result_obj__481 = come_decrement_ref_count(__result_obj__481, ((struct sNode*)__result_obj__481)->finalize, ((struct sNode*)__result_obj__481)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__481;
            ((node_892) ? node_892 = come_decrement_ref_count(node_892, ((struct sNode*)node_892)->finalize, ((struct sNode*)node_892)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            node_893=(struct sNode*)come_increment_ref_count(string_node_v21(buf_781,head_778,head_sline_779,info));
            info->sline_real=sline_real_780;
            __result_obj__482 = (struct sNode*)come_increment_ref_count(node_893);
            ((node_893) ? node_893 = come_decrement_ref_count(node_893, ((struct sNode*)node_893)->finalize, ((struct sNode*)node_893)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__482) ? __result_obj__482 = come_decrement_ref_count(__result_obj__482, ((struct sNode*)__result_obj__482)->finalize, ((struct sNode*)__result_obj__482)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__482;
            ((node_893) ? node_893 = come_decrement_ref_count(node_893, ((struct sNode*)node_893)->finalize, ((struct sNode*)node_893)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (buf_781 = come_decrement_ref_count(buf_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        node_894=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__483 = (struct sNode*)come_increment_ref_count(node_894);
        ((node_894) ? node_894 = come_decrement_ref_count(node_894, ((struct sNode*)node_894)->finalize, ((struct sNode*)node_894)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__483) ? __result_obj__483 = come_decrement_ref_count(__result_obj__483, ((struct sNode*)__result_obj__483)->finalize, ((struct sNode*)__result_obj__483)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__483;
        ((node_894) ? node_894 = come_decrement_ref_count(node_894, ((struct sNode*)node_894)->finalize, ((struct sNode*)node_894)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    err_msg(info,"unexpected operator(%c)",*info->p);
    exit(2);
    __result_obj__484 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__484) ? __result_obj__484 = come_decrement_ref_count(__result_obj__484, ((struct sNode*)__result_obj__484)->finalize, ((struct sNode*)__result_obj__484)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__484;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__407;
void* __right_value819 = (void*)0;
struct sOutputNode* result_799;
void* __right_value820 = (void*)0;
char* __dec_obj218;
void* __right_value821 = (void*)0;
char* __dec_obj219;
struct sOutputNode* __result_obj__408;
    if(    self==(void*)0) {
        __result_obj__407 = (void*)0;
        return __result_obj__407;
    }
    result_799=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*"));
    if(    self!=((void*)0)) {
        result_799->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj218=result_799->sname,
        result_799->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOutputNode_clone", 5, "char*"));
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_799->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj219=result_799->contents,
        result_799->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sOutputNode_clone", 7, "char*"));
        __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__408 = result_799;
    /*c*/ come_call_finalizer3(result_799,sOutputNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__408;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__412;
void* __right_value835 = (void*)0;
struct sComeCallNode* result_814;
void* __right_value836 = (void*)0;
char* __dec_obj222;
void* __right_value837 = (void*)0;
struct buffer* __dec_obj223;
struct sComeCallNode* __result_obj__413;
    if(    self==(void*)0) {
        __result_obj__412 = (void*)0;
        return __result_obj__412;
    }
    result_814=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)) {
        result_814->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj222=result_814->sname,
        result_814->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_814->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj223=result_814->come_block,
        result_814->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        /*b*/ come_call_finalizer3(__dec_obj223,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_814->come_block_sline=self->come_block_sline;
    }
    __result_obj__413 = result_814;
    /*c*/ come_call_finalizer3(result_814,sComeCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__413;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__415;
void* __right_value842 = (void*)0;
struct sComeJoinNode* result_818;
void* __right_value843 = (void*)0;
char* __dec_obj224;
void* __right_value844 = (void*)0;
struct sNode* __dec_obj225;
struct sComeJoinNode* __result_obj__416;
    if(    self==(void*)0) {
        __result_obj__415 = (void*)0;
        return __result_obj__415;
    }
    result_818=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)) {
        result_818->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj224=result_818->sname,
        result_818->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_818->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj225=result_818->node,
        result_818->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj225 ? __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__416 = result_818;
    /*c*/ come_call_finalizer3(result_818,sComeJoinNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__416;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__418;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__418 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__418,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__418;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value855 = (void*)0;
struct list_item$1sBlock$ph* litem_825;
struct sBlock* __dec_obj227;
void* __right_value856 = (void*)0;
struct list_item$1sBlock$ph* litem_826;
struct sBlock* __dec_obj228;
void* __right_value857 = (void*)0;
struct list_item$1sBlock$ph* litem_827;
struct sBlock* __dec_obj229;
struct list$1sBlock$ph* __result_obj__419;
    if(    self->len==0) {
        litem_825=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value855=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1sBlock$ph*"))));
        litem_825->prev=((void*)0);
        litem_825->next=((void*)0);
        __dec_obj227=litem_825->item,
        litem_825->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj227,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_825;
        self->head=litem_825;
    }
    else if(    self->len==1) {
        litem_826=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value856=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1sBlock$ph*"))));
        litem_826->prev=self->head;
        litem_826->next=((void*)0);
        __dec_obj228=litem_826->item,
        litem_826->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj228,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_826;
        self->head->next=litem_826;
    }
    else {
        litem_827=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value857=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1sBlock$ph*"))));
        litem_827->prev=self->tail;
        litem_827->next=((void*)0);
        __dec_obj229=litem_827->item,
        litem_827->item=(struct sBlock*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj229,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_827;
        self->tail=litem_827;
    }
    self->len++;
    __result_obj__419 = self;
    /*c*/ come_call_finalizer3(item,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__419;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__420;
void* __right_value860 = (void*)0;
struct sComePollNode* result_828;
void* __right_value861 = (void*)0;
char* __dec_obj230;
void* __right_value862 = (void*)0;
struct list$1sNode$ph* __dec_obj231;
void* __right_value902 = (void*)0;
struct list$1sBlock$ph* __dec_obj241;
void* __right_value903 = (void*)0;
struct sBlock* __dec_obj242;
struct sComePollNode* __result_obj__440;
    if(    self==(void*)0) {
        __result_obj__420 = (void*)0;
        return __result_obj__420;
    }
    result_828=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)) {
        result_828->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj230=result_828->sname,
        result_828->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_828->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj231=result_828->vars,
        result_828->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars));
        /*b*/ come_call_finalizer3(__dec_obj231,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj241=result_828->blocks,
        result_828->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks));
        /*b*/ come_call_finalizer3(__dec_obj241,list$1sBlock$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj242=result_828->else_block,
        result_828->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        /*b*/ come_call_finalizer3(__dec_obj242,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_828->time_out=self->time_out;
    }
    __result_obj__440 = result_828;
    /*c*/ come_call_finalizer3(result_828,sComePollNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__440;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__421;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct list$1sBlock$ph* result_829;
struct list_item$1sBlock$ph* it_830;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
struct list$1sBlock$ph* __result_obj__439;
    if(    self==((void*)0)) {
        __result_obj__421 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__421,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__421;
    }
    result_829=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1sBlock$ph*"))));
    it_830=self->head;
    while(    it_830!=((void*)0)) {
        if(        1) {
            list$1sBlock$ph_add(result_829,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_830->item)));
        }
        else {
            list$1sBlock$ph_add(result_829,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_830->item)));
        }
        it_830=it_830->next;
    }
    __result_obj__439 = (struct list$1sBlock$ph*)come_increment_ref_count(result_829);
    /*c*/ come_call_finalizer3(result_829,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__439,list$1sBlock$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__439;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__422;
void* __right_value865 = (void*)0;
struct sBlock* result_831;
void* __right_value870 = (void*)0;
struct list$1sNode$ph* __dec_obj232;
void* __right_value899 = (void*)0;
struct sVarTable* __dec_obj240;
struct sBlock* __result_obj__438;
    if(    self==(void*)0) {
        __result_obj__422 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__422,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__422;
    }
    result_831=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj232=result_831->mNodes,
        result_831->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj232,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj240=result_831->mVarTable,
        result_831->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj240,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_831->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__438 = (struct sBlock*)come_increment_ref_count(result_831);
    /*c*/ come_call_finalizer3(result_831,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__438,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__438;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__423;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct list$1sNode$ph* result_832;
struct list_item$1sNode$ph* it_833;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct list$1sNode$ph* __result_obj__424;
    if(    self==((void*)0)) {
        __result_obj__423 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__423,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__423;
    }
    result_832=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_833=self->head;
    while(    it_833!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_832,(struct sNode*)come_increment_ref_count(sNode_clone(it_833->item)));
        }
        else {
            list$1sNode$ph_add(result_832,(struct sNode*)come_increment_ref_count(sNode_clone(it_833->item)));
        }
        it_833=it_833->next;
    }
    __result_obj__424 = (struct list$1sNode$ph*)come_increment_ref_count(result_832);
    /*c*/ come_call_finalizer3(result_832,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__424,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__424;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__425;
void* __right_value871 = (void*)0;
struct sVarTable* result_834;
void* __right_value898 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj239;
struct sVarTable* __result_obj__437;
    if(    self==(void*)0) {
        __result_obj__425 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__425,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__425;
    }
    result_834=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj239=result_834->mVars,
        result_834->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj239,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_834->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_834->mParent=self->mParent;
    }
    __result_obj__437 = (struct sVarTable*)come_increment_ref_count(result_834);
    /*c*/ come_call_finalizer3(result_834,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__437,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__437;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__426;
void* __right_value872 = (void*)0;
void* __right_value878 = (void*)0;
struct map$2char$phsVar$ph* result_836;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct list$1char$ph* __dec_obj234;
char* it_837;
struct sVar* default_value_838;
void* __right_value881 = (void*)0;
struct sVar* it2_841;
void* __right_value887 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__436;
default_value_838 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__426 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__426,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__426;
    }
    result_836=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/comelang.h", 1999, "struct map$2char$phsVar$ph*"))));
    __dec_obj234=result_836->key_list,
    result_836->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 2001, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj234,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_837=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_837=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_838,0,sizeof(struct sVar*));
        it2_841=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_837,(struct sVar*)come_increment_ref_count(default_value_838)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_836,(char*)come_increment_ref_count((char*)come_memdup(it_837, "/usr/local/include/comelang.h", 2010, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_841)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_836,(char*)come_increment_ref_count((char*)come_memdup(it_837, "/usr/local/include/comelang.h", 2013, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_841)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_836,(char*)come_increment_ref_count(it_837),(struct sVar*)come_increment_ref_count(sVar_clone(it2_841)));
        }
        else {
            map$2char$phsVar$ph_put(result_836,(char*)come_increment_ref_count(it_837),(struct sVar*)come_increment_ref_count(sVar_clone(it2_841)));
        }
        /*c*/ come_call_finalizer3(default_value_838,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_841,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__436 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_836);
    /*c*/ come_call_finalizer3(result_836,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__436,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__436;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
int i_835;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct list$1char$ph* __dec_obj233;
struct map$2char$phsVar$ph* __result_obj__428;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value873=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1928, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value874=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1929, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value875=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1930, "_Bool*"))));
    for(    i_835=0;    i_835<128;    i_835++    ){
        self->item_existance[i_835]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj233=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1940, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj233,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__428 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__428,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__428;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__427;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__427 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__427,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__427;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_839;
unsigned int it_840;
struct sVar* __result_obj__429;
struct sVar* __result_obj__430;
struct sVar* __result_obj__431;
struct sVar* __result_obj__432;
    hash_839=string_get_hash_key(((char*)key))%self->size;
    it_840=hash_839;
    while(    (_Bool)1) {
        if(        self->item_existance[it_840]) {
            if(            string_equals(self->keys[it_840],key)) {
                __result_obj__429 = (struct sVar*)come_increment_ref_count(self->items[it_840]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__429,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__429;
            }
            it_840++;
            if(            it_840>=self->size) {
                it_840=0;
            }
            else if(            it_840==hash_839) {
                __result_obj__430 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__430,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__430;
            }
        }
        else {
            __result_obj__431 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__431,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__431;
        }
    }
    __result_obj__432 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__432,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__432;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_853;
int it_854;
_Bool same_key_exist_855;
char* it2_856;
struct map$2char$phsVar$ph* __result_obj__433;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_853=string_get_hash_key(((char*)key))%self->size;
    it_854=hash_853;
    while(    (_Bool)1) {
        if(        self->item_existance[it_854]) {
            if(            string_equals(self->keys[it_854],key)) {
                if(                1) {
                    (self->keys[it_854] = come_decrement_ref_count(self->keys[it_854], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_854]);
                    self->keys[it_854]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_854]);
                    self->keys[it_854]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_854],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_854]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_854]=item;
                }
                break;
            }
            it_854++;
            if(            it_854>=self->size) {
                it_854=0;
            }
            else if(            it_854==hash_853) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_854]=(_Bool)1;
            if(            1) {
                self->keys[it_854]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_854]=key;
            }
            if(            1) {
                self->items[it_854]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_854]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_855=(_Bool)0;
    for(    it2_856=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_856=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_856,key)) {
            same_key_exist_855=(_Bool)1;
        }
    }
    if(    !same_key_exist_855) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__433 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__433;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_842;
void* __right_value882 = (void*)0;
char** keys_843;
void* __right_value883 = (void*)0;
struct sVar** items_844;
void* __right_value884 = (void*)0;
_Bool* item_existance_845;
int len_846;
char* it_847;
struct sVar* default_value_848;
void* __right_value885 = (void*)0;
struct sVar* it2_849;
unsigned int hash_850;
int n_851;
struct sVar* default_value_852;
void* __right_value886 = (void*)0;
default_value_848 = (void*)0;
default_value_852 = (void*)0;
    size_842=self->size*10;
    keys_843=(char**)come_increment_ref_count(((char**)(__right_value882=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_842)), "/usr/local/include/comelang.h", 2167, "char**"))));
    items_844=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value883=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_842)), "/usr/local/include/comelang.h", 2168, "struct sVar**"))));
    item_existance_845=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value884=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_842)), "/usr/local/include/comelang.h", 2169, "_Bool*"))));
    len_846=0;
    for(    it_847=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_847=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_848,0,sizeof(struct sVar*));
        it2_849=((struct sVar*)(__right_value885=map$2char$phsVar$ph_at(self,it_847,(struct sVar*)come_increment_ref_count(default_value_848))));
        /*c*/ come_call_finalizer3(__right_value885,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_850=string_get_hash_key(((char*)it_847))%size_842;
        n_851=hash_850;
        while(        (_Bool)1) {
            if(            item_existance_845[n_851]) {
                n_851++;
                if(                n_851>=size_842) {
                    n_851=0;
                }
                else if(                n_851==hash_850) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_845[n_851]=(_Bool)1;
                keys_843[n_851]=it_847;
                items_844[n_851]=((struct sVar*)(__right_value886=map$2char$phsVar$ph_at(self,it_847,(struct sVar*)come_increment_ref_count(default_value_852))));
                /*c*/ come_call_finalizer3(__right_value886,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_846++;
                /*c*/ come_call_finalizer3(default_value_852,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_852,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_848,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_843;
    self->items=items_844;
    self->item_existance=item_existance_845;
    self->size=size_842;
    self->len=len_846;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__434;
void* __right_value888 = (void*)0;
struct sVar* result_857;
void* __right_value889 = (void*)0;
char* __dec_obj235;
void* __right_value890 = (void*)0;
char* __dec_obj236;
void* __right_value891 = (void*)0;
struct sType* __dec_obj237;
void* __right_value892 = (void*)0;
char* __dec_obj238;
struct sVar* __result_obj__435;
    if(    self==(void*)0) {
        __result_obj__434 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__434,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__434;
    }
    result_857=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj235=result_857->mName,
        result_857->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj236=result_857->mCValueName,
        result_857->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj237=result_857->mType,
        result_857->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj237,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_857->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_857->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_857->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)) {
        result_857->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj238=result_857->mFunName,
        result_857->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__435 = (struct sVar*)come_increment_ref_count(result_857);
    /*c*/ come_call_finalizer3(result_857,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__435,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__435;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_858;
int i_859;
    for(    i_858=0;    i_858<self->size;    i_858++    ){
        if(        self->item_existance[i_858]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_858],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_859=0;    i_859<self->size;    i_859++    ){
        if(        self->item_existance[i_859]) {
            if(            1) {
                (self->keys[i_859] = come_decrement_ref_count(self->keys[i_859], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__442;
void* __right_value907 = (void*)0;
struct sFuncNode* result_860;
void* __right_value908 = (void*)0;
char* __dec_obj243;
struct sFuncNode* __result_obj__443;
    if(    self==(void*)0) {
        __result_obj__442 = (void*)0;
        return __result_obj__442;
    }
    result_860=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)) {
        result_860->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj243=result_860->sname,
        result_860->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_860->sline_real=self->sline_real;
    }
    __result_obj__443 = result_860;
    /*c*/ come_call_finalizer3(result_860,sFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__443;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__445;
void* __right_value912 = (void*)0;
struct sWildCard* result_861;
void* __right_value913 = (void*)0;
char* __dec_obj244;
struct sWildCard* __result_obj__446;
    if(    self==(void*)0) {
        __result_obj__445 = (void*)0;
        return __result_obj__445;
    }
    result_861=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*"));
    if(    self!=((void*)0)) {
        result_861->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj244=result_861->sname,
        result_861->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWildCard_clone", 5, "char*"));
        __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_861->sline_real=self->sline_real;
    }
    __result_obj__446 = result_861;
    /*c*/ come_call_finalizer3(result_861,sWildCard_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__446;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__448;
void* __right_value917 = (void*)0;
struct sLineNode* result_862;
void* __right_value918 = (void*)0;
char* __dec_obj245;
struct sLineNode* __result_obj__449;
    if(    self==(void*)0) {
        __result_obj__448 = (void*)0;
        return __result_obj__448;
    }
    result_862=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)) {
        result_862->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj245=result_862->sname,
        result_862->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_862->sline_real=self->sline_real;
    }
    __result_obj__449 = result_862;
    /*c*/ come_call_finalizer3(result_862,sLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__449;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__451;
void* __right_value922 = (void*)0;
struct sSNameNode* result_863;
void* __right_value923 = (void*)0;
char* __dec_obj246;
struct sSNameNode* __result_obj__452;
    if(    self==(void*)0) {
        __result_obj__451 = (void*)0;
        return __result_obj__451;
    }
    result_863=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)) {
        result_863->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj246=result_863->sname,
        result_863->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_863->sline_real=self->sline_real;
    }
    __result_obj__452 = result_863;
    /*c*/ come_call_finalizer3(result_863,sSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__452;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__454;
void* __right_value927 = (void*)0;
struct sCallerFuncNode* result_864;
void* __right_value928 = (void*)0;
char* __dec_obj247;
struct sCallerFuncNode* __result_obj__455;
    if(    self==(void*)0) {
        __result_obj__454 = (void*)0;
        return __result_obj__454;
    }
    result_864=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)) {
        result_864->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj247=result_864->sname,
        result_864->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_864->sline_real=self->sline_real;
    }
    __result_obj__455 = result_864;
    /*c*/ come_call_finalizer3(result_864,sCallerFuncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__455;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__457;
void* __right_value932 = (void*)0;
struct sCallerLineNode* result_865;
void* __right_value933 = (void*)0;
char* __dec_obj248;
struct sCallerLineNode* __result_obj__458;
    if(    self==(void*)0) {
        __result_obj__457 = (void*)0;
        return __result_obj__457;
    }
    result_865=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)) {
        result_865->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj248=result_865->sname,
        result_865->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_865->sline_real=self->sline_real;
    }
    __result_obj__458 = result_865;
    /*c*/ come_call_finalizer3(result_865,sCallerLineNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__458;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__460;
void* __right_value937 = (void*)0;
struct sCallerSNameNode* result_866;
void* __right_value938 = (void*)0;
char* __dec_obj249;
struct sCallerSNameNode* __result_obj__461;
    if(    self==(void*)0) {
        __result_obj__460 = (void*)0;
        return __result_obj__460;
    }
    result_866=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)) {
        result_866->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj249=result_866->sname,
        result_866->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_866->sline_real=self->sline_real;
    }
    __result_obj__461 = result_866;
    /*c*/ come_call_finalizer3(result_866,sCallerSNameNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__461;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__463;
void* __right_value943 = (void*)0;
struct sVarArgTypeName* result_870;
void* __right_value944 = (void*)0;
char* __dec_obj250;
void* __right_value945 = (void*)0;
struct sType* __dec_obj251;
struct sVarArgTypeName* __result_obj__464;
    if(    self==(void*)0) {
        __result_obj__463 = (void*)0;
        return __result_obj__463;
    }
    result_870=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)) {
        result_870->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj250=result_870->sname,
        result_870->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_870->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj251=result_870->type,
        result_870->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj251,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__464 = result_870;
    /*c*/ come_call_finalizer3(result_870,sVarArgTypeName_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__464;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__467;
void* __right_value957 = (void*)0;
struct sInlineAssembler* result_876;
void* __right_value958 = (void*)0;
char* __dec_obj252;
void* __right_value959 = (void*)0;
char* __dec_obj253;
void* __right_value960 = (void*)0;
struct list$1sNode$ph* __dec_obj254;
struct sInlineAssembler* __result_obj__468;
    if(    self==(void*)0) {
        __result_obj__467 = (void*)0;
        return __result_obj__467;
    }
    result_876=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)) {
        result_876->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj252=result_876->sname,
        result_876->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_876->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj253=result_876->source,
        result_876->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj254=result_876->exps,
        result_876->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        /*b*/ come_call_finalizer3(__dec_obj254,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__468 = result_876;
    /*c*/ come_call_finalizer3(result_876,sInlineAssembler_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__468;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_879;
unsigned int hash_880;
unsigned int it_881;
struct sType* __result_obj__470;
struct sType* __result_obj__471;
struct sType* __result_obj__472;
struct sType* __result_obj__473;
default_value_879 = (void*)0;
    memset(&default_value_879,0,sizeof(struct sType*));
    hash_880=string_get_hash_key(((char*)key))%self->size;
    it_881=hash_880;
    while(    (_Bool)1) {
        if(        self->item_existance[it_881]) {
            if(            string_equals(self->keys[it_881],key)) {
                __result_obj__470 = (struct sType*)come_increment_ref_count(self->items[it_881]);
                /*c*/ come_call_finalizer3(default_value_879,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__470,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__470;
            }
            it_881++;
            if(            it_881>=self->size) {
                it_881=0;
            }
            else if(            it_881==hash_880) {
                __result_obj__471 = (struct sType*)come_increment_ref_count(default_value_879);
                /*c*/ come_call_finalizer3(default_value_879,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__471,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__471;
            }
        }
        else {
            __result_obj__472 = (struct sType*)come_increment_ref_count(default_value_879);
            /*c*/ come_call_finalizer3(default_value_879,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__472,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__472;
        }
    }
    __result_obj__473 = (struct sType*)come_increment_ref_count(default_value_879);
    /*c*/ come_call_finalizer3(default_value_879,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__473,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__473;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_882;
unsigned int hash_883;
unsigned int it_884;
struct sType* __result_obj__474;
struct sType* __result_obj__475;
struct sType* __result_obj__476;
struct sType* __result_obj__477;
default_value_882 = (void*)0;
    memset(&default_value_882,0,sizeof(struct sType*));
    hash_883=string_get_hash_key(((char*)key))%self->size;
    it_884=hash_883;
    while(    (_Bool)1) {
        if(        self->item_existance[it_884]) {
            if(            string_equals(self->keys[it_884],key)) {
                __result_obj__474 = (struct sType*)come_increment_ref_count(self->items[it_884]);
                /*c*/ come_call_finalizer3(default_value_882,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__474,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__474;
            }
            it_884++;
            if(            it_884>=self->size) {
                it_884=0;
            }
            else if(            it_884==hash_883) {
                __result_obj__475 = (struct sType*)come_increment_ref_count(default_value_882);
                /*c*/ come_call_finalizer3(default_value_882,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__475,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__475;
            }
        }
        else {
            __result_obj__476 = (struct sType*)come_increment_ref_count(default_value_882);
            /*c*/ come_call_finalizer3(default_value_882,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__476,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__476;
        }
    }
    __result_obj__477 = (struct sType*)come_increment_ref_count(default_value_882);
    /*c*/ come_call_finalizer3(default_value_882,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__477,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__477;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value986 = (void*)0;
struct sNode* __result_obj__485;
    __result_obj__485 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value986=expression_node_v99(info))));
    ((__right_value986) ? __right_value986 = come_decrement_ref_count(__right_value986, ((struct sNode*)__right_value986)->finalize, ((struct sNode*)__right_value986)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__485) ? __result_obj__485 = come_decrement_ref_count(__result_obj__485, ((struct sNode*)__result_obj__485)->finalize, ((struct sNode*)__result_obj__485)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__485;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct sNode* __dec_obj256;
struct sNode* __result_obj__486;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct sNode* __dec_obj257;
struct sNode* __result_obj__487;
struct sNode* __result_obj__488;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj256=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj256 ? __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__486 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__486) ? __result_obj__486 = come_decrement_ref_count(__result_obj__486, ((struct sNode*)__result_obj__486)->finalize, ((struct sNode*)__result_obj__486)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__486;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj257=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj257 ? __dec_obj257 = come_decrement_ref_count(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__487 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__487) ? __result_obj__487 = come_decrement_ref_count(__result_obj__487, ((struct sNode*)__result_obj__487)->finalize, ((struct sNode*)__result_obj__487)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__487;
    }
    __result_obj__488 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__488) ? __result_obj__488 = come_decrement_ref_count(__result_obj__488, ((struct sNode*)__result_obj__488)->finalize, ((struct sNode*)__result_obj__488)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__488;
}

struct sNode* statment(struct sInfo* info){
void* __right_value991 = (void*)0;
struct sNode* node_895;
void* __right_value992 = (void*)0;
struct sNode* __dec_obj258;
struct sNode* __result_obj__489;
    node_895=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj258=node_895,
    node_895=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_895),info));
    (__dec_obj258 ? __dec_obj258 = come_decrement_ref_count(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__489 = (struct sNode*)come_increment_ref_count(node_895);
    ((node_895) ? node_895 = come_decrement_ref_count(node_895, ((struct sNode*)node_895)->finalize, ((struct sNode*)node_895)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__489) ? __result_obj__489 = come_decrement_ref_count(__result_obj__489, ((struct sNode*)__result_obj__489)->finalize, ((struct sNode*)__result_obj__489)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__489;
}

char* get_none_generics_name(char* class_name){
char* p_896;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
char* __result_obj__490;
void* __right_value995 = (void*)0;
char* __result_obj__491;
    p_896=class_name;
    while(    *p_896) {
        if(        *p_896==36) {
            __result_obj__490 = (char*)come_increment_ref_count(((char*)(__right_value994=charp_substring(((char*)(__right_value993=__builtin_string(class_name))),0,p_896-class_name))));
            (__right_value993 = come_decrement_ref_count(__right_value993, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value994 = come_decrement_ref_count(__right_value994, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__490 = come_decrement_ref_count(__result_obj__490, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__490;
        }
        else {
            p_896++;
        }
    }
    __result_obj__491 = (char*)come_increment_ref_count(((char*)(__right_value995=__builtin_string(class_name))));
    (__right_value995 = come_decrement_ref_count(__right_value995, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__491 = come_decrement_ref_count(__result_obj__491, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__491;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct buffer* buf_897;
struct sClass* klass_898;
char* class_name_899;
int i_900;
void* __right_value998 = (void*)0;
struct sType* type_901;
void* __right_value999 = (void*)0;
char* type_name_902;
int i_903;
void* __right_value1000 = (void*)0;
char* __result_obj__492;
    buf_897=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2588, "struct buffer*"))));
    klass_898=generics_type->mClass;
    class_name_899=klass_898->mName;
    buffer_append_str(buf_897,class_name_899);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_897,36);
        buffer_append_char(buf_897,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i_900=0;        i_900<list$1sType$ph_length(generics_type->mGenericsTypes);        i_900++        ){
            type_901=((struct sType*)(__right_value998=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,i_900)));
            /*c*/ come_call_finalizer3(__right_value998,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type_name_902=(char*)come_increment_ref_count(create_generics_name(type_901,info));
            buffer_append_str(buf_897,type_name_902);
            buffer_append_char(buf_897,36);
            for(            i_903=0;            i_903<type_901->mPointerNum;            i_903++            ){
                buffer_append_char(buf_897,112);
            }
            if(            type_901->mHeap) {
                buffer_append_str(buf_897,"h");
            }
            (type_name_902 = come_decrement_ref_count(type_name_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__492 = (char*)come_increment_ref_count(((char*)(__right_value1000=buffer_to_string(buf_897))));
    /*c*/ come_call_finalizer3(buf_897,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1000 = come_decrement_ref_count(__right_value1000, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__492 = come_decrement_ref_count(__result_obj__492, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__492;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_904;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct buffer* buf_905;
void* __right_value1003 = (void*)0;
char* __dec_obj259;
void* __right_value1004 = (void*)0;
char* __dec_obj260;
int i_906;
void* __right_value1005 = (void*)0;
char* __dec_obj261;
void* __right_value1006 = (void*)0;
char* __dec_obj262;
void* __right_value1007 = (void*)0;
char* __dec_obj263;
int i_907;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
char* __result_obj__493;
struct_name_904 = (void*)0;
    buf_905=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2623, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj259=struct_name_904,
        struct_name_904=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_904,"_Bool")) {
            __dec_obj260=struct_name_904,
            struct_name_904=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_905,"$");
            }
            for(            i_906=0;            i_906<obj_type->mOriginalTypeNamePointerNum;            i_906++            ){
                buffer_append_str(buf_905,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj261=struct_name_904,
        struct_name_904=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_904,"_Bool")) {
            __dec_obj262=struct_name_904,
            struct_name_904=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj263=struct_name_904,
        struct_name_904=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_905,"$");
        }
        for(        i_907=0;        i_907<obj_type->mPointerNum;        i_907++        ){
            buffer_append_str(buf_905,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_905,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_905,"pa");
    }
    __result_obj__493 = (char*)come_increment_ref_count(((char*)(__right_value1009=xsprintf("%s%s_%s",struct_name_904,((char*)(__right_value1008=buffer_to_string(buf_905))),fun_name))));
    (struct_name_904 = come_decrement_ref_count(struct_name_904, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_905,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1008 = come_decrement_ref_count(__right_value1008, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1009 = come_decrement_ref_count(__right_value1009, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__493 = come_decrement_ref_count(__result_obj__493, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__493;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_908;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct buffer* buf_909;
void* __right_value1012 = (void*)0;
char* __dec_obj264;
void* __right_value1013 = (void*)0;
char* __dec_obj265;
void* __right_value1014 = (void*)0;
char* __dec_obj266;
int i_910;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
char* __result_obj__494;
struct_name_908 = (void*)0;
    buf_909=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2670, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj264=struct_name_908,
        struct_name_908=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_908,"_Bool")) {
            __dec_obj265=struct_name_908,
            struct_name_908=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj266=struct_name_908,
        struct_name_908=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj266 = come_decrement_ref_count(__dec_obj266, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_909,"$");
        }
        for(        i_910=0;        i_910<obj_type->mPointerNum;        i_910++        ){
            buffer_append_str(buf_909,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_909,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_909,"pa");
    }
    __result_obj__494 = (char*)come_increment_ref_count(((char*)(__right_value1016=xsprintf("%s%s_%s",struct_name_908,((char*)(__right_value1015=buffer_to_string(buf_909))),fun_name))));
    (struct_name_908 = come_decrement_ref_count(struct_name_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_909,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1015 = come_decrement_ref_count(__right_value1015, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1016 = come_decrement_ref_count(__right_value1016, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__494 = come_decrement_ref_count(__result_obj__494, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__494;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_911;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct buffer* buf_912;
void* __right_value1019 = (void*)0;
char* __dec_obj267;
void* __right_value1020 = (void*)0;
char* __dec_obj268;
int i_913;
void* __right_value1021 = (void*)0;
char* __dec_obj269;
void* __right_value1022 = (void*)0;
char* __dec_obj270;
void* __right_value1023 = (void*)0;
char* __dec_obj271;
int i_914;
void* __right_value1024 = (void*)0;
int len_916;
void* __right_value1025 = (void*)0;
char* __result_obj__495;
struct_name_911 = (void*)0;
    buf_912=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2702, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj267=struct_name_911,
        struct_name_911=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj267 = come_decrement_ref_count(__dec_obj267, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_911,"_Bool")) {
            __dec_obj268=struct_name_911,
            struct_name_911=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj268 = come_decrement_ref_count(__dec_obj268, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        !obj_type->mClass->mStruct) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0) {
                buffer_append_str(buf_912,"$");
            }
            for(            i_913=0;            i_913<obj_type->mOriginalTypeNamePointerNum;            i_913++            ){
                buffer_append_str(buf_912,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol) {
        __dec_obj269=struct_name_911,
        struct_name_911=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj269 = come_decrement_ref_count(__dec_obj269, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        string_operator_equals(struct_name_911,"_Bool")) {
            __dec_obj270=struct_name_911,
            struct_name_911=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj271=struct_name_911,
        struct_name_911=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj271 = come_decrement_ref_count(__dec_obj271, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0) {
            buffer_append_str(buf_912,"$");
        }
        for(        i_914=0;        i_914<obj_type->mPointerNum;        i_914++        ){
            buffer_append_str(buf_912,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_912,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_912,"pa");
    }
    char none_method_name_915[charp_length(fun_name)+1];
    memset(&none_method_name_915, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_916=string_length(struct_name_911)+string_length(((char*)(__right_value1024=buffer_to_string(buf_912))));
    (__right_value1024 = come_decrement_ref_count(__right_value1024, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    memcpy(none_method_name_915,fun_name+len_916+1,charp_length(fun_name)-len_916-1);
    none_method_name_915[charp_length(fun_name)-len_916-1]=0;
    __result_obj__495 = (char*)come_increment_ref_count(((char*)(__right_value1025=__builtin_string(none_method_name_915))));
    (struct_name_911 = come_decrement_ref_count(struct_name_911, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_912,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value1025 = come_decrement_ref_count(__right_value1025, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__495 = come_decrement_ref_count(__result_obj__495, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__495;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value1026 = (void*)0;
char* struct_name_917;
void* __right_value1027 = (void*)0;
char* __dec_obj272;
void* __right_value1028 = (void*)0;
char* __result_obj__496;
    struct_name_917=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    if(    string_operator_equals(struct_name_917,"_Bool")) {
        __dec_obj272=struct_name_917,
        struct_name_917=(char*)come_increment_ref_count(xsprintf("bool"));
        __dec_obj272 = come_decrement_ref_count(__dec_obj272, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__496 = (char*)come_increment_ref_count(((char*)(__right_value1028=xsprintf("%s_%s",struct_name_917,fun_name))));
    (struct_name_917 = come_decrement_ref_count(struct_name_917, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value1028 = come_decrement_ref_count(__right_value1028, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__496 = come_decrement_ref_count(__result_obj__496, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__496;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
struct sNode* __result_obj__497;
    err_msg(info,"unexpected word(%s)(2)",buf);
    exit(2);
    __result_obj__497 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__497) ? __result_obj__497 = come_decrement_ref_count(__result_obj__497, ((struct sNode*)__result_obj__497)->finalize, ((struct sNode*)__result_obj__497)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__497;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_918;
char* p_919;
int sline_920;
_Bool err_flag_921;
void* __right_value1031 = (void*)0;
char* label_922;
void* __right_value1032 = (void*)0;
char* __dec_obj273;
char* __dec_obj274;
_Bool no_comma_923;
_Bool in_fun_param_924;
void* __right_value1033 = (void*)0;
struct sNode* node_925;
void* __right_value1034 = (void*)0;
struct sNode* __dec_obj275;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
struct sNode* _inf_value22;
struct sLambdaCall* _inf_obj_value22;
void* __right_value1043 = (void*)0;
struct sNode* __result_obj__500;
struct sNode* __result_obj__501;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_918=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2780, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while(        (_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_919=info->p;
            sline_920=info->sline;
            err_flag_921=(_Bool)0;
            label_922=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj273=label_922,
                label_922=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj273 = come_decrement_ref_count(__dec_obj273, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                err_flag_921=(_Bool)1;
            }
            if(            err_flag_921==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj274=label_922,
                label_922=((void*)0);
                __dec_obj274 = come_decrement_ref_count(__dec_obj274, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->p=p_919;
                info->sline=sline_920;
            }
            no_comma_923=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_924=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_925=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj275=node_925,
            node_925=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_925),info));
            (__dec_obj275 ? __dec_obj275 = come_decrement_ref_count(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->no_comma=no_comma_923;
            info->in_fun_param=in_fun_param_924;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_918,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2823, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_922),(struct sNode*)come_increment_ref_count(node_925))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_922 = come_decrement_ref_count(label_922, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_925) ? node_925 = come_decrement_ref_count(node_925, ((struct sNode*)node_925)->finalize, ((struct sNode*)node_925)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_922 = come_decrement_ref_count(label_922, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_925) ? node_925 = come_decrement_ref_count(node_925, ((struct sNode*)node_925)->finalize, ((struct sNode*)node_925)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2841, "struct sNode");
        _inf_obj_value22=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1038=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2841, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params_918,info))));
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sLambdaCall_finalize;
        _inf_value22->clone=(void*)sLambdaCall_clone;
        _inf_value22->compile=(void*)sLambdaCall_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sLambdaCall_kind;
        __result_obj__500 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1043=_inf_value22)));
        /*c*/ come_call_finalizer3(params_918,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value1038,sLambdaCall_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value1043) ? __right_value1043 = come_decrement_ref_count(__right_value1043, ((struct sNode*)__right_value1043)->finalize, ((struct sNode*)__right_value1043)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__500) ? __result_obj__500 = come_decrement_ref_count(__result_obj__500, ((struct sNode*)__result_obj__500)->finalize, ((struct sNode*)__result_obj__500)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__500;
        /*c*/ come_call_finalizer3(params_918,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        __result_obj__501 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__501) ? __result_obj__501 = come_decrement_ref_count(__result_obj__501, ((struct sNode*)__result_obj__501)->finalize, ((struct sNode*)__result_obj__501)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__501;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__498;
void* __right_value1039 = (void*)0;
struct sLambdaCall* result_926;
void* __right_value1040 = (void*)0;
char* __dec_obj276;
void* __right_value1041 = (void*)0;
struct sNode* __dec_obj277;
void* __right_value1042 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj278;
struct sLambdaCall* __result_obj__499;
    if(    self==(void*)0) {
        __result_obj__498 = (void*)0;
        return __result_obj__498;
    }
    result_926=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)) {
        result_926->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj276=result_926->sname,
        result_926->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj276 = come_decrement_ref_count(__dec_obj276, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_926->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj277=result_926->node,
        result_926->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj277 ? __dec_obj277 = come_decrement_ref_count(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj278=result_926->params,
        result_926->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        /*b*/ come_call_finalizer3(__dec_obj278,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__499 = result_926;
    /*c*/ come_call_finalizer3(result_926,sLambdaCall_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__499;
}

