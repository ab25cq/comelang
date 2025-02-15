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

extern struct __sFILE* __stdinp;
extern struct __sFILE* __stdoutp;
extern struct __sFILE* __stderrp;
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
    unsigned long  long ri_reserved[12];
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

typedef __builtin_va_list va_list;

typedef __builtin_va_list __gnuc_va_list;

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
struct map$2charphvoidph
{
    char** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

// source head

// header function
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);
void clearerr(struct __sFILE* anonymous_var_nameX35);
int fclose(struct __sFILE* anonymous_var_nameX36);
int feof(struct __sFILE* anonymous_var_nameX37);
int ferror(struct __sFILE* anonymous_var_nameX38);
int fflush(struct __sFILE* anonymous_var_nameX39);
int fgetc(struct __sFILE* anonymous_var_nameX40);
int fgetpos(struct __sFILE* anonymous_var_nameX41, long  long* anonymous_var_nameX42);
char* fgets(char* anonymous_var_nameX43, int anonymous_var_nameX44, struct __sFILE* anonymous_var_nameX45);
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* anonymous_var_nameX46, const char* anonymous_var_nameX47, ...);
int fputc(int anonymous_var_nameX48, struct __sFILE* anonymous_var_nameX49);
int fputs(const char* anonymous_var_nameX50, struct __sFILE* anonymous_var_nameX51);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX52, const char* anonymous_var_nameX53, struct __sFILE* anonymous_var_nameX54);
int fscanf(struct __sFILE* anonymous_var_nameX55, const char* anonymous_var_nameX56, ...);
int fseek(struct __sFILE* anonymous_var_nameX57, long anonymous_var_nameX58, int anonymous_var_nameX59);
int fsetpos(struct __sFILE* anonymous_var_nameX60, const long  long* anonymous_var_nameX61);
long ftell(struct __sFILE* anonymous_var_nameX62);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* anonymous_var_nameX63);
int getchar();
__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommended that you use fgets(3) instead.")))

 char* gets(char* anonymous_var_nameX64);
void perror(const char* anonymous_var_nameX65);
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
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void malloc_type_free(void* ptr, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __count, unsigned long  int __size);
void free(void* anonymous_var_nameX205);
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
void* valloc(unsigned long  int anonymous_var_nameX206);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
int abs(int anonymous_var_nameX207);
int atexit(void (*anonymous_lambda_var_nameZ6)());
double atof(const char* anonymous_var_nameX208);
int atoi(const char* anonymous_var_nameX209);
long atol(const char* anonymous_var_nameX210);
long long atoll(const char* anonymous_var_nameX211);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX214, int anonymous_var_nameX215);
void exit(int anonymous_var_nameX216);
char* getenv(const char* anonymous_var_nameX217);
long labs(long anonymous_var_nameX218);
struct anonymous_typeX6 ldiv(long anonymous_var_nameX219, long anonymous_var_nameX220);
long long llabs(long  long anonymous_var_nameX221);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX222, long  long anonymous_var_nameX223);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX224, const char* anonymous_var_nameX225, unsigned long  int anonymous_var_nameX226);
int mbtowc(int* anonymous_var_nameX227, const char* anonymous_var_nameX228, unsigned long  int anonymous_var_nameX229);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
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
int atexit_b(void (*anonymous_lambda_var_nameZ7)());
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
void abort();
int printf(const char* anonymous_var_nameX373, ...);
int isalnum(int anonymous_var_nameX388);
int isalpha(int anonymous_var_nameX389);
int isblank(int anonymous_var_nameX390);
int iscntrl(int anonymous_var_nameX391);
int isdigit(int anonymous_var_nameX392);
int isgraph(int anonymous_var_nameX393);
int islower(int anonymous_var_nameX394);
int isprint(int anonymous_var_nameX395);
int ispunct(int anonymous_var_nameX396);
int isspace(int anonymous_var_nameX397);
int isupper(int anonymous_var_nameX398);
int isxdigit(int anonymous_var_nameX399);
int tolower(int anonymous_var_nameX400);
int toupper(int anonymous_var_nameX401);
int isascii(int anonymous_var_nameX402);
int toascii(int anonymous_var_nameX403);
int _tolower(int anonymous_var_nameX404);
int _toupper(int anonymous_var_nameX405);
int digittoint(int anonymous_var_nameX406);
int ishexnumber(int anonymous_var_nameX407);
int isideogram(int anonymous_var_nameX408);
int isnumber(int anonymous_var_nameX409);
int isphonogram(int anonymous_var_nameX410);
int isrune(int anonymous_var_nameX411);
int isspecial(int anonymous_var_nameX412);
char* asctime(const struct tm* anonymous_var_nameX413);
unsigned long  int clock();
char* ctime(const long* anonymous_var_nameX414);
double difftime(long anonymous_var_nameX415, long anonymous_var_nameX416);
struct tm* getdate(const char* anonymous_var_nameX417);
struct tm* gmtime(const long* anonymous_var_nameX418);
struct tm* localtime(const long* anonymous_var_nameX419);
long mktime(struct tm* anonymous_var_nameX420);
unsigned long  int strftime(char* anonymous_var_nameX421, unsigned long  int anonymous_var_nameX422, const char* anonymous_var_nameX423, const struct tm* anonymous_var_nameX424);
char* strptime(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct tm* anonymous_var_nameX427);
long time(long* anonymous_var_nameX428);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX429, char* anonymous_var_nameX430);
char* ctime_r(const long* anonymous_var_nameX431, char* anonymous_var_nameX432);
struct tm* gmtime_r(const long* anonymous_var_nameX433, struct tm* anonymous_var_nameX434);
struct tm* localtime_r(const long* anonymous_var_nameX435, struct tm* anonymous_var_nameX436);
long posix2time(long anonymous_var_nameX437);
void tzsetwall();
long time2posix(long anonymous_var_nameX438);
long timelocal(struct tm* anonymous_var_nameX439);
long timegm(struct tm* anonymous_var_nameX440);
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
int iswalnum(int anonymous_var_nameX441);
int iswalpha(int anonymous_var_nameX442);
int iswcntrl(int anonymous_var_nameX443);
int iswctype(int anonymous_var_nameX444, unsigned int anonymous_var_nameX445);
int iswdigit(int anonymous_var_nameX446);
int iswgraph(int anonymous_var_nameX447);
int iswlower(int anonymous_var_nameX448);
int iswprint(int anonymous_var_nameX449);
int iswpunct(int anonymous_var_nameX450);
int iswspace(int anonymous_var_nameX451);
int iswupper(int anonymous_var_nameX452);
int iswxdigit(int anonymous_var_nameX453);
int towlower(int anonymous_var_nameX454);
int towupper(int anonymous_var_nameX455);
unsigned int wctype(const char* anonymous_var_nameX456);
int btowc(int anonymous_var_nameX457);
int fgetwc(struct __sFILE* anonymous_var_nameX458);
int* fgetws(int* anonymous_var_nameX459, int anonymous_var_nameX460, struct __sFILE* anonymous_var_nameX461);
int fputwc(int anonymous_var_nameX462, struct __sFILE* anonymous_var_nameX463);
int fputws(const int* anonymous_var_nameX464, struct __sFILE* anonymous_var_nameX465);
int fwide(struct __sFILE* anonymous_var_nameX466, int anonymous_var_nameX467);
int fwprintf(struct __sFILE* anonymous_var_nameX468, const int* anonymous_var_nameX469, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX470, const int* anonymous_var_nameX471, ...);
int getwc(struct __sFILE* anonymous_var_nameX472);
int getwchar();
unsigned long  int mbrlen(const char* anonymous_var_nameX473, unsigned long  int anonymous_var_nameX474, union anonymous_typeZ1* anonymous_var_nameX475);
unsigned long  int mbrtowc(int* anonymous_var_nameX476, const char* anonymous_var_nameX477, unsigned long  int anonymous_var_nameX478, union anonymous_typeZ1* anonymous_var_nameX479);
int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX480);
unsigned long  int mbsrtowcs(int* anonymous_var_nameX481, const char** anonymous_var_nameX482, unsigned long  int anonymous_var_nameX483, union anonymous_typeZ1* anonymous_var_nameX484);
int putwc(int anonymous_var_nameX485, struct __sFILE* anonymous_var_nameX486);
int putwchar(int anonymous_var_nameX487);
int swprintf(int* anonymous_var_nameX488, unsigned long  int anonymous_var_nameX489, const int* anonymous_var_nameX490, ...);
int swscanf(const int* anonymous_var_nameX491, const int* anonymous_var_nameX492, ...);
int ungetwc(int anonymous_var_nameX493, struct __sFILE* anonymous_var_nameX494);
int vfwprintf(struct __sFILE* anonymous_var_nameX495, const int* anonymous_var_nameX496, __darwin_va_list anonymous_var_nameX497);
int vswprintf(int* anonymous_var_nameX498, unsigned long  int anonymous_var_nameX499, const int* anonymous_var_nameX500, __darwin_va_list anonymous_var_nameX501);
int vwprintf(const int* anonymous_var_nameX502, __darwin_va_list anonymous_var_nameX503);
unsigned long  int wcrtomb(char* anonymous_var_nameX504, int anonymous_var_nameX505, union anonymous_typeZ1* anonymous_var_nameX506);
int* wcscat(int* anonymous_var_nameX507, const int* anonymous_var_nameX508);
int* wcschr(const int* anonymous_var_nameX509, int anonymous_var_nameX510);
int wcscmp(const int* anonymous_var_nameX511, const int* anonymous_var_nameX512);
int wcscoll(const int* anonymous_var_nameX513, const int* anonymous_var_nameX514);
int* wcscpy(int* anonymous_var_nameX515, const int* anonymous_var_nameX516);
unsigned long  int wcscspn(const int* anonymous_var_nameX517, const int* anonymous_var_nameX518);
unsigned long  int wcsftime(int* anonymous_var_nameX519, unsigned long  int anonymous_var_nameX520, const int* anonymous_var_nameX521, const struct tm* anonymous_var_nameX522);
unsigned long  int wcslen(const int* anonymous_var_nameX523);
int* wcsncat(int* anonymous_var_nameX524, const int* anonymous_var_nameX525, unsigned long  int anonymous_var_nameX526);
int wcsncmp(const int* anonymous_var_nameX527, const int* anonymous_var_nameX528, unsigned long  int anonymous_var_nameX529);
int* wcsncpy(int* anonymous_var_nameX530, const int* anonymous_var_nameX531, unsigned long  int anonymous_var_nameX532);
int* wcspbrk(const int* anonymous_var_nameX533, const int* anonymous_var_nameX534);
int* wcsrchr(const int* anonymous_var_nameX535, int anonymous_var_nameX536);
unsigned long  int wcsrtombs(char* anonymous_var_nameX537, const int** anonymous_var_nameX538, unsigned long  int anonymous_var_nameX539, union anonymous_typeZ1* anonymous_var_nameX540);
unsigned long  int wcsspn(const int* anonymous_var_nameX541, const int* anonymous_var_nameX542);
int* wcsstr(const int* anonymous_var_nameX543, const int* anonymous_var_nameX544);
unsigned long  int wcsxfrm(int* anonymous_var_nameX545, const int* anonymous_var_nameX546, unsigned long  int anonymous_var_nameX547);
int wctob(int anonymous_var_nameX548);
double wcstod(const int* anonymous_var_nameX549, int** anonymous_var_nameX550);
int* wcstok(int* anonymous_var_nameX551, const int* anonymous_var_nameX552, int** anonymous_var_nameX553);
long wcstol(const int* anonymous_var_nameX554, int** anonymous_var_nameX555, int anonymous_var_nameX556);
unsigned long  int wcstoul(const int* anonymous_var_nameX557, int** anonymous_var_nameX558, int anonymous_var_nameX559);
int* wmemchr(const int* anonymous_var_nameX560, int anonymous_var_nameX561, unsigned long  int anonymous_var_nameX562);
int wmemcmp(const int* anonymous_var_nameX563, const int* anonymous_var_nameX564, unsigned long  int anonymous_var_nameX565);
int* wmemcpy(int* anonymous_var_nameX566, const int* anonymous_var_nameX567, unsigned long  int anonymous_var_nameX568);
int* wmemmove(int* anonymous_var_nameX569, const int* anonymous_var_nameX570, unsigned long  int anonymous_var_nameX571);
int* wmemset(int* anonymous_var_nameX572, int anonymous_var_nameX573, unsigned long  int anonymous_var_nameX574);
int wprintf(const int* anonymous_var_nameX575, ...);
int wscanf(const int* anonymous_var_nameX576, ...);
int wcswidth(const int* anonymous_var_nameX577, unsigned long  int anonymous_var_nameX578);
int wcwidth(int anonymous_var_nameX579);
int vfwscanf(struct __sFILE* anonymous_var_nameX580, const int* anonymous_var_nameX581, __darwin_va_list anonymous_var_nameX582);
int vswscanf(const int* anonymous_var_nameX583, const int* anonymous_var_nameX584, __darwin_va_list anonymous_var_nameX585);
int vwscanf(const int* anonymous_var_nameX586, __darwin_va_list anonymous_var_nameX587);
float wcstof(const int* anonymous_var_nameX588, int** anonymous_var_nameX589);
long  double wcstold(const int* anonymous_var_nameX590, int** anonymous_var_nameX591);
long long wcstoll(const int* anonymous_var_nameX592, int** anonymous_var_nameX593, int anonymous_var_nameX594);
unsigned long  long wcstoull(const int* anonymous_var_nameX595, int** anonymous_var_nameX596, int anonymous_var_nameX597);
unsigned long  int mbsnrtowcs(int* anonymous_var_nameX598, const char** anonymous_var_nameX599, unsigned long  int anonymous_var_nameX600, unsigned long  int anonymous_var_nameX601, union anonymous_typeZ1* anonymous_var_nameX602);
int* wcpcpy(int* anonymous_var_nameX603, const int* anonymous_var_nameX604);
int* wcpncpy(int* anonymous_var_nameX605, const int* anonymous_var_nameX606, unsigned long  int anonymous_var_nameX607);
int* wcsdup(const int* anonymous_var_nameX608);
int wcscasecmp(const int* anonymous_var_nameX609, const int* anonymous_var_nameX610);
int wcsncasecmp(const int* anonymous_var_nameX611, const int* anonymous_var_nameX612, unsigned long  int n);
unsigned long  int wcsnlen(const int* anonymous_var_nameX613, unsigned long  int anonymous_var_nameX614);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX615, const int** anonymous_var_nameX616, unsigned long  int anonymous_var_nameX617, unsigned long  int anonymous_var_nameX618, union anonymous_typeZ1* anonymous_var_nameX619);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep);
int* fgetwln(struct __sFILE* anonymous_var_nameX620, unsigned long  int* anonymous_var_nameX621);
unsigned long  int wcslcat(int* anonymous_var_nameX622, const int* anonymous_var_nameX623, unsigned long  int anonymous_var_nameX624);
unsigned long  int wcslcpy(int* anonymous_var_nameX625, const int* anonymous_var_nameX626, unsigned long  int anonymous_var_nameX627);
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
void charp_finalize(char* self);
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
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
void err_msg(struct sInfo* info, char* msg, ...);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
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
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
int come_main_v1(int argc, char** argv);
int main(int argc, char** argv);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
struct sModule* sModule_initialize(struct sModule* self);
static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
static void map$2charphvoidphp_finalize(struct map$2charphvoidph* self);
static struct map$2charphvoidph* map$2charphvoidph_clone(struct map$2charphvoidph* self);
static void map$2charphvoidph_finalize(struct map$2charphvoidph* self);
static unsigned int map$2charphvoidph_get_hash_key(struct map$2charphvoidph* self);
static _Bool map$2charphvoidph_equals(struct map$2charphvoidph* left, struct map$2charphvoidph* right);
static _Bool voidpp_equals(void** left, void** right);
static _Bool list$1charpp_equals(struct list$1charp* left, struct list$1charp* right);
static struct list$1charp* list$1charpp_clone(struct list$1charp* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static struct list$1charp* list$1charpp_add(struct list$1charp* self, char* item);
static unsigned int map$2charphvoidphp_get_hash_key(struct map$2charphvoidph* self);
static _Bool map$2charphvoidphp_equals(struct map$2charphvoidph* left, struct map$2charphvoidph* right);
static struct map$2charphvoidph* map$2charphvoidphpp_initialize(struct map$2charphvoidph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
void sVarTable_finalize(struct sVarTable* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self);
static unsigned int list$1voidph_get_hash_key(struct list$1voidph* self);
static _Bool list$1voidph_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
static void sClassModule_finalize(struct sClassModule* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static void sBlock_finalize(struct sBlock* self);
static void sFun_finalize(struct sFun* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
// uniq global variable
void* gComeFunResultObject=((void*)0);

char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

void* wildcard;

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

int gNumAlloc=0;

int gNumFree=0;

struct sHeapPage gHeapPages;

// inline function

// body function
void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_0;
int i_1;
void* __right_value2 = (void*)0;
    buf_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 184, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_format(buf_0,"%s %d\n",sname,sline);
    for(    i_1=gNumComeStackFrame-2;    i_1>=0;    i_1--    ){
        buffer_append_format(buf_0,"%s %d #%d\n",gComeStackFrameSName[i_1],gComeStackFrameSLine[i_1],gComeStackFrameID[i_1]);
    }
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_0))));
    __right_value2 = come_decrement_ref_count2(__right_value2, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(buf_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
int i_2;
    for(    i_2=gNumComeStackFrame-1;    i_2>=0;    i_2--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_2],gComeStackFrameSLine[i_2],gComeStackFrameID[i_2]);
    }
}

char* come_get_stackframe(){
void* __result_obj__=(void*)0;
void* __right_value3 = (void*)0;
char* __result1__;
    __result1__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer)));
    __right_value3 = come_decrement_ref_count2(__right_value3, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result1__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__=(void*)0;
void* __result2__;
    if(    mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result2__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result2__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__=(void*)0;
void* __result3__;
    if(    mem==((void*)0)) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem<begin) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem>=end) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result3__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result3__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

_Bool bool_value(_Bool self){
    return self;
}

int int_catch(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

int int_expect(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

int int_value(int self){
    return self;
}

int int_except(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

_Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_3;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_3=0;    i_3<gHeapPages.mSizePages;    i_3++    ){
        gHeapPages.mPages[i_3]=calloc(1,sizeof(char)*2048*2);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*2048*2);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_4;
int n_5;
_Bool flag_6;
int i_7;
struct sMemHeaderTiny* it_8;
int n_9;
int i_10;
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib) {
    }
    else if(    gComeDebugLib) {
        it_4=gAllocMem;
        n_5=0;
        while(it_4) {
            n_5++;
            flag_6=(_Bool)0;
            printf("#%d ",n_5);
            if(            it_4->class_name) {
                printf("%p (%s): ",(char*)it_4+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_4->class_name);
            }
            for(            i_7=0;            i_7<16;            i_7++            ){
                if(                it_4->sname[i_7]) {
                    printf("%s %d #%d, ",it_4->sname[i_7],it_4->sline[i_7],it_4->id[i_7]);
                    flag_6=(_Bool)1;
                }
            }
            if(            flag_6) {
                puts("");
            }
            it_4=it_4->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_5,gNumAlloc,gNumFree);
    }
    else {
        it_8=(struct sMemHeaderTiny*)gAllocMem;
        n_9=0;
        while(it_8) {
            n_9++;
            it_8=it_8->next;
        }
        if(        n_9>0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_9,gNumAlloc,gNumFree);
        }
    }
    for(    i_10=0;    i_10<gHeapPages.mSizePages;    i_10++    ){
        free(gHeapPages.mPages[i_10]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* __result_obj__=(void*)0;
void* result_11;
unsigned long  int free_area_12;
int new_size_pages_13;
char** new_pages_14;
int i_15;
void* __result4__;
    result_11=((void*)0);
    if(    size<2048*2) {
        if(        gHeapPages.mFreeMem[size]) {
            result_11=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_11,0,size);
        }
        if(        result_11==((void*)0)) {
            free_area_12=gHeapPages.mPages[gHeapPages.mCurrentPages]+2048*2-gHeapPages.mTop;
            if(            size>=free_area_12) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_13=gHeapPages.mSizePages*2;
                    new_pages_14=calloc(1,sizeof(char*)*new_size_pages_13);
                    i_15=0;
                    for(                    ;                    i_15<gHeapPages.mSizePages;                    i_15++                    ){
                        new_pages_14[i_15]=gHeapPages.mPages[i_15];
                    }
                    for(                    ;                    i_15<new_size_pages_13;                    i_15++                    ){
                        new_pages_14[i_15]=calloc(1,sizeof(char)*2048*2);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_14;
                    gHeapPages.mSizePages=new_size_pages_13;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_11=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_11=calloc(1,size);
    }
    __result4__ = gComeFunResultObject = __result_obj__ = result_11;
    gComeFunResultObject = (void*)0;
    return __result4__;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equaler_fun){
void* __result_obj__=(void*)0;
void* result_16;
struct sMemHeader* it_17;
void* __result5__;
void* result_18;
struct sMemHeaderTiny* it_19;
void* __result6__;
    if(    gComeDebugLib) {
        result_16=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_17=result_16;
        it_17->allocated=177783;
        it_17->size=size+sizeof(struct sMemHeader);
        it_17->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16) {
            memcpy(it_17->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_17->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_17->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_17->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_17->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_17->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_17->next=gAllocMem;
        it_17->prev=((void*)0);
        it_17->class_name=class_name;
        it_17->finalizer_fun=finalizer_fun;
        it_17->cloner_fun=cloner_fun;
        it_17->get_hash_key_fun=get_hash_key_fun;
        it_17->equaler_fun=equaler_fun;
        if(        gAllocMem) {
            gAllocMem->prev=it_17;
        }
        gAllocMem=it_17;
        gNumAlloc++;
        __result5__ = gComeFunResultObject = __result_obj__ = (char*)result_16+sizeof(struct sMemHeader);
        gComeFunResultObject = (void*)0;
        return __result5__;
    }
    else {
        result_18=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_19=result_18;
        it_19->allocated=177783;
        it_19->class_name=class_name;
        it_19->finalizer_fun=finalizer_fun;
        it_19->cloner_fun=cloner_fun;
        it_19->get_hash_key_fun=get_hash_key_fun;
        it_19->equaler_fun=equaler_fun;
        it_19->size=size+sizeof(struct sMemHeaderTiny);
        it_19->free_next=((void*)0);
        it_19->next=(struct sMemHeaderTiny*)gAllocMem;
        it_19->prev=((void*)0);
        if(        gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_19;
        }
        gAllocMem=(struct sMemHeader*)it_19;
        gNumAlloc++;
        __result6__ = gComeFunResultObject = __result_obj__ = (char*)result_18+sizeof(struct sMemHeaderTiny);
        gComeFunResultObject = (void*)0;
        return __result6__;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_20;
struct sMemHeader* prev_it_21;
struct sMemHeader* next_it_22;
unsigned long  int size_23;
struct sMemHeaderTiny* it_24;
struct sMemHeaderTiny* prev_it_25;
struct sMemHeaderTiny* next_it_26;
unsigned long  int size_27;
    if(    mem) {
        if(        gComeGCLib) {
        }
        else if(        gComeDebugLib) {
            it_20=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_20->allocated!=177783) {
                return;
            }
            it_20->allocated=0;
            prev_it_21=it_20->prev;
            next_it_22=it_20->next;
            if(            gAllocMem==it_20) {
                gAllocMem=next_it_22;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_21) {
                    prev_it_21->next=next_it_22;
                }
                if(                next_it_22) {
                    next_it_22->prev=prev_it_21;
                }
            }
            size_23=it_20->size;
            if(            size_23<2048*2) {
                if(                gHeapPages.mFreeMem[size_23]==((void*)0)) {
                    it_20->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_23]=(struct sMemHeaderTiny*)it_20;
                }
                else {
                    it_20->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_23];
                    gHeapPages.mFreeMem[size_23]=(struct sMemHeaderTiny*)it_20;
                }
            }
            else {
                free(it_20);
            }
            gNumFree++;
        }
        else {
            it_24=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_24->allocated!=177783) {
                return;
            }
            it_24->allocated=0;
            prev_it_25=it_24->prev;
            next_it_26=it_24->next;
            if(            gAllocMem==it_24) {
                gAllocMem=(struct sMemHeader*)next_it_26;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_25) {
                    prev_it_25->next=next_it_26;
                }
                if(                next_it_26) {
                    next_it_26->prev=prev_it_25;
                }
            }
            size_27=it_24->size;
            if(            size_27<2048*2) {
                if(                gHeapPages.mFreeMem[size_27]==((void*)0)) {
                    it_24->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_27]=it_24;
                }
                else {
                    it_24->free_next=gHeapPages.mFreeMem[size_27];
                    gHeapPages.mFreeMem[size_27]=it_24;
                }
            }
            else {
                free(it_24);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_28;
char* __result7__;
struct sMemHeaderTiny* it_29;
char* __result8__;
    if(    gComeDebugLib) {
        it_28=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_28->allocated!=177783) {
            printf("invalid heap object(%p)(1)\n",it_28);
            exit(2);
        }
        __result7__ = gComeFunResultObject = __result_obj__ = it_28->class_name;
        gComeFunResultObject = (void*)0;
        return __result7__;
    }
    else {
        it_29=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_29->allocated!=177783) {
            printf("invalid heap object(%p)(2)\n",it_29);
            exit(2);
        }
        __result8__ = gComeFunResultObject = __result_obj__ = it_29->class_name;
        gComeFunResultObject = (void*)0;
        return __result8__;
    }
}

void* come_get_finalizer(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_30;
void* __result9__;
void* __result10__;
struct sMemHeaderTiny* it_31;
void* __result11__;
void* __result12__;
    if(    gComeDebugLib) {
        it_30=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_30->allocated!=177783) {
            __result9__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result9__;
        }
        __result10__ = gComeFunResultObject = __result_obj__ = it_30->finalizer_fun;
        gComeFunResultObject = (void*)0;
        return __result10__;
    }
    else {
        it_31=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_31->allocated!=177783) {
            __result11__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result11__;
        }
        __result12__ = gComeFunResultObject = __result_obj__ = it_31->finalizer_fun;
        gComeFunResultObject = (void*)0;
        return __result12__;
    }
}

void* come_get_cloner(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_32;
void* __result13__;
void* __result14__;
struct sMemHeaderTiny* it_33;
void* __result15__;
void* __result16__;
    if(    gComeDebugLib) {
        it_32=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_32->allocated!=177783) {
            __result13__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result13__;
        }
        __result14__ = gComeFunResultObject = __result_obj__ = it_32->cloner_fun;
        gComeFunResultObject = (void*)0;
        return __result14__;
    }
    else {
        it_33=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_33->allocated!=177783) {
            __result15__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result15__;
        }
        __result16__ = gComeFunResultObject = __result_obj__ = it_33->cloner_fun;
        gComeFunResultObject = (void*)0;
        return __result16__;
    }
}

void* come_get_hash_key(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_34;
void* __result17__;
void* __result18__;
struct sMemHeaderTiny* it_35;
void* __result19__;
void* __result20__;
    if(    gComeDebugLib) {
        it_34=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_34->allocated!=177783) {
            __result17__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result17__;
        }
        __result18__ = gComeFunResultObject = __result_obj__ = it_34->get_hash_key_fun;
        gComeFunResultObject = (void*)0;
        return __result18__;
    }
    else {
        it_35=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_35->allocated!=177783) {
            __result19__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result19__;
        }
        __result20__ = gComeFunResultObject = __result_obj__ = it_35->get_hash_key_fun;
        gComeFunResultObject = (void*)0;
        return __result20__;
    }
}

void* come_get_equaler(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_36;
void* __result21__;
void* __result22__;
struct sMemHeaderTiny* it_37;
void* __result23__;
void* __result24__;
    if(    gComeDebugLib) {
        it_36=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_36->allocated!=177783) {
            __result21__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result21__;
        }
        __result22__ = gComeFunResultObject = __result_obj__ = it_36->equaler_fun;
        gComeFunResultObject = (void*)0;
        return __result22__;
    }
    else {
        it_37=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_37->allocated!=177783) {
            __result23__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result23__;
        }
        __result24__ = gComeFunResultObject = __result_obj__ = it_37->equaler_fun;
        gComeFunResultObject = (void*)0;
        return __result24__;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun, void* get_hash_key_fun, void* equaler_fun){
void* __result_obj__=(void*)0;
char* mem_38;
unsigned long  int* ref_count_39;
unsigned long  int* size2_40;
void* __result25__;
    mem_38=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name,finalizer_fun,cloner_fun,get_hash_key_fun,equaler_fun);
    ref_count_39=(unsigned long  int*)mem_38;
    *ref_count_39=0;
    size2_40=(unsigned long  int*)(mem_38+sizeof(unsigned long  int));
    *size2_40=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result25__ = gComeFunResultObject = __result_obj__ = mem_38+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    gComeFunResultObject = (void*)0;
    return __result25__;
}

void come_free_object(void* mem){
unsigned long  int* ref_count_41;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_41=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_41);
}

void come_free(void* mem){
unsigned long  int* ref_count_42;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_42=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_42);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* __result26__;
char* mem_43;
unsigned long  int* size_p_44;
unsigned long  int size_45;
void* finalizer_fun_46;
void* cloner_fun_47;
void* get_hash_key_fun_48;
void* equaler_fun_49;
void* result_50;
void* __result27__;
    if(    !block) {
        __result26__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result26__;
    }
    mem_43=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_44=(unsigned long  int*)(mem_43+sizeof(unsigned long  int));
    size_45=*size_p_44-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    finalizer_fun_46=come_get_finalizer(block);
    cloner_fun_47=come_get_cloner(block);
    get_hash_key_fun_48=come_get_hash_key(block);
    equaler_fun_49=come_get_equaler(block);
    result_50=come_calloc(1,size_45,sname,sline,class_name,finalizer_fun_46,cloner_fun_47,get_hash_key_fun_48,equaler_fun_49);
    memcpy(result_50,block,size_45);
    __result27__ = gComeFunResultObject = __result_obj__ = result_50;
    gComeFunResultObject = (void*)0;
    return __result27__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result28__;
unsigned long  int* ref_count_51;
void* __result29__;
    if(    mem==((void*)0)) {
        __result28__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result28__;
    }
    ref_count_51=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_51)++;
    __result29__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result29__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result30__;
unsigned long  int* ref_count_52;
void* __result31__;
    if(    mem==((void*)0)) {
        __result30__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result30__;
    }
    ref_count_52=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_52);
    __result31__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result31__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result32__;
unsigned long  int* ref_count_53;
unsigned long  int count_54;
void (*finalizer_55)(void*);
void* __result33__;
void* __result34__;
memset(&finalizer_55, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        __result32__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result32__;
    }
    ref_count_53=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_53)--;
    }
    count_54=*ref_count_53;
    if(    !no_free&&(count_54<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_55=protocol_fun;
            finalizer_55(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result33__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result33__;
    }
    __result34__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result34__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__=(void*)0;
void* __result35__;
void* __result36__;
unsigned long  int* ref_count_56;
unsigned long  int count_57;
void (*finalizer_58)(void*);
void* __result37__;
void* __result38__;
memset(&finalizer_58, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            __result35__ = gComeFunResultObject = __result_obj__ = mem;
            gComeFunResultObject = (void*)0;
            return __result35__;
        }
    }
    if(    mem==((void*)0)) {
        __result36__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result36__;
    }
    ref_count_56=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_56)--;
    }
    count_57=*ref_count_56;
    if(    !no_free&&(count_57<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_58=protocol_fun;
            finalizer_58(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result37__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result37__;
    }
    __result38__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result38__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* fun2_59;
void (*finalizer_60)(void*);
void (*finalizer_61)(void*);
void (*finalizer_62)(void*);
void (*finalizer_63)(void*);
unsigned long  int* ref_count_64;
unsigned long  int count_65;
void* fun2_66;
void (*finalizer_67)(void*);
void (*finalizer_68)(void*);
void (*finalizer_69)(void*);
void (*finalizer_70)(void*);
memset(&finalizer_60, 0, sizeof(void (*)(void*)));
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
memset(&finalizer_62, 0, sizeof(void (*)(void*)));
memset(&finalizer_63, 0, sizeof(void (*)(void*)));
memset(&finalizer_67, 0, sizeof(void (*)(void*)));
memset(&finalizer_68, 0, sizeof(void (*)(void*)));
memset(&finalizer_69, 0, sizeof(void (*)(void*)));
memset(&finalizer_70, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        fun2_59=come_get_finalizer(mem);
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_60=protocol_fun;
                finalizer_60(protocol_obj);
            }
            finalizer_61=fun;
            finalizer_61(mem);
        }
        else if(        fun2_59) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_62=protocol_fun;
                finalizer_62(protocol_obj);
            }
            finalizer_63=fun2_59;
            finalizer_63(mem);
        }
    }
    else {
        ref_count_64=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_64)--;
        }
        count_65=*ref_count_64;
        if(        !no_free&&(count_65<=0||force_delete_)) {
            if(            mem) {
                fun2_66=come_get_finalizer(mem);
                if(                fun) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_67=protocol_fun;
                        finalizer_67(protocol_obj);
                        come_free_object(protocol_obj);
                    }
                    if(                    fun) {
                        finalizer_68=fun;
                        finalizer_68(mem);
                    }
                }
                else if(                fun2_66) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_69=protocol_fun;
                        finalizer_69(protocol_obj);
                    }
                    finalizer_70=fun2_66;
                    finalizer_70(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* fun2_71;
void (*finalizer_72)(void*);
void (*finalizer_73)(void*);
void (*finalizer_74)(void*);
void (*finalizer_75)(void*);
unsigned long  int* ref_count_76;
unsigned long  int count_77;
void* fun2_78;
void (*finalizer_79)(void*);
void (*finalizer_80)(void*);
void (*finalizer_81)(void*);
void (*finalizer_82)(void*);
memset(&finalizer_72, 0, sizeof(void (*)(void*)));
memset(&finalizer_73, 0, sizeof(void (*)(void*)));
memset(&finalizer_74, 0, sizeof(void (*)(void*)));
memset(&finalizer_75, 0, sizeof(void (*)(void*)));
memset(&finalizer_79, 0, sizeof(void (*)(void*)));
memset(&finalizer_80, 0, sizeof(void (*)(void*)));
memset(&finalizer_81, 0, sizeof(void (*)(void*)));
memset(&finalizer_82, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        fun2_71=come_get_finalizer(mem);
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_72=protocol_fun;
                finalizer_72(protocol_obj);
            }
            finalizer_73=fun;
            finalizer_73(mem);
        }
        else if(        fun2_71) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_74=protocol_fun;
                finalizer_74(protocol_obj);
            }
            finalizer_75=fun2_71;
            finalizer_75(mem);
        }
    }
    else {
        ref_count_76=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_76)--;
        }
        count_77=*ref_count_76;
        if(        !no_free&&(count_77<=0||force_delete_)) {
            if(            mem) {
                fun2_78=come_get_finalizer(mem);
                if(                fun) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_79=protocol_fun;
                        finalizer_79(protocol_obj);
                        come_free_object(protocol_obj);
                    }
                    if(                    fun) {
                        finalizer_80=fun;
                        finalizer_80(mem);
                    }
                }
                else if(                fun2_78) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_81=protocol_fun;
                        finalizer_81(protocol_obj);
                    }
                    finalizer_82=fun2_78;
                    finalizer_82(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* fun2_83;
void (*finalizer_84)(void*);
void (*finalizer_85)(void*);
unsigned long  int* ref_count_86;
unsigned long  int count_87;
void* fun2_88;
void (*finalizer_89)(void*);
void (*finalizer_90)(void*);
memset(&finalizer_84, 0, sizeof(void (*)(void*)));
memset(&finalizer_85, 0, sizeof(void (*)(void*)));
memset(&finalizer_89, 0, sizeof(void (*)(void*)));
memset(&finalizer_90, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            fun2_83=come_get_finalizer(mem);
            if(            fun) {
                finalizer_84=fun;
                finalizer_84(mem);
            }
            else if(            fun2_83) {
                finalizer_85=fun2_83;
                finalizer_85(mem);
            }
        }
    }
    else {
        ref_count_86=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_86)--;
        }
        count_87=*ref_count_86;
        if(        !no_free&&(count_87<=0||force_delete_)) {
            if(            mem) {
                fun2_88=come_get_finalizer(mem);
                if(                fun) {
                    finalizer_89=fun;
                    finalizer_89(mem);
                }
                else if(                fun2_88) {
                    finalizer_90=fun2_88;
                    finalizer_90(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void* come_call_cloner(void* fun, void* mem){
void* __result_obj__=(void*)0;
void* __result39__;
void* fun2_91;
void* (*cloner_92)(void*);
void* __result40__;
void* (*cloner_93)(void*);
void* __result41__;
void* __result42__;
memset(&cloner_92, 0, sizeof(void* (*)(void*)));
memset(&cloner_93, 0, sizeof(void* (*)(void*)));
    if(    mem==((void*)0)) {
        __result39__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result39__;
    }
    fun2_91=come_get_cloner(mem);
    if(    fun) {
        cloner_92=fun;
        __result40__ = gComeFunResultObject = __result_obj__ = cloner_92(mem);
        gComeFunResultObject = (void*)0;
        return __result40__;
    }
    else if(    fun2_91) {
        cloner_93=fun2_91;
        __result41__ = gComeFunResultObject = __result_obj__ = cloner_93(mem);
        gComeFunResultObject = (void*)0;
        return __result41__;
    }
    __result42__ = gComeFunResultObject = __result_obj__ = ((void*)0);
    gComeFunResultObject = (void*)0;
    return __result42__;
}

unsigned int come_call_get_hash_key(void* fun, void* mem){
void* fun2_94;
unsigned int (*cloner_95)(void*);
unsigned int (*cloner_96)(void*);
memset(&cloner_95, 0, sizeof(unsigned int (*)(void*)));
memset(&cloner_96, 0, sizeof(unsigned int (*)(void*)));
    if(    mem==((void*)0)) {
        return 0;
    }
    fun2_94=come_get_hash_key(mem);
    if(    fun) {
        cloner_95=fun;
        return cloner_95(mem);
    }
    else if(    fun2_94) {
        cloner_96=fun2_94;
        return cloner_96(mem);
    }
    return 0;
}

unsigned int come_call_equals(void* fun, void* mem){
void* fun2_97;
unsigned int (*cloner_98)(void*);
unsigned int (*cloner_99)(void*);
memset(&cloner_98, 0, sizeof(unsigned int (*)(void*)));
memset(&cloner_99, 0, sizeof(unsigned int (*)(void*)));
    if(    mem==((void*)0)) {
        return 0;
    }
    fun2_97=come_get_equaler(mem);
    if(    fun) {
        cloner_98=fun;
        return cloner_98(mem);
    }
    else if(    fun2_97) {
        cloner_99=fun2_97;
        return cloner_99(mem);
    }
    return 0;
}

char* __builtin_string(char* str){
void* __result_obj__=(void*)0;
char* __result43__;
int len_100;
void* __right_value4 = (void*)0;
char* result_101;
char* __result44__;
    if(    str==((void*)0)) {
        __result43__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result43__;
    }
    len_100=strlen(str)+1;
    result_101=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_100)), "/usr/local/include/comelang.h", 1243, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    strncpy(result_101,str,len_100);
    __result44__ = gComeFunResultObject = __result_obj__ = result_101;
    result_101 = come_decrement_ref_count2(result_101, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result44__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_102;
int i_103;
    found_102=(_Bool)0;
    for(    i_103=0;    i_103<len;    i_103++    ){
        if(        array[i_103]==element) {
            found_102=(_Bool)1;
            break;
        }
    }
    return found_102;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value5 = (void*)0;
char* __dec_obj1;
struct buffer* __result45__;
    self->size=128;
    __dec_obj1=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3548, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result45__;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
char* __dec_obj2;
struct buffer* __result46__;
    self->size=128;
    __dec_obj2=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3558, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    __dec_obj2 = come_decrement_ref_count2(__dec_obj2, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result47__;
void* __right_value7 = (void*)0;
struct buffer* result_104;
void* __right_value8 = (void*)0;
char* __dec_obj3;
struct buffer* __result48__;
    if(    self==((void*)0)) {
        __result47__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result47__;
    }
    result_104=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3578, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0));
    result_104->size=self->size;
    __dec_obj3=result_104->buf;
    result_104->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3581, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    __dec_obj3 = come_decrement_ref_count2(__dec_obj3, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_104->len=self->len;
    memcpy(result_104->buf,self->buf,self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = result_104;
    come_call_finalizer3(result_104,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
void* __result_obj__=(void*)0;
struct buffer* __result49__;
void* __right_value9 = (void*)0;
char* old_buf_105;
int old_len_106;
int new_size_107;
void* __right_value10 = (void*)0;
char* __dec_obj4;
struct buffer* __result50__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result49__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result49__;
    }
    if(    self->len+size+1+1>=self->size) {
        old_buf_105=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3620, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(old_buf_105,self->buf,self->size);
        old_len_106=self->len;
        new_size_107=(self->size+size+1)*2;
        __dec_obj4=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_107)), "/usr/local/include/comelang.h", 3624, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        __dec_obj4 = come_decrement_ref_count2(__dec_obj4, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_105,old_len_106);
        self->buf[old_len_106]=0;
        self->size=new_size_107;
        old_buf_105 = come_decrement_ref_count2(old_buf_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result50__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__=(void*)0;
struct buffer* __result51__;
void* __right_value11 = (void*)0;
char* old_buf_108;
int old_len_109;
int new_size_110;
void* __right_value12 = (void*)0;
char* __dec_obj5;
struct buffer* __result52__;
    if(    self==((void*)0)) {
        __result51__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result51__;
    }
    if(    self->len+1+1+1>=self->size) {
        old_buf_108=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3643, "char*"));
        old_len_109=self->len;
        new_size_110=(self->size+10+1)*2;
        __dec_obj5=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_110)), "/usr/local/include/comelang.h", 3647, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        __dec_obj5 = come_decrement_ref_count2(__dec_obj5, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_108,old_len_109);
        self->buf[old_len_109]=0;
        self->size=new_size_110;
        old_buf_108 = come_decrement_ref_count2(old_buf_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result52__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result53__;
int size_111;
void* __right_value13 = (void*)0;
char* old_buf_112;
int old_len_113;
int new_size_114;
void* __right_value14 = (void*)0;
char* __dec_obj6;
struct buffer* __result54__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result53__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result53__;
    }
    size_111=strlen(mem);
    if(    self->len+size_111+1+1>=self->size) {
        old_buf_112=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3669, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(old_buf_112,self->buf,self->size);
        old_len_113=self->len;
        new_size_114=(self->size+size_111+1)*2;
        __dec_obj6=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_114)), "/usr/local/include/comelang.h", 3673, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_112,old_len_113);
        self->buf[old_len_113]=0;
        self->size=new_size_114;
        old_buf_112 = come_decrement_ref_count2(old_buf_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_111);
    self->len+=size_111;
    self->buf[self->len]=0;
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result54__;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
void* __result_obj__=(void*)0;
struct buffer* __result55__;
va_list args_115;
char* result_116;
int len_117;
struct buffer* __result56__;
void* __right_value15 = (void*)0;
char* mem_118;
int size_119;
void* __right_value16 = (void*)0;
char* old_buf_120;
int old_len_121;
int new_size_122;
void* __right_value17 = (void*)0;
char* __dec_obj7;
struct buffer* __result57__;
memset(&args_115, 0, sizeof(va_list));
result_116 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)) {
        __result55__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result55__;
    }
    __builtin_va_start(args_115,msg);
    len_117=vasprintf(&result_116,msg,args_115);
    __builtin_va_end(args_115);
    if(    len_117<0) {
        __result56__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result56__;
    }
    mem_118=(char*)come_increment_ref_count(__builtin_string(result_116));
    size_119=strlen(mem_118);
    if(    self->len+size_119+1+1>=self->size) {
        old_buf_120=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3706, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(old_buf_120,self->buf,self->size);
        old_len_121=self->len;
        new_size_122=(self->size+size_119+1)*2;
        __dec_obj7=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_122)), "/usr/local/include/comelang.h", 3710, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_120,old_len_121);
        self->buf[old_len_121]=0;
        self->size=new_size_122;
        old_buf_120 = come_decrement_ref_count2(old_buf_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_118,size_119);
    self->len+=size_119;
    self->buf[self->len]=0;
    free(result_116);
    __result57__ = gComeFunResultObject = __result_obj__ = self;
    mem_118 = come_decrement_ref_count2(mem_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result58__;
int size_123;
void* __right_value18 = (void*)0;
char* old_buf_124;
int old_len_125;
int new_size_126;
void* __right_value19 = (void*)0;
char* __dec_obj8;
struct buffer* __result59__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result58__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result58__;
    }
    size_123=strlen(mem)+1;
    if(    self->len+size_123+1+1+1>=self->size) {
        old_buf_124=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3732, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(old_buf_124,self->buf,self->size);
        old_len_125=self->len;
        new_size_126=(self->size+size_123+1)*2;
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_126)), "/usr/local/include/comelang.h", 3736, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_124,old_len_125);
        self->buf[old_len_125]=0;
        self->size=new_size_126;
        old_buf_124 = come_decrement_ref_count2(old_buf_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_123);
    self->len+=size_123;
    self->buf[self->len]=0;
    self->len++;
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result59__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result60__;
int* mem_127;
int size_128;
void* __right_value20 = (void*)0;
char* old_buf_129;
int old_len_130;
int new_size_131;
void* __right_value21 = (void*)0;
char* __dec_obj9;
struct buffer* __result61__;
    if(    self==((void*)0)) {
        __result60__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result60__;
    }
    mem_127=&value;
    size_128=sizeof(int);
    if(    self->len+size_128+1+1>=self->size) {
        old_buf_129=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3759, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(old_buf_129,self->buf,self->size);
        old_len_130=self->len;
        new_size_131=(self->size+size_128+1)*2;
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_131)), "/usr/local/include/comelang.h", 3763, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_129,old_len_130);
        self->buf[old_len_130]=0;
        self->size=new_size_131;
        old_buf_129 = come_decrement_ref_count2(old_buf_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_127,size_128);
    self->len+=size_128;
    self->buf[self->len]=0;
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result61__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_132;
int size_133;
void* __right_value22 = (void*)0;
char* old_buf_134;
int old_len_135;
int new_size_136;
void* __right_value23 = (void*)0;
char* __dec_obj10;
struct buffer* __result62__;
    mem_132=&value;
    size_133=sizeof(long);
    if(    self->len+size_133+1+1>=self->size) {
        old_buf_134=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3782, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(old_buf_134,self->buf,self->size);
        old_len_135=self->len;
        new_size_136=(self->size+size_133+1)*2;
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_136)), "/usr/local/include/comelang.h", 3786, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_134,old_len_135);
        self->buf[old_len_135]=0;
        self->size=new_size_136;
        old_buf_134 = come_decrement_ref_count2(old_buf_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_132,size_133);
    self->len+=size_133;
    self->buf[self->len]=0;
    __result62__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result62__;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
void* __result_obj__=(void*)0;
struct buffer* __result63__;
short* mem_137;
int size_138;
void* __right_value24 = (void*)0;
char* old_buf_139;
int old_len_140;
int new_size_141;
void* __right_value25 = (void*)0;
char* __dec_obj11;
struct buffer* __result64__;
    if(    self==((void*)0)) {
        __result63__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result63__;
    }
    mem_137=&value;
    size_138=sizeof(short);
    if(    self->len+size_138+1+1>=self->size) {
        old_buf_139=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3809, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(old_buf_139,self->buf,self->size);
        old_len_140=self->len;
        new_size_141=(self->size+size_138+1)*2;
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_141)), "/usr/local/include/comelang.h", 3813, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_139,old_len_140);
        self->buf[old_len_140]=0;
        self->size=new_size_141;
        old_buf_139 = come_decrement_ref_count2(old_buf_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_137,size_138);
    self->len+=size_138;
    self->buf[self->len]=0;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result64__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result65__;
int len_142;
int new_size_143;
void* __right_value26 = (void*)0;
char* __dec_obj12;
int i_144;
struct buffer* __result66__;
    if(    self==((void*)0)) {
        __result65__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    len_142=self->len;
    len_142=(len_142+3)&~3;
    if(    len_142>=self->size) {
        new_size_143=(self->size+1+1)*2;
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_143)), "/usr/local/include/comelang.h", 3837, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->size=new_size_143;
    }
    for(    i_144=self->len;    i_144<len_142;    i_144++    ){
        self->buf[i_144]=0;
    }
    self->len=len_142;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result66__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct buffer* result_145;
struct buffer* __result67__;
struct buffer* __result68__;
    result_145=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3867, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    self==((void*)0)) {
        __result67__ = gComeFunResultObject = __result_obj__ = result_145;
        come_call_finalizer3(result_145,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result67__;
    }
    buffer_append_str(result_145,self);
    __result68__ = gComeFunResultObject = __result_obj__ = result_145;
    come_call_finalizer3(result_145,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
char* __result69__;
void* __right_value30 = (void*)0;
char* __result70__;
    if(    self==((void*)0)) {
        __result69__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value29=__builtin_string("")));
        __right_value29 = come_decrement_ref_count2(__right_value29, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    __result70__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value30=__builtin_string(self->buf)));
    __right_value30 = come_decrement_ref_count2(__right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}

unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result71__;
    __result71__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result71__;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_146;
struct buffer* __result72__;
    result_146=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3894, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(result_146,self,sizeof(char)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = result_146;
    come_call_finalizer3(result_146,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result72__;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_147;
int i_148;
struct buffer* __result73__;
    result_147=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3901, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_148=0;    i_148<len;    i_148++    ){
        buffer_append(result_147,self[i_148],strlen(self[i_148]));
    }
    __result73__ = gComeFunResultObject = __result_obj__ = result_147;
    come_call_finalizer3(result_147,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_149;
struct buffer* __result74__;
    result_149=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3910, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(result_149,(char*)self,sizeof(short)*len);
    __result74__ = gComeFunResultObject = __result_obj__ = result_149;
    come_call_finalizer3(result_149,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_150;
struct buffer* __result75__;
    result_150=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3917, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(result_150,(char*)self,sizeof(int)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = result_150;
    come_call_finalizer3(result_150,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_151;
struct buffer* __result76__;
    result_151=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3924, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(result_151,(char*)self,sizeof(long)*len);
    __result76__ = gComeFunResultObject = __result_obj__ = result_151;
    come_call_finalizer3(result_151,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_152;
struct buffer* __result77__;
    result_152=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3931, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(result_152,(char*)self,sizeof(float)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = result_152;
    come_call_finalizer3(result_152,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_153;
struct buffer* __result78__;
    result_153=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3938, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(result_153,(char*)self,sizeof(double)*len);
    __result78__ = gComeFunResultObject = __result_obj__ = result_153;
    come_call_finalizer3(result_153,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

char* buffer_printable(struct buffer* self){
void* __result_obj__=(void*)0;
int len_154;
void* __right_value45 = (void*)0;
char* result_155;
int n_156;
int i_157;
unsigned char c_158;
char* __result79__;
    len_154=self->len;
    result_155=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_154*2+1)), "/usr/local/include/comelang.h", 3946, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    n_156=0;
    for(    i_157=0;    i_157<len_154;    i_157++    ){
        c_158=self->buf[i_157];
        if(        (c_158>=0&&c_158<32)||c_158==127) {
            result_155[n_156++]=94;
            result_155[n_156++]=c_158+65-1;
        }
        else if(        c_158>127) {
            result_155[n_156++]=63;
        }
        else {
            result_155[n_156++]=c_158;
        }
    }
    result_155[n_156]=0;
    __result79__ = gComeFunResultObject = __result_obj__ = result_155;
    result_155 = come_decrement_ref_count2(result_155, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result81__;
    __result81__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4266, "struct smart_pointer$1char*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

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

struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4271, "struct smart_pointer$1char*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result84__;
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1shortp_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4276, "struct smart_pointer$1short*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
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

struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1intp_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4281, "struct smart_pointer$1int*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
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

struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1longp_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4286, "struct smart_pointer$1long*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
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

struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_159;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result89__;
    buf_159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4319, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(buf_159,(char*)self,sizeof(char)*len);
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4321, "struct smart_pointer$1char*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_159))));
    come_call_finalizer3(buf_159,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_160;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result91__;
    buf_160=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4326, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(buf_160,(char*)self,sizeof(char*)*len);
    __result91__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charpp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 4328, "struct smart_pointer$1charp*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_160))));
    come_call_finalizer3(buf_160,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
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

struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_161;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result92__;
    buf_161=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4333, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(buf_161,(char*)self,sizeof(short)*len);
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1shortp_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4335, "struct smart_pointer$1short*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_161))));
    come_call_finalizer3(buf_161,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_162;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result93__;
    buf_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4340, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(buf_162,(char*)self,sizeof(int)*len);
    __result93__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1intp_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4342, "struct smart_pointer$1int*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_162))));
    come_call_finalizer3(buf_162,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_163;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result94__;
    buf_163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4347, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(buf_163,(char*)self,sizeof(long)*len);
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1longp_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4349, "struct smart_pointer$1long*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_163))));
    come_call_finalizer3(buf_163,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_164;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result96__;
    buf_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4354, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(buf_164,(char*)self,sizeof(float)*len);
    __result96__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1floatp_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 4356, "struct smart_pointer$1float*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_164))));
    come_call_finalizer3(buf_164,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result96__;
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

struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_165;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result98__;
    buf_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4361, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(buf_165,(char*)self,sizeof(double)*len);
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1doublep_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 4363, "struct smart_pointer$1double*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_165))));
    come_call_finalizer3(buf_165,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
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

struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result101__;
    __result101__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1charp_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 4368, "struct list$1char*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result101__;
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

struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charpp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 4373, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
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

struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result107__;
    __result107__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1shortp_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 4378, "struct list$1short*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result107__;
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

struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1intp_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 4383, "struct list$1int*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
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

struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result113__;
    __result113__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1longp_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 4388, "struct list$1long*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result113__;
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

struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result116__;
    __result116__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1floatp_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 4393, "struct list$1float*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result116__;
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

struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result119__;
    __result119__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1doublep_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 4398, "struct list$1double*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
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

struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result121__;
    __result121__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1charp_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 4403, "struct vector$1char*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result121__;
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

struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result123__;
    __result123__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charpp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 4408, "struct vector$1charp*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result123__;
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

struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result125__;
    __result125__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1shortp_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 4413, "struct vector$1short*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result125__;
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

struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result127__;
    __result127__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1intp_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 4418, "struct vector$1int*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result127__;
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

struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result129__;
    __result129__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1longp_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 4423, "struct vector$1long*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result129__;
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

struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result131__;
    __result131__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1floatp_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 4428, "struct vector$1float*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result131__;
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

struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result133__;
    __result133__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1doublep_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 4433, "struct vector$1double*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result133__;
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

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool boolp_equals(_Bool* self, _Bool* right){
    return *self==*right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
char* __result134__;
int len_215;
void* __right_value146 = (void*)0;
char* result_216;
char* __result135__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value145=__builtin_string("")));
        __right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    len_215=strlen(self)+strlen(right);
    result_216=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_215+1)), "/usr/local/include/comelang.h", 4647, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    strncpy(result_216,self,len_215+1);
    strncat(result_216,right,len_215+1);
    __result135__ = gComeFunResultObject = __result_obj__ = result_216;
    result_216 = come_decrement_ref_count2(result_216, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value147 = (void*)0;
char* __result136__;
int len_217;
void* __right_value148 = (void*)0;
char* result_218;
char* __result137__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result136__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value147=__builtin_string("")));
        __right_value147 = come_decrement_ref_count2(__right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    len_217=strlen(self)+strlen(right);
    result_218=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_217+1)), "/usr/local/include/comelang.h", 4662, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    strncpy(result_218,self,len_217+1);
    strncat(result_218,right,len_217+1);
    __result137__ = gComeFunResultObject = __result_obj__ = result_218;
    result_218 = come_decrement_ref_count2(result_218, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value149 = (void*)0;
char* __result138__;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct buffer* buf_219;
int i_220;
void* __right_value152 = (void*)0;
char* __result139__;
    if(    self==((void*)0)) {
        __result138__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value149=__builtin_string("")));
        __right_value149 = come_decrement_ref_count2(__right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result138__;
    }
    buf_219=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4675, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_220=0;    i_220<right;    i_220++    ){
        buffer_append_str(buf_219,self);
    }
    __result139__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value152=buffer_to_string(buf_219)));
    come_call_finalizer3(buf_219,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value153 = (void*)0;
char* __result140__;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct buffer* buf_221;
int i_222;
void* __right_value156 = (void*)0;
char* __result141__;
    if(    self==((void*)0)) {
        __result140__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value153=__builtin_string("")));
        __right_value153 = come_decrement_ref_count2(__right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    buf_221=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4689, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_222=0;    i_222<right;    i_222++    ){
        buffer_append_str(buf_221,self);
    }
    __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value156=buffer_to_string(buf_221)));
    come_call_finalizer3(buf_221,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result141__;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_223;
int i_224;
    result_223=(_Bool)0;
    for(    i_224=0;    i_224<len;    i_224++    ){
        if(        strncmp(self[i_224],str,strlen(self[i_224]))==0) {
            result_223=(_Bool)1;
            break;
        }
    }
    return result_223;
}

unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}

unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}

unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}

unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}

unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value){
int result_225;
char* p_226;
    if(    value==((void*)0)) {
        return 0;
    }
    result_225=0;
    p_226=value;
    while(*p_226) {
        result_225+=(*p_226);
        p_226++;
    }
    return result_225;
}

unsigned int string_get_hash_key(char* value){
int result_227;
char* p_228;
    if(    value==((void*)0)) {
        return 0;
    }
    result_227=0;
    p_228=value;
    while(*p_228) {
        result_227+=(*p_228);
        p_228++;
    }
    return result_227;
}

unsigned int voidp_get_hash_key(void* value){
    return (int_get_hash_key(((int)value)));
}

_Bool bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

char* charp_clone(char* self){
void* __result_obj__=(void*)0;
char* __result142__;
void* __right_value157 = (void*)0;
char* __result143__;
    if(    self==((void*)0)) {
        __result142__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result142__;
    }
    __result143__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value157=__builtin_string(self)));
    __right_value157 = come_decrement_ref_count2(__right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

char* string_clone(char* self){
void* __result_obj__=(void*)0;
char* __result144__;
void* __right_value158 = (void*)0;
char* __result145__;
    if(    self==((void*)0)) {
        __result144__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value158=__builtin_string(self)));
    __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

void charp_finalize(char* self){
    if(    self==((void*)0)) {
        return;
    }
    come_free(self);
}

_Bool xiswalpha(int c){
_Bool result_229;
    result_229=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_229;
}

_Bool xiswblank(int c){
    return c==32||c==9;
}

_Bool xiswdigit(int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xisalpha(char c){
_Bool result_230;
    result_230=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_230;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_231;
    result_231=(c>=32&&c<=126);
    return result_231;
}

_Bool xiswascii(int c){
_Bool result_232;
    result_232=(c>=32&&c<=126);
    return result_232;
}

int string_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value159 = (void*)0;
char* __result146__;
int len_233;
void* __right_value160 = (void*)0;
char* result_234;
int i_235;
char* __result147__;
    if(    str==((void*)0)) {
        __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value159=__builtin_string("")));
        __right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    len_233=strlen(str);
    result_234=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_233+1)), "/usr/local/include/comelang.h", 4966, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    for(    i_235=0;    i_235<len_233;    i_235++    ){
        result_234[i_235]=str[len_233-i_235-1];
    }
    result_234[len_233]=0;
    __result147__ = gComeFunResultObject = __result_obj__ = result_234;
    come_call_finalizer3(result_234,charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value161 = (void*)0;
char* __result148__;
int len_236;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
char* __result149__;
void* __right_value164 = (void*)0;
char* __result150__;
void* __right_value165 = (void*)0;
char* __result151__;
void* __right_value166 = (void*)0;
char* result_237;
char* __result152__;
    if(    str==((void*)0)) {
        __result148__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value161=__builtin_string("")));
        __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    len_236=strlen(str);
    if(    head<0) {
        head+=len_236;
    }
    if(    tail<0) {
        tail+=len_236+1;
    }
    if(    head>tail) {
        __result149__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value163=charp_reverse(((char*)(__right_value162=charp_substring(str,tail,head))))));
        __right_value162 = come_decrement_ref_count2(__right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_236) {
        tail=len_236;
    }
    if(    head==tail) {
        __result150__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value164=__builtin_string("")));
        __right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    if(    tail-head+1<1) {
        __result151__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=__builtin_string("")));
        __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    result_237=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 5012, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(result_237,str+head,tail-head);
    result_237[tail-head]=0;
    __result152__ = gComeFunResultObject = __result_obj__ = result_237;
    result_237 = come_decrement_ref_count2(result_237, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value167 = (void*)0;
char* __result153__;
int len_238;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
char* __result154__;
void* __right_value170 = (void*)0;
char* __result155__;
void* __right_value171 = (void*)0;
char* __result156__;
void* __right_value172 = (void*)0;
char* result_239;
char* __result157__;
    if(    str==((void*)0)) {
        __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=__builtin_string("")));
        __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    len_238=strlen(str);
    if(    head<0) {
        head+=len_238;
    }
    if(    tail<0) {
        tail+=len_238+1;
    }
    if(    head>tail) {
        __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value169=charp_reverse(((char*)(__right_value168=charp_substring(str,tail,head))))));
        __right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_238) {
        tail=len_238;
    }
    if(    head==tail) {
        __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value170=__builtin_string("")));
        __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    if(    tail-head+1<1) {
        __result156__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value171=__builtin_string("")));
        __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    result_239=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 5055, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(result_239,str+head,tail-head);
    result_239[tail-head]=0;
    __result157__ = gComeFunResultObject = __result_obj__ = result_239;
    result_239 = come_decrement_ref_count2(result_239, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value173 = (void*)0;
char* __result158__;
int len_240;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
char* __result159__;
void* __right_value176 = (void*)0;
char* __result160__;
void* __right_value177 = (void*)0;
char* __result161__;
void* __right_value178 = (void*)0;
char* result_241;
char* __result162__;
    if(    str==((void*)0)) {
        __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value173=__builtin_string("")));
        __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    len_240=strlen(str);
    if(    head<0) {
        head+=len_240;
    }
    if(    tail<0) {
        tail+=len_240+1;
    }
    if(    head>tail) {
        __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value175=charp_reverse(((char*)(__right_value174=charp_substring(str,tail,head))))));
        __right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_240) {
        tail=len_240;
    }
    if(    head==tail) {
        __result160__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value176=__builtin_string("")));
        __right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    if(    tail-head+1<1) {
        __result161__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value177=__builtin_string("")));
        __right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    result_241=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 5098, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(result_241,str+head,tail-head);
    result_241[tail-head]=0;
    __result162__ = gComeFunResultObject = __result_obj__ = result_241;
    result_241 = come_decrement_ref_count2(result_241, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value179 = (void*)0;
char* __result163__;
va_list args_242;
char* result_243;
int len_244;
void* __right_value180 = (void*)0;
char* __result164__;
void* __right_value181 = (void*)0;
char* result2_245;
char* __result165__;
memset(&args_242, 0, sizeof(va_list));
result_243 = (void*)0;
    if(    msg==((void*)0)) {
        __result163__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value179=__builtin_string("")));
        __right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    __builtin_va_start(args_242,msg);
    len_244=vasprintf(&result_243,msg,args_242);
    __builtin_va_end(args_242);
    if(    len_244<0) {
        __result164__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value180=__builtin_string("")));
        __right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    result2_245=(char*)come_increment_ref_count(__builtin_string(result_243));
    free(result_243);
    __result165__ = gComeFunResultObject = __result_obj__ = result2_245;
    result2_245 = come_decrement_ref_count2(result2_245, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result165__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value182 = (void*)0;
char* __result166__;
int len_246;
void* __right_value183 = (void*)0;
char* __result167__;
void* __right_value184 = (void*)0;
char* __result168__;
void* __right_value185 = (void*)0;
char* result_247;
char* __result169__;
    if(    str==((void*)0)) {
        __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value182=__builtin_string("")));
        __right_value182 = come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    len_246=strlen(str);
    if(    strcmp(str,"")==0) {
        __result167__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value183=__builtin_string(str)));
        __right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result167__;
    }
    if(    head<0) {
        head+=len_246;
    }
    if(    tail<0) {
        tail+=len_246+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value184=__builtin_string(str)));
        __right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    if(    tail>=len_246) {
        tail=len_246;
    }
    result_247=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_246-(tail-head)+1)), "/usr/local/include/comelang.h", 5160, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(result_247,str,head);
    memcpy(result_247+head,str+tail,len_246-tail);
    result_247[len_246-(tail-head)]=0;
    __result169__ = gComeFunResultObject = __result_obj__ = result_247;
    come_call_finalizer3(result_247,charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct list$1charph* __result171__;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct list$1charph* result_250;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct buffer* str_251;
int i_252;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct list$1charph* __result173__;
    if(    self==((void*)0)) {
        __result171__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value187=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 5173, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0)))));
        come_call_finalizer3(__right_value187,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    result_250=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 5176, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    str_251=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 5178, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_252=0;    i_252<charp_length(self);    i_252++    ){
        if(        self[i_252]==c) {
            list$1charphp_push_back(result_250,(char*)come_increment_ref_count(__builtin_string(str_251->buf)));
            buffer_reset(str_251);
        }
        else {
            buffer_append_char(str_251,self[i_252]);
        }
    }
    if(    buffer_length(str_251)!=0) {
        list$1charphp_push_back(result_250,(char*)come_increment_ref_count(__builtin_string(str_251->buf)));
    }
    __result173__ = gComeFunResultObject = __result_obj__ = result_250;
    come_call_finalizer3(result_250,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_251,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result173__;
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

char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result174__;
    __result174__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result175__;
    __result175__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result175__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_256;
void* __right_value199 = (void*)0;
char* result_257;
int n_258;
int i_259;
char c_260;
char* __result176__;
    len_256=charp_length(str);
    result_257=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_256*2+1)), "/usr/local/include/comelang.h", 5210, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    n_258=0;
    for(    i_259=0;    i_259<len_256;    i_259++    ){
        c_260=str[i_259];
        if(        (c_260>=0&&c_260<32)||c_260==127) {
            result_257[n_258++]=94;
            result_257[n_258++]=c_260+65-1;
        }
        else {
            result_257[n_258++]=c_260;
        }
    }
    result_257[n_258]=0;
    __result176__ = gComeFunResultObject = __result_obj__ = result_257;
    result_257 = come_decrement_ref_count2(result_257, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __result_obj__=(void*)0;
void* __right_value200 = (void*)0;
char* __result177__;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct buffer* result_261;
char* p_262;
char* p2_263;
void* __right_value203 = (void*)0;
char* __result178__;
    if(    str==((void*)0)||replace==((void*)0)) {
        __result177__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value200=__builtin_string(self)));
        __right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result177__;
    }
    result_261=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 5238, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    p_262=self;
    while((_Bool)1) {
        p2_263=strstr(p_262,str);
        if(        p2_263==((void*)0)) {
            p2_263=p_262;
            while(*p2_263) {
                p2_263++;
            }
            buffer_append(result_261,p_262,p2_263-p_262);
            break;
        }
        buffer_append(result_261,p_262,p2_263-p_262);
        buffer_append_str(result_261,replace);
        p_262=p2_263+strlen(str);
    }
    __result178__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value203=buffer_to_string(result_261)));
    come_call_finalizer3(result_261,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value203 = come_decrement_ref_count2(__right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
void* __right_value204 = (void*)0;
char* __result179__;
char* p_264;
void* __right_value205 = (void*)0;
char* __result180__;
void* __right_value206 = (void*)0;
char* __result181__;
void* __right_value207 = (void*)0;
char* __result182__;
    if(    path==((void*)0)) {
        __result179__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value204=__builtin_string("")));
        __right_value204 = come_decrement_ref_count2(__right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result179__;
    }
    p_264=path+strlen(path);
    while(p_264>=path) {
        if(        *p_264==47) {
            break;
        }
        else {
            p_264--;
        }
    }
    if(    p_264<path) {
        __result180__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value205=__builtin_string(path)));
        __right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result180__;
    }
    else {
        __result181__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value206=__builtin_string(p_264+1)));
        __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result181__;
    }
    __result182__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value207=__builtin_string("")));
    __right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

char* xnoextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value208 = (void*)0;
char* __result183__;
void* __right_value209 = (void*)0;
char* path2_265;
char* p_266;
void* __right_value210 = (void*)0;
char* __result184__;
void* __right_value211 = (void*)0;
char* __result185__;
void* __right_value212 = (void*)0;
char* __result186__;
    if(    path==((void*)0)) {
        __result183__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value208=__builtin_string("")));
        __right_value208 = come_decrement_ref_count2(__right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result183__;
    }
    path2_265=(char*)come_increment_ref_count(xbasename(path));
    p_266=path2_265+strlen(path2_265);
    while(p_266>=path2_265) {
        if(        *p_266==46) {
            break;
        }
        else {
            p_266--;
        }
    }
    if(    p_266<path2_265) {
        __result184__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value210=__builtin_string(path2_265)));
        path2_265 = come_decrement_ref_count2(path2_265, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result184__;
    }
    else {
        __result185__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value211=charp_substring(path2_265,0,p_266-path2_265)));
        path2_265 = come_decrement_ref_count2(path2_265, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value211 = come_decrement_ref_count2(__right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    __result186__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value212=__builtin_string("")));
    path2_265 = come_decrement_ref_count2(path2_265, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value213 = (void*)0;
char* __result187__;
char* p_267;
void* __right_value214 = (void*)0;
char* __result188__;
void* __right_value215 = (void*)0;
char* __result189__;
void* __right_value216 = (void*)0;
char* __result190__;
    if(    path==((void*)0)) {
        __result187__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value213=__builtin_string("")));
        __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result187__;
    }
    p_267=path+strlen(path);
    while(p_267>=path) {
        if(        *p_267==46) {
            break;
        }
        else {
            p_267--;
        }
    }
    if(    p_267<path) {
        __result188__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value214=__builtin_string(path)));
        __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    else {
        __result189__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value215=__builtin_string(p_267+1)));
        __right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    __result190__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value216=__builtin_string("")));
    __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

char* bool_to_string(_Bool self){
void* __result_obj__=(void*)0;
void* __right_value217 = (void*)0;
char* __result191__;
void* __right_value218 = (void*)0;
char* __result192__;
    if(    self) {
        __result191__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value217=__builtin_string("true")));
        __right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    else {
        __result192__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value218=__builtin_string("false")));
        __right_value218 = come_decrement_ref_count2(__right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
}

char* char_to_string(char self){
void* __result_obj__=(void*)0;
void* __right_value219 = (void*)0;
char* __result193__;
    __result193__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value219=xsprintf("%c",self)));
    __right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result193__;
}

char* short_to_string(short self){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
char* __result194__;
    __result194__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value220=xsprintf("%d",self)));
    __right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

char* int_to_string(int self){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result195__;
    __result195__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=xsprintf("%d",self)));
    __right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

char* long_to_string(long self){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
char* __result196__;
    __result196__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=xsprintf("%ld",self)));
    __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result196__;
}

char* size_t_to_string(unsigned long  int self){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
char* __result197__;
    __result197__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value223=xsprintf("%ld",self)));
    __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

char* float_to_string(float self){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
char* __result198__;
    __result198__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=xsprintf("%f",self)));
    __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

char* double_to_string(double self){
void* __result_obj__=(void*)0;
void* __right_value225 = (void*)0;
char* __result199__;
    __result199__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value225=xsprintf("%lf",self)));
    __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

char* string_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value226 = (void*)0;
char* __result200__;
void* __right_value227 = (void*)0;
char* __result201__;
    if(    self==((void*)0)) {
        __result200__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value226=__builtin_string("")));
        __right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    __result201__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value227=__builtin_string(self)));
    __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

char* charp_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value228 = (void*)0;
char* __result202__;
void* __right_value229 = (void*)0;
char* __result203__;
    if(    self==((void*)0)) {
        __result202__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value228=__builtin_string("")));
        __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    __result203__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value229=__builtin_string(self)));
    __right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

int bool_compare(_Bool left, _Bool right){
    if(    !left&&right) {
        return -1;
    }
    else if(    left&&right) {
        return 0;
    }
    else if(    !left&&!right) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

char* FILE_read(struct __sFILE* f){
void* __result_obj__=(void*)0;
void* __right_value230 = (void*)0;
char* __result204__;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct buffer* buf_268;
int size_270;
void* __right_value233 = (void*)0;
char* __result205__;
    if(    f==((void*)0)) {
        __result204__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value230=__builtin_string("")));
        __right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    buf_268=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 5574, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while(1) {
        char buf2_269[1024];
        memset(&buf2_269, 0, sizeof(char)        *(1024)        );
        size_270=fread(buf2_269,1,1024,f);
        buffer_append(buf_268,buf2_269,size_270);
        if(        size_270<1024) {
            break;
        }
    }
    __result205__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value233=buffer_to_string(buf_268)));
    come_call_finalizer3(buf_268,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result205__;
}

int FILE_write(struct __sFILE* f, char* str){
    if(    f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct __sFILE* f){
int result_271;
    if(    f==((void*)0)) {
        return -1;
    }
    result_271=fclose(f);
    if(    result_271<0) {
        return result_271;
    }
    return result_271;
}

struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct __sFILE* __result206__;
va_list args_273;
int result_274;
struct __sFILE* __result207__;
struct __sFILE* __result208__;
memset(&args_273, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)) {
        __result206__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    char msg2_272[1024*2*2*2];
    memset(&msg2_272, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_273,msg);
    vsnprintf(msg2_272,1024*2*2*2,msg,args_273);
    __builtin_va_end(args_273);
    result_274=fprintf(f,"%s",msg2_272);
    if(    result_274<0) {
        __result207__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    __result208__ = gComeFunResultObject = __result_obj__ = f;
    gComeFunResultObject = (void*)0;
    return __result208__;
}

int charp_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_275;
int result_276;
int result2_277;
f_275 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_275=fopen(file_name,"a");
    }
    else {
        f_275=fopen(file_name,"w");
    }
    if(    f_275==((void*)0)) {
        return -1;
    }
    result_276=fwrite(self,strlen(self),1,f_275);
    if(    result_276<0) {
        return result_276;
    }
    result2_277=fclose(f_275);
    if(    result2_277<0) {
        return result2_277;
    }
    return result_276;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value234 = (void*)0;
char* __result209__;
struct __sFILE* f_278;
void* __right_value235 = (void*)0;
char* __result210__;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct buffer* buf_279;
int size_281;
void* __right_value238 = (void*)0;
char* result_282;
int result2_283;
void* __right_value239 = (void*)0;
char* __result211__;
char* __result212__;
    if(    file_name==((void*)0)) {
        __result209__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value234=__builtin_string("")));
        __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    f_278=fopen(file_name,"r");
    if(    f_278==((void*)0)) {
        __result210__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value235=__builtin_string("")));
        __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    buf_279=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 5682, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while(1) {
        char buf2_280[1024];
        memset(&buf2_280, 0, sizeof(char)        *(1024)        );
        size_281=fread(buf2_280,1,1024,f_278);
        buffer_append(buf_279,buf2_280,size_281);
        if(        size_281<1024) {
            break;
        }
    }
    result_282=(char*)come_increment_ref_count(buffer_to_string(buf_279));
    result2_283=fclose(f_278);
    if(    result2_283<0) {
        __result211__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value239=__builtin_string("")));
        come_call_finalizer3(buf_279,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_282 = come_decrement_ref_count2(result_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    __result212__ = gComeFunResultObject = __result_obj__ = result_282;
    come_call_finalizer3(buf_279,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_282 = come_decrement_ref_count2(result_282, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

struct list$1charph* FILE_readlines(struct __sFILE* f){
void* __result_obj__=(void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct list$1charph* result_284;
struct list$1charph* __result213__;
void* __right_value242 = (void*)0;
struct list$1charph* __result214__;
    result_284=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 5709, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    f==((void*)0)) {
        __result213__ = gComeFunResultObject = __result_obj__ = result_284;
        come_call_finalizer3(result_284,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    while(1) {
        char buf_285[1024];
        memset(&buf_285, 0, sizeof(char)        *(1024)        );
        if(        fgets(buf_285,1024,f)==((void*)0)) {
            break;
        }
        list$1charphp_push_back(result_284,(char*)come_increment_ref_count(__builtin_string(buf_285)));
    }
    __result214__ = gComeFunResultObject = __result_obj__ = result_284;
    come_call_finalizer3(result_284,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*)){
struct __sFILE* f_286;
    if(    path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_286=fopen(path,mode);
    if(    f_286) {
        block(parent,f_286);
        fclose(f_286);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value243 = (void*)0;
char* __result215__;
void* __right_value244 = (void*)0;
char* __result216__;
    if(    self==((void*)0)) {
        __result215__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value243=__builtin_string("")));
        __right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    puts(self);
    __result216__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value244=__builtin_string(self)));
    __right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

char* charp_print(char* self){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
char* __result217__;
void* __right_value246 = (void*)0;
char* __result218__;
    if(    self==((void*)0)) {
        __result217__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value245=__builtin_string("")));
        __right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    printf("%s",self);
    __result218__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value246=__builtin_string(self)));
    __right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
char* __result219__;
char* msg2_287;
va_list args_288;
void* __right_value248 = (void*)0;
char* __result220__;
msg2_287 = (void*)0;
memset(&args_288, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result219__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value247=__builtin_string("")));
        __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    __builtin_va_start(args_288,self);
    vasprintf(&msg2_287,self,args_288);
    __builtin_va_end(args_288);
    printf("%s",msg2_287);
    free(msg2_287);
    __result220__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value248=__builtin_string(self)));
    __right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_289;
    for(    i_289=0;    i_289<self;    i_289++    ){
        block(parent,i_289);
    }
}

int assert_v2(int exp){
    if(    exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}

int re_match(const char* pattern, const char* text, int* matchlength){
    return re_matchp(re_compile(pattern),text,matchlength);
}

int re_matchp(struct regex_t* pattern, const char* text, int* matchlength){
int idx_290;
    *matchlength=0;
    if(    pattern!=0) {
        if(        pattern[0].type==(2)) {
            return ((((matchpattern(&pattern[1],text,matchlength)))?(0):(-1)));
        }
        else {
            idx_290=-1;
            do {
                idx_290+=1;
                if(                matchpattern(pattern,text,matchlength)) {
                    if(                    text[0]==0) {
                        return -1;
                    }
                    return idx_290;
                }
            } while(*text++!=0);
        }
    }
    return -1;
}

struct regex_t* re_compile(const char* pattern){
void* __result_obj__=(void*)0;
int ccl_bufidx_293;
char c_294;
int i_295;
int j_296;
int buf_begin_297;
struct regex_t* __result221__;
struct regex_t* __result222__;
struct regex_t* __result223__;
struct regex_t* __result224__;
struct regex_t* __result225__;
struct regex_t* __result226__;
struct regex_t* __result227__;
memset(&c_294, 0, sizeof(char));
    static struct regex_t re_compiled_291[30];
    memset(&re_compiled_291, 0, sizeof(struct regex_t)    *(30)    );
    static unsigned char ccl_buf_292[40];
    memset(&ccl_buf_292, 0, sizeof(unsigned char)    *(40)    );
    ccl_bufidx_293=1;
    i_295=0;
    j_296=0;
    while(pattern[i_295]!=0&&(j_296+1<30)) {
        c_294=pattern[i_295];
        switch (c_294) {
            case 94:
            {
                re_compiled_291[j_296].type=(2);
            }
            break;
            case 36:
            {
                re_compiled_291[j_296].type=(3);
            }
            break;
            case 46:
            {
                re_compiled_291[j_296].type=(1);
            }
            break;
            case 42:
            {
                re_compiled_291[j_296].type=(5);
            }
            break;
            case 43:
            {
                re_compiled_291[j_296].type=(6);
            }
            break;
            case 63:
            {
                re_compiled_291[j_296].type=(4);
            }
            break;
            case 92:
            {
                if(                pattern[i_295+1]!=0) {
                    i_295+=1;
                    switch (pattern[i_295]) {
                        case 100:
                        {
                            re_compiled_291[j_296].type=(10);
                        }
                        break;
                        case 68:
                        {
                            re_compiled_291[j_296].type=(11);
                        }
                        break;
                        case 119:
                        {
                            re_compiled_291[j_296].type=(12);
                        }
                        break;
                        case 87:
                        {
                            re_compiled_291[j_296].type=(13);
                        }
                        break;
                        case 115:
                        {
                            re_compiled_291[j_296].type=(14);
                        }
                        break;
                        case 83:
                        {
                            re_compiled_291[j_296].type=(15);
                        }
                        break;
                        default:
                        {
                            re_compiled_291[j_296].type=(7);
                            re_compiled_291[j_296].u.ch=pattern[i_295];
                        }
                        break;
                    }
                }
            }
            break;
            case 91:
            {
                buf_begin_297=ccl_bufidx_293;
                if(                pattern[i_295+1]==94) {
                    re_compiled_291[j_296].type=(9);
                    i_295+=1;
                    if(                    pattern[i_295+1]==0) {
                        __result221__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                        gComeFunResultObject = (void*)0;
                        return __result221__;
                    }
                }
                else {
                    re_compiled_291[j_296].type=(8);
                }
                while((pattern[++i_295]!=93)&&(pattern[i_295]!=0)) {
                    if(                    pattern[i_295]==92) {
                        if(                        ccl_bufidx_293>=40-1) {
                            __result222__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                            gComeFunResultObject = (void*)0;
                            return __result222__;
                        }
                        if(                        pattern[i_295+1]==0) {
                            __result223__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                            gComeFunResultObject = (void*)0;
                            return __result223__;
                        }
                        ccl_buf_292[ccl_bufidx_293++]=pattern[i_295++];
                    }
                    else if(                    ccl_bufidx_293>=40) {
                        __result224__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                        gComeFunResultObject = (void*)0;
                        return __result224__;
                    }
                    ccl_buf_292[ccl_bufidx_293++]=pattern[i_295];
                }
                if(                ccl_bufidx_293>=40) {
                    __result225__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                    gComeFunResultObject = (void*)0;
                    return __result225__;
                }
                ccl_buf_292[ccl_bufidx_293++]=0;
                re_compiled_291[j_296].u.ccl=&ccl_buf_292[buf_begin_297];
            }
            break;
            default:
            {
                re_compiled_291[j_296].type=(7);
                re_compiled_291[j_296].u.ch=c_294;
            }
            break;
        }
        if(        pattern[i_295]==0) {
            __result226__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
            gComeFunResultObject = (void*)0;
            return __result226__;
        }
        i_295+=1;
        j_296+=1;
    }
    re_compiled_291[j_296].type=(0);
    __result227__ = gComeFunResultObject = __result_obj__ = (struct regex_t*)re_compiled_291;
    gComeFunResultObject = (void*)0;
    return __result227__;
}

void re_print(struct regex_t* pattern){
int i_299;
int j_300;
char c_301;
memset(&i_299, 0, sizeof(int));
memset(&j_300, 0, sizeof(int));
memset(&c_301, 0, sizeof(char));
    const char* types_298[]={"UNUSED","DOT","BEGIN","END","QUESTIONMARK","STAR","PLUS","CHAR","CHAR_CLASS","INV_CHAR_CLASS","DIGIT","NOT_DIGIT","ALPHA","NOT_ALPHA","WHITESPACE","NOT_WHITESPACE","BRANCH"};
    for(    i_299=0;    i_299<30;    ++i_299    ){
        if(        pattern[i_299].type==(0)) {
            break;
        }
        printf("type: %s",types_298[pattern[i_299].type]);
        if(        pattern[i_299].type==(8)||pattern[i_299].type==(9)) {
            printf(" [");
            for(            j_300=0;            j_300<40;            ++j_300            ){
                c_301=pattern[i_299].u.ccl[j_300];
                if(                (c_301==0)||(c_301==93)) {
                    break;
                }
                printf("%c",c_301);
            }
            printf("]");
        }
        else if(        pattern[i_299].type==(7)) {
            printf(" '%c'",pattern[i_299].u.ch);
        }
        printf("\n");
    }
}

int matchdigit(char c){
    return isdigit(c);
}

int matchalpha(char c){
    return isalpha(c);
}

int matchwhitespace(char c){
    return isspace(c);
}

int matchalphanum(char c){
    return ((c==95)||matchalpha(c)||matchdigit(c));
}

int matchrange(char c, const char* str){
    return ((c!=45)&&(str[0]!=0)&&(str[0]!=45)&&(str[1]==45)&&(str[2]!=0)&&((c>=str[0])&&(c<=str[2])));
}

int matchdot(char c){
    (void)c;
    return 1;
}

int ismetachar(char c){
    return ((c==115)||(c==83)||(c==119)||(c==87)||(c==100)||(c==68));
}

int matchmetachar(char c, const char* str){
    switch (str[0]) {
        case 100:
        return matchdigit(c);
        case 68:
        return !matchdigit(c);
        case 119:
        return matchalphanum(c);
        case 87:
        return !matchalphanum(c);
        case 115:
        return matchwhitespace(c);
        case 83:
        return !matchwhitespace(c);
        default:
        return (c==str[0]);
    }
}

int matchcharclass(char c, const char* str){
    do {
        if(        matchrange(c,str)) {
            return 1;
        }
        else if(        str[0]==92) {
            str+=1;
            if(            matchmetachar(c,str)) {
                return 1;
            }
            else if(            (c==str[0])&&!ismetachar(c)) {
                return 1;
            }
        }
        else if(        c==str[0]) {
            if(            c==45) {
                return ((str[-1]==0)||(str[1]==0));
            }
            else {
                return 1;
            }
        }
    } while(*str++!=0);
    return 0;
}

int matchone(struct regex_t p, char c){
    switch (p.type) {
        case (1):
        return matchdot(c);
        case (8):
        return matchcharclass(c,(const char*)p.u.ccl);
        case (9):
        return !matchcharclass(c,(const char*)p.u.ccl);
        case (10):
        return matchdigit(c);
        case (11):
        return !matchdigit(c);
        case (12):
        return matchalphanum(c);
        case (13):
        return !matchalphanum(c);
        case (14):
        return matchwhitespace(c);
        case (15):
        return !matchwhitespace(c);
        default:
        return (p.u.ch==c);
    }
}

int matchstar(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
int prelen_302;
    prelen_302=*matchlength;
    const char* prepoint_303=text;
    while((text[0]!=0)&&matchone(p,*text)) {
        text++;
        (*matchlength)++;
    }
    while(text>=prepoint_303) {
        if(        matchpattern(pattern,text--,matchlength)) {
            return 1;
        }
        (*matchlength)--;
    }
    *matchlength=prelen_302;
    return 0;
}

int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
    const char* prepoint_304=text;
    while((text[0]!=0)&&matchone(p,*text)) {
        text++;
        (*matchlength)++;
    }
    while(text>prepoint_304) {
        if(        matchpattern(pattern,text--,matchlength)) {
            return 1;
        }
        (*matchlength)--;
    }
    return 0;
}

int matchquestion(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
    if(    p.type==(0)) {
        return 1;
    }
    if(    matchpattern(pattern,text,matchlength)) {
        return 1;
    }
    if(    *text&&matchone(p,*text++)) {
        if(        matchpattern(pattern,text,matchlength)) {
            (*matchlength)++;
            return 1;
        }
    }
    return 0;
}

int matchpattern(struct regex_t* pattern, const char* text, int* matchlength){
int pre_305;
    pre_305=*matchlength;
    do {
        if(        (pattern[0].type==(0))||(pattern[1].type==(4))) {
            return matchquestion(pattern[0],&pattern[2],text,matchlength);
        }
        else if(        pattern[1].type==(5)) {
            return matchstar(pattern[0],&pattern[2],text,matchlength);
        }
        else if(        pattern[1].type==(6)) {
            return matchplus(pattern[0],&pattern[2],text,matchlength);
        }
        else if(        (pattern[0].type==(3))&&pattern[1].type==(0)) {
            return (text[0]==0);
        }
        (*matchlength)++;
    } while((text[0]!=0)&&matchone(*pattern++,*text++));
    *matchlength=pre_305;
    return 0;
}

_Bool wchar_t_equals(int left, int right){
    return left==right;
}

_Bool wchar_tp_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(int left, int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(int left, int right){
    return left!=right;
}

_Bool wchar_tp_operator_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(int* left, int* right){
    return wcscmp(left,right)!=0;
}

unsigned int wchar_t_get_hash_key(int value){
    return value;
}

unsigned int wchar_tp_get_hash_key(int* value){
unsigned int result_306;
int* p_307;
    result_306=0;
    p_307=value;
    while(*p_307) {
        result_306+=*p_307;
        p_307++;
    }
    return result_306;
}

char* wchar_t_to_string(int wc){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
char* __result228__;
    __result228__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value249=xsprintf("%ls",wc)));
    __right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

int come_main_v1(int argc, char** argv){
    puts("HELLO COMELANG");
    return 0;
}

int main(int argc, char** argv){
int __result229__;
    come_heap_init(0, 0, 0);
    setlocale(0,"");
    __result229__ = come_main_v2(argc,argv);
    come_call_finalizer3(gExceptionRightValueObjects,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_heap_final();
    return __result229__;
}

static void list$1voidphp_finalize(struct list$1voidph* self){
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
void* __dec_obj31;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            come_call_finalizer3(__dec_obj31,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct CVALUE* CVALUE_initialize(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result230__;
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj32;
struct sType* __dec_obj33;
char* __dec_obj52;
char* __dec_obj53;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj32=self->c_value;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj33=self->type;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj52=self->c_value_without_right_value_objects;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj53=self->c_value_without_cast_object_value;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj34;
struct sType* __dec_obj35;
struct sType* __dec_obj36;
char* __dec_obj37;
char* __dec_obj38;
struct list$1voidph* __dec_obj39;
struct list$1sNodeph* __dec_obj40;
struct list$1voidph* __dec_obj42;
struct list$1charph* __dec_obj43;
struct sType* __dec_obj44;
struct sNode* __dec_obj45;
struct sType* __dec_obj46;
struct sNode* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj34=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj35=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj36=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj37=self->mInterfaceName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj38=self->mGenericsName;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj39=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj39,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj40=self->mArrayNum;
            come_call_finalizer3(__dec_obj40,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj42=self->mParamTypes;
            come_call_finalizer3(__dec_obj42,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj43=self->mParamNames;
            come_call_finalizer3(__dec_obj43,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj44=self->mResultType;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj45=self->mAlignas;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj46=self->mChannelType;
            come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj47=self->mSizeNum;
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj48=self->mOriginalTypeName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj49=self->mAsmName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj50=self->mTupleName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj51=self->mAttribute;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_310;
struct list_item$1voidph* prev_it_311;
    it_310=self->head;
    while(it_310!=((void*)0)) {
        prev_it_311=it_310;
        it_310=it_310->next;
        come_call_finalizer3(prev_it_311,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_312;
struct list_item$1sNodeph* prev_it_313;
    it_312=self->head;
    while(it_312!=((void*)0)) {
        prev_it_313=it_312;
        it_312=it_312->next;
        come_call_finalizer3(prev_it_313,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj41;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj41=self->item;
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_314;
struct list_item$1sNodeph* prev_it_315;
    it_314=self->head;
    while(it_314!=((void*)0)) {
        prev_it_315=it_314;
        it_314=it_314->next;
        come_call_finalizer3(prev_it_315,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_316;
struct list_item$1charph* prev_it_317;
    it_316=self->head;
    while(it_316!=((void*)0)) {
        prev_it_317=it_316;
        it_316=it_316->next;
        come_call_finalizer3(prev_it_317,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct buffer* __dec_obj54;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct buffer* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct buffer* __dec_obj58;
struct sModule* __result231__;
    __dec_obj54=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 24, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj54,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj55=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 25, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj55,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj56=self->mLastCode;
    self->mLastCode=((void*)0);
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj57=self->mLastCode2;
    self->mLastCode2=((void*)0);
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj58=self->mHeader;
    self->mHeader=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 28, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj58,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void sModule_finalize(struct sModule* self){
struct buffer* __dec_obj59;
struct buffer* __dec_obj60;
char* __dec_obj61;
char* __dec_obj62;
struct buffer* __dec_obj63;
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj59=self->mSourceHead;
            come_call_finalizer3(__dec_obj59,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj60=self->mSource;
            come_call_finalizer3(__dec_obj60,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        if(        self->mLastCode==gComeFunResultObject) {
            __dec_obj61=self->mLastCode;
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        if(        self->mLastCode2==gComeFunResultObject) {
            __dec_obj62=self->mLastCode2;
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        if(        self->mHeader==gComeFunResultObject) {
            __dec_obj63=self->mHeader;
            come_call_finalizer3(__dec_obj63,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
void* __right_value270 = (void*)0;
struct map$2charphsVarph* __dec_obj67;
struct sVarTable* __result239__;
    __dec_obj67=self->mVars;
    self->mVars=(struct map$2charphvoidph*)come_increment_ref_count(map$2charphvoidphpp_initialize((struct map$2charphvoidph*)come_increment_ref_count((struct map$2charphvoidph*)come_calloc(1, sizeof(struct map$2charphvoidph)*(1), "01main.c", 35, "struct map$2charphvoidph*", map$2charphvoidphp_finalize, map$2charphvoidph_clone, map$2charphvoidphp_get_hash_key, map$2charphvoidphp_equals))));
    come_call_finalizer3(__dec_obj67,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    self->mGlobal=global;
    self->mParent=parent;
    static int id_333=0;
    self->mID=++id_333;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static void map$2charphvoidphp_finalize(struct map$2charphvoidph* self){
int i_318;
int i_319;
    for(    i_318=0;    i_318<self->size;    i_318++    ){
        if(        self->item_existance[i_318]) {
            if(            1) {
                come_call_finalizer3(self->items[i_318], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_319=0;    i_319<self->size;    i_319++    ){
        if(        self->item_existance[i_319]) {
            if(            1) {
                self->keys[i_319] = come_decrement_ref_count2(self->keys[i_319], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphvoidph* map$2charphvoidph_clone(struct map$2charphvoidph* self){
void* __result_obj__=(void*)0;
struct map$2charphvoidph* __result232__;
void* __right_value256 = (void*)0;
struct map$2charphvoidph* result_323;
void* __right_value263 = (void*)0;
struct list$1charp* __dec_obj65;
struct map$2charphvoidph* __result237__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_323=(struct map$2charphvoidph*)come_increment_ref_count((struct map$2charphvoidph*)come_calloc(1, sizeof(struct map$2charphvoidph)*(1), "map$2charphvoidph_clone", 3, "struct map$2charphvoidph", map$2charphvoidph_finalize, map$2charphvoidph_clone, map$2charphvoidph_get_hash_key, map$2charphvoidph_equals));
    if(    self!=((void*)0)) {
        result_323->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_323->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_323->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_323->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_323->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj65=result_323->key_list;
        result_323->key_list=(struct list$1charp*)come_increment_ref_count(come_call_cloner(list$1charpp_clone, self->key_list));
        come_call_finalizer3(__dec_obj65,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_323->it=self->it;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_323;
    come_call_finalizer3(result_323,map$2charphvoidph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static void map$2charphvoidph_finalize(struct map$2charphvoidph* self){
struct list$1charp* __dec_obj64;
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        if(        self->key_list==gComeFunResultObject) {
            __dec_obj64=self->key_list;
            come_call_finalizer3(__dec_obj64,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static unsigned int map$2charphvoidph_get_hash_key(struct map$2charphvoidph* self){
unsigned int result_320;
    result_320=0;
    result_320+=int_get_hash_key(((int)self->keys));
    result_320+=int_get_hash_key(((int)self->item_existance));
    result_320+=int_get_hash_key(((int)self->items));
    result_320+=int_get_hash_key(((int)self->size));
    result_320+=int_get_hash_key(((int)self->len));
    result_320+=int_get_hash_key(((int)self->key_list));
    result_320+=int_get_hash_key(((int)self->it));
    return result_320;
}

static _Bool map$2charphvoidph_equals(struct map$2charphvoidph* left, struct map$2charphvoidph* right){
    if(    !string_equals(left->keys,right->keys)) {
        return (_Bool)0;
    }
    if(    !boolp_equals(left->item_existance,right->item_existance)) {
        return (_Bool)0;
    }
    if(    !come_call_equals((void*)0, left->items)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->size,right->size)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list$1charpp_equals(left->key_list,right->key_list)) {
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

static _Bool list$1charpp_equals(struct list$1charp* left, struct list$1charp* right){
struct list_item$1charp* it_321;
struct list_item$1charp* it2_322;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_321=left->head;
    it2_322=right->head;
    while(it_321!=((void*)0)) {
        if(        !charp_equals(it_321->item,it2_322->item)) {
            return (_Bool)0;
        }
        it_321=it_321->next;
        it2_322=it2_322->next;
    }
    return (_Bool)1;
}

static struct list$1charp* list$1charpp_clone(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result233__;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1charp* result_324;
struct list_item$1charp* it_325;
void* __right_value262 = (void*)0;
struct list$1charp* __result236__;
    if(    self==((void*)0)) {
        __result233__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_324=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_325=self->head;
    while(it_325!=((void*)0)) {
        list$1charpp_add(result_324,((char*)(__right_value262=come_call_cloner(charp_clone, it_325->item))));
        come_call_finalizer3(__right_value262,charp_finalize, 0, 1, 0, 0, __result_obj__);
        it_325=it_325->next;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_324;
    come_call_finalizer3(result_324,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result234__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1charp* list$1charpp_add(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
struct list_item$1charp* litem_326;
void* __right_value260 = (void*)0;
struct list_item$1charp* litem_327;
void* __right_value261 = (void*)0;
struct list_item$1charp* litem_328;
struct list$1charp* __result235__;
    if(    self->len==0) {
        litem_326=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value259=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_326->prev=((void*)0);
        litem_326->next=((void*)0);
        litem_326->item=item;
        self->tail=litem_326;
        self->head=litem_326;
    }
    else if(    self->len==1) {
        litem_327=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value260=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_327->prev=self->head;
        litem_327->next=((void*)0);
        litem_327->item=item;
        self->tail=litem_327;
        self->head->next=litem_327;
    }
    else {
        litem_328=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value261=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_328->prev=self->tail;
        litem_328->next=((void*)0);
        litem_328->item=item;
        self->tail->next=litem_328;
        self->tail=litem_328;
    }
    self->len++;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static unsigned int map$2charphvoidphp_get_hash_key(struct map$2charphvoidph* self){
unsigned int result_329;
    result_329=0;
    result_329+=int_get_hash_key(((int)self->keys));
    result_329+=int_get_hash_key(((int)self->item_existance));
    result_329+=int_get_hash_key(((int)self->items));
    result_329+=int_get_hash_key(((int)self->size));
    result_329+=int_get_hash_key(((int)self->len));
    result_329+=int_get_hash_key(((int)self->key_list));
    result_329+=int_get_hash_key(((int)self->it));
    return result_329;
}

static _Bool map$2charphvoidphp_equals(struct map$2charphvoidph* left, struct map$2charphvoidph* right){
    if(    !string_equals(left->keys,right->keys)) {
        return (_Bool)0;
    }
    if(    !boolp_equals(left->item_existance,right->item_existance)) {
        return (_Bool)0;
    }
    if(    !come_call_equals((void*)0, left->items)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->size,right->size)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list$1charpp_equals(left->key_list,right->key_list)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct map$2charphvoidph* map$2charphvoidphpp_initialize(struct map$2charphvoidph* self){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
int i_330;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1charp* __dec_obj66;
struct map$2charphvoidph* __result238__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value265=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value266=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "/usr/local/include/comelang.h", 2581, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value267=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_330=0;    i_330<128;    i_330++    ){
        self->item_existance[i_330]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj66=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj66,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_331;
int i_332;
    for(    i_331=0;    i_331<self->size;    i_331++    ){
        if(        self->item_existance[i_331]) {
            if(            1) {
                come_call_finalizer3(self->items[i_331],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_332=0;    i_332<self->size;    i_332++    ){
        if(        self->item_existance[i_332]) {
            if(            1) {
                self->keys[i_332] = come_decrement_ref_count2(self->keys[i_332], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj68;
char* __dec_obj69;
struct sType* __dec_obj70;
char* __dec_obj71;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj68=self->mName;
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj69=self->mCValueName;
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj70=self->mType;
            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj71=self->mFunName;
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void sVarTable_finalize(struct sVarTable* self){
    come_call_finalizer3(self->mVars,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_334;
int i_335;
    for(    i_334=0;    i_334<self->size;    i_334++    ){
        if(        self->item_existance[i_334]) {
            if(            1) {
                come_call_finalizer3(self->items[i_334],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_335=0;    i_335<self->size;    i_335++    ){
        if(        self->item_existance[i_335]) {
            if(            1) {
                self->keys[i_335] = come_decrement_ref_count2(self->keys[i_335], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__=(void*)0;
int pointer_num_336;
char* p_337;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
char* name2_338;
void* __right_value273 = (void*)0;
struct sClass* klass_339;
void* __right_value274 = (void*)0;
struct sClass* generics_class_343;
void* __right_value275 = (void*)0;
struct sClass* klass2_344;
void* __right_value276 = (void*)0;
char* __dec_obj77;
void* __right_value277 = (void*)0;
char* __dec_obj78;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct sType* __dec_obj79;
struct sType* __dec_obj80;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1voidph* __dec_obj81;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct list$1sNodeph* __dec_obj82;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1voidph* __dec_obj83;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1charph* __dec_obj84;
struct sType* __dec_obj85;
struct sNode* __dec_obj86;
void* __right_value295 = (void*)0;
char* __dec_obj87;
struct sType* __result269__;
    pointer_num_336=0;
    p_337=name;
    while(*p_337) {
        if(        xisalpha(*p_337)) {
            p_337++;
        }
        else {
            break;
        }
    }
    while(*p_337==42) {
        pointer_num_336++;
        p_337++;
    }
    name2_338=(char*)come_increment_ref_count(charp_substring(((char*)(__right_value271=__builtin_string(name))),0,-pointer_num_336-1));
    __right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_339=((struct sClass*)(__right_value273=map$2charphsClassphp_operator_load_element(info->classes,name2_338)));
    come_call_finalizer3(__right_value273,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    generics_class_343=((struct sClass*)(__right_value274=map$2charphsClassphp_operator_load_element(info->generics_classes,name2_338)));
    come_call_finalizer3(__right_value274,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    if(    klass_339==((void*)0)&&generics_class_343==((void*)0)) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_338);
    }
    if(    klass_339) {
        self->mClass=klass_339;
    }
    else {
        klass2_344=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "01main.c", 79, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0));
        __dec_obj77=klass2_344->mName;
        klass2_344->mName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj78=klass2_344->mDeclareSName;
        klass2_344->mDeclareSName=(char*)come_increment_ref_count(__builtin_string(info->sname));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(name)),(struct sClass*)come_increment_ref_count(klass2_344));
        self->mClass=((struct sClass*)(__right_value285=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value284=__builtin_string(name))))));
        __right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value285,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass2_344,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj79=self->mNoSolvedGenericsType;
    self->mNoSolvedGenericsType=((void*)0);
    come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj80=self->mOriginalLoadVarType;
    self->mOriginalLoadVarType=((void*)0);
    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj81=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "01main.c", 90, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    come_call_finalizer3(__dec_obj81,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj82=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "01main.c", 91, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj82,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mOmitArrayNum=(_Bool)0;
    __dec_obj83=self->mParamTypes;
    self->mParamTypes=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "01main.c", 93, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    come_call_finalizer3(__dec_obj83,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj84=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "01main.c", 94, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj84,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=(_Bool)0;
    __dec_obj85=self->mResultType;
    self->mResultType=((void*)0);
    come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
    self->mUnsigned=(_Bool)0;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mImmutable=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mNoHeap=(_Bool)0;
    self->mPointerNum=pointer_num_336;
    __dec_obj86=self->mSizeNum;
    self->mSizeNum=((void*)0);
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj87=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(""));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mOriginalPointerNum=0;
    self->mFunctionParam=(_Bool)0;
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sType_finalize, 0, 0, 1, 0, (void*)0);
    name2_338 = come_decrement_ref_count2(name2_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_340;
unsigned int hash_341;
unsigned int it_342;
struct sClass* __result240__;
struct sClass* __result241__;
struct sClass* __result242__;
struct sClass* __result243__;
default_value_340 = (void*)0;
    memset(&default_value_340,0,sizeof(struct sClass*));
    hash_341=string_get_hash_key(((char*)key))%self->size;
    it_342=hash_341;
    while((_Bool)1) {
        if(        self->item_existance[it_342]) {
            if(            string_equals(self->keys[it_342],key)) {
                __result240__ = gComeFunResultObject = __result_obj__ = self->items[it_342];
                come_call_finalizer3(default_value_340,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result240__;
            }
            it_342++;
            if(            it_342>=self->size) {
                it_342=0;
            }
            else if(            it_342==hash_341) {
                __result241__ = gComeFunResultObject = __result_obj__ = default_value_340;
                come_call_finalizer3(default_value_340,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
        }
        else {
            __result242__ = gComeFunResultObject = __result_obj__ = default_value_340;
            come_call_finalizer3(default_value_340,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result242__;
        }
    }
    __result243__ = gComeFunResultObject = __result_obj__ = default_value_340;
    come_call_finalizer3(default_value_340,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj72;
struct list$1voidph* __dec_obj73;
char* __dec_obj74;
char* __dec_obj75;
char* __dec_obj76;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj72=self->mName;
            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj73=self->mFields;
            come_call_finalizer3(__dec_obj73,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj74=self->mDeclareSName;
            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj75=self->mParentClassName;
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj76=self->mAttribute;
            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_362;
unsigned int it_363;
_Bool same_key_exist_380;
char* it2_383;
struct map$2charphsClassph* __result264__;
    if(    self->len*10>=self->size) {
        map$2charphsClassphp_rehash(self);
    }
    hash_362=string_get_hash_key(((char*)key))%self->size;
    it_363=hash_362;
    while((_Bool)1) {
        if(        self->item_existance[it_363]) {
            if(            string_equals(self->keys[it_363],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_363]);
                    self->keys[it_363] = come_decrement_ref_count2(self->keys[it_363], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_363]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_363]);
                    self->keys[it_363]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_363],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_363]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_363]=item;
                }
                break;
            }
            it_363++;
            if(            it_363>=self->size) {
                it_363=0;
            }
            else if(            it_363==hash_362) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_363]=(_Bool)1;
            if(            1) {
                self->keys[it_363]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_363]=key;
            }
            if(            1) {
                self->items[it_363]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_363]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_380=(_Bool)0;
    for(    it2_383=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_383=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_383,key)) {
            same_key_exist_380=(_Bool)1;
        }
    }
    if(    !same_key_exist_380) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_345;
void* __right_value278 = (void*)0;
char** keys_346;
void* __right_value279 = (void*)0;
struct sClass** items_347;
void* __right_value280 = (void*)0;
_Bool* item_existance_348;
int len_349;
char* it_352;
struct sClass* default_value_355;
void* __right_value281 = (void*)0;
struct sClass* it2_356;
unsigned int hash_359;
int n_360;
struct sClass* default_value_361;
void* __right_value282 = (void*)0;
default_value_355 = (void*)0;
default_value_361 = (void*)0;
    size_345=self->size*10;
    keys_346=(char**)come_increment_ref_count(((char**)(__right_value278=(char**)come_calloc(1, sizeof(char*)*(1*(size_345)), "/usr/local/include/comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_347=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value279=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_345)), "/usr/local/include/comelang.h", 2809, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_348=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value280=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_345)), "/usr/local/include/comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_349=0;
    for(    it_352=map$2charphsClassphp_begin(self);    !map$2charphsClassphp_end(self);    it_352=map$2charphsClassphp_next(self)    ){
        memset(&default_value_355,0,sizeof(struct sClass*));
        it2_356=((struct sClass*)(__right_value281=map$2charphsClassphp_at(self,it_352,default_value_355)));
        come_call_finalizer3(__right_value281,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_359=string_get_hash_key(((char*)it_352))%size_345;
        n_360=hash_359;
        while((_Bool)1) {
            if(            item_existance_348[n_360]) {
                n_360++;
                if(                n_360>=size_345) {
                    n_360=0;
                }
                else if(                n_360==hash_359) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_348[n_360]=(_Bool)1;
                keys_346[n_360]=it_352;
                items_347[n_360]=((struct sClass*)(__right_value282=map$2charphsClassphp_at(self,it_352,default_value_361)));
                come_call_finalizer3(__right_value282,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_349++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_346;
    self->items=items_347;
    self->item_existance=item_existance_348;
    self->size=size_345;
    self->len=len_349;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_350;
char* __result244__;
char* __result245__;
char* result_351;
char* __result246__;
result_350 = (void*)0;
result_351 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_350,0,sizeof(char*));
        __result244__ = gComeFunResultObject = __result_obj__ = result_350;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result245__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    memset(&result_351,0,sizeof(char*));
    __result246__ = gComeFunResultObject = __result_obj__ = result_351;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_353;
char* __result247__;
char* __result248__;
char* result_354;
char* __result249__;
result_353 = (void*)0;
result_354 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_353,0,sizeof(char*));
        __result247__ = gComeFunResultObject = __result_obj__ = result_353;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result248__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    memset(&result_354,0,sizeof(char*));
    __result249__ = gComeFunResultObject = __result_obj__ = result_354;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_357;
unsigned int it_358;
struct sClass* __result250__;
struct sClass* __result251__;
struct sClass* __result252__;
struct sClass* __result253__;
    hash_357=string_get_hash_key(((char*)key))%self->size;
    it_358=hash_357;
    while((_Bool)1) {
        if(        self->item_existance[it_358]) {
            if(            string_equals(self->keys[it_358],key)) {
                __result250__ = gComeFunResultObject = __result_obj__ = self->items[it_358];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result250__;
            }
            it_358++;
            if(            it_358>=self->size) {
                it_358=0;
            }
            else if(            it_358==hash_357) {
                __result251__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result251__;
            }
        }
        else {
            __result252__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result252__;
        }
    }
    __result253__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_364;
struct list_item$1charp* it_365;
struct list$1charp* __result257__;
    it2_364=0;
    it_365=self->head;
    while(it_365!=((void*)0)) {
        if(        charp_equals(it_365->item,item)) {
            list$1charpp_delete(self,it2_364,it2_364+1);
            break;
        }
        it2_364++;
        it_365=it_365->next;
    }
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_366;
struct list$1charp* __result254__;
struct list_item$1charp* it_369;
int i_370;
struct list_item$1charp* prev_it_371;
struct list_item$1charp* it_372;
int i_373;
struct list_item$1charp* prev_it_374;
struct list_item$1charp* it_375;
struct list_item$1charp* head_prev_it_376;
struct list_item$1charp* tail_it_377;
int i_378;
struct list_item$1charp* prev_it_379;
struct list$1charp* __result256__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_366=tail;
        tail=head;
        head=tmp_366;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result254__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_369=self->head;
        i_370=0;
        while(it_369!=((void*)0)) {
            if(            i_370<tail) {
                prev_it_371=it_369;
                it_369=it_369->next;
                i_370++;
                come_call_finalizer3(prev_it_371,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_370==tail) {
                self->head=it_369;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_369=it_369->next;
                i_370++;
            }
        }
    }
    else if(    tail==self->len) {
        it_372=self->head;
        i_373=0;
        while(it_372!=((void*)0)) {
            if(            i_373==head) {
                self->tail=it_372->prev;
                self->tail->next=((void*)0);
            }
            if(            i_373>=head) {
                prev_it_374=it_372;
                it_372=it_372->next;
                i_373++;
                come_call_finalizer3(prev_it_374,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_372=it_372->next;
                i_373++;
            }
        }
    }
    else {
        it_375=self->head;
        head_prev_it_376=((void*)0);
        tail_it_377=((void*)0);
        i_378=0;
        while(it_375!=((void*)0)) {
            if(            i_378==head) {
                head_prev_it_376=it_375->prev;
            }
            if(            i_378==tail) {
                tail_it_377=it_375;
            }
            if(            i_378>=head&&i_378<tail) {
                prev_it_379=it_375;
                it_375=it_375->next;
                i_378++;
                come_call_finalizer3(prev_it_379,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_375=it_375->next;
                i_378++;
            }
        }
        if(        head_prev_it_376!=((void*)0)) {
            head_prev_it_376->next=tail_it_377;
        }
        if(        tail_it_377!=((void*)0)) {
            tail_it_377->prev=head_prev_it_376;
        }
    }
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_367;
struct list_item$1charp* prev_it_368;
struct list$1charp* __result255__;
    it_367=self->head;
    while(it_367!=((void*)0)) {
        prev_it_368=it_367;
        it_367=it_367->next;
        come_call_finalizer3(prev_it_368,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_381;
char* __result258__;
char* __result259__;
char* result_382;
char* __result260__;
result_381 = (void*)0;
result_382 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_381,0,sizeof(char*));
        __result258__ = gComeFunResultObject = __result_obj__ = result_381;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    self->it=self->head;
    if(    self->it) {
        __result259__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    memset(&result_382,0,sizeof(char*));
    __result260__ = gComeFunResultObject = __result_obj__ = result_382;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_384;
char* __result261__;
char* __result262__;
char* result_385;
char* __result263__;
result_384 = (void*)0;
result_385 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_384,0,sizeof(char*));
        __result261__ = gComeFunResultObject = __result_obj__ = result_384;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result262__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    memset(&result_385,0,sizeof(char*));
    __result263__ = gComeFunResultObject = __result_obj__ = result_385;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result265__;
void* __right_value286 = (void*)0;
struct list$1voidph* result_387;
struct list$1voidph* __result266__;
    if(    self==(void*)0) {
        __result265__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    result_387=(struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "list$1voidph_clone", 3, "struct list$1voidph", list$1voidph_finalize, list$1voidph_clone, list$1voidph_get_hash_key, list$1voidph_equals));
    if(    self!=((void*)0)) {
        result_387->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_387->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_387->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_387->it=self->it;
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_387;
    come_call_finalizer3(result_387,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static unsigned int list$1voidph_get_hash_key(struct list$1voidph* self){
unsigned int result_386;
    result_386=0;
    result_386+=int_get_hash_key(((int)self->head));
    result_386+=int_get_hash_key(((int)self->tail));
    result_386+=int_get_hash_key(((int)self->len));
    result_386+=int_get_hash_key(((int)self->it));
    return result_386;
}

static _Bool list$1voidph_equals(struct list$1voidph* left, struct list$1voidph* right){
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
    if(    !come_call_equals((void*)0, left->item)) {
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

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_388;
    result_388=0;
    result_388+=int_get_hash_key(((int)self->head));
    result_388+=int_get_hash_key(((int)self->tail));
    result_388+=int_get_hash_key(((int)self->len));
    result_388+=int_get_hash_key(((int)self->it));
    return result_388;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
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

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result267__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result268__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
char* __dec_obj88;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct list$1voidph* __dec_obj89;
void* __right_value299 = (void*)0;
char* __dec_obj90;
struct sClass* __result270__;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    __dec_obj88=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj89=self->mFields;
    self->mFields=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "01main.c", 136, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    come_call_finalizer3(__dec_obj89,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj90=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
char* __dec_obj91;
void* __right_value301 = (void*)0;
char* __dec_obj92;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1charph* __dec_obj93;
void* __right_value304 = (void*)0;
char* __dec_obj94;
struct sClassModule* __result271__;
    __dec_obj91=self->mName;
    self->mName=(char*)come_increment_ref_count(come_call_cloner(charp_clone, name));
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj92=self->mText;
    self->mText=(char*)come_increment_ref_count(come_call_cloner(string_clone, text));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=self->mParams;
    self->mParams=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "01main.c", 147, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->mSName;
    self->mSName=(char*)come_increment_ref_count(__builtin_string(sname));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=sline;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    text = come_decrement_ref_count2(text, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname = come_decrement_ref_count2(sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj95;
char* __dec_obj96;
struct list$1charph* __dec_obj97;
char* __dec_obj98;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj95=self->mName;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj96=self->mText;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj97=self->mParams;
            come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj98=self->mSName;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute){
void* __result_obj__=(void*)0;
char* __dec_obj99;
struct sType* __dec_obj100;
struct list$1voidph* __dec_obj101;
struct list$1charph* __dec_obj102;
struct list$1charph* __dec_obj103;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sType* __dec_obj130;
struct list$1voidph* o2_saved_411;
struct sType* it_414;
void* __right_value347 = (void*)0;
struct list$1charph* o2_saved_420;
char* it_423;
void* __right_value348 = (void*)0;
struct sType* __dec_obj134;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct buffer* __dec_obj135;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct buffer* __dec_obj136;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct buffer* __dec_obj137;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct buffer* __dec_obj138;
struct sBlock* __dec_obj139;
char* __dec_obj142;
void* __right_value357 = (void*)0;
char* __dec_obj143;
struct sType* result_426;
char* __dec_obj144;
char* __dec_obj145;
struct sFun* __result298__;
result_426 = (void*)0;
    __dec_obj99=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj100=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj101=self->mParamTypes;
    self->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj101,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj102=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj103=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj103,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    self->mInline=inline_;
    self->mUniq=uniq_;
    self->mGenerate=generate_;
    __dec_obj130=self->mLambdaType;
    self->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "01main.c", 168, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
    come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_411=(struct list$1voidph*)come_increment_ref_count((param_types)),it_414=((struct sType*)list$1voidphp_begin((o2_saved_411)));    !list$1voidphp_end((o2_saved_411));    it_414=((struct sType*)list$1voidphp_next((o2_saved_411)))    ){
        list$1voidphp_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_414)));
    }
    come_call_finalizer3(o2_saved_411,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_420=(struct list$1charph*)come_increment_ref_count((param_names)),it_423=list$1charphp_begin((o2_saved_420));    !list$1charphp_end((o2_saved_420));    it_423=list$1charphp_next((o2_saved_420))    ){
        list$1charphp_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_423)));
    }
    come_call_finalizer3(o2_saved_420,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj134=self->mLambdaType->mResultType;
    self->mLambdaType->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj135=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 181, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj135,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj136=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 182, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj136,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj137=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 183, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj137,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj138=self->mSourceDefer;
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 184, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj138,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj139=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(block);
    come_call_finalizer3(__dec_obj139,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj142=self->mComeHeader;
    self->mComeHeader=(char*)come_increment_ref_count(come_header);
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj143=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(__builtin_string(declare_sname));
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->no_output_come_code2=info->no_output_come_code2;
    if(    (string_operator_equals(result_type->mClass->mName,"void")||result_type->mClass->mNumber||string_operator_equals(result_type->mClass->mName,"double")||string_operator_equals(result_type->mClass->mName,"float")||result_type->mClass->mStruct)&&result_type->mPointerNum==0) {
        self->mNoResultType=(_Bool)1;
    }
    __dec_obj144=self->mAttribute;
    self->mAttribute=(char*)come_increment_ref_count(attribute);
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj145=self->mFunAttribute;
    self->mFunAttribute=(char*)come_increment_ref_count(fun_attribute);
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFun_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_attribute = come_decrement_ref_count2(fun_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result272__;
void* __right_value305 = (void*)0;
struct sType* result_394;
void* __right_value306 = (void*)0;
struct sType* __dec_obj104;
void* __right_value307 = (void*)0;
struct sType* __dec_obj105;
void* __right_value308 = (void*)0;
struct sType* __dec_obj106;
void* __right_value309 = (void*)0;
char* __dec_obj107;
void* __right_value310 = (void*)0;
char* __dec_obj108;
void* __right_value317 = (void*)0;
struct list$1voidph* __dec_obj112;
void* __right_value325 = (void*)0;
struct list$1sNodeph* __dec_obj116;
void* __right_value326 = (void*)0;
struct list$1voidph* __dec_obj117;
void* __right_value333 = (void*)0;
struct list$1charph* __dec_obj121;
void* __right_value334 = (void*)0;
struct sType* __dec_obj122;
void* __right_value335 = (void*)0;
struct sNode* __dec_obj123;
void* __right_value336 = (void*)0;
struct sType* __dec_obj124;
void* __right_value337 = (void*)0;
struct sNode* __dec_obj125;
void* __right_value338 = (void*)0;
char* __dec_obj126;
void* __right_value339 = (void*)0;
char* __dec_obj127;
void* __right_value340 = (void*)0;
char* __dec_obj128;
void* __right_value341 = (void*)0;
char* __dec_obj129;
struct sType* __result284__;
    if(    self==(void*)0) {
        __result272__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_394=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_394->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj104=result_394->mNoSolvedGenericsType;
        result_394->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj105=result_394->mOriginalLoadVarType;
        result_394->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj106=result_394->mAnyOriginalType;
        result_394->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_394->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj107=result_394->mInterfaceName;
        result_394->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj108=result_394->mGenericsName;
        result_394->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj112=result_394->mGenericsTypes;
        result_394->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj112,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj116=result_394->mArrayNum;
        result_394->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj116,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_394->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj117=result_394->mParamTypes;
        result_394->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj117,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj121=result_394->mParamNames;
        result_394->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj121,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj122=result_394->mResultType;
        result_394->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_394->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj123=result_394->mAlignas;
        result_394->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj124=result_394->mChannelType;
        result_394->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_394->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_394->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_394->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_394->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_394->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_394->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_394->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_394->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_394->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_394->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_394->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_394->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_394->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_394->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_394->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_394->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_394->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_394->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_394->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_394->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_394->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_394->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_394->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_394->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj125=result_394->mSizeNum;
        result_394->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_394->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj126=result_394->mOriginalTypeName;
        result_394->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_394->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_394->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_394->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_394->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_394->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_394->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_394->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_394->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj127=result_394->mAsmName;
        result_394->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_394->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_394->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_394->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_394->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_394->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_394->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj128=result_394->mTupleName;
        result_394->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj129=result_394->mAttribute;
        result_394->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_394->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_394->mGenerate=self->mGenerate;
    }
    __result284__ = gComeFunResultObject = __result_obj__ = result_394;
    come_call_finalizer3(result_394,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_389;
    result_389=0;
    result_389+=int_get_hash_key(((int)self->mClass));
    result_389+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_389+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_389+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_389+=int_get_hash_key(((int)self->mAnyClass));
    result_389+=int_get_hash_key(((int)self->mInterfaceName));
    result_389+=int_get_hash_key(((int)self->mGenericsName));
    result_389+=int_get_hash_key(((int)self->mGenericsTypes));
    result_389+=int_get_hash_key(((int)self->mArrayNum));
    result_389+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_389+=int_get_hash_key(((int)self->mParamTypes));
    result_389+=int_get_hash_key(((int)self->mParamNames));
    result_389+=int_get_hash_key(((int)self->mResultType));
    result_389+=int_get_hash_key(((int)self->mVarArgs));
    result_389+=int_get_hash_key(((int)self->mAlignas));
    result_389+=int_get_hash_key(((int)self->mChannelType));
    result_389+=int_get_hash_key(((int)self->mUnsigned));
    result_389+=int_get_hash_key(((int)self->mShort));
    result_389+=int_get_hash_key(((int)self->mLong));
    result_389+=int_get_hash_key(((int)self->mLongLong));
    result_389+=int_get_hash_key(((int)self->mConstant));
    result_389+=int_get_hash_key(((int)self->mAtomic));
    result_389+=int_get_hash_key(((int)self->mRegister));
    result_389+=int_get_hash_key(((int)self->mVolatile));
    result_389+=int_get_hash_key(((int)self->mStatic));
    result_389+=int_get_hash_key(((int)self->mUniq));
    result_389+=int_get_hash_key(((int)self->mRecord));
    result_389+=int_get_hash_key(((int)self->mExtern));
    result_389+=int_get_hash_key(((int)self->mRestrict));
    result_389+=int_get_hash_key(((int)self->mImmutable));
    result_389+=int_get_hash_key(((int)self->mHeap));
    result_389+=int_get_hash_key(((int)self->mChannel));
    result_389+=int_get_hash_key(((int)self->mNoHeap));
    result_389+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_389+=int_get_hash_key(((int)self->mException));
    result_389+=int_get_hash_key(((int)self->mPointerNum));
    result_389+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_389+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_389+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_389+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_389+=int_get_hash_key(((int)self->mSizeNum));
    result_389+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_389+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_389+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_389+=int_get_hash_key(((int)self->mFunctionParam));
    result_389+=int_get_hash_key(((int)self->mAllocaValue));
    result_389+=int_get_hash_key(((int)self->mGenericsStruct));
    result_389+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_389+=int_get_hash_key(((int)self->mInline));
    result_389+=int_get_hash_key(((int)self->mNullValue));
    result_389+=int_get_hash_key(((int)self->mGuardValue));
    result_389+=int_get_hash_key(((int)self->mAsmName));
    result_389+=int_get_hash_key(((int)self->mArrayPointerType));
    result_389+=int_get_hash_key(((int)self->mLambdaArray));
    result_389+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_389+=int_get_hash_key(((int)self->mTypedef));
    result_389+=int_get_hash_key(((int)self->mMultipleTypes));
    result_389+=int_get_hash_key(((int)self->mOriginIsArray));
    result_389+=int_get_hash_key(((int)self->mTupleName));
    result_389+=int_get_hash_key(((int)self->mAttribute));
    result_389+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_389+=int_get_hash_key(((int)self->mGenerate));
    return result_389;
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

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_390;
struct list_item$1sNodeph* it2_391;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_390=left->head;
    it2_391=right->head;
    while(it_390!=((void*)0)) {
        if(        !sNode_equals(it_390->item,it2_391->item)) {
            return (_Bool)0;
        }
        it_390=it_390->next;
        it2_391=it2_391->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_392;
struct list_item$1charph* it2_393;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_392=left->head;
    it2_393=right->head;
    while(it_392!=((void*)0)) {
        if(        !string_equals(it_392->item,it2_393->item)) {
            return (_Bool)0;
        }
        it_392=it_392->next;
        it2_393=it2_393->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result273__;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct list$1voidph* result_395;
struct list_item$1voidph* it_396;
void* __right_value316 = (void*)0;
struct list$1voidph* __result275__;
    if(    self==((void*)0)) {
        __result273__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    result_395=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_396=self->head;
    while(it_396!=((void*)0)) {
        list$1voidphp_add(result_395,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_396->item)));
        it_396=it_396->next;
    }
    __result275__ = gComeFunResultObject = __result_obj__ = result_395;
    come_call_finalizer3(result_395,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value313 = (void*)0;
struct list_item$1voidph* litem_397;
void* __dec_obj109;
void* __right_value314 = (void*)0;
struct list_item$1voidph* litem_398;
void* __dec_obj110;
void* __right_value315 = (void*)0;
struct list_item$1voidph* litem_399;
void* __dec_obj111;
struct list$1voidph* __result274__;
    if(    self->len==0) {
        litem_397=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value313=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_397->prev=((void*)0);
        litem_397->next=((void*)0);
        __dec_obj109=litem_397->item;
        litem_397->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj109,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_397;
        self->head=litem_397;
    }
    else if(    self->len==1) {
        litem_398=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value314=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_398->prev=self->head;
        litem_398->next=((void*)0);
        __dec_obj110=litem_398->item;
        litem_398->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj110,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_398;
        self->head->next=litem_398;
    }
    else {
        litem_399=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value315=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_399->prev=self->tail;
        litem_399->next=((void*)0);
        __dec_obj111=litem_399->item;
        litem_399->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj111,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_399;
        self->tail=litem_399;
    }
    self->len++;
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result276__;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct list$1sNodeph* result_400;
struct list_item$1sNodeph* it_401;
void* __right_value324 = (void*)0;
struct list$1sNodeph* __result280__;
    if(    self==((void*)0)) {
        __result276__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    result_400=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_401=self->head;
    while(it_401!=((void*)0)) {
        list$1sNodephp_add(result_400,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_401->item)));
        it_401=it_401->next;
    }
    __result280__ = gComeFunResultObject = __result_obj__ = result_400;
    come_call_finalizer3(result_400,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
struct list_item$1sNodeph* litem_402;
struct sNode* __dec_obj113;
void* __right_value321 = (void*)0;
struct list_item$1sNodeph* litem_403;
struct sNode* __dec_obj114;
void* __right_value322 = (void*)0;
struct list_item$1sNodeph* litem_404;
struct sNode* __dec_obj115;
struct list$1sNodeph* __result277__;
    if(    self->len==0) {
        litem_402=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value320=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_402->prev=((void*)0);
        litem_402->next=((void*)0);
        __dec_obj113=litem_402->item;
        litem_402->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_402;
        self->head=litem_402;
    }
    else if(    self->len==1) {
        litem_403=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value321=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_403->prev=self->head;
        litem_403->next=((void*)0);
        __dec_obj114=litem_403->item;
        litem_403->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_403;
        self->head->next=litem_403;
    }
    else {
        litem_404=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value322=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_404->prev=self->tail;
        litem_404->next=((void*)0);
        __dec_obj115=litem_404->item;
        litem_404->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_404;
        self->tail=litem_404;
    }
    self->len++;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result278__;
void* __right_value323 = (void*)0;
struct sNode* result_405;
struct sNode* __result279__;
    if(    self==(void*)0) {
        __result278__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_405=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_405->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_405->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_405->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_405->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_405->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_405->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_405->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_405->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_405->kind=self->kind;
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_405;
    come_call_finalizer2((void*)0, result_405, result_405 ? ((struct sNode*)result_405)->finalize:(void*)0, result_405 ? ((struct sNode*)result_405)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result281__;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct list$1charph* result_406;
struct list_item$1charph* it_407;
void* __right_value332 = (void*)0;
struct list$1charph* __result283__;
    if(    self==((void*)0)) {
        __result281__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    result_406=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_407=self->head;
    while(it_407!=((void*)0)) {
        list$1charphp_add(result_406,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_407->item)));
        it_407=it_407->next;
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_406;
    come_call_finalizer3(result_406,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value329 = (void*)0;
struct list_item$1charph* litem_408;
char* __dec_obj118;
void* __right_value330 = (void*)0;
struct list_item$1charph* litem_409;
char* __dec_obj119;
void* __right_value331 = (void*)0;
struct list_item$1charph* litem_410;
char* __dec_obj120;
struct list$1charph* __result282__;
    if(    self->len==0) {
        litem_408=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value329=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_408->prev=((void*)0);
        litem_408->next=((void*)0);
        __dec_obj118=litem_408->item;
        litem_408->item=(char*)come_increment_ref_count(item);
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_408;
        self->head=litem_408;
    }
    else if(    self->len==1) {
        litem_409=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value330=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_409->prev=self->head;
        litem_409->next=((void*)0);
        __dec_obj119=litem_409->item;
        litem_409->item=(char*)come_increment_ref_count(item);
        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_409;
        self->head->next=litem_409;
    }
    else {
        litem_410=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value331=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_410->prev=self->tail;
        litem_410->next=((void*)0);
        __dec_obj120=litem_410->item;
        litem_410->item=(char*)come_increment_ref_count(item);
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_410;
        self->tail=litem_410;
    }
    self->len++;
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_412;
void* __result285__;
void* __result286__;
void* result_413;
void* __result287__;
result_412 = (void*)0;
result_413 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_412,0,sizeof(void*));
        __result285__ = gComeFunResultObject = __result_obj__ = result_412;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    self->it=self->head;
    if(    self->it) {
        __result286__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    memset(&result_413,0,sizeof(void*));
    __result287__ = gComeFunResultObject = __result_obj__ = result_413;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_415;
void* __result288__;
void* __result289__;
void* result_416;
void* __result290__;
result_415 = (void*)0;
result_416 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_415,0,sizeof(void*));
        __result288__ = gComeFunResultObject = __result_obj__ = result_415;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result289__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    memset(&result_416,0,sizeof(void*));
    __result290__ = gComeFunResultObject = __result_obj__ = result_416;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value344 = (void*)0;
struct list_item$1voidph* litem_417;
void* __dec_obj131;
void* __right_value345 = (void*)0;
struct list_item$1voidph* litem_418;
void* __dec_obj132;
void* __right_value346 = (void*)0;
struct list_item$1voidph* litem_419;
void* __dec_obj133;
struct list$1voidph* __result291__;
    if(    self->len==0) {
        litem_417=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value344=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_417->prev=((void*)0);
        litem_417->next=((void*)0);
        __dec_obj131=litem_417->item;
        litem_417->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj131,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_417;
        self->head=litem_417;
    }
    else if(    self->len==1) {
        litem_418=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value345=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_418->prev=self->head;
        litem_418->next=((void*)0);
        __dec_obj132=litem_418->item;
        litem_418->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj132,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_418;
        self->head->next=litem_418;
    }
    else {
        litem_419=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value346=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_419->prev=self->tail;
        litem_419->next=((void*)0);
        __dec_obj133=litem_419->item;
        litem_419->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj133,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_419;
        self->tail=litem_419;
    }
    self->len++;
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_421;
char* __result292__;
char* __result293__;
char* result_422;
char* __result294__;
result_421 = (void*)0;
result_422 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_421,0,sizeof(char*));
        __result292__ = gComeFunResultObject = __result_obj__ = result_421;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    self->it=self->head;
    if(    self->it) {
        __result293__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    memset(&result_422,0,sizeof(char*));
    __result294__ = gComeFunResultObject = __result_obj__ = result_422;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_424;
char* __result295__;
char* __result296__;
char* result_425;
char* __result297__;
result_424 = (void*)0;
result_425 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_424,0,sizeof(char*));
        __result295__ = gComeFunResultObject = __result_obj__ = result_424;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result296__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    memset(&result_425,0,sizeof(char*));
    __result297__ = gComeFunResultObject = __result_obj__ = result_425;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj140;
struct sVarTable* __dec_obj141;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj140=self->mNodes;
            come_call_finalizer3(__dec_obj140,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj141=self->mVarTable;
            come_call_finalizer3(__dec_obj141,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj146;
struct sType* __dec_obj147;
struct list$1voidph* __dec_obj148;
struct list$1charph* __dec_obj149;
struct list$1charph* __dec_obj150;
struct sType* __dec_obj151;
struct sBlock* __dec_obj152;
struct buffer* __dec_obj153;
struct buffer* __dec_obj154;
struct buffer* __dec_obj155;
struct buffer* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
char* __dec_obj159;
char* __dec_obj160;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj146=self->mName;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj147=self->mResultType;
            come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj148=self->mParamTypes;
            come_call_finalizer3(__dec_obj148,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj149=self->mParamNames;
            come_call_finalizer3(__dec_obj149,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj150=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj150,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj151=self->mLambdaType;
            come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj152=self->mBlock;
            come_call_finalizer3(__dec_obj152,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj153=self->mSource;
            come_call_finalizer3(__dec_obj153,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj154=self->mSourceHead;
            come_call_finalizer3(__dec_obj154,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj155=self->mSourceHead2;
            come_call_finalizer3(__dec_obj155,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj156=self->mSourceDefer;
            come_call_finalizer3(__dec_obj156,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj157=self->mComeHeader;
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj158=self->mDeclareSName;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj159=self->mAttribute;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj160=self->mFunAttribute;
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
char* __dec_obj161;
struct sNodeBase* __result299__;
    self->sline=info->sline;
    __dec_obj161=self->sname;
    self->sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->sline_real=info->sline_real;
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNodeBase_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj162;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj162=self->sname;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info){
    return self->sline;
}

int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info){
    return self->sline_real;
}

_Bool sNodeBase_terminated(struct sNodeBase* self){
    return (_Bool)0;
}

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
char* __result300__;
    __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value359=__builtin_string(self->sname)));
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

