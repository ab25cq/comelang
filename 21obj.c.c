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

struct sNewNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
};

struct sImplementsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj_exp;
    struct sType* inf_type;
};

struct sTrueNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFalseNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSizeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sSizeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sTypeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sTypeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicTypeOf
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignAsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignAsExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDeleteNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sBorrowNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sCloneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDupeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDummyHeapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCIncNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCDecNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sIsHeap
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sIsPointer
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sGCDecNoFreeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
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
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
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
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static void tuple4$4char$phchar$phchar$phchar$ph_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self);
static struct tuple4$4char$phchar$phchar$phchar$ph* tuple4$4char$phchar$phchar$phchar$ph_clone(struct tuple4$4char$phchar$phchar$phchar$ph* self);
static unsigned int tuple4$4char$phchar$phchar$phchar$ph_get_hash_key(struct tuple4$4char$phchar$phchar$phchar$ph* self);
static _Bool tuple4$4char$phchar$phchar$phchar$ph_equals(struct tuple4$4char$phchar$phchar$phchar$ph* left, struct tuple4$4char$phchar$phchar$phchar$ph* right);
static struct tuple4$4char$phchar$phchar$phchar$ph* tuple4$4char$phchar$phchar$phchar$ph_initialize(struct tuple4$4char$phchar$phchar$phchar$ph* self, char* v1, char* v2, char* v3, char* v4);
static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info);
char* sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
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
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static void sNewNode_finalize(struct sNewNode* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);
char* sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);
static void sImplementsNode_finalize(struct sImplementsNode* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);
char* sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);
static void sTrueNode_finalize(struct sTrueNode* self);
struct sNode* create_true_object(struct sInfo* info);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);
char* sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);
static void sFalseNode_finalize(struct sFalseNode* self);
struct sNode* create_false_object(struct sInfo* info);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);
char* sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);
char* sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info);
char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self);
_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info);
static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);
char* sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);
char* sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);
static void sDeleteNode_finalize(struct sDeleteNode* self);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);
char* sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);
static void sBorrowNode_finalize(struct sBorrowNode* self);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);
char* sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);
static void sCloneNode_finalize(struct sCloneNode* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);
char* sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);
static void sDupeNode_finalize(struct sDupeNode* self);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);
char* sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);
char* sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);
static void sGCIncNode_finalize(struct sGCIncNode* self);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);
static void sGCDecNode_finalize(struct sGCDecNode* self);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);
char* sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);
static void sIsHeap_finalize(struct sIsHeap* self);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);
char* sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);
static void sIsPointer_finalize(struct sIsPointer* self);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info);
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
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

struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info){
void* __right_value189 = (void*)0;
char* finalizer_name_239;
void* __right_value190 = (void*)0;
char* cloner_name_240;
void* __right_value191 = (void*)0;
char* get_hash_key_name_241;
void* __right_value192 = (void*)0;
char* equaler_name_242;
void* __right_value193 = (void*)0;
_Bool _if_conditional1;
void* __right_value194 = (void*)0;
char* __dec_obj16;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
_Bool _if_conditional2;
void* __right_value197 = (void*)0;
char* __dec_obj17;
void* __right_value198 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var1 = (void*)0;
struct sFun* fun_253=0;
char* name_254=0;
char* __dec_obj18;
void* __right_value199 = (void*)0;
_Bool _if_conditional3;
void* __right_value200 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var2 = (void*)0;
struct sFun* fun_255=0;
char* name_256=0;
char* __dec_obj19;
void* __right_value201 = (void*)0;
_Bool _if_conditional4;
void* __right_value202 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var3 = (void*)0;
struct sFun* fun_257=0;
char* name_258=0;
char* __dec_obj20;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* __result_obj__176;
    finalizer_name_239=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_240=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"clone",info,(_Bool)1));
    get_hash_key_name_241=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"get_hash_key",info,(_Bool)1));
    equaler_name_242=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"equals",info,(_Bool)1));
    if(    (_if_conditional1=(((struct sFun*)(__right_value193=map$2char$phsFun$ph_operator_load_element(info->funcs,finalizer_name_239)))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value193,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional1) {
        if(        any_type->mClass->mNumber) {
            __dec_obj16=finalizer_name_239,
            finalizer_name_239=(char*)come_increment_ref_count(xsprintf("(void*)0"));
            __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            (void*)((struct tuple2$2sFun$pchar$ph*)(__right_value195=create_finalizer_automatically(any_type,"finalize",info)));
            /*c*/ come_call_finalizer3(__right_value195,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    (_if_conditional2=(((struct sFun*)(__right_value196=map$2char$phsFun$ph_operator_load_element(info->funcs,cloner_name_240)))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value196,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional2) {
        if(        any_type->mClass->mNumber) {
            __dec_obj17=cloner_name_240,
            cloner_name_240=(char*)come_increment_ref_count(xsprintf("(void*)0"));
            __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            multiple_assign_var1=((struct tuple2$2sFun$pchar$ph*)(__right_value198=create_cloner_automatically(any_type,"clone",info)));
            fun_253=multiple_assign_var1->v1;
            name_254=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            /*c*/ come_call_finalizer3(__right_value198,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj18=cloner_name_240,
            cloner_name_240=(char*)come_increment_ref_count(name_254);
            __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (name_254 = come_decrement_ref_count(name_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    (_if_conditional3=(((struct sFun*)(__right_value199=map$2char$phsFun$ph_operator_load_element(info->funcs,get_hash_key_name_241)))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value199,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional3) {
        multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value200=create_get_hash_key_automatically(any_type,"get_hash_key",info)));
        fun_255=multiple_assign_var2->v1;
        name_256=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        /*c*/ come_call_finalizer3(__right_value200,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj19=get_hash_key_name_241,
        get_hash_key_name_241=(char*)come_increment_ref_count(name_256);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (name_256 = come_decrement_ref_count(name_256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    (_if_conditional4=(((struct sFun*)(__right_value201=map$2char$phsFun$ph_operator_load_element(info->funcs,equaler_name_242)))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value201,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional4) {
        multiple_assign_var3=((struct tuple2$2sFun$pchar$ph*)(__right_value202=create_equals_automatically(any_type,"equals",info)));
        fun_257=multiple_assign_var3->v1;
        name_258=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        /*c*/ come_call_finalizer3(__right_value202,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj20=equaler_name_242,
        equaler_name_242=(char*)come_increment_ref_count(name_258);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (name_258 = come_decrement_ref_count(name_258, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__176 = (struct tuple4$4char$phchar$phchar$phchar$ph*)come_increment_ref_count(((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value209=tuple4$4char$phchar$phchar$phchar$ph_initialize((struct tuple4$4char$phchar$phchar$phchar$ph**)come_increment_ref_count((struct tuple4$4char$phchar$phchar$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple4$4char$phchar$phchar$phchar$ph)*(1), "21obj.c", 36, "struct tuple4$4char$phchar$phchar$phchar$ph")),(char*)come_increment_ref_count(finalizer_name_239),(char*)come_increment_ref_count(cloner_name_240),(char*)come_increment_ref_count(get_hash_key_name_241),(char*)come_increment_ref_count(equaler_name_242)))));
    /*c*/ come_call_finalizer3(any_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_239 = come_decrement_ref_count(finalizer_name_239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_240 = come_decrement_ref_count(cloner_name_240, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_241 = come_decrement_ref_count(get_hash_key_name_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_242 = come_decrement_ref_count(equaler_name_242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value209,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__176,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__176;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_243;
unsigned int hash_244;
unsigned int it_245;
struct sFun* __result_obj__165;
struct sFun* __result_obj__166;
struct sFun* __result_obj__167;
struct sFun* __result_obj__168;
default_value_243 = (void*)0;
    memset(&default_value_243,0,sizeof(struct sFun*));
    hash_244=string_get_hash_key(((char*)key))%self->size;
    it_245=hash_244;
    while(    (_Bool)1) {
        if(        self->item_existance[it_245]) {
            if(            string_equals(self->keys[it_245],key)) {
                __result_obj__165 = (struct sFun*)come_increment_ref_count(self->items[it_245]);
                /*c*/ come_call_finalizer3(default_value_243,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__165,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__165;
            }
            it_245++;
            if(            it_245>=self->size) {
                it_245=0;
            }
            else if(            it_245==hash_244) {
                __result_obj__166 = (struct sFun*)come_increment_ref_count(default_value_243);
                /*c*/ come_call_finalizer3(default_value_243,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__166,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__166;
            }
        }
        else {
            __result_obj__167 = (struct sFun*)come_increment_ref_count(default_value_243);
            /*c*/ come_call_finalizer3(default_value_243,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__167,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__167;
        }
    }
    __result_obj__168 = (struct sFun*)come_increment_ref_count(default_value_243);
    /*c*/ come_call_finalizer3(default_value_243,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__168,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__168;
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
struct list_item$1sType$ph* it_246;
struct list_item$1sType$ph* prev_it_247;
    it_246=self->head;
    while(    it_246!=((void*)0)) {
        prev_it_247=it_246;
        it_246=it_246->next;
        /*c*/ come_call_finalizer3(prev_it_247,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_248;
struct list_item$1sNode$ph* prev_it_249;
    it_248=self->head;
    while(    it_248!=((void*)0)) {
        prev_it_249=it_248;
        it_248=it_248->next;
        /*c*/ come_call_finalizer3(prev_it_249,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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
struct sFun* default_value_250;
unsigned int hash_251;
unsigned int it_252;
struct sFun* __result_obj__169;
struct sFun* __result_obj__170;
struct sFun* __result_obj__171;
struct sFun* __result_obj__172;
default_value_250 = (void*)0;
    memset(&default_value_250,0,sizeof(struct sFun*));
    hash_251=string_get_hash_key(((char*)key))%self->size;
    it_252=hash_251;
    while(    (_Bool)1) {
        if(        self->item_existance[it_252]) {
            if(            string_equals(self->keys[it_252],key)) {
                __result_obj__169 = (struct sFun*)come_increment_ref_count(self->items[it_252]);
                /*c*/ come_call_finalizer3(default_value_250,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__169,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__169;
            }
            it_252++;
            if(            it_252>=self->size) {
                it_252=0;
            }
            else if(            it_252==hash_251) {
                __result_obj__170 = (struct sFun*)come_increment_ref_count(default_value_250);
                /*c*/ come_call_finalizer3(default_value_250,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__170,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__170;
            }
        }
        else {
            __result_obj__171 = (struct sFun*)come_increment_ref_count(default_value_250);
            /*c*/ come_call_finalizer3(default_value_250,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__171,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__171;
        }
    }
    __result_obj__172 = (struct sFun*)come_increment_ref_count(default_value_250);
    /*c*/ come_call_finalizer3(default_value_250,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__172,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__172;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple4$4char$phchar$phchar$phchar$ph_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        (self->v4 = come_decrement_ref_count(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple4$4char$phchar$phchar$phchar$ph* tuple4$4char$phchar$phchar$phchar$ph_clone(struct tuple4$4char$phchar$phchar$phchar$ph* self){
struct tuple4$4char$phchar$phchar$phchar$ph* __result_obj__173;
void* __right_value203 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* result_259;
void* __right_value204 = (void*)0;
char* __dec_obj21;
void* __right_value205 = (void*)0;
char* __dec_obj22;
void* __right_value206 = (void*)0;
char* __dec_obj23;
void* __right_value207 = (void*)0;
char* __dec_obj24;
struct tuple4$4char$phchar$phchar$phchar$ph* __result_obj__174;
    if(    self==(void*)0) {
        __result_obj__173 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__173,tuple4$4char$phchar$phchar$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__173;
    }
    result_259=(struct tuple4$4char$phchar$phchar$phchar$ph*)come_increment_ref_count((struct tuple4$4char$phchar$phchar$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple4$4char$phchar$phchar$phchar$ph)*(1), "tuple4$4char$phchar$phchar$phchar$ph_clone", 3, "struct tuple4$4char$phchar$phchar$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj21=result_259->v1,
        result_259->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple4$4char$phchar$phchar$phchar$ph_clone", 4, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj22=result_259->v2,
        result_259->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple4$4char$phchar$phchar$phchar$ph_clone", 5, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj23=result_259->v3,
        result_259->v3=(char*)come_increment_ref_count((char*)come_memdup(self->v3, "tuple4$4char$phchar$phchar$phchar$ph_clone", 6, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        __dec_obj24=result_259->v4,
        result_259->v4=(char*)come_increment_ref_count((char*)come_memdup(self->v4, "tuple4$4char$phchar$phchar$phchar$ph_clone", 7, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__174 = (struct tuple4$4char$phchar$phchar$phchar$ph*)come_increment_ref_count(result_259);
    /*c*/ come_call_finalizer3(result_259,tuple4$4char$phchar$phchar$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__174,tuple4$4char$phchar$phchar$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__174;
}

static unsigned int tuple4$4char$phchar$phchar$phchar$ph_get_hash_key(struct tuple4$4char$phchar$phchar$phchar$ph* self){
unsigned int result_260;
    result_260=0;
    result_260+=int_get_hash_key(((int)self->v1));
    result_260+=int_get_hash_key(((int)self->v2));
    result_260+=int_get_hash_key(((int)self->v3));
    result_260+=int_get_hash_key(((int)self->v4));
    return result_260;
}

static _Bool tuple4$4char$phchar$phchar$phchar$ph_equals(struct tuple4$4char$phchar$phchar$phchar$ph* left, struct tuple4$4char$phchar$phchar$phchar$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple4$4char$phchar$phchar$phchar$ph* tuple4$4char$phchar$phchar$phchar$ph_initialize(struct tuple4$4char$phchar$phchar$phchar$ph* self, char* v1, char* v2, char* v3, char* v4){
char* __dec_obj25;
char* __dec_obj26;
char* __dec_obj27;
char* __dec_obj28;
struct tuple4$4char$phchar$phchar$phchar$ph* __result_obj__175;
    __dec_obj25=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj26=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj27=self->v3,
    self->v3=(char*)come_increment_ref_count(v3);
    __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj28=self->v4,
    self->v4=(char*)come_increment_ref_count(v4);
    __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__175 = (struct tuple4$4char$phchar$phchar$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v3 = come_decrement_ref_count(v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v4 = come_decrement_ref_count(v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__175,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        (self->v4 = come_decrement_ref_count(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value210 = (void*)0;
void* __right_value249 = (void*)0;
struct sType* __dec_obj53;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj54;
struct sNewNode* __result_obj__192;
    ((struct sNodeBase*)(__right_value210=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value210,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj53=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj54=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer);
    /*b*/ come_call_finalizer3(__dec_obj54,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__192 = (struct sNewNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNewNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__192,sNewNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

char* sNewNode_kind(struct sNewNode* self){
void* __right_value250 = (void*)0;
char* __result_obj__193;
    __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value250=__builtin_string("sNewNode"))));
    (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__193;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_288;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_289;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct CVALUE* come_value_290;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct buffer* num_string_291;
struct list$1sNode$ph* o2_saved_292;
struct sNode* it_295;
_Bool Value_298;
_Bool __result_obj__200;
void* __right_value255 = (void*)0;
struct CVALUE* cvalue_299;
void* __right_value256 = (void*)0;
struct sType* type2_300;
void* __right_value257 = (void*)0;
char* type_name_303;
void* __right_value258 = (void*)0;
char* type_name2_304;
void* __right_value259 = (void*)0;
char* var_name_306;
void* __right_value260 = (void*)0;
struct sType* type3_307;
void* __right_value261 = (void*)0;
char* type_name3_308;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct buffer* buf_309;
char* obj_310;
void* __right_value265 = (void*)0;
_Bool _if_conditional5;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
char* __dec_obj55;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
char* __dec_obj56;
struct sClass* klass_311;
int i_312;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_313;
struct tuple2$2char$phsNode$ph* it_316;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* name_319=0;
struct sNode* exp_320=0;
_Bool Value_321;
_Bool __result_obj__208;
void* __right_value270 = (void*)0;
struct CVALUE* come_value2_322;
struct sType* left_type_323;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_324;
struct tuple2$2char$phsType$ph* it2_327;
struct tuple2$2char$phsType$ph* multiple_assign_var5 = (void*)0;
char* field_name_330=0;
struct sType* field_type_331=0;
void* __right_value271 = (void*)0;
struct sType* __dec_obj57;
struct sType* right_type_334;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sType* __dec_obj58;
void* __right_value274 = (void*)0;
char* c_value_335;
void* __right_value275 = (void*)0;
char* __dec_obj59;
void* __right_value276 = (void*)0;
struct sType* __dec_obj60;
void* __right_value280 = (void*)0;
struct sType* type3_339;
void* __right_value281 = (void*)0;
char* type_name3_340;
void* __right_value282 = (void*)0;
_Bool _if_conditional6;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
char* __dec_obj64;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
char* __dec_obj65;
void* __right_value287 = (void*)0;
struct sType* __dec_obj66;
_Bool __result_obj__216;
obj_310 = (void*)0;
    type_288=self->type;
    initializer_289=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    come_value_290=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 59, "struct CVALUE*"))));
    num_string_291=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 61, "struct buffer*"))));
    buffer_append_str(num_string_291,"1");
    for(    o2_saved_292=(struct list$1sNode$ph*)come_increment_ref_count((type_288->mArrayNum)),it_295=list$1sNode$ph_begin((o2_saved_292));    !list$1sNode$ph_end((o2_saved_292));    it_295=list$1sNode$ph_next((o2_saved_292))    ){
        Value_298=node_compile(it_295,info);
        if(        !Value_298) {
            __result_obj__200 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_292,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(initializer_289,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_value_290,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(num_string_291,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__200;
        }
        else {
        }
        cvalue_299=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(num_string_291,"*(%s)",cvalue_299->c_value);
        /*c*/ come_call_finalizer3(cvalue_299,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_292,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    type2_300=(struct sType*)come_increment_ref_count(solve_generics(type_288,info->generics_type,info));
    list$1sNode$ph_reset(type2_300->mArrayNum);
    type_name_303=(char*)come_increment_ref_count(make_type_name_string(type2_300,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1));
    type_name2_304=(char*)come_increment_ref_count(make_come_type_name_string(type2_300,info));
    if(    initializer_289) {
        static int var_num_305=1;
        var_num_305++;
        var_name_306=(char*)come_increment_ref_count(xsprintf("__new_obj__%d",var_num_305));
        type3_307=(struct sType*)come_increment_ref_count(sType_clone(type2_300));
        type3_307->mPointerNum++;
        if(        type3_307->mNoSolvedGenericsType) {
            type3_307->mNoSolvedGenericsType->mPointerNum++;
        }
        type_name3_308=(char*)come_increment_ref_count(make_type_name_string(type3_307,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value262=make_define_var(type3_307,var_name_306,(_Bool)0,info))));
        (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buf_309=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 104, "struct buffer*"))));
        buffer_append_str(buf_309,"(");
        if(        (_if_conditional5=(((struct sFun*)(__right_value265=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),        /*c*/ come_call_finalizer3(__right_value265,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional5) {
            __dec_obj55=obj_310,
            obj_310=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name_306,type_name_303,type_name_303,((char*)(__right_value266=buffer_to_string(num_string_291))),info->sname,info->sline,type_name3_308));
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value266 = come_decrement_ref_count(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            __dec_obj56=obj_310,
            obj_310=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name_306,type_name_303,type_name_303,((char*)(__right_value268=buffer_to_string(num_string_291))),info->sname,info->sline,type_name3_308));
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_str(buf_309,obj_310);
        buffer_append_str(buf_309,",");
        klass_311=type3_307->mClass;
        i_312=0;
        for(        o2_saved_313=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((initializer_289)),it_316=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_313));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_313));        it_316=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_313))        ){
            multiple_assign_var4=it_316;
            name_319=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            exp_320=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_321=node_compile(exp_320,info);
            if(            !Value_321) {
                __result_obj__208 = (_Bool)0;
                (name_319 = come_decrement_ref_count(name_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((exp_320) ? exp_320 = come_decrement_ref_count(exp_320, ((struct sNode*)exp_320)->finalize, ((struct sNode*)exp_320)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(o2_saved_313,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_306 = come_decrement_ref_count(var_name_306, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type3_307,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name3_308 = come_decrement_ref_count(type_name3_308, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(buf_309,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (obj_310 = come_decrement_ref_count(obj_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(initializer_289,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_value_290,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(num_string_291,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_300,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_303 = come_decrement_ref_count(type_name_303, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (type_name2_304 = come_decrement_ref_count(type_name2_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__208;
            }
            else {
            }
            come_value2_322=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            left_type_323=((void*)0);
            for(            o2_saved_324=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_311->mFields)),it2_327=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_324));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_324));            it2_327=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_324))            ){
                multiple_assign_var5=it2_327;
                field_name_330=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                field_type_331=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                string_operator_equals(name_319,field_name_330)) {
                    __dec_obj57=left_type_323,
                    left_type_323=(struct sType*)come_increment_ref_count(sType_clone(field_type_331));
                    /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (field_name_330 = come_decrement_ref_count(field_name_330, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    break;
                }
                (field_name_330 = come_decrement_ref_count(field_name_330, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_331,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_324,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            left_type_323==((void*)0)) {
                err_msg(info,"field %s is not defined",name_319);
            }
            right_type_334=(struct sType*)come_increment_ref_count(come_value2_322->type);
            check_assign_type(((char*)(__right_value273=xsprintf("\%s is assining to",((char*)(__right_value272=string_to_string(name_319)))))),left_type_323,right_type_334,come_value2_322,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj58=right_type_334,
            right_type_334=(struct sType*)come_increment_ref_count(come_value2_322->type);
            /*b*/ come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            if(            left_type_323->mHeap&&right_type_334->mHeap&&left_type_323->mPointerNum>0&&right_type_334->mPointerNum>0) {
                c_value_335=(char*)come_increment_ref_count(increment_ref_count_object(left_type_323,come_value2_322->c_value,info));
                buffer_append_format(buf_309,"%s->%s = %s",var_name_306,name_319,c_value_335);
                (c_value_335 = come_decrement_ref_count(c_value_335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_format(buf_309,"%s->%s = %s",var_name_306,name_319,come_value2_322->c_value);
            }
            buffer_append_str(buf_309,",");
            i_312++;
            (name_319 = come_decrement_ref_count(name_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_320) ? exp_320 = come_decrement_ref_count(exp_320, ((struct sNode*)exp_320)->finalize, ((struct sNode*)exp_320)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value2_322,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type_323,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type_334,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_313,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_309,var_name_306);
        buffer_append_str(buf_309,")");
        __dec_obj59=come_value_290->c_value,
        come_value_290->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_309));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        type2_300->mHeap=(_Bool)1;
        type2_300->mPointerNum++;
        if(        type2_300->mNoSolvedGenericsType) {
            type2_300->mNoSolvedGenericsType->mPointerNum++;
            type2_300->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj60=come_value_290->type,
        come_value_290->type=(struct sType*)come_increment_ref_count(sType_clone(type2_300));
        /*b*/ come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_290->var=((void*)0);
        append_object_to_right_values2(come_value_290,(struct sType*)come_increment_ref_count(type2_300),info,(_Bool)0,((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value_290->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_290));
        (var_name_306 = come_decrement_ref_count(var_name_306, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type3_307,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_name3_308 = come_decrement_ref_count(type_name3_308, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(buf_309,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (obj_310 = come_decrement_ref_count(obj_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        type3_339=(struct sType*)come_increment_ref_count(sType_clone(type2_300));
        type3_339->mPointerNum++;
        type3_339->mHeap=(_Bool)1;
        if(        type3_339->mNoSolvedGenericsType) {
            type3_339->mNoSolvedGenericsType->mPointerNum++;
            type3_339->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        type_name3_340=(char*)come_increment_ref_count(make_type_name_string(type3_339,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        (_if_conditional6=(((struct sFun*)(__right_value282=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),        /*c*/ come_call_finalizer3(__right_value282,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional6) {
            __dec_obj64=come_value_290->c_value,
            come_value_290->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_303,type_name_303,((char*)(__right_value283=buffer_to_string(num_string_291))),info->sname,info->sline,type_name3_340));
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            __dec_obj65=come_value_290->c_value,
            come_value_290->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_303,type_name_303,((char*)(__right_value285=buffer_to_string(num_string_291))),info->sname,info->sline,type_name3_340));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type2_300->mHeap=(_Bool)1;
        type2_300->mPointerNum++;
        if(        type2_300->mNoSolvedGenericsType) {
            type2_300->mNoSolvedGenericsType->mPointerNum++;
            type2_300->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj66=come_value_290->type,
        come_value_290->type=(struct sType*)come_increment_ref_count(sType_clone(type2_300));
        /*b*/ come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_290->var=((void*)0);
        append_object_to_right_values2(come_value_290,(struct sType*)come_increment_ref_count(type2_300),info,(_Bool)0,((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value_290->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_290));
        /*c*/ come_call_finalizer3(type3_339,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_name3_340 = come_decrement_ref_count(type_name3_340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__216 = (_Bool)1;
    /*c*/ come_call_finalizer3(initializer_289,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_290,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_291,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_300,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_303 = come_decrement_ref_count(type_name_303, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (type_name2_304 = come_decrement_ref_count(type_name2_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__216;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__177;
void* __right_value211 = (void*)0;
struct sType* result_261;
void* __right_value212 = (void*)0;
struct sType* __dec_obj29;
void* __right_value213 = (void*)0;
struct sType* __dec_obj30;
void* __right_value221 = (void*)0;
struct list$1sType$ph* __dec_obj34;
void* __right_value222 = (void*)0;
struct sType* __dec_obj35;
void* __right_value223 = (void*)0;
struct sType* __dec_obj36;
void* __right_value225 = (void*)0;
struct sNode* __dec_obj37;
void* __right_value226 = (void*)0;
struct sNode* __dec_obj38;
void* __right_value227 = (void*)0;
char* __dec_obj39;
void* __right_value228 = (void*)0;
char* __dec_obj40;
void* __right_value229 = (void*)0;
char* __dec_obj41;
void* __right_value237 = (void*)0;
struct list$1sNode$ph* __dec_obj45;
void* __right_value238 = (void*)0;
char* __dec_obj46;
void* __right_value239 = (void*)0;
struct list$1sType$ph* __dec_obj47;
void* __right_value247 = (void*)0;
struct list$1char$ph* __dec_obj51;
void* __right_value248 = (void*)0;
struct sType* __dec_obj52;
struct sType* __result_obj__191;
    if(    self==(void*)0) {
        __result_obj__177 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__177,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__177;
    }
    result_261=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_261->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj29=result_261->mOriginalLoadVarType,
        result_261->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj30=result_261->mChannelType,
        result_261->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj34=result_261->mGenericsTypes,
        result_261->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj34,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj35=result_261->mNoSolvedGenericsType,
        result_261->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_261->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj36=result_261->mAnyOriginalType,
        result_261->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj36,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj37=result_261->mSizeNum,
        result_261->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj38=result_261->mAlignas,
        result_261->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj39=result_261->mTupleName,
        result_261->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj40=result_261->mAttribute,
        result_261->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_261->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_261->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_261->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_261->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_261->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_261->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_261->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_261->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_261->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_261->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_261->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_261->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_261->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_261->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_261->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_261->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_261->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_261->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_261->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_261->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_261->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_261->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_261->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_261->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj41=result_261->mAsmName,
        result_261->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_261->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_261->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_261->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj45=result_261->mArrayNum,
        result_261->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj45,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_261->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_261->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_261->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_261->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_261->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj46=result_261->mOriginalTypeName,
        result_261->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_261->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_261->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_261->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_261->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj47=result_261->mParamTypes,
        result_261->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj47,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj51=result_261->mParamNames,
        result_261->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj51,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj52=result_261->mResultType,
        result_261->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_261->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_261->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__191 = (struct sType*)come_increment_ref_count(result_261);
    /*c*/ come_call_finalizer3(result_261,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__191,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__191;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__178;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct list$1sType$ph* result_262;
struct list_item$1sType$ph* it_263;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct list$1sType$ph* __result_obj__181;
    if(    self==((void*)0)) {
        __result_obj__178 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__178,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__178;
    }
    result_262=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1sType$ph*"))));
    it_263=self->head;
    while(    it_263!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_262,(struct sType*)come_increment_ref_count(sType_clone(it_263->item)));
        }
        else {
            list$1sType$ph_add(result_262,(struct sType*)come_increment_ref_count(sType_clone(it_263->item)));
        }
        it_263=it_263->next;
    }
    __result_obj__181 = (struct list$1sType$ph*)come_increment_ref_count(result_262);
    /*c*/ come_call_finalizer3(result_262,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__181,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__181;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__179;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__179 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__179,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__179;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value216 = (void*)0;
struct list_item$1sType$ph* litem_264;
struct sType* __dec_obj31;
void* __right_value217 = (void*)0;
struct list_item$1sType$ph* litem_265;
struct sType* __dec_obj32;
void* __right_value218 = (void*)0;
struct list_item$1sType$ph* litem_266;
struct sType* __dec_obj33;
struct list$1sType$ph* __result_obj__180;
    if(    self->len==0) {
        litem_264=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value216=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_264->prev=((void*)0);
        litem_264->next=((void*)0);
        __dec_obj31=litem_264->item,
        litem_264->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_264;
        self->head=litem_264;
    }
    else if(    self->len==1) {
        litem_265=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value217=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_265->prev=self->head;
        litem_265->next=((void*)0);
        __dec_obj32=litem_265->item,
        litem_265->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_265;
        self->head->next=litem_265;
    }
    else {
        litem_266=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value218=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_266->prev=self->tail;
        litem_266->next=((void*)0);
        __dec_obj33=litem_266->item,
        litem_266->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_266;
        self->tail=litem_266;
    }
    self->len++;
    __result_obj__180 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__180;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_267;
struct list_item$1sType$ph* prev_it_268;
    it_267=self->head;
    while(    it_267!=((void*)0)) {
        prev_it_268=it_267;
        it_267=it_267->next;
        /*c*/ come_call_finalizer3(prev_it_268,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__182;
void* __right_value224 = (void*)0;
struct sNode* result_269;
struct sNode* __result_obj__183;
    if(    self==(void*)0) {
        __result_obj__182 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__182) ? __result_obj__182 = come_decrement_ref_count(__result_obj__182, ((struct sNode*)__result_obj__182)->finalize, ((struct sNode*)__result_obj__182)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__182;
    }
    result_269=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_269->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_269->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_269->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_269->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_269->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_269->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_269->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_269->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_269->kind=self->kind;
    }
    __result_obj__183 = (struct sNode*)come_increment_ref_count(result_269);
    ((result_269) ? result_269 = come_decrement_ref_count(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__183) ? __result_obj__183 = come_decrement_ref_count(__result_obj__183, ((struct sNode*)__result_obj__183)->finalize, ((struct sNode*)__result_obj__183)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__183;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__184;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct list$1sNode$ph* result_270;
struct list_item$1sNode$ph* it_271;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct list$1sNode$ph* __result_obj__187;
    if(    self==((void*)0)) {
        __result_obj__184 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__184,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__184;
    }
    result_270=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_271=self->head;
    while(    it_271!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_270,(struct sNode*)come_increment_ref_count(sNode_clone(it_271->item)));
        }
        else {
            list$1sNode$ph_add(result_270,(struct sNode*)come_increment_ref_count(sNode_clone(it_271->item)));
        }
        it_271=it_271->next;
    }
    __result_obj__187 = (struct list$1sNode$ph*)come_increment_ref_count(result_270);
    /*c*/ come_call_finalizer3(result_270,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__187,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__187;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__185;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__185 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__185,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__185;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value232 = (void*)0;
struct list_item$1sNode$ph* litem_272;
struct sNode* __dec_obj42;
void* __right_value233 = (void*)0;
struct list_item$1sNode$ph* litem_273;
struct sNode* __dec_obj43;
void* __right_value234 = (void*)0;
struct list_item$1sNode$ph* litem_274;
struct sNode* __dec_obj44;
struct list$1sNode$ph* __result_obj__186;
    if(    self->len==0) {
        litem_272=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value232=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_272->prev=((void*)0);
        litem_272->next=((void*)0);
        __dec_obj42=litem_272->item,
        litem_272->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_272;
        self->head=litem_272;
    }
    else if(    self->len==1) {
        litem_273=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value233=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_273->prev=self->head;
        litem_273->next=((void*)0);
        __dec_obj43=litem_273->item,
        litem_273->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj43 ? __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_273;
        self->head->next=litem_273;
    }
    else {
        litem_274=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value234=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_274->prev=self->tail;
        litem_274->next=((void*)0);
        __dec_obj44=litem_274->item,
        litem_274->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_274;
        self->tail=litem_274;
    }
    self->len++;
    __result_obj__186 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__186;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_275;
struct list_item$1sNode$ph* prev_it_276;
    it_275=self->head;
    while(    it_275!=((void*)0)) {
        prev_it_276=it_275;
        it_275=it_275->next;
        /*c*/ come_call_finalizer3(prev_it_276,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__188;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct list$1char$ph* result_277;
struct list_item$1char$ph* it_278;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct list$1char$ph* __result_obj__190;
    if(    self==((void*)0)) {
        __result_obj__188 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__188,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__188;
    }
    result_277=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1char$ph*"))));
    it_278=self->head;
    while(    it_278!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_277,(char*)come_increment_ref_count((char*)come_memdup(it_278->item, "/usr/local/include/comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_277,(char*)come_increment_ref_count((char*)come_memdup(it_278->item, "/usr/local/include/comelang.h", 1032, "char*")));
        }
        it_278=it_278->next;
    }
    __result_obj__190 = (struct list$1char$ph*)come_increment_ref_count(result_277);
    /*c*/ come_call_finalizer3(result_277,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__190,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__190;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value242 = (void*)0;
struct list_item$1char$ph* litem_279;
char* __dec_obj48;
void* __right_value243 = (void*)0;
struct list_item$1char$ph* litem_280;
char* __dec_obj49;
void* __right_value244 = (void*)0;
struct list_item$1char$ph* litem_281;
char* __dec_obj50;
struct list$1char$ph* __result_obj__189;
    if(    self->len==0) {
        litem_279=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value242=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        __dec_obj48=litem_279->item,
        litem_279->item=(char*)come_increment_ref_count(item);
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_279;
        self->head=litem_279;
    }
    else if(    self->len==1) {
        litem_280=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value243=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_280->prev=self->head;
        litem_280->next=((void*)0);
        __dec_obj49=litem_280->item,
        litem_280->item=(char*)come_increment_ref_count(item);
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_280;
        self->head->next=litem_280;
    }
    else {
        litem_281=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value244=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_281->prev=self->tail;
        litem_281->next=((void*)0);
        __dec_obj50=litem_281->item,
        litem_281->item=(char*)come_increment_ref_count(item);
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_281;
        self->tail=litem_281;
    }
    self->len++;
    __result_obj__189 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__189;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_282;
struct list_item$1char$ph* prev_it_283;
    it_282=self->head;
    while(    it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        /*c*/ come_call_finalizer3(prev_it_283,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_284;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_285;
    it_284=self->head;
    while(    it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        /*c*/ come_call_finalizer3(prev_it_285,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static void sNewNode_finalize(struct sNewNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_286;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_287;
    it_286=self->head;
    while(    it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        /*c*/ come_call_finalizer3(prev_it_287,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_293;
struct sNode* __result_obj__194;
struct sNode* __result_obj__195;
struct sNode* result_294;
struct sNode* __result_obj__196;
result_293 = (void*)0;
result_294 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_293,0,sizeof(struct sNode*));
        __result_obj__194 = result_293;
        return __result_obj__194;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__195 = self->it->item;
        return __result_obj__195;
    }
    memset(&result_294,0,sizeof(struct sNode*));
    __result_obj__196 = result_294;
    return __result_obj__196;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_296;
struct sNode* __result_obj__197;
struct sNode* __result_obj__198;
struct sNode* result_297;
struct sNode* __result_obj__199;
result_296 = (void*)0;
result_297 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_296,0,sizeof(struct sNode*));
        __result_obj__197 = result_296;
        return __result_obj__197;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__198 = self->it->item;
        return __result_obj__198;
    }
    memset(&result_297,0,sizeof(struct sNode*));
    __result_obj__199 = result_297;
    return __result_obj__199;
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

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_301;
struct list_item$1sNode$ph* prev_it_302;
struct list$1sNode$ph* __result_obj__201;
    it_301=self->head;
    while(    it_301!=((void*)0)) {
        prev_it_302=it_301;
        it_301=it_301->next;
        /*c*/ come_call_finalizer3(prev_it_302,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__201 = self;
    return __result_obj__201;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_314;
struct tuple2$2char$phsNode$ph* __result_obj__202;
struct tuple2$2char$phsNode$ph* __result_obj__203;
struct tuple2$2char$phsNode$ph* result_315;
struct tuple2$2char$phsNode$ph* __result_obj__204;
result_314 = (void*)0;
result_315 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_314,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__202 = result_314;
        return __result_obj__202;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__203 = self->it->item;
        return __result_obj__203;
    }
    memset(&result_315,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__204 = result_315;
    return __result_obj__204;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_317;
struct tuple2$2char$phsNode$ph* __result_obj__205;
struct tuple2$2char$phsNode$ph* __result_obj__206;
struct tuple2$2char$phsNode$ph* result_318;
struct tuple2$2char$phsNode$ph* __result_obj__207;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_317,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__205 = result_317;
        return __result_obj__205;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__206 = self->it->item;
        return __result_obj__206;
    }
    memset(&result_318,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__207 = result_318;
    return __result_obj__207;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_325;
struct tuple2$2char$phsType$ph* __result_obj__209;
struct tuple2$2char$phsType$ph* __result_obj__210;
struct tuple2$2char$phsType$ph* result_326;
struct tuple2$2char$phsType$ph* __result_obj__211;
result_325 = (void*)0;
result_326 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_325,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__209 = result_325;
        return __result_obj__209;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__210 = self->it->item;
        return __result_obj__210;
    }
    memset(&result_326,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__211 = result_326;
    return __result_obj__211;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_328;
struct tuple2$2char$phsType$ph* __result_obj__212;
struct tuple2$2char$phsType$ph* __result_obj__213;
struct tuple2$2char$phsType$ph* result_329;
struct tuple2$2char$phsType$ph* __result_obj__214;
result_328 = (void*)0;
result_329 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_328,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__212 = result_328;
        return __result_obj__212;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__213 = self->it->item;
        return __result_obj__213;
    }
    memset(&result_329,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__214 = result_329;
    return __result_obj__214;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_332;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_333;
    it_332=self->head;
    while(    it_332!=((void*)0)) {
        prev_it_333=it_332;
        it_332=it_332->next;
        /*c*/ come_call_finalizer3(prev_it_333,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value277 = (void*)0;
struct list_item$1CVALUE$ph* litem_336;
struct CVALUE* __dec_obj61;
void* __right_value278 = (void*)0;
struct list_item$1CVALUE$ph* litem_337;
struct CVALUE* __dec_obj62;
void* __right_value279 = (void*)0;
struct list_item$1CVALUE$ph* litem_338;
struct CVALUE* __dec_obj63;
struct list$1CVALUE$ph* __result_obj__215;
    if(    self->len==0) {
        litem_336=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value277=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_336->prev=((void*)0);
        litem_336->next=((void*)0);
        __dec_obj61=litem_336->item,
        litem_336->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj61,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_336;
        self->head=litem_336;
    }
    else if(    self->len==1) {
        litem_337=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value278=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_337->prev=self->head;
        litem_337->next=((void*)0);
        __dec_obj62=litem_337->item,
        litem_337->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj62,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_337;
        self->head->next=litem_337;
    }
    else {
        litem_338=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value279=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_338->prev=self->tail;
        litem_338->next=((void*)0);
        __dec_obj63=litem_338->item,
        litem_338->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj63,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_338;
        self->tail=litem_338;
    }
    self->len++;
    __result_obj__215 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sNode* __dec_obj67;
void* __right_value290 = (void*)0;
struct sType* __dec_obj68;
struct sImplementsNode* __result_obj__217;
    ((struct sNodeBase*)(__right_value288=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value288,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj67=self->obj_exp,
    self->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp));
    (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj68=self->inf_type,
    self->inf_type=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    /*b*/ come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__217 = (struct sImplementsNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sImplementsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(inf_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__217,sImplementsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __right_value291 = (void*)0;
char* __result_obj__218;
    __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value291=__builtin_string("sImplementsNode"))));
    (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__218;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value292 = (void*)0;
struct sNode* obj_exp_341;
void* __right_value293 = (void*)0;
struct sType* inf_type_342;
_Bool Value_343;
_Bool __result_obj__219;
void* __right_value294 = (void*)0;
struct CVALUE* come_value_344;
void* __right_value295 = (void*)0;
struct sType* type_345;
struct sClass* klass_346;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct CVALUE* come_value2_347;
void* __right_value298 = (void*)0;
struct sType* type2_348;
void* __right_value299 = (void*)0;
char* type_name_349;
void* __right_value300 = (void*)0;
char* type_name2_350;
int inf_num_stack_352;
void* __right_value301 = (void*)0;
char* buf_353;
void* __right_value302 = (void*)0;
char* buf2_354;
void* __right_value303 = (void*)0;
_Bool _if_conditional7;
void* __right_value304 = (void*)0;
char* c_value_355;
void* __right_value305 = (void*)0;
struct sType* typeX_356;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
int i_357;
void* __right_value308 = (void*)0;
struct tuple2$2char$phsType$ph* multiple_assign_var6 = (void*)0;
char* name_364=0;
struct sType* field_type_365=0;
void* __right_value309 = (void*)0;
char* method_name_366;
void* __right_value310 = (void*)0;
struct sFun* fun_367;
void* __right_value311 = (void*)0;
struct sType* type2_370;
void* __right_value312 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var7 = (void*)0;
struct sFun* fun2_371=0;
char* real_fun_name_372=0;
char* __dec_obj69;
void* __right_value313 = (void*)0;
struct sType* type2_373;
void* __right_value314 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var8 = (void*)0;
struct sFun* fun2_374=0;
char* real_fun_name_375=0;
char* __dec_obj70;
void* __right_value315 = (void*)0;
struct sClass* klass2_376;
void* __right_value316 = (void*)0;
_Bool _while_condtional1;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* __dec_obj71;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
char* __dec_obj72;
void* __right_value322 = (void*)0;
struct sType* type3_383;
void* __right_value323 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__236;
    obj_exp_341=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
    inf_type_342=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
    Value_343=node_compile(obj_exp_341,info);
    if(    !Value_343) {
        __result_obj__219 = (_Bool)0;
        ((obj_exp_341) ? obj_exp_341 = come_decrement_ref_count(obj_exp_341, ((struct sNode*)obj_exp_341)->finalize, ((struct sNode*)obj_exp_341)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(inf_type_342,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__219;
    }
    else {
    }
    come_value_344=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_345=(struct sType*)come_increment_ref_count(sType_clone(come_value_344->type));
    type_345->mPointerNum--;
    type_345->mHeap=(_Bool)0;
    klass_346=inf_type_342->mClass;
    come_value2_347=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 259, "struct CVALUE*"))));
    type2_348=(struct sType*)come_increment_ref_count(sType_clone(inf_type_342));
    type_name_349=(char*)come_increment_ref_count(make_type_name_string(inf_type_342,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_350=(char*)come_increment_ref_count(make_type_name_string(type_345,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_351=0;
    ++inf_num_351;
    inf_num_stack_352=inf_num_351;
    buf_353=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_349,inf_num_stack_352));
    add_come_code_at_function_head(info,buf_353);
    buf2_354=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_350,inf_num_stack_352));
    add_come_code_at_function_head(info,buf2_354);
    if(    (_if_conditional7=(((struct sFun*)(__right_value303=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value303,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional7) {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc_v2(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_stack_352,type_name_349,type_name_349,info->sname,info->sline,type_name_349);
    }
    else {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_stack_352,type_name_349,type_name_349,info->sname,info->sline,type_name_349);
    }
    c_value_355=(char*)come_increment_ref_count(increment_ref_count_object(come_value_344->type,come_value_344->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack_352,c_value_355);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack_352,inf_num_stack_352);
    typeX_356=(struct sType*)come_increment_ref_count(sType_clone(type_345));
    typeX_356->mPointerNum++;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value306=create_finalizer_automatically(typeX_356,"finalize",info)));
    /*c*/ come_call_finalizer3(__right_value306,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((struct tuple2$2sFun$pchar$ph*)(__right_value307=create_cloner_automatically(typeX_356,"clone",info)));
    /*c*/ come_call_finalizer3(__right_value307,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    for(    i_357=1;    i_357<list$1tuple2$2char$phsType$ph$ph_length(klass_346->mFields);    i_357++    ){
        multiple_assign_var6=((struct tuple2$2char$phsType$ph*)(__right_value308=list$1tuple2$2char$phsType$ph$ph_operator_load_element(klass_346->mFields,i_357)));
        name_364=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        field_type_365=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
        /*c*/ come_call_finalizer3(__right_value308,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        method_name_366=(char*)come_increment_ref_count(create_method_name(type_345,(_Bool)0,name_364,info,(_Bool)1));
        fun_367=((struct sFun*)(__right_value310=map$2char$phsFun$ph_at(info->funcs,method_name_366,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value310,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_367==((void*)0)&&string_operator_equals(name_364,"to_string")) {
            type2_370=(struct sType*)come_increment_ref_count(sType_clone(type_345));
            type2_370->mPointerNum++;
            multiple_assign_var7=((struct tuple2$2sFun$pchar$ph*)(__right_value312=create_to_string_automatically(type2_370,name_364,info)));
            fun2_371=multiple_assign_var7->v1;
            real_fun_name_372=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            /*c*/ come_call_finalizer3(__right_value312,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            fun_367=fun2_371;
            __dec_obj69=method_name_366,
            method_name_366=(char*)come_increment_ref_count(real_fun_name_372);
            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(type2_370,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (real_fun_name_372 = come_decrement_ref_count(real_fun_name_372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        fun_367==((void*)0)&&string_operator_equals(name_364,"equals")) {
            type2_373=(struct sType*)come_increment_ref_count(sType_clone(type_345));
            type2_373->mPointerNum++;
            multiple_assign_var8=((struct tuple2$2sFun$pchar$ph*)(__right_value314=create_equals_automatically(type2_373,name_364,info)));
            fun2_374=multiple_assign_var8->v1;
            real_fun_name_375=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            /*c*/ come_call_finalizer3(__right_value314,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            fun_367=fun2_374;
            __dec_obj70=method_name_366,
            method_name_366=(char*)come_increment_ref_count(real_fun_name_375);
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(type2_373,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (real_fun_name_375 = come_decrement_ref_count(real_fun_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        fun_367==((void*)0)) {
            klass2_376=((struct sClass*)(__right_value315=map$2char$phsClass$ph_operator_load_element(info->classes,type_345->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value315,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            while(            (_while_condtional1=(((struct sClass*)(__right_value316=map$2char$phsClass$ph_operator_load_element(info->classes,klass2_376->mParentClassName))))),            /*c*/ come_call_finalizer3(__right_value316,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _while_condtional1) {
                klass2_376=((struct sClass*)(__right_value317=map$2char$phsClass$ph_operator_load_element(info->classes,klass2_376->mParentClassName)));
                /*c*/ come_call_finalizer3(__right_value317,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj71=method_name_366,
                method_name_366=(char*)come_increment_ref_count(create_method_name_using_class(klass2_376,(_Bool)0,name_364,info,(_Bool)1));
                __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                fun_367=((struct sFun*)(__right_value320=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value319=__builtin_string(method_name_366))),((void*)0))));
                (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value320,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                fun_367) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_352,name_364,method_name_366);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_352,name_364,method_name_366);
        }
        (name_364 = come_decrement_ref_count(name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(field_type_365,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (method_name_366 = come_decrement_ref_count(method_name_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj72=come_value2_347->c_value,
    come_value2_347->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack_352));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    type3_383=(struct sType*)come_increment_ref_count(sType_clone(inf_type_342));
    type3_383->mPointerNum++;
    type3_383->mHeap=(_Bool)1;
    type2_348->mHeap=(_Bool)1;
    __dec_obj73=come_value2_347->type,
    come_value2_347->type=(struct sType*)come_increment_ref_count(sType_clone(type2_348));
    /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_347->type->mPointerNum++;
    come_value2_347->var=((void*)0);
    append_object_to_right_values2(come_value2_347,(struct sType*)come_increment_ref_count(type3_383),info,(_Bool)0,((void*)0),((void*)0));
    add_come_last_code(info,"%s",come_value2_347->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_347));
    __result_obj__236 = (_Bool)1;
    ((obj_exp_341) ? obj_exp_341 = come_decrement_ref_count(obj_exp_341, ((struct sNode*)obj_exp_341)->finalize, ((struct sNode*)obj_exp_341)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(inf_type_342,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_347,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_348,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_349 = come_decrement_ref_count(type_name_349, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (type_name2_350 = come_decrement_ref_count(type_name2_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (buf_353 = come_decrement_ref_count(buf_353, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (buf2_354 = come_decrement_ref_count(buf2_354, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (c_value_355 = come_decrement_ref_count(c_value_355, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(typeX_356,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type3_383,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__236;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        ((self->obj_exp) ? self->obj_exp = come_decrement_ref_count(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->inf_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position){
struct list_item$1tuple2$2char$phsType$ph$ph* it_358;
int i_359;
struct tuple2$2char$phsType$ph* __result_obj__220;
struct tuple2$2char$phsType$ph* default_value_360;
struct tuple2$2char$phsType$ph* __result_obj__221;
default_value_360 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_358=self->head;
    i_359=0;
    while(    it_358!=((void*)0)) {
        if(        position==i_359) {
            __result_obj__220 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it_358->item);
            /*c*/ come_call_finalizer3(__result_obj__220,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__220;
        }
        it_358=it_358->next;
        i_359++;
    }
    memset(&default_value_360,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__221 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_360);
    /*c*/ come_call_finalizer3(default_value_360,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__221,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position){
struct list_item$1tuple2$2char$phsType$ph$ph* it_361;
int i_362;
struct tuple2$2char$phsType$ph* __result_obj__222;
struct tuple2$2char$phsType$ph* default_value_363;
struct tuple2$2char$phsType$ph* __result_obj__223;
default_value_363 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_361=self->head;
    i_362=0;
    while(    it_361!=((void*)0)) {
        if(        position==i_362) {
            __result_obj__222 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it_361->item);
            /*c*/ come_call_finalizer3(__result_obj__222,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__222;
        }
        it_361=it_361->next;
        i_362++;
    }
    memset(&default_value_363,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__223 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_363);
    /*c*/ come_call_finalizer3(default_value_363,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__223,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__223;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_368;
unsigned int it_369;
struct sFun* __result_obj__224;
struct sFun* __result_obj__225;
struct sFun* __result_obj__226;
struct sFun* __result_obj__227;
    hash_368=string_get_hash_key(((char*)key))%self->size;
    it_369=hash_368;
    while(    (_Bool)1) {
        if(        self->item_existance[it_369]) {
            if(            string_equals(self->keys[it_369],key)) {
                __result_obj__224 = (struct sFun*)come_increment_ref_count(self->items[it_369]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__224,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__224;
            }
            it_369++;
            if(            it_369>=self->size) {
                it_369=0;
            }
            else if(            it_369==hash_368) {
                __result_obj__225 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__225,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__225;
            }
        }
        else {
            __result_obj__226 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__226,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__226;
        }
    }
    __result_obj__227 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__227,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_377;
unsigned int hash_378;
unsigned int it_379;
struct sClass* __result_obj__228;
struct sClass* __result_obj__229;
struct sClass* __result_obj__230;
struct sClass* __result_obj__231;
default_value_377 = (void*)0;
    memset(&default_value_377,0,sizeof(struct sClass*));
    hash_378=string_get_hash_key(((char*)key))%self->size;
    it_379=hash_378;
    while(    (_Bool)1) {
        if(        self->item_existance[it_379]) {
            if(            string_equals(self->keys[it_379],key)) {
                __result_obj__228 = (struct sClass*)come_increment_ref_count(self->items[it_379]);
                /*c*/ come_call_finalizer3(default_value_377,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__228,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__228;
            }
            it_379++;
            if(            it_379>=self->size) {
                it_379=0;
            }
            else if(            it_379==hash_378) {
                __result_obj__229 = (struct sClass*)come_increment_ref_count(default_value_377);
                /*c*/ come_call_finalizer3(default_value_377,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__229,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__229;
            }
        }
        else {
            __result_obj__230 = (struct sClass*)come_increment_ref_count(default_value_377);
            /*c*/ come_call_finalizer3(default_value_377,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__230,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__230;
        }
    }
    __result_obj__231 = (struct sClass*)come_increment_ref_count(default_value_377);
    /*c*/ come_call_finalizer3(default_value_377,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_380;
unsigned int hash_381;
unsigned int it_382;
struct sClass* __result_obj__232;
struct sClass* __result_obj__233;
struct sClass* __result_obj__234;
struct sClass* __result_obj__235;
default_value_380 = (void*)0;
    memset(&default_value_380,0,sizeof(struct sClass*));
    hash_381=string_get_hash_key(((char*)key))%self->size;
    it_382=hash_381;
    while(    (_Bool)1) {
        if(        self->item_existance[it_382]) {
            if(            string_equals(self->keys[it_382],key)) {
                __result_obj__232 = (struct sClass*)come_increment_ref_count(self->items[it_382]);
                /*c*/ come_call_finalizer3(default_value_380,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__232,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__232;
            }
            it_382++;
            if(            it_382>=self->size) {
                it_382=0;
            }
            else if(            it_382==hash_381) {
                __result_obj__233 = (struct sClass*)come_increment_ref_count(default_value_380);
                /*c*/ come_call_finalizer3(default_value_380,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__233,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__233;
            }
        }
        else {
            __result_obj__234 = (struct sClass*)come_increment_ref_count(default_value_380);
            /*c*/ come_call_finalizer3(default_value_380,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__234,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__234;
        }
    }
    __result_obj__235 = (struct sClass*)come_increment_ref_count(default_value_380);
    /*c*/ come_call_finalizer3(default_value_380,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__235,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__235;
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __right_value324 = (void*)0;
struct sTrueNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value324=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value324,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__237 = (struct sTrueNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTrueNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__237,sTrueNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__237;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __right_value325 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = (char*)come_increment_ref_count(((char*)(__right_value325=__builtin_string("sTrueNode"))));
    (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct CVALUE* come_value_384;
void* __right_value328 = (void*)0;
char* __dec_obj74;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sType* __dec_obj75;
_Bool __result_obj__239;
    come_value_384=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 374, "struct CVALUE*"))));
    __dec_obj74=come_value_384->c_value,
    come_value_384->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj75=come_value_384->type,
    come_value_384->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 377, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_384->var=((void*)0);
    add_come_last_code(info,"%s",come_value_384->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_384));
    __result_obj__239 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_384,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__239;
}

static void sTrueNode_finalize(struct sTrueNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_true_object(struct sInfo* info){
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value336 = (void*)0;
struct sNode* __result_obj__242;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 390, "struct sNode");
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value333=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "21obj.c", 390, "struct sTrueNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    __result_obj__242 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value336=_inf_value1)));
    /*c*/ come_call_finalizer3(__right_value333,sTrueNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value336) ? __right_value336 = come_decrement_ref_count(__right_value336, ((struct sNode*)__right_value336)->finalize, ((struct sNode*)__right_value336)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__242) ? __result_obj__242 = come_decrement_ref_count(__result_obj__242, ((struct sNode*)__result_obj__242)->finalize, ((struct sNode*)__result_obj__242)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__242;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
struct sTrueNode* __result_obj__240;
void* __right_value334 = (void*)0;
struct sTrueNode* result_385;
void* __right_value335 = (void*)0;
char* __dec_obj76;
struct sTrueNode* __result_obj__241;
    if(    self==(void*)0) {
        __result_obj__240 = (void*)0;
        return __result_obj__240;
    }
    result_385=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode*"));
    if(    self!=((void*)0)) {
        result_385->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj76=result_385->sname,
        result_385->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTrueNode_clone", 5, "char*"));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_385->sline_real=self->sline_real;
    }
    __result_obj__241 = result_385;
    /*c*/ come_call_finalizer3(result_385,sTrueNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__241;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __right_value337 = (void*)0;
struct sFalseNode* __result_obj__243;
    ((struct sNodeBase*)(__right_value337=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value337,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__243 = (struct sFalseNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFalseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__243,sFalseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__243;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __right_value338 = (void*)0;
char* __result_obj__244;
    __result_obj__244 = (char*)come_increment_ref_count(((char*)(__right_value338=__builtin_string("sFalseNode"))));
    (__right_value338 = come_decrement_ref_count(__right_value338, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__244 = come_decrement_ref_count(__result_obj__244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__244;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct CVALUE* come_value_386;
void* __right_value341 = (void*)0;
char* __dec_obj77;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sType* __dec_obj78;
_Bool __result_obj__245;
    come_value_386=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 407, "struct CVALUE*"))));
    __dec_obj77=come_value_386->c_value,
    come_value_386->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj78=come_value_386->type,
    come_value_386->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 410, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_386->var=((void*)0);
    add_come_last_code(info,"%s",come_value_386->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_386));
    __result_obj__245 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_386,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__245;
}

static void sFalseNode_finalize(struct sFalseNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_false_object(struct sInfo* info){
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value349 = (void*)0;
struct sNode* __result_obj__248;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 423, "struct sNode");
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value346=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "21obj.c", 423, "struct sFalseNode*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    __result_obj__248 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value349=_inf_value2)));
    /*c*/ come_call_finalizer3(__right_value346,sFalseNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value349) ? __right_value349 = come_decrement_ref_count(__right_value349, ((struct sNode*)__right_value349)->finalize, ((struct sNode*)__right_value349)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__248) ? __result_obj__248 = come_decrement_ref_count(__result_obj__248, ((struct sNode*)__result_obj__248)->finalize, ((struct sNode*)__result_obj__248)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__248;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
struct sFalseNode* __result_obj__246;
void* __right_value347 = (void*)0;
struct sFalseNode* result_387;
void* __right_value348 = (void*)0;
char* __dec_obj79;
struct sFalseNode* __result_obj__247;
    if(    self==(void*)0) {
        __result_obj__246 = (void*)0;
        return __result_obj__246;
    }
    result_387=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode*"));
    if(    self!=((void*)0)) {
        result_387->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj79=result_387->sname,
        result_387->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFalseNode_clone", 5, "char*"));
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_387->sline_real=self->sline_real;
    }
    __result_obj__247 = result_387;
    /*c*/ come_call_finalizer3(result_387,sFalseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__247;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sType* __dec_obj80;
struct sSizeOfNode* __result_obj__249;
    ((struct sNodeBase*)(__right_value350=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value350,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj80=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__249 = (struct sSizeOfNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSizeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__249,sSizeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __right_value352 = (void*)0;
char* __result_obj__250;
    __result_obj__250 = (char*)come_increment_ref_count(((char*)(__right_value352=__builtin_string("sSizeOfNode"))));
    (__right_value352 = come_decrement_ref_count(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__250 = come_decrement_ref_count(__result_obj__250, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__250;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_388;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct CVALUE* come_value_389;
void* __right_value355 = (void*)0;
struct sType* type2_390;
void* __right_value356 = (void*)0;
char* type_name_391;
void* __right_value357 = (void*)0;
char* __dec_obj81;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* __dec_obj82;
_Bool __result_obj__251;
    type_388=self->type;
    come_value_389=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 444, "struct CVALUE*"))));
    type2_390=(struct sType*)come_increment_ref_count(solve_generics(type_388,info->generics_type,info));
    type_name_391=(char*)come_increment_ref_count(make_type_name_string(type2_390,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj81=come_value_389->c_value,
    come_value_389->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_391));
    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj82=come_value_389->type,
    come_value_389->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 451, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_389->type->mUnsigned=(_Bool)1;
    come_value_389->var=((void*)0);
    add_come_last_code(info,"%s",come_value_389->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_389));
    __result_obj__251 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_389,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_390,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_391 = come_decrement_ref_count(type_name_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__251;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* __dec_obj83;
struct sSizeOfExpNode* __result_obj__252;
struct sSizeOfExpNode* __result_obj__253;
    ((struct sNodeBase*)(__right_value361=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value361,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj83=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__252 = (struct sSizeOfExpNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__252,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
    __result_obj__253 = (struct sSizeOfExpNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__253,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__253;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __right_value363 = (void*)0;
char* __result_obj__254;
    __result_obj__254 = (char*)come_increment_ref_count(((char*)(__right_value363=__builtin_string("sSizeOfExpNode"))));
    (__right_value363 = come_decrement_ref_count(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__254 = come_decrement_ref_count(__result_obj__254, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__254;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_392;
_Bool Value_393;
_Bool __result_obj__255;
void* __right_value364 = (void*)0;
struct CVALUE* come_value_394;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct CVALUE* come_value2_395;
void* __right_value367 = (void*)0;
char* __dec_obj84;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sType* __dec_obj85;
_Bool __result_obj__256;
    exp_392=(struct sNode*)come_increment_ref_count(self->exp);
    Value_393=node_compile(exp_392,info);
    if(    !Value_393) {
        __result_obj__255 = (_Bool)0;
        ((exp_392) ? exp_392 = come_decrement_ref_count(exp_392, ((struct sNode*)exp_392)->finalize, ((struct sNode*)exp_392)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__255;
    }
    else {
    }
    come_value_394=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 489, "struct CVALUE*"))));
    __dec_obj84=come_value2_395->c_value,
    come_value2_395->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_394->c_value));
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj85=come_value2_395->type,
    come_value2_395->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 492, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_395->type->mUnsigned=(_Bool)1;
    come_value2_395->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_395->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_395));
    __result_obj__256 = (_Bool)1;
    ((exp_392) ? exp_392 = come_decrement_ref_count(exp_392, ((struct sNode*)exp_392)->finalize, ((struct sNode*)exp_392)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_394,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_395,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__256;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sType* __dec_obj86;
struct sTypeOfNode* __result_obj__257;
    ((struct sNodeBase*)(__right_value371=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value371,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj86=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__257 = (struct sTypeOfNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTypeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__257,sTypeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __right_value373 = (void*)0;
char* __result_obj__258;
    __result_obj__258 = (char*)come_increment_ref_count(((char*)(__right_value373=__builtin_string("sTypeOfNode"))));
    (__right_value373 = come_decrement_ref_count(__right_value373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__258 = come_decrement_ref_count(__result_obj__258, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__258;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_396;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct CVALUE* come_value_397;
void* __right_value376 = (void*)0;
struct sType* type2_398;
void* __right_value377 = (void*)0;
char* type_name_399;
void* __right_value378 = (void*)0;
char* __dec_obj87;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sType* __dec_obj88;
_Bool __result_obj__259;
    type_396=self->type;
    come_value_397=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 522, "struct CVALUE*"))));
    type2_398=(struct sType*)come_increment_ref_count(solve_generics(type_396,info->generics_type,info));
    type_name_399=(char*)come_increment_ref_count(make_type_name_string(type2_398,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj87=come_value_397->c_value,
    come_value_397->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_399));
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj88=come_value_397->type,
    come_value_397->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 529, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_397->var=((void*)0);
    add_come_last_code(info,"%s",come_value_397->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_397));
    __result_obj__259 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_397,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_398,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_399 = come_decrement_ref_count(type_name_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__259;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct sNode* __dec_obj89;
struct sTypeOfExpNode* __result_obj__260;
    ((struct sNodeBase*)(__right_value382=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value382,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj89=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj89 ? __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__260 = (struct sTypeOfExpNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTypeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__260,sTypeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __right_value384 = (void*)0;
char* __result_obj__261;
    __result_obj__261 = (char*)come_increment_ref_count(((char*)(__right_value384=__builtin_string("sTypeOfExpNode"))));
    (__right_value384 = come_decrement_ref_count(__right_value384, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__261 = come_decrement_ref_count(__result_obj__261, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__261;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_400;
_Bool Value_401;
_Bool __result_obj__262;
void* __right_value385 = (void*)0;
struct CVALUE* come_value_402;
void* __right_value386 = (void*)0;
struct sType* type_403;
void* __right_value387 = (void*)0;
struct sType* type2_404;
void* __right_value388 = (void*)0;
char* type_name_405;
void* __right_value389 = (void*)0;
char* __dec_obj90;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sType* __dec_obj91;
_Bool __result_obj__263;
    exp_400=(struct sNode*)come_increment_ref_count(self->exp);
    Value_401=node_compile(exp_400,info);
    if(    !Value_401) {
        __result_obj__262 = (_Bool)0;
        ((exp_400) ? exp_400 = come_decrement_ref_count(exp_400, ((struct sNode*)exp_400)->finalize, ((struct sNode*)exp_400)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__262;
    }
    else {
    }
    come_value_402=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_403=(struct sType*)come_increment_ref_count(sType_clone(come_value_402->type));
    type2_404=(struct sType*)come_increment_ref_count(solve_generics(type_403,info->generics_type,info));
    type_name_405=(char*)come_increment_ref_count(make_type_name_string(type2_404,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj90=come_value_402->c_value,
    come_value_402->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_405));
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj91=come_value_402->type,
    come_value_402->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 571, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_402->var=((void*)0);
    add_come_last_code(info,"%s",come_value_402->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_402));
    __result_obj__263 = (_Bool)1;
    ((exp_400) ? exp_400 = come_decrement_ref_count(exp_400, ((struct sNode*)exp_400)->finalize, ((struct sNode*)exp_400)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_402,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_403,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_404,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_405 = come_decrement_ref_count(type_name_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__263;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info){
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sNode* __dec_obj92;
struct sDynamicTypeOf* __result_obj__264;
    ((struct sNodeBase*)(__right_value393=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value393,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj92=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__264 = (struct sDynamicTypeOf*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDynamicTypeOf_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__264,sDynamicTypeOf_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__264;
}

char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self){
void* __right_value395 = (void*)0;
char* __result_obj__265;
    __result_obj__265 = (char*)come_increment_ref_count(((char*)(__right_value395=__builtin_string("sDynamicTypeOf"))));
    (__right_value395 = come_decrement_ref_count(__right_value395, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__265 = come_decrement_ref_count(__result_obj__265, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__265;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info){
struct sNode* exp_406;
_Bool Value_407;
_Bool __result_obj__266;
void* __right_value396 = (void*)0;
struct CVALUE* come_value_408;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct CVALUE* come_value2_409;
void* __right_value399 = (void*)0;
char* __dec_obj93;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sType* __dec_obj94;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct CVALUE* come_value2_410;
void* __right_value405 = (void*)0;
char* __dec_obj95;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sType* __dec_obj96;
_Bool __result_obj__267;
    exp_406=(struct sNode*)come_increment_ref_count(self->exp);
    Value_407=node_compile(exp_406,info);
    if(    !Value_407) {
        __result_obj__266 = (_Bool)0;
        ((exp_406) ? exp_406 = come_decrement_ref_count(exp_406, ((struct sNode*)exp_406)->finalize, ((struct sNode*)exp_406)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__266;
    }
    else {
    }
    come_value_408=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_408->type->mPointerNum>0&&come_value_408->type->mHeap) {
        come_value2_409=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 607, "struct CVALUE*"))));
        __dec_obj93=come_value2_409->c_value,
        come_value2_409->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_408->c_value));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj94=come_value2_409->type,
        come_value2_409->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 610, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_409->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_409->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_409));
        /*c*/ come_call_finalizer3(come_value2_409,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_value2_410=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 618, "struct CVALUE*"))));
        __dec_obj95=come_value2_410->c_value,
        come_value2_410->c_value=(char*)come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj96=come_value2_410->type,
        come_value2_410->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 621, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_410->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_410->c_value);
        append_object_to_right_values2(come_value2_410,(struct sType*)come_increment_ref_count(come_value2_410->type),info,(_Bool)0,((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_410));
        /*c*/ come_call_finalizer3(come_value2_410,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__267 = (_Bool)1;
    ((exp_406) ? exp_406 = come_decrement_ref_count(exp_406, ((struct sNode*)exp_406)->finalize, ((struct sNode*)exp_406)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_408,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__267;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct sType* __dec_obj97;
struct sAlignOfNode* __result_obj__268;
struct sAlignOfNode* __result_obj__269;
    ((struct sNodeBase*)(__right_value409=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value409,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj97=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__268 = (struct sAlignOfNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__268,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__268;
    __result_obj__269 = (struct sAlignOfNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__269,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __right_value411 = (void*)0;
char* __result_obj__270;
    __result_obj__270 = (char*)come_increment_ref_count(((char*)(__right_value411=__builtin_string("sAlignOfNode"))));
    (__right_value411 = come_decrement_ref_count(__right_value411, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__270 = come_decrement_ref_count(__result_obj__270, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__270;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_411;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct CVALUE* come_value_412;
void* __right_value414 = (void*)0;
struct sType* type2_413;
void* __right_value415 = (void*)0;
char* type_name_414;
void* __right_value416 = (void*)0;
char* __dec_obj98;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sType* __dec_obj99;
_Bool __result_obj__271;
    type_411=self->type;
    come_value_412=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 655, "struct CVALUE*"))));
    type2_413=(struct sType*)come_increment_ref_count(solve_generics(type_411,info->generics_type,info));
    type_name_414=(char*)come_increment_ref_count(make_type_name_string(type2_413,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj98=come_value_412->c_value,
    come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_414));
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj99=come_value_412->type,
    come_value_412->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 662, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_412->type->mUnsigned=(_Bool)1;
    come_value_412->var=((void*)0);
    add_come_last_code(info,"%s",come_value_412->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_412));
    __result_obj__271 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_412,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_413,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_414 = come_decrement_ref_count(type_name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__271;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sNode* __dec_obj100;
struct sAlignOfExpNode* __result_obj__272;
    ((struct sNodeBase*)(__right_value420=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value420,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj100=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__272 = (struct sAlignOfExpNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__272,sAlignOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__272;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __right_value422 = (void*)0;
char* __result_obj__273;
    __result_obj__273 = (char*)come_increment_ref_count(((char*)(__right_value422=__builtin_string("sAlignOfExpNode"))));
    (__right_value422 = come_decrement_ref_count(__right_value422, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__273 = come_decrement_ref_count(__result_obj__273, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__273;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_415;
_Bool Value_416;
_Bool __result_obj__274;
void* __right_value423 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct CVALUE* come_value2_418;
void* __right_value426 = (void*)0;
char* __dec_obj101;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sType* __dec_obj102;
_Bool __result_obj__275;
    exp_415=(struct sNode*)come_increment_ref_count(self->exp);
    Value_416=node_compile(exp_415,info);
    if(    !Value_416) {
        __result_obj__274 = (_Bool)0;
        ((exp_415) ? exp_415 = come_decrement_ref_count(exp_415, ((struct sNode*)exp_415)->finalize, ((struct sNode*)exp_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__274;
    }
    else {
    }
    come_value_417=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_418=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 698, "struct CVALUE*"))));
    __dec_obj101=come_value2_418->c_value,
    come_value2_418->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_417->c_value));
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj102=come_value2_418->type,
    come_value2_418->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 701, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_418->type->mUnsigned=(_Bool)1;
    come_value2_418->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_418->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_418));
    __result_obj__275 = (_Bool)1;
    ((exp_415) ? exp_415 = come_decrement_ref_count(exp_415, ((struct sNode*)exp_415)->finalize, ((struct sNode*)exp_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_418,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sType* __dec_obj103;
struct sAlignOfNode2* __result_obj__276;
    ((struct sNodeBase*)(__right_value430=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value430,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj103=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__276 = (struct sAlignOfNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__276,sAlignOfNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__276;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __right_value432 = (void*)0;
char* __result_obj__277;
    __result_obj__277 = (char*)come_increment_ref_count(((char*)(__right_value432=__builtin_string("sAlignOfNode2"))));
    (__right_value432 = come_decrement_ref_count(__right_value432, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__277 = come_decrement_ref_count(__result_obj__277, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__277;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_419;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct CVALUE* come_value_420;
void* __right_value435 = (void*)0;
struct sType* type2_421;
void* __right_value436 = (void*)0;
char* type_name_422;
void* __right_value437 = (void*)0;
char* __dec_obj104;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sType* __dec_obj105;
_Bool __result_obj__278;
    type_419=self->type;
    come_value_420=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 731, "struct CVALUE*"))));
    type2_421=(struct sType*)come_increment_ref_count(solve_generics(type_419,info->generics_type,info));
    type_name_422=(char*)come_increment_ref_count(make_type_name_string(type2_421,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj104=come_value_420->c_value,
    come_value_420->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_422));
    __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj105=come_value_420->type,
    come_value_420->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 738, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_420->type->mUnsigned=(_Bool)1;
    come_value_420->var=((void*)0);
    add_come_last_code(info,"%s",come_value_420->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_420));
    __result_obj__278 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_420,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_421,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_422 = come_decrement_ref_count(type_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__278;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sNode* __dec_obj106;
struct sAlignOfExpNode2* __result_obj__279;
    ((struct sNodeBase*)(__right_value441=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value441,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj106=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj106 ? __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__279 = (struct sAlignOfExpNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__279,sAlignOfExpNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __right_value443 = (void*)0;
char* __result_obj__280;
    __result_obj__280 = (char*)come_increment_ref_count(((char*)(__right_value443=__builtin_string("sAlignOfExpNode2"))));
    (__right_value443 = come_decrement_ref_count(__right_value443, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__280 = come_decrement_ref_count(__result_obj__280, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__280;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_423;
_Bool Value_424;
_Bool __result_obj__281;
void* __right_value444 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct CVALUE* come_value2_426;
void* __right_value447 = (void*)0;
char* __dec_obj107;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sType* __dec_obj108;
_Bool __result_obj__282;
    exp_423=(struct sNode*)come_increment_ref_count(self->exp);
    Value_424=node_compile(exp_423,info);
    if(    !Value_424) {
        __result_obj__281 = (_Bool)0;
        ((exp_423) ? exp_423 = come_decrement_ref_count(exp_423, ((struct sNode*)exp_423)->finalize, ((struct sNode*)exp_423)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__281;
    }
    else {
    }
    come_value_425=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_426=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 774, "struct CVALUE*"))));
    __dec_obj107=come_value2_426->c_value,
    come_value2_426->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_425->c_value));
    __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj108=come_value2_426->type,
    come_value2_426->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 777, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_426->type->mUnsigned=(_Bool)1;
    come_value2_426->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_426->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_426));
    __result_obj__282 = (_Bool)1;
    ((exp_423) ? exp_423 = come_decrement_ref_count(exp_423, ((struct sNode*)exp_423)->finalize, ((struct sNode*)exp_423)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_425,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_426,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__282;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sType* __dec_obj109;
struct sAlignAsNode* __result_obj__283;
    ((struct sNodeBase*)(__right_value451=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value451,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj109=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__283 = (struct sAlignAsNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignAsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__283,sAlignAsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__283;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __right_value453 = (void*)0;
char* __result_obj__284;
    __result_obj__284 = (char*)come_increment_ref_count(((char*)(__right_value453=__builtin_string("sAlignAsNode"))));
    (__right_value453 = come_decrement_ref_count(__right_value453, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__284 = come_decrement_ref_count(__result_obj__284, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__284;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_427;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct CVALUE* come_value_428;
void* __right_value456 = (void*)0;
struct sType* type2_429;
void* __right_value457 = (void*)0;
char* type_name_430;
void* __right_value458 = (void*)0;
char* __dec_obj110;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sType* __dec_obj111;
_Bool __result_obj__285;
    type_427=self->type;
    come_value_428=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 807, "struct CVALUE*"))));
    type2_429=(struct sType*)come_increment_ref_count(solve_generics(type_427,info->generics_type,info));
    type_name_430=(char*)come_increment_ref_count(make_type_name_string(type2_429,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj110=come_value_428->c_value,
    come_value_428->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_430));
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj111=come_value_428->type,
    come_value_428->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 814, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_428->type->mUnsigned=(_Bool)1;
    come_value_428->var=((void*)0);
    add_come_last_code(info,"%s",come_value_428->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_428));
    __result_obj__285 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_428,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_430 = come_decrement_ref_count(type_name_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__285;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sNode* __dec_obj112;
struct sAlignAsExpNode* __result_obj__286;
    ((struct sNodeBase*)(__right_value462=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value462,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj112=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__286 = (struct sAlignAsExpNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignAsExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__286,sAlignAsExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__286;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __right_value464 = (void*)0;
char* __result_obj__287;
    __result_obj__287 = (char*)come_increment_ref_count(((char*)(__right_value464=__builtin_string("sAlignAsExpNode"))));
    (__right_value464 = come_decrement_ref_count(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__287 = come_decrement_ref_count(__result_obj__287, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__287;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_431;
_Bool Value_432;
_Bool __result_obj__288;
void* __right_value465 = (void*)0;
struct CVALUE* come_value_433;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct CVALUE* come_value2_434;
void* __right_value468 = (void*)0;
char* __dec_obj113;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sType* __dec_obj114;
_Bool __result_obj__289;
    exp_431=(struct sNode*)come_increment_ref_count(self->exp);
    Value_432=node_compile(exp_431,info);
    if(    !Value_432) {
        __result_obj__288 = (_Bool)0;
        ((exp_431) ? exp_431 = come_decrement_ref_count(exp_431, ((struct sNode*)exp_431)->finalize, ((struct sNode*)exp_431)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__288;
    }
    else {
    }
    come_value_433=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_434=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 850, "struct CVALUE*"))));
    __dec_obj113=come_value2_434->c_value,
    come_value2_434->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_433->c_value));
    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj114=come_value2_434->type,
    come_value2_434->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 853, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_434->type->mUnsigned=(_Bool)1;
    come_value2_434->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_434->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_434));
    __result_obj__289 = (_Bool)1;
    ((exp_431) ? exp_431 = come_decrement_ref_count(exp_431, ((struct sNode*)exp_431)->finalize, ((struct sNode*)exp_431)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_433,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sNode* __dec_obj115;
struct sDeleteNode* __result_obj__290;
    ((struct sNodeBase*)(__right_value472=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value472,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj115=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__290 = (struct sDeleteNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDeleteNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__290,sDeleteNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __right_value474 = (void*)0;
char* __result_obj__291;
    __result_obj__291 = (char*)come_increment_ref_count(((char*)(__right_value474=__builtin_string("sDeleteNode"))));
    (__right_value474 = come_decrement_ref_count(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__291 = come_decrement_ref_count(__result_obj__291, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__291;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_435;
_Bool Value_436;
void* __right_value475 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value476 = (void*)0;
_Bool __result_obj__292;
    node_435=self->node;
    Value_436=node_compile(node_435,info);
    if(    !Value_436) {
        return (_Bool)0;
    }
    else {
    }
    come_value_437=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_437->type->mPointerNum>0) {
        free_object(((struct sType*)(__right_value476=sType_clone(come_value_437->type))),come_value_437->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
        /*c*/ come_call_finalizer3(__right_value476,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__292 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_437,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__292;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sNode* __dec_obj116;
struct sBorrowNode* __result_obj__293;
struct sBorrowNode* __result_obj__294;
    ((struct sNodeBase*)(__right_value477=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value477,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj116=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__293 = (struct sBorrowNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__293,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__293;
    __result_obj__294 = (struct sBorrowNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__294,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __right_value479 = (void*)0;
char* __result_obj__295;
    __result_obj__295 = (char*)come_increment_ref_count(((char*)(__right_value479=__builtin_string("sBorrowNode"))));
    (__right_value479 = come_decrement_ref_count(__right_value479, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__295 = come_decrement_ref_count(__result_obj__295, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__295;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_438;
_Bool Value_439;
void* __right_value480 = (void*)0;
struct CVALUE* come_value_440;
struct sRightValueObject* right_value_objects_441;
int right_value_id_442;
_Bool __result_obj__296;
    node_438=self->node;
    Value_439=node_compile(node_438,info);
    if(    !Value_439) {
        return (_Bool)0;
    }
    else {
    }
    come_value_440=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_440->type->mPointerNum>0) {
        come_value_440->type->mHeap=(_Bool)0;
        right_value_objects_441=come_value_440->right_value_objects;
        if(        right_value_objects_441) {
            right_value_id_442=right_value_objects_441->mID;
            if(            right_value_id_442!=-1) {
                remove_object_from_right_values(right_value_id_442,info);
            }
        }
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_440));
    __result_obj__296 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_440,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__296;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sNode* __dec_obj117;
struct sCloneNode* __result_obj__297;
    ((struct sNodeBase*)(__right_value481=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value481,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj117=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj117 ? __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__297 = (struct sCloneNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCloneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__297,sCloneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__297;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __right_value483 = (void*)0;
char* __result_obj__298;
    __result_obj__298 = (char*)come_increment_ref_count(((char*)(__right_value483=__builtin_string("sCloneNode"))));
    (__right_value483 = come_decrement_ref_count(__right_value483, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__298 = come_decrement_ref_count(__result_obj__298, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__298;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_443;
_Bool Value_444;
void* __right_value484 = (void*)0;
struct CVALUE* left_value_445;
void* __right_value485 = (void*)0;
struct sType* left_type_446;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct CVALUE* come_value_447;
void* __right_value488 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var9 = (void*)0;
struct sType* result_type_448=0;
char* c_value_449=0;
char* __dec_obj118;
void* __right_value489 = (void*)0;
struct sType* __dec_obj119;
_Bool __result_obj__299;
    node_443=self->node;
    Value_444=node_compile(node_443,info);
    if(    !Value_444) {
        return (_Bool)0;
    }
    else {
    }
    left_value_445=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_446=(struct sType*)come_increment_ref_count(sType_clone(left_value_445->type));
    if(    left_type_446->mPointerNum==1&&string_operator_equals(left_type_446->mClass->mName,"void")&&left_type_446->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_445));
    }
    else if(    left_type_446->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_445));
    }
    else if(    left_type_446->mPointerNum>0) {
        come_value_447=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 975, "struct CVALUE*"))));
        multiple_assign_var9=((struct tuple2$2sType$phchar$ph*)(__right_value488=clone_object(left_type_446,left_value_445->c_value,info)));
        result_type_448=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
        c_value_449=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        /*c*/ come_call_finalizer3(__right_value488,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj118=come_value_447->c_value,
        come_value_447->c_value=(char*)come_increment_ref_count(c_value_449);
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj119=come_value_447->type,
        come_value_447->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_446));
        /*b*/ come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_447->type->mHeap=(_Bool)1;
        come_value_447->var=((void*)0);
        append_object_to_right_values2(come_value_447,(struct sType*)come_increment_ref_count(left_type_446),info,(_Bool)0,((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_447));
        /*c*/ come_call_finalizer3(come_value_447,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_448,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (c_value_449 = come_decrement_ref_count(c_value_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__299 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_445,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_446,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__299;
}

static void sCloneNode_finalize(struct sCloneNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* __dec_obj120;
struct sDupeNode* __result_obj__300;
    ((struct sNodeBase*)(__right_value490=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value490,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj120=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__300 = (struct sDupeNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDupeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__300,sDupeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __right_value492 = (void*)0;
char* __result_obj__301;
    __result_obj__301 = (char*)come_increment_ref_count(((char*)(__right_value492=__builtin_string("sDupeNode"))));
    (__right_value492 = come_decrement_ref_count(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__301 = come_decrement_ref_count(__result_obj__301, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__301;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_450;
_Bool Value_451;
void* __right_value493 = (void*)0;
struct CVALUE* left_value_452;
void* __right_value494 = (void*)0;
struct sType* left_type_453;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct CVALUE* come_value_454;
void* __right_value497 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var10 = (void*)0;
struct sType* result_type_455=0;
char* c_value_456=0;
char* __dec_obj121;
void* __right_value498 = (void*)0;
struct sType* __dec_obj122;
_Bool __result_obj__302;
    node_450=self->node;
    Value_451=node_compile(node_450,info);
    if(    !Value_451) {
        return (_Bool)0;
    }
    else {
    }
    left_value_452=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_453=(struct sType*)come_increment_ref_count(sType_clone(left_value_452->type));
    if(    left_type_453->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_452));
    }
    else if(    left_type_453->mPointerNum>0&&left_type_453->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_452));
    }
    else if(    left_type_453->mPointerNum>0) {
        come_value_454=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1025, "struct CVALUE*"))));
        multiple_assign_var10=((struct tuple2$2sType$phchar$ph*)(__right_value497=clone_object(left_type_453,left_value_452->c_value,info)));
        result_type_455=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        c_value_456=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        /*c*/ come_call_finalizer3(__right_value497,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj121=come_value_454->c_value,
        come_value_454->c_value=(char*)come_increment_ref_count(c_value_456);
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj122=come_value_454->type,
        come_value_454->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_453));
        /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_454->type->mHeap=(_Bool)1;
        come_value_454->var=((void*)0);
        append_object_to_right_values2(come_value_454,(struct sType*)come_increment_ref_count(left_type_453),info,(_Bool)0,((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_454));
        /*c*/ come_call_finalizer3(come_value_454,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_455,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (c_value_456 = come_decrement_ref_count(c_value_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__302 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_452,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_453,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__302;
}

static void sDupeNode_finalize(struct sDupeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sNode* __dec_obj123;
struct sDummyHeapNode* __result_obj__303;
    ((struct sNodeBase*)(__right_value499=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value499,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj123=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__303 = (struct sDummyHeapNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDummyHeapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__303,sDummyHeapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__303;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __right_value501 = (void*)0;
char* __result_obj__304;
    __result_obj__304 = (char*)come_increment_ref_count(((char*)(__right_value501=__builtin_string("sDummyHeapNode"))));
    (__right_value501 = come_decrement_ref_count(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__304 = come_decrement_ref_count(__result_obj__304, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__304;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_457;
_Bool Value_458;
void* __right_value502 = (void*)0;
struct CVALUE* come_value_459;
_Bool __result_obj__305;
    node_457=self->node;
    Value_458=node_compile(node_457,info);
    if(    !Value_458) {
        return (_Bool)0;
    }
    else {
    }
    come_value_459=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_459->type->mPointerNum>0) {
        come_value_459->type->mHeap=(_Bool)1;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_459));
    __result_obj__305 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_459,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__305;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sNode* __dec_obj124;
struct sGCIncNode* __result_obj__306;
    ((struct sNodeBase*)(__right_value503=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value503,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj124=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__306 = (struct sGCIncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGCIncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__306,sGCIncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__306;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __right_value505 = (void*)0;
char* __result_obj__307;
    __result_obj__307 = (char*)come_increment_ref_count(((char*)(__right_value505=__builtin_string("sGCIncNode"))));
    (__right_value505 = come_decrement_ref_count(__right_value505, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__307 = come_decrement_ref_count(__result_obj__307, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__307;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_460;
_Bool Value_461;
void* __right_value506 = (void*)0;
struct CVALUE* come_value_462;
struct sType* type_463;
void* __right_value507 = (void*)0;
char* type_name_464;
void* __right_value508 = (void*)0;
char* __dec_obj125;
_Bool __result_obj__308;
    node_460=self->node;
    Value_461=node_compile(node_460,info);
    if(    !Value_461) {
        return (_Bool)0;
    }
    else {
    }
    come_value_462=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_463=come_value_462->type;
    if(    come_value_462->type->mHeap&&come_value_462->type->mPointerNum>0) {
        type_name_464=(char*)come_increment_ref_count(make_type_name_string(type_463,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj125=come_value_462->c_value,
        come_value_462->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_462->type,come_value_462->c_value,info));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (type_name_464 = come_decrement_ref_count(type_name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_462));
    __result_obj__308 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_462,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sNode* __dec_obj126;
struct sGCDecNode* __result_obj__309;
    ((struct sNodeBase*)(__right_value509=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value509,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj126=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj126 ? __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__309 = (struct sGCDecNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGCDecNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__309,sGCDecNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__309;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __right_value511 = (void*)0;
char* __result_obj__310;
    __result_obj__310 = (char*)come_increment_ref_count(((char*)(__right_value511=__builtin_string("sGCDecNode"))));
    (__right_value511 = come_decrement_ref_count(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__310 = come_decrement_ref_count(__result_obj__310, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__310;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_465;
_Bool Value_466;
void* __right_value512 = (void*)0;
struct CVALUE* come_value_467;
struct sType* type_468;
_Bool __result_obj__311;
    node_465=self->node;
    Value_466=node_compile(node_465,info);
    if(    !Value_466) {
        return (_Bool)0;
    }
    else {
    }
    come_value_467=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_468=come_value_467->type;
    if(    come_value_467->type->mHeap&&come_value_467->type->mPointerNum>0) {
        decrement_ref_count_object(type_468,come_value_467->c_value,info,(_Bool)0,(_Bool)0);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_467));
    __result_obj__311 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_467,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__311;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sType* __dec_obj127;
struct sIsHeap* __result_obj__312;
    ((struct sNodeBase*)(__right_value513=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value513,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj127=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__312 = (struct sIsHeap*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sIsHeap_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__312,sIsHeap_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__312;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __right_value515 = (void*)0;
char* __result_obj__313;
    __result_obj__313 = (char*)come_increment_ref_count(((char*)(__right_value515=__builtin_string("sIsHeap"))));
    (__right_value515 = come_decrement_ref_count(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__313 = come_decrement_ref_count(__result_obj__313, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__313;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_469;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct CVALUE* come_value_470;
void* __right_value518 = (void*)0;
char* __dec_obj128;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* __dec_obj129;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct CVALUE* come_value_471;
void* __right_value524 = (void*)0;
char* __dec_obj130;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj131;
    node_469=self->type;
    if(    self->type->mHeap) {
        come_value_470=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1168, "struct CVALUE*"))));
        __dec_obj128=come_value_470->c_value,
        come_value_470->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj129=come_value_470->type,
        come_value_470->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1171, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_470->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_470));
        add_come_last_code(info,"%s",come_value_470->c_value);
        /*c*/ come_call_finalizer3(come_value_470,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_value_471=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1179, "struct CVALUE*"))));
        __dec_obj130=come_value_471->c_value,
        come_value_471->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj131=come_value_471->type,
        come_value_471->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1182, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_471->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_471));
        add_come_last_code(info,"%s",come_value_471->c_value);
        /*c*/ come_call_finalizer3(come_value_471,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sIsHeap_finalize(struct sIsHeap* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* __dec_obj132;
struct sIsPointer* __result_obj__314;
    ((struct sNodeBase*)(__right_value528=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value528,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj132=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__314 = (struct sIsPointer*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sIsPointer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__314,sIsPointer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__314;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __right_value530 = (void*)0;
char* __result_obj__315;
    __result_obj__315 = (char*)come_increment_ref_count(((char*)(__right_value530=__builtin_string("sIsPointer"))));
    (__right_value530 = come_decrement_ref_count(__right_value530, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__315 = come_decrement_ref_count(__result_obj__315, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__315;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_472;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct CVALUE* come_value_473;
void* __right_value533 = (void*)0;
char* __dec_obj133;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* __dec_obj134;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct CVALUE* come_value_474;
void* __right_value539 = (void*)0;
char* __dec_obj135;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* __dec_obj136;
    node_472=self->type;
    if(    self->type->mPointerNum>0) {
        come_value_473=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1214, "struct CVALUE*"))));
        __dec_obj133=come_value_473->c_value,
        come_value_473->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj134=come_value_473->type,
        come_value_473->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1217, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_473->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_473));
        add_come_last_code(info,"%s",come_value_473->c_value);
        /*c*/ come_call_finalizer3(come_value_473,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_value_474=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1225, "struct CVALUE*"))));
        __dec_obj135=come_value_474->c_value,
        come_value_474->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj136=come_value_474->type,
        come_value_474->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1228, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_474->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_474));
        add_come_last_code(info,"%s",come_value_474->c_value);
        /*c*/ come_call_finalizer3(come_value_474,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sIsPointer_finalize(struct sIsPointer* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sNode* __dec_obj137;
struct sGCDecNoFreeNode* __result_obj__316;
    ((struct sNodeBase*)(__right_value543=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value543,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj137=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__316 = (struct sGCDecNoFreeNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGCDecNoFreeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__316,sGCDecNoFreeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__316;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __right_value545 = (void*)0;
char* __result_obj__317;
    __result_obj__317 = (char*)come_increment_ref_count(((char*)(__right_value545=__builtin_string("sGCDecNoFreeNode"))));
    (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__317 = come_decrement_ref_count(__result_obj__317, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__317;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node_475;
_Bool Value_476;
void* __right_value546 = (void*)0;
struct CVALUE* come_value_477;
struct sType* type_478;
_Bool __result_obj__318;
    node_475=self->node;
    Value_476=node_compile(node_475,info);
    if(    !Value_476) {
        return (_Bool)0;
    }
    else {
    }
    come_value_477=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_478=come_value_477->type;
    if(    type_478->mHeap&&type_478->mPointerNum>0) {
        decrement_ref_count_object(type_478,come_value_477->c_value,info,(_Bool)0,(_Bool)1);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_477));
    __result_obj__318 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_477,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__318;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value547 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var11 = (void*)0;
struct sType* type_479=0;
char* name_480=0;
_Bool err_481=0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* __right_value564 = (void*)0;
struct sNode* obj_482;
void* __right_value565 = (void*)0;
char* fun_name_490;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* __result_obj__327;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_491;
void* __right_value570 = (void*)0;
char* word_492;
_Bool no_comma_493;
void* __right_value571 = (void*)0;
struct sNode* exp_494;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
_Bool _if_conditional8;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sNode* value_node_495;
void* __right_value576 = (void*)0;
struct sNode* __dec_obj146;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sNode* exp_497;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sNode* __result_obj__329;
struct sNode* __result_obj__330;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
void* __right_value584 = (void*)0;
struct sNode* __result_obj__331;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* __right_value587 = (void*)0;
struct sNode* __result_obj__332;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sNode* _inf_value6;
struct sTrueNode* _inf_obj_value6;
void* __right_value590 = (void*)0;
struct sNode* __result_obj__333;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sNode* _inf_value7;
struct sFalseNode* _inf_obj_value7;
void* __right_value593 = (void*)0;
struct sNode* __result_obj__334;
void* __right_value594 = (void*)0;
struct sNode* node_498;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sNode* _inf_value8;
struct sDeleteNode* _inf_obj_value8;
void* __right_value600 = (void*)0;
struct sNode* __result_obj__337;
void* __right_value601 = (void*)0;
struct sNode* node_500;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sNode* _inf_value9;
struct sBorrowNode* _inf_obj_value9;
void* __right_value607 = (void*)0;
struct sNode* __result_obj__340;
void* __right_value608 = (void*)0;
struct sNode* node_502;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sNode* _inf_value10;
struct sCloneNode* _inf_obj_value10;
void* __right_value614 = (void*)0;
struct sNode* __result_obj__343;
void* __right_value615 = (void*)0;
struct sNode* node_504;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sNode* _inf_value11;
struct sDupeNode* _inf_obj_value11;
void* __right_value621 = (void*)0;
struct sNode* __result_obj__346;
void* __right_value622 = (void*)0;
struct sNode* node_506;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sNode* _inf_value12;
struct sDummyHeapNode* _inf_obj_value12;
void* __right_value628 = (void*)0;
struct sNode* __result_obj__349;
void* __right_value629 = (void*)0;
struct sNode* node_508;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sNode* _inf_value13;
struct sGCIncNode* _inf_obj_value13;
void* __right_value635 = (void*)0;
struct sNode* __result_obj__352;
void* __right_value636 = (void*)0;
struct sNode* node_510;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sNode* _inf_value14;
struct sGCDecNode* _inf_obj_value14;
void* __right_value642 = (void*)0;
struct sNode* __result_obj__355;
void* __right_value643 = (void*)0;
struct sNode* node_512;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sNode* _inf_value15;
struct sGCDecNoFreeNode* _inf_obj_value15;
void* __right_value649 = (void*)0;
struct sNode* __result_obj__358;
void* __right_value650 = (void*)0;
struct sNode* node_514;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sNode* _inf_value16;
struct sGCDecNoFreeNode* _inf_obj_value16;
void* __right_value653 = (void*)0;
struct sNode* __result_obj__359;
void* __right_value654 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var12 = (void*)0;
struct sType* param_type_515=0;
char* param_name_516=0;
_Bool err_517=0;
void* __right_value655 = (void*)0;
struct sType* type2_518;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sNode* _inf_value17;
struct sIsHeap* _inf_obj_value17;
void* __right_value661 = (void*)0;
struct sNode* __result_obj__362;
void* __right_value662 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* param_type_520=0;
char* param_name_521=0;
_Bool err_522=0;
void* __right_value663 = (void*)0;
struct sType* type2_523;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct sNode* _inf_value18;
struct sIsPointer* _inf_obj_value18;
void* __right_value669 = (void*)0;
struct sNode* __result_obj__365;
void* __right_value670 = (void*)0;
struct sNode* __result_obj__366;
void* __right_value671 = (void*)0;
struct sNode* __result_obj__367;
void* __right_value672 = (void*)0;
struct sNode* __result_obj__368;
void* __right_value673 = (void*)0;
struct sNode* __result_obj__369;
_Bool come_c_525;
void* __right_value674 = (void*)0;
struct sNode* node_526;
struct sNode* __result_obj__370;
void* __right_value675 = (void*)0;
struct sNode* __result_obj__371;
void* __right_value676 = (void*)0;
struct sNode* __result_obj__372;
void* __right_value677 = (void*)0;
struct sNode* __result_obj__373;
void* __right_value678 = (void*)0;
struct sNode* __result_obj__374;
void* __right_value679 = (void*)0;
struct sNode* __result_obj__375;
_Bool paren_527;
_Bool is_type_name_flag_528;
char* p_529;
int sline_530;
void* __right_value680 = (void*)0;
char* word_531;
void* __right_value681 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* type_532=0;
char* name_533=0;
_Bool err_534=0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sNode* _inf_value19;
struct sSizeOfNode* _inf_obj_value19;
void* __right_value687 = (void*)0;
struct sNode* __result_obj__378;
struct sNode* exp_536;
_Bool no_comma_537;
void* __right_value688 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value689 = (void*)0;
struct sNode* __dec_obj172;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct sNode* _inf_value20;
struct sSizeOfExpNode* _inf_obj_value20;
void* __right_value695 = (void*)0;
struct sNode* __result_obj__381;
_Bool paren_539;
_Bool is_type_name_flag_540;
char* p_541;
int sline_542;
void* __right_value696 = (void*)0;
char* word_543;
void* __right_value697 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_544=0;
char* name_545=0;
_Bool err_546=0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct sNode* _inf_value21;
struct sTypeOfNode* _inf_obj_value21;
void* __right_value703 = (void*)0;
struct sNode* __result_obj__384;
struct sNode* exp_548;
_Bool no_comma_549;
void* __right_value704 = (void*)0;
struct sNode* __dec_obj177;
void* __right_value705 = (void*)0;
struct sNode* __dec_obj178;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct sNode* _inf_value22;
struct sTypeOfExpNode* _inf_obj_value22;
void* __right_value711 = (void*)0;
struct sNode* __result_obj__387;
_Bool paren_551;
struct sNode* exp_552;
_Bool no_comma_553;
void* __right_value712 = (void*)0;
struct sNode* __dec_obj181;
void* __right_value713 = (void*)0;
struct sNode* __dec_obj182;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sNode* _inf_value23;
struct sDynamicTypeOf* _inf_obj_value23;
void* __right_value719 = (void*)0;
struct sNode* __result_obj__390;
_Bool paren_555;
_Bool is_type_name_flag_556;
char* p_557;
int sline_558;
void* __right_value720 = (void*)0;
char* word_559;
void* __right_value721 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* type_560=0;
char* name_561=0;
_Bool err_562=0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct sNode* _inf_value24;
struct sAlignOfNode* _inf_obj_value24;
void* __right_value727 = (void*)0;
struct sNode* __result_obj__393;
struct sNode* exp_564;
_Bool no_comma_565;
void* __right_value728 = (void*)0;
struct sNode* __dec_obj187;
void* __right_value729 = (void*)0;
struct sNode* __dec_obj188;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sNode* _inf_value25;
struct sAlignOfExpNode* _inf_obj_value25;
void* __right_value735 = (void*)0;
struct sNode* __result_obj__396;
_Bool paren_567;
_Bool is_type_name_flag_568;
char* p_569;
int sline_570;
void* __right_value736 = (void*)0;
char* word_571;
void* __right_value737 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* type_572=0;
char* name_573=0;
_Bool err_574=0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct sNode* _inf_value26;
struct sAlignOfNode2* _inf_obj_value26;
void* __right_value743 = (void*)0;
struct sNode* __result_obj__399;
struct sNode* exp_576;
_Bool no_comma_577;
void* __right_value744 = (void*)0;
struct sNode* __dec_obj193;
void* __right_value745 = (void*)0;
struct sNode* __dec_obj194;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sNode* _inf_value27;
struct sAlignOfExpNode2* _inf_obj_value27;
void* __right_value751 = (void*)0;
struct sNode* __result_obj__402;
_Bool is_type_name_flag_579;
char* p_580;
int sline_581;
void* __right_value752 = (void*)0;
char* word_582;
void* __right_value753 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* type_583=0;
char* name_584=0;
_Bool err_585=0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct sNode* _inf_value28;
struct sAlignAsNode* _inf_obj_value28;
void* __right_value759 = (void*)0;
struct sNode* __result_obj__405;
void* __right_value760 = (void*)0;
struct sNode* exp_587;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sNode* _inf_value29;
struct sAlignAsExpNode* _inf_obj_value29;
void* __right_value766 = (void*)0;
struct sNode* __result_obj__408;
void* __right_value767 = (void*)0;
struct sNode* __result_obj__409;
exp_536 = (void*)0;
exp_548 = (void*)0;
exp_552 = (void*)0;
exp_564 = (void*)0;
exp_576 = (void*)0;
    if(    !gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var11=((struct tuple3$3sType$phchar$phbool$*)(__right_value547=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_479=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
        name_480=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        err_481=multiple_assign_var11->v3;
        /*c*/ come_call_finalizer3(__right_value547,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_481) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(        *info->p==40) {
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1286, "struct sNode");
            _inf_obj_value3=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value549=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1286, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type_479),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            obj_482=(struct sNode*)come_increment_ref_count(_inf_value3);
            /*c*/ come_call_finalizer3(__right_value549,sNewNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            fun_name_490=(char*)come_increment_ref_count(__builtin_string("initialize"));
            __result_obj__327 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value567=parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(obj_482)),(char*)come_increment_ref_count(fun_name_490),info))));
            ((obj_482) ? obj_482 = come_decrement_ref_count(obj_482, ((struct sNode*)obj_482)->finalize, ((struct sNode*)obj_482)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_490 = come_decrement_ref_count(fun_name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_479,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_480 = come_decrement_ref_count(name_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value567) ? __right_value567 = come_decrement_ref_count(__right_value567, ((struct sNode*)__right_value567)->finalize, ((struct sNode*)__right_value567)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__327) ? __result_obj__327 = come_decrement_ref_count(__result_obj__327, ((struct sNode*)__result_obj__327)->finalize, ((struct sNode*)__result_obj__327)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__327;
            ((obj_482) ? obj_482 = come_decrement_ref_count(obj_482, ((struct sNode*)obj_482)->finalize, ((struct sNode*)obj_482)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_490 = come_decrement_ref_count(fun_name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer_491=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "21obj.c", 1295, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            while(            (_Bool)1) {
                word_492=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_493=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_494=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_493;
                    if(                    (_if_conditional8=(string_operator_equals(((char*)(__right_value573=exp_494->kind(exp_494->_protocol_obj))),"sWildCard"))),                    (__right_value572 = come_decrement_ref_count(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value573 = come_decrement_ref_count(__right_value573, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    _if_conditional8) {
                        value_node_495=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value574=xsprintf("Value"))),info));
                        (__right_value574 = come_decrement_ref_count(__right_value574, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        __dec_obj146=exp_494,
                        exp_494=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_495),(char*)come_increment_ref_count(word_492),info));
                        (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                        ((value_node_495) ? value_node_495 = come_decrement_ref_count(value_node_495, ((struct sNode*)value_node_495)->finalize, ((struct sNode*)value_node_495)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer_491,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "21obj.c", 1314, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(word_492),(struct sNode*)come_increment_ref_count(exp_494))));
                    ((exp_494) ? exp_494 = come_decrement_ref_count(exp_494, ((struct sNode*)exp_494)->finalize, ((struct sNode*)exp_494)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==44) {
                    exp_497=(struct sNode*)come_increment_ref_count(create_load_var(word_492,info));
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer_491,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "21obj.c", 1319, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(word_492),(struct sNode*)come_increment_ref_count(exp_497))));
                    ((exp_497) ? exp_497 = come_decrement_ref_count(exp_497, ((struct sNode*)exp_497)->finalize, ((struct sNode*)exp_497)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    err_msg(info,"invalid character(21) %c",*info->p);
                    __result_obj__329 = (void*)come_increment_ref_count(((void*)0));
                    (word_492 = come_decrement_ref_count(word_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(initializer_491,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_479,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_480 = come_decrement_ref_count(name_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((__result_obj__329) ? __result_obj__329 = come_decrement_ref_count(__result_obj__329, ((struct sNode*)__result_obj__329)->finalize, ((struct sNode*)__result_obj__329)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__329;
                }
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (word_492 = come_decrement_ref_count(word_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",*info->p);
                    __result_obj__330 = (void*)come_increment_ref_count(((void*)0));
                    (word_492 = come_decrement_ref_count(word_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(initializer_491,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_479,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_480 = come_decrement_ref_count(name_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((__result_obj__330) ? __result_obj__330 = come_decrement_ref_count(__result_obj__330, ((struct sNode*)__result_obj__330)->finalize, ((struct sNode*)__result_obj__330)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__330;
                }
                (word_492 = come_decrement_ref_count(word_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1340, "struct sNode");
            _inf_obj_value4=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value583=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1340, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type_479),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer_491),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sNewNode_finalize;
            _inf_value4->clone=(void*)sNewNode_clone;
            _inf_value4->compile=(void*)sNewNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sNewNode_kind;
            __result_obj__331 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value584=_inf_value4)));
            /*c*/ come_call_finalizer3(initializer_491,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_479,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_480 = come_decrement_ref_count(name_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value583,sNewNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value584) ? __right_value584 = come_decrement_ref_count(__right_value584, ((struct sNode*)__right_value584)->finalize, ((struct sNode*)__right_value584)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__331) ? __result_obj__331 = come_decrement_ref_count(__result_obj__331, ((struct sNode*)__result_obj__331)->finalize, ((struct sNode*)__result_obj__331)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__331;
            /*c*/ come_call_finalizer3(initializer_491,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1343, "struct sNode");
            _inf_obj_value5=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value586=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1343, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type_479),((void*)0),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            __result_obj__332 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value587=_inf_value5)));
            /*c*/ come_call_finalizer3(type_479,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_480 = come_decrement_ref_count(name_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value586,sNewNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value587) ? __right_value587 = come_decrement_ref_count(__right_value587, ((struct sNode*)__right_value587)->finalize, ((struct sNode*)__right_value587)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__332) ? __result_obj__332 = come_decrement_ref_count(__result_obj__332, ((struct sNode*)__result_obj__332)->finalize, ((struct sNode*)__result_obj__332)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__332;
        }
        /*c*/ come_call_finalizer3(type_479,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_480 = come_decrement_ref_count(name_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !gComeC&&charp_operator_equals(buf,"true")) {
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1347, "struct sNode");
        _inf_obj_value6=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value589=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1347, "struct sTrueNode*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sTrueNode_finalize;
        _inf_value6->clone=(void*)sTrueNode_clone;
        _inf_value6->compile=(void*)sTrueNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sTrueNode_kind;
        __result_obj__333 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value590=_inf_value6)));
        /*c*/ come_call_finalizer3(__right_value589,sTrueNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value590) ? __right_value590 = come_decrement_ref_count(__right_value590, ((struct sNode*)__right_value590)->finalize, ((struct sNode*)__right_value590)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__333) ? __result_obj__333 = come_decrement_ref_count(__result_obj__333, ((struct sNode*)__result_obj__333)->finalize, ((struct sNode*)__result_obj__333)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__333;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"false")) {
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1350, "struct sNode");
        _inf_obj_value7=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value592=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1350, "struct sFalseNode*")),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFalseNode_finalize;
        _inf_value7->clone=(void*)sFalseNode_clone;
        _inf_value7->compile=(void*)sFalseNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sFalseNode_kind;
        __result_obj__334 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value593=_inf_value7)));
        /*c*/ come_call_finalizer3(__right_value592,sFalseNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value593) ? __right_value593 = come_decrement_ref_count(__right_value593, ((struct sNode*)__right_value593)->finalize, ((struct sNode*)__right_value593)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__334) ? __result_obj__334 = come_decrement_ref_count(__result_obj__334, ((struct sNode*)__result_obj__334)->finalize, ((struct sNode*)__result_obj__334)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__334;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"delete")) {
        node_498=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1355, "struct sNode");
        _inf_obj_value8=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value596=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc_v2(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1355, "struct sDeleteNode*")),(struct sNode*)come_increment_ref_count(node_498),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sDeleteNode_finalize;
        _inf_value8->clone=(void*)sDeleteNode_clone;
        _inf_value8->compile=(void*)sDeleteNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sDeleteNode_kind;
        __result_obj__337 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value600=_inf_value8)));
        ((node_498) ? node_498 = come_decrement_ref_count(node_498, ((struct sNode*)node_498)->finalize, ((struct sNode*)node_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value596,sDeleteNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value600) ? __right_value600 = come_decrement_ref_count(__right_value600, ((struct sNode*)__right_value600)->finalize, ((struct sNode*)__right_value600)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__337) ? __result_obj__337 = come_decrement_ref_count(__result_obj__337, ((struct sNode*)__result_obj__337)->finalize, ((struct sNode*)__result_obj__337)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__337;
        ((node_498) ? node_498 = come_decrement_ref_count(node_498, ((struct sNode*)node_498)->finalize, ((struct sNode*)node_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"borrow")) {
        node_500=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1360, "struct sNode");
        _inf_obj_value9=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value603=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc_v2(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1360, "struct sBorrowNode*")),(struct sNode*)come_increment_ref_count(node_500),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sBorrowNode_finalize;
        _inf_value9->clone=(void*)sBorrowNode_clone;
        _inf_value9->compile=(void*)sBorrowNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sBorrowNode_kind;
        __result_obj__340 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value607=_inf_value9)));
        ((node_500) ? node_500 = come_decrement_ref_count(node_500, ((struct sNode*)node_500)->finalize, ((struct sNode*)node_500)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value603,sBorrowNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value607) ? __right_value607 = come_decrement_ref_count(__right_value607, ((struct sNode*)__right_value607)->finalize, ((struct sNode*)__right_value607)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__340) ? __result_obj__340 = come_decrement_ref_count(__result_obj__340, ((struct sNode*)__result_obj__340)->finalize, ((struct sNode*)__result_obj__340)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__340;
        ((node_500) ? node_500 = come_decrement_ref_count(node_500, ((struct sNode*)node_500)->finalize, ((struct sNode*)node_500)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"clone")) {
        node_502=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1365, "struct sNode");
        _inf_obj_value10=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value610=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc_v2(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1365, "struct sCloneNode*")),(struct sNode*)come_increment_ref_count(node_502),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sCloneNode_finalize;
        _inf_value10->clone=(void*)sCloneNode_clone;
        _inf_value10->compile=(void*)sCloneNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sCloneNode_kind;
        __result_obj__343 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value614=_inf_value10)));
        ((node_502) ? node_502 = come_decrement_ref_count(node_502, ((struct sNode*)node_502)->finalize, ((struct sNode*)node_502)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value610,sCloneNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value614) ? __right_value614 = come_decrement_ref_count(__right_value614, ((struct sNode*)__right_value614)->finalize, ((struct sNode*)__right_value614)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__343) ? __result_obj__343 = come_decrement_ref_count(__result_obj__343, ((struct sNode*)__result_obj__343)->finalize, ((struct sNode*)__result_obj__343)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__343;
        ((node_502) ? node_502 = come_decrement_ref_count(node_502, ((struct sNode*)node_502)->finalize, ((struct sNode*)node_502)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dupe")) {
        node_504=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1370, "struct sNode");
        _inf_obj_value11=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value617=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc_v2(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1370, "struct sDupeNode*")),(struct sNode*)come_increment_ref_count(node_504),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDupeNode_finalize;
        _inf_value11->clone=(void*)sDupeNode_clone;
        _inf_value11->compile=(void*)sDupeNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDupeNode_kind;
        __result_obj__346 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value621=_inf_value11)));
        ((node_504) ? node_504 = come_decrement_ref_count(node_504, ((struct sNode*)node_504)->finalize, ((struct sNode*)node_504)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value617,sDupeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value621) ? __right_value621 = come_decrement_ref_count(__right_value621, ((struct sNode*)__right_value621)->finalize, ((struct sNode*)__right_value621)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__346) ? __result_obj__346 = come_decrement_ref_count(__result_obj__346, ((struct sNode*)__result_obj__346)->finalize, ((struct sNode*)__result_obj__346)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__346;
        ((node_504) ? node_504 = come_decrement_ref_count(node_504, ((struct sNode*)node_504)->finalize, ((struct sNode*)node_504)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dummy_heap")) {
        node_506=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1375, "struct sNode");
        _inf_obj_value12=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value624=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc_v2(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1375, "struct sDummyHeapNode*")),(struct sNode*)come_increment_ref_count(node_506),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value12->clone=(void*)sDummyHeapNode_clone;
        _inf_value12->compile=(void*)sDummyHeapNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDummyHeapNode_kind;
        __result_obj__349 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value628=_inf_value12)));
        ((node_506) ? node_506 = come_decrement_ref_count(node_506, ((struct sNode*)node_506)->finalize, ((struct sNode*)node_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value624,sDummyHeapNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value628) ? __right_value628 = come_decrement_ref_count(__right_value628, ((struct sNode*)__right_value628)->finalize, ((struct sNode*)__right_value628)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__349) ? __result_obj__349 = come_decrement_ref_count(__result_obj__349, ((struct sNode*)__result_obj__349)->finalize, ((struct sNode*)__result_obj__349)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__349;
        ((node_506) ? node_506 = come_decrement_ref_count(node_506, ((struct sNode*)node_506)->finalize, ((struct sNode*)node_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_508=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1385, "struct sNode");
        _inf_obj_value13=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value631=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc_v2(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1385, "struct sGCIncNode*")),(struct sNode*)come_increment_ref_count(node_508),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sGCIncNode_finalize;
        _inf_value13->clone=(void*)sGCIncNode_clone;
        _inf_value13->compile=(void*)sGCIncNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sGCIncNode_kind;
        __result_obj__352 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value635=_inf_value13)));
        ((node_508) ? node_508 = come_decrement_ref_count(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value631,sGCIncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value635) ? __right_value635 = come_decrement_ref_count(__right_value635, ((struct sNode*)__right_value635)->finalize, ((struct sNode*)__right_value635)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__352) ? __result_obj__352 = come_decrement_ref_count(__result_obj__352, ((struct sNode*)__result_obj__352)->finalize, ((struct sNode*)__result_obj__352)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__352;
        ((node_508) ? node_508 = come_decrement_ref_count(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_510=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1395, "struct sNode");
        _inf_obj_value14=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value638=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc_v2(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1395, "struct sGCDecNode*")),(struct sNode*)come_increment_ref_count(node_510),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sGCDecNode_finalize;
        _inf_value14->clone=(void*)sGCDecNode_clone;
        _inf_value14->compile=(void*)sGCDecNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sGCDecNode_kind;
        __result_obj__355 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value642=_inf_value14)));
        ((node_510) ? node_510 = come_decrement_ref_count(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value638,sGCDecNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value642) ? __right_value642 = come_decrement_ref_count(__right_value642, ((struct sNode*)__right_value642)->finalize, ((struct sNode*)__right_value642)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__355) ? __result_obj__355 = come_decrement_ref_count(__result_obj__355, ((struct sNode*)__result_obj__355)->finalize, ((struct sNode*)__result_obj__355)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__355;
        ((node_510) ? node_510 = come_decrement_ref_count(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_512=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1405, "struct sNode");
        _inf_obj_value15=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value645=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1405, "struct sGCDecNoFreeNode*")),(struct sNode*)come_increment_ref_count(node_512),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value15->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value15->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sGCDecNoFreeNode_kind;
        __result_obj__358 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value649=_inf_value15)));
        ((node_512) ? node_512 = come_decrement_ref_count(node_512, ((struct sNode*)node_512)->finalize, ((struct sNode*)node_512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value645,sGCDecNoFreeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value649) ? __right_value649 = come_decrement_ref_count(__right_value649, ((struct sNode*)__right_value649)->finalize, ((struct sNode*)__right_value649)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__358) ? __result_obj__358 = come_decrement_ref_count(__result_obj__358, ((struct sNode*)__result_obj__358)->finalize, ((struct sNode*)__result_obj__358)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__358;
        ((node_512) ? node_512 = come_decrement_ref_count(node_512, ((struct sNode*)node_512)->finalize, ((struct sNode*)node_512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"lock")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_514=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1415, "struct sNode");
        _inf_obj_value16=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value652=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1415, "struct sGCDecNoFreeNode*")),(struct sNode*)come_increment_ref_count(node_514),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value16->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value16->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sGCDecNoFreeNode_kind;
        __result_obj__359 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value653=_inf_value16)));
        ((node_514) ? node_514 = come_decrement_ref_count(node_514, ((struct sNode*)node_514)->finalize, ((struct sNode*)node_514)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value652,sGCDecNoFreeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value653) ? __right_value653 = come_decrement_ref_count(__right_value653, ((struct sNode*)__right_value653)->finalize, ((struct sNode*)__right_value653)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__359) ? __result_obj__359 = come_decrement_ref_count(__result_obj__359, ((struct sNode*)__result_obj__359)->finalize, ((struct sNode*)__result_obj__359)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__359;
        ((node_514) ? node_514 = come_decrement_ref_count(node_514, ((struct sNode*)node_514)->finalize, ((struct sNode*)node_514)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var12=((struct tuple3$3sType$phchar$phbool$*)(__right_value654=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_515=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
        param_name_516=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        err_517=multiple_assign_var12->v3;
        /*c*/ come_call_finalizer3(__right_value654,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_517) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_518=(struct sType*)come_increment_ref_count(solve_generics(param_type_515,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1431, "struct sNode");
        _inf_obj_value17=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value657=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc_v2(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1431, "struct sIsHeap*")),(struct sType*)come_increment_ref_count(type2_518),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sIsHeap_finalize;
        _inf_value17->clone=(void*)sIsHeap_clone;
        _inf_value17->compile=(void*)sIsHeap_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sIsHeap_kind;
        __result_obj__362 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value661=_inf_value17)));
        /*c*/ come_call_finalizer3(param_type_515,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_516 = come_decrement_ref_count(param_name_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_518,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value657,sIsHeap_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value661) ? __right_value661 = come_decrement_ref_count(__right_value661, ((struct sNode*)__right_value661)->finalize, ((struct sNode*)__right_value661)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__362) ? __result_obj__362 = come_decrement_ref_count(__result_obj__362, ((struct sNode*)__result_obj__362)->finalize, ((struct sNode*)__result_obj__362)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__362;
        /*c*/ come_call_finalizer3(param_type_515,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_516 = come_decrement_ref_count(param_name_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_518,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    charp_operator_equals(buf,"ispointer")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value662=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_520=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
        param_name_521=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        err_522=multiple_assign_var13->v3;
        /*c*/ come_call_finalizer3(__right_value662,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_522) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_523=(struct sType*)come_increment_ref_count(solve_generics(param_type_520,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1447, "struct sNode");
        _inf_obj_value18=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value665=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc_v2(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1447, "struct sIsPointer*")),(struct sType*)come_increment_ref_count(type2_523),info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sIsPointer_finalize;
        _inf_value18->clone=(void*)sIsPointer_clone;
        _inf_value18->compile=(void*)sIsPointer_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sline_real=(void*)sNodeBase_sline_real;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sIsPointer_kind;
        __result_obj__365 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value669=_inf_value18)));
        /*c*/ come_call_finalizer3(param_type_520,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_521 = come_decrement_ref_count(param_name_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_523,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value665,sIsPointer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value669) ? __right_value669 = come_decrement_ref_count(__right_value669, ((struct sNode*)__right_value669)->finalize, ((struct sNode*)__right_value669)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__365) ? __result_obj__365 = come_decrement_ref_count(__result_obj__365, ((struct sNode*)__result_obj__365)->finalize, ((struct sNode*)__result_obj__365)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__365;
        /*c*/ come_call_finalizer3(param_type_520,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_521 = come_decrement_ref_count(param_name_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_523,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __result_obj__366 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value670=create_nothing_node(info))));
            ((__right_value670) ? __right_value670 = come_decrement_ref_count(__right_value670, ((struct sNode*)__right_value670)->finalize, ((struct sNode*)__right_value670)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__366) ? __result_obj__366 = come_decrement_ref_count(__result_obj__366, ((struct sNode*)__result_obj__366)->finalize, ((struct sNode*)__result_obj__366)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__366;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result_obj__367 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value671=create_nothing_node(info))));
            ((__right_value671) ? __right_value671 = come_decrement_ref_count(__right_value671, ((struct sNode*)__right_value671)->finalize, ((struct sNode*)__right_value671)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__367) ? __result_obj__367 = come_decrement_ref_count(__result_obj__367, ((struct sNode*)__result_obj__367)->finalize, ((struct sNode*)__result_obj__367)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__367;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result_obj__368 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value672=create_nothing_node(info))));
            ((__right_value672) ? __right_value672 = come_decrement_ref_count(__right_value672, ((struct sNode*)__right_value672)->finalize, ((struct sNode*)__right_value672)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__368) ? __result_obj__368 = come_decrement_ref_count(__result_obj__368, ((struct sNode*)__result_obj__368)->finalize, ((struct sNode*)__result_obj__368)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__368;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result_obj__369 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value673=create_nothing_node(info))));
            ((__right_value673) ? __right_value673 = come_decrement_ref_count(__right_value673, ((struct sNode*)__right_value673)->finalize, ((struct sNode*)__right_value673)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__369) ? __result_obj__369 = come_decrement_ref_count(__result_obj__369, ((struct sNode*)__result_obj__369)->finalize, ((struct sNode*)__result_obj__369)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__369;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c_525=gComeC;
            gComeC=(_Bool)1;
            if(            *info->p==123) {
                node_526=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info,(_Bool)0));
                gComeC=come_c_525;
                __result_obj__370 = (struct sNode*)come_increment_ref_count(node_526);
                ((node_526) ? node_526 = come_decrement_ref_count(node_526, ((struct sNode*)node_526)->finalize, ((struct sNode*)node_526)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__370) ? __result_obj__370 = come_decrement_ref_count(__result_obj__370, ((struct sNode*)__result_obj__370)->finalize, ((struct sNode*)__result_obj__370)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__370;
                ((node_526) ? node_526 = come_decrement_ref_count(node_526, ((struct sNode*)node_526)->finalize, ((struct sNode*)node_526)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                __result_obj__371 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value675=create_nothing_node(info))));
                ((__right_value675) ? __right_value675 = come_decrement_ref_count(__right_value675, ((struct sNode*)__right_value675)->finalize, ((struct sNode*)__right_value675)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__371) ? __result_obj__371 = come_decrement_ref_count(__result_obj__371, ((struct sNode*)__result_obj__371)->finalize, ((struct sNode*)__result_obj__371)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__371;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            __result_obj__372 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value676=create_nothing_node(info))));
            ((__right_value676) ? __right_value676 = come_decrement_ref_count(__right_value676, ((struct sNode*)__right_value676)->finalize, ((struct sNode*)__right_value676)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__372) ? __result_obj__372 = come_decrement_ref_count(__result_obj__372, ((struct sNode*)__result_obj__372)->finalize, ((struct sNode*)__result_obj__372)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__372;
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            __result_obj__373 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value677=create_nothing_node(info))));
            ((__right_value677) ? __right_value677 = come_decrement_ref_count(__right_value677, ((struct sNode*)__right_value677)->finalize, ((struct sNode*)__right_value677)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__373) ? __result_obj__373 = come_decrement_ref_count(__result_obj__373, ((struct sNode*)__result_obj__373)->finalize, ((struct sNode*)__result_obj__373)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__373;
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            __result_obj__374 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value678=create_nothing_node(info))));
            ((__right_value678) ? __right_value678 = come_decrement_ref_count(__right_value678, ((struct sNode*)__right_value678)->finalize, ((struct sNode*)__right_value678)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__374) ? __result_obj__374 = come_decrement_ref_count(__result_obj__374, ((struct sNode*)__result_obj__374)->finalize, ((struct sNode*)__result_obj__374)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__374;
        }
        else if(        parsecmp("no-null-check",info)) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
            __result_obj__375 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value679=create_nothing_node(info))));
            ((__right_value679) ? __right_value679 = come_decrement_ref_count(__right_value679, ((struct sNode*)__right_value679)->finalize, ((struct sNode*)__right_value679)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__375) ? __result_obj__375 = come_decrement_ref_count(__result_obj__375, ((struct sNode*)__result_obj__375)->finalize, ((struct sNode*)__result_obj__375)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__375;
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(    charp_operator_equals(buf,"sizeof")) {
        paren_527=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_527=(_Bool)1;
        }
        is_type_name_flag_528=(_Bool)0;
        {
            p_529=info->p;
            sline_530=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_531=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_531,info)) {
                    is_type_name_flag_528=(_Bool)1;
                }
                (word_531 = come_decrement_ref_count(word_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_529;
            info->sline=sline_530;
        }
        if(        is_type_name_flag_528) {
            multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value681=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_532=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
            name_533=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            err_534=multiple_assign_var14->v3;
            /*c*/ come_call_finalizer3(__right_value681,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_534) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_527&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1571, "struct sNode");
            _inf_obj_value19=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value683=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc_v2(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1571, "struct sSizeOfNode*")),(struct sType*)come_increment_ref_count(type_532),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sSizeOfNode_finalize;
            _inf_value19->clone=(void*)sSizeOfNode_clone;
            _inf_value19->compile=(void*)sSizeOfNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sSizeOfNode_kind;
            __result_obj__378 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value687=_inf_value19)));
            /*c*/ come_call_finalizer3(type_532,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_533 = come_decrement_ref_count(name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value683,sSizeOfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value687) ? __right_value687 = come_decrement_ref_count(__right_value687, ((struct sNode*)__right_value687)->finalize, ((struct sNode*)__right_value687)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__378) ? __result_obj__378 = come_decrement_ref_count(__result_obj__378, ((struct sNode*)__result_obj__378)->finalize, ((struct sNode*)__result_obj__378)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__378;
            /*c*/ come_call_finalizer3(type_532,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_533 = come_decrement_ref_count(name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_527) {
                no_comma_537=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj171=exp_536,
                exp_536=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_comma=no_comma_537;
            }
            else {
                __dec_obj172=exp_536,
                exp_536=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            if(            paren_527&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1592, "struct sNode");
            _inf_obj_value20=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value691=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc_v2(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1592, "struct sSizeOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_536),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value20->clone=(void*)sSizeOfExpNode_clone;
            _inf_value20->compile=(void*)sSizeOfExpNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sSizeOfExpNode_kind;
            __result_obj__381 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value695=_inf_value20)));
            ((exp_536) ? exp_536 = come_decrement_ref_count(exp_536, ((struct sNode*)exp_536)->finalize, ((struct sNode*)exp_536)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value691,sSizeOfExpNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value695) ? __right_value695 = come_decrement_ref_count(__right_value695, ((struct sNode*)__right_value695)->finalize, ((struct sNode*)__right_value695)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__381) ? __result_obj__381 = come_decrement_ref_count(__result_obj__381, ((struct sNode*)__result_obj__381)->finalize, ((struct sNode*)__result_obj__381)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__381;
            ((exp_536) ? exp_536 = come_decrement_ref_count(exp_536, ((struct sNode*)exp_536)->finalize, ((struct sNode*)exp_536)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"typeof")) {
        paren_539=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_539=(_Bool)1;
        }
        is_type_name_flag_540=(_Bool)0;
        {
            p_541=info->p;
            sline_542=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_543=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_543,info)) {
                    is_type_name_flag_540=(_Bool)1;
                }
                (word_543 = come_decrement_ref_count(word_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_541;
            info->sline=sline_542;
        }
        if(        is_type_name_flag_540) {
            multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value697=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_544=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            name_545=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            err_546=multiple_assign_var15->v3;
            /*c*/ come_call_finalizer3(__right_value697,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_546) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_539&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1637, "struct sNode");
            _inf_obj_value21=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(__right_value699=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc_v2(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1637, "struct sTypeOfNode*")),(struct sType*)come_increment_ref_count(type_544),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sTypeOfNode_finalize;
            _inf_value21->clone=(void*)sTypeOfNode_clone;
            _inf_value21->compile=(void*)sTypeOfNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sTypeOfNode_kind;
            __result_obj__384 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value703=_inf_value21)));
            /*c*/ come_call_finalizer3(type_544,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_545 = come_decrement_ref_count(name_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value699,sTypeOfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value703) ? __right_value703 = come_decrement_ref_count(__right_value703, ((struct sNode*)__right_value703)->finalize, ((struct sNode*)__right_value703)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__384) ? __result_obj__384 = come_decrement_ref_count(__result_obj__384, ((struct sNode*)__result_obj__384)->finalize, ((struct sNode*)__result_obj__384)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__384;
            /*c*/ come_call_finalizer3(type_544,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_545 = come_decrement_ref_count(name_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_539) {
                no_comma_549=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj177=exp_548,
                exp_548=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_comma=no_comma_549;
            }
            else {
                __dec_obj178=exp_548,
                exp_548=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            if(            paren_539&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1658, "struct sNode");
            _inf_obj_value22=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value707=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc_v2(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1658, "struct sTypeOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_548),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sTypeOfExpNode_finalize;
            _inf_value22->clone=(void*)sTypeOfExpNode_clone;
            _inf_value22->compile=(void*)sTypeOfExpNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sTypeOfExpNode_kind;
            __result_obj__387 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value711=_inf_value22)));
            ((exp_548) ? exp_548 = come_decrement_ref_count(exp_548, ((struct sNode*)exp_548)->finalize, ((struct sNode*)exp_548)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value707,sTypeOfExpNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value711) ? __right_value711 = come_decrement_ref_count(__right_value711, ((struct sNode*)__right_value711)->finalize, ((struct sNode*)__right_value711)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__387) ? __result_obj__387 = come_decrement_ref_count(__result_obj__387, ((struct sNode*)__result_obj__387)->finalize, ((struct sNode*)__result_obj__387)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__387;
            ((exp_548) ? exp_548 = come_decrement_ref_count(exp_548, ((struct sNode*)exp_548)->finalize, ((struct sNode*)exp_548)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"dynamic_typeof")) {
        paren_551=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_551=(_Bool)1;
        }
        if(        !paren_551) {
            no_comma_553=info->no_comma;
            info->no_comma=(_Bool)1;
            __dec_obj181=exp_552,
            exp_552=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->no_comma=no_comma_553;
        }
        else {
            __dec_obj182=exp_552,
            exp_552=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        }
        if(        paren_551&&*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1689, "struct sNode");
        _inf_obj_value23=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value715=sDynamicTypeOf_initialize((struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc_v2(1, sizeof(struct sDynamicTypeOf)*(1), "21obj.c", 1689, "struct sDynamicTypeOf*")),(struct sNode*)come_increment_ref_count(exp_552),info))));
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value23->clone=(void*)sDynamicTypeOf_clone;
        _inf_value23->compile=(void*)sDynamicTypeOf_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sDynamicTypeOf_kind;
        __result_obj__390 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value719=_inf_value23)));
        ((exp_552) ? exp_552 = come_decrement_ref_count(exp_552, ((struct sNode*)exp_552)->finalize, ((struct sNode*)exp_552)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value715,sDynamicTypeOf_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value719) ? __right_value719 = come_decrement_ref_count(__right_value719, ((struct sNode*)__right_value719)->finalize, ((struct sNode*)__right_value719)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__390) ? __result_obj__390 = come_decrement_ref_count(__result_obj__390, ((struct sNode*)__result_obj__390)->finalize, ((struct sNode*)__result_obj__390)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__390;
        ((exp_552) ? exp_552 = come_decrement_ref_count(exp_552, ((struct sNode*)exp_552)->finalize, ((struct sNode*)exp_552)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    charp_operator_equals(buf,"_Alignof")) {
        paren_555=(_Bool)0;
        if(        *info->p==40) {
            paren_555=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_556=(_Bool)0;
        {
            p_557=info->p;
            sline_558=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_559=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_559,info)) {
                    is_type_name_flag_556=(_Bool)1;
                }
                (word_559 = come_decrement_ref_count(word_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_557;
            info->sline=sline_558;
        }
        if(        is_type_name_flag_556) {
            multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value721=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_560=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
            name_561=(char*)come_increment_ref_count(multiple_assign_var16->v2);
            err_562=multiple_assign_var16->v3;
            /*c*/ come_call_finalizer3(__right_value721,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_562) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            if(            paren_555&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value24=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1730, "struct sNode");
            _inf_obj_value24=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value723=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc_v2(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1730, "struct sAlignOfNode*")),(struct sType*)come_increment_ref_count(type_560),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sAlignOfNode_finalize;
            _inf_value24->clone=(void*)sAlignOfNode_clone;
            _inf_value24->compile=(void*)sAlignOfNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sAlignOfNode_kind;
            __result_obj__393 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value727=_inf_value24)));
            /*c*/ come_call_finalizer3(type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_561 = come_decrement_ref_count(name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value723,sAlignOfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value727) ? __right_value727 = come_decrement_ref_count(__right_value727, ((struct sNode*)__right_value727)->finalize, ((struct sNode*)__right_value727)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__393) ? __result_obj__393 = come_decrement_ref_count(__result_obj__393, ((struct sNode*)__result_obj__393)->finalize, ((struct sNode*)__result_obj__393)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__393;
            /*c*/ come_call_finalizer3(type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_561 = come_decrement_ref_count(name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_555) {
                no_comma_565=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj187=exp_564,
                exp_564=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_comma=no_comma_565;
            }
            else {
                __dec_obj188=exp_564,
                exp_564=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            _inf_value25=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1744, "struct sNode");
            _inf_obj_value25=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value731=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1744, "struct sAlignOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_564),info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value25->clone=(void*)sAlignOfExpNode_clone;
            _inf_value25->compile=(void*)sAlignOfExpNode_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sAlignOfExpNode_kind;
            __result_obj__396 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value735=_inf_value25)));
            ((exp_564) ? exp_564 = come_decrement_ref_count(exp_564, ((struct sNode*)exp_564)->finalize, ((struct sNode*)exp_564)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value731,sAlignOfExpNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value735) ? __right_value735 = come_decrement_ref_count(__right_value735, ((struct sNode*)__right_value735)->finalize, ((struct sNode*)__right_value735)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__396) ? __result_obj__396 = come_decrement_ref_count(__result_obj__396, ((struct sNode*)__result_obj__396)->finalize, ((struct sNode*)__result_obj__396)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__396;
            ((exp_564) ? exp_564 = come_decrement_ref_count(exp_564, ((struct sNode*)exp_564)->finalize, ((struct sNode*)exp_564)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"__alignof__")) {
        paren_567=(_Bool)0;
        if(        *info->p==40) {
            paren_567=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_568=(_Bool)0;
        {
            p_569=info->p;
            sline_570=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_571=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_571,info)) {
                    is_type_name_flag_568=(_Bool)1;
                }
                (word_571 = come_decrement_ref_count(word_571, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_569;
            info->sline=sline_570;
        }
        if(        is_type_name_flag_568) {
            multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value737=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_572=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
            name_573=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            err_574=multiple_assign_var17->v3;
            /*c*/ come_call_finalizer3(__right_value737,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_574) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_567&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value26=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1785, "struct sNode");
            _inf_obj_value26=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value739=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc_v2(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1785, "struct sAlignOfNode2*")),(struct sType*)come_increment_ref_count(type_572),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value26->clone=(void*)sAlignOfNode2_clone;
            _inf_value26->compile=(void*)sAlignOfNode2_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfNode2_kind;
            __result_obj__399 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value743=_inf_value26)));
            /*c*/ come_call_finalizer3(type_572,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_573 = come_decrement_ref_count(name_573, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value739,sAlignOfNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value743) ? __right_value743 = come_decrement_ref_count(__right_value743, ((struct sNode*)__right_value743)->finalize, ((struct sNode*)__right_value743)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__399) ? __result_obj__399 = come_decrement_ref_count(__result_obj__399, ((struct sNode*)__result_obj__399)->finalize, ((struct sNode*)__result_obj__399)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__399;
            /*c*/ come_call_finalizer3(type_572,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_573 = come_decrement_ref_count(name_573, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_567) {
                no_comma_577=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj193=exp_576,
                exp_576=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_comma=no_comma_577;
            }
            else {
                __dec_obj194=exp_576,
                exp_576=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            _inf_value27=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1799, "struct sNode");
            _inf_obj_value27=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value747=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1799, "struct sAlignOfExpNode2*")),(struct sNode*)come_increment_ref_count(exp_576),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value27->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value27->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignOfExpNode2_kind;
            __result_obj__402 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value751=_inf_value27)));
            ((exp_576) ? exp_576 = come_decrement_ref_count(exp_576, ((struct sNode*)exp_576)->finalize, ((struct sNode*)exp_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value747,sAlignOfExpNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value751) ? __right_value751 = come_decrement_ref_count(__right_value751, ((struct sNode*)__right_value751)->finalize, ((struct sNode*)__right_value751)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__402) ? __result_obj__402 = come_decrement_ref_count(__result_obj__402, ((struct sNode*)__result_obj__402)->finalize, ((struct sNode*)__result_obj__402)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__402;
            ((exp_576) ? exp_576 = come_decrement_ref_count(exp_576, ((struct sNode*)exp_576)->finalize, ((struct sNode*)exp_576)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"_Alignas")) {
        expected_next_character(40,info);
        is_type_name_flag_579=(_Bool)0;
        {
            p_580=info->p;
            sline_581=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_582=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_582,info)) {
                    is_type_name_flag_579=(_Bool)1;
                }
                (word_582 = come_decrement_ref_count(word_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_580;
            info->sline=sline_581;
        }
        if(        is_type_name_flag_579) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value753=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_583=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            name_584=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_585=multiple_assign_var18->v3;
            /*c*/ come_call_finalizer3(__right_value753,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_585) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            _inf_value28=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1832, "struct sNode");
            _inf_obj_value28=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(__right_value755=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc_v2(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1832, "struct sAlignAsNode*")),(struct sType*)come_increment_ref_count(type_583),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignAsNode_finalize;
            _inf_value28->clone=(void*)sAlignAsNode_clone;
            _inf_value28->compile=(void*)sAlignAsNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignAsNode_kind;
            __result_obj__405 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value759=_inf_value28)));
            /*c*/ come_call_finalizer3(type_583,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_584 = come_decrement_ref_count(name_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value755,sAlignAsNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value759) ? __right_value759 = come_decrement_ref_count(__right_value759, ((struct sNode*)__right_value759)->finalize, ((struct sNode*)__right_value759)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__405) ? __result_obj__405 = come_decrement_ref_count(__result_obj__405, ((struct sNode*)__result_obj__405)->finalize, ((struct sNode*)__result_obj__405)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__405;
            /*c*/ come_call_finalizer3(type_583,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_584 = come_decrement_ref_count(name_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            exp_587=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value29=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1839, "struct sNode");
            _inf_obj_value29=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value762=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc_v2(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1839, "struct sAlignAsExpNode*")),(struct sNode*)come_increment_ref_count(exp_587),info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sAlignAsExpNode_finalize;
            _inf_value29->clone=(void*)sAlignAsExpNode_clone;
            _inf_value29->compile=(void*)sAlignAsExpNode_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sAlignAsExpNode_kind;
            __result_obj__408 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value766=_inf_value29)));
            ((exp_587) ? exp_587 = come_decrement_ref_count(exp_587, ((struct sNode*)exp_587)->finalize, ((struct sNode*)exp_587)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value762,sAlignAsExpNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value766) ? __right_value766 = come_decrement_ref_count(__right_value766, ((struct sNode*)__right_value766)->finalize, ((struct sNode*)__right_value766)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__408) ? __result_obj__408 = come_decrement_ref_count(__result_obj__408, ((struct sNode*)__result_obj__408)->finalize, ((struct sNode*)__result_obj__408)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__408;
            ((exp_587) ? exp_587 = come_decrement_ref_count(exp_587, ((struct sNode*)exp_587)->finalize, ((struct sNode*)exp_587)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    __result_obj__409 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value767=string_node_v20(buf,head,head_sline,info))));
    ((__right_value767) ? __right_value767 = come_decrement_ref_count(__right_value767, ((struct sNode*)__right_value767)->finalize, ((struct sNode*)__right_value767)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__409) ? __result_obj__409 = come_decrement_ref_count(__result_obj__409, ((struct sNode*)__result_obj__409)->finalize, ((struct sNode*)__result_obj__409)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__409;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
struct sNewNode* __result_obj__319;
void* __right_value550 = (void*)0;
struct sNewNode* result_483;
void* __right_value551 = (void*)0;
char* __dec_obj138;
void* __right_value552 = (void*)0;
struct sType* __dec_obj139;
void* __right_value563 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj145;
struct sNewNode* __result_obj__326;
    if(    self==(void*)0) {
        __result_obj__319 = (void*)0;
        return __result_obj__319;
    }
    result_483=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode*"));
    if(    self!=((void*)0)) {
        result_483->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj138=result_483->sname,
        result_483->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewNode_clone", 5, "char*"));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_483->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj139=result_483->type,
        result_483->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj145=result_483->initializer,
        result_483->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer));
        /*b*/ come_call_finalizer3(__dec_obj145,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__326 = result_483;
    /*c*/ come_call_finalizer3(result_483,sNewNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__326;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__320;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_484;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_485;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__325;
    if(    self==((void*)0)) {
        __result_obj__320 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__320,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__320;
    }
    result_484=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1024, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_485=self->head;
    while(    it_485!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_484,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_485->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_484,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_485->item)));
        }
        it_485=it_485->next;
    }
    __result_obj__325 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_484);
    /*c*/ come_call_finalizer3(result_484,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__325,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__325;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__321;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__321 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__321,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__321;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value555 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_486;
struct tuple2$2char$phsNode$ph* __dec_obj140;
void* __right_value556 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_487;
struct tuple2$2char$phsNode$ph* __dec_obj141;
void* __right_value557 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_488;
struct tuple2$2char$phsNode$ph* __dec_obj142;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__322;
    if(    self->len==0) {
        litem_486=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value555=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_486->prev=((void*)0);
        litem_486->next=((void*)0);
        __dec_obj140=litem_486->item,
        litem_486->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj140,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_486;
        self->head=litem_486;
    }
    else if(    self->len==1) {
        litem_487=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value556=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_487->prev=self->head;
        litem_487->next=((void*)0);
        __dec_obj141=litem_487->item,
        litem_487->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj141,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_487;
        self->head->next=litem_487;
    }
    else {
        litem_488=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value557=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_488->prev=self->tail;
        litem_488->next=((void*)0);
        __dec_obj142=litem_488->item,
        litem_488->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj142,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_488;
        self->tail=litem_488;
    }
    self->len++;
    __result_obj__322 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__322;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__323;
void* __right_value558 = (void*)0;
struct tuple2$2char$phsNode$ph* result_489;
void* __right_value559 = (void*)0;
char* __dec_obj143;
void* __right_value560 = (void*)0;
struct sNode* __dec_obj144;
struct tuple2$2char$phsNode$ph* __result_obj__324;
    if(    self==(void*)0) {
        __result_obj__323 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__323,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__323;
    }
    result_489=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj143=result_489->v1,
        result_489->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj144=result_489->v2,
        result_489->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__324 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_489);
    /*c*/ come_call_finalizer3(result_489,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__324,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__324;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_496;
    result_496=0;
    result_496+=int_get_hash_key(((int)self->v1));
    result_496+=int_get_hash_key(((int)self->v2));
    return result_496;
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

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj147;
struct sNode* __dec_obj148;
struct tuple2$2char$phsNode$ph* __result_obj__328;
    __dec_obj147=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj148=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__328 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__328,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__328;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
struct sDeleteNode* __result_obj__335;
void* __right_value597 = (void*)0;
struct sDeleteNode* result_499;
void* __right_value598 = (void*)0;
char* __dec_obj149;
void* __right_value599 = (void*)0;
struct sNode* __dec_obj150;
struct sDeleteNode* __result_obj__336;
    if(    self==(void*)0) {
        __result_obj__335 = (void*)0;
        return __result_obj__335;
    }
    result_499=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc_v2(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode*"));
    if(    self!=((void*)0)) {
        result_499->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj149=result_499->sname,
        result_499->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDeleteNode_clone", 5, "char*"));
        __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_499->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj150=result_499->node,
        result_499->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__336 = result_499;
    /*c*/ come_call_finalizer3(result_499,sDeleteNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__336;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
struct sBorrowNode* __result_obj__338;
void* __right_value604 = (void*)0;
struct sBorrowNode* result_501;
void* __right_value605 = (void*)0;
char* __dec_obj151;
void* __right_value606 = (void*)0;
struct sNode* __dec_obj152;
struct sBorrowNode* __result_obj__339;
    if(    self==(void*)0) {
        __result_obj__338 = (void*)0;
        return __result_obj__338;
    }
    result_501=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc_v2(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode*"));
    if(    self!=((void*)0)) {
        result_501->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj151=result_501->sname,
        result_501->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBorrowNode_clone", 5, "char*"));
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_501->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj152=result_501->node,
        result_501->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__339 = result_501;
    /*c*/ come_call_finalizer3(result_501,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__339;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
struct sCloneNode* __result_obj__341;
void* __right_value611 = (void*)0;
struct sCloneNode* result_503;
void* __right_value612 = (void*)0;
char* __dec_obj153;
void* __right_value613 = (void*)0;
struct sNode* __dec_obj154;
struct sCloneNode* __result_obj__342;
    if(    self==(void*)0) {
        __result_obj__341 = (void*)0;
        return __result_obj__341;
    }
    result_503=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc_v2(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode*"));
    if(    self!=((void*)0)) {
        result_503->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj153=result_503->sname,
        result_503->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCloneNode_clone", 5, "char*"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_503->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj154=result_503->node,
        result_503->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__342 = result_503;
    /*c*/ come_call_finalizer3(result_503,sCloneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__342;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
struct sDupeNode* __result_obj__344;
void* __right_value618 = (void*)0;
struct sDupeNode* result_505;
void* __right_value619 = (void*)0;
char* __dec_obj155;
void* __right_value620 = (void*)0;
struct sNode* __dec_obj156;
struct sDupeNode* __result_obj__345;
    if(    self==(void*)0) {
        __result_obj__344 = (void*)0;
        return __result_obj__344;
    }
    result_505=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc_v2(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode*"));
    if(    self!=((void*)0)) {
        result_505->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_505->sname,
        result_505->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDupeNode_clone", 5, "char*"));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_505->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj156=result_505->node,
        result_505->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__345 = result_505;
    /*c*/ come_call_finalizer3(result_505,sDupeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__345;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
struct sDummyHeapNode* __result_obj__347;
void* __right_value625 = (void*)0;
struct sDummyHeapNode* result_507;
void* __right_value626 = (void*)0;
char* __dec_obj157;
void* __right_value627 = (void*)0;
struct sNode* __dec_obj158;
struct sDummyHeapNode* __result_obj__348;
    if(    self==(void*)0) {
        __result_obj__347 = (void*)0;
        return __result_obj__347;
    }
    result_507=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc_v2(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode*"));
    if(    self!=((void*)0)) {
        result_507->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj157=result_507->sname,
        result_507->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDummyHeapNode_clone", 5, "char*"));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_507->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj158=result_507->node,
        result_507->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__348 = result_507;
    /*c*/ come_call_finalizer3(result_507,sDummyHeapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__348;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
struct sGCIncNode* __result_obj__350;
void* __right_value632 = (void*)0;
struct sGCIncNode* result_509;
void* __right_value633 = (void*)0;
char* __dec_obj159;
void* __right_value634 = (void*)0;
struct sNode* __dec_obj160;
struct sGCIncNode* __result_obj__351;
    if(    self==(void*)0) {
        __result_obj__350 = (void*)0;
        return __result_obj__350;
    }
    result_509=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc_v2(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode*"));
    if(    self!=((void*)0)) {
        result_509->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj159=result_509->sname,
        result_509->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCIncNode_clone", 5, "char*"));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_509->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj160=result_509->node,
        result_509->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__351 = result_509;
    /*c*/ come_call_finalizer3(result_509,sGCIncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__351;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
struct sGCDecNode* __result_obj__353;
void* __right_value639 = (void*)0;
struct sGCDecNode* result_511;
void* __right_value640 = (void*)0;
char* __dec_obj161;
void* __right_value641 = (void*)0;
struct sNode* __dec_obj162;
struct sGCDecNode* __result_obj__354;
    if(    self==(void*)0) {
        __result_obj__353 = (void*)0;
        return __result_obj__353;
    }
    result_511=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc_v2(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode*"));
    if(    self!=((void*)0)) {
        result_511->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_511->sname,
        result_511->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCDecNode_clone", 5, "char*"));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_511->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj162=result_511->node,
        result_511->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__354 = result_511;
    /*c*/ come_call_finalizer3(result_511,sGCDecNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__354;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
struct sGCDecNoFreeNode* __result_obj__356;
void* __right_value646 = (void*)0;
struct sGCDecNoFreeNode* result_513;
void* __right_value647 = (void*)0;
char* __dec_obj163;
void* __right_value648 = (void*)0;
struct sNode* __dec_obj164;
struct sGCDecNoFreeNode* __result_obj__357;
    if(    self==(void*)0) {
        __result_obj__356 = (void*)0;
        return __result_obj__356;
    }
    result_513=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "struct sGCDecNoFreeNode*"));
    if(    self!=((void*)0)) {
        result_513->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj163=result_513->sname,
        result_513->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCDecNoFreeNode_clone", 5, "char*"));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_513->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj164=result_513->node,
        result_513->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__357 = result_513;
    /*c*/ come_call_finalizer3(result_513,sGCDecNoFreeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__357;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
struct sIsHeap* __result_obj__360;
void* __right_value658 = (void*)0;
struct sIsHeap* result_519;
void* __right_value659 = (void*)0;
char* __dec_obj165;
void* __right_value660 = (void*)0;
struct sType* __dec_obj166;
struct sIsHeap* __result_obj__361;
    if(    self==(void*)0) {
        __result_obj__360 = (void*)0;
        return __result_obj__360;
    }
    result_519=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc_v2(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap*"));
    if(    self!=((void*)0)) {
        result_519->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj165=result_519->sname,
        result_519->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIsHeap_clone", 5, "char*"));
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_519->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj166=result_519->type,
        result_519->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj166,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__361 = result_519;
    /*c*/ come_call_finalizer3(result_519,sIsHeap_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__361;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
struct sIsPointer* __result_obj__363;
void* __right_value666 = (void*)0;
struct sIsPointer* result_524;
void* __right_value667 = (void*)0;
char* __dec_obj167;
void* __right_value668 = (void*)0;
struct sType* __dec_obj168;
struct sIsPointer* __result_obj__364;
    if(    self==(void*)0) {
        __result_obj__363 = (void*)0;
        return __result_obj__363;
    }
    result_524=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc_v2(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "struct sIsPointer*"));
    if(    self!=((void*)0)) {
        result_524->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj167=result_524->sname,
        result_524->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIsPointer_clone", 5, "char*"));
        __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_524->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj168=result_524->type,
        result_524->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__364 = result_524;
    /*c*/ come_call_finalizer3(result_524,sIsPointer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__364;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
struct sSizeOfNode* __result_obj__376;
void* __right_value684 = (void*)0;
struct sSizeOfNode* result_535;
void* __right_value685 = (void*)0;
char* __dec_obj169;
void* __right_value686 = (void*)0;
struct sType* __dec_obj170;
struct sSizeOfNode* __result_obj__377;
    if(    self==(void*)0) {
        __result_obj__376 = (void*)0;
        return __result_obj__376;
    }
    result_535=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc_v2(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode*"));
    if(    self!=((void*)0)) {
        result_535->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj169=result_535->sname,
        result_535->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSizeOfNode_clone", 5, "char*"));
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_535->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj170=result_535->type,
        result_535->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj170,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__377 = result_535;
    /*c*/ come_call_finalizer3(result_535,sSizeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__377;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
struct sSizeOfExpNode* __result_obj__379;
void* __right_value692 = (void*)0;
struct sSizeOfExpNode* result_538;
void* __right_value693 = (void*)0;
char* __dec_obj173;
void* __right_value694 = (void*)0;
struct sNode* __dec_obj174;
struct sSizeOfExpNode* __result_obj__380;
    if(    self==(void*)0) {
        __result_obj__379 = (void*)0;
        return __result_obj__379;
    }
    result_538=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc_v2(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode*"));
    if(    self!=((void*)0)) {
        result_538->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj173=result_538->sname,
        result_538->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSizeOfExpNode_clone", 5, "char*"));
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_538->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj174=result_538->exp,
        result_538->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__380 = result_538;
    /*c*/ come_call_finalizer3(result_538,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__380;
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
struct sTypeOfNode* __result_obj__382;
void* __right_value700 = (void*)0;
struct sTypeOfNode* result_547;
void* __right_value701 = (void*)0;
char* __dec_obj175;
void* __right_value702 = (void*)0;
struct sType* __dec_obj176;
struct sTypeOfNode* __result_obj__383;
    if(    self==(void*)0) {
        __result_obj__382 = (void*)0;
        return __result_obj__382;
    }
    result_547=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc_v2(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "struct sTypeOfNode*"));
    if(    self!=((void*)0)) {
        result_547->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj175=result_547->sname,
        result_547->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTypeOfNode_clone", 5, "char*"));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_547->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj176=result_547->type,
        result_547->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj176,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__383 = result_547;
    /*c*/ come_call_finalizer3(result_547,sTypeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__383;
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
struct sTypeOfExpNode* __result_obj__385;
void* __right_value708 = (void*)0;
struct sTypeOfExpNode* result_550;
void* __right_value709 = (void*)0;
char* __dec_obj179;
void* __right_value710 = (void*)0;
struct sNode* __dec_obj180;
struct sTypeOfExpNode* __result_obj__386;
    if(    self==(void*)0) {
        __result_obj__385 = (void*)0;
        return __result_obj__385;
    }
    result_550=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc_v2(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "struct sTypeOfExpNode*"));
    if(    self!=((void*)0)) {
        result_550->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj179=result_550->sname,
        result_550->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTypeOfExpNode_clone", 5, "char*"));
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_550->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj180=result_550->exp,
        result_550->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__386 = result_550;
    /*c*/ come_call_finalizer3(result_550,sTypeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__386;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self){
struct sDynamicTypeOf* __result_obj__388;
void* __right_value716 = (void*)0;
struct sDynamicTypeOf* result_554;
void* __right_value717 = (void*)0;
char* __dec_obj183;
void* __right_value718 = (void*)0;
struct sNode* __dec_obj184;
struct sDynamicTypeOf* __result_obj__389;
    if(    self==(void*)0) {
        __result_obj__388 = (void*)0;
        return __result_obj__388;
    }
    result_554=(struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc_v2(1, sizeof(struct sDynamicTypeOf)*(1), "sDynamicTypeOf_clone", 3, "struct sDynamicTypeOf*"));
    if(    self!=((void*)0)) {
        result_554->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj183=result_554->sname,
        result_554->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDynamicTypeOf_clone", 5, "char*"));
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_554->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj184=result_554->exp,
        result_554->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__389 = result_554;
    /*c*/ come_call_finalizer3(result_554,sDynamicTypeOf_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__389;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
struct sAlignOfNode* __result_obj__391;
void* __right_value724 = (void*)0;
struct sAlignOfNode* result_563;
void* __right_value725 = (void*)0;
char* __dec_obj185;
void* __right_value726 = (void*)0;
struct sType* __dec_obj186;
struct sAlignOfNode* __result_obj__392;
    if(    self==(void*)0) {
        __result_obj__391 = (void*)0;
        return __result_obj__391;
    }
    result_563=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc_v2(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode*"));
    if(    self!=((void*)0)) {
        result_563->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj185=result_563->sname,
        result_563->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfNode_clone", 5, "char*"));
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_563->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj186=result_563->type,
        result_563->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__392 = result_563;
    /*c*/ come_call_finalizer3(result_563,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__392;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
struct sAlignOfExpNode* __result_obj__394;
void* __right_value732 = (void*)0;
struct sAlignOfExpNode* result_566;
void* __right_value733 = (void*)0;
char* __dec_obj189;
void* __right_value734 = (void*)0;
struct sNode* __dec_obj190;
struct sAlignOfExpNode* __result_obj__395;
    if(    self==(void*)0) {
        __result_obj__394 = (void*)0;
        return __result_obj__394;
    }
    result_566=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode*"));
    if(    self!=((void*)0)) {
        result_566->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj189=result_566->sname,
        result_566->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfExpNode_clone", 5, "char*"));
        __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_566->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj190=result_566->exp,
        result_566->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__395 = result_566;
    /*c*/ come_call_finalizer3(result_566,sAlignOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__395;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
struct sAlignOfNode2* __result_obj__397;
void* __right_value740 = (void*)0;
struct sAlignOfNode2* result_575;
void* __right_value741 = (void*)0;
char* __dec_obj191;
void* __right_value742 = (void*)0;
struct sType* __dec_obj192;
struct sAlignOfNode2* __result_obj__398;
    if(    self==(void*)0) {
        __result_obj__397 = (void*)0;
        return __result_obj__397;
    }
    result_575=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc_v2(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2*"));
    if(    self!=((void*)0)) {
        result_575->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj191=result_575->sname,
        result_575->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfNode2_clone", 5, "char*"));
        __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_575->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj192=result_575->type,
        result_575->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj192,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__398 = result_575;
    /*c*/ come_call_finalizer3(result_575,sAlignOfNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__398;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
struct sAlignOfExpNode2* __result_obj__400;
void* __right_value748 = (void*)0;
struct sAlignOfExpNode2* result_578;
void* __right_value749 = (void*)0;
char* __dec_obj195;
void* __right_value750 = (void*)0;
struct sNode* __dec_obj196;
struct sAlignOfExpNode2* __result_obj__401;
    if(    self==(void*)0) {
        __result_obj__400 = (void*)0;
        return __result_obj__400;
    }
    result_578=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2*"));
    if(    self!=((void*)0)) {
        result_578->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj195=result_578->sname,
        result_578->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfExpNode2_clone", 5, "char*"));
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_578->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj196=result_578->exp,
        result_578->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__401 = result_578;
    /*c*/ come_call_finalizer3(result_578,sAlignOfExpNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__401;
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
struct sAlignAsNode* __result_obj__403;
void* __right_value756 = (void*)0;
struct sAlignAsNode* result_586;
void* __right_value757 = (void*)0;
char* __dec_obj197;
void* __right_value758 = (void*)0;
struct sType* __dec_obj198;
struct sAlignAsNode* __result_obj__404;
    if(    self==(void*)0) {
        __result_obj__403 = (void*)0;
        return __result_obj__403;
    }
    result_586=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc_v2(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode*"));
    if(    self!=((void*)0)) {
        result_586->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj197=result_586->sname,
        result_586->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignAsNode_clone", 5, "char*"));
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_586->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj198=result_586->type,
        result_586->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj198,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__404 = result_586;
    /*c*/ come_call_finalizer3(result_586,sAlignAsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__404;
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
struct sAlignAsExpNode* __result_obj__406;
void* __right_value763 = (void*)0;
struct sAlignAsExpNode* result_588;
void* __right_value764 = (void*)0;
char* __dec_obj199;
void* __right_value765 = (void*)0;
struct sNode* __dec_obj200;
struct sAlignAsExpNode* __result_obj__407;
    if(    self==(void*)0) {
        __result_obj__406 = (void*)0;
        return __result_obj__406;
    }
    result_588=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc_v2(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode*"));
    if(    self!=((void*)0)) {
        result_588->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj199=result_588->sname,
        result_588->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignAsExpNode_clone", 5, "char*"));
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_588->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj200=result_588->exp,
        result_588->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj200 ? __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__407 = result_588;
    /*c*/ come_call_finalizer3(result_588,sAlignAsExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__407;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value768 = (void*)0;
struct sNode* __result_obj__410;
void* __right_value769 = (void*)0;
struct sNode* __result_obj__411;
void* __right_value770 = (void*)0;
struct sNode* __result_obj__412;
_Bool come_c_589;
void* __right_value771 = (void*)0;
struct sNode* __result_obj__413;
void* __right_value772 = (void*)0;
struct sNode* __result_obj__414;
    if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result_obj__410 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value768=create_nothing_node(info))));
            ((__right_value768) ? __right_value768 = come_decrement_ref_count(__right_value768, ((struct sNode*)__right_value768)->finalize, ((struct sNode*)__right_value768)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__410) ? __result_obj__410 = come_decrement_ref_count(__result_obj__410, ((struct sNode*)__result_obj__410)->finalize, ((struct sNode*)__result_obj__410)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__410;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result_obj__411 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value769=create_nothing_node(info))));
            ((__right_value769) ? __right_value769 = come_decrement_ref_count(__right_value769, ((struct sNode*)__right_value769)->finalize, ((struct sNode*)__right_value769)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__411) ? __result_obj__411 = come_decrement_ref_count(__result_obj__411, ((struct sNode*)__result_obj__411)->finalize, ((struct sNode*)__result_obj__411)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__411;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result_obj__412 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value770=create_nothing_node(info))));
            ((__right_value770) ? __right_value770 = come_decrement_ref_count(__right_value770, ((struct sNode*)__right_value770)->finalize, ((struct sNode*)__right_value770)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__412) ? __result_obj__412 = come_decrement_ref_count(__result_obj__412, ((struct sNode*)__result_obj__412)->finalize, ((struct sNode*)__result_obj__412)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__412;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(            *info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c_589=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c_589;
            }
            else {
                gComeC=(_Bool)1;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
        __result_obj__413 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value771=create_nothing_node(info))));
        ((__right_value771) ? __right_value771 = come_decrement_ref_count(__right_value771, ((struct sNode*)__right_value771)->finalize, ((struct sNode*)__right_value771)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__413) ? __result_obj__413 = come_decrement_ref_count(__result_obj__413, ((struct sNode*)__result_obj__413)->finalize, ((struct sNode*)__result_obj__413)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__413;
    }
    __result_obj__414 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value772=top_level_v93(buf,head,head_sline,info))));
    ((__right_value772) ? __right_value772 = come_decrement_ref_count(__right_value772, ((struct sNode*)__right_value772)->finalize, ((struct sNode*)__right_value772)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__414) ? __result_obj__414 = come_decrement_ref_count(__result_obj__414, ((struct sNode*)__result_obj__414)->finalize, ((struct sNode*)__result_obj__414)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__414;
}

struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info){
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sNode* _inf_value30;
struct sImplementsNode* _inf_obj_value30;
void* __right_value779 = (void*)0;
struct sNode* __result_obj__417;
    _inf_value30=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1923, "struct sNode");
    _inf_obj_value30=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value774=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1923, "struct sImplementsNode*")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
    _inf_value30->_protocol_obj=_inf_obj_value30;
    _inf_value30->finalize=(void*)sImplementsNode_finalize;
    _inf_value30->clone=(void*)sImplementsNode_clone;
    _inf_value30->compile=(void*)sImplementsNode_compile;
    _inf_value30->sline=(void*)sNodeBase_sline;
    _inf_value30->sline_real=(void*)sNodeBase_sline_real;
    _inf_value30->sname=(void*)sNodeBase_sname;
    _inf_value30->terminated=(void*)sNodeBase_terminated;
    _inf_value30->kind=(void*)sImplementsNode_kind;
    __result_obj__417 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value779=_inf_value30)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(inf_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value774,sImplementsNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value779) ? __right_value779 = come_decrement_ref_count(__right_value779, ((struct sNode*)__right_value779)->finalize, ((struct sNode*)__right_value779)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__417) ? __result_obj__417 = come_decrement_ref_count(__result_obj__417, ((struct sNode*)__result_obj__417)->finalize, ((struct sNode*)__result_obj__417)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__417;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
struct sImplementsNode* __result_obj__415;
void* __right_value775 = (void*)0;
struct sImplementsNode* result_590;
void* __right_value776 = (void*)0;
char* __dec_obj201;
void* __right_value777 = (void*)0;
struct sNode* __dec_obj202;
void* __right_value778 = (void*)0;
struct sType* __dec_obj203;
struct sImplementsNode* __result_obj__416;
    if(    self==(void*)0) {
        __result_obj__415 = (void*)0;
        return __result_obj__415;
    }
    result_590=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode*"));
    if(    self!=((void*)0)) {
        result_590->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj201=result_590->sname,
        result_590->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sImplementsNode_clone", 5, "char*"));
        __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_590->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj202=result_590->obj_exp,
        result_590->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
        (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj203=result_590->inf_type,
        result_590->inf_type=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
        /*b*/ come_call_finalizer3(__dec_obj203,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__416 = result_590;
    /*c*/ come_call_finalizer3(result_590,sImplementsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__416;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __right_value780 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* type3_591=0;
char* name2_592=0;
_Bool err_593=0;
void* __right_value781 = (void*)0;
struct sType* inf_type_594;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sNode* _inf_value31;
struct sImplementsNode* _inf_obj_value31;
void* __right_value784 = (void*)0;
struct sNode* __result_obj__418;
void* __right_value785 = (void*)0;
struct sNode* __result_obj__419;
    if(    !gComeC&&parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value780=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_591=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
        name2_592=(char*)come_increment_ref_count(multiple_assign_var19->v2);
        err_593=multiple_assign_var19->v3;
        /*c*/ come_call_finalizer3(__right_value780,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_593) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_594=(struct sType*)come_increment_ref_count(sType_clone(type3_591));
        _inf_value31=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1940, "struct sNode");
        _inf_obj_value31=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value783=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1940, "struct sImplementsNode*")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_594),info))));
        _inf_value31->_protocol_obj=_inf_obj_value31;
        _inf_value31->finalize=(void*)sImplementsNode_finalize;
        _inf_value31->clone=(void*)sImplementsNode_clone;
        _inf_value31->compile=(void*)sImplementsNode_compile;
        _inf_value31->sline=(void*)sNodeBase_sline;
        _inf_value31->sline_real=(void*)sNodeBase_sline_real;
        _inf_value31->sname=(void*)sNodeBase_sname;
        _inf_value31->terminated=(void*)sNodeBase_terminated;
        _inf_value31->kind=(void*)sImplementsNode_kind;
        __result_obj__418 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value784=_inf_value31)));
        /*c*/ come_call_finalizer3(type3_591,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name2_592 = come_decrement_ref_count(name2_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(inf_type_594,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value783,sImplementsNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value784) ? __right_value784 = come_decrement_ref_count(__right_value784, ((struct sNode*)__right_value784)->finalize, ((struct sNode*)__right_value784)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__418) ? __result_obj__418 = come_decrement_ref_count(__result_obj__418, ((struct sNode*)__result_obj__418)->finalize, ((struct sNode*)__result_obj__418)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__418;
        /*c*/ come_call_finalizer3(type3_591,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name2_592 = come_decrement_ref_count(name2_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(inf_type_594,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==64) {
        info->p++;
        while(        xisalnum(*info->p)||*info->p==95) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result_obj__419 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value785=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__right_value785) ? __right_value785 = come_decrement_ref_count(__right_value785, ((struct sNode*)__right_value785)->finalize, ((struct sNode*)__right_value785)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__419) ? __result_obj__419 = come_decrement_ref_count(__result_obj__419, ((struct sNode*)__result_obj__419)->finalize, ((struct sNode*)__result_obj__419)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__419;
}

