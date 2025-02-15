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

struct list_item$1sBlockph
{
    struct sBlock* item;
    struct list_item$1sBlockph* prev;
    struct list_item$1sBlockph* next;
};

struct list$1sBlockph
{
    struct list_item$1sBlockph* head;
    struct list_item$1sBlockph* tail;
    int len;
    struct list_item$1sBlockph* it;
};

struct sIfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNodeph* mElifExpressionNodes;
    struct list$1sBlockph* mElifBlocks;
    int mElifNum;
    _Bool mGuard;
    struct sBlock* mElseBlock;
};

struct sMatchNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct list_item$1sVarph
{
    struct sVar* item;
    struct list_item$1sVarph* prev;
    struct list_item$1sVarph* next;
};

struct list$1sVarph
{
    struct list_item$1sVarph* head;
    struct list_item$1sVarph* tail;
    int len;
    struct list_item$1sVarph* it;
};

struct sIfMethodNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sOrStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
};

struct sAndStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
};

struct sMultipleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* multiple_node;
};

struct list$1voidph* gExceptionRightValueObjects=(void*)0;
struct sSaveRightValueObjects
{
    int sline;
    char* sname;
    int sline_real;
};

struct sRestoreRightValueObjects
{
    int sline;
    char* sname;
    int sline_real;
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info);
_Bool sIfNode_terminated(struct sIfNode* self);
char* sIfNode_kind(struct sIfNode* self);
_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static unsigned int sBlock_get_hash_key(struct sBlock* self);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2charphsVarphp_equals(struct map$2charphsVarph* left, struct map$2charphsVarph* right);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static char* list$1charpp_item(struct list$1charp* self, int position, char* default_value);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1charph_finalize(struct list$1charph* self);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static unsigned int sVarTable_get_hash_key(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static struct sVar* sVar_clone(struct sVar* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockphp_initialize(struct list$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockphp_add(struct list$1sBlockph* self, struct sBlock* item);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
static void sIfNode_finalize(struct sIfNode* self);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sMatchNode_terminated(struct sMatchNode* self);
char* sMatchNode_kind(struct sMatchNode* self);
_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info);
static void sMatchNode_finalize(struct sMatchNode* self);
struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sIfMethodNode_terminated(struct sIfMethodNode* self);
char* sIfMethodNode_kind(struct sIfMethodNode* self);
_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info);
static void sIfMethodNode_finalize(struct sIfMethodNode* self);
static struct list$1sVarph* list$1sVarphp_initialize(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self);
char* sOrStatmentNode_kind(struct sOrStatmentNode* self);
_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);
static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self);
char* sAndStatmentNode_kind(struct sAndStatmentNode* self);
_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);
static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNodeph* multiple_node, struct sInfo* info);
_Bool sMultipleNode_terminated(struct sMultipleNode* self);
char* sMultipleNode_kind(struct sMultipleNode* self);
_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info);
static void sMultipleNode_finalize(struct sMultipleNode* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info);
_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self);
char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self);
_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info);
static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self);
struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info);
_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self);
char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self);
_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info);
static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static unsigned int list$1charph_get_hash_key(struct list$1charph* self);
static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list_item$1charph_equals(struct list_item$1charph* left, struct list_item$1charph* right);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
static unsigned int sIfNode_get_hash_key(struct sIfNode* self);
static _Bool sIfNode_equals(struct sIfNode* left, struct sIfNode* right);
static _Bool list$1sBlockphp_equals(struct list$1sBlockph* left, struct list$1sBlockph* right);
static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self);
static unsigned int sSaveRightValueObjects_get_hash_key(struct sSaveRightValueObjects* self);
static _Bool sSaveRightValueObjects_equals(struct sSaveRightValueObjects* left, struct sSaveRightValueObjects* right);
static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self);
static unsigned int sRestoreRightValueObjects_get_hash_key(struct sRestoreRightValueObjects* self);
static _Bool sRestoreRightValueObjects_equals(struct sRestoreRightValueObjects* left, struct sRestoreRightValueObjects* right);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
static unsigned int list$1sNodeph_get_hash_key(struct list$1sNodeph* self);
static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list_item$1sNodeph_equals(struct list_item$1sNodeph* left, struct list_item$1sNodeph* right);
static struct sMultipleNode* sMultipleNode_clone(struct sMultipleNode* self);
static unsigned int sMultipleNode_get_hash_key(struct sMultipleNode* self);
static _Bool sMultipleNode_equals(struct sMultipleNode* left, struct sMultipleNode* right);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
static struct list$1sBlockph* list$1sBlockphp_push_back(struct list$1sBlockph* self, struct sBlock* item);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
static unsigned int sOrStatmentNode_get_hash_key(struct sOrStatmentNode* self);
static _Bool sOrStatmentNode_equals(struct sOrStatmentNode* left, struct sOrStatmentNode* right);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
static unsigned int sAndStatmentNode_get_hash_key(struct sAndStatmentNode* self);
static _Bool sAndStatmentNode_equals(struct sAndStatmentNode* left, struct sAndStatmentNode* right);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self);
static unsigned int sMatchNode_get_hash_key(struct sMatchNode* self);
static _Bool sMatchNode_equals(struct sMatchNode* left, struct sMatchNode* right);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self);
static unsigned int sIfMethodNode_get_hash_key(struct sIfMethodNode* self);
static _Bool sIfMethodNode_equals(struct sIfMethodNode* left, struct sIfMethodNode* right);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
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

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
void* __right_value252 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value320 = (void*)0;
struct sBlock* __dec_obj93;
void* __right_value321 = (void*)0;
struct list$1sNodeph* __dec_obj94;
void* __right_value328 = (void*)0;
struct list$1sBlockph* __dec_obj99;
void* __right_value329 = (void*)0;
struct sBlock* __dec_obj100;
struct sBlock* __dec_obj101;
struct sIfNode* __result283__;
    ((struct sNodeBase*)(__right_value250=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value250,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj93=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    come_call_finalizer3(__dec_obj93,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->mElifExpressionNodes;
    self->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, elif_expression_nodes));
    come_call_finalizer3(__dec_obj94,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj99=self->mElifBlocks;
    self->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(come_call_cloner(list$1sBlockphp_clone, elif_blocks));
    come_call_finalizer3(__dec_obj99,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    self->mElifNum=elif_num;
    self->mGuard=guard_;
    ((void*)0);
    if(    else_block) {
        __dec_obj100=self->mElseBlock;
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, else_block));
        come_call_finalizer3(__dec_obj100,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj101=self->mElseBlock;
        self->mElseBlock=((void*)0);
        come_call_finalizer3(__dec_obj101,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result283__;
}

_Bool sIfNode_terminated(struct sIfNode* self){
    return (_Bool)1;
}

char* sIfNode_kind(struct sIfNode* self){
void* __result_obj__=(void*)0;
void* __right_value330 = (void*)0;
char* __result284__;
    __result284__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value330=__builtin_string("sIfNode")));
    __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
_Bool existance_of_result_value_420;
int i_421;
void* __right_value331 = (void*)0;
_Bool _if_conditional1;
struct sBlock* else_block_425;
int elif_num_426;
_Bool guard__427;
char* if_result_var_name_428;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sType* if_result_type_429;
void* __right_value334 = (void*)0;
char* __dec_obj108;
void* __right_value335 = (void*)0;
struct sVar* var__431;
void* __right_value336 = (void*)0;
struct sNode* expression_node_432;
int sline_433;
char* sname_434;
_Bool comma_instead_of_semicolon_before_435;
_Bool Value_436;
_Bool __result287__;
struct sBlock* if_block_437;
_Bool normal_if_438;
void* __right_value337 = (void*)0;
struct CVALUE* conditional_value_439;
struct sVar* var__440;
int num_if_conditional_stack_442;
void* __right_value338 = (void*)0;
struct CVALUE* conditional_value_443;
struct sVar* var__444;
int i_445;
void* __right_value339 = (void*)0;
struct sNode* expression_node2_446;
_Bool comma_instead_of_semicolon_before_450;
_Bool Value_451;
_Bool __result290__;
void* __right_value340 = (void*)0;
struct sBlock* elif_node_block_452;
_Bool normal_if_453;
void* __right_value341 = (void*)0;
struct CVALUE* conditional_value_454;
void* __right_value342 = (void*)0;
struct CVALUE* conditional_value_455;
int num_elif_conditional_stack_457;
struct sVar* var__458;
int __exception_result_var_b1;
void* __right_value343 = (void*)0;
struct sNode* result_node_459;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sNode* __dec_obj113;
_Bool Value_460;
_Bool __result291__;
void* __right_value346 = (void*)0;
struct CVALUE* come_value2_461;
void* __right_value347 = (void*)0;
struct sType* __dec_obj114;
char* __dec_obj118;
_Bool __result293__;
    existance_of_result_value_420=(_Bool)1;
    {
        if(        !self->mIfBlock->mOmitSemicolon) {
            existance_of_result_value_420=(_Bool)0;
        }
        for(        i_421=0;        i_421<self->mElifNum;        i_421++        ){
            if(            (_if_conditional1=(!((struct sBlock*)(__right_value331=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_421)))->mOmitSemicolon)),            come_call_finalizer3(__right_value331,sBlock_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional1) {
                existance_of_result_value_420=(_Bool)0;
            }
        }
        if(        self->mElseBlock&&!self->mElseBlock->mOmitSemicolon) {
            existance_of_result_value_420=(_Bool)0;
        }
    }
    if(    info->comma_instead_of_semicolon) {
        err_msg(info,"In conditional operator comelang can't use if statment");
        return (_Bool)0;
    }
    else_block_425=self->mElseBlock;
    elif_num_426=self->mElifNum;
    guard__427=self->mGuard;
    if_result_var_name_428=(char*)come_increment_ref_count(info->if_result_var_name);
    if(    existance_of_result_value_420) {
        if_result_type_429=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "08if.c", 69, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        static int var_num_430=0;
        __dec_obj108=info->if_result_var_name;
        info->if_result_var_name=(char*)come_increment_ref_count(xsprintf("__if_result__%d",var_num_430++));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_variable_to_table(info->if_result_var_name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, if_result_type_429)),info);
        var__431=get_variable_from_table(info->lv_table,info->if_result_var_name);
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value336=make_define_var(var__431->mType,var__431->mCValueName,(_Bool)0,info))));
        __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(if_result_type_429,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    expression_node_432=self->mExpressionNode;
    sline_433=info->sline;
    sname_434=info->sname;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_before_435=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    info->without_semicolon=(_Bool)1;
    Value_436=node_compile(expression_node_432,info);
    if(    !Value_436) {
        __result287__ = (_Bool)0;
        if_result_var_name_428 = come_decrement_ref_count2(if_result_var_name_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result287__;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_435;
    if_block_437=self->mIfBlock;
    normal_if_438=(_Bool)1;
    if(    existance_free_right_value_objects(info)) {
        normal_if_438=(_Bool)0;
    }
    if(    normal_if_438) {
        conditional_value_439=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        guard__427) {
            var__440=conditional_value_439->var;
            if(            var__440) {
                var__440->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"%s) {\n",conditional_value_439->c_value);
        come_call_finalizer3(conditional_value_439,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        static int num_if_conditional_441=0;
        add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_441);
        num_if_conditional_stack_442=num_if_conditional_441;
        conditional_value_443=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        guard__427) {
            var__444=conditional_value_443->var;
            if(            var__444) {
                var__444->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"(_if_conditional%d=(%s)),",num_if_conditional_441,conditional_value_443->c_value);
        free_right_value_objects(info,(_Bool)1);
        add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_442);
        come_call_finalizer3(conditional_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_block(if_block_437,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_420);
    add_come_code(info,"}\n");
    if(    elif_num_426>0) {
        for(        i_445=0;        i_445<elif_num_426;        i_445++        ){
            expression_node2_446=((struct sNode*)(__right_value339=list$1sNodephp_operator_load_element(self->mElifExpressionNodes,i_445)));
            if(__right_value339) { __right_value339 = come_decrement_ref_count2(__right_value339, ((struct sNode*)__right_value339)->finalize, ((struct sNode*)__right_value339)->_protocol_obj, 1, 0, 0, (void*)0); } 
            add_come_code(info,"else if(");
            comma_instead_of_semicolon_before_450=info->comma_instead_of_semicolon;
            info->comma_instead_of_semicolon=(_Bool)1;
            info->without_semicolon=(_Bool)1;
            Value_451=node_compile(expression_node2_446,info);
            if(            !Value_451) {
                __result290__ = (_Bool)0;
                if_result_var_name_428 = come_decrement_ref_count2(if_result_var_name_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result290__;
            }
            else {
            }
            info->without_semicolon=(_Bool)0;
            info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_450;
            elif_node_block_452=((struct sBlock*)(__right_value340=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_445)));
            come_call_finalizer3(__right_value340,sBlock_finalize, 0, 1, 0, 0, (void*)0);
            normal_if_453=(_Bool)1;
            if(            existance_free_right_value_objects(info)) {
                normal_if_453=(_Bool)0;
            }
            if(            normal_if_453) {
                conditional_value_454=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s) {\n",conditional_value_454->c_value);
                come_call_finalizer3(conditional_value_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                conditional_value_455=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                static int num_elif_conditional_456=0;
                add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_456);
                num_elif_conditional_stack_457=num_elif_conditional_456;
                add_come_code(info,"(_elif_conditional%d=(%s)),",num_elif_conditional_456,conditional_value_455->c_value);
                free_right_value_objects(info,(_Bool)1);
                add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_457);
                come_call_finalizer3(conditional_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            transpile_block(elif_node_block_452,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_420);
            add_come_code(info,"}\n");
        }
    }
    if(    else_block_425) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_425,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_420);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    if(    existance_of_result_value_420) {
        var__458=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 207, 0),__exception_result_var_b1=assert_v2(var__458!=((void*)0)), come_pop_stackframe(), __exception_result_var_b1);
        result_node_459=(struct sNode*)come_increment_ref_count(create_load_var(info->if_result_var_name,info));
        __dec_obj113=result_node_459;
        result_node_459=(struct sNode*)come_increment_ref_count(cast_node((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__458->mType)),(struct sNode*)come_increment_ref_count(result_node_459),info));
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); };
        Value_460=node_compile(result_node_459,info);
        if(        !Value_460) {
            __result291__ = (_Bool)0;
            if(result_node_459) { result_node_459 = come_decrement_ref_count2(result_node_459, ((struct sNode*)result_node_459)->finalize, ((struct sNode*)result_node_459)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if_result_var_name_428 = come_decrement_ref_count2(if_result_var_name_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result291__;
        }
        else {
        }
        come_value2_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj114=come_value2_461->type;
        come_value2_461->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__458->mType));
        come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_461));
        if(result_node_459) { result_node_459 = come_decrement_ref_count2(result_node_459, ((struct sNode*)result_node_459)->finalize, ((struct sNode*)result_node_459)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value2_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj118=info->if_result_var_name;
    info->if_result_var_name=(char*)come_increment_ref_count(if_result_var_name_428);
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result293__ = (_Bool)1;
    if_result_var_name_428 = come_decrement_ref_count2(if_result_var_name_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result293__;
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

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result229__;
void* __right_value251 = (void*)0;
struct sNode* result_308;
struct sNode* __result230__;
    if(    self==(void*)0) {
        __result229__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_308=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_308->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_308->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_308->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_308->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_308->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_308->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_308->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_308->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_308->kind=self->kind;
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_308;
    come_call_finalizer2((void*)0, result_308, result_308 ? ((struct sNode*)result_308)->finalize:(void*)0, result_308 ? ((struct sNode*)result_308)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result231__;
void* __right_value255 = (void*)0;
struct sBlock* result_342;
void* __right_value262 = (void*)0;
struct list$1sNodeph* __dec_obj61;
void* __right_value319 = (void*)0;
struct sVarTable* __dec_obj92;
struct sBlock* __result278__;
    if(    self==(void*)0) {
        __result231__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_342=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock", sBlock_finalize, sBlock_clone, sBlock_get_hash_key, sBlock_equals));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj61=result_342->mNodes;
        result_342->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj61,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj92=result_342->mVarTable;
        result_342->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj92,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_342;
    come_call_finalizer3(result_342,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj33;
struct sVarTable* __dec_obj35;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj33=self->mNodes;
            come_call_finalizer3(__dec_obj33,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj35=self->mVarTable;
            come_call_finalizer3(__dec_obj35,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_309;
struct list_item$1sNodeph* prev_it_310;
    it_309=self->head;
    while(it_309!=((void*)0)) {
        prev_it_310=it_309;
        it_309=it_309->next;
        come_call_finalizer3(prev_it_310,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj34;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_311;
struct list_item$1sNodeph* prev_it_312;
    it_311=self->head;
    while(it_311!=((void*)0)) {
        prev_it_312=it_311;
        it_311=it_311->next;
        come_call_finalizer3(prev_it_312,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sBlock_get_hash_key(struct sBlock* self){
unsigned int result_313;
    result_313=0;
    result_313+=int_get_hash_key(((int)self->mNodes));
    result_313+=int_get_hash_key(((int)self->mVarTable));
    result_313+=int_get_hash_key(((int)self->mOmitSemicolon));
    return result_313;
}

static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right){
    if(    !list$1sNodephp_equals(left->mNodes,right->mNodes)) {
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

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_314;
struct list_item$1sNodeph* it2_315;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_314=left->head;
    it2_315=right->head;
    while(it_314!=((void*)0)) {
        if(        !sNode_equals(it_314->item,it2_315->item)) {
            return (_Bool)0;
        }
        it_314=it_314->next;
        it2_315=it2_315->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right){
    if(    !map$2charphsVarphp_equals(left->mVars,right->mVars)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mParent,right->mParent)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mID,right->mID)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool map$2charphsVarphp_equals(struct map$2charphsVarph* left, struct map$2charphsVarph* right){
int n_316;
_Bool result_317;
char* it_320;
char* default_value_323;
char* it2_324;
struct sVar* default_value2_327;
void* __right_value253 = (void*)0;
struct sVar* item_328;
void* __right_value254 = (void*)0;
struct sVar* item2_337;
default_value_323 = (void*)0;
default_value2_327 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_316=0;
    result_317=(_Bool)1;
    for(    it_320=list$1charpp_begin(left->key_list);    !list$1charpp_end(left->key_list);    it_320=list$1charpp_next(left->key_list)    ){
        memset(&default_value_323,0,sizeof(char*));
        it2_324=list$1charpp_item(right->key_list,n_316,default_value_323);
        if(        string_equals(it_320,it2_324)) {
            memset(&default_value2_327,0,sizeof(struct sVar*));
            item_328=((struct sVar*)(__right_value253=map$2charphsVarphp_at(left,it_320,default_value2_327)));
            come_call_finalizer3(__right_value253,sVar_finalize, 0, 1, 0, 0, (void*)0);
            item2_337=((struct sVar*)(__right_value254=map$2charphsVarphp_at(right,it2_324,default_value2_327)));
            come_call_finalizer3(__right_value254,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            !sVar_equals(item_328,item2_337)) {
                result_317=(_Bool)0;
            }
        }
        else {
            result_317=(_Bool)0;
        }
        n_316++;
    }
    return result_317;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_318;
char* __result232__;
char* __result233__;
char* result_319;
char* __result234__;
result_318 = (void*)0;
result_319 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_318,0,sizeof(char*));
        __result232__ = gComeFunResultObject = __result_obj__ = result_318;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    self->it=self->head;
    if(    self->it) {
        __result233__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    memset(&result_319,0,sizeof(char*));
    __result234__ = gComeFunResultObject = __result_obj__ = result_319;
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_321;
char* __result235__;
char* __result236__;
char* result_322;
char* __result237__;
result_321 = (void*)0;
result_322 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_321,0,sizeof(char*));
        __result235__ = gComeFunResultObject = __result_obj__ = result_321;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result236__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    memset(&result_322,0,sizeof(char*));
    __result237__ = gComeFunResultObject = __result_obj__ = result_322;
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static char* list$1charpp_item(struct list$1charp* self, int position, char* default_value){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_325;
int i_326;
char* __result238__;
char* __result239__;
    if(    position<0) {
        position+=self->len;
    }
    it_325=self->head;
    i_326=0;
    while(it_325!=((void*)0)) {
        if(        position==i_326) {
            __result238__ = gComeFunResultObject = __result_obj__ = it_325->item;
            gComeFunResultObject = (void*)0;
            return __result238__;
        }
        it_325=it_325->next;
        i_326++;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = default_value;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_329;
unsigned int it_330;
struct sVar* __result240__;
struct sVar* __result241__;
struct sVar* __result242__;
struct sVar* __result243__;
    hash_329=string_get_hash_key(((char*)key))%self->size;
    it_330=hash_329;
    while((_Bool)1) {
        if(        self->item_existance[it_330]) {
            if(            string_equals(self->keys[it_330],key)) {
                __result240__ = gComeFunResultObject = __result_obj__ = self->items[it_330];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result240__;
            }
            it_330++;
            if(            it_330>=self->size) {
                it_330=0;
            }
            else if(            it_330==hash_329) {
                __result241__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
        }
        else {
            __result242__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result242__;
        }
    }
    __result243__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj36;
char* __dec_obj37;
struct sType* __dec_obj38;
char* __dec_obj57;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj36=self->mName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj37=self->mCValueName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj38=self->mType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj57=self->mFunName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj39;
struct sType* __dec_obj40;
struct sType* __dec_obj41;
char* __dec_obj42;
char* __dec_obj43;
struct list$1voidph* __dec_obj44;
struct list$1sNodeph* __dec_obj46;
struct list$1voidph* __dec_obj47;
struct list$1charph* __dec_obj48;
struct sType* __dec_obj49;
struct sNode* __dec_obj50;
struct sType* __dec_obj51;
struct sNode* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj39=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj40=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj41=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj42=self->mInterfaceName;
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj43=self->mGenericsName;
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj44=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj44,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj46=self->mArrayNum;
            come_call_finalizer3(__dec_obj46,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj47=self->mParamTypes;
            come_call_finalizer3(__dec_obj47,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj48=self->mParamNames;
            come_call_finalizer3(__dec_obj48,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj49=self->mResultType;
            come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj50=self->mAlignas;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj51=self->mChannelType;
            come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj52=self->mSizeNum;
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj53=self->mOriginalTypeName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj54=self->mAsmName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj55=self->mTupleName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj56=self->mAttribute;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_331;
struct list_item$1voidph* prev_it_332;
    it_331=self->head;
    while(it_331!=((void*)0)) {
        prev_it_332=it_331;
        it_331=it_331->next;
        come_call_finalizer3(prev_it_332,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            come_call_finalizer3(__dec_obj45,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_333;
struct list_item$1voidph* prev_it_334;
    it_333=self->head;
    while(it_333!=((void*)0)) {
        prev_it_334=it_333;
        it_333=it_333->next;
        come_call_finalizer3(prev_it_334,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_335;
struct list_item$1charph* prev_it_336;
    it_335=self->head;
    while(it_335!=((void*)0)) {
        prev_it_336=it_335;
        it_335=it_335->next;
        come_call_finalizer3(prev_it_336,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
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
    if(    !int_equals(left->mBlockLevel,right->mBlockLevel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFunctionParam,right->mFunctionParam)) {
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

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_338;
struct list_item$1voidph* it2_339;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_338=left->head;
    it2_339=right->head;
    while(it_338!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_338->item)) {
            return (_Bool)0;
        }
        it_338=it_338->next;
        it2_339=it2_339->next;
    }
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_340;
struct list_item$1charph* it2_341;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_340=left->head;
    it2_341=right->head;
    while(it_340!=((void*)0)) {
        if(        !string_equals(it_340->item,it2_341->item)) {
            return (_Bool)0;
        }
        it_340=it_340->next;
        it2_341=it2_341->next;
    }
    return (_Bool)1;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result244__;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct list$1sNodeph* result_343;
struct list_item$1sNodeph* it_344;
void* __right_value261 = (void*)0;
struct list$1sNodeph* __result247__;
    if(    self==((void*)0)) {
        __result244__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    result_343=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_344=self->head;
    while(it_344!=((void*)0)) {
        list$1sNodephp_add(result_343,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_344->item)));
        it_344=it_344->next;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_343;
    come_call_finalizer3(result_343,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result245__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
struct list_item$1sNodeph* litem_345;
struct sNode* __dec_obj58;
void* __right_value259 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj59;
void* __right_value260 = (void*)0;
struct list_item$1sNodeph* litem_347;
struct sNode* __dec_obj60;
struct list$1sNodeph* __result246__;
    if(    self->len==0) {
        litem_345=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value258=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=((void*)0);
        litem_345->next=((void*)0);
        __dec_obj58=litem_345->item;
        litem_345->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_345;
        self->head=litem_345;
    }
    else if(    self->len==1) {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value259=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->head;
        litem_346->next=((void*)0);
        __dec_obj59=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_346;
        self->head->next=litem_346;
    }
    else {
        litem_347=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value260=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_347->prev=self->tail;
        litem_347->next=((void*)0);
        __dec_obj60=litem_347->item;
        litem_347->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_347;
        self->tail=litem_347;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result248__;
void* __right_value263 = (void*)0;
struct sVarTable* result_349;
void* __right_value318 = (void*)0;
struct map$2charphsVarph* __dec_obj91;
struct sVarTable* __result277__;
    if(    self==(void*)0) {
        __result248__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_349=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj91=result_349->mVars;
        result_349->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj91,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_349->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_349->mID=self->mID;
    }
    __result277__ = gComeFunResultObject = __result_obj__ = result_349;
    come_call_finalizer3(result_349,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_348;
    result_348=0;
    result_348+=int_get_hash_key(((int)self->mVars));
    result_348+=int_get_hash_key(((int)self->mGlobal));
    result_348+=int_get_hash_key(((int)self->mParent));
    result_348+=int_get_hash_key(((int)self->mID));
    return result_348;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result249__;
void* __right_value264 = (void*)0;
void* __right_value270 = (void*)0;
struct map$2charphsVarph* result_353;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1charp* __dec_obj63;
char* it_356;
struct sVar* default_value_359;
void* __right_value273 = (void*)0;
struct sVar* it2_360;
void* __right_value317 = (void*)0;
struct map$2charphsVarph* __result276__;
default_value_359 = (void*)0;
    if(    self==((void*)0)) {
        __result249__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    result_353=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 2651, "struct map$2charphsVarph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj63=result_353->key_list;
    result_353->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2653, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj63,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_356=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_356=map$2charphsVarphp_next(self)    ){
        memset(&default_value_359,0,sizeof(struct sVar*));
        it2_360=(struct sVar*)come_increment_ref_count(map$2charphsVarphp_at(self,it_356,default_value_359));
        map$2charphsVarphp_put(result_353,it_356,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_360)));
        come_call_finalizer3(it2_360,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result276__ = gComeFunResultObject = __result_obj__ = result_353;
    come_call_finalizer3(result_353,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
int i_350;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1charp* __dec_obj62;
struct map$2charphsVarph* __result251__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value265=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value266=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 2581, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value267=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_350=0;    i_350<128;    i_350++    ){
        self->item_existance[i_350]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj62=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj62,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result250__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_351;
int i_352;
    for(    i_351=0;    i_351<self->size;    i_351++    ){
        if(        self->item_existance[i_351]) {
            if(            1) {
                come_call_finalizer3(self->items[i_351],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_352=0;    i_352<self->size;    i_352++    ){
        if(        self->item_existance[i_352]) {
            if(            1) {
                self->keys[i_352] = come_decrement_ref_count2(self->keys[i_352], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_354;
char* __result252__;
char* __result253__;
char* result_355;
char* __result254__;
result_354 = (void*)0;
result_355 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_354,0,sizeof(char*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_354;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_355,0,sizeof(char*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_355;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_357;
char* __result255__;
char* __result256__;
char* result_358;
char* __result257__;
result_357 = (void*)0;
result_358 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_357,0,sizeof(char*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_357;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_358,0,sizeof(char*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_358;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_372;
int it_373;
_Bool same_key_exist_390;
char* it2_391;
struct map$2charphsVarph* __result262__;
    if(    self->len*2>=self->size) {
        map$2charphsVarphp_rehash(self);
    }
    hash_372=string_get_hash_key(key)%self->size;
    it_373=hash_372;
    while((_Bool)1) {
        if(        self->item_existance[it_373]) {
            if(            string_equals(self->keys[it_373],key)) {
                if(                1) {
                    self->keys[it_373] = come_decrement_ref_count2(self->keys[it_373], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charpp_remove(self->key_list,self->keys[it_373]);
                    self->keys[it_373]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_373]);
                    self->keys[it_373]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_373],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_373]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_373]=item;
                }
                break;
            }
            it_373++;
            if(            it_373>=self->size) {
                it_373=0;
            }
            else if(            it_373==hash_372) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_373]=(_Bool)1;
            if(            1) {
                self->keys[it_373]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_373]=key;
            }
            if(            1) {
                self->items[it_373]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_373]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_390=(_Bool)0;
    for(    it2_391=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_391=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_391,key)) {
            same_key_exist_390=(_Bool)1;
        }
    }
    if(    !same_key_exist_390) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_361;
void* __right_value274 = (void*)0;
char** keys_362;
void* __right_value275 = (void*)0;
struct sVar** items_363;
void* __right_value276 = (void*)0;
_Bool* item_existance_364;
int len_365;
char* it_366;
struct sVar* default_value_367;
void* __right_value277 = (void*)0;
struct sVar* it2_368;
unsigned int hash_369;
int n_370;
struct sVar* default_value_371;
void* __right_value278 = (void*)0;
default_value_367 = (void*)0;
default_value_371 = (void*)0;
    size_361=self->size*10;
    keys_362=(char**)come_increment_ref_count(((char**)(__right_value274=(char**)come_calloc(1, sizeof(char*)*(1*(size_361)), "/usr/local/include/comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_363=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value275=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_361)), "/usr/local/include/comelang.h", 2809, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_364=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value276=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_361)), "/usr/local/include/comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_365=0;
    for(    it_366=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_366=map$2charphsVarphp_next(self)    ){
        memset(&default_value_367,0,sizeof(struct sVar*));
        it2_368=((struct sVar*)(__right_value277=map$2charphsVarphp_at(self,it_366,default_value_367)));
        come_call_finalizer3(__right_value277,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_369=string_get_hash_key(it_366)%size_361;
        n_370=hash_369;
        while((_Bool)1) {
            if(            item_existance_364[n_370]) {
                n_370++;
                if(                n_370>=size_361) {
                    n_370=0;
                }
                else if(                n_370==hash_369) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_364[n_370]=(_Bool)1;
                keys_362[n_370]=it_366;
                items_363[n_370]=((struct sVar*)(__right_value278=map$2charphsVarphp_at(self,it_366,default_value_371)));
                come_call_finalizer3(__right_value278,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_365++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_362;
    self->items=items_363;
    self->item_existance=item_existance_364;
    self->size=size_361;
    self->len=len_365;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_374;
struct list_item$1charp* it_375;
struct list$1charp* __result261__;
    it2_374=0;
    it_375=self->head;
    while(it_375!=((void*)0)) {
        if(        charp_equals(it_375->item,item)) {
            list$1charpp_delete(self,it2_374,it2_374+1);
            break;
        }
        it2_374++;
        it_375=it_375->next;
    }
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_376;
struct list$1charp* __result258__;
struct list_item$1charp* it_379;
int i_380;
struct list_item$1charp* prev_it_381;
struct list_item$1charp* it_382;
int i_383;
struct list_item$1charp* prev_it_384;
struct list_item$1charp* it_385;
struct list_item$1charp* head_prev_it_386;
struct list_item$1charp* tail_it_387;
int i_388;
struct list_item$1charp* prev_it_389;
struct list$1charp* __result260__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_376=tail;
        tail=head;
        head=tmp_376;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result258__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_379=self->head;
        i_380=0;
        while(it_379!=((void*)0)) {
            if(            i_380<tail) {
                prev_it_381=it_379;
                it_379=it_379->next;
                i_380++;
                come_call_finalizer3(prev_it_381,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_380==tail) {
                self->head=it_379;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_379=it_379->next;
                i_380++;
            }
        }
    }
    else if(    tail==self->len) {
        it_382=self->head;
        i_383=0;
        while(it_382!=((void*)0)) {
            if(            i_383==head) {
                self->tail=it_382->prev;
                self->tail->next=((void*)0);
            }
            if(            i_383>=head) {
                prev_it_384=it_382;
                it_382=it_382->next;
                i_383++;
                come_call_finalizer3(prev_it_384,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_382=it_382->next;
                i_383++;
            }
        }
    }
    else {
        it_385=self->head;
        head_prev_it_386=((void*)0);
        tail_it_387=((void*)0);
        i_388=0;
        while(it_385!=((void*)0)) {
            if(            i_388==head) {
                head_prev_it_386=it_385->prev;
            }
            if(            i_388==tail) {
                tail_it_387=it_385;
            }
            if(            i_388>=head&&i_388<tail) {
                prev_it_389=it_385;
                it_385=it_385->next;
                i_388++;
                come_call_finalizer3(prev_it_389,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_385=it_385->next;
                i_388++;
            }
        }
        if(        head_prev_it_386!=((void*)0)) {
            head_prev_it_386->next=tail_it_387;
        }
        if(        tail_it_387!=((void*)0)) {
            tail_it_387->prev=head_prev_it_386;
        }
    }
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_377;
struct list_item$1charp* prev_it_378;
struct list$1charp* __result259__;
    it_377=self->head;
    while(it_377!=((void*)0)) {
        prev_it_378=it_377;
        it_377=it_377->next;
        come_call_finalizer3(prev_it_378,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result263__;
void* __right_value279 = (void*)0;
struct sVar* result_393;
void* __right_value280 = (void*)0;
char* __dec_obj64;
void* __right_value281 = (void*)0;
char* __dec_obj65;
void* __right_value315 = (void*)0;
struct sType* __dec_obj89;
void* __right_value316 = (void*)0;
char* __dec_obj90;
struct sVar* __result275__;
    if(    self==(void*)0) {
        __result263__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    result_393=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj64=result_393->mName;
        result_393->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj65=result_393->mCValueName;
        result_393->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj89=result_393->mType;
        result_393->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_393->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_393->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_393->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_393->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_393->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj90=result_393->mFunName;
        result_393->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result275__ = gComeFunResultObject = __result_obj__ = result_393;
    come_call_finalizer3(result_393,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_392;
    result_392=0;
    result_392+=int_get_hash_key(((int)self->mName));
    result_392+=int_get_hash_key(((int)self->mCValueName));
    result_392+=int_get_hash_key(((int)self->mType));
    result_392+=int_get_hash_key(((int)self->mBlockLevel));
    result_392+=int_get_hash_key(((int)self->mGlobal));
    result_392+=int_get_hash_key(((int)self->mAllocaValue));
    result_392+=int_get_hash_key(((int)self->mFunctionParam));
    result_392+=int_get_hash_key(((int)self->mNoFree));
    result_392+=int_get_hash_key(((int)self->mFunName));
    return result_392;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result264__;
void* __right_value282 = (void*)0;
struct sType* result_395;
void* __right_value283 = (void*)0;
struct sType* __dec_obj66;
void* __right_value284 = (void*)0;
struct sType* __dec_obj67;
void* __right_value285 = (void*)0;
struct sType* __dec_obj68;
void* __right_value286 = (void*)0;
char* __dec_obj69;
void* __right_value287 = (void*)0;
char* __dec_obj70;
void* __right_value294 = (void*)0;
struct list$1voidph* __dec_obj74;
void* __right_value298 = (void*)0;
struct list$1sNodeph* __dec_obj75;
void* __right_value299 = (void*)0;
struct list$1voidph* __dec_obj76;
void* __right_value306 = (void*)0;
struct list$1charph* __dec_obj80;
void* __right_value307 = (void*)0;
struct sType* __dec_obj81;
void* __right_value308 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value309 = (void*)0;
struct sType* __dec_obj83;
void* __right_value310 = (void*)0;
struct sNode* __dec_obj84;
void* __right_value311 = (void*)0;
char* __dec_obj85;
void* __right_value312 = (void*)0;
char* __dec_obj86;
void* __right_value313 = (void*)0;
char* __dec_obj87;
void* __right_value314 = (void*)0;
char* __dec_obj88;
struct sType* __result274__;
    if(    self==(void*)0) {
        __result264__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    result_395=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_395->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj66=result_395->mNoSolvedGenericsType;
        result_395->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj67=result_395->mOriginalLoadVarType;
        result_395->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj68=result_395->mAnyOriginalType;
        result_395->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_395->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj69=result_395->mInterfaceName;
        result_395->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj70=result_395->mGenericsName;
        result_395->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj74=result_395->mGenericsTypes;
        result_395->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidph_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj74,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj75=result_395->mArrayNum;
        result_395->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodeph_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj75,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_395->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj76=result_395->mParamTypes;
        result_395->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidph_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj76,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj80=result_395->mParamNames;
        result_395->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charph_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj80,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj81=result_395->mResultType;
        result_395->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_395->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj82=result_395->mAlignas;
        result_395->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj83=result_395->mChannelType;
        result_395->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_395->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_395->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_395->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_395->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_395->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_395->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_395->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_395->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_395->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_395->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_395->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_395->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_395->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_395->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_395->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_395->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_395->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_395->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_395->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_395->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_395->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_395->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_395->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_395->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj84=result_395->mSizeNum;
        result_395->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_395->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj85=result_395->mOriginalTypeName;
        result_395->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_395->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_395->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_395->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_395->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_395->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_395->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_395->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_395->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj86=result_395->mAsmName;
        result_395->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_395->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_395->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_395->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_395->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_395->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_395->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj87=result_395->mTupleName;
        result_395->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj88=result_395->mAttribute;
        result_395->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_395->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_395->mGenerate=self->mGenerate;
    }
    __result274__ = gComeFunResultObject = __result_obj__ = result_395;
    come_call_finalizer3(result_395,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_394;
    result_394=0;
    result_394+=int_get_hash_key(((int)self->mClass));
    result_394+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_394+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_394+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_394+=int_get_hash_key(((int)self->mAnyClass));
    result_394+=int_get_hash_key(((int)self->mInterfaceName));
    result_394+=int_get_hash_key(((int)self->mGenericsName));
    result_394+=int_get_hash_key(((int)self->mGenericsTypes));
    result_394+=int_get_hash_key(((int)self->mArrayNum));
    result_394+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_394+=int_get_hash_key(((int)self->mParamTypes));
    result_394+=int_get_hash_key(((int)self->mParamNames));
    result_394+=int_get_hash_key(((int)self->mResultType));
    result_394+=int_get_hash_key(((int)self->mVarArgs));
    result_394+=int_get_hash_key(((int)self->mAlignas));
    result_394+=int_get_hash_key(((int)self->mChannelType));
    result_394+=int_get_hash_key(((int)self->mUnsigned));
    result_394+=int_get_hash_key(((int)self->mShort));
    result_394+=int_get_hash_key(((int)self->mLong));
    result_394+=int_get_hash_key(((int)self->mLongLong));
    result_394+=int_get_hash_key(((int)self->mConstant));
    result_394+=int_get_hash_key(((int)self->mAtomic));
    result_394+=int_get_hash_key(((int)self->mRegister));
    result_394+=int_get_hash_key(((int)self->mVolatile));
    result_394+=int_get_hash_key(((int)self->mStatic));
    result_394+=int_get_hash_key(((int)self->mUniq));
    result_394+=int_get_hash_key(((int)self->mRecord));
    result_394+=int_get_hash_key(((int)self->mExtern));
    result_394+=int_get_hash_key(((int)self->mRestrict));
    result_394+=int_get_hash_key(((int)self->mImmutable));
    result_394+=int_get_hash_key(((int)self->mHeap));
    result_394+=int_get_hash_key(((int)self->mChannel));
    result_394+=int_get_hash_key(((int)self->mNoHeap));
    result_394+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_394+=int_get_hash_key(((int)self->mException));
    result_394+=int_get_hash_key(((int)self->mPointerNum));
    result_394+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_394+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_394+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_394+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_394+=int_get_hash_key(((int)self->mSizeNum));
    result_394+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_394+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_394+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_394+=int_get_hash_key(((int)self->mFunctionParam));
    result_394+=int_get_hash_key(((int)self->mAllocaValue));
    result_394+=int_get_hash_key(((int)self->mGenericsStruct));
    result_394+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_394+=int_get_hash_key(((int)self->mInline));
    result_394+=int_get_hash_key(((int)self->mNullValue));
    result_394+=int_get_hash_key(((int)self->mGuardValue));
    result_394+=int_get_hash_key(((int)self->mAsmName));
    result_394+=int_get_hash_key(((int)self->mArrayPointerType));
    result_394+=int_get_hash_key(((int)self->mLambdaArray));
    result_394+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_394+=int_get_hash_key(((int)self->mTypedef));
    result_394+=int_get_hash_key(((int)self->mMultipleTypes));
    result_394+=int_get_hash_key(((int)self->mOriginIsArray));
    result_394+=int_get_hash_key(((int)self->mTupleName));
    result_394+=int_get_hash_key(((int)self->mAttribute));
    result_394+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_394+=int_get_hash_key(((int)self->mGenerate));
    return result_394;
}

static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result265__;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1voidph* result_397;
struct list_item$1voidph* it_398;
void* __right_value293 = (void*)0;
struct list$1voidph* __result268__;
    if(    self==((void*)0)) {
        __result265__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    result_397=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_398=self->head;
    while(it_398!=((void*)0)) {
        list$1voidphp_add(result_397,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_398->item)));
        it_398=it_398->next;
    }
    __result268__ = gComeFunResultObject = __result_obj__ = result_397;
    come_call_finalizer3(result_397,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_396;
    result_396=0;
    result_396+=int_get_hash_key(((int)self->head));
    result_396+=int_get_hash_key(((int)self->tail));
    result_396+=int_get_hash_key(((int)self->len));
    result_396+=int_get_hash_key(((int)self->it));
    return result_396;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result266__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value290 = (void*)0;
struct list_item$1voidph* litem_399;
void* __dec_obj71;
void* __right_value291 = (void*)0;
struct list_item$1voidph* litem_400;
void* __dec_obj72;
void* __right_value292 = (void*)0;
struct list_item$1voidph* litem_401;
void* __dec_obj73;
struct list$1voidph* __result267__;
    if(    self->len==0) {
        litem_399=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value290=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_399->prev=((void*)0);
        litem_399->next=((void*)0);
        __dec_obj71=litem_399->item;
        litem_399->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_399;
        self->head=litem_399;
    }
    else if(    self->len==1) {
        litem_400=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value291=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_400->prev=self->head;
        litem_400->next=((void*)0);
        __dec_obj72=litem_400->item;
        litem_400->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj72,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_400;
        self->head->next=litem_400;
    }
    else {
        litem_401=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value292=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_401->prev=self->tail;
        litem_401->next=((void*)0);
        __dec_obj73=litem_401->item;
        litem_401->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_401;
        self->tail=litem_401;
    }
    self->len++;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result269__;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1sNodeph* result_402;
struct list_item$1sNodeph* it_403;
void* __right_value297 = (void*)0;
struct list$1sNodeph* __result270__;
    if(    self==((void*)0)) {
        __result269__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    result_402=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_403=self->head;
    while(it_403!=((void*)0)) {
        list$1sNodephp_add(result_402,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_403->item)));
        it_403=it_403->next;
    }
    __result270__ = gComeFunResultObject = __result_obj__ = result_402;
    come_call_finalizer3(result_402,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result271__;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1charph* result_404;
struct list_item$1charph* it_405;
void* __right_value305 = (void*)0;
struct list$1charph* __result273__;
    if(    self==((void*)0)) {
        __result271__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    result_404=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_405=self->head;
    while(it_405!=((void*)0)) {
        list$1charphp_add(result_404,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_405->item)));
        it_405=it_405->next;
    }
    __result273__ = gComeFunResultObject = __result_obj__ = result_404;
    come_call_finalizer3(result_404,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
struct list_item$1charph* litem_406;
char* __dec_obj77;
void* __right_value303 = (void*)0;
struct list_item$1charph* litem_407;
char* __dec_obj78;
void* __right_value304 = (void*)0;
struct list_item$1charph* litem_408;
char* __dec_obj79;
struct list$1charph* __result272__;
    if(    self->len==0) {
        litem_406=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value302=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_406->prev=((void*)0);
        litem_406->next=((void*)0);
        __dec_obj77=litem_406->item;
        litem_406->item=(char*)come_increment_ref_count(item);
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_406;
        self->head=litem_406;
    }
    else if(    self->len==1) {
        litem_407=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value303=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_407->prev=self->head;
        litem_407->next=((void*)0);
        __dec_obj78=litem_407->item;
        litem_407->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_407;
        self->head->next=litem_407;
    }
    else {
        litem_408=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value304=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_408->prev=self->tail;
        litem_408->next=((void*)0);
        __dec_obj79=litem_408->item;
        litem_408->item=(char*)come_increment_ref_count(item);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_408;
        self->tail=litem_408;
    }
    self->len++;
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_409;
int i_410;
    for(    i_409=0;    i_409<self->size;    i_409++    ){
        if(        self->item_existance[i_409]) {
            if(            1) {
                come_call_finalizer3(self->items[i_409],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_410=0;    i_410<self->size;    i_410++    ){
        if(        self->item_existance[i_410]) {
            if(            1) {
                self->keys[i_410] = come_decrement_ref_count2(self->keys[i_410], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result279__;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct list$1sBlockph* result_413;
struct list_item$1sBlockph* it_414;
void* __right_value327 = (void*)0;
struct list$1sBlockph* __result282__;
    if(    self==((void*)0)) {
        __result279__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_413=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_414=self->head;
    while(it_414!=((void*)0)) {
        list$1sBlockphp_add(result_413,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_414->item)));
        it_414=it_414->next;
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_413;
    come_call_finalizer3(result_413,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct list$1sBlockph* list$1sBlockphp_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result280__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_411;
struct list_item$1sBlockph* prev_it_412;
    it_411=self->head;
    while(it_411!=((void*)0)) {
        prev_it_412=it_411;
        it_411=it_411->next;
        come_call_finalizer3(prev_it_412,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj95;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj95=self->item;
            come_call_finalizer3(__dec_obj95,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sBlockph* list$1sBlockphp_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value324 = (void*)0;
struct list_item$1sBlockph* litem_415;
struct sBlock* __dec_obj96;
void* __right_value325 = (void*)0;
struct list_item$1sBlockph* litem_416;
struct sBlock* __dec_obj97;
void* __right_value326 = (void*)0;
struct list_item$1sBlockph* litem_417;
struct sBlock* __dec_obj98;
struct list$1sBlockph* __result281__;
    if(    self->len==0) {
        litem_415=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value324=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_415->prev=((void*)0);
        litem_415->next=((void*)0);
        __dec_obj96=litem_415->item;
        litem_415->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj96,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_415;
        self->head=litem_415;
    }
    else if(    self->len==1) {
        litem_416=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value325=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_416->prev=self->head;
        litem_416->next=((void*)0);
        __dec_obj97=litem_416->item;
        litem_416->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_416;
        self->head->next=litem_416;
    }
    else {
        litem_417=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value326=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_417->prev=self->tail;
        litem_417->next=((void*)0);
        __dec_obj98=litem_417->item;
        litem_417->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_417;
        self->tail=litem_417;
    }
    self->len++;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_418;
struct list_item$1sBlockph* prev_it_419;
    it_418=self->head;
    while(it_418!=((void*)0)) {
        prev_it_419=it_418;
        it_418=it_418->next;
        come_call_finalizer3(prev_it_419,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sIfNode_finalize(struct sIfNode* self){
char* __dec_obj102;
struct sNode* __dec_obj103;
struct sBlock* __dec_obj104;
struct list$1sNodeph* __dec_obj105;
struct list$1sBlockph* __dec_obj106;
struct sBlock* __dec_obj107;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj102=self->sname;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj103=self->mExpressionNode;
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj104=self->mIfBlock;
            come_call_finalizer3(__dec_obj104,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        if(        self->mElifExpressionNodes==gComeFunResultObject) {
            __dec_obj105=self->mElifExpressionNodes;
            come_call_finalizer3(__dec_obj105,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mElifExpressionNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        if(        self->mElifBlocks==gComeFunResultObject) {
            __dec_obj106=self->mElifBlocks;
            come_call_finalizer3(__dec_obj106,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mElifBlocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        if(        self->mElseBlock==gComeFunResultObject) {
            __dec_obj107=self->mElseBlock;
            come_call_finalizer3(__dec_obj107,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mElseBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_422;
int i_423;
struct sBlock* __result285__;
struct sBlock* default_value_424;
struct sBlock* __result286__;
default_value_424 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_422=self->head;
    i_423=0;
    while(it_422!=((void*)0)) {
        if(        position==i_423) {
            __result285__ = gComeFunResultObject = __result_obj__ = it_422->item;
            gComeFunResultObject = (void*)0;
            return __result285__;
        }
        it_422=it_422->next;
        i_423++;
    }
    memset(&default_value_424,0,sizeof(struct sBlock*));
    __result286__ = gComeFunResultObject = __result_obj__ = default_value_424;
    come_call_finalizer3(default_value_424,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj109;
struct sType* __dec_obj110;
char* __dec_obj111;
char* __dec_obj112;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj109=self->c_value;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj110=self->type;
            come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj111=self->c_value_without_right_value_objects;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj112=self->c_value_without_cast_object_value;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_447;
int i_448;
struct sNode* __result288__;
struct sNode* default_value_449;
struct sNode* __result289__;
default_value_449 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_447=self->head;
    i_448=0;
    while(it_447!=((void*)0)) {
        if(        position==i_448) {
            __result288__ = gComeFunResultObject = __result_obj__ = it_447->item;
            gComeFunResultObject = (void*)0;
            return __result288__;
        }
        it_447=it_447->next;
        i_448++;
    }
    memset(&default_value_449,0,sizeof(struct sNode*));
    __result289__ = gComeFunResultObject = __result_obj__ = default_value_449;
    if(default_value_449) { default_value_449 = come_decrement_ref_count2(default_value_449, ((struct sNode*)default_value_449)->finalize, ((struct sNode*)default_value_449)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
struct list_item$1CVALUEph* litem_462;
struct CVALUE* __dec_obj115;
void* __right_value349 = (void*)0;
struct list_item$1CVALUEph* litem_463;
struct CVALUE* __dec_obj116;
void* __right_value350 = (void*)0;
struct list_item$1CVALUEph* litem_464;
struct CVALUE* __dec_obj117;
struct list$1CVALUEph* __result292__;
    if(    self->len==0) {
        litem_462=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value348=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_462->prev=((void*)0);
        litem_462->next=((void*)0);
        __dec_obj115=litem_462->item;
        litem_462->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_462;
        self->head=litem_462;
    }
    else if(    self->len==1) {
        litem_463=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value349=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_463->prev=self->head;
        litem_463->next=((void*)0);
        __dec_obj116=litem_463->item;
        litem_463->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_463;
        self->head->next=litem_463;
    }
    else {
        litem_464=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value350=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_464->prev=self->tail;
        litem_464->next=((void*)0);
        __dec_obj117=litem_464->item;
        litem_464->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_464;
        self->tail=litem_464;
    }
    self->len++;
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sNode* __dec_obj119;
void* __right_value353 = (void*)0;
struct sNode* __dec_obj120;
struct sMatchNode* __result294__;
    ((struct sNodeBase*)(__right_value351=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value351,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj119=self->it_node;
    self->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_node));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj120=self->match_node;
    self->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, match_node));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); };
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    if(it_node) { it_node = come_decrement_ref_count2(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node) { match_node = come_decrement_ref_count2(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sMatchNode_terminated(struct sMatchNode* self){
    return (_Bool)1;
}

char* sMatchNode_kind(struct sMatchNode* self){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
char* __result295__;
    __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value354=__builtin_string("sMatch")));
    __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info){
struct sNode* it_node_465;
struct sNode* match_node_466;
_Bool Value_467;
_Bool __result296__;
void* __right_value355 = (void*)0;
struct CVALUE* come_value_468;
_Bool Value_469;
_Bool __result297__;
struct sVar* var__470;
int __exception_result_var_b2;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct list$1voidph* __dec_obj124;
void* __right_value358 = (void*)0;
_Bool __result298__;
    it_node_465=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_466=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_467=node_compile(it_node_465,info);
    if(    !Value_467) {
        __result296__ = (_Bool)0;
        if(it_node_465) { it_node_465 = come_decrement_ref_count2(it_node_465, ((struct sNode*)it_node_465)->finalize, ((struct sNode*)it_node_465)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_466) { match_node_466 = come_decrement_ref_count2(match_node_466, ((struct sNode*)match_node_466)->finalize, ((struct sNode*)match_node_466)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result296__;
    }
    else {
    }
    come_value_468=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_468->c_value);
    dec_stack_ptr(1,info);
    Value_469=node_compile(match_node_466,info);
    if(    !Value_469) {
        __result297__ = (_Bool)0;
        if(it_node_465) { it_node_465 = come_decrement_ref_count2(it_node_465, ((struct sNode*)it_node_465)->finalize, ((struct sNode*)it_node_465)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_466) { match_node_466 = come_decrement_ref_count2(match_node_466, ((struct sNode*)match_node_466)->finalize, ((struct sNode*)match_node_466)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result297__;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__470=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 268, 1),__exception_result_var_b2=assert_v2(var__470!=((void*)0)), come_pop_stackframe(), __exception_result_var_b2);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj124=info->match_it_var;
            info->match_it_var=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "08if.c", 271, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            come_call_finalizer3(__dec_obj124,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_add(info->match_it_var,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, var__470)));
    }
    __result298__ = (_Bool)1;
    if(it_node_465) { it_node_465 = come_decrement_ref_count2(it_node_465, ((struct sNode*)it_node_465)->finalize, ((struct sNode*)it_node_465)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node_466) { match_node_466 = come_decrement_ref_count2(match_node_466, ((struct sNode*)match_node_466)->finalize, ((struct sNode*)match_node_466)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result298__;
}

static void sMatchNode_finalize(struct sMatchNode* self){
char* __dec_obj121;
struct sNode* __dec_obj122;
struct sNode* __dec_obj123;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj121=self->sname;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        if(        self->it_node==gComeFunResultObject) {
            __dec_obj122=self->it_node;
            if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->it_node) { self->it_node = come_decrement_ref_count2(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        if(        self->match_node==gComeFunResultObject) {
            __dec_obj123=self->match_node;
            if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->match_node) { self->match_node = come_decrement_ref_count2(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj125;
void* __right_value361 = (void*)0;
struct sNode* __dec_obj126;
struct sIfMethodNode* __result299__;
    ((struct sNodeBase*)(__right_value359=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value359,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj125=self->it_node;
    self->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_node));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj126=self->match_node;
    self->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, match_node));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); };
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    if(it_node) { it_node = come_decrement_ref_count2(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node) { match_node = come_decrement_ref_count2(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result299__;
}

_Bool sIfMethodNode_terminated(struct sIfMethodNode* self){
    return (_Bool)1;
}

char* sIfMethodNode_kind(struct sIfMethodNode* self){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
char* __result300__;
    __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value362=__builtin_string("sMatch")));
    __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info){
struct sNode* it_node_471;
struct sNode* match_node_472;
_Bool Value_473;
_Bool __result301__;
void* __right_value363 = (void*)0;
struct CVALUE* come_value_474;
_Bool Value_475;
_Bool __result302__;
struct sVar* var__476;
int __exception_result_var_b3;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct list$1voidph* __dec_obj131;
void* __right_value366 = (void*)0;
_Bool __result304__;
    it_node_471=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_472=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_473=node_compile(it_node_471,info);
    if(    !Value_473) {
        __result301__ = (_Bool)0;
        if(it_node_471) { it_node_471 = come_decrement_ref_count2(it_node_471, ((struct sNode*)it_node_471)->finalize, ((struct sNode*)it_node_471)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_472) { match_node_472 = come_decrement_ref_count2(match_node_472, ((struct sNode*)match_node_472)->finalize, ((struct sNode*)match_node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result301__;
    }
    else {
    }
    come_value_474=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_474->c_value);
    dec_stack_ptr(1,info);
    Value_475=node_compile(match_node_472,info);
    if(    !Value_475) {
        __result302__ = (_Bool)0;
        if(it_node_471) { it_node_471 = come_decrement_ref_count2(it_node_471, ((struct sNode*)it_node_471)->finalize, ((struct sNode*)it_node_471)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_472) { match_node_472 = come_decrement_ref_count2(match_node_472, ((struct sNode*)match_node_472)->finalize, ((struct sNode*)match_node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_474,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result302__;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__476=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 320, 2),__exception_result_var_b3=assert_v2(var__476!=((void*)0)), come_pop_stackframe(), __exception_result_var_b3);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj131=info->match_it_var;
            info->match_it_var=(struct list$1sVarph*)come_increment_ref_count(list$1sVarphp_initialize((struct list$1sVarph*)come_increment_ref_count((struct list$1sVarph*)come_calloc(1, sizeof(struct list$1sVarph)*(1), "08if.c", 323, "struct list$1sVarph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj131,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_add(info->match_it_var,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, var__476)));
    }
    __result304__ = (_Bool)1;
    if(it_node_471) { it_node_471 = come_decrement_ref_count2(it_node_471, ((struct sNode*)it_node_471)->finalize, ((struct sNode*)it_node_471)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node_472) { match_node_472 = come_decrement_ref_count2(match_node_472, ((struct sNode*)match_node_472)->finalize, ((struct sNode*)match_node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_474,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result304__;
}

static void sIfMethodNode_finalize(struct sIfMethodNode* self){
char* __dec_obj127;
struct sNode* __dec_obj128;
struct sNode* __dec_obj129;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj127=self->sname;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        if(        self->it_node==gComeFunResultObject) {
            __dec_obj128=self->it_node;
            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->it_node) { self->it_node = come_decrement_ref_count2(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        if(        self->match_node==gComeFunResultObject) {
            __dec_obj129=self->match_node;
            if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->match_node) { self->match_node = come_decrement_ref_count2(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1sVarph* list$1sVarphp_initialize(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct list$1sVarph* __result303__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_477;
struct list_item$1sVarph* prev_it_478;
    it_477=self->head;
    while(it_477!=((void*)0)) {
        prev_it_478=it_477;
        it_477=it_477->next;
        come_call_finalizer3(prev_it_478,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj130;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj130=self->item;
            come_call_finalizer3(__dec_obj130,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sNode* __dec_obj132;
void* __right_value369 = (void*)0;
struct sBlock* __dec_obj133;
struct sOrStatmentNode* __result305__;
    ((struct sNodeBase*)(__right_value367=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value367,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj132=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj133=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    come_call_finalizer3(__dec_obj133,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result305__;
}

_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self){
    return (_Bool)1;
}

char* sOrStatmentNode_kind(struct sOrStatmentNode* self){
void* __result_obj__=(void*)0;
void* __right_value370 = (void*)0;
char* __result306__;
    __result306__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value370=__builtin_string("sOrStatmentNode")));
    __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_479;
_Bool Value_480;
void* __right_value371 = (void*)0;
struct CVALUE* conditional_value_481;
struct sBlock* if_block_482;
int num_or_conditional_stack_484;
_Bool __result307__;
    expression_node_479=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    Value_480=node_compile(expression_node_479,info);
    if(    !Value_480) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_481=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if_block_482=self->mIfBlock;
    static int num_or_conditional_483=0;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_483);
    add_come_code(info,"if((_or_conditional%d=(%s)),",num_or_conditional_483,conditional_value_481->c_value);
    num_or_conditional_stack_484=num_or_conditional_483;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_or_conditional%d == 0) {\n",num_or_conditional_stack_484);
    transpile_block(if_block_482,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result307__ = (_Bool)1;
    come_call_finalizer3(conditional_value_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result307__;
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
char* __dec_obj134;
struct sNode* __dec_obj135;
struct sBlock* __dec_obj136;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj134=self->sname;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj135=self->mExpressionNode;
            if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj136=self->mIfBlock;
            come_call_finalizer3(__dec_obj136,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct sNode* __dec_obj137;
void* __right_value374 = (void*)0;
struct sBlock* __dec_obj138;
struct sAndStatmentNode* __result308__;
    ((struct sNodeBase*)(__right_value372=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value372,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj137=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj138=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    come_call_finalizer3(__dec_obj138,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result308__;
}

_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self){
    return (_Bool)1;
}

char* sAndStatmentNode_kind(struct sAndStatmentNode* self){
void* __result_obj__=(void*)0;
void* __right_value375 = (void*)0;
char* __result309__;
    __result309__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value375=__builtin_string("sAndStatmentNode")));
    __right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_485;
_Bool Value_486;
void* __right_value376 = (void*)0;
struct CVALUE* conditional_value_487;
struct sBlock* if_block_488;
int num_and_conditional_stack_490;
_Bool __result310__;
    expression_node_485=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    Value_486=node_compile(expression_node_485,info);
    if(    !Value_486) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_487=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if_block_488=self->mIfBlock;
    static int num_and_conditional_489=0;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_489);
    add_come_code(info,"if((_and_conditional%d=(%s)),",num_and_conditional_489,conditional_value_487->c_value);
    num_and_conditional_stack_490=num_and_conditional_489;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_and_conditional%d != 0) {\n",num_and_conditional_stack_490);
    transpile_block(if_block_488,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result310__ = (_Bool)1;
    come_call_finalizer3(conditional_value_487,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result310__;
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
char* __dec_obj139;
struct sNode* __dec_obj140;
struct sBlock* __dec_obj141;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj139=self->sname;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj140=self->mExpressionNode;
            if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj141=self->mIfBlock;
            come_call_finalizer3(__dec_obj141,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNodeph* multiple_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct list$1sNodeph* __dec_obj142;
struct sMultipleNode* __result311__;
    ((struct sNodeBase*)(__right_value377=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value377,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj142=self->multiple_node;
    self->multiple_node=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, multiple_node));
    come_call_finalizer3(__dec_obj142,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_node,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

_Bool sMultipleNode_terminated(struct sMultipleNode* self){
    return (_Bool)1;
}

char* sMultipleNode_kind(struct sMultipleNode* self){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
char* __result312__;
    __result312__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value379=__builtin_string("sMultipleNode")));
    __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info){
struct list$1sNodeph* multiple_node_491;
struct CVALUE* come_value_492;
struct list$1sNodeph* o2_saved_493;
struct sNode* it_496;
_Bool Value_499;
_Bool __result319__;
void* __right_value380 = (void*)0;
struct CVALUE* __dec_obj145;
_Bool __result320__;
    multiple_node_491=(struct list$1sNodeph*)come_increment_ref_count(self->multiple_node);
    come_value_492=((void*)0);
    for(    o2_saved_493=(struct list$1sNodeph*)come_increment_ref_count((multiple_node_491)),it_496=list$1sNodephp_begin((o2_saved_493));    !list$1sNodephp_end((o2_saved_493));    it_496=list$1sNodephp_next((o2_saved_493))    ){
        Value_499=node_compile(it_496,info);
        if(        !Value_499) {
            __result319__ = (_Bool)0;
            come_call_finalizer3(o2_saved_493,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_node_491,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result319__;
        }
        else {
        }
        add_last_code_to_source(info);
        if(        list$1CVALUEphp_length(info->stack)>0) {
            __dec_obj145=come_value_492;
            come_value_492=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj145,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
    }
    come_call_finalizer3(o2_saved_493,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    come_value_492) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_492));
    }
    __result320__ = (_Bool)1;
    come_call_finalizer3(multiple_node_491,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result320__;
}

static void sMultipleNode_finalize(struct sMultipleNode* self){
char* __dec_obj143;
struct list$1sNodeph* __dec_obj144;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj143=self->sname;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        if(        self->multiple_node==gComeFunResultObject) {
            __dec_obj144=self->multiple_node;
            come_call_finalizer3(__dec_obj144,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_node,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_494;
struct sNode* __result313__;
struct sNode* __result314__;
struct sNode* result_495;
struct sNode* __result315__;
result_494 = (void*)0;
result_495 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_494,0,sizeof(struct sNode*));
        __result313__ = gComeFunResultObject = __result_obj__ = result_494;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    self->it=self->head;
    if(    self->it) {
        __result314__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    memset(&result_495,0,sizeof(struct sNode*));
    __result315__ = gComeFunResultObject = __result_obj__ = result_495;
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_497;
struct sNode* __result316__;
struct sNode* __result317__;
struct sNode* result_498;
struct sNode* __result318__;
result_497 = (void*)0;
result_498 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_497,0,sizeof(struct sNode*));
        __result316__ = gComeFunResultObject = __result_obj__ = result_497;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result317__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    memset(&result_498,0,sizeof(struct sNode*));
    __result318__ = gComeFunResultObject = __result_obj__ = result_498;
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
struct sSaveRightValueObjects* __result321__;
    ((struct sNodeBase*)(__right_value381=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value381,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self){
    return (_Bool)0;
}

char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self){
void* __result_obj__=(void*)0;
void* __right_value382 = (void*)0;
char* __result322__;
    __result322__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value382=__builtin_string("sSaveRightValueObjects")));
    __right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info){
struct list$1voidph* __dec_obj147;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct list$1voidph* __dec_obj148;
    __dec_obj147=gExceptionRightValueObjects;
    gExceptionRightValueObjects=(struct list$1voidph*)come_increment_ref_count(info->right_value_objects);
    come_call_finalizer3(__dec_obj147,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj148=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "08if.c", 512, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    come_call_finalizer3(__dec_obj148,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)1;
}

static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self){
char* __dec_obj146;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj146=self->sname;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value385 = (void*)0;
struct sRestoreRightValueObjects* __result323__;
    ((struct sNodeBase*)(__right_value385=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value385,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self){
    return (_Bool)0;
}

char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self){
void* __result_obj__=(void*)0;
void* __right_value386 = (void*)0;
char* __result324__;
    __result324__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value386=__builtin_string("sRestoreRightValueObjects")));
    __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info){
struct list$1voidph* __dec_obj150;
struct list$1voidph* __dec_obj151;
    free_right_value_objects(info,(_Bool)0);
    __dec_obj150=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(gExceptionRightValueObjects);
    come_call_finalizer3(__dec_obj150,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj151=gExceptionRightValueObjects;
    gExceptionRightValueObjects=((void*)0);
    come_call_finalizer3(__dec_obj151,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)1;
}

static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self){
char* __dec_obj149;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj149=self->sname;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
char* sname_500;
int sline_501;
int var_num_stack_503;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
char* __list_values1___504[2];
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1charph* multiple_assign_507;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sNode* get_return_value_508;
void* __right_value395 = (void*)0;
struct sBlock* if_block_509;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_510;
int elif_num_511;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1sBlockph* elif_blocks_512;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sBlock* else_block_513;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sNode* expression_node2_517;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* __right_value419 = (void*)0;
struct sNode* if_node_518;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sNode* _inf_value2;
struct sSaveRightValueObjects* _inf_obj_value2;
void* __right_value424 = (void*)0;
struct sNode* save_right_value_objects_523;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sNode* _inf_value3;
struct sRestoreRightValueObjects* _inf_obj_value3;
void* __right_value429 = (void*)0;
struct sNode* restore_right_value_objects_526;
struct sNode* __list_values2___530[2];
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1sNodeph* multiple_node_529;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sNode* _inf_value4;
struct sMultipleNode* _inf_obj_value4;
void* __right_value437 = (void*)0;
struct sNode* __result336__;
    sname_500=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_501=info->sline;
    parse_sharp_v5(info);
    static int var_num_502=0;
    var_num_502++;
    var_num_stack_503=var_num_502;
    multiple_assign_507=(struct list$1charph*)come_increment_ref_count((__list_values1___504[0]=(char*)come_increment_ref_count(((char*)(__right_value389=xsprintf("come_exception_var_\%s",((char*)(__right_value388=int_to_string(var_num_stack_503))))))),
__list_values1___504[1]=(char*)come_increment_ref_count(((char*)(__right_value390=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 557, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values1___504)));
    __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value389,charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value390,charp_finalize, 0, 1, 0, 0, __result_obj__);
    get_return_value_508=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_507),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    if_block_509=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_510=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 564, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_511=0;
    elif_blocks_512=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 567, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    else_block_513=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 569, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    else_block_513->mOmitSemicolon=(_Bool)1;
    list$1sNodephp_push_back(else_block_513->mNodes,(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value406=xsprintf("come_exception_var_\%s",((char*)(__right_value405=int_to_string(var_num_stack_503)))))),info)));
    __right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value406,charp_finalize, 0, 1, 0, 0, __result_obj__);
    expression_node2_517=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value408=xsprintf("Err"))),info));
    come_call_finalizer3(__right_value408,charp_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 575, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value411=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 575, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node2_517),if_block_509,elif_expression_nodes_510,elif_blocks_512,elif_num_511,else_block_513,(_Bool)0,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    if_node_518=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value411,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 577, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value421=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 577, "struct sSaveRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value2->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value2->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value2->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_523=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value421,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 578, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value426=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 578, "struct sRestoreRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value3->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value3->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value3->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_526=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value426,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_529=(struct list$1sNodeph*)come_increment_ref_count((__list_values2___530[0]=(struct sNode*)come_increment_ref_count(get_return_value_508),
__list_values2___530[1]=(struct sNode*)come_increment_ref_count(if_node_518),
list$1sNodeph_initialize_with_values((struct list$1sNodeph**)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 580, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key, list$1sNodeph_equals)),2,__list_values2___530)));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 582, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value433=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 582, "struct sMultipleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_529),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sMultipleNode_finalize;
    _inf_value4->clone=(void*)sMultipleNode_clone;
    _inf_value4->compile=(void*)sMultipleNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sMultipleNode_terminated;
    _inf_value4->kind=(void*)sMultipleNode_kind;
    __result336__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value437=_inf_value4));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_500 = come_decrement_ref_count2(sname_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign_507,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_508) { get_return_value_508 = come_decrement_ref_count2(get_return_value_508, ((struct sNode*)get_return_value_508)->finalize, ((struct sNode*)get_return_value_508)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_509,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_510,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_512,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_513,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(expression_node2_517) { expression_node2_517 = come_decrement_ref_count2(expression_node2_517, ((struct sNode*)expression_node2_517)->finalize, ((struct sNode*)expression_node2_517)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(if_node_518) { if_node_518 = come_decrement_ref_count2(if_node_518, ((struct sNode*)if_node_518)->finalize, ((struct sNode*)if_node_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_523) { save_right_value_objects_523 = come_decrement_ref_count2(save_right_value_objects_523, ((struct sNode*)save_right_value_objects_523)->finalize, ((struct sNode*)save_right_value_objects_523)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_526) { restore_right_value_objects_526 = come_decrement_ref_count2(restore_right_value_objects_526, ((struct sNode*)restore_right_value_objects_526)->finalize, ((struct sNode*)restore_right_value_objects_526)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(multiple_node_529,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value433,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value437) { __right_value437 = come_decrement_ref_count2(__right_value437, ((struct sNode*)__right_value437)->finalize, ((struct sNode*)__right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_505;
struct list$1charph* __result325__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_505=0;    i_505<num_value;    i_505++    ){
        list$1charphp_push_back(self,values[i_505]);
    }
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static unsigned int list$1charph_get_hash_key(struct list$1charph* self){
unsigned int result_506;
    result_506=0;
    result_506+=int_get_hash_key(((int)self->head));
    result_506+=int_get_hash_key(((int)self->tail));
    result_506+=int_get_hash_key(((int)self->len));
    result_506+=int_get_hash_key(((int)self->it));
    return result_506;
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

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
struct list_item$1sNodeph* litem_514;
struct sNode* __dec_obj152;
void* __right_value403 = (void*)0;
struct list_item$1sNodeph* litem_515;
struct sNode* __dec_obj153;
void* __right_value404 = (void*)0;
struct list_item$1sNodeph* litem_516;
struct sNode* __dec_obj154;
struct list$1sNodeph* __result326__;
    if(    self->len==0) {
        litem_514=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value402=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_514->prev=((void*)0);
        litem_514->next=((void*)0);
        __dec_obj152=litem_514->item;
        litem_514->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_514;
        self->head=litem_514;
    }
    else if(    self->len==1) {
        litem_515=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value403=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_515->prev=self->head;
        litem_515->next=((void*)0);
        __dec_obj153=litem_515->item;
        litem_515->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_515;
        self->head->next=litem_515;
    }
    else {
        litem_516=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value404=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_516->prev=self->tail;
        litem_516->next=((void*)0);
        __dec_obj154=litem_516->item;
        litem_516->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_516;
        self->tail=litem_516;
    }
    self->len++;
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
void* __result_obj__=(void*)0;
struct sIfNode* __result327__;
void* __right_value412 = (void*)0;
struct sIfNode* result_522;
void* __right_value413 = (void*)0;
char* __dec_obj155;
void* __right_value414 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value415 = (void*)0;
struct sBlock* __dec_obj157;
void* __right_value416 = (void*)0;
struct list$1sNodeph* __dec_obj158;
void* __right_value417 = (void*)0;
struct list$1sBlockph* __dec_obj159;
void* __right_value418 = (void*)0;
struct sBlock* __dec_obj160;
struct sIfNode* __result328__;
    if(    self==(void*)0) {
        __result327__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    result_522=(struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "struct sIfNode", sIfNode_finalize, sIfNode_clone, sIfNode_get_hash_key, sIfNode_equals));
    if(    self!=((void*)0)) {
        result_522->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_522->sname;
        result_522->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_522->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj156=result_522->mExpressionNode;
        result_522->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj157=result_522->mIfBlock;
        result_522->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        come_call_finalizer3(__dec_obj157,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        __dec_obj158=result_522->mElifExpressionNodes;
        result_522->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mElifExpressionNodes));
        come_call_finalizer3(__dec_obj158,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        __dec_obj159=result_522->mElifBlocks;
        result_522->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(come_call_cloner(list$1sBlockphp_clone, self->mElifBlocks));
        come_call_finalizer3(__dec_obj159,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_522->mElifNum=self->mElifNum;
    }
    if(    self!=((void*)0)) {
        result_522->mGuard=self->mGuard;
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        __dec_obj160=result_522->mElseBlock;
        result_522->mElseBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mElseBlock));
        come_call_finalizer3(__dec_obj160,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result328__ = gComeFunResultObject = __result_obj__ = result_522;
    come_call_finalizer3(result_522,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static unsigned int sIfNode_get_hash_key(struct sIfNode* self){
unsigned int result_519;
    result_519=0;
    result_519+=int_get_hash_key(((int)self->sline));
    result_519+=int_get_hash_key(((int)self->sname));
    result_519+=int_get_hash_key(((int)self->sline_real));
    result_519+=int_get_hash_key(((int)self->mExpressionNode));
    result_519+=int_get_hash_key(((int)self->mIfBlock));
    result_519+=int_get_hash_key(((int)self->mElifExpressionNodes));
    result_519+=int_get_hash_key(((int)self->mElifBlocks));
    result_519+=int_get_hash_key(((int)self->mElifNum));
    result_519+=int_get_hash_key(((int)self->mGuard));
    result_519+=int_get_hash_key(((int)self->mElseBlock));
    return result_519;
}

static _Bool sIfNode_equals(struct sIfNode* left, struct sIfNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mExpressionNode,right->mExpressionNode)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mIfBlock,right->mIfBlock)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mElifExpressionNodes,right->mElifExpressionNodes)) {
        return (_Bool)0;
    }
    if(    !list$1sBlockphp_equals(left->mElifBlocks,right->mElifBlocks)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mElifNum,right->mElifNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGuard,right->mGuard)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mElseBlock,right->mElseBlock)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sBlockphp_equals(struct list$1sBlockph* left, struct list$1sBlockph* right){
struct list_item$1sBlockph* it_520;
struct list_item$1sBlockph* it2_521;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_520=left->head;
    it2_521=right->head;
    while(it_520!=((void*)0)) {
        if(        !sBlock_equals(it_520->item,it2_521->item)) {
            return (_Bool)0;
        }
        it_520=it_520->next;
        it2_521=it2_521->next;
    }
    return (_Bool)1;
}

static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self){
void* __result_obj__=(void*)0;
struct sSaveRightValueObjects* __result329__;
void* __right_value422 = (void*)0;
struct sSaveRightValueObjects* result_525;
void* __right_value423 = (void*)0;
char* __dec_obj161;
struct sSaveRightValueObjects* __result330__;
    if(    self==(void*)0) {
        __result329__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    result_525=(struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "sSaveRightValueObjects_clone", 3, "struct sSaveRightValueObjects", sSaveRightValueObjects_finalize, sSaveRightValueObjects_clone, sSaveRightValueObjects_get_hash_key, sSaveRightValueObjects_equals));
    if(    self!=((void*)0)) {
        result_525->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_525->sname;
        result_525->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_525->sline_real=self->sline_real;
    }
    __result330__ = gComeFunResultObject = __result_obj__ = result_525;
    come_call_finalizer3(result_525,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static unsigned int sSaveRightValueObjects_get_hash_key(struct sSaveRightValueObjects* self){
unsigned int result_524;
    result_524=0;
    result_524+=int_get_hash_key(((int)self->sline));
    result_524+=int_get_hash_key(((int)self->sname));
    result_524+=int_get_hash_key(((int)self->sline_real));
    return result_524;
}

static _Bool sSaveRightValueObjects_equals(struct sSaveRightValueObjects* left, struct sSaveRightValueObjects* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self){
void* __result_obj__=(void*)0;
struct sRestoreRightValueObjects* __result331__;
void* __right_value427 = (void*)0;
struct sRestoreRightValueObjects* result_528;
void* __right_value428 = (void*)0;
char* __dec_obj162;
struct sRestoreRightValueObjects* __result332__;
    if(    self==(void*)0) {
        __result331__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    result_528=(struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "sRestoreRightValueObjects_clone", 3, "struct sRestoreRightValueObjects", sRestoreRightValueObjects_finalize, sRestoreRightValueObjects_clone, sRestoreRightValueObjects_get_hash_key, sRestoreRightValueObjects_equals));
    if(    self!=((void*)0)) {
        result_528->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj162=result_528->sname;
        result_528->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_528->sline_real=self->sline_real;
    }
    __result332__ = gComeFunResultObject = __result_obj__ = result_528;
    come_call_finalizer3(result_528,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static unsigned int sRestoreRightValueObjects_get_hash_key(struct sRestoreRightValueObjects* self){
unsigned int result_527;
    result_527=0;
    result_527+=int_get_hash_key(((int)self->sline));
    result_527+=int_get_hash_key(((int)self->sname));
    result_527+=int_get_hash_key(((int)self->sline_real));
    return result_527;
}

static _Bool sRestoreRightValueObjects_equals(struct sRestoreRightValueObjects* left, struct sRestoreRightValueObjects* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_531;
struct list$1sNodeph* __result333__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_531=0;    i_531<num_value;    i_531++    ){
        list$1sNodephp_push_back(self,values[i_531]);
    }
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static unsigned int list$1sNodeph_get_hash_key(struct list$1sNodeph* self){
unsigned int result_532;
    result_532=0;
    result_532+=int_get_hash_key(((int)self->head));
    result_532+=int_get_hash_key(((int)self->tail));
    result_532+=int_get_hash_key(((int)self->len));
    result_532+=int_get_hash_key(((int)self->it));
    return result_532;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    if(    !list_item$1sNodeph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sNodeph_equals(struct list_item$1sNodeph* left, struct list_item$1sNodeph* right){
    if(    !sNode_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sMultipleNode* sMultipleNode_clone(struct sMultipleNode* self){
void* __result_obj__=(void*)0;
struct sMultipleNode* __result334__;
void* __right_value434 = (void*)0;
struct sMultipleNode* result_534;
void* __right_value435 = (void*)0;
char* __dec_obj163;
void* __right_value436 = (void*)0;
struct list$1sNodeph* __dec_obj164;
struct sMultipleNode* __result335__;
    if(    self==(void*)0) {
        __result334__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    result_534=(struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "sMultipleNode_clone", 3, "struct sMultipleNode", sMultipleNode_finalize, sMultipleNode_clone, sMultipleNode_get_hash_key, sMultipleNode_equals));
    if(    self!=((void*)0)) {
        result_534->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj163=result_534->sname;
        result_534->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_534->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        __dec_obj164=result_534->multiple_node;
        result_534->multiple_node=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->multiple_node));
        come_call_finalizer3(__dec_obj164,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result335__ = gComeFunResultObject = __result_obj__ = result_534;
    come_call_finalizer3(result_534,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static unsigned int sMultipleNode_get_hash_key(struct sMultipleNode* self){
unsigned int result_533;
    result_533=0;
    result_533+=int_get_hash_key(((int)self->sline));
    result_533+=int_get_hash_key(((int)self->sname));
    result_533+=int_get_hash_key(((int)self->sline_real));
    result_533+=int_get_hash_key(((int)self->multiple_node));
    return result_533;
}

static _Bool sMultipleNode_equals(struct sMultipleNode* left, struct sMultipleNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->multiple_node,right->multiple_node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value438 = (void*)0;
char* sname_535;
int sline_536;
int var_num_stack_538;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* __list_values3___539[2];
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1charph* multiple_assign_540;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sNode* get_return_value_541;
struct buffer* source_542;
char* p_543;
char* head_544;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct buffer* buf_545;
struct buffer* __dec_obj165;
void* __right_value448 = (void*)0;
struct sBlock* if_block_546;
struct buffer* __dec_obj166;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_547;
int elif_num_548;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1sBlockph* elif_blocks_549;
struct sBlock* else_block_550;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sNode* expression_node2_551;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sNode* _inf_value5;
struct sIfNode* _inf_obj_value5;
void* __right_value457 = (void*)0;
struct sNode* if_node_552;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sNode* load_var_553;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* _inf_value6;
struct sSaveRightValueObjects* _inf_obj_value6;
void* __right_value463 = (void*)0;
struct sNode* save_right_value_objects_554;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sNode* _inf_value7;
struct sRestoreRightValueObjects* _inf_obj_value7;
void* __right_value466 = (void*)0;
struct sNode* restore_right_value_objects_555;
struct sNode* __list_values4___557[5];
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1sNodeph* multiple_node_556;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sNode* _inf_value8;
struct sMultipleNode* _inf_obj_value8;
void* __right_value471 = (void*)0;
struct sNode* __result337__;
    sname_535=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_536=info->sline;
    if(    info->comma_instead_of_semicolon) {
        err_msg(info,"can't be called exception_throw in conditional expression");
        exit(1);
    }
    parse_sharp_v5(info);
    static int var_num_537=0;
    var_num_537++;
    var_num_stack_538=var_num_537;
    multiple_assign_540=(struct list$1charph*)come_increment_ref_count((__list_values3___539[0]=(char*)come_increment_ref_count(((char*)(__right_value440=xsprintf("come_exception_var_b\%s",((char*)(__right_value439=int_to_string(var_num_stack_538))))))),
__list_values3___539[1]=(char*)come_increment_ref_count(((char*)(__right_value441=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 602, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values3___539)));
    __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value440,charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value441,charp_finalize, 0, 1, 0, 0, __result_obj__);
    get_return_value_541=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_540),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_542=(struct buffer*)come_increment_ref_count(info->source);
    p_543=info->p;
    head_544=info->head;
    buf_545=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 611, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_format(buf_545,"{ return none(Err); }");
    __dec_obj165=info->source;
    info->source=(struct buffer*)come_increment_ref_count(buf_545);
    come_call_finalizer3(__dec_obj165,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_536;
    if_block_546=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj166=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_542);
    come_call_finalizer3(__dec_obj166,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_543;
    info->head=head_544;
    info->sline=sline_536;
    elif_expression_nodes_547=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 627, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_548=0;
    elif_blocks_549=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 630, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    else_block_550=((void*)0);
    expression_node2_551=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value453=xsprintf("Err"))),info));
    come_call_finalizer3(__right_value453,charp_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 636, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value456=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 636, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node2_551),if_block_546,elif_expression_nodes_547,elif_blocks_549,elif_num_548,else_block_550,(_Bool)0,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sIfNode_finalize;
    _inf_value5->clone=(void*)sIfNode_clone;
    _inf_value5->compile=(void*)sIfNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sIfNode_terminated;
    _inf_value5->kind=(void*)sIfNode_kind;
    if_node_552=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value456,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    load_var_553=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value459=xsprintf("come_exception_var_b\%s",((char*)(__right_value458=int_to_string(var_num_stack_538)))))),info));
    __right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value459,charp_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 639, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value6=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value462=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 639, "struct sSaveRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value6->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value6->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value6->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_554=(struct sNode*)come_increment_ref_count(_inf_value6);
    come_call_finalizer3(__right_value462,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 640, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value7=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value465=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 640, "struct sRestoreRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value7->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value7->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value7->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_555=(struct sNode*)come_increment_ref_count(_inf_value7);
    come_call_finalizer3(__right_value465,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_556=(struct list$1sNodeph*)come_increment_ref_count((__list_values4___557[0]=(struct sNode*)come_increment_ref_count(save_right_value_objects_554),
__list_values4___557[1]=(struct sNode*)come_increment_ref_count(get_return_value_541),
__list_values4___557[2]=(struct sNode*)come_increment_ref_count(if_node_552),
__list_values4___557[3]=(struct sNode*)come_increment_ref_count(restore_right_value_objects_555),
__list_values4___557[4]=(struct sNode*)come_increment_ref_count(load_var_553),
list$1sNodeph_initialize_with_values((struct list$1sNodeph**)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 642, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key, list$1sNodeph_equals)),5,__list_values4___557)));
    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 644, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value8=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value470=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 644, "struct sMultipleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_556),info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sMultipleNode_finalize;
    _inf_value8->clone=(void*)sMultipleNode_clone;
    _inf_value8->compile=(void*)sMultipleNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sMultipleNode_terminated;
    _inf_value8->kind=(void*)sMultipleNode_kind;
    __result337__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value471=_inf_value8));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_535 = come_decrement_ref_count2(sname_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign_540,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_541) { get_return_value_541 = come_decrement_ref_count2(get_return_value_541, ((struct sNode*)get_return_value_541)->finalize, ((struct sNode*)get_return_value_541)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(source_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_545,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(if_block_546,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_547,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_549,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_550,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(expression_node2_551) { expression_node2_551 = come_decrement_ref_count2(expression_node2_551, ((struct sNode*)expression_node2_551)->finalize, ((struct sNode*)expression_node2_551)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(if_node_552) { if_node_552 = come_decrement_ref_count2(if_node_552, ((struct sNode*)if_node_552)->finalize, ((struct sNode*)if_node_552)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(load_var_553) { load_var_553 = come_decrement_ref_count2(load_var_553, ((struct sNode*)load_var_553)->finalize, ((struct sNode*)load_var_553)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_554) { save_right_value_objects_554 = come_decrement_ref_count2(save_right_value_objects_554, ((struct sNode*)save_right_value_objects_554)->finalize, ((struct sNode*)save_right_value_objects_554)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_555) { restore_right_value_objects_555 = come_decrement_ref_count2(restore_right_value_objects_555, ((struct sNode*)restore_right_value_objects_555)->finalize, ((struct sNode*)restore_right_value_objects_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(multiple_node_556,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value470,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value471) { __right_value471 = come_decrement_ref_count2(__right_value471, ((struct sNode*)__right_value471)->finalize, ((struct sNode*)__right_value471)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result337__;
}

struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value472 = (void*)0;
char* sname_558;
int sline_559;
int var_num_stack_561;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
char* __list_values5___562[2];
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct list$1charph* multiple_assign_563;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sNode* get_return_value_564;
struct buffer* source_565;
char* p_566;
char* head_567;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct buffer* buf_568;
struct buffer* __dec_obj167;
_Bool no_comma_569;
void* __right_value482 = (void*)0;
struct sNode* exp_570;
struct buffer* __dec_obj168;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sNode* expression_node2_571;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sNode* cond_572;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sNode* load_var_573;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* _inf_value9;
struct sSaveRightValueObjects* _inf_obj_value9;
void* __right_value492 = (void*)0;
struct sNode* save_right_value_objects_574;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sNode* _inf_value10;
struct sRestoreRightValueObjects* _inf_obj_value10;
void* __right_value495 = (void*)0;
struct sNode* restore_right_value_objects_575;
struct sNode* __list_values6___577[5];
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct list$1sNodeph* multiple_node_576;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sNode* _inf_value11;
struct sMultipleNode* _inf_obj_value11;
void* __right_value500 = (void*)0;
struct sNode* __result338__;
    sname_558=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_559=info->sline;
    parse_sharp_v5(info);
    static int var_num_560=0;
    var_num_560++;
    var_num_stack_561=var_num_560;
    multiple_assign_563=(struct list$1charph*)come_increment_ref_count((__list_values5___562[0]=(char*)come_increment_ref_count(((char*)(__right_value474=xsprintf("come_exception_var_c\%s",((char*)(__right_value473=int_to_string(var_num_stack_561))))))),
__list_values5___562[1]=(char*)come_increment_ref_count(((char*)(__right_value475=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 659, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values5___562)));
    __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value474,charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value475,charp_finalize, 0, 1, 0, 0, __result_obj__);
    get_return_value_564=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_563),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_565=(struct buffer*)come_increment_ref_count(info->source);
    p_566=info->p;
    head_567=info->head;
    buf_568=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 668, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_568,"puts(Err), exit(0)");
    __dec_obj167=info->source;
    info->source=(struct buffer*)come_increment_ref_count(buf_568);
    come_call_finalizer3(__dec_obj167,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_559;
    no_comma_569=info->no_comma;
    info->no_comma=(_Bool)0;
    exp_570=(struct sNode*)come_increment_ref_count(expression_v13(info));
    info->no_comma=no_comma_569;
    __dec_obj168=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_565);
    come_call_finalizer3(__dec_obj168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_566;
    info->head=head_567;
    info->sline=sline_559;
    expression_node2_571=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value483=xsprintf("Err"))),info));
    come_call_finalizer3(__right_value483,charp_finalize, 0, 1, 0, 0, __result_obj__);
    cond_572=(struct sNode*)come_increment_ref_count(conditional_node((struct sNode*)come_increment_ref_count(expression_node2_571),(struct sNode*)come_increment_ref_count(exp_570),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    load_var_573=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value488=xsprintf("come_exception_var_c\%s",((char*)(__right_value487=int_to_string(var_num_stack_561)))))),info));
    __right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value488,charp_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 692, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value9=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value491=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 692, "struct sSaveRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value9->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value9->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value9->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_574=(struct sNode*)come_increment_ref_count(_inf_value9);
    come_call_finalizer3(__right_value491,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 693, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value10=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value494=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 693, "struct sRestoreRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value10->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value10->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value10->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_575=(struct sNode*)come_increment_ref_count(_inf_value10);
    come_call_finalizer3(__right_value494,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_576=(struct list$1sNodeph*)come_increment_ref_count((__list_values6___577[0]=(struct sNode*)come_increment_ref_count(save_right_value_objects_574),
__list_values6___577[1]=(struct sNode*)come_increment_ref_count(get_return_value_564),
__list_values6___577[2]=(struct sNode*)come_increment_ref_count(cond_572),
__list_values6___577[3]=(struct sNode*)come_increment_ref_count(restore_right_value_objects_575),
__list_values6___577[4]=(struct sNode*)come_increment_ref_count(load_var_573),
list$1sNodeph_initialize_with_values((struct list$1sNodeph**)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 695, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key, list$1sNodeph_equals)),5,__list_values6___577)));
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 697, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value11=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value499=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 697, "struct sMultipleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_576),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sMultipleNode_finalize;
    _inf_value11->clone=(void*)sMultipleNode_clone;
    _inf_value11->compile=(void*)sMultipleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sMultipleNode_terminated;
    _inf_value11->kind=(void*)sMultipleNode_kind;
    __result338__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value500=_inf_value11));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_558 = come_decrement_ref_count2(sname_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign_563,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_564) { get_return_value_564 = come_decrement_ref_count2(get_return_value_564, ((struct sNode*)get_return_value_564)->finalize, ((struct sNode*)get_return_value_564)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(source_565,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_568,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(exp_570) { exp_570 = come_decrement_ref_count2(exp_570, ((struct sNode*)exp_570)->finalize, ((struct sNode*)exp_570)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(expression_node2_571) { expression_node2_571 = come_decrement_ref_count2(expression_node2_571, ((struct sNode*)expression_node2_571)->finalize, ((struct sNode*)expression_node2_571)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(cond_572) { cond_572 = come_decrement_ref_count2(cond_572, ((struct sNode*)cond_572)->finalize, ((struct sNode*)cond_572)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(load_var_573) { load_var_573 = come_decrement_ref_count2(load_var_573, ((struct sNode*)load_var_573)->finalize, ((struct sNode*)load_var_573)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_574) { save_right_value_objects_574 = come_decrement_ref_count2(save_right_value_objects_574, ((struct sNode*)save_right_value_objects_574)->finalize, ((struct sNode*)save_right_value_objects_574)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_575) { restore_right_value_objects_575 = come_decrement_ref_count2(restore_right_value_objects_575, ((struct sNode*)restore_right_value_objects_575)->finalize, ((struct sNode*)restore_right_value_objects_575)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(multiple_node_576,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value499,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value500) { __right_value500 = come_decrement_ref_count2(__right_value500, ((struct sNode*)__right_value500)->finalize, ((struct sNode*)__right_value500)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result338__;
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value501 = (void*)0;
char* sname_578;
int sline_579;
int sline_real_580;
void* __right_value502 = (void*)0;
struct sNode* expression_node_581;
void* __right_value503 = (void*)0;
struct sBlock* if_block_582;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_583;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1sBlockph* elif_blocks_584;
int elif_num_585;
struct sBlock* else_block_586;
char* saved_p_587;
int saved_sline_588;
void* __right_value508 = (void*)0;
char* buf_589;
int sline_real_590;
void* __right_value509 = (void*)0;
struct sNode* expression_node_591;
void* __right_value510 = (void*)0;
struct sBlock* elif_block_592;
void* __right_value514 = (void*)0;
struct sBlock* __dec_obj172;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sNode* _inf_value12;
struct sIfNode* _inf_obj_value12;
void* __right_value517 = (void*)0;
struct sNode* result_596;
struct sNode* __result340__;
void* __right_value518 = (void*)0;
struct sNode* __result341__;
    if(    charp_operator_equals(buf,"if")) {
        sname_578=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        sline_579=info->sline;
        sline_real_580=info->sline_real;
        info->sline_real=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_581=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_582=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        elif_expression_nodes_583=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 720, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        elif_blocks_584=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 722, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        elif_num_585=0;
        else_block_586=((void*)0);
        while(1) {
            saved_p_587=info->p;
            saved_sline_588=info->sline;
            parse_sharp_v5(info);
            if(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            !xisalpha(*info->p)) {
                break;
            }
            parse_sharp_v5(info);
            buf_589=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            if(            string_operator_equals(buf_589,"else")) {
                sline_real_590=info->sline_real;
                info->sline_real=info->sline;
                if(                parsecmp("if",info)) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_591=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_push_back(elif_expression_nodes_583,(struct sNode*)come_increment_ref_count(expression_node_591));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_592=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sBlockphp_push_back(elif_blocks_584,(struct sBlock*)come_increment_ref_count(elif_block_592));
                    elif_num_585++;
                    if(expression_node_591) { expression_node_591 = come_decrement_ref_count2(expression_node_591, ((struct sNode*)expression_node_591)->finalize, ((struct sNode*)expression_node_591)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(elif_block_592,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    __dec_obj172=else_block_586;
                    else_block_586=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj172,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    buf_589 = come_decrement_ref_count2(buf_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                info->sline_real=sline_real_590;
            }
            else {
                info->p=saved_p_587;
                info->sline=saved_sline_588;
                buf_589 = come_decrement_ref_count2(buf_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            buf_589 = come_decrement_ref_count2(buf_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 785, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value516=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 785, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node_581),if_block_582,elif_expression_nodes_583,elif_blocks_584,elif_num_585,else_block_586,(_Bool)0,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sIfNode_finalize;
        _inf_value12->clone=(void*)sIfNode_clone;
        _inf_value12->compile=(void*)sIfNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sIfNode_terminated;
        _inf_value12->kind=(void*)sIfNode_kind;
        result_596=(struct sNode*)come_increment_ref_count(_inf_value12);
        come_call_finalizer3(__right_value516,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_580;
        __result340__ = gComeFunResultObject = __result_obj__ = result_596;
        sname_578 = come_decrement_ref_count2(sname_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_581) { expression_node_581 = come_decrement_ref_count2(expression_node_581, ((struct sNode*)expression_node_581)->finalize, ((struct sNode*)expression_node_581)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(if_block_582,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_expression_nodes_583,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_blocks_584,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(else_block_586,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        if(result_596) { result_596 = come_decrement_ref_count2(result_596, ((struct sNode*)result_596)->finalize, ((struct sNode*)result_596)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result340__;
        sname_578 = come_decrement_ref_count2(sname_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_581) { expression_node_581 = come_decrement_ref_count2(expression_node_581, ((struct sNode*)expression_node_581)->finalize, ((struct sNode*)expression_node_581)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(if_block_582,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_expression_nodes_583,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_blocks_584,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(else_block_586,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        if(result_596) { result_596 = come_decrement_ref_count2(result_596, ((struct sNode*)result_596)->finalize, ((struct sNode*)result_596)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result341__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value518=string_node_v7(buf,head,head_sline,info)));
    if(__right_value518) { __right_value518 = come_decrement_ref_count2(__right_value518, ((struct sNode*)__right_value518)->finalize, ((struct sNode*)__right_value518)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static struct list$1sBlockph* list$1sBlockphp_push_back(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value511 = (void*)0;
struct list_item$1sBlockph* litem_593;
struct sBlock* __dec_obj169;
void* __right_value512 = (void*)0;
struct list_item$1sBlockph* litem_594;
struct sBlock* __dec_obj170;
void* __right_value513 = (void*)0;
struct list_item$1sBlockph* litem_595;
struct sBlock* __dec_obj171;
struct list$1sBlockph* __result339__;
    if(    self->len==0) {
        litem_593=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value511=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_593->prev=((void*)0);
        litem_593->next=((void*)0);
        __dec_obj169=litem_593->item;
        litem_593->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj169,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_593;
        self->head=litem_593;
    }
    else if(    self->len==1) {
        litem_594=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value512=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_594->prev=self->head;
        litem_594->next=((void*)0);
        __dec_obj170=litem_594->item;
        litem_594->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj170,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_594;
        self->head->next=litem_594;
    }
    else {
        litem_595=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value513=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_595->prev=self->tail;
        litem_595->next=((void*)0);
        __dec_obj171=litem_595->item;
        litem_595->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj171,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_595;
        self->tail=litem_595;
    }
    self->len++;
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value519 = (void*)0;
char* sname_597;
int sline_598;
void* __right_value520 = (void*)0;
struct sBlock* if_block_599;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sNode* _inf_value13;
struct sOrStatmentNode* _inf_obj_value13;
void* __right_value527 = (void*)0;
struct sNode* __result344__;
    sname_597=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_598=info->sline;
    parse_sharp_v5(info);
    if_block_599=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 803, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value13=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(__right_value522=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 803, "struct sOrStatmentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node),if_block_599,info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value13->clone=(void*)sOrStatmentNode_clone;
    _inf_value13->compile=(void*)sOrStatmentNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value13->kind=(void*)sOrStatmentNode_kind;
    __result344__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value527=_inf_value13));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_597 = come_decrement_ref_count2(sname_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(if_block_599,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value522,sOrStatmentNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value527) { __right_value527 = come_decrement_ref_count2(__right_value527, ((struct sNode*)__right_value527)->finalize, ((struct sNode*)__right_value527)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
void* __result_obj__=(void*)0;
struct sOrStatmentNode* __result342__;
void* __right_value523 = (void*)0;
struct sOrStatmentNode* result_601;
void* __right_value524 = (void*)0;
char* __dec_obj173;
void* __right_value525 = (void*)0;
struct sNode* __dec_obj174;
void* __right_value526 = (void*)0;
struct sBlock* __dec_obj175;
struct sOrStatmentNode* __result343__;
    if(    self==(void*)0) {
        __result342__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    result_601=(struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "struct sOrStatmentNode", sOrStatmentNode_finalize, sOrStatmentNode_clone, sOrStatmentNode_get_hash_key, sOrStatmentNode_equals));
    if(    self!=((void*)0)) {
        result_601->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj173=result_601->sname;
        result_601->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_601->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj174=result_601->mExpressionNode;
        result_601->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj175=result_601->mIfBlock;
        result_601->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        come_call_finalizer3(__dec_obj175,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result343__ = gComeFunResultObject = __result_obj__ = result_601;
    come_call_finalizer3(result_601,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static unsigned int sOrStatmentNode_get_hash_key(struct sOrStatmentNode* self){
unsigned int result_600;
    result_600=0;
    result_600+=int_get_hash_key(((int)self->sline));
    result_600+=int_get_hash_key(((int)self->sname));
    result_600+=int_get_hash_key(((int)self->sline_real));
    result_600+=int_get_hash_key(((int)self->mExpressionNode));
    result_600+=int_get_hash_key(((int)self->mIfBlock));
    return result_600;
}

static _Bool sOrStatmentNode_equals(struct sOrStatmentNode* left, struct sOrStatmentNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mExpressionNode,right->mExpressionNode)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mIfBlock,right->mIfBlock)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value528 = (void*)0;
char* sname_602;
int sline_603;
void* __right_value529 = (void*)0;
struct sBlock* if_block_604;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sNode* _inf_value14;
struct sAndStatmentNode* _inf_obj_value14;
void* __right_value536 = (void*)0;
struct sNode* __result347__;
    sname_602=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_603=info->sline;
    parse_sharp_v5(info);
    if_block_604=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 815, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value14=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(__right_value531=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 815, "struct sAndStatmentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node),if_block_604,info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value14->clone=(void*)sAndStatmentNode_clone;
    _inf_value14->compile=(void*)sAndStatmentNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value14->kind=(void*)sAndStatmentNode_kind;
    __result347__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value536=_inf_value14));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_602 = come_decrement_ref_count2(sname_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(if_block_604,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value531,sAndStatmentNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value536) { __right_value536 = come_decrement_ref_count2(__right_value536, ((struct sNode*)__right_value536)->finalize, ((struct sNode*)__right_value536)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
void* __result_obj__=(void*)0;
struct sAndStatmentNode* __result345__;
void* __right_value532 = (void*)0;
struct sAndStatmentNode* result_606;
void* __right_value533 = (void*)0;
char* __dec_obj176;
void* __right_value534 = (void*)0;
struct sNode* __dec_obj177;
void* __right_value535 = (void*)0;
struct sBlock* __dec_obj178;
struct sAndStatmentNode* __result346__;
    if(    self==(void*)0) {
        __result345__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    result_606=(struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "struct sAndStatmentNode", sAndStatmentNode_finalize, sAndStatmentNode_clone, sAndStatmentNode_get_hash_key, sAndStatmentNode_equals));
    if(    self!=((void*)0)) {
        result_606->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj176=result_606->sname;
        result_606->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_606->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj177=result_606->mExpressionNode;
        result_606->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj178=result_606->mIfBlock;
        result_606->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        come_call_finalizer3(__dec_obj178,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_606;
    come_call_finalizer3(result_606,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static unsigned int sAndStatmentNode_get_hash_key(struct sAndStatmentNode* self){
unsigned int result_605;
    result_605=0;
    result_605+=int_get_hash_key(((int)self->sline));
    result_605+=int_get_hash_key(((int)self->sname));
    result_605+=int_get_hash_key(((int)self->sline_real));
    result_605+=int_get_hash_key(((int)self->mExpressionNode));
    result_605+=int_get_hash_key(((int)self->mIfBlock));
    return result_605;
}

static _Bool sAndStatmentNode_equals(struct sAndStatmentNode* left, struct sAndStatmentNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mExpressionNode,right->mExpressionNode)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mIfBlock,right->mIfBlock)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value537 = (void*)0;
char* sname_607;
int sline_608;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sNode* it_node_609;
void* __right_value540 = (void*)0;
struct sNode* conditional_value_610;
void* __right_value541 = (void*)0;
struct sBlock* if_block_611;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_612;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct list$1sBlockph* elif_blocks_613;
int elif_num_614;
struct sBlock* else_block_615;
void* __right_value546 = (void*)0;
struct sBlock* __dec_obj179;
void* __right_value547 = (void*)0;
struct sNode* conditional_value_616;
void* __right_value548 = (void*)0;
struct sBlock* elif_block_617;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sBlock* __dec_obj180;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sNode* _inf_value15;
struct sIfNode* _inf_obj_value15;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sNode* _inf_value16;
struct sMatchNode* _inf_obj_value16;
void* __right_value561 = (void*)0;
struct sNode* __result350__;
    sname_607=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_608=info->sline;
    expected_next_character(123,info);
    it_node_609=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    expected_next_character(40,info);
    conditional_value_610=(struct sNode*)come_increment_ref_count(expression_v13(info));
    expected_next_character(41,info);
    parse_sharp_v5(info);
    if_block_611=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_612=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 836, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_blocks_613=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 837, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_614=0;
    else_block_615=((void*)0);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        strncmp(info->p,"else",strlen("else"))==0) {
            info->p+=strlen("else");
            skip_spaces_and_lf(info);
            __dec_obj179=else_block_615;
            else_block_615=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            come_call_finalizer3(__dec_obj179,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            expected_next_character(40,info);
            conditional_value_616=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodephp_add(elif_expression_nodes_612,(struct sNode*)come_increment_ref_count(conditional_value_616));
            expected_next_character(41,info);
            parse_sharp_v5(info);
            elif_block_617=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            list$1sBlockphp_add(elif_blocks_613,(struct sBlock*)come_increment_ref_count(elif_block_617));
            elif_num_614++;
            if(conditional_value_616) { conditional_value_616 = come_decrement_ref_count2(conditional_value_616, ((struct sNode*)conditional_value_616)->finalize, ((struct sNode*)conditional_value_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(elif_block_617,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    if(    else_block_615==((void*)0)) {
        __dec_obj180=else_block_615;
        else_block_615=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 875, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj180,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_615->mOmitSemicolon=(_Bool)1;
        list$1sNodephp_push_back(else_block_615->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 881, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value15=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value554=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 881, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_value_610),if_block_611,elif_expression_nodes_612,elif_blocks_613,elif_num_614,else_block_615,(_Bool)0,info))));
    _inf_value15->_protocol_obj=_inf_obj_value15;
    _inf_value15->finalize=(void*)sIfNode_finalize;
    _inf_value15->clone=(void*)sIfNode_clone;
    _inf_value15->compile=(void*)sIfNode_compile;
    _inf_value15->sline=(void*)sNodeBase_sline;
    _inf_value15->sline_real=(void*)sNodeBase_sline_real;
    _inf_value15->sname=(void*)sNodeBase_sname;
    _inf_value15->terminated=(void*)sIfNode_terminated;
    _inf_value15->kind=(void*)sIfNode_kind;
    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 881, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value16=(struct sMatchNode*)come_increment_ref_count(((struct sMatchNode*)(__right_value556=sMatchNode_initialize((struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "08if.c", 881, "struct sMatchNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_609),(struct sNode*)come_increment_ref_count(_inf_value15),info))));
    _inf_value16->_protocol_obj=_inf_obj_value16;
    _inf_value16->finalize=(void*)sMatchNode_finalize;
    _inf_value16->clone=(void*)sMatchNode_clone;
    _inf_value16->compile=(void*)sMatchNode_compile;
    _inf_value16->sline=(void*)sNodeBase_sline;
    _inf_value16->sline_real=(void*)sNodeBase_sline_real;
    _inf_value16->sname=(void*)sNodeBase_sname;
    _inf_value16->terminated=(void*)sMatchNode_terminated;
    _inf_value16->kind=(void*)sMatchNode_kind;
    __result350__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value561=_inf_value16));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_607 = come_decrement_ref_count2(sname_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_609) { it_node_609 = come_decrement_ref_count2(it_node_609, ((struct sNode*)it_node_609)->finalize, ((struct sNode*)it_node_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_value_610) { conditional_value_610 = come_decrement_ref_count2(conditional_value_610, ((struct sNode*)conditional_value_610)->finalize, ((struct sNode*)conditional_value_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_611,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_612,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_613,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_615,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value554,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value556,sMatchNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value561) { __right_value561 = come_decrement_ref_count2(__right_value561, ((struct sNode*)__right_value561)->finalize, ((struct sNode*)__right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self){
void* __result_obj__=(void*)0;
struct sMatchNode* __result348__;
void* __right_value557 = (void*)0;
struct sMatchNode* result_619;
void* __right_value558 = (void*)0;
char* __dec_obj181;
void* __right_value559 = (void*)0;
struct sNode* __dec_obj182;
void* __right_value560 = (void*)0;
struct sNode* __dec_obj183;
struct sMatchNode* __result349__;
    if(    self==(void*)0) {
        __result348__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    result_619=(struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "sMatchNode_clone", 3, "struct sMatchNode", sMatchNode_finalize, sMatchNode_clone, sMatchNode_get_hash_key, sMatchNode_equals));
    if(    self!=((void*)0)) {
        result_619->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj181=result_619->sname;
        result_619->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_619->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj182=result_619->it_node;
        result_619->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->it_node));
        if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj183=result_619->match_node;
        result_619->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->match_node));
        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_619;
    come_call_finalizer3(result_619,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static unsigned int sMatchNode_get_hash_key(struct sMatchNode* self){
unsigned int result_618;
    result_618=0;
    result_618+=int_get_hash_key(((int)self->sline));
    result_618+=int_get_hash_key(((int)self->sname));
    result_618+=int_get_hash_key(((int)self->sline_real));
    result_618+=int_get_hash_key(((int)self->it_node));
    result_618+=int_get_hash_key(((int)self->match_node));
    return result_618;
}

static _Bool sMatchNode_equals(struct sMatchNode* left, struct sMatchNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->it_node,right->it_node)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->match_node,right->match_node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value562 = (void*)0;
char* sname_620;
int sline_621;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sNode* it_node_622;
void* __right_value565 = (void*)0;
struct sNode* conditional_node_623;
void* __right_value566 = (void*)0;
struct sBlock* if_block_624;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_625;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct list$1sBlockph* elif_blocks_626;
int elif_num_627;
struct sBlock* else_block_628;
char* saved_p_629;
int saved_sline_630;
void* __right_value571 = (void*)0;
char* buf_631;
void* __right_value572 = (void*)0;
struct sNode* expression_node_632;
void* __right_value573 = (void*)0;
struct sBlock* elif_block_633;
void* __right_value574 = (void*)0;
struct sBlock* __dec_obj184;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sBlock* __dec_obj185;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sNode* _inf_value17;
struct sIfNode* _inf_obj_value17;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* _inf_value18;
struct sIfMethodNode* _inf_obj_value18;
void* __right_value587 = (void*)0;
struct sNode* result_634;
struct sNode* __result353__;
    sname_620=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_621=info->sline;
    it_node_622=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_623=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    parse_sharp_v5(info);
    if_block_624=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_625=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 897, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_blocks_626=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 899, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_627=0;
    else_block_628=((void*)0);
    while(1) {
        saved_p_629=info->p;
        saved_sline_630=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_631=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_631,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_632=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodephp_push_back(elif_expression_nodes_625,(struct sNode*)come_increment_ref_count(expression_node_632));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_633=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockphp_push_back(elif_blocks_626,(struct sBlock*)come_increment_ref_count(elif_block_633));
                elif_num_627++;
                if(expression_node_632) { expression_node_632 = come_decrement_ref_count2(expression_node_632, ((struct sNode*)expression_node_632)->finalize, ((struct sNode*)expression_node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(elif_block_633,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj184=else_block_628;
                else_block_628=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj184,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                buf_631 = come_decrement_ref_count2(buf_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_629;
            info->sline=saved_sline_630;
            buf_631 = come_decrement_ref_count2(buf_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_631 = come_decrement_ref_count2(buf_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_628==((void*)0)) {
        __dec_obj185=else_block_628;
        else_block_628=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 960, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj185,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_628->mOmitSemicolon=(_Bool)1;
        list$1sNodephp_push_back(else_block_628->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 966, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value17=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value580=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 966, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_node_623),if_block_624,elif_expression_nodes_625,elif_blocks_626,elif_num_627,else_block_628,(_Bool)0,info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sIfNode_finalize;
    _inf_value17->clone=(void*)sIfNode_clone;
    _inf_value17->compile=(void*)sIfNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sIfNode_terminated;
    _inf_value17->kind=(void*)sIfNode_kind;
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 966, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value18=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value582=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 966, "struct sIfMethodNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_622),(struct sNode*)come_increment_ref_count(_inf_value17),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sIfMethodNode_finalize;
    _inf_value18->clone=(void*)sIfMethodNode_clone;
    _inf_value18->compile=(void*)sIfMethodNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sIfMethodNode_terminated;
    _inf_value18->kind=(void*)sIfMethodNode_kind;
    result_634=(struct sNode*)come_increment_ref_count(_inf_value18);
    come_call_finalizer3(__right_value580,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value582,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result353__ = gComeFunResultObject = __result_obj__ = result_634;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_620 = come_decrement_ref_count2(sname_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_622) { it_node_622 = come_decrement_ref_count2(it_node_622, ((struct sNode*)it_node_622)->finalize, ((struct sNode*)it_node_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_623) { conditional_node_623 = come_decrement_ref_count2(conditional_node_623, ((struct sNode*)conditional_node_623)->finalize, ((struct sNode*)conditional_node_623)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_624,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_625,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_626,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_628,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_634) { result_634 = come_decrement_ref_count2(result_634, ((struct sNode*)result_634)->finalize, ((struct sNode*)result_634)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self){
void* __result_obj__=(void*)0;
struct sIfMethodNode* __result351__;
void* __right_value583 = (void*)0;
struct sIfMethodNode* result_636;
void* __right_value584 = (void*)0;
char* __dec_obj186;
void* __right_value585 = (void*)0;
struct sNode* __dec_obj187;
void* __right_value586 = (void*)0;
struct sNode* __dec_obj188;
struct sIfMethodNode* __result352__;
    if(    self==(void*)0) {
        __result351__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    result_636=(struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "sIfMethodNode_clone", 3, "struct sIfMethodNode", sIfMethodNode_finalize, sIfMethodNode_clone, sIfMethodNode_get_hash_key, sIfMethodNode_equals));
    if(    self!=((void*)0)) {
        result_636->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj186=result_636->sname;
        result_636->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_636->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj187=result_636->it_node;
        result_636->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->it_node));
        if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj188=result_636->match_node;
        result_636->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->match_node));
        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_636;
    come_call_finalizer3(result_636,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static unsigned int sIfMethodNode_get_hash_key(struct sIfMethodNode* self){
unsigned int result_635;
    result_635=0;
    result_635+=int_get_hash_key(((int)self->sline));
    result_635+=int_get_hash_key(((int)self->sname));
    result_635+=int_get_hash_key(((int)self->sline_real));
    result_635+=int_get_hash_key(((int)self->it_node));
    result_635+=int_get_hash_key(((int)self->match_node));
    return result_635;
}

static _Bool sIfMethodNode_equals(struct sIfMethodNode* left, struct sIfMethodNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->it_node,right->it_node)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->match_node,right->match_node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value588 = (void*)0;
char* sname_637;
int sline_638;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sNode* it_node_639;
void* __right_value591 = (void*)0;
struct sNode* conditional_node_640;
void* __right_value592 = (void*)0;
struct sNode* conditional_node2_641;
void* __right_value593 = (void*)0;
struct sBlock* if_block_642;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_643;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct list$1sBlockph* elif_blocks_644;
int elif_num_645;
struct sBlock* else_block_646;
char* saved_p_647;
int saved_sline_648;
void* __right_value598 = (void*)0;
char* buf_649;
void* __right_value599 = (void*)0;
struct sNode* expression_node_650;
void* __right_value600 = (void*)0;
struct sBlock* elif_block_651;
void* __right_value601 = (void*)0;
struct sBlock* __dec_obj189;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sBlock* __dec_obj190;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sNode* _inf_value19;
struct sIfNode* _inf_obj_value19;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sNode* _inf_value20;
struct sIfMethodNode* _inf_obj_value20;
void* __right_value610 = (void*)0;
struct sNode* result_652;
struct sNode* __result354__;
    sname_637=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_638=info->sline;
    it_node_639=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_640=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_641=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_640),info));
    parse_sharp_v5(info);
    if_block_642=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_643=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 985, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_blocks_644=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 987, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_645=0;
    else_block_646=((void*)0);
    while(1) {
        saved_p_647=info->p;
        saved_sline_648=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_649=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_649,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_650=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodephp_push_back(elif_expression_nodes_643,(struct sNode*)come_increment_ref_count(expression_node_650));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_651=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockphp_push_back(elif_blocks_644,(struct sBlock*)come_increment_ref_count(elif_block_651));
                elif_num_645++;
                if(expression_node_650) { expression_node_650 = come_decrement_ref_count2(expression_node_650, ((struct sNode*)expression_node_650)->finalize, ((struct sNode*)expression_node_650)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(elif_block_651,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj189=else_block_646;
                else_block_646=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj189,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                buf_649 = come_decrement_ref_count2(buf_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_647;
            info->sline=saved_sline_648;
            buf_649 = come_decrement_ref_count2(buf_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_649 = come_decrement_ref_count2(buf_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_646==((void*)0)) {
        __dec_obj190=else_block_646;
        else_block_646=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1048, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj190,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_646->mOmitSemicolon=(_Bool)1;
        list$1sNodephp_push_back(else_block_646->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1054, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value19=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value607=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1054, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_node2_641),if_block_642,elif_expression_nodes_643,elif_blocks_644,elif_num_645,else_block_646,(_Bool)0,info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sIfNode_finalize;
    _inf_value19->clone=(void*)sIfNode_clone;
    _inf_value19->compile=(void*)sIfNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sIfNode_terminated;
    _inf_value19->kind=(void*)sIfNode_kind;
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1054, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value20=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value609=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1054, "struct sIfMethodNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_639),(struct sNode*)come_increment_ref_count(_inf_value19),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sIfMethodNode_finalize;
    _inf_value20->clone=(void*)sIfMethodNode_clone;
    _inf_value20->compile=(void*)sIfMethodNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sIfMethodNode_terminated;
    _inf_value20->kind=(void*)sIfMethodNode_kind;
    result_652=(struct sNode*)come_increment_ref_count(_inf_value20);
    come_call_finalizer3(__right_value607,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value609,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result354__ = gComeFunResultObject = __result_obj__ = result_652;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_637 = come_decrement_ref_count2(sname_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_639) { it_node_639 = come_decrement_ref_count2(it_node_639, ((struct sNode*)it_node_639)->finalize, ((struct sNode*)it_node_639)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_640) { conditional_node_640 = come_decrement_ref_count2(conditional_node_640, ((struct sNode*)conditional_node_640)->finalize, ((struct sNode*)conditional_node_640)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node2_641) { conditional_node2_641 = come_decrement_ref_count2(conditional_node2_641, ((struct sNode*)conditional_node2_641)->finalize, ((struct sNode*)conditional_node2_641)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_642,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_643,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_644,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_646,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_652) { result_652 = come_decrement_ref_count2(result_652, ((struct sNode*)result_652)->finalize, ((struct sNode*)result_652)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result354__;
}

struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value611 = (void*)0;
char* sname_653;
int sline_654;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sNode* it_node_655;
void* __right_value614 = (void*)0;
struct sNode* conditional_node_656;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sNode* conditional_node2_657;
void* __right_value617 = (void*)0;
struct sBlock* if_block_658;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_659;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct list$1sBlockph* elif_blocks_660;
int elif_num_661;
struct sBlock* else_block_662;
char* saved_p_663;
int saved_sline_664;
void* __right_value622 = (void*)0;
char* buf_665;
void* __right_value623 = (void*)0;
struct sNode* expression_node_666;
void* __right_value624 = (void*)0;
struct sBlock* elif_block_667;
void* __right_value625 = (void*)0;
struct sBlock* __dec_obj191;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sBlock* __dec_obj192;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sNode* _inf_value21;
struct sIfNode* _inf_obj_value21;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sNode* _inf_value22;
struct sIfMethodNode* _inf_obj_value22;
void* __right_value634 = (void*)0;
struct sNode* result_668;
struct sNode* __result355__;
    sname_653=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_654=info->sline;
    it_node_655=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_656=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_657=(struct sNode*)come_increment_ref_count(create_less((struct sNode*)come_increment_ref_count(conditional_node_656),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    parse_sharp_v5(info);
    if_block_658=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_659=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 1073, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_blocks_660=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 1075, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_661=0;
    else_block_662=((void*)0);
    while(1) {
        saved_p_663=info->p;
        saved_sline_664=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_665=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_665,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_666=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodephp_push_back(elif_expression_nodes_659,(struct sNode*)come_increment_ref_count(expression_node_666));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_667=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockphp_push_back(elif_blocks_660,(struct sBlock*)come_increment_ref_count(elif_block_667));
                elif_num_661++;
                if(expression_node_666) { expression_node_666 = come_decrement_ref_count2(expression_node_666, ((struct sNode*)expression_node_666)->finalize, ((struct sNode*)expression_node_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(elif_block_667,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj191=else_block_662;
                else_block_662=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj191,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                buf_665 = come_decrement_ref_count2(buf_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_663;
            info->sline=saved_sline_664;
            buf_665 = come_decrement_ref_count2(buf_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_665 = come_decrement_ref_count2(buf_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_662==((void*)0)) {
        __dec_obj192=else_block_662;
        else_block_662=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1136, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj192,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_662->mOmitSemicolon=(_Bool)1;
        list$1sNodephp_push_back(else_block_662->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1142, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value21=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value631=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1142, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_node2_657),if_block_658,elif_expression_nodes_659,elif_blocks_660,elif_num_661,else_block_662,(_Bool)0,info))));
    _inf_value21->_protocol_obj=_inf_obj_value21;
    _inf_value21->finalize=(void*)sIfNode_finalize;
    _inf_value21->clone=(void*)sIfNode_clone;
    _inf_value21->compile=(void*)sIfNode_compile;
    _inf_value21->sline=(void*)sNodeBase_sline;
    _inf_value21->sline_real=(void*)sNodeBase_sline_real;
    _inf_value21->sname=(void*)sNodeBase_sname;
    _inf_value21->terminated=(void*)sIfNode_terminated;
    _inf_value21->kind=(void*)sIfNode_kind;
    _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1142, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value22=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value633=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1142, "struct sIfMethodNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_655),(struct sNode*)come_increment_ref_count(_inf_value21),info))));
    _inf_value22->_protocol_obj=_inf_obj_value22;
    _inf_value22->finalize=(void*)sIfMethodNode_finalize;
    _inf_value22->clone=(void*)sIfMethodNode_clone;
    _inf_value22->compile=(void*)sIfMethodNode_compile;
    _inf_value22->sline=(void*)sNodeBase_sline;
    _inf_value22->sline_real=(void*)sNodeBase_sline_real;
    _inf_value22->sname=(void*)sNodeBase_sname;
    _inf_value22->terminated=(void*)sIfMethodNode_terminated;
    _inf_value22->kind=(void*)sIfMethodNode_kind;
    result_668=(struct sNode*)come_increment_ref_count(_inf_value22);
    come_call_finalizer3(__right_value631,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value633,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result355__ = gComeFunResultObject = __result_obj__ = result_668;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_653 = come_decrement_ref_count2(sname_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_655) { it_node_655 = come_decrement_ref_count2(it_node_655, ((struct sNode*)it_node_655)->finalize, ((struct sNode*)it_node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_656) { conditional_node_656 = come_decrement_ref_count2(conditional_node_656, ((struct sNode*)conditional_node_656)->finalize, ((struct sNode*)conditional_node_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node2_657) { conditional_node2_657 = come_decrement_ref_count2(conditional_node2_657, ((struct sNode*)conditional_node2_657)->finalize, ((struct sNode*)conditional_node2_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_658,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_659,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_660,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_662,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_668) { result_668 = come_decrement_ref_count2(result_668, ((struct sNode*)result_668)->finalize, ((struct sNode*)result_668)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result355__;
}

