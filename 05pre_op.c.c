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

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
};

struct sRefferenceNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sParenBlockNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* paren_block;
};

struct sDerefferenceNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
    _Bool mQuote;
};

struct sLogicalDenial
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sLogicalDenial2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sReverseNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sMinusNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sPlusPlusNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sMinusMinusNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sNormalBlock
{
    int sline;
    char* sname;
    int sline_real;
    struct sBlock* mBlock;
    _Bool clang;
    _Bool comma;
};

struct sComplement
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sParenNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
};

struct sCastNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* mType;
    struct sNode* mLeft;
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
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
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
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
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
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self);
static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self);
static _Bool tuple2$2void$psNode$ph_equals(struct tuple2$2void$psNode$ph* left, struct tuple2$2void$psNode$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info);
char* sRefferenceNode_kind(struct sRefferenceNode* self);
_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sRefferenceNode_finalize(struct sRefferenceNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNode$ph* paren_block, struct sInfo* info);
char* sParenBlockNode_kind(struct sParenBlockNode* self);
_Bool sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo* info);
static void sParenBlockNode_finalize(struct sParenBlockNode* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info);
char* sDerefferenceNode_kind(struct sDerefferenceNode* self);
_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info);
static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info);
char* sLogicalDenial_kind(struct sLogicalDenial* self);
_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info);
static void sLogicalDenial_finalize(struct sLogicalDenial* self);
struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo* info);
char* sLogicalDenial2_kind(struct sLogicalDenial2* self);
_Bool sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo* info);
static void sLogicalDenial2_finalize(struct sLogicalDenial2* self);
struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info);
char* sReverseNode_kind(struct sReverseNode* self);
_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info);
static void sReverseNode_finalize(struct sReverseNode* self);
struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info);
char* sMinusNode2_kind(struct sMinusNode2* self);
_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info);
static void sMinusNode2_finalize(struct sMinusNode2* self);
struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info);
char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self);
_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info);
static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self);
struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info);
char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self);
_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info);
static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self);
struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, _Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
_Bool sNormalBlock_terminated(struct sNormalBlock* self);
char* sNormalBlock_kind(struct sNormalBlock* self);
_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sNormalBlock_finalize(struct sNormalBlock* self);
struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info);
char* sComplement_kind(struct sComplement* self);
_Bool sComplement_compile(struct sComplement* self, struct sInfo* info);
static void sComplement_finalize(struct sComplement* self);
struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info);
char* sParenNode_kind(struct sParenNode* self);
_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info);
static void sParenNode_finalize(struct sParenNode* self);
struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info);
char* sCastNode_kind(struct sCastNode* self);
_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info);
static void sCastNode_finalize(struct sCastNode* self);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
static struct sCastNode* sCastNode_clone(struct sCastNode* self);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self);
struct sNode* pre_position_operator(struct sInfo* info);
static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
struct sNode* expression_node_v98(struct sInfo* info);
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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info){
void* __right_value227 = (void*)0;
struct sType* generics_type_239;
struct sType* __dec_obj40;
struct sClass* klass_267;
char* class_name_268;
struct sFun* operator_fun_269;
char* fun_name2_270;
struct sGenericsFun* generics_fun_271;
void* __right_value228 = (void*)0;
char* none_generics_name_272;
void* __right_value229 = (void*)0;
struct sType* obj_type_273;
void* __right_value230 = (void*)0;
char* __dec_obj41;
void* __right_value231 = (void*)0;
char* fun_name3_274;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_277=0;
_Bool err_278=0;
_Bool __result_obj__184;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var2 = (void*)0;
struct sFun* fun_285=0;
char* fun_name_286=0;
void* __right_value237 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var3 = (void*)0;
struct sFun* fun2_287=0;
char* fun_name2_288=0;
void* __right_value238 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var4 = (void*)0;
struct sFun* fun_289=0;
char* fun_name_290=0;
void* __right_value239 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_291=0;
char* fun_name2_292=0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
char* __dec_obj42;
int i_293;
void* __right_value242 = (void*)0;
char* new_fun_name_294;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
char* __dec_obj43;
void* __right_value245 = (void*)0;
_Bool result_295;
struct sNode* obj_296;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_297;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct sNode* node_305;
_Bool Value_306;
_Bool __result_obj__198;
fun_name2_270 = (void*)0;
memset(&i_293, 0, sizeof(int));
    generics_type_239=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_239->mNoSolvedGenericsType) {
        __dec_obj40=generics_type_239,
        generics_type_239=(struct sType*)come_increment_ref_count(generics_type_239->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    klass_267=type->mClass;
    class_name_268=klass_267->mName;
    operator_fun_269=((void*)0);
    generics_fun_271=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_272=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_273=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj41=fun_name2_270,
        fun_name2_270=(char*)come_increment_ref_count(create_method_name(obj_type_273,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_274=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_272,fun_name));
        generics_fun_271=((struct sGenericsFun*)(__right_value232=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_274,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value232,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_271) {
            multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value234=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_270)),generics_fun_271,obj_type_273,info)));
            name_277=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_278=multiple_assign_var1->v2;
            /*c*/ come_call_finalizer3(__right_value234,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_278) {
                __result_obj__184 = (_Bool)0;
                (name_277 = come_decrement_ref_count(name_277, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_272 = come_decrement_ref_count(none_generics_name_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_273,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_274 = come_decrement_ref_count(fun_name3_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(generics_type_239,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name2_270 = come_decrement_ref_count(fun_name2_270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__184;
            }
            operator_fun_269=((struct sFun*)(__right_value235=map$2char$phsFun$ph_operator_load_element(info->funcs,name_277)));
            /*c*/ come_call_finalizer3(__right_value235,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_277 = come_decrement_ref_count(name_277, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value236=create_equals_automatically(obj_type_273,"equals",info)));
                fun_285=multiple_assign_var2->v1;
                fun_name_286=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                /*c*/ come_call_finalizer3(__right_value236,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var3=((struct tuple2$2sFun$pchar$ph*)(__right_value237=create_operator_equals_automatically(obj_type_273,"operator_equals",info)));
                fun2_287=multiple_assign_var3->v1;
                fun_name2_288=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                /*c*/ come_call_finalizer3(__right_value237,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                operator_fun_269=fun2_287;
                (fun_name_286 = come_decrement_ref_count(fun_name_286, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_288 = come_decrement_ref_count(fun_name2_288, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value238=create_equals_automatically(obj_type_273,"not_equals",info)));
                fun_289=multiple_assign_var4->v1;
                fun_name_290=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                /*c*/ come_call_finalizer3(__right_value238,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value239=create_operator_not_equals_automatically(obj_type_273,"operator_not_equals",info)));
                fun2_291=multiple_assign_var5->v1;
                fun_name2_292=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                /*c*/ come_call_finalizer3(__right_value239,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                operator_fun_269=fun2_291;
                (fun_name_290 = come_decrement_ref_count(fun_name_290, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_292 = come_decrement_ref_count(fun_name2_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                operator_fun_269=((struct sFun*)(__right_value240=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_270)));
                /*c*/ come_call_finalizer3(__right_value240,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        (none_generics_name_272 = come_decrement_ref_count(none_generics_name_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_273,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_274 = come_decrement_ref_count(fun_name3_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj42=fun_name2_270,
        fun_name2_270=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_293=128-1;        i_293>=1;        i_293--        ){
            new_fun_name_294=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_270,i_293));
            operator_fun_269=((struct sFun*)(__right_value243=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_294)));
            /*c*/ come_call_finalizer3(__right_value243,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            operator_fun_269) {
                __dec_obj43=fun_name2_270,
                fun_name2_270=(char*)come_increment_ref_count(__builtin_string(new_fun_name_294));
                __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_294 = come_decrement_ref_count(new_fun_name_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_294 = come_decrement_ref_count(new_fun_name_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        operator_fun_269==((void*)0)) {
            operator_fun_269=((struct sFun*)(__right_value245=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_270)));
            /*c*/ come_call_finalizer3(__right_value245,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    result_295=(_Bool)0;
    if(    operator_fun_269) {
        obj_296=(struct sNode*)come_increment_ref_count(node);
        params_297=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05pre_op.c", 82, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_297,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "05pre_op.c", 84, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(obj_296))));
        node_305=(struct sNode*)come_increment_ref_count(create_method_call(fun_name2_270,(struct sNode*)come_increment_ref_count(obj_296),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_297),((void*)0),0,((void*)0),(_Bool)0,info));
        Value_306=node_compile(node_305,info);
        if(        Value_306) {
            result_295=(_Bool)1;
        }
        else {
        }
        ((obj_296) ? obj_296 = come_decrement_ref_count(obj_296, ((struct sNode*)obj_296)->finalize, ((struct sNode*)obj_296)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_297,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_305) ? node_305 = come_decrement_ref_count(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__198 = result_295;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(generics_type_239,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_270 = come_decrement_ref_count(fun_name2_270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__198;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__165;
void* __right_value189 = (void*)0;
struct sType* result_240;
void* __right_value190 = (void*)0;
struct sType* __dec_obj16;
void* __right_value191 = (void*)0;
struct sType* __dec_obj17;
void* __right_value199 = (void*)0;
struct list$1sType$ph* __dec_obj21;
void* __right_value200 = (void*)0;
struct sType* __dec_obj22;
void* __right_value201 = (void*)0;
struct sType* __dec_obj23;
void* __right_value203 = (void*)0;
struct sNode* __dec_obj24;
void* __right_value204 = (void*)0;
struct sNode* __dec_obj25;
void* __right_value205 = (void*)0;
char* __dec_obj26;
void* __right_value206 = (void*)0;
char* __dec_obj27;
void* __right_value207 = (void*)0;
char* __dec_obj28;
void* __right_value215 = (void*)0;
struct list$1sNode$ph* __dec_obj32;
void* __right_value216 = (void*)0;
char* __dec_obj33;
void* __right_value217 = (void*)0;
struct list$1sType$ph* __dec_obj34;
void* __right_value225 = (void*)0;
struct list$1char$ph* __dec_obj38;
void* __right_value226 = (void*)0;
struct sType* __dec_obj39;
struct sType* __result_obj__179;
    if(    self==(void*)0) {
        __result_obj__165 = (void*)0;
        return __result_obj__165;
    }
    result_240=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_240->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj16=result_240->mOriginalLoadVarType,
        result_240->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj16,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj17=result_240->mChannelType,
        result_240->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj17,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj21=result_240->mGenericsTypes,
        result_240->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj21,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj22=result_240->mNoSolvedGenericsType,
        result_240->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj23=result_240->mAnyOriginalType,
        result_240->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj24=result_240->mSizeNum,
        result_240->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj24 ? __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj25=result_240->mAlignas,
        result_240->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj26=result_240->mTupleName,
        result_240->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj27=result_240->mAttribute,
        result_240->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_240->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_240->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_240->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_240->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_240->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_240->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_240->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_240->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_240->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_240->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_240->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_240->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_240->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_240->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_240->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_240->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_240->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_240->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_240->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_240->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_240->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_240->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_240->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj28=result_240->mAsmName,
        result_240->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_240->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_240->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj32=result_240->mArrayNum,
        result_240->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj32,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_240->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_240->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_240->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_240->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj33=result_240->mOriginalTypeName,
        result_240->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_240->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_240->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_240->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj34=result_240->mParamTypes,
        result_240->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj34,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj38=result_240->mParamNames,
        result_240->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj38,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj39=result_240->mResultType,
        result_240->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_240->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__179 = result_240;
    /*c*/ come_call_finalizer3(result_240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__179;
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
struct list$1sType$ph* __result_obj__166;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1sType$ph* result_245;
struct list_item$1sType$ph* it_246;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1sType$ph* __result_obj__169;
    if(    self==((void*)0)) {
        __result_obj__166 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__166,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__166;
    }
    result_245=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1sType$ph*"))));
    it_246=self->head;
    while(    it_246!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_245,(struct sType*)come_increment_ref_count(sType_clone(it_246->item)));
        }
        else {
            list$1sType$ph_add(result_245,(struct sType*)come_increment_ref_count(sType_clone(it_246->item)));
        }
        it_246=it_246->next;
    }
    __result_obj__169 = (struct list$1sType$ph*)come_increment_ref_count(result_245);
    /*c*/ come_call_finalizer3(result_245,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__167;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__167 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__167,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value194 = (void*)0;
struct list_item$1sType$ph* litem_247;
struct sType* __dec_obj18;
void* __right_value195 = (void*)0;
struct list_item$1sType$ph* litem_248;
struct sType* __dec_obj19;
void* __right_value196 = (void*)0;
struct list_item$1sType$ph* litem_249;
struct sType* __dec_obj20;
struct list$1sType$ph* __result_obj__168;
    if(    self->len==0) {
        litem_247=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value194=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_247->prev=((void*)0);
        litem_247->next=((void*)0);
        __dec_obj18=litem_247->item,
        litem_247->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_247;
        self->head=litem_247;
    }
    else if(    self->len==1) {
        litem_248=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value195=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_248->prev=self->head;
        litem_248->next=((void*)0);
        __dec_obj19=litem_248->item,
        litem_248->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_248;
        self->head->next=litem_248;
    }
    else {
        litem_249=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value196=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_249->prev=self->tail;
        litem_249->next=((void*)0);
        __dec_obj20=litem_249->item,
        litem_249->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_249;
        self->tail=litem_249;
    }
    self->len++;
    __result_obj__168 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__168;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_250;
struct list_item$1sType$ph* prev_it_251;
    it_250=self->head;
    while(    it_250!=((void*)0)) {
        prev_it_251=it_250;
        it_250=it_250->next;
        /*c*/ come_call_finalizer3(prev_it_251,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__170;
void* __right_value202 = (void*)0;
struct sNode* result_252;
struct sNode* __result_obj__171;
    if(    self==(void*)0) {
        __result_obj__170 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__170) ? __result_obj__170 = come_decrement_ref_count(__result_obj__170, ((struct sNode*)__result_obj__170)->finalize, ((struct sNode*)__result_obj__170)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__170;
    }
    result_252=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_252->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_252->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_252->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_252->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_252->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_252->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_252->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_252->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_252->kind=self->kind;
    }
    __result_obj__171 = (struct sNode*)come_increment_ref_count(result_252);
    ((result_252) ? result_252 = come_decrement_ref_count(result_252, ((struct sNode*)result_252)->finalize, ((struct sNode*)result_252)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__171) ? __result_obj__171 = come_decrement_ref_count(__result_obj__171, ((struct sNode*)__result_obj__171)->finalize, ((struct sNode*)__result_obj__171)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__171;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__172;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct list$1sNode$ph* result_253;
struct list_item$1sNode$ph* it_254;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct list$1sNode$ph* __result_obj__175;
    if(    self==((void*)0)) {
        __result_obj__172 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__172,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__172;
    }
    result_253=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_254=self->head;
    while(    it_254!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_253,(struct sNode*)come_increment_ref_count(sNode_clone(it_254->item)));
        }
        else {
            list$1sNode$ph_add(result_253,(struct sNode*)come_increment_ref_count(sNode_clone(it_254->item)));
        }
        it_254=it_254->next;
    }
    __result_obj__175 = (struct list$1sNode$ph*)come_increment_ref_count(result_253);
    /*c*/ come_call_finalizer3(result_253,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__175,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__173;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__173 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__173,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__173;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value210 = (void*)0;
struct list_item$1sNode$ph* litem_255;
struct sNode* __dec_obj29;
void* __right_value211 = (void*)0;
struct list_item$1sNode$ph* litem_256;
struct sNode* __dec_obj30;
void* __right_value212 = (void*)0;
struct list_item$1sNode$ph* litem_257;
struct sNode* __dec_obj31;
struct list$1sNode$ph* __result_obj__174;
    if(    self->len==0) {
        litem_255=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value210=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_255->prev=((void*)0);
        litem_255->next=((void*)0);
        __dec_obj29=litem_255->item,
        litem_255->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_255;
        self->head=litem_255;
    }
    else if(    self->len==1) {
        litem_256=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value211=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_256->prev=self->head;
        litem_256->next=((void*)0);
        __dec_obj30=litem_256->item,
        litem_256->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_256;
        self->head->next=litem_256;
    }
    else {
        litem_257=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value212=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_257->prev=self->tail;
        litem_257->next=((void*)0);
        __dec_obj31=litem_257->item,
        litem_257->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_257;
        self->tail=litem_257;
    }
    self->len++;
    __result_obj__174 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__174;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_258;
struct list_item$1sNode$ph* prev_it_259;
    it_258=self->head;
    while(    it_258!=((void*)0)) {
        prev_it_259=it_258;
        it_258=it_258->next;
        /*c*/ come_call_finalizer3(prev_it_259,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__176;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct list$1char$ph* result_260;
struct list_item$1char$ph* it_261;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct list$1char$ph* __result_obj__178;
    if(    self==((void*)0)) {
        __result_obj__176 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__176,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__176;
    }
    result_260=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1char$ph*"))));
    it_261=self->head;
    while(    it_261!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_260,(char*)come_increment_ref_count((char*)come_memdup(it_261->item, "/usr/local/include/comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_260,(char*)come_increment_ref_count((char*)come_memdup(it_261->item, "/usr/local/include/comelang.h", 1032, "char*")));
        }
        it_261=it_261->next;
    }
    __result_obj__178 = (struct list$1char$ph*)come_increment_ref_count(result_260);
    /*c*/ come_call_finalizer3(result_260,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__178;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value220 = (void*)0;
struct list_item$1char$ph* litem_262;
char* __dec_obj35;
void* __right_value221 = (void*)0;
struct list_item$1char$ph* litem_263;
char* __dec_obj36;
void* __right_value222 = (void*)0;
struct list_item$1char$ph* litem_264;
char* __dec_obj37;
struct list$1char$ph* __result_obj__177;
    if(    self->len==0) {
        litem_262=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value220=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj35=litem_262->item,
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value221=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj36=litem_263->item,
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value222=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj37=litem_264->item,
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result_obj__177 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__177;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_265;
struct list_item$1char$ph* prev_it_266;
    it_265=self->head;
    while(    it_265!=((void*)0)) {
        prev_it_266=it_265;
        it_265=it_265->next;
        /*c*/ come_call_finalizer3(prev_it_266,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_275;
unsigned int it_276;
struct sGenericsFun* __result_obj__180;
struct sGenericsFun* __result_obj__181;
struct sGenericsFun* __result_obj__182;
struct sGenericsFun* __result_obj__183;
    hash_275=string_get_hash_key(((char*)key))%self->size;
    it_276=hash_275;
    while(    (_Bool)1) {
        if(        self->item_existance[it_276]) {
            if(            string_equals(self->keys[it_276],key)) {
                __result_obj__180 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_276]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__180,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__180;
            }
            it_276++;
            if(            it_276>=self->size) {
                it_276=0;
            }
            else if(            it_276==hash_275) {
                __result_obj__181 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__181,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__181;
            }
        }
        else {
            __result_obj__182 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__182,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__182;
        }
    }
    __result_obj__183 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__183,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
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

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_279;
unsigned int hash_280;
unsigned int it_281;
struct sFun* __result_obj__185;
struct sFun* __result_obj__186;
struct sFun* __result_obj__187;
struct sFun* __result_obj__188;
default_value_279 = (void*)0;
    memset(&default_value_279,0,sizeof(struct sFun*));
    hash_280=string_get_hash_key(((char*)key))%self->size;
    it_281=hash_280;
    while(    (_Bool)1) {
        if(        self->item_existance[it_281]) {
            if(            string_equals(self->keys[it_281],key)) {
                __result_obj__185 = (struct sFun*)come_increment_ref_count(self->items[it_281]);
                /*c*/ come_call_finalizer3(default_value_279,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__185,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__185;
            }
            it_281++;
            if(            it_281>=self->size) {
                it_281=0;
            }
            else if(            it_281==hash_280) {
                __result_obj__186 = (struct sFun*)come_increment_ref_count(default_value_279);
                /*c*/ come_call_finalizer3(default_value_279,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__186,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__186;
            }
        }
        else {
            __result_obj__187 = (struct sFun*)come_increment_ref_count(default_value_279);
            /*c*/ come_call_finalizer3(default_value_279,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__187,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__187;
        }
    }
    __result_obj__188 = (struct sFun*)come_increment_ref_count(default_value_279);
    /*c*/ come_call_finalizer3(default_value_279,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__188,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__188;
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

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_282;
unsigned int hash_283;
unsigned int it_284;
struct sFun* __result_obj__189;
struct sFun* __result_obj__190;
struct sFun* __result_obj__191;
struct sFun* __result_obj__192;
default_value_282 = (void*)0;
    memset(&default_value_282,0,sizeof(struct sFun*));
    hash_283=string_get_hash_key(((char*)key))%self->size;
    it_284=hash_283;
    while(    (_Bool)1) {
        if(        self->item_existance[it_284]) {
            if(            string_equals(self->keys[it_284],key)) {
                __result_obj__189 = (struct sFun*)come_increment_ref_count(self->items[it_284]);
                /*c*/ come_call_finalizer3(default_value_282,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__189,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__189;
            }
            it_284++;
            if(            it_284>=self->size) {
                it_284=0;
            }
            else if(            it_284==hash_283) {
                __result_obj__190 = (struct sFun*)come_increment_ref_count(default_value_282);
                /*c*/ come_call_finalizer3(default_value_282,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__190,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__190;
            }
        }
        else {
            __result_obj__191 = (struct sFun*)come_increment_ref_count(default_value_282);
            /*c*/ come_call_finalizer3(default_value_282,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__191,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__191;
        }
    }
    __result_obj__192 = (struct sFun*)come_increment_ref_count(default_value_282);
    /*c*/ come_call_finalizer3(default_value_282,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__192,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__193;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__193 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__193,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__193;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_298;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_299;
    it_298=self->head;
    while(    it_298!=((void*)0)) {
        prev_it_299=it_298;
        it_298=it_298->next;
        /*c*/ come_call_finalizer3(prev_it_299,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value248 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_300;
struct tuple2$2char$phsNode$ph* __dec_obj44;
void* __right_value249 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_301;
struct tuple2$2char$phsNode$ph* __dec_obj45;
void* __right_value250 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_302;
struct tuple2$2char$phsNode$ph* __dec_obj46;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__194;
    if(    self->len==0) {
        litem_300=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value248=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_300->prev=((void*)0);
        litem_300->next=((void*)0);
        __dec_obj44=litem_300->item,
        litem_300->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj44,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_300;
        self->head=litem_300;
    }
    else if(    self->len==1) {
        litem_301=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value249=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_301->prev=self->head;
        litem_301->next=((void*)0);
        __dec_obj45=litem_301->item,
        litem_301->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj45,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_301;
        self->head->next=litem_301;
    }
    else {
        litem_302=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value250=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_302->prev=self->tail;
        litem_302->next=((void*)0);
        __dec_obj46=litem_302->item,
        litem_302->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj46,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_302;
        self->tail=litem_302;
    }
    self->len++;
    __result_obj__194 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__194;
}

static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self){
struct tuple2$2void$psNode$ph* __result_obj__195;
void* __right_value251 = (void*)0;
struct tuple2$2void$psNode$ph* result_303;
void* __right_value252 = (void*)0;
struct sNode* __dec_obj47;
struct tuple2$2void$psNode$ph* __result_obj__196;
    if(    self==(void*)0) {
        __result_obj__195 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__195,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__195;
    }
    result_303=(struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "tuple2$2void$psNode$ph_clone", 3, "struct tuple2$2void$psNode$ph*"));
    if(    self!=((void*)0)) {
        result_303->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj47=result_303->v2,
        result_303->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj47 ? __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__196 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(result_303);
    /*c*/ come_call_finalizer3(result_303,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__196,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__196;
}

static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self){
unsigned int result_304;
    result_304=0;
    result_304+=int_get_hash_key(((int)self->v1));
    result_304+=int_get_hash_key(((int)self->v2));
    return result_304;
}

static _Bool tuple2$2void$psNode$ph_equals(struct tuple2$2void$psNode$ph* left, struct tuple2$2void$psNode$ph* right){
    if(    !voidp_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj48;
struct tuple2$2void$psNode$ph* __result_obj__197;
    self->v1=v1;
    __dec_obj48=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj48 ? __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__197 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__197,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __right_value256 = (void*)0;
struct sNode* __dec_obj49;
struct sRefferenceNode* __result_obj__199;
    ((struct sNodeBase*)(__right_value256=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value256,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj49=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__199 = (struct sRefferenceNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sRefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__199,sRefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

char* sRefferenceNode_kind(struct sRefferenceNode* self){
void* __right_value257 = (void*)0;
char* __result_obj__200;
    __result_obj__200 = (char*)come_increment_ref_count(((char*)(__right_value257=__builtin_string("sRefferenceNode"))));
    (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__200;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
struct sNode* value_307;
void* __right_value258 = (void*)0;
struct CVALUE* left_value_308;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct CVALUE* come_value_309;
void* __right_value261 = (void*)0;
char* __dec_obj50;
void* __right_value262 = (void*)0;
char* __dec_obj51;
void* __right_value263 = (void*)0;
struct sType* __dec_obj52;
_Bool __result_obj__202;
    value_307=self->value;
    if(    !node_compile(value_307,info)) {
        return (_Bool)0;
    }
    left_value_308=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_309=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 120, "struct CVALUE*"))));
    if(    left_value_308->c_value_without_cast_object_value) {
        __dec_obj50=come_value_309->c_value,
        come_value_309->c_value=(char*)come_increment_ref_count(xsprintf("&%s",left_value_308->c_value_without_cast_object_value));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj51=come_value_309->c_value,
        come_value_309->c_value=(char*)come_increment_ref_count(xsprintf("&%s",left_value_308->c_value));
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj52=come_value_309->type,
    come_value_309->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_308->type));
    /*b*/ come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_309->type->mPointerNum++;
    come_value_309->var=((void*)0);
    add_come_last_code(info,"%s",come_value_309->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_309));
    __result_obj__202 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_308,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_309,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__202;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value264 = (void*)0;
struct list_item$1CVALUE$ph* litem_310;
struct CVALUE* __dec_obj53;
void* __right_value265 = (void*)0;
struct list_item$1CVALUE$ph* litem_311;
struct CVALUE* __dec_obj54;
void* __right_value266 = (void*)0;
struct list_item$1CVALUE$ph* litem_312;
struct CVALUE* __dec_obj55;
struct list$1CVALUE$ph* __result_obj__201;
    if(    self->len==0) {
        litem_310=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value264=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_310->prev=((void*)0);
        litem_310->next=((void*)0);
        __dec_obj53=litem_310->item,
        litem_310->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_310;
        self->head=litem_310;
    }
    else if(    self->len==1) {
        litem_311=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value265=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_311->prev=self->head;
        litem_311->next=((void*)0);
        __dec_obj54=litem_311->item,
        litem_311->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj54,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_311;
        self->head->next=litem_311;
    }
    else {
        litem_312=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value266=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_312->prev=self->tail;
        litem_312->next=((void*)0);
        __dec_obj55=litem_312->item,
        litem_312->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj55,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_312;
        self->tail=litem_312;
    }
    self->len++;
    __result_obj__201 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
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

struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNode$ph* paren_block, struct sInfo* info){
void* __right_value267 = (void*)0;
struct list$1sNode$ph* __dec_obj56;
struct sParenBlockNode* __result_obj__203;
    ((struct sNodeBase*)(__right_value267=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value267,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj56=self->paren_block,
    self->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(paren_block);
    /*b*/ come_call_finalizer3(__dec_obj56,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__203 = (struct sParenBlockNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sParenBlockNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(paren_block,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__203,sParenBlockNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__203;
}

char* sParenBlockNode_kind(struct sParenBlockNode* self){
void* __right_value268 = (void*)0;
char* __result_obj__204;
    __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value268=__builtin_string("sParenBlockNode"))));
    (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__204;
}

_Bool sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo* info){
struct list$1sNode$ph* paren_block_313;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct buffer* buf_314;
struct sType* come_type_315;
struct list$1sNode$ph* o2_saved_316;
struct sNode* it_319;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
_Bool _if_conditional1;
void* __right_value280 = (void*)0;
struct buffer* __dec_obj57;
_Bool __result_obj__211;
void* __right_value281 = (void*)0;
struct CVALUE* come_value_322;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sType* __dec_obj58;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct CVALUE* come_value_323;
void* __right_value289 = (void*)0;
char* __dec_obj59;
struct sType* __dec_obj60;
_Bool __result_obj__212;
    paren_block_313=(struct list$1sNode$ph*)come_increment_ref_count(self->paren_block);
    buf_314=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05pre_op.c", 159, "struct buffer*"))));
    buffer_append_str(buf_314,"({");
    come_type_315=((void*)0);
    for(    o2_saved_316=(struct list$1sNode$ph*)come_increment_ref_count((paren_block_313)),it_319=list$1sNode$ph_begin((o2_saved_316));    !list$1sNode$ph_end((o2_saved_316));    it_319=list$1sNode$ph_next((o2_saved_316))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value272=it_319->kind(it_319->_protocol_obj))),"sIfNode")||string_operator_equals(((char*)(__right_value274=it_319->kind(it_319->_protocol_obj))),"sWhileNode")||string_operator_equals(((char*)(__right_value276=it_319->kind(it_319->_protocol_obj))),"sDoWhileNode")||string_operator_equals(((char*)(__right_value278=it_319->kind(it_319->_protocol_obj))),"sForNode")||((char*)(__right_value279=it_319->kind(it_319->_protocol_obj)))=="sSwitchNode")),        (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value277 = come_decrement_ref_count(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional1) {
            add_come_code(info,((char*)(__right_value280=buffer_to_string(buf_314))));
            (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj57=buf_314,
            buf_314=((void*)0);
            /*b*/ come_call_finalizer3(__dec_obj57,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        !node_compile(it_319,info)) {
            __result_obj__211 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_316,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(paren_block_313,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_314,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_type_315,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__211;
        }
        if(        list$1CVALUE$ph_length(info->stack)>0) {
            come_value_322=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            buf_314) {
                buffer_append_str(buf_314,((char*)(__right_value282=string_operator_add(come_value_322->c_value,"; "))));
                (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                add_come_code(info,((char*)(__right_value283=string_operator_add(come_value_322->c_value,"; "))));
                (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            __dec_obj58=come_type_315,
            come_type_315=(struct sType*)come_increment_ref_count(sType_clone(come_value_322->type));
            /*b*/ come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            transpiler_clear_last_code(info);
            /*c*/ come_call_finalizer3(come_value_322,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            if(            buf_314) {
                buffer_append_str(buf_314,((char*)(__right_value285=string_operator_add(info->module->mLastCode,"; "))));
                (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                buffer_append_str(buf_314,((char*)(__right_value286=string_operator_add(info->module->mLastCode2,"; "))));
                (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                transpiler_clear_last_code(info);
            }
            else {
                add_last_code_to_source(info);
            }
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_316,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    buf_314) {
        buffer_append_str(buf_314,"})");
        come_value_323=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 204, "struct CVALUE*"))));
        __dec_obj59=come_value_323->c_value,
        come_value_323->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_314));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj60=come_value_323->type,
        come_value_323->type=(struct sType*)come_increment_ref_count(come_type_315);
        /*b*/ come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_323->var=((void*)0);
        add_come_last_code(info,"%s",come_value_323->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_323));
        /*c*/ come_call_finalizer3(come_value_323,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        add_come_code(info,"});");
    }
    __result_obj__212 = (_Bool)1;
    /*c*/ come_call_finalizer3(paren_block_313,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_314,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_type_315,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__212;
}

static void sParenBlockNode_finalize(struct sParenBlockNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->paren_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->paren_block,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_317;
struct sNode* __result_obj__205;
struct sNode* __result_obj__206;
struct sNode* result_318;
struct sNode* __result_obj__207;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_317,0,sizeof(struct sNode*));
        __result_obj__205 = result_317;
        return __result_obj__205;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__206 = self->it->item;
        return __result_obj__206;
    }
    memset(&result_318,0,sizeof(struct sNode*));
    __result_obj__207 = result_318;
    return __result_obj__207;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_320;
struct sNode* __result_obj__208;
struct sNode* __result_obj__209;
struct sNode* result_321;
struct sNode* __result_obj__210;
result_320 = (void*)0;
result_321 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_320,0,sizeof(struct sNode*));
        __result_obj__208 = result_320;
        return __result_obj__208;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__209 = self->it->item;
        return __result_obj__209;
    }
    memset(&result_321,0,sizeof(struct sNode*));
    __result_obj__210 = result_321;
    return __result_obj__210;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __right_value290 = (void*)0;
struct sNode* __dec_obj61;
struct sDerefferenceNode* __result_obj__213;
    ((struct sNodeBase*)(__right_value290=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value290,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj61=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__213 = (struct sDerefferenceNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDerefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__213,sDerefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__213;
}

char* sDerefferenceNode_kind(struct sDerefferenceNode* self){
void* __right_value291 = (void*)0;
char* __result_obj__214;
    __result_obj__214 = (char*)come_increment_ref_count(((char*)(__right_value291=__builtin_string("sDerefferenceNode"))));
    (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__214 = come_decrement_ref_count(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__214;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
struct sNode* value_324;
_Bool __result_obj__215;
void* __right_value292 = (void*)0;
struct CVALUE* left_value_325;
struct sType* type_326;
char* fun_name_327;
_Bool calling_fun_328;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct CVALUE* come_value_329;
void* __right_value295 = (void*)0;
char* __dec_obj62;
void* __right_value296 = (void*)0;
struct sType* __dec_obj63;
_Bool __result_obj__216;
memset(&calling_fun_328, 0, sizeof(_Bool));
    value_324=(struct sNode*)come_increment_ref_count(self->value);
    if(    !node_compile(value_324,info)) {
        __result_obj__215 = (_Bool)0;
        ((value_324) ? value_324 = come_decrement_ref_count(value_324, ((struct sNode*)value_324)->finalize, ((struct sNode*)value_324)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__215;
    }
    left_value_325=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_326=(struct sType*)come_increment_ref_count(left_value_325->type);
    fun_name_327="operator_derefference";
    if(    self->mQuote) {
        calling_fun_328=(_Bool)0;
    }
    else {
        calling_fun_328=operator_overload_fun_self(type_326,fun_name_327,(struct sNode*)come_increment_ref_count(value_324),left_value_325,info);
    }
    if(    !calling_fun_328) {
        come_value_329=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 261, "struct CVALUE*"))));
        __dec_obj62=come_value_329->c_value,
        come_value_329->c_value=(char*)come_increment_ref_count(xsprintf("*%s",left_value_325->c_value));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj63=come_value_329->type,
        come_value_329->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_325->type));
        /*b*/ come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_329->type->mPointerNum--;
        come_value_329->var=((void*)0);
        add_come_last_code(info,"%s",come_value_329->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_329));
        /*c*/ come_call_finalizer3(come_value_329,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__216 = (_Bool)1;
    ((value_324) ? value_324 = come_decrement_ref_count(value_324, ((struct sNode*)value_324)->finalize, ((struct sNode*)value_324)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_325,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_326,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __right_value297 = (void*)0;
struct sNode* __dec_obj64;
struct sLogicalDenial* __result_obj__217;
    ((struct sNodeBase*)(__right_value297=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value297,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj64=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__217 = (struct sLogicalDenial*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLogicalDenial_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__217,sLogicalDenial_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
}

char* sLogicalDenial_kind(struct sLogicalDenial* self){
void* __right_value298 = (void*)0;
char* __result_obj__218;
    __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value298=__builtin_string("sLogicalDenial"))));
    (__right_value298 = come_decrement_ref_count(__right_value298, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__218;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __right_value299 = (void*)0;
struct CVALUE* come_value_330;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct CVALUE* come_value2_331;
void* __right_value302 = (void*)0;
char* __dec_obj65;
void* __right_value303 = (void*)0;
struct sType* __dec_obj66;
_Bool __result_obj__219;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_330=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_331=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 299, "struct CVALUE*"))));
    __dec_obj65=come_value2_331->c_value,
    come_value2_331->c_value=(char*)come_increment_ref_count(xsprintf("!%s",come_value_330->c_value));
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj66=come_value2_331->type,
    come_value2_331->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_330->type));
    /*b*/ come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_331->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_331));
    add_come_last_code(info,"%s",come_value2_331->c_value);
    __result_obj__219 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_330,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_331,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__219;
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo* info){
void* __right_value304 = (void*)0;
struct sNode* __dec_obj67;
struct sLogicalDenial2* __result_obj__220;
    ((struct sNodeBase*)(__right_value304=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value304,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj67=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__220 = (struct sLogicalDenial2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLogicalDenial2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__220,sLogicalDenial2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__220;
}

char* sLogicalDenial2_kind(struct sLogicalDenial2* self){
void* __right_value305 = (void*)0;
char* __result_obj__221;
    __result_obj__221 = (char*)come_increment_ref_count(((char*)(__right_value305=__builtin_string("sLogicalDenial"))));
    (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__221 = come_decrement_ref_count(__result_obj__221, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__221;
}

_Bool sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo* info){
void* __right_value306 = (void*)0;
struct CVALUE* come_value_332;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct CVALUE* come_value2_333;
void* __right_value309 = (void*)0;
char* __dec_obj68;
void* __right_value310 = (void*)0;
struct sType* __dec_obj69;
_Bool __result_obj__222;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_332=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_333=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 335, "struct CVALUE*"))));
    __dec_obj68=come_value2_333->c_value,
    come_value2_333->c_value=(char*)come_increment_ref_count(xsprintf("!!%s",come_value_332->c_value));
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj69=come_value2_333->type,
    come_value2_333->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_332->type));
    /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_333->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_333));
    add_come_last_code(info,"%s",come_value2_333->c_value);
    __result_obj__222 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_332,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_333,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__222;
}

static void sLogicalDenial2_finalize(struct sLogicalDenial2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __right_value311 = (void*)0;
struct sNode* __dec_obj70;
struct sReverseNode* __result_obj__223;
    ((struct sNodeBase*)(__right_value311=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value311,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj70=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__223 = (struct sReverseNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReverseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__223,sReverseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__223;
}

char* sReverseNode_kind(struct sReverseNode* self){
void* __right_value312 = (void*)0;
char* __result_obj__224;
    __result_obj__224 = (char*)come_increment_ref_count(((char*)(__right_value312=__builtin_string("sReverseNode"))));
    (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__224 = come_decrement_ref_count(__result_obj__224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__224;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
struct sNode* value_334;
void* __right_value313 = (void*)0;
struct CVALUE* left_value_335;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct CVALUE* come_value_336;
void* __right_value316 = (void*)0;
char* __dec_obj71;
void* __right_value317 = (void*)0;
struct sType* __dec_obj72;
_Bool __result_obj__225;
    value_334=self->value;
    if(    !node_compile(value_334,info)) {
        return (_Bool)0;
    }
    left_value_335=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_336=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 373, "struct CVALUE*"))));
    __dec_obj71=come_value_336->c_value,
    come_value_336->c_value=(char*)come_increment_ref_count(xsprintf("!%s",left_value_335->c_value));
    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj72=come_value_336->type,
    come_value_336->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_335->type));
    /*b*/ come_call_finalizer3(__dec_obj72,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_336->type->mPointerNum--;
    come_value_336->var=((void*)0);
    add_come_last_code(info,"%s",come_value_336->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_336));
    __result_obj__225 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_335,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_336,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

static void sReverseNode_finalize(struct sReverseNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __right_value318 = (void*)0;
struct sNode* __dec_obj73;
struct sMinusNode2* __result_obj__226;
    ((struct sNodeBase*)(__right_value318=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value318,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj73=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__226 = (struct sMinusNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__226,sMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
}

char* sMinusNode2_kind(struct sMinusNode2* self){
void* __right_value319 = (void*)0;
char* __result_obj__227;
    __result_obj__227 = (char*)come_increment_ref_count(((char*)(__right_value319=__builtin_string("sMinusNode2"))));
    (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__227 = come_decrement_ref_count(__result_obj__227, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__227;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __right_value320 = (void*)0;
struct CVALUE* come_value_337;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct CVALUE* come_value2_338;
void* __right_value323 = (void*)0;
char* __dec_obj74;
void* __right_value324 = (void*)0;
struct sType* __dec_obj75;
_Bool __result_obj__228;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_337=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_338=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 410, "struct CVALUE*"))));
    __dec_obj74=come_value2_338->c_value,
    come_value2_338->c_value=(char*)come_increment_ref_count(xsprintf("-%s",come_value_337->c_value));
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj75=come_value2_338->type,
    come_value2_338->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_337->type));
    /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_338->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_338));
    add_come_last_code(info,"%s",come_value2_338->c_value);
    __result_obj__228 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_337,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_338,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__228;
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __right_value325 = (void*)0;
struct sNode* __dec_obj76;
struct sPlusPlusNode2* __result_obj__229;
    ((struct sNodeBase*)(__right_value325=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value325,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj76=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__229 = (struct sPlusPlusNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sPlusPlusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__229,sPlusPlusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__229;
}

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self){
void* __right_value326 = (void*)0;
char* __result_obj__230;
    __result_obj__230 = (char*)come_increment_ref_count(((char*)(__right_value326=__builtin_string("sPlusPlusNode2"))));
    (__right_value326 = come_decrement_ref_count(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__230 = come_decrement_ref_count(__result_obj__230, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__230;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __right_value327 = (void*)0;
struct CVALUE* come_value_339;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct CVALUE* come_value2_340;
void* __right_value330 = (void*)0;
char* __dec_obj77;
void* __right_value331 = (void*)0;
struct sType* __dec_obj78;
_Bool __result_obj__231;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_339=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_340=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 446, "struct CVALUE*"))));
    __dec_obj77=come_value2_340->c_value,
    come_value2_340->c_value=(char*)come_increment_ref_count(xsprintf("++%s",come_value_339->c_value));
    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj78=come_value2_340->type,
    come_value2_340->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_339->type));
    /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_340->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_340));
    add_come_last_code(info,"%s",come_value2_340->c_value);
    __result_obj__231 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_339,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_340,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__231;
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __right_value332 = (void*)0;
struct sNode* __dec_obj79;
struct sMinusMinusNode2* __result_obj__232;
    ((struct sNodeBase*)(__right_value332=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value332,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj79=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__232 = (struct sMinusMinusNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMinusMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__232,sMinusMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__232;
}

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self){
void* __right_value333 = (void*)0;
char* __result_obj__233;
    __result_obj__233 = (char*)come_increment_ref_count(((char*)(__right_value333=__builtin_string("sMinusMinusNode2"))));
    (__right_value333 = come_decrement_ref_count(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__233 = come_decrement_ref_count(__result_obj__233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__233;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __right_value334 = (void*)0;
struct CVALUE* come_value_341;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct CVALUE* come_value2_342;
void* __right_value337 = (void*)0;
char* __dec_obj80;
void* __right_value338 = (void*)0;
struct sType* __dec_obj81;
_Bool __result_obj__234;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_341=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_342=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 482, "struct CVALUE*"))));
    __dec_obj80=come_value2_342->c_value,
    come_value2_342->c_value=(char*)come_increment_ref_count(xsprintf("--%s",come_value_341->c_value));
    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj81=come_value2_342->type,
    come_value2_342->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_341->type));
    /*b*/ come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_342->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_342));
    add_come_last_code(info,"%s",come_value2_342->c_value);
    __result_obj__234 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_341,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_342,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__234;
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, _Bool clang, _Bool comma, struct sInfo* info, _Bool if_result){
void* __right_value339 = (void*)0;
void* __right_value371 = (void*)0;
struct sBlock* __dec_obj91;
struct sNormalBlock* __result_obj__266;
    ((struct sNodeBase*)(__right_value339=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value339,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj91=self->mBlock,
    self->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(block));
    /*b*/ come_call_finalizer3(__dec_obj91,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->clang=clang;
    self->comma=comma;
    __result_obj__266 = (struct sNormalBlock*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNormalBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__266,sNormalBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

_Bool sNormalBlock_terminated(struct sNormalBlock* self){
    return (_Bool)1;
}

char* sNormalBlock_kind(struct sNormalBlock* self){
void* __right_value372 = (void*)0;
char* __result_obj__267;
    __result_obj__267 = (char*)come_increment_ref_count(((char*)(__right_value372=__builtin_string("sNormalBlock"))));
    (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__267 = come_decrement_ref_count(__result_obj__267, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__267;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
struct sBlock* block_396;
_Bool come_c_397;
    block_396=self->mBlock;
    if(    !self->comma) {
        add_come_code(info,"{\n");
    }
    come_c_397=gComeC;
    if(    self->clang) {
        gComeC=(_Bool)1;
    }
    transpile_block(block_396,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,self->comma,(_Bool)0);
    if(    !self->comma) {
        add_come_code(info,"}\n");
    }
    gComeC=come_c_397;
    transpiler_clear_last_code(info);
    return (_Bool)1;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__235;
void* __right_value340 = (void*)0;
struct sBlock* result_343;
void* __right_value341 = (void*)0;
struct list$1sNode$ph* __dec_obj82;
void* __right_value370 = (void*)0;
struct sVarTable* __dec_obj90;
struct sBlock* __result_obj__265;
    if(    self==(void*)0) {
        __result_obj__235 = (void*)0;
        return __result_obj__235;
    }
    result_343=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj82=result_343->mNodes,
        result_343->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj82,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj90=result_343->mVarTable,
        result_343->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj90,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_343->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__265 = result_343;
    /*c*/ come_call_finalizer3(result_343,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__265;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__236;
void* __right_value342 = (void*)0;
struct sVarTable* result_344;
void* __right_value369 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj89;
struct sVarTable* __result_obj__264;
    if(    self==(void*)0) {
        __result_obj__236 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__236,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__236;
    }
    result_344=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj89=result_344->mVars,
        result_344->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj89,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_344->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_344->mParent=self->mParent;
    }
    __result_obj__264 = (struct sVarTable*)come_increment_ref_count(result_344);
    /*c*/ come_call_finalizer3(result_344,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__264,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__264;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__237;
void* __right_value343 = (void*)0;
void* __right_value349 = (void*)0;
struct map$2char$phsVar$ph* result_348;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct list$1char$ph* __dec_obj84;
char* it_351;
struct sVar* default_value_354;
void* __right_value352 = (void*)0;
struct sVar* it2_357;
void* __right_value358 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__263;
default_value_354 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__237 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__237,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__237;
    }
    result_348=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/comelang.h", 1999, "struct map$2char$phsVar$ph*"))));
    __dec_obj84=result_348->key_list,
    result_348->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 2001, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj84,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_351=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_351=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_354,0,sizeof(struct sVar*));
        it2_357=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_351,(struct sVar*)come_increment_ref_count(default_value_354)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_348,(char*)come_increment_ref_count((char*)come_memdup(it_351, "/usr/local/include/comelang.h", 2010, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_357)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_348,(char*)come_increment_ref_count((char*)come_memdup(it_351, "/usr/local/include/comelang.h", 2013, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_357)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_348,(char*)come_increment_ref_count(it_351),(struct sVar*)come_increment_ref_count(sVar_clone(it2_357)));
        }
        else {
            map$2char$phsVar$ph_put(result_348,(char*)come_increment_ref_count(it_351),(struct sVar*)come_increment_ref_count(sVar_clone(it2_357)));
        }
        /*c*/ come_call_finalizer3(default_value_354,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_357,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__263 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_348);
    /*c*/ come_call_finalizer3(result_348,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_345;
int i_346;
    for(    i_345=0;    i_345<self->size;    i_345++    ){
        if(        self->item_existance[i_345]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_345],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_346=0;    i_346<self->size;    i_346++    ){
        if(        self->item_existance[i_346]) {
            if(            1) {
                (self->keys[i_346] = come_decrement_ref_count(self->keys[i_346], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
int i_347;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1char$ph* __dec_obj83;
struct map$2char$phsVar$ph* __result_obj__239;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value344=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1928, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value345=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1929, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value346=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1930, "_Bool*"))));
    for(    i_347=0;    i_347<128;    i_347++    ){
        self->item_existance[i_347]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj83=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1940, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj83,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__239 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__239,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__239;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__238;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__238 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__238,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__238;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_349;
char* __result_obj__240;
char* __result_obj__241;
char* result_350;
char* __result_obj__242;
result_349 = (void*)0;
result_350 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_349,0,sizeof(char*));
        __result_obj__240 = result_349;
        return __result_obj__240;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__241 = self->key_list->it->item;
        return __result_obj__241;
    }
    memset(&result_350,0,sizeof(char*));
    __result_obj__242 = result_350;
    return __result_obj__242;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_352;
char* __result_obj__243;
char* __result_obj__244;
char* result_353;
char* __result_obj__245;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_352,0,sizeof(char*));
        __result_obj__243 = result_352;
        return __result_obj__243;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__244 = self->key_list->it->item;
        return __result_obj__244;
    }
    memset(&result_353,0,sizeof(char*));
    __result_obj__245 = result_353;
    return __result_obj__245;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_355;
unsigned int it_356;
struct sVar* __result_obj__246;
struct sVar* __result_obj__247;
struct sVar* __result_obj__248;
struct sVar* __result_obj__249;
    hash_355=string_get_hash_key(((char*)key))%self->size;
    it_356=hash_355;
    while(    (_Bool)1) {
        if(        self->item_existance[it_356]) {
            if(            string_equals(self->keys[it_356],key)) {
                __result_obj__246 = (struct sVar*)come_increment_ref_count(self->items[it_356]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__246,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__246;
            }
            it_356++;
            if(            it_356>=self->size) {
                it_356=0;
            }
            else if(            it_356==hash_355) {
                __result_obj__247 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__247,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__247;
            }
        }
        else {
            __result_obj__248 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__248,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__248;
        }
    }
    __result_obj__249 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__249,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_369;
int it_370;
_Bool same_key_exist_387;
char* it2_390;
struct map$2char$phsVar$ph* __result_obj__260;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_369=string_get_hash_key(((char*)key))%self->size;
    it_370=hash_369;
    while(    (_Bool)1) {
        if(        self->item_existance[it_370]) {
            if(            string_equals(self->keys[it_370],key)) {
                if(                1) {
                    (self->keys[it_370] = come_decrement_ref_count(self->keys[it_370], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_370]);
                    self->keys[it_370]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_370]);
                    self->keys[it_370]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_370],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_370]=(struct sVar*)come_increment_ref_count(item);
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
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_370]=(_Bool)1;
            if(            1) {
                self->keys[it_370]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_370]=key;
            }
            if(            1) {
                self->items[it_370]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_370]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_387=(_Bool)0;
    for(    it2_390=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_390=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_390,key)) {
            same_key_exist_387=(_Bool)1;
        }
    }
    if(    !same_key_exist_387) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__260 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_358;
void* __right_value353 = (void*)0;
char** keys_359;
void* __right_value354 = (void*)0;
struct sVar** items_360;
void* __right_value355 = (void*)0;
_Bool* item_existance_361;
int len_362;
char* it_363;
struct sVar* default_value_364;
void* __right_value356 = (void*)0;
struct sVar* it2_365;
unsigned int hash_366;
int n_367;
struct sVar* default_value_368;
void* __right_value357 = (void*)0;
default_value_364 = (void*)0;
default_value_368 = (void*)0;
    size_358=self->size*10;
    keys_359=(char**)come_increment_ref_count(((char**)(__right_value353=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_358)), "/usr/local/include/comelang.h", 2167, "char**"))));
    items_360=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value354=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_358)), "/usr/local/include/comelang.h", 2168, "struct sVar**"))));
    item_existance_361=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value355=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_358)), "/usr/local/include/comelang.h", 2169, "_Bool*"))));
    len_362=0;
    for(    it_363=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_363=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_364,0,sizeof(struct sVar*));
        it2_365=((struct sVar*)(__right_value356=map$2char$phsVar$ph_at(self,it_363,(struct sVar*)come_increment_ref_count(default_value_364))));
        /*c*/ come_call_finalizer3(__right_value356,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_366=string_get_hash_key(((char*)it_363))%size_358;
        n_367=hash_366;
        while(        (_Bool)1) {
            if(            item_existance_361[n_367]) {
                n_367++;
                if(                n_367>=size_358) {
                    n_367=0;
                }
                else if(                n_367==hash_366) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_361[n_367]=(_Bool)1;
                keys_359[n_367]=it_363;
                items_360[n_367]=((struct sVar*)(__right_value357=map$2char$phsVar$ph_at(self,it_363,(struct sVar*)come_increment_ref_count(default_value_368))));
                /*c*/ come_call_finalizer3(__right_value357,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_362++;
                /*c*/ come_call_finalizer3(default_value_368,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_368,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_364,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_359;
    self->items=items_360;
    self->item_existance=item_existance_361;
    self->size=size_358;
    self->len=len_362;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_371;
struct list_item$1char$ph* it_372;
struct list$1char$ph* __result_obj__253;
    it2_371=0;
    it_372=self->head;
    while(    it_372!=((void*)0)) {
        if(        string_equals(it_372->item,item)) {
            list$1char$ph_delete(self,it2_371,it2_371+1);
            break;
        }
        it2_371++;
        it_372=it_372->next;
    }
    __result_obj__253 = self;
    return __result_obj__253;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_373;
struct list$1char$ph* __result_obj__250;
struct list_item$1char$ph* it_376;
int i_377;
struct list_item$1char$ph* prev_it_378;
struct list_item$1char$ph* it_379;
int i_380;
struct list_item$1char$ph* prev_it_381;
struct list_item$1char$ph* it_382;
struct list_item$1char$ph* head_prev_it_383;
struct list_item$1char$ph* tail_it_384;
int i_385;
struct list_item$1char$ph* prev_it_386;
struct list$1char$ph* __result_obj__252;
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
        __result_obj__250 = self;
        return __result_obj__250;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_376=self->head;
        i_377=0;
        while(        it_376!=((void*)0)) {
            if(            i_377<tail) {
                prev_it_378=it_376;
                it_376=it_376->next;
                i_377++;
                /*c*/ come_call_finalizer3(prev_it_378,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
        while(        it_379!=((void*)0)) {
            if(            i_380==head) {
                self->tail=it_379->prev;
                self->tail->next=((void*)0);
            }
            if(            i_380>=head) {
                prev_it_381=it_379;
                it_379=it_379->next;
                i_380++;
                /*c*/ come_call_finalizer3(prev_it_381,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
        while(        it_382!=((void*)0)) {
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
                /*c*/ come_call_finalizer3(prev_it_386,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
    __result_obj__252 = self;
    return __result_obj__252;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_374;
struct list_item$1char$ph* prev_it_375;
struct list$1char$ph* __result_obj__251;
    it_374=self->head;
    while(    it_374!=((void*)0)) {
        prev_it_375=it_374;
        it_374=it_374->next;
        /*c*/ come_call_finalizer3(prev_it_375,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__251 = self;
    return __result_obj__251;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_388;
char* __result_obj__254;
char* __result_obj__255;
char* result_389;
char* __result_obj__256;
result_388 = (void*)0;
result_389 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_388,0,sizeof(char*));
        __result_obj__254 = result_388;
        return __result_obj__254;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__255 = self->it->item;
        return __result_obj__255;
    }
    memset(&result_389,0,sizeof(char*));
    __result_obj__256 = result_389;
    return __result_obj__256;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_391;
char* __result_obj__257;
char* __result_obj__258;
char* result_392;
char* __result_obj__259;
result_391 = (void*)0;
result_392 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_391,0,sizeof(char*));
        __result_obj__257 = result_391;
        return __result_obj__257;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__258 = self->it->item;
        return __result_obj__258;
    }
    memset(&result_392,0,sizeof(char*));
    __result_obj__259 = result_392;
    return __result_obj__259;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__261;
void* __right_value359 = (void*)0;
struct sVar* result_393;
void* __right_value360 = (void*)0;
char* __dec_obj85;
void* __right_value361 = (void*)0;
char* __dec_obj86;
void* __right_value362 = (void*)0;
struct sType* __dec_obj87;
void* __right_value363 = (void*)0;
char* __dec_obj88;
struct sVar* __result_obj__262;
    if(    self==(void*)0) {
        __result_obj__261 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__261,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__261;
    }
    result_393=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj85=result_393->mName,
        result_393->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj86=result_393->mCValueName,
        result_393->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj87=result_393->mType,
        result_393->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_393->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_393->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_393->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)) {
        result_393->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj88=result_393->mFunName,
        result_393->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__262 = (struct sVar*)come_increment_ref_count(result_393);
    /*c*/ come_call_finalizer3(result_393,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__262,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_394;
int i_395;
    for(    i_394=0;    i_394<self->size;    i_394++    ){
        if(        self->item_existance[i_394]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_394],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_395=0;    i_395<self->size;    i_395++    ){
        if(        self->item_existance[i_395]) {
            if(            1) {
                (self->keys[i_395] = come_decrement_ref_count(self->keys[i_395], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __right_value373 = (void*)0;
struct sNode* __dec_obj92;
struct sComplement* __result_obj__268;
    ((struct sNodeBase*)(__right_value373=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value373,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj92=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__268 = (struct sComplement*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sComplement_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__268,sComplement_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__268;
}

char* sComplement_kind(struct sComplement* self){
void* __right_value374 = (void*)0;
char* __result_obj__269;
    __result_obj__269 = (char*)come_increment_ref_count(((char*)(__right_value374=__builtin_string("sComplement"))));
    (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__269 = come_decrement_ref_count(__result_obj__269, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__269;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __right_value375 = (void*)0;
struct CVALUE* come_value_398;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct CVALUE* come_value2_399;
void* __right_value378 = (void*)0;
char* __dec_obj93;
void* __right_value379 = (void*)0;
struct sType* __dec_obj94;
_Bool __result_obj__270;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_398=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_399=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 565, "struct CVALUE*"))));
    __dec_obj93=come_value2_399->c_value,
    come_value2_399->c_value=(char*)come_increment_ref_count(xsprintf("~%s",come_value_398->c_value));
    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj94=come_value2_399->type,
    come_value2_399->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_398->type));
    /*b*/ come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_399->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_399));
    add_come_last_code(info,"%s",come_value2_399->c_value);
    __result_obj__270 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_398,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_399,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

static void sComplement_finalize(struct sComplement* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sNode* __dec_obj95;
struct sParenNode* __result_obj__271;
    ((struct sNodeBase*)(__right_value380=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value380,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj95=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__271 = (struct sParenNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sParenNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__271,sParenNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

char* sParenNode_kind(struct sParenNode* self){
void* __right_value382 = (void*)0;
char* __result_obj__272;
    __result_obj__272 = (char*)come_increment_ref_count(((char*)(__right_value382=__builtin_string("sParenNode"))));
    (__right_value382 = come_decrement_ref_count(__right_value382, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__272 = come_decrement_ref_count(__result_obj__272, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__272;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
struct sNode* left_400;
void* __right_value383 = (void*)0;
struct CVALUE* left_value_401;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct CVALUE* come_value_402;
void* __right_value386 = (void*)0;
char* __dec_obj96;
void* __right_value387 = (void*)0;
struct sType* __dec_obj97;
_Bool __result_obj__273;
    left_400=self->mLeft;
    if(    !node_compile(left_400,info)) {
        return (_Bool)0;
    }
    left_value_401=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_402=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 603, "struct CVALUE*"))));
    __dec_obj96=come_value_402->c_value,
    come_value_402->c_value=(char*)come_increment_ref_count(xsprintf("(%s)",left_value_401->c_value));
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj97=come_value_402->type,
    come_value_402->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_401->type));
    /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_402->var=((void*)0);
    add_come_last_code(info,"%s",come_value_402->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_402));
    __result_obj__273 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_401,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_402,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

static void sParenNode_finalize(struct sParenNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sType* __dec_obj98;
void* __right_value390 = (void*)0;
struct sNode* __dec_obj99;
struct sCastNode* __result_obj__274;
    ((struct sNodeBase*)(__right_value388=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value388,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj98=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj99=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__274 = (struct sCastNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCastNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__274,sCastNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

char* sCastNode_kind(struct sCastNode* self){
void* __right_value391 = (void*)0;
char* __result_obj__275;
    __result_obj__275 = (char*)come_increment_ref_count(((char*)(__right_value391=__builtin_string("sCastNode"))));
    (__right_value391 = come_decrement_ref_count(__right_value391, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__275 = come_decrement_ref_count(__result_obj__275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__275;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
struct sType* type_403;
struct sNode* left_404;
void* __right_value392 = (void*)0;
struct CVALUE* left_value_405;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sType* type2_406;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct CVALUE* come_value_407;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
char* __dec_obj100;
void* __right_value399 = (void*)0;
struct sType* __dec_obj101;
_Bool __result_obj__276;
    type_403=self->mType;
    left_404=self->mLeft;
    if(    !node_compile(left_404,info)) {
        return (_Bool)0;
    }
    left_value_405=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type2_406=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value393=sType_clone(type_403))),info->generics_type,info));
    /*c*/ come_call_finalizer3(__right_value393,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_value_407=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 645, "struct CVALUE*"))));
    cast_type(type2_406,left_value_405->type,left_value_405,info);
    __dec_obj100=come_value_407->c_value,
    come_value_407->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",((char*)(__right_value397=make_type_name_string(type2_406,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_405->c_value));
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value397 = come_decrement_ref_count(__right_value397, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj101=come_value_407->type,
    come_value_407->type=(struct sType*)come_increment_ref_count(sType_clone(type2_406));
    /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_407->var=((void*)0);
    add_come_last_code(info,"%s",come_value_407->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_407));
    __result_obj__276 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_405,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_407,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__276;
}

static void sCastNode_finalize(struct sCastNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result){
int sline_real_408;
void* __right_value400 = (void*)0;
struct sBlock* block_409;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sNode* _inf_value1;
struct sNormalBlock* _inf_obj_value1;
void* __right_value406 = (void*)0;
struct sNode* __result_obj__279;
    sline_real_408=info->sline_real;
    info->sline_real=info->sline;
    block_409=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    info->sline_real=sline_real_408;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 669, "struct sNode");
    _inf_obj_value1=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(__right_value402=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count((struct sNormalBlock*)come_calloc_v2(1, sizeof(struct sNormalBlock)*(1), "05pre_op.c", 669, "struct sNormalBlock*")),block_409,clang,comma,info,if_result))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNormalBlock_finalize;
    _inf_value1->clone=(void*)sNormalBlock_clone;
    _inf_value1->compile=(void*)sNormalBlock_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNormalBlock_terminated;
    _inf_value1->kind=(void*)sNormalBlock_kind;
    __result_obj__279 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value406=_inf_value1)));
    /*c*/ come_call_finalizer3(block_409,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value402,sNormalBlock_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value406) ? __right_value406 = come_decrement_ref_count(__right_value406, ((struct sNode*)__right_value406)->finalize, ((struct sNode*)__right_value406)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__279) ? __result_obj__279 = come_decrement_ref_count(__result_obj__279, ((struct sNode*)__result_obj__279)->finalize, ((struct sNode*)__result_obj__279)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__279;
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
struct sNormalBlock* __result_obj__277;
void* __right_value403 = (void*)0;
struct sNormalBlock* result_410;
void* __right_value404 = (void*)0;
char* __dec_obj102;
void* __right_value405 = (void*)0;
struct sBlock* __dec_obj103;
struct sNormalBlock* __result_obj__278;
    if(    self==(void*)0) {
        __result_obj__277 = (void*)0;
        return __result_obj__277;
    }
    result_410=(struct sNormalBlock*)come_increment_ref_count((struct sNormalBlock*)come_calloc_v2(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "struct sNormalBlock*"));
    if(    self!=((void*)0)) {
        result_410->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj102=result_410->sname,
        result_410->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNormalBlock_clone", 5, "char*"));
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_410->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj103=result_410->mBlock,
        result_410->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        /*b*/ come_call_finalizer3(__dec_obj103,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_410->clang=self->clang;
    }
    if(    self!=((void*)0)) {
        result_410->comma=self->comma;
    }
    __result_obj__278 = result_410;
    /*c*/ come_call_finalizer3(result_410,sNormalBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__278;
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sNode* _inf_value2;
struct sLogicalDenial* _inf_obj_value2;
void* __right_value413 = (void*)0;
struct sNode* __result_obj__282;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 674, "struct sNode");
    _inf_obj_value2=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value409=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc_v2(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 674, "struct sLogicalDenial*")),(struct sNode*)come_increment_ref_count(sNode_clone(node)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLogicalDenial_finalize;
    _inf_value2->clone=(void*)sLogicalDenial_clone;
    _inf_value2->compile=(void*)sLogicalDenial_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLogicalDenial_kind;
    __result_obj__282 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value413=_inf_value2)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value409,sLogicalDenial_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value413) ? __right_value413 = come_decrement_ref_count(__right_value413, ((struct sNode*)__right_value413)->finalize, ((struct sNode*)__right_value413)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__282) ? __result_obj__282 = come_decrement_ref_count(__result_obj__282, ((struct sNode*)__result_obj__282)->finalize, ((struct sNode*)__result_obj__282)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__282;
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
struct sLogicalDenial* __result_obj__280;
void* __right_value410 = (void*)0;
struct sLogicalDenial* result_411;
void* __right_value411 = (void*)0;
char* __dec_obj104;
void* __right_value412 = (void*)0;
struct sNode* __dec_obj105;
struct sLogicalDenial* __result_obj__281;
    if(    self==(void*)0) {
        __result_obj__280 = (void*)0;
        return __result_obj__280;
    }
    result_411=(struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc_v2(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "struct sLogicalDenial*"));
    if(    self!=((void*)0)) {
        result_411->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj104=result_411->sname,
        result_411->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLogicalDenial_clone", 5, "char*"));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_411->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj105=result_411->value,
        result_411->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj105 ? __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__281 = result_411;
    /*c*/ come_call_finalizer3(result_411,sLogicalDenial_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__281;
}

struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info){
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct sNode* _inf_value3;
struct sCastNode* _inf_obj_value3;
void* __right_value420 = (void*)0;
struct sNode* __result_obj__285;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 679, "struct sNode");
    _inf_obj_value3=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value415=sCastNode_initialize((struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc_v2(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 679, "struct sCastNode*")),type,node,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCastNode_finalize;
    _inf_value3->clone=(void*)sCastNode_clone;
    _inf_value3->compile=(void*)sCastNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCastNode_kind;
    __result_obj__285 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value420=_inf_value3)));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value415,sCastNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value420) ? __right_value420 = come_decrement_ref_count(__right_value420, ((struct sNode*)__right_value420)->finalize, ((struct sNode*)__right_value420)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__285) ? __result_obj__285 = come_decrement_ref_count(__result_obj__285, ((struct sNode*)__result_obj__285)->finalize, ((struct sNode*)__result_obj__285)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__285;
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
struct sCastNode* __result_obj__283;
void* __right_value416 = (void*)0;
struct sCastNode* result_412;
void* __right_value417 = (void*)0;
char* __dec_obj106;
void* __right_value418 = (void*)0;
struct sType* __dec_obj107;
void* __right_value419 = (void*)0;
struct sNode* __dec_obj108;
struct sCastNode* __result_obj__284;
    if(    self==(void*)0) {
        __result_obj__283 = (void*)0;
        return __result_obj__283;
    }
    result_412=(struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc_v2(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "struct sCastNode*"));
    if(    self!=((void*)0)) {
        result_412->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj106=result_412->sname,
        result_412->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCastNode_clone", 5, "char*"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_412->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj107=result_412->mType,
        result_412->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj108=result_412->mLeft,
        result_412->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__284 = result_412;
    /*c*/ come_call_finalizer3(result_412,sCastNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__284;
}

struct sNode* reffence_node(struct sNode* value, struct sInfo* info){
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sNode* _inf_value4;
struct sRefferenceNode* _inf_obj_value4;
void* __right_value426 = (void*)0;
struct sNode* __result_obj__288;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 684, "struct sNode");
    _inf_obj_value4=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value422=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc_v2(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 684, "struct sRefferenceNode*")),(struct sNode*)come_increment_ref_count(value),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sRefferenceNode_finalize;
    _inf_value4->clone=(void*)sRefferenceNode_clone;
    _inf_value4->compile=(void*)sRefferenceNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sRefferenceNode_kind;
    __result_obj__288 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value426=_inf_value4)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value422,sRefferenceNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value426) ? __right_value426 = come_decrement_ref_count(__right_value426, ((struct sNode*)__right_value426)->finalize, ((struct sNode*)__right_value426)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__288) ? __result_obj__288 = come_decrement_ref_count(__result_obj__288, ((struct sNode*)__result_obj__288)->finalize, ((struct sNode*)__result_obj__288)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__288;
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
struct sRefferenceNode* __result_obj__286;
void* __right_value423 = (void*)0;
struct sRefferenceNode* result_413;
void* __right_value424 = (void*)0;
char* __dec_obj109;
void* __right_value425 = (void*)0;
struct sNode* __dec_obj110;
struct sRefferenceNode* __result_obj__287;
    if(    self==(void*)0) {
        __result_obj__286 = (void*)0;
        return __result_obj__286;
    }
    result_413=(struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc_v2(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "struct sRefferenceNode*"));
    if(    self!=((void*)0)) {
        result_413->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj109=result_413->sname,
        result_413->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sRefferenceNode_clone", 5, "char*"));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_413->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj110=result_413->value,
        result_413->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj110 ? __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__287 = result_413;
    /*c*/ come_call_finalizer3(result_413,sRefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__287;
}

struct sNode* pre_position_operator(struct sInfo* info){
_Bool refference_414;
char* p_415;
int sline_416;
void* __right_value427 = (void*)0;
struct sNode* __result_obj__289;
void* __right_value428 = (void*)0;
struct sNode* __result_obj__290;
void* __right_value429 = (void*)0;
struct sNode* __result_obj__291;
void* __right_value430 = (void*)0;
struct sNode* node_417;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* _inf_value5;
struct sLogicalDenial* _inf_obj_value5;
void* __right_value433 = (void*)0;
struct sNode* __result_obj__292;
void* __right_value434 = (void*)0;
struct sNode* node_418;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct sNode* _inf_value6;
struct sLogicalDenial2* _inf_obj_value6;
void* __right_value440 = (void*)0;
struct sNode* __result_obj__295;
void* __right_value441 = (void*)0;
struct sNode* node_420;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sNode* _inf_value7;
struct sMinusMinusNode2* _inf_obj_value7;
void* __right_value447 = (void*)0;
struct sNode* __result_obj__298;
void* __right_value448 = (void*)0;
struct sNode* node_422;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sNode* _inf_value8;
struct sMinusNode2* _inf_obj_value8;
void* __right_value454 = (void*)0;
struct sNode* __result_obj__301;
void* __right_value455 = (void*)0;
struct sNode* node_424;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sNode* _inf_value9;
struct sPlusPlusNode2* _inf_obj_value9;
void* __right_value461 = (void*)0;
struct sNode* __result_obj__304;
void* __right_value462 = (void*)0;
struct sNode* node_426;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sNode* _inf_value10;
struct sComplement* _inf_obj_value10;
void* __right_value468 = (void*)0;
struct sNode* __result_obj__307;
_Bool quote_428;
_Bool no_assign_429;
void* __right_value469 = (void*)0;
struct sNode* value_430;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sNode* _inf_value11;
struct sDerefferenceNode* _inf_obj_value11;
void* __right_value475 = (void*)0;
struct sNode* __result_obj__310;
void* __right_value476 = (void*)0;
struct sNode* value_432;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sNode* _inf_value12;
struct sRefferenceNode* _inf_obj_value12;
void* __right_value479 = (void*)0;
struct sNode* __result_obj__311;
void* __right_value480 = (void*)0;
struct sNode* value_433;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sNode* _inf_value13;
struct sReverseNode* _inf_obj_value13;
void* __right_value486 = (void*)0;
struct sNode* __result_obj__314;
_Bool cast_expression_flag_435;
char* p_436;
int sline_437;
void* __right_value487 = (void*)0;
char* word_438;
void* __right_value488 = (void*)0;
char* __dec_obj125;
_Bool tuple_expression_flag_439;
_Bool named_tuple_expression_flag_440;
char* p_441;
int sline_442;
char* p_443;
int sline_444;
void* __right_value489 = (void*)0;
_Bool no_comma_445;
_Bool no_output_err_446;
_Bool no_output_come_code_447;
void* __right_value490 = (void*)0;
struct sNode* node_448;
struct sNode* node2_449;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1sNode$ph* paren_block_450;
void* __right_value493 = (void*)0;
struct sNode* node2_451;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sNode* _inf_value14;
struct sParenBlockNode* _inf_obj_value14;
void* __right_value499 = (void*)0;
struct sNode* node_452;
struct sNode* __result_obj__317;
void* __right_value500 = (void*)0;
struct sNode* node_454;
struct sNode* __result_obj__318;
void* __right_value501 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* type_455=0;
char* name_456=0;
_Bool err_457=0;
void* __right_value502 = (void*)0;
struct sNode* node_458;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sNode* _inf_value15;
struct sCastNode* _inf_obj_value15;
void* __right_value505 = (void*)0;
struct sNode* __result_obj__319;
struct sNode* node_459;
_Bool no_assign_460;
_Bool no_comma_461;
void* __right_value506 = (void*)0;
struct sNode* __dec_obj128;
void* __right_value507 = (void*)0;
struct sNode* __dec_obj129;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sNode* _inf_value16;
struct sParenNode* _inf_obj_value16;
void* __right_value513 = (void*)0;
struct sNode* __dec_obj132;
struct sNode* __result_obj__322;
struct sNode* __result_obj__323;
memset(&quote_428, 0, sizeof(_Bool));
node_459 = (void*)0;
    skip_spaces_and_lf(info);
    refference_414=(_Bool)0;
    {
        p_415=info->p;
        sline_416=info->sline;
        if(        *info->p==38&&*(info->p+1)!=38) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==34) {
                refference_414=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                refference_414=(_Bool)1;
            }
            else if(            *info->p==40||*info->p==42) {
                while(                *info->p==40||*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(                xisalpha(*info->p)||*info->p==95) {
                    refference_414=(_Bool)1;
                }
            }
        }
        info->p=p_415;
        info->sline=sline_416;
    }
    parse_sharp_v5(info);
    if(    *info->p==123) {
        if(        info->array_initializer) {
            __result_obj__289 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value427=parse_array_initializer(info))));
            ((__right_value427) ? __right_value427 = come_decrement_ref_count(__right_value427, ((struct sNode*)__right_value427)->finalize, ((struct sNode*)__right_value427)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__289) ? __result_obj__289 = come_decrement_ref_count(__result_obj__289, ((struct sNode*)__result_obj__289)->finalize, ((struct sNode*)__result_obj__289)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__289;
        }
        else if(        info->struct_initializer) {
            __result_obj__290 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value428=parse_struct_initializer(info))));
            ((__right_value428) ? __right_value428 = come_decrement_ref_count(__right_value428, ((struct sNode*)__right_value428)->finalize, ((struct sNode*)__right_value428)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__290) ? __result_obj__290 = come_decrement_ref_count(__result_obj__290, ((struct sNode*)__result_obj__290)->finalize, ((struct sNode*)__result_obj__290)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__290;
        }
        else {
            __result_obj__291 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value429=parse_normal_block((_Bool)0,(_Bool)0,info,(_Bool)0))));
            ((__right_value429) ? __right_value429 = come_decrement_ref_count(__right_value429, ((struct sNode*)__right_value429)->finalize, ((struct sNode*)__right_value429)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__291) ? __result_obj__291 = come_decrement_ref_count(__result_obj__291, ((struct sNode*)__result_obj__291)->finalize, ((struct sNode*)__result_obj__291)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__291;
        }
    }
    else if(    *info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123) {
        info->p++;
        skip_spaces_and_lf(info);
        node_417=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 742, "struct sNode");
        _inf_obj_value5=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value432=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc_v2(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 742, "struct sLogicalDenial*")),(struct sNode*)come_increment_ref_count(node_417),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLogicalDenial_finalize;
        _inf_value5->clone=(void*)sLogicalDenial_clone;
        _inf_value5->compile=(void*)sLogicalDenial_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLogicalDenial_kind;
        __result_obj__292 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value433=_inf_value5)));
        ((node_417) ? node_417 = come_decrement_ref_count(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value432,sLogicalDenial_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value433) ? __right_value433 = come_decrement_ref_count(__right_value433, ((struct sNode*)__right_value433)->finalize, ((struct sNode*)__right_value433)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__292) ? __result_obj__292 = come_decrement_ref_count(__result_obj__292, ((struct sNode*)__result_obj__292)->finalize, ((struct sNode*)__result_obj__292)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__292;
        ((node_417) ? node_417 = come_decrement_ref_count(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==33&&*(info->p+1)==33) {
        info->p++;
        skip_spaces_and_lf(info);
        node_418=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 750, "struct sNode");
        _inf_obj_value6=(struct sLogicalDenial2*)come_increment_ref_count(((struct sLogicalDenial2*)(__right_value436=sLogicalDenial2_initialize((struct sLogicalDenial2*)come_increment_ref_count((struct sLogicalDenial2*)come_calloc_v2(1, sizeof(struct sLogicalDenial2)*(1), "05pre_op.c", 750, "struct sLogicalDenial2*")),(struct sNode*)come_increment_ref_count(node_418),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sLogicalDenial2_finalize;
        _inf_value6->clone=(void*)sLogicalDenial2_clone;
        _inf_value6->compile=(void*)sLogicalDenial2_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sLogicalDenial2_kind;
        __result_obj__295 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value440=_inf_value6)));
        ((node_418) ? node_418 = come_decrement_ref_count(node_418, ((struct sNode*)node_418)->finalize, ((struct sNode*)node_418)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value436,sLogicalDenial2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value440) ? __right_value440 = come_decrement_ref_count(__right_value440, ((struct sNode*)__right_value440)->finalize, ((struct sNode*)__right_value440)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__295) ? __result_obj__295 = come_decrement_ref_count(__result_obj__295, ((struct sNode*)__result_obj__295)->finalize, ((struct sNode*)__result_obj__295)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__295;
        ((node_418) ? node_418 = come_decrement_ref_count(node_418, ((struct sNode*)node_418)->finalize, ((struct sNode*)node_418)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==45&&*(info->p+1)==45) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_420=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 758, "struct sNode");
        _inf_obj_value7=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(__right_value443=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count((struct sMinusMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusMinusNode2)*(1), "05pre_op.c", 758, "struct sMinusMinusNode2*")),(struct sNode*)come_increment_ref_count(node_420),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sMinusMinusNode2_finalize;
        _inf_value7->clone=(void*)sMinusMinusNode2_clone;
        _inf_value7->compile=(void*)sMinusMinusNode2_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sMinusMinusNode2_kind;
        __result_obj__298 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value447=_inf_value7)));
        ((node_420) ? node_420 = come_decrement_ref_count(node_420, ((struct sNode*)node_420)->finalize, ((struct sNode*)node_420)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value443,sMinusMinusNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value447) ? __right_value447 = come_decrement_ref_count(__right_value447, ((struct sNode*)__right_value447)->finalize, ((struct sNode*)__right_value447)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__298) ? __result_obj__298 = come_decrement_ref_count(__result_obj__298, ((struct sNode*)__result_obj__298)->finalize, ((struct sNode*)__result_obj__298)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__298;
        ((node_420) ? node_420 = come_decrement_ref_count(node_420, ((struct sNode*)node_420)->finalize, ((struct sNode*)node_420)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==45&&!xisdigit(*(info->p+1))) {
        info->p++;
        skip_spaces_and_lf(info);
        node_422=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 766, "struct sNode");
        _inf_obj_value8=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(__right_value450=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count((struct sMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusNode2)*(1), "05pre_op.c", 766, "struct sMinusNode2*")),(struct sNode*)come_increment_ref_count(node_422),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sMinusNode2_finalize;
        _inf_value8->clone=(void*)sMinusNode2_clone;
        _inf_value8->compile=(void*)sMinusNode2_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sMinusNode2_kind;
        __result_obj__301 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value454=_inf_value8)));
        ((node_422) ? node_422 = come_decrement_ref_count(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value450,sMinusNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value454) ? __right_value454 = come_decrement_ref_count(__right_value454, ((struct sNode*)__right_value454)->finalize, ((struct sNode*)__right_value454)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__301) ? __result_obj__301 = come_decrement_ref_count(__result_obj__301, ((struct sNode*)__result_obj__301)->finalize, ((struct sNode*)__result_obj__301)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__301;
        ((node_422) ? node_422 = come_decrement_ref_count(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==43&&*(info->p+1)==43) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_424=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 774, "struct sNode");
        _inf_obj_value9=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(__right_value457=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count((struct sPlusPlusNode2*)come_calloc_v2(1, sizeof(struct sPlusPlusNode2)*(1), "05pre_op.c", 774, "struct sPlusPlusNode2*")),(struct sNode*)come_increment_ref_count(node_424),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sPlusPlusNode2_finalize;
        _inf_value9->clone=(void*)sPlusPlusNode2_clone;
        _inf_value9->compile=(void*)sPlusPlusNode2_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sPlusPlusNode2_kind;
        __result_obj__304 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value461=_inf_value9)));
        ((node_424) ? node_424 = come_decrement_ref_count(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value457,sPlusPlusNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value461) ? __right_value461 = come_decrement_ref_count(__right_value461, ((struct sNode*)__right_value461)->finalize, ((struct sNode*)__right_value461)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__304) ? __result_obj__304 = come_decrement_ref_count(__result_obj__304, ((struct sNode*)__result_obj__304)->finalize, ((struct sNode*)__result_obj__304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__304;
        ((node_424) ? node_424 = come_decrement_ref_count(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==126) {
        info->p++;
        skip_spaces_and_lf(info);
        node_426=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 782, "struct sNode");
        _inf_obj_value10=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(__right_value464=sComplement_initialize((struct sComplement*)come_increment_ref_count((struct sComplement*)come_calloc_v2(1, sizeof(struct sComplement)*(1), "05pre_op.c", 782, "struct sComplement*")),(struct sNode*)come_increment_ref_count(node_426),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sComplement_finalize;
        _inf_value10->clone=(void*)sComplement_clone;
        _inf_value10->compile=(void*)sComplement_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sComplement_kind;
        __result_obj__307 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value468=_inf_value10)));
        ((node_426) ? node_426 = come_decrement_ref_count(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value464,sComplement_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value468) ? __right_value468 = come_decrement_ref_count(__right_value468, ((struct sNode*)__right_value468)->finalize, ((struct sNode*)__right_value468)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__307) ? __result_obj__307 = come_decrement_ref_count(__result_obj__307, ((struct sNode*)__result_obj__307)->finalize, ((struct sNode*)__result_obj__307)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__307;
        ((node_426) ? node_426 = come_decrement_ref_count(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (*info->p==92&&*(info->p+1)==42)||*info->p==42) {
        if(        *info->p==92) {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_428=(_Bool)1;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            quote_428=(_Bool)0;
        }
        no_assign_429=info->no_assign;
        info->no_assign=(_Bool)1;
        value_430=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        info->no_assign=no_assign_429;
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 802, "struct sNode");
        _inf_obj_value11=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(__right_value471=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count((struct sDerefferenceNode*)come_calloc_v2(1, sizeof(struct sDerefferenceNode)*(1), "05pre_op.c", 802, "struct sDerefferenceNode*")),(struct sNode*)come_increment_ref_count(value_430),quote_428,info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDerefferenceNode_finalize;
        _inf_value11->clone=(void*)sDerefferenceNode_clone;
        _inf_value11->compile=(void*)sDerefferenceNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDerefferenceNode_kind;
        __result_obj__310 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value475=_inf_value11)));
        ((value_430) ? value_430 = come_decrement_ref_count(value_430, ((struct sNode*)value_430)->finalize, ((struct sNode*)value_430)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value471,sDerefferenceNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value475) ? __right_value475 = come_decrement_ref_count(__right_value475, ((struct sNode*)__right_value475)->finalize, ((struct sNode*)__right_value475)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__310) ? __result_obj__310 = come_decrement_ref_count(__result_obj__310, ((struct sNode*)__result_obj__310)->finalize, ((struct sNode*)__result_obj__310)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__310;
        ((value_430) ? value_430 = come_decrement_ref_count(value_430, ((struct sNode*)value_430)->finalize, ((struct sNode*)value_430)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==38&&refference_414) {
        info->p++;
        skip_spaces_and_lf(info);
        value_432=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 810, "struct sNode");
        _inf_obj_value12=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value478=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc_v2(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 810, "struct sRefferenceNode*")),(struct sNode*)come_increment_ref_count(value_432),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sRefferenceNode_finalize;
        _inf_value12->clone=(void*)sRefferenceNode_clone;
        _inf_value12->compile=(void*)sRefferenceNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sRefferenceNode_kind;
        __result_obj__311 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value479=_inf_value12)));
        ((value_432) ? value_432 = come_decrement_ref_count(value_432, ((struct sNode*)value_432)->finalize, ((struct sNode*)value_432)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value478,sRefferenceNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value479) ? __right_value479 = come_decrement_ref_count(__right_value479, ((struct sNode*)__right_value479)->finalize, ((struct sNode*)__right_value479)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__311) ? __result_obj__311 = come_decrement_ref_count(__result_obj__311, ((struct sNode*)__result_obj__311)->finalize, ((struct sNode*)__result_obj__311)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__311;
        ((value_432) ? value_432 = come_decrement_ref_count(value_432, ((struct sNode*)value_432)->finalize, ((struct sNode*)value_432)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123) {
        info->p++;
        skip_spaces_and_lf(info);
        value_433=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 818, "struct sNode");
        _inf_obj_value13=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value482=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc_v2(1, sizeof(struct sReverseNode)*(1), "05pre_op.c", 818, "struct sReverseNode*")),(struct sNode*)come_increment_ref_count(value_433),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sReverseNode_finalize;
        _inf_value13->clone=(void*)sReverseNode_clone;
        _inf_value13->compile=(void*)sReverseNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sReverseNode_kind;
        __result_obj__314 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value486=_inf_value13)));
        ((value_433) ? value_433 = come_decrement_ref_count(value_433, ((struct sNode*)value_433)->finalize, ((struct sNode*)value_433)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value482,sReverseNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value486) ? __right_value486 = come_decrement_ref_count(__right_value486, ((struct sNode*)__right_value486)->finalize, ((struct sNode*)__right_value486)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__314) ? __result_obj__314 = come_decrement_ref_count(__result_obj__314, ((struct sNode*)__result_obj__314)->finalize, ((struct sNode*)__result_obj__314)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__314;
        ((value_433) ? value_433 = come_decrement_ref_count(value_433, ((struct sNode*)value_433)->finalize, ((struct sNode*)value_433)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        cast_expression_flag_435=(_Bool)0;
        {
            p_436=info->p;
            sline_437=info->sline;
            parse_sharp_v5(info);
            word_438=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj125=word_438,
                word_438=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            parse_sharp_v5(info);
            if(            is_type_name(word_438,info)) {
                cast_expression_flag_435=(_Bool)1;
            }
            parse_sharp_v5(info);
            info->p=p_436;
            info->sline=sline_437;
            (word_438 = come_decrement_ref_count(word_438, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        tuple_expression_flag_439=(_Bool)0;
        named_tuple_expression_flag_440=(_Bool)0;
        if(        !gComeC) {
            p_441=info->p;
            sline_442=info->sline;
            parse_sharp_v5(info);
            {
                p_443=info->p;
                sline_444=info->sline;
                if(                *info->p==95||xisalpha(*info->p)) {
                    ((char*)(__right_value489=parse_word(info)));
                    (__right_value489 = come_decrement_ref_count(__right_value489, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    named_tuple_expression_flag_440=(_Bool)1;
                }
                else {
                    info->p=p_443;
                    info->sline=sline_444;
                }
            }
            no_comma_445=info->no_comma;
            info->no_comma=(_Bool)1;
            no_output_err_446=info->no_output_err;
            info->no_output_err=(_Bool)1;
            no_output_come_code_447=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            node_448=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node2_449=(struct sNode*)come_increment_ref_count(node_448);
            parse_sharp_v5(info);
            info->no_comma=no_comma_445;
            info->no_output_err=no_output_err_446;
            info->no_output_come_code=no_output_come_code_447;
            if(            *info->p==44) {
                tuple_expression_flag_439=(_Bool)1;
            }
            parse_sharp_v5(info);
            info->p=p_441;
            info->sline=sline_442;
            ((node_448) ? node_448 = come_decrement_ref_count(node_448, ((struct sNode*)node_448)->finalize, ((struct sNode*)node_448)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node2_449) ? node2_449 = come_decrement_ref_count(node2_449, ((struct sNode*)node2_449)->finalize, ((struct sNode*)node2_449)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_block_450=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05pre_op.c", 907, "struct list$1sNode$ph*"))));
            while(            (_Bool)1) {
                parse_sharp_v5(info);
                node2_451=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                list$1sNode$ph_add(paren_block_450,(struct sNode*)come_increment_ref_count(node2_451));
                while(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_451) ? node2_451 = come_decrement_ref_count(node2_451, ((struct sNode*)node2_451)->finalize, ((struct sNode*)node2_451)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end in paren block");
                    exit(0);
                }
                ((node2_451) ? node2_451 = come_decrement_ref_count(node2_451, ((struct sNode*)node2_451)->finalize, ((struct sNode*)node2_451)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            expected_next_character(41,info);
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 936, "struct sNode");
            _inf_obj_value14=(struct sParenBlockNode*)come_increment_ref_count(((struct sParenBlockNode*)(__right_value495=sParenBlockNode_initialize((struct sParenBlockNode*)come_increment_ref_count((struct sParenBlockNode*)come_calloc_v2(1, sizeof(struct sParenBlockNode)*(1), "05pre_op.c", 936, "struct sParenBlockNode*")),(struct list$1sNode$ph*)come_increment_ref_count(paren_block_450),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sParenBlockNode_finalize;
            _inf_value14->clone=(void*)sParenBlockNode_clone;
            _inf_value14->compile=(void*)sParenBlockNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sParenBlockNode_kind;
            node_452=(struct sNode*)come_increment_ref_count(_inf_value14);
            /*c*/ come_call_finalizer3(__right_value495,sParenBlockNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            parse_sharp_v5(info);
            __result_obj__317 = (struct sNode*)come_increment_ref_count(node_452);
            /*c*/ come_call_finalizer3(paren_block_450,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_452) ? node_452 = come_decrement_ref_count(node_452, ((struct sNode*)node_452)->finalize, ((struct sNode*)node_452)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__317) ? __result_obj__317 = come_decrement_ref_count(__result_obj__317, ((struct sNode*)__result_obj__317)->finalize, ((struct sNode*)__result_obj__317)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__317;
            /*c*/ come_call_finalizer3(paren_block_450,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_452) ? node_452 = come_decrement_ref_count(node_452, ((struct sNode*)node_452)->finalize, ((struct sNode*)node_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !gComeC&&tuple_expression_flag_439) {
            parse_sharp_v5(info);
            node_454=(struct sNode*)come_increment_ref_count(parse_tuple(info,named_tuple_expression_flag_440));
            parse_sharp_v5(info);
            __result_obj__318 = (struct sNode*)come_increment_ref_count(node_454);
            ((node_454) ? node_454 = come_decrement_ref_count(node_454, ((struct sNode*)node_454)->finalize, ((struct sNode*)node_454)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__318) ? __result_obj__318 = come_decrement_ref_count(__result_obj__318, ((struct sNode*)__result_obj__318)->finalize, ((struct sNode*)__result_obj__318)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__318;
            ((node_454) ? node_454 = come_decrement_ref_count(node_454, ((struct sNode*)node_454)->finalize, ((struct sNode*)node_454)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        cast_expression_flag_435) {
            parse_sharp_v5(info);
            multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value501=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_455=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_456=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_457=multiple_assign_var6->v3;
            /*c*/ come_call_finalizer3(__right_value501,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_457) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            expected_next_character(41,info);
            parse_sharp_v5(info);
            node_458=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 966, "struct sNode");
            _inf_obj_value15=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value504=sCastNode_initialize((struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc_v2(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 966, "struct sCastNode*")),type_455,node_458,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCastNode_finalize;
            _inf_value15->clone=(void*)sCastNode_clone;
            _inf_value15->compile=(void*)sCastNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCastNode_kind;
            __result_obj__319 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value505=_inf_value15)));
            /*c*/ come_call_finalizer3(type_455,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_456 = come_decrement_ref_count(name_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_458) ? node_458 = come_decrement_ref_count(node_458, ((struct sNode*)node_458)->finalize, ((struct sNode*)node_458)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value504,sCastNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value505) ? __right_value505 = come_decrement_ref_count(__right_value505, ((struct sNode*)__right_value505)->finalize, ((struct sNode*)__right_value505)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__319) ? __result_obj__319 = come_decrement_ref_count(__result_obj__319, ((struct sNode*)__result_obj__319)->finalize, ((struct sNode*)__result_obj__319)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__319;
            /*c*/ come_call_finalizer3(type_455,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_456 = come_decrement_ref_count(name_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_458) ? node_458 = come_decrement_ref_count(node_458, ((struct sNode*)node_458)->finalize, ((struct sNode*)node_458)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_assign_460=info->no_assign;
            info->no_assign=(_Bool)0;
            if(            gComeC&&info->in_fun_param) {
                no_comma_461=info->no_comma;
                info->no_comma=(_Bool)0;
                parse_sharp_v5(info);
                __dec_obj128=node_459,
                node_459=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                parse_sharp_v5(info);
                info->no_comma=no_comma_461;
            }
            else {
                parse_sharp_v5(info);
                __dec_obj129=node_459,
                node_459=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                parse_sharp_v5(info);
            }
            info->no_assign=no_assign_460;
            expected_next_character(41,info);
            parse_sharp_v5(info);
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 992, "struct sNode");
            _inf_obj_value16=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(__right_value509=sParenNode_initialize((struct sParenNode*)come_increment_ref_count((struct sParenNode*)come_calloc_v2(1, sizeof(struct sParenNode)*(1), "05pre_op.c", 992, "struct sParenNode*")),node_459,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sParenNode_finalize;
            _inf_value16->clone=(void*)sParenNode_clone;
            _inf_value16->compile=(void*)sParenNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sParenNode_kind;
            __dec_obj132=node_459,
            node_459=(struct sNode*)come_increment_ref_count(_inf_value16);
            (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value509,sParenNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__322 = (struct sNode*)come_increment_ref_count(node_459);
            ((node_459) ? node_459 = come_decrement_ref_count(node_459, ((struct sNode*)node_459)->finalize, ((struct sNode*)node_459)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__322) ? __result_obj__322 = come_decrement_ref_count(__result_obj__322, ((struct sNode*)__result_obj__322)->finalize, ((struct sNode*)__result_obj__322)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__322;
            ((node_459) ? node_459 = come_decrement_ref_count(node_459, ((struct sNode*)node_459)->finalize, ((struct sNode*)node_459)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else {
        __result_obj__323 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((__result_obj__323) ? __result_obj__323 = come_decrement_ref_count(__result_obj__323, ((struct sNode*)__result_obj__323)->finalize, ((struct sNode*)__result_obj__323)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__323;
    }
}

static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self){
struct sLogicalDenial2* __result_obj__293;
void* __right_value437 = (void*)0;
struct sLogicalDenial2* result_419;
void* __right_value438 = (void*)0;
char* __dec_obj111;
void* __right_value439 = (void*)0;
struct sNode* __dec_obj112;
struct sLogicalDenial2* __result_obj__294;
    if(    self==(void*)0) {
        __result_obj__293 = (void*)0;
        return __result_obj__293;
    }
    result_419=(struct sLogicalDenial2*)come_increment_ref_count((struct sLogicalDenial2*)come_calloc_v2(1, sizeof(struct sLogicalDenial2)*(1), "sLogicalDenial2_clone", 3, "struct sLogicalDenial2*"));
    if(    self!=((void*)0)) {
        result_419->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj111=result_419->sname,
        result_419->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLogicalDenial2_clone", 5, "char*"));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_419->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj112=result_419->value,
        result_419->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__294 = result_419;
    /*c*/ come_call_finalizer3(result_419,sLogicalDenial2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__294;
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
struct sMinusMinusNode2* __result_obj__296;
void* __right_value444 = (void*)0;
struct sMinusMinusNode2* result_421;
void* __right_value445 = (void*)0;
char* __dec_obj113;
void* __right_value446 = (void*)0;
struct sNode* __dec_obj114;
struct sMinusMinusNode2* __result_obj__297;
    if(    self==(void*)0) {
        __result_obj__296 = (void*)0;
        return __result_obj__296;
    }
    result_421=(struct sMinusMinusNode2*)come_increment_ref_count((struct sMinusMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "struct sMinusMinusNode2*"));
    if(    self!=((void*)0)) {
        result_421->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj113=result_421->sname,
        result_421->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMinusMinusNode2_clone", 5, "char*"));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj114=result_421->value,
        result_421->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj114 ? __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__297 = result_421;
    /*c*/ come_call_finalizer3(result_421,sMinusMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__297;
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
struct sMinusNode2* __result_obj__299;
void* __right_value451 = (void*)0;
struct sMinusNode2* result_423;
void* __right_value452 = (void*)0;
char* __dec_obj115;
void* __right_value453 = (void*)0;
struct sNode* __dec_obj116;
struct sMinusNode2* __result_obj__300;
    if(    self==(void*)0) {
        __result_obj__299 = (void*)0;
        return __result_obj__299;
    }
    result_423=(struct sMinusNode2*)come_increment_ref_count((struct sMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "struct sMinusNode2*"));
    if(    self!=((void*)0)) {
        result_423->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_423->sname,
        result_423->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMinusNode2_clone", 5, "char*"));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_423->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj116=result_423->value,
        result_423->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__300 = result_423;
    /*c*/ come_call_finalizer3(result_423,sMinusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__300;
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
struct sPlusPlusNode2* __result_obj__302;
void* __right_value458 = (void*)0;
struct sPlusPlusNode2* result_425;
void* __right_value459 = (void*)0;
char* __dec_obj117;
void* __right_value460 = (void*)0;
struct sNode* __dec_obj118;
struct sPlusPlusNode2* __result_obj__303;
    if(    self==(void*)0) {
        __result_obj__302 = (void*)0;
        return __result_obj__302;
    }
    result_425=(struct sPlusPlusNode2*)come_increment_ref_count((struct sPlusPlusNode2*)come_calloc_v2(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "struct sPlusPlusNode2*"));
    if(    self!=((void*)0)) {
        result_425->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj117=result_425->sname,
        result_425->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sPlusPlusNode2_clone", 5, "char*"));
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_425->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj118=result_425->value,
        result_425->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj118 ? __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__303 = result_425;
    /*c*/ come_call_finalizer3(result_425,sPlusPlusNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__303;
}

static struct sComplement* sComplement_clone(struct sComplement* self){
struct sComplement* __result_obj__305;
void* __right_value465 = (void*)0;
struct sComplement* result_427;
void* __right_value466 = (void*)0;
char* __dec_obj119;
void* __right_value467 = (void*)0;
struct sNode* __dec_obj120;
struct sComplement* __result_obj__306;
    if(    self==(void*)0) {
        __result_obj__305 = (void*)0;
        return __result_obj__305;
    }
    result_427=(struct sComplement*)come_increment_ref_count((struct sComplement*)come_calloc_v2(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "struct sComplement*"));
    if(    self!=((void*)0)) {
        result_427->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj119=result_427->sname,
        result_427->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComplement_clone", 5, "char*"));
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_427->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj120=result_427->value,
        result_427->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__306 = result_427;
    /*c*/ come_call_finalizer3(result_427,sComplement_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__306;
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
struct sDerefferenceNode* __result_obj__308;
void* __right_value472 = (void*)0;
struct sDerefferenceNode* result_431;
void* __right_value473 = (void*)0;
char* __dec_obj121;
void* __right_value474 = (void*)0;
struct sNode* __dec_obj122;
struct sDerefferenceNode* __result_obj__309;
    if(    self==(void*)0) {
        __result_obj__308 = (void*)0;
        return __result_obj__308;
    }
    result_431=(struct sDerefferenceNode*)come_increment_ref_count((struct sDerefferenceNode*)come_calloc_v2(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "struct sDerefferenceNode*"));
    if(    self!=((void*)0)) {
        result_431->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj121=result_431->sname,
        result_431->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDerefferenceNode_clone", 5, "char*"));
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_431->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj122=result_431->value,
        result_431->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)) {
        result_431->mQuote=self->mQuote;
    }
    __result_obj__309 = result_431;
    /*c*/ come_call_finalizer3(result_431,sDerefferenceNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__309;
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
struct sReverseNode* __result_obj__312;
void* __right_value483 = (void*)0;
struct sReverseNode* result_434;
void* __right_value484 = (void*)0;
char* __dec_obj123;
void* __right_value485 = (void*)0;
struct sNode* __dec_obj124;
struct sReverseNode* __result_obj__313;
    if(    self==(void*)0) {
        __result_obj__312 = (void*)0;
        return __result_obj__312;
    }
    result_434=(struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc_v2(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "struct sReverseNode*"));
    if(    self!=((void*)0)) {
        result_434->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj123=result_434->sname,
        result_434->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReverseNode_clone", 5, "char*"));
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_434->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj124=result_434->value,
        result_434->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__313 = result_434;
    /*c*/ come_call_finalizer3(result_434,sReverseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__313;
}

static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self){
struct sParenBlockNode* __result_obj__315;
void* __right_value496 = (void*)0;
struct sParenBlockNode* result_453;
void* __right_value497 = (void*)0;
char* __dec_obj126;
void* __right_value498 = (void*)0;
struct list$1sNode$ph* __dec_obj127;
struct sParenBlockNode* __result_obj__316;
    if(    self==(void*)0) {
        __result_obj__315 = (void*)0;
        return __result_obj__315;
    }
    result_453=(struct sParenBlockNode*)come_increment_ref_count((struct sParenBlockNode*)come_calloc_v2(1, sizeof(struct sParenBlockNode)*(1), "sParenBlockNode_clone", 3, "struct sParenBlockNode*"));
    if(    self!=((void*)0)) {
        result_453->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj126=result_453->sname,
        result_453->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sParenBlockNode_clone", 5, "char*"));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_453->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->paren_block!=((void*)0)) {
        __dec_obj127=result_453->paren_block,
        result_453->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->paren_block));
        /*b*/ come_call_finalizer3(__dec_obj127,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__316 = result_453;
    /*c*/ come_call_finalizer3(result_453,sParenBlockNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__316;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
struct sParenNode* __result_obj__320;
void* __right_value510 = (void*)0;
struct sParenNode* result_462;
void* __right_value511 = (void*)0;
char* __dec_obj130;
void* __right_value512 = (void*)0;
struct sNode* __dec_obj131;
struct sParenNode* __result_obj__321;
    if(    self==(void*)0) {
        __result_obj__320 = (void*)0;
        return __result_obj__320;
    }
    result_462=(struct sParenNode*)come_increment_ref_count((struct sParenNode*)come_calloc_v2(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "struct sParenNode*"));
    if(    self!=((void*)0)) {
        result_462->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj130=result_462->sname,
        result_462->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sParenNode_clone", 5, "char*"));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_462->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj131=result_462->mLeft,
        result_462->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__321 = result_462;
    /*c*/ come_call_finalizer3(result_462,sParenNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__321;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __right_value514 = (void*)0;
struct sNode* node_463;
void* __right_value515 = (void*)0;
struct sNode* __result_obj__324;
struct sNode* __result_obj__325;
    node_463=(struct sNode*)come_increment_ref_count(pre_position_operator(info));
    if(    node_463==((void*)0)) {
        __result_obj__324 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value515=expression_node_v97(info))));
        ((node_463) ? node_463 = come_decrement_ref_count(node_463, ((struct sNode*)node_463)->finalize, ((struct sNode*)node_463)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value515) ? __right_value515 = come_decrement_ref_count(__right_value515, ((struct sNode*)__right_value515)->finalize, ((struct sNode*)__right_value515)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__324) ? __result_obj__324 = come_decrement_ref_count(__result_obj__324, ((struct sNode*)__result_obj__324)->finalize, ((struct sNode*)__result_obj__324)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__324;
    }
    else {
        __result_obj__325 = (struct sNode*)come_increment_ref_count(node_463);
        ((node_463) ? node_463 = come_decrement_ref_count(node_463, ((struct sNode*)node_463)->finalize, ((struct sNode*)node_463)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__325) ? __result_obj__325 = come_decrement_ref_count(__result_obj__325, ((struct sNode*)__result_obj__325)->finalize, ((struct sNode*)__result_obj__325)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__325;
    }
    ((node_463) ? node_463 = come_decrement_ref_count(node_463, ((struct sNode*)node_463)->finalize, ((struct sNode*)node_463)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
}

