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
struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
};

struct sNullNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNilNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sAddNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sSubNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMultNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sCommaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sConditionalNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static int list$1voidphp_length(struct list$1voidph* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self);
static unsigned int tuple2$2charphvoidp_get_hash_key(struct tuple2$2charphvoidp* self);
static _Bool tuple2$2charphvoidp_equals(struct tuple2$2charphvoidp* left, struct tuple2$2charphvoidp* right);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);
char* sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sNullNode_finalize(struct sNullNode* self);
struct sNode* create_null_node(struct sInfo* info);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static unsigned int sNullNode_get_hash_key(struct sNullNode* self);
static _Bool sNullNode_equals(struct sNullNode* left, struct sNullNode* right);
struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);
char* sNilNode_kind(struct sNilNode* self);
_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);
static void sNilNode_finalize(struct sNilNode* self);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);
static void sAddNode_finalize(struct sAddNode* self);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);
static void sSubNode_finalize(struct sSubNode* self);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);
static void sMultNode_finalize(struct sMultNode* self);
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);
static void sDivNode_finalize(struct sDivNode* self);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);
static void sModNode_finalize(struct sModNode* self);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);
static void sLShiftNode_finalize(struct sLShiftNode* self);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);
static void sRShiftNode_finalize(struct sRShiftNode* self);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);
static void sGtEqNode_finalize(struct sGtEqNode* self);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);
static void sLtEqNode_finalize(struct sLtEqNode* self);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);
static void sLtNode_finalize(struct sLtNode* self);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);
static void sGtNode_finalize(struct sGtNode* self);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);
static void sEqNode_finalize(struct sEqNode* self);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);
static void sNotEqNode_finalize(struct sNotEqNode* self);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);
static void sEq2Node_finalize(struct sEq2Node* self);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);
static void sAndNode_finalize(struct sAndNode* self);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);
static void sXOrNode_finalize(struct sXOrNode* self);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);
static void sOrNode_finalize(struct sOrNode* self);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);
static void sAndAndNode_finalize(struct sAndAndNode* self);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);
static void sOrOrNode_finalize(struct sOrOrNode* self);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);
char* sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);
static void sCommaNode_finalize(struct sCommaNode* self);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
char* sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);
static void sConditionalNode_finalize(struct sConditionalNode* self);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
static unsigned int sConditionalNode_get_hash_key(struct sConditionalNode* self);
static _Bool sConditionalNode_equals(struct sConditionalNode* left, struct sConditionalNode* right);
struct sNode* mult_exp(struct sInfo* info);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static unsigned int sMultNode_get_hash_key(struct sMultNode* self);
static _Bool sMultNode_equals(struct sMultNode* left, struct sMultNode* right);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static unsigned int sDivNode_get_hash_key(struct sDivNode* self);
static _Bool sDivNode_equals(struct sDivNode* left, struct sDivNode* right);
static struct sModNode* sModNode_clone(struct sModNode* self);
static unsigned int sModNode_get_hash_key(struct sModNode* self);
static _Bool sModNode_equals(struct sModNode* left, struct sModNode* right);
struct sNode* add_exp(struct sInfo* info);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static unsigned int sAddNode_get_hash_key(struct sAddNode* self);
static _Bool sAddNode_equals(struct sAddNode* left, struct sAddNode* right);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
static unsigned int sSubNode_get_hash_key(struct sSubNode* self);
static _Bool sSubNode_equals(struct sSubNode* left, struct sSubNode* right);
struct sNode* shift_exp(struct sInfo* info);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static unsigned int sLShiftNode_get_hash_key(struct sLShiftNode* self);
static _Bool sLShiftNode_equals(struct sLShiftNode* left, struct sLShiftNode* right);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
static unsigned int sRShiftNode_get_hash_key(struct sRShiftNode* self);
static _Bool sRShiftNode_equals(struct sRShiftNode* left, struct sRShiftNode* right);
struct sNode* comparison_exp(struct sInfo* info);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static unsigned int sGtEqNode_get_hash_key(struct sGtEqNode* self);
static _Bool sGtEqNode_equals(struct sGtEqNode* left, struct sGtEqNode* right);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static unsigned int sLtEqNode_get_hash_key(struct sLtEqNode* self);
static _Bool sLtEqNode_equals(struct sLtEqNode* left, struct sLtEqNode* right);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static unsigned int sGtNode_get_hash_key(struct sGtNode* self);
static _Bool sGtNode_equals(struct sGtNode* left, struct sGtNode* right);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
static unsigned int sLtNode_get_hash_key(struct sLtNode* self);
static _Bool sLtNode_equals(struct sLtNode* left, struct sLtNode* right);
struct sNode* eq_exp(struct sInfo* info);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static unsigned int sEq2Node_get_hash_key(struct sEq2Node* self);
static _Bool sEq2Node_equals(struct sEq2Node* left, struct sEq2Node* right);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static unsigned int sEqNode_get_hash_key(struct sEqNode* self);
static _Bool sEqNode_equals(struct sEqNode* left, struct sEqNode* right);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static unsigned int sNotEq2Node_get_hash_key(struct sNotEq2Node* self);
static _Bool sNotEq2Node_equals(struct sNotEq2Node* left, struct sNotEq2Node* right);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
static unsigned int sNotEqNode_get_hash_key(struct sNotEqNode* self);
static _Bool sNotEqNode_equals(struct sNotEqNode* left, struct sNotEqNode* right);
struct sNode* and_exp(struct sInfo* info);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
static unsigned int sAndNode_get_hash_key(struct sAndNode* self);
static _Bool sAndNode_equals(struct sAndNode* left, struct sAndNode* right);
struct sNode* xor_exp(struct sInfo* info);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
static unsigned int sXOrNode_get_hash_key(struct sXOrNode* self);
static _Bool sXOrNode_equals(struct sXOrNode* left, struct sXOrNode* right);
struct sNode* or_exp(struct sInfo* info);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
static unsigned int sOrNode_get_hash_key(struct sOrNode* self);
static _Bool sOrNode_equals(struct sOrNode* left, struct sOrNode* right);
struct sNode* andand_exp(struct sInfo* info);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
static unsigned int sAndAndNode_get_hash_key(struct sAndAndNode* self);
static _Bool sAndAndNode_equals(struct sAndAndNode* left, struct sAndAndNode* right);
struct sNode* oror_exp(struct sInfo* info);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
static unsigned int sOrOrNode_get_hash_key(struct sOrOrNode* self);
static _Bool sOrOrNode_equals(struct sOrOrNode* left, struct sOrOrNode* right);
struct sNode* comma_exp(struct sInfo* info);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
static unsigned int sCommaNode_get_hash_key(struct sCommaNode* self);
static _Bool sCommaNode_equals(struct sCommaNode* left, struct sCommaNode* right);
struct sNode* conditional_exp(struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
static unsigned int sNilNode_get_hash_key(struct sNilNode* self);
static _Bool sNilNode_equals(struct sNilNode* left, struct sNilNode* right);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __right_value287 = (void*)0;
struct sType* generics_type_308;
struct sType* __dec_obj76;
struct sClass* klass_344;
char* class_name_345;
struct sFun* operator_fun_346;
char* fun_name2_347;
struct sGenericsFun* generics_fun_348;
void* __right_value288 = (void*)0;
char* none_generics_name_349;
void* __right_value289 = (void*)0;
struct sType* obj_type_350;
void* __right_value290 = (void*)0;
char* __dec_obj77;
void* __right_value291 = (void*)0;
char* fun_name3_351;
void* __right_value292 = (void*)0;
_Bool generics_any_child_354;
void* __right_value293 = (void*)0;
struct sType* no_solved_type_355;
struct sType* __dec_obj88;
struct list$1voidph* o2_saved_356;
struct sType* it_359;
struct list$1voidph* o2_saved_362;
struct sType* it_363;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* type2_364;
void* __right_value296 = (void*)0;
struct sType* type_before_365;
void* __right_value297 = (void*)0;
char* __dec_obj89;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var1 = (void*)0;
char* name_366=0;
_Bool err_367=0;
void* __right_value300 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
_Bool __result257__;
void* __right_value305 = (void*)0;
char* __dec_obj112;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var2 = (void*)0;
char* name_373=0;
_Bool err_374=0;
_Bool __result262__;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3 = (void*)0;
struct sFun* fun_375=0;
char* fun_name_376=0;
void* __right_value310 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun2_377=0;
char* fun_name2_378=0;
void* __right_value311 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_379=0;
char* fun_name_380=0;
void* __right_value312 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_381=0;
char* fun_name2_382=0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
char* __dec_obj114;
int i_383;
void* __right_value315 = (void*)0;
char* new_fun_name_384;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* __dec_obj115;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sType* obj_type_385;
void* __right_value320 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun_386=0;
char* fun_name_387=0;
void* __right_value321 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8 = (void*)0;
struct sFun* fun2_388=0;
char* fun_name2_389=0;
void* __right_value322 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var9 = (void*)0;
struct sFun* fun_390=0;
char* fun_name_391=0;
void* __right_value323 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var10 = (void*)0;
struct sFun* fun2_392=0;
char* fun_name2_393=0;
_Bool result_394;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct CVALUE* come_value_395;
char* left_value2_396;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
_Bool _if_conditional1;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* __dec_obj116;
void* __right_value332 = (void*)0;
char* __dec_obj117;
char* right_value2_400;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
_Bool _if_conditional2;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
char* __dec_obj118;
void* __right_value339 = (void*)0;
char* __dec_obj119;
void* __right_value340 = (void*)0;
struct sType* type2_401;
void* __right_value341 = (void*)0;
struct sType* type3_402;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
char* __dec_obj120;
struct sType* result_type_403;
struct sType* obj_type_404;
void* __right_value346 = (void*)0;
struct sType* __dec_obj121;
void* __right_value347 = (void*)0;
struct sType* __dec_obj122;
void* __right_value348 = (void*)0;
struct sType* __dec_obj123;
void* __right_value349 = (void*)0;
char* __dec_obj124;
void* __right_value350 = (void*)0;
struct CVALUE* __dec_obj125;
_Bool __result266__;
fun_name2_347 = (void*)0;
memset(&i_383, 0, sizeof(int));
left_value2_396 = (void*)0;
right_value2_400 = (void*)0;
    generics_type_308=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type_308->mNoSolvedGenericsType) {
        __dec_obj76=generics_type_308;
        generics_type_308=(struct sType*)come_increment_ref_count(generics_type_308->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    klass_344=type->mClass;
    class_name_345=klass_344->mName;
    operator_fun_346=((void*)0);
    generics_fun_348=((void*)0);
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_349=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_350=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj77=fun_name2_347;
        fun_name2_347=(char*)come_increment_ref_count(create_method_name(obj_type_350,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_351=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_349,fun_name));
        generics_fun_348=((struct sGenericsFun*)(__right_value292=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_351,((void*)0))));
        come_call_finalizer3(__right_value292,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_348) {
            generics_any_child_354=(_Bool)0;
            no_solved_type_355=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            if(            type->mNoSolvedGenericsType) {
                __dec_obj88=no_solved_type_355;
                no_solved_type_355=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
                come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
                for(                o2_saved_356=(struct list$1voidph*)come_increment_ref_count((no_solved_type_355->mGenericsTypes)),it_359=((struct sType*)list$1voidphp_begin((o2_saved_356)));                !list$1voidphp_end((o2_saved_356));                it_359=((struct sType*)list$1voidphp_next((o2_saved_356)))                ){
                    if(                    it_359->mAnyOriginalType) {
                        generics_any_child_354=(_Bool)1;
                    }
                }
                come_call_finalizer3(o2_saved_356,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            for(            o2_saved_362=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_363=((struct sType*)list$1voidphp_begin((o2_saved_362)));            !list$1voidphp_end((o2_saved_362));            it_363=((struct sType*)list$1voidphp_next((o2_saved_362)))            ){
                if(                it_363->mAnyOriginalType) {
                    generics_any_child_354=(_Bool)1;
                }
            }
            come_call_finalizer3(o2_saved_362,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            generics_fun_348->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_354)) {
                type2_364=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type))));
                type_before_365=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
                __dec_obj89=fun_name2_347;
                fun_name2_347=(char*)come_increment_ref_count(create_method_name(type2_364,(_Bool)0,fun_name,info,(_Bool)1));
                __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                multiple_assign_var1=((struct tuple2$2charphbool*)(__right_value299=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_347)),generics_fun_348,type2_364,info)));
                name_366=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                err_367=multiple_assign_var1->v2;
                come_call_finalizer3(__right_value299,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_367) {
                    err_msg(info,"%s not found",fun_name3_351);
                    __result257__ = ((struct tuple2$2charphvoidp*)(__right_value304=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "13op.c", 58, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
                    come_call_finalizer3(type2_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_before_365,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_366 = come_decrement_ref_count2(name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(no_solved_type_355,sType_finalize, 0, 0, 0, 0, (void*)0);
                    none_generics_name_349 = come_decrement_ref_count2(none_generics_name_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_350,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name3_351 = come_decrement_ref_count2(fun_name3_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(generics_type_308,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_347 = come_decrement_ref_count2(fun_name2_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value304,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, (void*)0);
                    return __result257__;
                }
                operator_fun_346=((struct sFun*)(__right_value305=map$2charphsFunphp_operator_load_element(info->funcs,name_366)));
                come_call_finalizer3(__right_value305,sFun_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj112=fun_name2_347;
                fun_name2_347=(char*)come_increment_ref_count(name_366);
                __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                type=type_before_365;
                come_call_finalizer3(type2_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_365,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_366 = come_decrement_ref_count2(name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var2=((struct tuple2$2charphbool*)(__right_value307=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_347)),generics_fun_348,obj_type_350,info)));
                name_373=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                err_374=multiple_assign_var2->v2;
                come_call_finalizer3(__right_value307,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_374) {
                    __result262__ = (_Bool)0;
                    name_373 = come_decrement_ref_count2(name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(no_solved_type_355,sType_finalize, 0, 0, 0, 0, (void*)0);
                    none_generics_name_349 = come_decrement_ref_count2(none_generics_name_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_350,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name3_351 = come_decrement_ref_count2(fun_name3_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(generics_type_308,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_347 = come_decrement_ref_count2(fun_name2_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result262__;
                }
                operator_fun_346=((struct sFun*)(__right_value308=map$2charphsFunphp_operator_load_element(info->funcs,name_373)));
                come_call_finalizer3(__right_value308,sFun_finalize, 0, 1, 0, 0, (void*)0);
                name_373 = come_decrement_ref_count2(name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(no_solved_type_355,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value309=create_equals_automatically(obj_type_350,"equals",info)));
                fun_375=multiple_assign_var3->v1;
                fun_name_376=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(__right_value309,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value310=create_operator_equals_automatically(obj_type_350,"operator_equals",info)));
                fun2_377=multiple_assign_var4->v1;
                fun_name2_378=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer3(__right_value310,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_346=fun2_377;
                fun_name_376 = come_decrement_ref_count2(fun_name_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_378 = come_decrement_ref_count2(fun_name2_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value311=create_not_equals_automatically(obj_type_350,"not_equals",info)));
                fun_379=multiple_assign_var5->v1;
                fun_name_380=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(__right_value311,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value312=create_operator_not_equals_automatically(obj_type_350,"operator_not_equals",info)));
                fun2_381=multiple_assign_var6->v1;
                fun_name2_382=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                come_call_finalizer3(__right_value312,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_346=fun2_381;
                fun_name_380 = come_decrement_ref_count2(fun_name_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_382 = come_decrement_ref_count2(fun_name2_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                operator_fun_346=((struct sFun*)(__right_value313=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_347)));
                come_call_finalizer3(__right_value313,sFun_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        none_generics_name_349 = come_decrement_ref_count2(none_generics_name_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_350,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_351 = come_decrement_ref_count2(fun_name3_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj114=fun_name2_347;
        fun_name2_347=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_383=128-1;        i_383>=1;        i_383--        ){
            new_fun_name_384=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_347,i_383));
            operator_fun_346=((struct sFun*)(__right_value316=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_384)));
            come_call_finalizer3(__right_value316,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            operator_fun_346) {
                __dec_obj115=fun_name2_347;
                fun_name2_347=(char*)come_increment_ref_count(__builtin_string(new_fun_name_384));
                __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_384 = come_decrement_ref_count2(new_fun_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_384 = come_decrement_ref_count2(new_fun_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_346==((void*)0)) {
            operator_fun_346=((struct sFun*)(__right_value318=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_347)));
            come_call_finalizer3(__right_value318,sFun_finalize, 0, 1, 0, 0, (void*)0);
            obj_type_385=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
            if(            operator_fun_346==((void*)0)) {
                if(                charp_operator_equals(fun_name,"operator_equals")) {
                    multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value320=create_equals_automatically(obj_type_385,"equals",info)));
                    fun_386=multiple_assign_var7->v1;
                    fun_name_387=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    come_call_finalizer3(__right_value320,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value321=create_operator_equals_automatically(obj_type_385,"operator_equals",info)));
                    fun2_388=multiple_assign_var8->v1;
                    fun_name2_389=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                    come_call_finalizer3(__right_value321,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_346=fun2_388;
                    fun_name_387 = come_decrement_ref_count2(fun_name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_389 = come_decrement_ref_count2(fun_name2_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else if(                charp_operator_equals(fun_name,"operator_not_equals")) {
                    multiple_assign_var9=((struct tuple2$2sFunpcharph*)(__right_value322=create_not_equals_automatically(obj_type_385,"not_equals",info)));
                    fun_390=multiple_assign_var9->v1;
                    fun_name_391=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                    come_call_finalizer3(__right_value322,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var10=((struct tuple2$2sFunpcharph*)(__right_value323=create_operator_not_equals_automatically(obj_type_385,"operator_not_equals",info)));
                    fun2_392=multiple_assign_var10->v1;
                    fun_name2_393=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    come_call_finalizer3(__right_value323,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_346=fun2_392;
                    fun_name_391 = come_decrement_ref_count2(fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_393 = come_decrement_ref_count2(fun_name2_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(obj_type_385,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    result_394=(_Bool)0;
    if(    operator_fun_346&&(list$1voidphp_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))) {
        come_value_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 134, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        check_assign_type(((char*)(__right_value327=xsprintf("\%s is assigned to",((char*)(__right_value326=string_to_string(fun_name2_347)))))),((struct sType*)((void*)(__right_value328=list$1voidphp_operator_load_element(operator_fun_346->mParamTypes,0)))),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value327,charp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value328,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional1=(((struct sType*)((void*)(__right_value329=list$1voidphp_operator_load_element(operator_fun_346->mParamTypes,0))))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value329,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            std_move(((struct sType*)((void*)(__right_value330=list$1voidphp_operator_load_element(operator_fun_346->mParamTypes,0)))),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value330,(void*)0, 0, 1, 0, 0, (void*)0);
            __dec_obj116=left_value2_396;
            left_value2_396=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj117=left_value2_396;
            left_value2_396=(char*)come_increment_ref_count(come_call_cloner(string_clone, left_value->c_value));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value334=xsprintf("\%s is assigned to",((char*)(__right_value333=string_to_string(fun_name2_347)))))),((struct sType*)((void*)(__right_value335=list$1voidphp_operator_load_element(operator_fun_346->mParamTypes,1)))),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value334,charp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value335,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional2=(((struct sType*)((void*)(__right_value336=list$1voidphp_operator_load_element(operator_fun_346->mParamTypes,1))))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value336,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)((void*)(__right_value337=list$1voidphp_operator_load_element(operator_fun_346->mParamTypes,1)))),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value337,(void*)0, 0, 1, 0, 0, (void*)0);
            __dec_obj118=right_value2_400;
            right_value2_400=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj119=right_value2_400;
            right_value2_400=(char*)come_increment_ref_count(come_call_cloner(string_clone, right_value->c_value));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        type2_401=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, operator_fun_346->mResultType));
        type3_402=(struct sType*)come_increment_ref_count(solve_generics(type2_401,generics_type_308,info));
        __dec_obj120=come_value_395->c_value;
        come_value_395->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s)",((char*)(__right_value342=string_to_string(fun_name2_347))),((char*)(__right_value343=string_to_string(left_value2_396))),((char*)(__right_value344=string_to_string(right_value2_400)))));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_403=(struct sType*)come_increment_ref_count(type2_401);
        obj_type_404=(struct sType*)come_increment_ref_count(generics_type_308);
        come_value_395->var=((void*)0);
        if(        result_type_403->mAnyOriginalType&&generics_fun_348) {
            __dec_obj121=type3_402;
            type3_402=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_348->mResultType,obj_type_404,info));
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj122=come_value_395->type;
            come_value_395->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_402));
            come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_395->type->mStatic=(_Bool)0;
        }
        else {
            __dec_obj123=come_value_395->type;
            come_value_395->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_402));
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        type3_402->mHeap) {
            append_object_to_right_values2(come_value_395,(struct sType*)come_increment_ref_count(type3_402),info,(_Bool)0);
        }
        __dec_obj124=come_value_395->c_value;
        come_value_395->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_395->c_value,come_value_395->type,info));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_395->c_value);
        __dec_obj125=come_value_395;
        come_value_395=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_395),info));
        come_call_finalizer3(__dec_obj125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_395));
        result_394=(_Bool)1;
        come_call_finalizer3(come_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_396 = come_decrement_ref_count2(left_value2_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_400 = come_decrement_ref_count2(right_value2_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_401,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_402,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_403,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_404,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result266__ = result_394;
    come_call_finalizer3(generics_type_308,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_347 = come_decrement_ref_count2(fun_name2_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result266__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result229__;
void* __right_value250 = (void*)0;
struct sType* result_326;
void* __right_value251 = (void*)0;
struct sType* __dec_obj50;
void* __right_value252 = (void*)0;
struct sType* __dec_obj51;
void* __right_value253 = (void*)0;
struct sType* __dec_obj52;
void* __right_value254 = (void*)0;
char* __dec_obj53;
void* __right_value255 = (void*)0;
char* __dec_obj54;
void* __right_value262 = (void*)0;
struct list$1voidph* __dec_obj58;
void* __right_value270 = (void*)0;
struct list$1sNodeph* __dec_obj62;
void* __right_value271 = (void*)0;
struct list$1voidph* __dec_obj63;
void* __right_value278 = (void*)0;
struct list$1charph* __dec_obj67;
void* __right_value279 = (void*)0;
struct sType* __dec_obj68;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj69;
void* __right_value281 = (void*)0;
struct sType* __dec_obj70;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value283 = (void*)0;
char* __dec_obj72;
void* __right_value284 = (void*)0;
char* __dec_obj73;
void* __right_value285 = (void*)0;
char* __dec_obj74;
void* __right_value286 = (void*)0;
char* __dec_obj75;
struct sType* __result243__;
    if(    self==(void*)0) {
        __result229__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_326=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_326->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj50=result_326->mNoSolvedGenericsType;
        result_326->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj51=result_326->mOriginalLoadVarType;
        result_326->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj52=result_326->mAnyOriginalType;
        result_326->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj53=result_326->mInterfaceName;
        result_326->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj54=result_326->mGenericsName;
        result_326->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj58=result_326->mGenericsTypes;
        result_326->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj58,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj62=result_326->mArrayNum;
        result_326->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj62,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj63=result_326->mParamTypes;
        result_326->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj63,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj67=result_326->mParamNames;
        result_326->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj67,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj68=result_326->mResultType;
        result_326->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj69=result_326->mAlignas;
        result_326->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj70=result_326->mChannelType;
        result_326->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_326->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_326->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_326->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_326->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_326->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_326->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_326->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_326->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_326->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_326->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_326->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_326->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_326->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_326->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_326->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_326->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_326->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_326->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_326->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_326->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_326->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_326->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_326->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj71=result_326->mSizeNum;
        result_326->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_326->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj72=result_326->mOriginalTypeName;
        result_326->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_326->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_326->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_326->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_326->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_326->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_326->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_326->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj73=result_326->mAsmName;
        result_326->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_326->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_326->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_326->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_326->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_326->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj74=result_326->mTupleName;
        result_326->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj75=result_326->mAttribute;
        result_326->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_326->mGenerate=self->mGenerate;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_326;
    come_call_finalizer3(result_326,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj31;
struct sType* __dec_obj32;
struct sType* __dec_obj33;
char* __dec_obj34;
char* __dec_obj35;
struct list$1voidph* __dec_obj36;
struct list$1sNodeph* __dec_obj38;
struct list$1voidph* __dec_obj40;
struct list$1charph* __dec_obj41;
struct sType* __dec_obj42;
struct sNode* __dec_obj43;
struct sType* __dec_obj44;
struct sNode* __dec_obj45;
char* __dec_obj46;
char* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj31=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj31,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj32=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj33=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj34=self->mInterfaceName;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj35=self->mGenericsName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj36=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj36,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj38=self->mArrayNum;
            come_call_finalizer3(__dec_obj38,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj40=self->mParamTypes;
            come_call_finalizer3(__dec_obj40,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj41=self->mParamNames;
            come_call_finalizer3(__dec_obj41,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj42=self->mResultType;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj43=self->mAlignas;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj44=self->mChannelType;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj45=self->mSizeNum;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj46=self->mOriginalTypeName;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj47=self->mAsmName;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj48=self->mTupleName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj49=self->mAttribute;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_309;
struct list_item$1voidph* prev_it_310;
    it_309=self->head;
    while(it_309!=((void*)0)) {
        prev_it_310=it_309;
        it_309=it_309->next;
        come_call_finalizer3(prev_it_310,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj37;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj37=self->item;
            come_call_finalizer3(__dec_obj37,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_311;
struct list_item$1voidph* prev_it_312;
    it_311=self->head;
    while(it_311!=((void*)0)) {
        prev_it_312=it_311;
        it_311=it_311->next;
        come_call_finalizer3(prev_it_312,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_313;
struct list_item$1sNodeph* prev_it_314;
    it_313=self->head;
    while(it_313!=((void*)0)) {
        prev_it_314=it_313;
        it_313=it_313->next;
        come_call_finalizer3(prev_it_314,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj39;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj39=self->item;
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_315;
struct list_item$1sNodeph* prev_it_316;
    it_315=self->head;
    while(it_315!=((void*)0)) {
        prev_it_316=it_315;
        it_315=it_315->next;
        come_call_finalizer3(prev_it_316,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_317;
struct list_item$1charph* prev_it_318;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        prev_it_318=it_317;
        it_317=it_317->next;
        come_call_finalizer3(prev_it_318,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_319;
    result_319=0;
    result_319+=int_get_hash_key(((int)self->mClass));
    result_319+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_319+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_319+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_319+=int_get_hash_key(((int)self->mAnyClass));
    result_319+=int_get_hash_key(((int)self->mInterfaceName));
    result_319+=int_get_hash_key(((int)self->mGenericsName));
    result_319+=int_get_hash_key(((int)self->mGenericsTypes));
    result_319+=int_get_hash_key(((int)self->mArrayNum));
    result_319+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_319+=int_get_hash_key(((int)self->mParamTypes));
    result_319+=int_get_hash_key(((int)self->mParamNames));
    result_319+=int_get_hash_key(((int)self->mResultType));
    result_319+=int_get_hash_key(((int)self->mVarArgs));
    result_319+=int_get_hash_key(((int)self->mAlignas));
    result_319+=int_get_hash_key(((int)self->mChannelType));
    result_319+=int_get_hash_key(((int)self->mUnsigned));
    result_319+=int_get_hash_key(((int)self->mShort));
    result_319+=int_get_hash_key(((int)self->mLong));
    result_319+=int_get_hash_key(((int)self->mLongLong));
    result_319+=int_get_hash_key(((int)self->mConstant));
    result_319+=int_get_hash_key(((int)self->mAtomic));
    result_319+=int_get_hash_key(((int)self->mRegister));
    result_319+=int_get_hash_key(((int)self->mVolatile));
    result_319+=int_get_hash_key(((int)self->mStatic));
    result_319+=int_get_hash_key(((int)self->mUniq));
    result_319+=int_get_hash_key(((int)self->mRecord));
    result_319+=int_get_hash_key(((int)self->mExtern));
    result_319+=int_get_hash_key(((int)self->mRestrict));
    result_319+=int_get_hash_key(((int)self->mImmutable));
    result_319+=int_get_hash_key(((int)self->mHeap));
    result_319+=int_get_hash_key(((int)self->mChannel));
    result_319+=int_get_hash_key(((int)self->mNoHeap));
    result_319+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_319+=int_get_hash_key(((int)self->mException));
    result_319+=int_get_hash_key(((int)self->mPointerNum));
    result_319+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_319+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_319+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_319+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_319+=int_get_hash_key(((int)self->mSizeNum));
    result_319+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_319+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_319+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_319+=int_get_hash_key(((int)self->mFunctionParam));
    result_319+=int_get_hash_key(((int)self->mAllocaValue));
    result_319+=int_get_hash_key(((int)self->mGenericsStruct));
    result_319+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_319+=int_get_hash_key(((int)self->mInline));
    result_319+=int_get_hash_key(((int)self->mNullValue));
    result_319+=int_get_hash_key(((int)self->mGuardValue));
    result_319+=int_get_hash_key(((int)self->mAsmName));
    result_319+=int_get_hash_key(((int)self->mArrayPointerType));
    result_319+=int_get_hash_key(((int)self->mLambdaArray));
    result_319+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_319+=int_get_hash_key(((int)self->mTypedef));
    result_319+=int_get_hash_key(((int)self->mMultipleTypes));
    result_319+=int_get_hash_key(((int)self->mOriginIsArray));
    result_319+=int_get_hash_key(((int)self->mTupleName));
    result_319+=int_get_hash_key(((int)self->mAttribute));
    result_319+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_319+=int_get_hash_key(((int)self->mGenerate));
    return result_319;
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
struct list_item$1voidph* it_320;
struct list_item$1voidph* it2_321;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_320=left->head;
    it2_321=right->head;
    while(it_320!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_320->item)) {
            return (_Bool)0;
        }
        it_320=it_320->next;
        it2_321=it2_321->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_322;
struct list_item$1sNodeph* it2_323;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_322=left->head;
    it2_323=right->head;
    while(it_322!=((void*)0)) {
        if(        !sNode_equals(it_322->item,it2_323->item)) {
            return (_Bool)0;
        }
        it_322=it_322->next;
        it2_323=it2_323->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_324;
struct list_item$1charph* it2_325;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_324=left->head;
    it2_325=right->head;
    while(it_324!=((void*)0)) {
        if(        !string_equals(it_324->item,it2_325->item)) {
            return (_Bool)0;
        }
        it_324=it_324->next;
        it2_325=it2_325->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result230__;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct list$1voidph* result_328;
struct list_item$1voidph* it_329;
void* __right_value261 = (void*)0;
struct list$1voidph* __result233__;
    if(    self==((void*)0)) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_328=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_329=self->head;
    while(it_329!=((void*)0)) {
        list$1voidphp_add(result_328,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_329->item)));
        it_329=it_329->next;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_328;
    come_call_finalizer3(result_328,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
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
void* __right_value258 = (void*)0;
struct list_item$1voidph* litem_330;
void* __dec_obj55;
void* __right_value259 = (void*)0;
struct list_item$1voidph* litem_331;
void* __dec_obj56;
void* __right_value260 = (void*)0;
struct list_item$1voidph* litem_332;
void* __dec_obj57;
struct list$1voidph* __result232__;
    if(    self->len==0) {
        litem_330=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value258=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_330->prev=((void*)0);
        litem_330->next=((void*)0);
        __dec_obj55=litem_330->item;
        litem_330->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_330;
        self->head=litem_330;
    }
    else if(    self->len==1) {
        litem_331=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value259=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_331->prev=self->head;
        litem_331->next=((void*)0);
        __dec_obj56=litem_331->item;
        litem_331->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_331;
        self->head->next=litem_331;
    }
    else {
        litem_332=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value260=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_332->prev=self->tail;
        litem_332->next=((void*)0);
        __dec_obj57=litem_332->item;
        litem_332->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_332;
        self->tail=litem_332;
    }
    self->len++;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result234__;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct list$1sNodeph* result_333;
struct list_item$1sNodeph* it_334;
void* __right_value269 = (void*)0;
struct list$1sNodeph* __result239__;
    if(    self==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_333=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_334=self->head;
    while(it_334!=((void*)0)) {
        list$1sNodephp_add(result_333,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_334->item)));
        it_334=it_334->next;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_333;
    come_call_finalizer3(result_333,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result235__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
struct list_item$1sNodeph* litem_335;
struct sNode* __dec_obj59;
void* __right_value266 = (void*)0;
struct list_item$1sNodeph* litem_336;
struct sNode* __dec_obj60;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_337;
struct sNode* __dec_obj61;
struct list$1sNodeph* __result236__;
    if(    self->len==0) {
        litem_335=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value265=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_335->prev=((void*)0);
        litem_335->next=((void*)0);
        __dec_obj59=litem_335->item;
        litem_335->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_335;
        self->head=litem_335;
    }
    else if(    self->len==1) {
        litem_336=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value266=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_336->prev=self->head;
        litem_336->next=((void*)0);
        __dec_obj60=litem_336->item;
        litem_336->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_336;
        self->head->next=litem_336;
    }
    else {
        litem_337=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_337->prev=self->tail;
        litem_337->next=((void*)0);
        __dec_obj61=litem_337->item;
        litem_337->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_337;
        self->tail=litem_337;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result237__;
void* __right_value268 = (void*)0;
struct sNode* result_338;
struct sNode* __result238__;
    if(    self==(void*)0) {
        __result237__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_338=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_338->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_338->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_338->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_338->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_338->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_338->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_338->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_338->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_338->kind=self->kind;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_338;
    come_call_finalizer2((void*)0, result_338, result_338 ? ((struct sNode*)result_338)->finalize:(void*)0, result_338 ? ((struct sNode*)result_338)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result240__;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1charph* result_339;
struct list_item$1charph* it_340;
void* __right_value277 = (void*)0;
struct list$1charph* __result242__;
    if(    self==((void*)0)) {
        __result240__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_339=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_340=self->head;
    while(it_340!=((void*)0)) {
        list$1charphp_add(result_339,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_340->item)));
        it_340=it_340->next;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_339;
    come_call_finalizer3(result_339,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
struct list_item$1charph* litem_341;
char* __dec_obj64;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_342;
char* __dec_obj65;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_343;
char* __dec_obj66;
struct list$1charph* __result241__;
    if(    self->len==0) {
        litem_341=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value274=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=((void*)0);
        litem_341->next=((void*)0);
        __dec_obj64=litem_341->item;
        litem_341->item=(char*)come_increment_ref_count(item);
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_341;
        self->head=litem_341;
    }
    else if(    self->len==1) {
        litem_342=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_342->prev=self->head;
        litem_342->next=((void*)0);
        __dec_obj65=litem_342->item;
        litem_342->item=(char*)come_increment_ref_count(item);
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_342;
        self->head->next=litem_342;
    }
    else {
        litem_343=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_343->prev=self->tail;
        litem_343->next=((void*)0);
        __dec_obj66=litem_343->item;
        litem_343->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_343;
        self->tail=litem_343;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_352;
unsigned int it_353;
struct sGenericsFun* __result244__;
struct sGenericsFun* __result245__;
struct sGenericsFun* __result246__;
struct sGenericsFun* __result247__;
    hash_352=string_get_hash_key(((char*)key))%self->size;
    it_353=hash_352;
    while((_Bool)1) {
        if(        self->item_existance[it_353]) {
            if(            string_equals(self->keys[it_353],key)) {
                __result244__ = gComeFunResultObject = __result_obj__ = self->items[it_353];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result244__;
            }
            it_353++;
            if(            it_353>=self->size) {
                it_353=0;
            }
            else if(            it_353==hash_352) {
                __result245__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result245__;
            }
        }
        else {
            __result246__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result246__;
        }
    }
    __result247__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj78;
struct list$1charph* __dec_obj79;
struct list$1charph* __dec_obj80;
char* __dec_obj81;
struct sType* __dec_obj82;
struct list$1voidph* __dec_obj83;
struct list$1charph* __dec_obj84;
struct list$1charph* __dec_obj85;
char* __dec_obj86;
char* __dec_obj87;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj78=self->mImplType;
            come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj79=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj79,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj80=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj80,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj81=self->mName;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj82=self->mResultType;
            come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj83=self->mParamTypes;
            come_call_finalizer3(__dec_obj83,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj84=self->mParamNames;
            come_call_finalizer3(__dec_obj84,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj85=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj86=self->mBlock;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj87=self->mGenericsSName;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_357;
void* __result248__;
void* __result249__;
void* result_358;
void* __result250__;
result_357 = (void*)0;
result_358 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_357,0,sizeof(void*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_357;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->it=self->head;
    if(    self->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_358,0,sizeof(void*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_358;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_360;
void* __result251__;
void* __result252__;
void* result_361;
void* __result253__;
result_360 = (void*)0;
result_361 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_360,0,sizeof(void*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_360;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_361,0,sizeof(void*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_361;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj90;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj90=self->v1;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj91;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj91=self->v1;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphvoidp* __result254__;
void* __right_value301 = (void*)0;
struct tuple2$2charphvoidp* result_369;
void* __right_value302 = (void*)0;
char* __dec_obj92;
struct tuple2$2charphvoidp* __result255__;
    if(    self==(void*)0) {
        __result254__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_369=(struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "tuple2$2charphvoidp_clone", 3, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj92=result_369->v1;
        result_369->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->v2=self->v2;
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_369;
    come_call_finalizer3(result_369,tuple2$2charphvoidp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static unsigned int tuple2$2charphvoidp_get_hash_key(struct tuple2$2charphvoidp* self){
unsigned int result_368;
    result_368=0;
    result_368+=int_get_hash_key(((int)self->v1));
    result_368+=int_get_hash_key(((int)self->v2));
    return result_368;
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
char* __dec_obj93;
struct tuple2$2charphvoidp* __result256__;
    __dec_obj93=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj94;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj94=self->v1;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_370;
unsigned int hash_371;
unsigned int it_372;
struct sFun* __result258__;
struct sFun* __result259__;
struct sFun* __result260__;
struct sFun* __result261__;
default_value_370 = (void*)0;
    memset(&default_value_370,0,sizeof(struct sFun*));
    hash_371=string_get_hash_key(((char*)key))%self->size;
    it_372=hash_371;
    while((_Bool)1) {
        if(        self->item_existance[it_372]) {
            if(            string_equals(self->keys[it_372],key)) {
                __result258__ = gComeFunResultObject = __result_obj__ = self->items[it_372];
                come_call_finalizer3(default_value_370,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result258__;
            }
            it_372++;
            if(            it_372>=self->size) {
                it_372=0;
            }
            else if(            it_372==hash_371) {
                __result259__ = gComeFunResultObject = __result_obj__ = default_value_370;
                come_call_finalizer3(default_value_370,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result259__;
            }
        }
        else {
            __result260__ = gComeFunResultObject = __result_obj__ = default_value_370;
            come_call_finalizer3(default_value_370,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result260__;
        }
    }
    __result261__ = gComeFunResultObject = __result_obj__ = default_value_370;
    come_call_finalizer3(default_value_370,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj95;
struct sType* __dec_obj96;
struct list$1voidph* __dec_obj97;
struct list$1charph* __dec_obj98;
struct list$1charph* __dec_obj99;
struct sType* __dec_obj100;
struct sBlock* __dec_obj101;
struct buffer* __dec_obj104;
struct buffer* __dec_obj105;
struct buffer* __dec_obj106;
struct buffer* __dec_obj107;
char* __dec_obj108;
char* __dec_obj109;
char* __dec_obj110;
char* __dec_obj111;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj95=self->mName;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj96=self->mResultType;
            come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj97=self->mParamTypes;
            come_call_finalizer3(__dec_obj97,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj98=self->mParamNames;
            come_call_finalizer3(__dec_obj98,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj99=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj99,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj100=self->mLambdaType;
            come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj101=self->mBlock;
            come_call_finalizer3(__dec_obj101,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj104=self->mSource;
            come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj105=self->mSourceHead;
            come_call_finalizer3(__dec_obj105,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj106=self->mSourceHead2;
            come_call_finalizer3(__dec_obj106,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj107=self->mSourceDefer;
            come_call_finalizer3(__dec_obj107,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj108=self->mComeHeader;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj109=self->mDeclareSName;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj110=self->mAttribute;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj111=self->mFunAttribute;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj102;
struct sVarTable* __dec_obj103;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj102=self->mNodes;
            come_call_finalizer3(__dec_obj102,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj103=self->mVarTable;
            come_call_finalizer3(__dec_obj103,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj113;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj113=self->v2;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_397;
int i_398;
void* __result263__;
void* default_value_399;
void* __result264__;
default_value_399 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_397=self->head;
    i_398=0;
    while(it_397!=((void*)0)) {
        if(        position==i_398) {
            __result263__ = gComeFunResultObject = __result_obj__ = it_397->item;
            gComeFunResultObject = (void*)0;
            return __result263__;
        }
        it_397=it_397->next;
        i_398++;
    }
    memset(&default_value_399,0,sizeof(void*));
    __result264__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_399);
    come_call_finalizer3(default_value_399, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj126;
struct sType* __dec_obj127;
char* __dec_obj128;
char* __dec_obj129;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj126=self->c_value;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj127=self->type;
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj128=self->c_value_without_right_value_objects;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj129=self->c_value_without_cast_object_value;
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
struct list_item$1CVALUEph* litem_405;
struct CVALUE* __dec_obj130;
void* __right_value352 = (void*)0;
struct list_item$1CVALUEph* litem_406;
struct CVALUE* __dec_obj131;
void* __right_value353 = (void*)0;
struct list_item$1CVALUEph* litem_407;
struct CVALUE* __dec_obj132;
struct list$1CVALUEph* __result265__;
    if(    self->len==0) {
        litem_405=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value351=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_405->prev=((void*)0);
        litem_405->next=((void*)0);
        __dec_obj130=litem_405->item;
        litem_405->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_405;
        self->head=litem_405;
    }
    else if(    self->len==1) {
        litem_406=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value352=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_406->prev=self->head;
        litem_406->next=((void*)0);
        __dec_obj131=litem_406->item;
        litem_406->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_406;
        self->head->next=litem_406;
    }
    else {
        litem_407=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value353=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_407->prev=self->tail;
        litem_407->next=((void*)0);
        __dec_obj132=litem_407->item;
        litem_407->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_407;
        self->tail=litem_407;
    }
    self->len++;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
struct sNullNode* __result267__;
    ((struct sNodeBase*)(__right_value354=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value354,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

char* sNullNode_kind(struct sNullNode* self){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
char* __result268__;
    __result268__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value355=__builtin_string("sNullNode")));
    __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct CVALUE* come_value_408;
void* __right_value358 = (void*)0;
char* __dec_obj135;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* __dec_obj136;
_Bool __result269__;
    come_value_408=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 212, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj135=come_value_408->c_value;
    come_value_408->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj136=come_value_408->type;
    come_value_408->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 215, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_408->var=((void*)0);
    add_come_last_code(info,"%s",come_value_408->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_408));
    __result269__ = (_Bool)1;
    come_call_finalizer3(come_value_408,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result269__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj133;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj133=self->sname;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sNullNode_finalize(struct sNullNode* self){
char* __dec_obj134;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj134=self->sname;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* __right_value365 = (void*)0;
struct sNode* __result272__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 228, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value362=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 228, "struct sNullNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result272__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value365=_inf_value1));
    come_call_finalizer3(__right_value362,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value365) { __right_value365 = come_decrement_ref_count2(__right_value365, ((struct sNode*)__right_value365)->finalize, ((struct sNode*)__right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__=(void*)0;
struct sNullNode* __result270__;
void* __right_value363 = (void*)0;
struct sNullNode* result_410;
void* __right_value364 = (void*)0;
char* __dec_obj137;
struct sNullNode* __result271__;
    if(    self==(void*)0) {
        __result270__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    result_410=(struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "struct sNullNode", sNullNode_finalize, sNullNode_clone, sNullNode_get_hash_key, sNullNode_equals));
    if(    self!=((void*)0)) {
        result_410->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj137=result_410->sname;
        result_410->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_410->sline_real=self->sline_real;
    }
    __result271__ = gComeFunResultObject = __result_obj__ = result_410;
    come_call_finalizer3(result_410,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static unsigned int sNullNode_get_hash_key(struct sNullNode* self){
unsigned int result_409;
    result_409=0;
    result_409+=int_get_hash_key(((int)self->sline));
    result_409+=int_get_hash_key(((int)self->sname));
    result_409+=int_get_hash_key(((int)self->sline_real));
    return result_409;
}

static _Bool sNullNode_equals(struct sNullNode* left, struct sNullNode* right){
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

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value366 = (void*)0;
struct sNilNode* __result273__;
    ((struct sNodeBase*)(__right_value366=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value366,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

char* sNilNode_kind(struct sNilNode* self){
void* __result_obj__=(void*)0;
void* __right_value367 = (void*)0;
char* __result274__;
    __result274__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value367=__builtin_string("sNilNode")));
    __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct CVALUE* come_value_411;
void* __right_value370 = (void*)0;
char* __dec_obj139;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sType* __dec_obj140;
_Bool __result275__;
    come_value_411=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 245, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj139=come_value_411->c_value;
    come_value_411->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj140=come_value_411->type;
    come_value_411->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 248, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_411->type->mNullValue=(_Bool)1;
    come_value_411->var=((void*)0);
    add_come_last_code(info,"%s",come_value_411->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_411));
    __result275__ = (_Bool)1;
    come_call_finalizer3(come_value_411,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result275__;
}

static void sNilNode_finalize(struct sNilNode* self){
char* __dec_obj138;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj138=self->sname;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sNode* __dec_obj141;
void* __right_value375 = (void*)0;
struct sNode* __dec_obj142;
struct sAddNode* __result276__;
    ((struct sNodeBase*)(__right_value373=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value373,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj141=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj142=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result276__;
}

char* sAddNode_kind(struct sAddNode* self){
void* __result_obj__=(void*)0;
void* __right_value376 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value376=__builtin_string("sAddNode")));
    __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_412;
_Bool Value_413;
void* __right_value377 = (void*)0;
struct CVALUE* left_value_414;
struct sNode* right_node_415;
_Bool Value_416;
_Bool __result278__;
void* __right_value378 = (void*)0;
struct CVALUE* right_value_417;
struct sType* type_418;
char* fun_name_419;
_Bool calling_fun_420;
void* __right_value379 = (void*)0;
struct sType* result_type_421;
void* __right_value380 = (void*)0;
struct sType* __dec_obj146;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value383 = (void*)0;
char* __dec_obj147;
void* __right_value384 = (void*)0;
struct sType* __dec_obj148;
_Bool __result279__;
memset(&calling_fun_420, 0, sizeof(_Bool));
    left_node_412=self->mLeft;
    Value_413=node_compile(left_node_412,info);
    if(    !Value_413) {
        return (_Bool)0;
    }
    else {
    }
    left_value_414=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_415=self->mRight;
    Value_416=node_compile(right_node_415,info);
    if(    !Value_416) {
        __result278__ = (_Bool)0;
        come_call_finalizer3(left_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result278__;
    }
    else {
    }
    right_value_417=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_418=(struct sType*)come_increment_ref_count(left_value_414->type);
    fun_name_419="operator_add";
    if(    self->mQuote) {
        calling_fun_420=(_Bool)0;
    }
    else {
        calling_fun_420=operator_overload_fun(type_418,fun_name_419,left_value_414,right_value_417,(_Bool)0,info);
    }
    if(    !calling_fun_420) {
        result_type_421=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_414->type));
        if(        right_value_417->type->mPointerNum>0) {
            __dec_obj146=result_type_421;
            result_type_421=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_value_417->type));
            come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_422=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 314, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj147=come_value_422->c_value;
        come_value_422->c_value=(char*)come_increment_ref_count(xsprintf("%s+%s",left_value_414->c_value,right_value_417->c_value));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj148=come_value_422->type;
        come_value_422->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_421));
        come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_422->type->mHeap=(_Bool)0;
        come_value_422->var=((void*)0);
        add_come_last_code(info,"%s",come_value_422->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_422));
        come_call_finalizer3(result_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result279__ = (_Bool)1;
    come_call_finalizer3(left_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_418,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result279__;
}

static void sAddNode_finalize(struct sAddNode* self){
char* __dec_obj143;
struct sNode* __dec_obj144;
struct sNode* __dec_obj145;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj143=self->sname;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj144=self->mLeft;
            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj145=self->mRight;
            if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sNode* __dec_obj149;
void* __right_value387 = (void*)0;
struct sNode* __dec_obj150;
struct sSubNode* __result280__;
    ((struct sNodeBase*)(__right_value385=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value385,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj149=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj150=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result280__;
}

char* sSubNode_kind(struct sSubNode* self){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
char* __result281__;
    __result281__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value388=__builtin_string("sSubNode")));
    __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_423;
_Bool Value_424;
void* __right_value389 = (void*)0;
struct CVALUE* left_value_425;
struct sNode* right_node_426;
_Bool Value_427;
_Bool __result282__;
void* __right_value390 = (void*)0;
struct CVALUE* right_value_428;
struct sType* type_429;
char* fun_name_430;
_Bool calling_fun_431;
void* __right_value391 = (void*)0;
struct sType* result_type_432;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sType* __dec_obj154;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct CVALUE* come_value_433;
void* __right_value396 = (void*)0;
char* __dec_obj155;
void* __right_value397 = (void*)0;
struct sType* __dec_obj156;
_Bool __result283__;
memset(&calling_fun_431, 0, sizeof(_Bool));
    left_node_423=self->mLeft;
    Value_424=node_compile(left_node_423,info);
    if(    !Value_424) {
        return (_Bool)0;
    }
    else {
    }
    left_value_425=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_426=self->mRight;
    Value_427=node_compile(right_node_426,info);
    if(    !Value_427) {
        __result282__ = (_Bool)0;
        come_call_finalizer3(left_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result282__;
    }
    else {
    }
    right_value_428=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_429=(struct sType*)come_increment_ref_count(left_value_425->type);
    fun_name_430="operator_sub";
    if(    self->mQuote) {
        calling_fun_431=(_Bool)0;
    }
    else {
        calling_fun_431=operator_overload_fun(type_429,fun_name_430,left_value_425,right_value_428,(_Bool)0,info);
    }
    if(    !calling_fun_431) {
        result_type_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_425->type));
        if(        left_value_425->type->mPointerNum>0&&right_value_428->type->mPointerNum>0) {
            __dec_obj154=result_type_432;
            result_type_432=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 381, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_433=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 384, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj155=come_value_433->c_value;
        come_value_433->c_value=(char*)come_increment_ref_count(xsprintf("%s-%s",left_value_425->c_value,right_value_428->c_value));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj156=come_value_433->type;
        come_value_433->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_432));
        come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_433->type->mHeap=(_Bool)0;
        come_value_433->var=((void*)0);
        add_come_last_code(info,"%s",come_value_433->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_433));
        come_call_finalizer3(result_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_433,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result283__ = (_Bool)1;
    come_call_finalizer3(left_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_429,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result283__;
}

static void sSubNode_finalize(struct sSubNode* self){
char* __dec_obj151;
struct sNode* __dec_obj152;
struct sNode* __dec_obj153;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj151=self->sname;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj152=self->mLeft;
            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj153=self->mRight;
            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sNode* __dec_obj157;
void* __right_value400 = (void*)0;
struct sNode* __dec_obj158;
struct sMultNode* __result284__;
    ((struct sNodeBase*)(__right_value398=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value398,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj157=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj158=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result284__;
}

char* sMultNode_kind(struct sMultNode* self){
void* __result_obj__=(void*)0;
void* __right_value401 = (void*)0;
char* __result285__;
    __result285__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value401=__builtin_string("sMultNode")));
    __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_434;
_Bool Value_435;
void* __right_value402 = (void*)0;
struct CVALUE* left_value_436;
struct sNode* right_node_437;
_Bool Value_438;
_Bool __result286__;
void* __right_value403 = (void*)0;
struct CVALUE* right_value_439;
struct sType* type_440;
char* fun_name_441;
_Bool calling_fun_442;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct CVALUE* come_value_443;
void* __right_value406 = (void*)0;
char* __dec_obj162;
void* __right_value407 = (void*)0;
struct sType* __dec_obj163;
_Bool __result287__;
memset(&calling_fun_442, 0, sizeof(_Bool));
    left_node_434=self->mLeft;
    Value_435=node_compile(left_node_434,info);
    if(    !Value_435) {
        return (_Bool)0;
    }
    else {
    }
    left_value_436=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_437=self->mRight;
    Value_438=node_compile(right_node_437,info);
    if(    !Value_438) {
        __result286__ = (_Bool)0;
        come_call_finalizer3(left_value_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result286__;
    }
    else {
    }
    right_value_439=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_440=(struct sType*)come_increment_ref_count(left_value_436->type);
    fun_name_441="operator_mult";
    if(    self->mQuote) {
        calling_fun_442=(_Bool)0;
    }
    else {
        calling_fun_442=operator_overload_fun(type_440,fun_name_441,left_value_436,right_value_439,(_Bool)0,info);
    }
    if(    !calling_fun_442) {
        come_value_443=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 449, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj162=come_value_443->c_value;
        come_value_443->c_value=(char*)come_increment_ref_count(xsprintf("%s*%s",left_value_436->c_value,right_value_439->c_value));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj163=come_value_443->type;
        come_value_443->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_436->type));
        come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_443->type->mHeap=(_Bool)0;
        come_value_443->var=((void*)0);
        add_come_last_code(info,"%s",come_value_443->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_443));
        come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result287__ = (_Bool)1;
    come_call_finalizer3(left_value_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_439,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_440,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result287__;
}

static void sMultNode_finalize(struct sMultNode* self){
char* __dec_obj159;
struct sNode* __dec_obj160;
struct sNode* __dec_obj161;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj159=self->sname;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj160=self->mLeft;
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj161=self->mRight;
            if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sNode* __dec_obj164;
void* __right_value410 = (void*)0;
struct sNode* __dec_obj165;
struct sDivNode* __result288__;
    ((struct sNodeBase*)(__right_value408=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value408,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj164=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj165=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); };
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result288__;
}

char* sDivNode_kind(struct sDivNode* self){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value411=__builtin_string("sDivNode")));
    __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_444;
_Bool Value_445;
void* __right_value412 = (void*)0;
struct CVALUE* left_value_446;
struct sNode* right_node_447;
_Bool Value_448;
_Bool __result290__;
void* __right_value413 = (void*)0;
struct CVALUE* right_value_449;
struct sType* type_450;
char* fun_name_451;
_Bool calling_fun_452;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct CVALUE* come_value_453;
void* __right_value416 = (void*)0;
char* __dec_obj169;
void* __right_value417 = (void*)0;
struct sType* __dec_obj170;
_Bool __result291__;
memset(&calling_fun_452, 0, sizeof(_Bool));
    left_node_444=self->mLeft;
    Value_445=node_compile(left_node_444,info);
    if(    !Value_445) {
        return (_Bool)0;
    }
    else {
    }
    left_value_446=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_447=self->mRight;
    Value_448=node_compile(right_node_447,info);
    if(    !Value_448) {
        __result290__ = (_Bool)0;
        come_call_finalizer3(left_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result290__;
    }
    else {
    }
    right_value_449=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_450=(struct sType*)come_increment_ref_count(left_value_446->type);
    fun_name_451="operator_div";
    if(    self->mQuote) {
        calling_fun_452=(_Bool)0;
    }
    else {
        calling_fun_452=operator_overload_fun(type_450,fun_name_451,left_value_446,right_value_449,(_Bool)0,info);
    }
    if(    !calling_fun_452) {
        come_value_453=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 514, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj169=come_value_453->c_value;
        come_value_453->c_value=(char*)come_increment_ref_count(xsprintf("%s/%s",left_value_446->c_value,right_value_449->c_value));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj170=come_value_453->type;
        come_value_453->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_446->type));
        come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_453->type->mHeap=(_Bool)0;
        come_value_453->var=((void*)0);
        add_come_last_code(info,"%s",come_value_453->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_453));
        come_call_finalizer3(come_value_453,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result291__ = (_Bool)1;
    come_call_finalizer3(left_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_449,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result291__;
}

static void sDivNode_finalize(struct sDivNode* self){
char* __dec_obj166;
struct sNode* __dec_obj167;
struct sNode* __dec_obj168;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj166=self->sname;
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj167=self->mLeft;
            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj168=self->mRight;
            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value420 = (void*)0;
struct sNode* __dec_obj172;
struct sModNode* __result292__;
    ((struct sNodeBase*)(__right_value418=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value418,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj171=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj172=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result292__;
}

char* sModNode_kind(struct sModNode* self){
void* __result_obj__=(void*)0;
void* __right_value421 = (void*)0;
char* __result293__;
    __result293__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value421=__builtin_string("sModNode")));
    __right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_454;
_Bool Value_455;
void* __right_value422 = (void*)0;
struct CVALUE* left_value_456;
struct sNode* right_node_457;
_Bool Value_458;
_Bool __result294__;
void* __right_value423 = (void*)0;
struct CVALUE* right_value_459;
struct sType* type_460;
char* fun_name_461;
_Bool calling_fun_462;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct CVALUE* come_value_463;
void* __right_value426 = (void*)0;
char* __dec_obj176;
void* __right_value427 = (void*)0;
struct sType* __dec_obj177;
_Bool __result295__;
memset(&calling_fun_462, 0, sizeof(_Bool));
    left_node_454=self->mLeft;
    Value_455=node_compile(left_node_454,info);
    if(    !Value_455) {
        return (_Bool)0;
    }
    else {
    }
    left_value_456=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_457=self->mRight;
    Value_458=node_compile(right_node_457,info);
    if(    !Value_458) {
        __result294__ = (_Bool)0;
        come_call_finalizer3(left_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result294__;
    }
    else {
    }
    right_value_459=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_460=(struct sType*)come_increment_ref_count(left_value_456->type);
    fun_name_461="operator_mod";
    if(    self->mQuote) {
        calling_fun_462=(_Bool)0;
    }
    else {
        calling_fun_462=operator_overload_fun(type_460,fun_name_461,left_value_456,right_value_459,(_Bool)0,info);
    }
    if(    !calling_fun_462) {
        come_value_463=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 579, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj176=come_value_463->c_value;
        come_value_463->c_value=(char*)come_increment_ref_count(xsprintf("%s%%%s",left_value_456->c_value,right_value_459->c_value));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj177=come_value_463->type;
        come_value_463->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_456->type));
        come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_463->type->mHeap=(_Bool)0;
        come_value_463->var=((void*)0);
        add_come_last_code(info,"%s",come_value_463->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_463));
        come_call_finalizer3(come_value_463,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result295__ = (_Bool)1;
    come_call_finalizer3(left_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_459,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_460,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result295__;
}

static void sModNode_finalize(struct sModNode* self){
char* __dec_obj173;
struct sNode* __dec_obj174;
struct sNode* __dec_obj175;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj173=self->sname;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj174=self->mLeft;
            if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj175=self->mRight;
            if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sNode* __dec_obj178;
void* __right_value430 = (void*)0;
struct sNode* __dec_obj179;
struct sLShiftNode* __result296__;
    ((struct sNodeBase*)(__right_value428=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value428,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj178=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj179=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result296__;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value431 = (void*)0;
char* __result297__;
    __result297__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value431=__builtin_string("sLShiftNode")));
    __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_464;
_Bool Value_465;
void* __right_value432 = (void*)0;
struct CVALUE* left_value_466;
struct sNode* right_node_467;
_Bool Value_468;
_Bool __result298__;
void* __right_value433 = (void*)0;
struct CVALUE* right_value_469;
struct sType* type_470;
char* fun_name_471;
_Bool calling_fun_472;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct CVALUE* come_value_473;
void* __right_value436 = (void*)0;
char* __dec_obj183;
void* __right_value437 = (void*)0;
struct sType* __dec_obj184;
_Bool __result299__;
memset(&calling_fun_472, 0, sizeof(_Bool));
    left_node_464=self->mLeft;
    Value_465=node_compile(left_node_464,info);
    if(    !Value_465) {
        return (_Bool)0;
    }
    else {
    }
    left_value_466=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_467=self->mRight;
    Value_468=node_compile(right_node_467,info);
    if(    !Value_468) {
        __result298__ = (_Bool)0;
        come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result298__;
    }
    else {
    }
    right_value_469=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_470=(struct sType*)come_increment_ref_count(left_value_466->type);
    fun_name_471="operator_lshift";
    if(    self->mQuote) {
        calling_fun_472=(_Bool)0;
    }
    else {
        calling_fun_472=operator_overload_fun(type_470,fun_name_471,left_value_466,right_value_469,(_Bool)0,info);
    }
    if(    !calling_fun_472) {
        come_value_473=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 645, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj183=come_value_473->c_value;
        come_value_473->c_value=(char*)come_increment_ref_count(xsprintf("%s<<%s",left_value_466->c_value,right_value_469->c_value));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj184=come_value_473->type;
        come_value_473->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_466->type));
        come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_473->type->mHeap=(_Bool)0;
        come_value_473->var=((void*)0);
        add_come_last_code(info,"%s",come_value_473->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_473));
        come_call_finalizer3(come_value_473,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result299__ = (_Bool)1;
    come_call_finalizer3(left_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_469,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_470,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result299__;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
char* __dec_obj180;
struct sNode* __dec_obj181;
struct sNode* __dec_obj182;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj180=self->sname;
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj181=self->mLeft;
            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj182=self->mRight;
            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sNode* __dec_obj185;
void* __right_value440 = (void*)0;
struct sNode* __dec_obj186;
struct sRShiftNode* __result300__;
    ((struct sNodeBase*)(__right_value438=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value438,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj185=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj186=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); };
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result300__;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value441 = (void*)0;
char* __result301__;
    __result301__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value441=__builtin_string("sRShiftNode")));
    __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_474;
_Bool Value_475;
void* __right_value442 = (void*)0;
struct CVALUE* left_value_476;
struct sNode* right_node_477;
_Bool Value_478;
_Bool __result302__;
void* __right_value443 = (void*)0;
struct CVALUE* right_value_479;
struct sType* type_480;
char* fun_name_481;
_Bool calling_fun_482;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct CVALUE* come_value_483;
void* __right_value446 = (void*)0;
char* __dec_obj190;
void* __right_value447 = (void*)0;
struct sType* __dec_obj191;
_Bool __result303__;
memset(&calling_fun_482, 0, sizeof(_Bool));
    left_node_474=self->mLeft;
    Value_475=node_compile(left_node_474,info);
    if(    !Value_475) {
        return (_Bool)0;
    }
    else {
    }
    left_value_476=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_477=self->mRight;
    Value_478=node_compile(right_node_477,info);
    if(    !Value_478) {
        __result302__ = (_Bool)0;
        come_call_finalizer3(left_value_476,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result302__;
    }
    else {
    }
    right_value_479=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_480=(struct sType*)come_increment_ref_count(left_value_476->type);
    fun_name_481="operator_rshift";
    if(    self->mQuote) {
        calling_fun_482=(_Bool)0;
    }
    else {
        calling_fun_482=operator_overload_fun(type_480,fun_name_481,left_value_476,right_value_479,(_Bool)0,info);
    }
    if(    !calling_fun_482) {
        come_value_483=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 710, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj190=come_value_483->c_value;
        come_value_483->c_value=(char*)come_increment_ref_count(xsprintf("%s>>%s",left_value_476->c_value,right_value_479->c_value));
        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj191=come_value_483->type;
        come_value_483->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_476->type));
        come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_483->type->mHeap=(_Bool)0;
        come_value_483->var=((void*)0);
        add_come_last_code(info,"%s",come_value_483->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_483));
        come_call_finalizer3(come_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result303__ = (_Bool)1;
    come_call_finalizer3(left_value_476,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_479,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_480,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result303__;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
char* __dec_obj187;
struct sNode* __dec_obj188;
struct sNode* __dec_obj189;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj187=self->sname;
            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj188=self->mLeft;
            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj189=self->mRight;
            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sNode* __dec_obj192;
void* __right_value450 = (void*)0;
struct sNode* __dec_obj193;
struct sGtEqNode* __result304__;
    ((struct sNodeBase*)(__right_value448=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value448,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj192=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj193=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); };
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result304__;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value451 = (void*)0;
char* __result305__;
    __result305__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value451=__builtin_string("sGtEqNode")));
    __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_484;
_Bool Value_485;
void* __right_value452 = (void*)0;
struct CVALUE* left_value_486;
struct sNode* right_node_487;
_Bool Value_488;
_Bool __result306__;
void* __right_value453 = (void*)0;
struct CVALUE* right_value_489;
struct sType* type_490;
char* fun_name_491;
_Bool calling_fun_492;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct CVALUE* come_value_493;
void* __right_value456 = (void*)0;
char* __dec_obj197;
void* __right_value457 = (void*)0;
struct sType* __dec_obj198;
_Bool __result307__;
memset(&calling_fun_492, 0, sizeof(_Bool));
    left_node_484=self->mLeft;
    Value_485=node_compile(left_node_484,info);
    if(    !Value_485) {
        return (_Bool)0;
    }
    else {
    }
    left_value_486=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_487=self->mRight;
    Value_488=node_compile(right_node_487,info);
    if(    !Value_488) {
        __result306__ = (_Bool)0;
        come_call_finalizer3(left_value_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result306__;
    }
    else {
    }
    right_value_489=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_490=(struct sType*)come_increment_ref_count(left_value_486->type);
    fun_name_491="operator_gteq";
    if(    self->mQuote) {
        calling_fun_492=(_Bool)0;
    }
    else {
        calling_fun_492=operator_overload_fun(type_490,fun_name_491,left_value_486,right_value_489,(_Bool)0,info);
    }
    if(    !calling_fun_492) {
        come_value_493=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 775, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj197=come_value_493->c_value;
        come_value_493->c_value=(char*)come_increment_ref_count(xsprintf("%s>=%s",left_value_486->c_value,right_value_489->c_value));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj198=come_value_493->type;
        come_value_493->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_486->type));
        come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_493->type->mHeap=(_Bool)0;
        come_value_493->var=((void*)0);
        add_come_last_code(info,"%s",come_value_493->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_493));
        come_call_finalizer3(come_value_493,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result307__ = (_Bool)1;
    come_call_finalizer3(left_value_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_489,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result307__;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
char* __dec_obj194;
struct sNode* __dec_obj195;
struct sNode* __dec_obj196;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj194=self->sname;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj195=self->mLeft;
            if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj196=self->mRight;
            if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sNode* __dec_obj199;
void* __right_value460 = (void*)0;
struct sNode* __dec_obj200;
struct sLtEqNode* __result308__;
    ((struct sNodeBase*)(__right_value458=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value458,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj199=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj200=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result308__;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value461 = (void*)0;
char* __result309__;
    __result309__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value461=__builtin_string("sLtEqNode")));
    __right_value461 = come_decrement_ref_count2(__right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_494;
_Bool Value_495;
void* __right_value462 = (void*)0;
struct CVALUE* left_value_496;
struct sNode* right_node_497;
_Bool Value_498;
_Bool __result310__;
void* __right_value463 = (void*)0;
struct CVALUE* right_value_499;
struct sType* type_500;
char* fun_name_501;
_Bool calling_fun_502;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct CVALUE* come_value_503;
void* __right_value466 = (void*)0;
char* __dec_obj204;
void* __right_value467 = (void*)0;
struct sType* __dec_obj205;
_Bool __result311__;
memset(&calling_fun_502, 0, sizeof(_Bool));
    left_node_494=self->mLeft;
    Value_495=node_compile(left_node_494,info);
    if(    !Value_495) {
        return (_Bool)0;
    }
    else {
    }
    left_value_496=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_497=self->mRight;
    Value_498=node_compile(right_node_497,info);
    if(    !Value_498) {
        __result310__ = (_Bool)0;
        come_call_finalizer3(left_value_496,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result310__;
    }
    else {
    }
    right_value_499=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_500=(struct sType*)come_increment_ref_count(left_value_496->type);
    fun_name_501="operator_lteq";
    if(    self->mQuote) {
        calling_fun_502=(_Bool)0;
    }
    else {
        calling_fun_502=operator_overload_fun(type_500,fun_name_501,left_value_496,right_value_499,(_Bool)0,info);
    }
    if(    !calling_fun_502) {
        come_value_503=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 840, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj204=come_value_503->c_value;
        come_value_503->c_value=(char*)come_increment_ref_count(xsprintf("%s<=%s",left_value_496->c_value,right_value_499->c_value));
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj205=come_value_503->type;
        come_value_503->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_496->type));
        come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_503->type->mHeap=(_Bool)0;
        come_value_503->var=((void*)0);
        add_come_last_code(info,"%s",come_value_503->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_503));
        come_call_finalizer3(come_value_503,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result311__ = (_Bool)1;
    come_call_finalizer3(left_value_496,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_500,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result311__;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
char* __dec_obj201;
struct sNode* __dec_obj202;
struct sNode* __dec_obj203;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj201=self->sname;
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj202=self->mLeft;
            if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj203=self->mRight;
            if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sNode* __dec_obj206;
void* __right_value470 = (void*)0;
struct sNode* __dec_obj207;
struct sLtNode* __result312__;
    ((struct sNodeBase*)(__right_value468=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value468,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj206=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj207=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); };
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result312__;
}

char* sLtNode_kind(struct sLtNode* self){
void* __result_obj__=(void*)0;
void* __right_value471 = (void*)0;
char* __result313__;
    __result313__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value471=__builtin_string("sLtNode")));
    __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_504;
_Bool Value_505;
void* __right_value472 = (void*)0;
struct CVALUE* left_value_506;
struct sNode* right_node_507;
_Bool Value_508;
_Bool __result314__;
void* __right_value473 = (void*)0;
struct CVALUE* right_value_509;
struct sType* type_510;
char* fun_name_511;
_Bool calling_fun_512;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct CVALUE* come_value_513;
void* __right_value476 = (void*)0;
char* __dec_obj211;
void* __right_value477 = (void*)0;
struct sType* __dec_obj212;
_Bool __result315__;
memset(&calling_fun_512, 0, sizeof(_Bool));
    left_node_504=self->mLeft;
    Value_505=node_compile(left_node_504,info);
    if(    !Value_505) {
        return (_Bool)0;
    }
    else {
    }
    left_value_506=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_507=self->mRight;
    Value_508=node_compile(right_node_507,info);
    if(    !Value_508) {
        __result314__ = (_Bool)0;
        come_call_finalizer3(left_value_506,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result314__;
    }
    else {
    }
    right_value_509=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_510=(struct sType*)come_increment_ref_count(left_value_506->type);
    fun_name_511="operator_lt";
    if(    self->mQuote) {
        calling_fun_512=(_Bool)0;
    }
    else {
        calling_fun_512=operator_overload_fun(type_510,fun_name_511,left_value_506,right_value_509,(_Bool)0,info);
    }
    if(    !calling_fun_512) {
        come_value_513=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 905, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj211=come_value_513->c_value;
        come_value_513->c_value=(char*)come_increment_ref_count(xsprintf("%s<%s",left_value_506->c_value,right_value_509->c_value));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj212=come_value_513->type;
        come_value_513->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_506->type));
        come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_513->type->mHeap=(_Bool)0;
        come_value_513->var=((void*)0);
        add_come_last_code(info,"%s",come_value_513->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_513));
        come_call_finalizer3(come_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result315__ = (_Bool)1;
    come_call_finalizer3(left_value_506,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_509,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result315__;
}

static void sLtNode_finalize(struct sLtNode* self){
char* __dec_obj208;
struct sNode* __dec_obj209;
struct sNode* __dec_obj210;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj208=self->sname;
            __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj209=self->mLeft;
            if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj210=self->mRight;
            if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sNode* __dec_obj213;
void* __right_value480 = (void*)0;
struct sNode* __dec_obj214;
struct sGtNode* __result316__;
    ((struct sNodeBase*)(__right_value478=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value478,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj213=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj214=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj214) { __dec_obj214 = come_decrement_ref_count2(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0,0, (void*)0); };
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result316__;
}

char* sGtNode_kind(struct sGtNode* self){
void* __result_obj__=(void*)0;
void* __right_value481 = (void*)0;
char* __result317__;
    __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value481=__builtin_string("sGtNode")));
    __right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_514;
_Bool Value_515;
void* __right_value482 = (void*)0;
struct CVALUE* left_value_516;
struct sNode* right_node_517;
_Bool Value_518;
_Bool __result318__;
void* __right_value483 = (void*)0;
struct CVALUE* right_value_519;
struct sType* type_520;
char* fun_name_521;
_Bool calling_fun_522;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct CVALUE* come_value_523;
void* __right_value486 = (void*)0;
char* __dec_obj218;
void* __right_value487 = (void*)0;
struct sType* __dec_obj219;
_Bool __result319__;
memset(&calling_fun_522, 0, sizeof(_Bool));
    left_node_514=self->mLeft;
    Value_515=node_compile(left_node_514,info);
    if(    !Value_515) {
        return (_Bool)0;
    }
    else {
    }
    left_value_516=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_517=self->mRight;
    Value_518=node_compile(right_node_517,info);
    if(    !Value_518) {
        __result318__ = (_Bool)0;
        come_call_finalizer3(left_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result318__;
    }
    else {
    }
    right_value_519=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_520=(struct sType*)come_increment_ref_count(left_value_516->type);
    fun_name_521="operator_gt";
    if(    self->mQuote) {
        calling_fun_522=(_Bool)0;
    }
    else {
        calling_fun_522=operator_overload_fun(type_520,fun_name_521,left_value_516,right_value_519,(_Bool)0,info);
    }
    if(    !calling_fun_522) {
        come_value_523=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 970, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj218=come_value_523->c_value;
        come_value_523->c_value=(char*)come_increment_ref_count(xsprintf("%s>%s",left_value_516->c_value,right_value_519->c_value));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj219=come_value_523->type;
        come_value_523->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_516->type));
        come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_523->type->mHeap=(_Bool)0;
        come_value_523->var=((void*)0);
        add_come_last_code(info,"%s",come_value_523->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_523));
        come_call_finalizer3(come_value_523,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result319__ = (_Bool)1;
    come_call_finalizer3(left_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_519,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_520,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result319__;
}

static void sGtNode_finalize(struct sGtNode* self){
char* __dec_obj215;
struct sNode* __dec_obj216;
struct sNode* __dec_obj217;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj215=self->sname;
            __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj216=self->mLeft;
            if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj217=self->mRight;
            if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sNode* __dec_obj220;
void* __right_value490 = (void*)0;
struct sNode* __dec_obj221;
struct sEqNode* __result320__;
    ((struct sNodeBase*)(__right_value488=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value488,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj220=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj221=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result320__;
}

char* sEqNode_kind(struct sEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value491 = (void*)0;
char* __result321__;
    __result321__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value491=__builtin_string("sEqNode")));
    __right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_524;
_Bool Value_525;
void* __right_value492 = (void*)0;
struct CVALUE* left_value_526;
struct sNode* right_node_527;
_Bool Value_528;
_Bool __result322__;
void* __right_value493 = (void*)0;
struct CVALUE* right_value_529;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct CVALUE* come_value_530;
void* __right_value496 = (void*)0;
char* __dec_obj225;
void* __right_value497 = (void*)0;
struct sType* __dec_obj226;
_Bool __result323__;
    left_node_524=self->mLeft;
    Value_525=node_compile(left_node_524,info);
    if(    !Value_525) {
        return (_Bool)0;
    }
    else {
    }
    left_value_526=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_527=self->mRight;
    Value_528=node_compile(right_node_527,info);
    if(    !Value_528) {
        __result322__ = (_Bool)0;
        come_call_finalizer3(left_value_526,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result322__;
    }
    else {
    }
    right_value_529=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_530=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1023, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj225=come_value_530->c_value;
    come_value_530->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_526->c_value,right_value_529->c_value));
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj226=come_value_530->type;
    come_value_530->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_526->type));
    come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_530->type->mHeap=(_Bool)0;
    come_value_530->var=((void*)0);
    add_come_last_code(info,"%s",come_value_530->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_530));
    __result323__ = (_Bool)1;
    come_call_finalizer3(left_value_526,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result323__;
}

static void sEqNode_finalize(struct sEqNode* self){
char* __dec_obj222;
struct sNode* __dec_obj223;
struct sNode* __dec_obj224;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj222=self->sname;
            __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj223=self->mLeft;
            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj224=self->mRight;
            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sNode* __dec_obj227;
void* __right_value500 = (void*)0;
struct sNode* __dec_obj228;
struct sNotEqNode* __result324__;
    ((struct sNodeBase*)(__right_value498=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value498,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj227=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj228=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result324__;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value501 = (void*)0;
char* __result325__;
    __result325__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value501=__builtin_string("sNotEqNode")));
    __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_531;
_Bool Value_532;
void* __right_value502 = (void*)0;
struct CVALUE* left_value_533;
struct sNode* right_node_534;
_Bool Value_535;
_Bool __result326__;
void* __right_value503 = (void*)0;
struct CVALUE* right_value_536;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct CVALUE* come_value_537;
void* __right_value506 = (void*)0;
char* __dec_obj232;
void* __right_value507 = (void*)0;
struct sType* __dec_obj233;
_Bool __result327__;
    left_node_531=self->mLeft;
    Value_532=node_compile(left_node_531,info);
    if(    !Value_532) {
        return (_Bool)0;
    }
    else {
    }
    left_value_533=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_534=self->mRight;
    Value_535=node_compile(right_node_534,info);
    if(    !Value_535) {
        __result326__ = (_Bool)0;
        come_call_finalizer3(left_value_533,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result326__;
    }
    else {
    }
    right_value_536=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_537=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1075, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj232=come_value_537->c_value;
    come_value_537->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_533->c_value,right_value_536->c_value));
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj233=come_value_537->type;
    come_value_537->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_533->type));
    come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_537->type->mHeap=(_Bool)0;
    come_value_537->var=((void*)0);
    add_come_last_code(info,"%s",come_value_537->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_537));
    __result327__ = (_Bool)1;
    come_call_finalizer3(left_value_533,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_537,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result327__;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
char* __dec_obj229;
struct sNode* __dec_obj230;
struct sNode* __dec_obj231;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj229=self->sname;
            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj230=self->mLeft;
            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj231=self->mRight;
            if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sNode* __dec_obj234;
void* __right_value510 = (void*)0;
struct sNode* __dec_obj235;
struct sEq2Node* __result328__;
    ((struct sNodeBase*)(__right_value508=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value508,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj234=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj235=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result328__;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value511 = (void*)0;
char* __result329__;
    __result329__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value511=__builtin_string("sEq2Node")));
    __right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_538;
_Bool Value_539;
void* __right_value512 = (void*)0;
struct CVALUE* left_value_540;
struct sNode* right_node_541;
_Bool Value_542;
_Bool __result330__;
void* __right_value513 = (void*)0;
struct CVALUE* right_value_543;
struct sType* type_544;
char* fun_name_545;
_Bool calling_fun_546;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct CVALUE* come_value_547;
void* __right_value516 = (void*)0;
char* __dec_obj239;
void* __right_value517 = (void*)0;
struct sType* __dec_obj240;
_Bool __result331__;
memset(&calling_fun_546, 0, sizeof(_Bool));
    left_node_538=self->mLeft;
    Value_539=node_compile(left_node_538,info);
    if(    !Value_539) {
        return (_Bool)0;
    }
    else {
    }
    left_value_540=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_541=self->mRight;
    Value_542=node_compile(right_node_541,info);
    if(    !Value_542) {
        __result330__ = (_Bool)0;
        come_call_finalizer3(left_value_540,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result330__;
    }
    else {
    }
    right_value_543=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_544=(struct sType*)come_increment_ref_count(left_value_540->type);
    fun_name_545="operator_equals";
    if(    self->mQuote) {
        calling_fun_546=(_Bool)0;
    }
    else {
        calling_fun_546=operator_overload_fun(type_544,fun_name_545,left_value_540,right_value_543,(_Bool)0,info);
    }
    if(    !calling_fun_546) {
        come_value_547=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1140, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj239=come_value_547->c_value;
        come_value_547->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_540->c_value,right_value_543->c_value));
        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj240=come_value_547->type;
        come_value_547->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_540->type));
        come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_547->type->mHeap=(_Bool)0;
        come_value_547->var=((void*)0);
        add_come_last_code(info,"%s",come_value_547->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_547));
        come_call_finalizer3(come_value_547,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result331__ = (_Bool)1;
    come_call_finalizer3(left_value_540,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_543,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_544,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result331__;
}

static void sEq2Node_finalize(struct sEq2Node* self){
char* __dec_obj236;
struct sNode* __dec_obj237;
struct sNode* __dec_obj238;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj236=self->sname;
            __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj237=self->mLeft;
            if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj238=self->mRight;
            if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sNode* __dec_obj241;
void* __right_value520 = (void*)0;
struct sNode* __dec_obj242;
struct sNotEq2Node* __result332__;
    ((struct sNodeBase*)(__right_value518=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value518,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj241=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj242=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result332__;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value521 = (void*)0;
char* __result333__;
    __result333__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value521=__builtin_string("sNotEq2Node")));
    __right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_548;
_Bool Value_549;
void* __right_value522 = (void*)0;
struct CVALUE* left_value_550;
struct sNode* right_node_551;
_Bool Value_552;
_Bool __result334__;
void* __right_value523 = (void*)0;
struct CVALUE* right_value_553;
struct sType* type_554;
char* fun_name_555;
_Bool calling_fun_556;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct CVALUE* come_value_557;
void* __right_value526 = (void*)0;
char* __dec_obj246;
void* __right_value527 = (void*)0;
struct sType* __dec_obj247;
_Bool __result335__;
memset(&calling_fun_556, 0, sizeof(_Bool));
    left_node_548=self->mLeft;
    Value_549=node_compile(left_node_548,info);
    if(    !Value_549) {
        return (_Bool)0;
    }
    else {
    }
    left_value_550=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_551=self->mRight;
    Value_552=node_compile(right_node_551,info);
    if(    !Value_552) {
        __result334__ = (_Bool)0;
        come_call_finalizer3(left_value_550,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result334__;
    }
    else {
    }
    right_value_553=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_554=(struct sType*)come_increment_ref_count(left_value_550->type);
    fun_name_555="operator_not_equals";
    if(    self->mQuote) {
        calling_fun_556=(_Bool)0;
    }
    else {
        calling_fun_556=operator_overload_fun(type_554,fun_name_555,left_value_550,right_value_553,(_Bool)0,info);
    }
    if(    !calling_fun_556) {
        come_value_557=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1205, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj246=come_value_557->c_value;
        come_value_557->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_550->c_value,right_value_553->c_value));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj247=come_value_557->type;
        come_value_557->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_550->type));
        come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_557->type->mHeap=(_Bool)0;
        come_value_557->var=((void*)0);
        add_come_last_code(info,"%s",come_value_557->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_557));
        come_call_finalizer3(come_value_557,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result335__ = (_Bool)1;
    come_call_finalizer3(left_value_550,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_553,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_554,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result335__;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
char* __dec_obj243;
struct sNode* __dec_obj244;
struct sNode* __dec_obj245;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj243=self->sname;
            __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj244=self->mLeft;
            if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj245=self->mRight;
            if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sNode* __dec_obj248;
void* __right_value530 = (void*)0;
struct sNode* __dec_obj249;
struct sAndNode* __result336__;
    ((struct sNodeBase*)(__right_value528=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value528,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj248=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj249=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); };
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result336__;
}

char* sAndNode_kind(struct sAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value531 = (void*)0;
char* __result337__;
    __result337__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value531=__builtin_string("sAndNode")));
    __right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_558;
_Bool Value_559;
void* __right_value532 = (void*)0;
struct CVALUE* left_value_560;
struct sNode* right_node_561;
_Bool Value_562;
_Bool __result338__;
void* __right_value533 = (void*)0;
struct CVALUE* right_value_563;
struct sType* type_564;
char* fun_name_565;
_Bool calling_fun_566;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct CVALUE* come_value_567;
void* __right_value536 = (void*)0;
char* __dec_obj253;
void* __right_value537 = (void*)0;
struct sType* __dec_obj254;
_Bool __result339__;
memset(&calling_fun_566, 0, sizeof(_Bool));
    left_node_558=self->mLeft;
    Value_559=node_compile(left_node_558,info);
    if(    !Value_559) {
        return (_Bool)0;
    }
    else {
    }
    left_value_560=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_561=self->mRight;
    Value_562=node_compile(right_node_561,info);
    if(    !Value_562) {
        __result338__ = (_Bool)0;
        come_call_finalizer3(left_value_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result338__;
    }
    else {
    }
    right_value_563=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_564=(struct sType*)come_increment_ref_count(left_value_560->type);
    fun_name_565="operator_and";
    if(    self->mQuote) {
        calling_fun_566=(_Bool)0;
    }
    else {
        calling_fun_566=operator_overload_fun(type_564,fun_name_565,left_value_560,right_value_563,(_Bool)0,info);
    }
    if(    !calling_fun_566) {
        come_value_567=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1271, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj253=come_value_567->c_value;
        come_value_567->c_value=(char*)come_increment_ref_count(xsprintf("%s&%s",left_value_560->c_value,right_value_563->c_value));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj254=come_value_567->type;
        come_value_567->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_560->type));
        come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_567->type->mHeap=(_Bool)0;
        come_value_567->var=((void*)0);
        add_come_last_code(info,"%s",come_value_567->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_567));
        come_call_finalizer3(come_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result339__ = (_Bool)1;
    come_call_finalizer3(left_value_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_563,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result339__;
}

static void sAndNode_finalize(struct sAndNode* self){
char* __dec_obj250;
struct sNode* __dec_obj251;
struct sNode* __dec_obj252;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj250=self->sname;
            __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj251=self->mLeft;
            if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj252=self->mRight;
            if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sNode* __dec_obj255;
void* __right_value540 = (void*)0;
struct sNode* __dec_obj256;
struct sXOrNode* __result340__;
    ((struct sNodeBase*)(__right_value538=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value538,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj255=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj256=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result340__;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value541 = (void*)0;
char* __result341__;
    __result341__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value541=__builtin_string("sXOrNode")));
    __right_value541 = come_decrement_ref_count2(__right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_568;
_Bool Value_569;
void* __right_value542 = (void*)0;
struct CVALUE* left_value_570;
struct sNode* right_node_571;
_Bool Value_572;
_Bool __result342__;
void* __right_value543 = (void*)0;
struct CVALUE* right_value_573;
struct sType* type_574;
char* fun_name_575;
_Bool calling_fun_576;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct CVALUE* come_value_577;
void* __right_value546 = (void*)0;
char* __dec_obj260;
void* __right_value547 = (void*)0;
struct sType* __dec_obj261;
_Bool __result343__;
memset(&calling_fun_576, 0, sizeof(_Bool));
    left_node_568=self->mLeft;
    Value_569=node_compile(left_node_568,info);
    if(    !Value_569) {
        return (_Bool)0;
    }
    else {
    }
    left_value_570=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_571=self->mRight;
    Value_572=node_compile(right_node_571,info);
    if(    !Value_572) {
        __result342__ = (_Bool)0;
        come_call_finalizer3(left_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result342__;
    }
    else {
    }
    right_value_573=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_574=(struct sType*)come_increment_ref_count(left_value_570->type);
    fun_name_575="operator_xor";
    if(    self->mQuote) {
        calling_fun_576=(_Bool)0;
    }
    else {
        calling_fun_576=operator_overload_fun(type_574,fun_name_575,left_value_570,right_value_573,(_Bool)0,info);
    }
    if(    !calling_fun_576) {
        come_value_577=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1336, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj260=come_value_577->c_value;
        come_value_577->c_value=(char*)come_increment_ref_count(xsprintf("%s^%s",left_value_570->c_value,right_value_573->c_value));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj261=come_value_577->type;
        come_value_577->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_570->type));
        come_call_finalizer3(__dec_obj261,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_577->type->mHeap=(_Bool)0;
        come_value_577->var=((void*)0);
        add_come_last_code(info,"%s",come_value_577->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_577));
        come_call_finalizer3(come_value_577,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result343__ = (_Bool)1;
    come_call_finalizer3(left_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_573,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result343__;
}

static void sXOrNode_finalize(struct sXOrNode* self){
char* __dec_obj257;
struct sNode* __dec_obj258;
struct sNode* __dec_obj259;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj257=self->sname;
            __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj258=self->mLeft;
            if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj259=self->mRight;
            if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sNode* __dec_obj262;
void* __right_value550 = (void*)0;
struct sNode* __dec_obj263;
struct sOrNode* __result344__;
    ((struct sNodeBase*)(__right_value548=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value548,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj262=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj263=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result344__;
}

char* sOrNode_kind(struct sOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value551 = (void*)0;
char* __result345__;
    __result345__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value551=__builtin_string("sOrNode")));
    __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_578;
_Bool Value_579;
void* __right_value552 = (void*)0;
struct CVALUE* left_value_580;
struct sNode* right_node_581;
_Bool Value_582;
_Bool __result346__;
void* __right_value553 = (void*)0;
struct CVALUE* right_value_583;
struct sType* type_584;
char* fun_name_585;
_Bool calling_fun_586;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct CVALUE* come_value_587;
void* __right_value556 = (void*)0;
char* __dec_obj267;
void* __right_value557 = (void*)0;
struct sType* __dec_obj268;
_Bool __result347__;
memset(&calling_fun_586, 0, sizeof(_Bool));
    left_node_578=self->mLeft;
    Value_579=node_compile(left_node_578,info);
    if(    !Value_579) {
        return (_Bool)0;
    }
    else {
    }
    left_value_580=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_581=self->mRight;
    Value_582=node_compile(right_node_581,info);
    if(    !Value_582) {
        __result346__ = (_Bool)0;
        come_call_finalizer3(left_value_580,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result346__;
    }
    else {
    }
    right_value_583=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_584=(struct sType*)come_increment_ref_count(left_value_580->type);
    fun_name_585="operator_or";
    if(    self->mQuote) {
        calling_fun_586=(_Bool)0;
    }
    else {
        calling_fun_586=operator_overload_fun(type_584,fun_name_585,left_value_580,right_value_583,(_Bool)0,info);
    }
    if(    !calling_fun_586) {
        come_value_587=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1402, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj267=come_value_587->c_value;
        come_value_587->c_value=(char*)come_increment_ref_count(xsprintf("%s|%s",left_value_580->c_value,right_value_583->c_value));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj268=come_value_587->type;
        come_value_587->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_580->type));
        come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_587->type->mHeap=(_Bool)0;
        come_value_587->var=((void*)0);
        add_come_last_code(info,"%s",come_value_587->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_587));
        come_call_finalizer3(come_value_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result347__ = (_Bool)1;
    come_call_finalizer3(left_value_580,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_583,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result347__;
}

static void sOrNode_finalize(struct sOrNode* self){
char* __dec_obj264;
struct sNode* __dec_obj265;
struct sNode* __dec_obj266;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj264=self->sname;
            __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj265=self->mLeft;
            if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj266=self->mRight;
            if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sNode* __dec_obj269;
void* __right_value560 = (void*)0;
struct sNode* __dec_obj270;
struct sAndAndNode* __result348__;
    ((struct sNodeBase*)(__right_value558=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value558,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj269=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj270=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result348__;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value561 = (void*)0;
char* __result349__;
    __result349__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value561=__builtin_string("sAndAndNode")));
    __right_value561 = come_decrement_ref_count2(__right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_588;
_Bool Value_589;
void* __right_value562 = (void*)0;
struct CVALUE* left_value_590;
struct sNode* right_node_591;
_Bool Value_592;
_Bool __result350__;
void* __right_value563 = (void*)0;
struct CVALUE* right_value_593;
struct sType* type_594;
char* fun_name_595;
_Bool calling_fun_596;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct CVALUE* come_value_597;
void* __right_value566 = (void*)0;
char* __dec_obj274;
void* __right_value567 = (void*)0;
struct sType* __dec_obj275;
_Bool __result351__;
memset(&calling_fun_596, 0, sizeof(_Bool));
    left_node_588=self->mLeft;
    Value_589=node_compile(left_node_588,info);
    if(    !Value_589) {
        return (_Bool)0;
    }
    else {
    }
    left_value_590=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_591=self->mRight;
    Value_592=node_compile(right_node_591,info);
    if(    !Value_592) {
        __result350__ = (_Bool)0;
        come_call_finalizer3(left_value_590,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result350__;
    }
    else {
    }
    right_value_593=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_594=(struct sType*)come_increment_ref_count(left_value_590->type);
    fun_name_595="operator_andand";
    if(    self->mQuote) {
        calling_fun_596=(_Bool)0;
    }
    else {
        calling_fun_596=operator_overload_fun(type_594,fun_name_595,left_value_590,right_value_593,(_Bool)0,info);
    }
    if(    !calling_fun_596) {
        come_value_597=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1468, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj274=come_value_597->c_value;
        come_value_597->c_value=(char*)come_increment_ref_count(xsprintf("%s&&%s",left_value_590->c_value,right_value_593->c_value));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj275=come_value_597->type;
        come_value_597->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_590->type));
        come_call_finalizer3(__dec_obj275,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_597->type->mHeap=(_Bool)0;
        come_value_597->var=left_value_590->var;
        add_come_last_code(info,"%s",come_value_597->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_597));
        come_call_finalizer3(come_value_597,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result351__ = (_Bool)1;
    come_call_finalizer3(left_value_590,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_593,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_594,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result351__;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
char* __dec_obj271;
struct sNode* __dec_obj272;
struct sNode* __dec_obj273;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj271=self->sname;
            __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj272=self->mLeft;
            if(__dec_obj272) { __dec_obj272 = come_decrement_ref_count2(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj273=self->mRight;
            if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sNode* __dec_obj276;
void* __right_value570 = (void*)0;
struct sNode* __dec_obj277;
struct sOrOrNode* __result352__;
    ((struct sNodeBase*)(__right_value568=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value568,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj276=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj277=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count2(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0,0, (void*)0); };
    __result352__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result352__;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value571 = (void*)0;
char* __result353__;
    __result353__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value571=__builtin_string("sOrOrNode")));
    __right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_598;
_Bool Value_599;
void* __right_value572 = (void*)0;
struct CVALUE* left_value_600;
struct sNode* right_node_601;
_Bool Value_602;
_Bool __result354__;
void* __right_value573 = (void*)0;
struct CVALUE* right_value_603;
struct sType* type_604;
char* fun_name_605;
_Bool calling_fun_606;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct CVALUE* come_value_607;
void* __right_value576 = (void*)0;
char* __dec_obj281;
void* __right_value577 = (void*)0;
struct sType* __dec_obj282;
_Bool __result355__;
memset(&calling_fun_606, 0, sizeof(_Bool));
    left_node_598=self->mLeft;
    Value_599=node_compile(left_node_598,info);
    if(    !Value_599) {
        return (_Bool)0;
    }
    else {
    }
    left_value_600=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_601=self->mRight;
    Value_602=node_compile(right_node_601,info);
    if(    !Value_602) {
        __result354__ = (_Bool)0;
        come_call_finalizer3(left_value_600,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result354__;
    }
    else {
    }
    right_value_603=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_604=(struct sType*)come_increment_ref_count(left_value_600->type);
    fun_name_605="operator_oror";
    if(    self->mQuote) {
        calling_fun_606=(_Bool)0;
    }
    else {
        calling_fun_606=operator_overload_fun(type_604,fun_name_605,left_value_600,right_value_603,(_Bool)0,info);
    }
    if(    !calling_fun_606) {
        come_value_607=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1533, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj281=come_value_607->c_value;
        come_value_607->c_value=(char*)come_increment_ref_count(xsprintf("%s||%s",left_value_600->c_value,right_value_603->c_value));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj282=come_value_607->type;
        come_value_607->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_600->type));
        come_call_finalizer3(__dec_obj282,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_607->type->mHeap=(_Bool)0;
        come_value_607->var=left_value_600->var;
        add_come_last_code(info,"%s",come_value_607->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_607));
        come_call_finalizer3(come_value_607,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result355__ = (_Bool)1;
    come_call_finalizer3(left_value_600,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_603,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result355__;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
char* __dec_obj278;
struct sNode* __dec_obj279;
struct sNode* __dec_obj280;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj278=self->sname;
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj279=self->mLeft;
            if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj280=self->mRight;
            if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sNode* __dec_obj283;
void* __right_value580 = (void*)0;
struct sNode* __dec_obj284;
struct sCommaNode* __result356__;
    ((struct sNodeBase*)(__right_value578=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value578,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj283=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj284=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
    __result356__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result356__;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __result_obj__=(void*)0;
void* __right_value581 = (void*)0;
char* __result357__;
    __result357__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value581=__builtin_string("sCommaNode")));
    __right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_608;
_Bool Value_609;
void* __right_value582 = (void*)0;
struct CVALUE* left_value_610;
struct sNode* right_node_611;
_Bool Value_612;
_Bool __result358__;
void* __right_value583 = (void*)0;
struct CVALUE* right_value_613;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct CVALUE* come_value_614;
void* __right_value586 = (void*)0;
char* __dec_obj288;
void* __right_value587 = (void*)0;
struct sType* __dec_obj289;
_Bool __result359__;
    left_node_608=self->mLeft;
    Value_609=node_compile(left_node_608,info);
    if(    !Value_609) {
        return (_Bool)0;
    }
    else {
    }
    left_value_610=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_611=self->mRight;
    Value_612=node_compile(right_node_611,info);
    if(    !Value_612) {
        __result358__ = (_Bool)0;
        come_call_finalizer3(left_value_610,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result358__;
    }
    else {
    }
    right_value_613=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_614=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1585, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj288=come_value_614->c_value;
    come_value_614->c_value=(char*)come_increment_ref_count(xsprintf("%s,%s",left_value_610->c_value,right_value_613->c_value));
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj289=come_value_614->type;
    come_value_614->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_610->type));
    come_call_finalizer3(__dec_obj289,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_614->var=((void*)0);
    add_come_last_code(info,"%s",come_value_614->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_614));
    __result359__ = (_Bool)1;
    come_call_finalizer3(left_value_610,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_613,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_614,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result359__;
}

static void sCommaNode_finalize(struct sCommaNode* self){
char* __dec_obj285;
struct sNode* __dec_obj286;
struct sNode* __dec_obj287;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj285=self->sname;
            __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj286=self->mLeft;
            if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj287=self->mRight;
            if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sNode* __dec_obj290;
void* __right_value590 = (void*)0;
struct sNode* __dec_obj291;
void* __right_value591 = (void*)0;
struct sNode* __dec_obj292;
struct sConditionalNode* __result360__;
    ((struct sNodeBase*)(__right_value588=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value588,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj290=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value1));
    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj291=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value2));
    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj292=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, value3));
    if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); };
    __result360__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result360__;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
void* __right_value592 = (void*)0;
char* __result361__;
    __result361__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value592=__builtin_string("sConditionalNode")));
    __right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
_Bool in_conditional_operator_615;
struct sNode* value1_616;
_Bool Value_617;
void* __right_value593 = (void*)0;
struct CVALUE* value1_value_618;
struct sNode* value2_619;
_Bool Value_620;
_Bool __result362__;
void* __right_value594 = (void*)0;
struct CVALUE* value2_value_621;
struct sNode* value3_622;
_Bool Value_623;
_Bool __result363__;
void* __right_value595 = (void*)0;
struct CVALUE* value3_value_624;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct CVALUE* come_value_625;
void* __right_value598 = (void*)0;
char* __dec_obj297;
void* __right_value599 = (void*)0;
struct sType* __dec_obj298;
_Bool __result364__;
    in_conditional_operator_615=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1_616=self->mValue1;
    Value_617=node_compile(value1_616,info);
    if(    !Value_617) {
        return (_Bool)0;
    }
    else {
    }
    value1_value_618=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value2_619=self->mValue2;
    Value_620=node_compile(value2_619,info);
    if(    !Value_620) {
        __result362__ = (_Bool)0;
        come_call_finalizer3(value1_value_618,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result362__;
    }
    else {
    }
    value2_value_621=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value3_622=self->mValue3;
    Value_623=node_compile(value3_622,info);
    if(    !Value_623) {
        __result363__ = (_Bool)0;
        come_call_finalizer3(value1_value_618,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value2_value_621,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result363__;
    }
    else {
    }
    value3_value_624=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_625=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1648, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj297=come_value_625->c_value;
    come_value_625->c_value=(char*)come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value_618->c_value,value2_value_621->c_value,value3_value_624->c_value));
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj298=come_value_625->type;
    come_value_625->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value2_value_621->type));
    come_call_finalizer3(__dec_obj298,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_625->var=((void*)0);
    add_come_last_code(info,"%s",come_value_625->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_625));
    info->in_conditional_operator=in_conditional_operator_615;
    __result364__ = (_Bool)1;
    come_call_finalizer3(value1_value_618,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_621,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_624,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_625,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result364__;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
char* __dec_obj293;
struct sNode* __dec_obj294;
struct sNode* __dec_obj295;
struct sNode* __dec_obj296;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj293=self->sname;
            __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        if(        self->mValue1==gComeFunResultObject) {
            __dec_obj294=self->mValue1;
            if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        if(        self->mValue2==gComeFunResultObject) {
            __dec_obj295=self->mValue2;
            if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        if(        self->mValue3==gComeFunResultObject) {
            __dec_obj296=self->mValue3;
            if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sNode* _inf_value2;
struct sConditionalNode* _inf_obj_value2;
void* __right_value607 = (void*)0;
struct sNode* __result367__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1666, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value601=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 1666, "struct sConditionalNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),(struct sNode*)come_increment_ref_count(value3),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sConditionalNode_finalize;
    _inf_value2->clone=(void*)sConditionalNode_clone;
    _inf_value2->compile=(void*)sConditionalNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sConditionalNode_kind;
    __result367__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value607=_inf_value2));
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value601,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value607) { __right_value607 = come_decrement_ref_count2(__right_value607, ((struct sNode*)__right_value607)->finalize, ((struct sNode*)__right_value607)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
struct sConditionalNode* __result365__;
void* __right_value602 = (void*)0;
struct sConditionalNode* result_627;
void* __right_value603 = (void*)0;
char* __dec_obj299;
void* __right_value604 = (void*)0;
struct sNode* __dec_obj300;
void* __right_value605 = (void*)0;
struct sNode* __dec_obj301;
void* __right_value606 = (void*)0;
struct sNode* __dec_obj302;
struct sConditionalNode* __result366__;
    if(    self==(void*)0) {
        __result365__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    result_627=(struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "struct sConditionalNode", sConditionalNode_finalize, sConditionalNode_clone, sConditionalNode_get_hash_key, sConditionalNode_equals));
    if(    self!=((void*)0)) {
        result_627->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj299=result_627->sname;
        result_627->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_627->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __dec_obj300=result_627->mValue1;
        result_627->mValue1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue1));
        if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __dec_obj301=result_627->mValue2;
        result_627->mValue2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue2));
        if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __dec_obj302=result_627->mValue3;
        result_627->mValue3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mValue3));
        if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result366__ = gComeFunResultObject = __result_obj__ = result_627;
    come_call_finalizer3(result_627,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static unsigned int sConditionalNode_get_hash_key(struct sConditionalNode* self){
unsigned int result_626;
    result_626=0;
    result_626+=int_get_hash_key(((int)self->sline));
    result_626+=int_get_hash_key(((int)self->sname));
    result_626+=int_get_hash_key(((int)self->sline_real));
    result_626+=int_get_hash_key(((int)self->mValue1));
    result_626+=int_get_hash_key(((int)self->mValue2));
    result_626+=int_get_hash_key(((int)self->mValue3));
    return result_626;
}

static _Bool sConditionalNode_equals(struct sConditionalNode* left, struct sConditionalNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mValue1,right->mValue1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mValue2,right->mValue2)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mValue3,right->mValue3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value608 = (void*)0;
struct sNode* node_628;
int sline_real_629;
void* __right_value609 = (void*)0;
struct sNode* right_630;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* __right_value616 = (void*)0;
struct sNode* __result370__;
int sline_real_633;
void* __right_value617 = (void*)0;
struct sNode* right_634;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* __right_value624 = (void*)0;
struct sNode* __result373__;
int sline_real_637;
void* __right_value625 = (void*)0;
struct sNode* right_638;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* __right_value632 = (void*)0;
struct sNode* __result376__;
int sline_real_641;
void* __right_value633 = (void*)0;
struct sNode* right_642;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* __right_value636 = (void*)0;
struct sNode* __result377__;
int sline_real_643;
void* __right_value637 = (void*)0;
struct sNode* right_644;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* __right_value640 = (void*)0;
struct sNode* __result378__;
int sline_real_645;
void* __right_value641 = (void*)0;
struct sNode* right_646;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* __right_value644 = (void*)0;
struct sNode* __result379__;
struct sNode* __result380__;
    node_628=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_628->terminated(node_628->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            sline_real_629=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_630=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_629;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1686, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value3=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value611=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1686, "struct sMultNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_630),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result370__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value616=_inf_value3));
            if(right_630) { right_630 = come_decrement_ref_count2(right_630, ((struct sNode*)right_630)->finalize, ((struct sNode*)right_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value611,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value616) { __right_value616 = come_decrement_ref_count2(__right_value616, ((struct sNode*)__right_value616)->finalize, ((struct sNode*)__right_value616)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result370__;
            if(right_630) { right_630 = come_decrement_ref_count2(right_630, ((struct sNode*)right_630)->finalize, ((struct sNode*)right_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==47&&*(info->p+1)!=61&&*(info->p+1)!=42&&*(info->p-1)!=42) {
            info->p++;
            sline_real_633=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_634=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_633;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1697, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value4=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value619=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1697, "struct sDivNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_634),(_Bool)0,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sDivNode_finalize;
            _inf_value4->clone=(void*)sDivNode_clone;
            _inf_value4->compile=(void*)sDivNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sDivNode_kind;
            __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value624=_inf_value4));
            if(right_634) { right_634 = come_decrement_ref_count2(right_634, ((struct sNode*)right_634)->finalize, ((struct sNode*)right_634)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value619,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value624) { __right_value624 = come_decrement_ref_count2(__right_value624, ((struct sNode*)__right_value624)->finalize, ((struct sNode*)__right_value624)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result373__;
            if(right_634) { right_634 = come_decrement_ref_count2(right_634, ((struct sNode*)right_634)->finalize, ((struct sNode*)right_634)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==37&&*(info->p+1)!=61) {
            info->p++;
            sline_real_637=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_638=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_637;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1708, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value627=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1708, "struct sModNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_638),(_Bool)0,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sModNode_finalize;
            _inf_value5->clone=(void*)sModNode_clone;
            _inf_value5->compile=(void*)sModNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sModNode_kind;
            __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value632=_inf_value5));
            if(right_638) { right_638 = come_decrement_ref_count2(right_638, ((struct sNode*)right_638)->finalize, ((struct sNode*)right_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value627,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value632) { __right_value632 = come_decrement_ref_count2(__right_value632, ((struct sNode*)__right_value632)->finalize, ((struct sNode*)__right_value632)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result376__;
            if(right_638) { right_638 = come_decrement_ref_count2(right_638, ((struct sNode*)right_638)->finalize, ((struct sNode*)right_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !node_628->terminated(node_628->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_641=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_642=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_641;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1719, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value6=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value635=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1719, "struct sMultNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_642),(_Bool)1,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sMultNode_finalize;
            _inf_value6->clone=(void*)sMultNode_clone;
            _inf_value6->compile=(void*)sMultNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sMultNode_kind;
            __result377__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value636=_inf_value6));
            if(right_642) { right_642 = come_decrement_ref_count2(right_642, ((struct sNode*)right_642)->finalize, ((struct sNode*)right_642)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value635,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value636) { __right_value636 = come_decrement_ref_count2(__right_value636, ((struct sNode*)__right_value636)->finalize, ((struct sNode*)__right_value636)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result377__;
            if(right_642) { right_642 = come_decrement_ref_count2(right_642, ((struct sNode*)right_642)->finalize, ((struct sNode*)right_642)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_643=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_644=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_643;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1730, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value639=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1730, "struct sDivNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_644),(_Bool)1,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sDivNode_finalize;
            _inf_value7->clone=(void*)sDivNode_clone;
            _inf_value7->compile=(void*)sDivNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sDivNode_kind;
            __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value640=_inf_value7));
            if(right_644) { right_644 = come_decrement_ref_count2(right_644, ((struct sNode*)right_644)->finalize, ((struct sNode*)right_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value639,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value640) { __right_value640 = come_decrement_ref_count2(__right_value640, ((struct sNode*)__right_value640)->finalize, ((struct sNode*)__right_value640)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result378__;
            if(right_644) { right_644 = come_decrement_ref_count2(right_644, ((struct sNode*)right_644)->finalize, ((struct sNode*)right_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_645=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_646=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_645;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1741, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value643=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1741, "struct sModNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_628),(struct sNode*)come_increment_ref_count(right_646),(_Bool)1,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sModNode_finalize;
            _inf_value8->clone=(void*)sModNode_clone;
            _inf_value8->compile=(void*)sModNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sModNode_kind;
            __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value644=_inf_value8));
            if(right_646) { right_646 = come_decrement_ref_count2(right_646, ((struct sNode*)right_646)->finalize, ((struct sNode*)right_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value643,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value644) { __right_value644 = come_decrement_ref_count2(__right_value644, ((struct sNode*)__right_value644)->finalize, ((struct sNode*)__right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result379__;
            if(right_646) { right_646 = come_decrement_ref_count2(right_646, ((struct sNode*)right_646)->finalize, ((struct sNode*)right_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result380__ = gComeFunResultObject = __result_obj__ = node_628;
    if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__=(void*)0;
struct sMultNode* __result368__;
void* __right_value612 = (void*)0;
struct sMultNode* result_632;
void* __right_value613 = (void*)0;
char* __dec_obj303;
void* __right_value614 = (void*)0;
struct sNode* __dec_obj304;
void* __right_value615 = (void*)0;
struct sNode* __dec_obj305;
struct sMultNode* __result369__;
    if(    self==(void*)0) {
        __result368__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    result_632=(struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "struct sMultNode", sMultNode_finalize, sMultNode_clone, sMultNode_get_hash_key, sMultNode_equals));
    if(    self!=((void*)0)) {
        result_632->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj303=result_632->sname;
        result_632->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_632->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_632->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj304=result_632->mLeft;
        result_632->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj305=result_632->mRight;
        result_632->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result369__ = gComeFunResultObject = __result_obj__ = result_632;
    come_call_finalizer3(result_632,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static unsigned int sMultNode_get_hash_key(struct sMultNode* self){
unsigned int result_631;
    result_631=0;
    result_631+=int_get_hash_key(((int)self->sline));
    result_631+=int_get_hash_key(((int)self->sname));
    result_631+=int_get_hash_key(((int)self->sline_real));
    result_631+=int_get_hash_key(((int)self->mQuote));
    result_631+=int_get_hash_key(((int)self->mLeft));
    result_631+=int_get_hash_key(((int)self->mRight));
    return result_631;
}

static _Bool sMultNode_equals(struct sMultNode* left, struct sMultNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__=(void*)0;
struct sDivNode* __result371__;
void* __right_value620 = (void*)0;
struct sDivNode* result_636;
void* __right_value621 = (void*)0;
char* __dec_obj306;
void* __right_value622 = (void*)0;
struct sNode* __dec_obj307;
void* __right_value623 = (void*)0;
struct sNode* __dec_obj308;
struct sDivNode* __result372__;
    if(    self==(void*)0) {
        __result371__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_636=(struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "struct sDivNode", sDivNode_finalize, sDivNode_clone, sDivNode_get_hash_key, sDivNode_equals));
    if(    self!=((void*)0)) {
        result_636->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj306=result_636->sname;
        result_636->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_636->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_636->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj307=result_636->mLeft;
        result_636->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj308=result_636->mRight;
        result_636->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result372__ = gComeFunResultObject = __result_obj__ = result_636;
    come_call_finalizer3(result_636,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static unsigned int sDivNode_get_hash_key(struct sDivNode* self){
unsigned int result_635;
    result_635=0;
    result_635+=int_get_hash_key(((int)self->sline));
    result_635+=int_get_hash_key(((int)self->sname));
    result_635+=int_get_hash_key(((int)self->sline_real));
    result_635+=int_get_hash_key(((int)self->mQuote));
    result_635+=int_get_hash_key(((int)self->mLeft));
    result_635+=int_get_hash_key(((int)self->mRight));
    return result_635;
}

static _Bool sDivNode_equals(struct sDivNode* left, struct sDivNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__=(void*)0;
struct sModNode* __result374__;
void* __right_value628 = (void*)0;
struct sModNode* result_640;
void* __right_value629 = (void*)0;
char* __dec_obj309;
void* __right_value630 = (void*)0;
struct sNode* __dec_obj310;
void* __right_value631 = (void*)0;
struct sNode* __dec_obj311;
struct sModNode* __result375__;
    if(    self==(void*)0) {
        __result374__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    result_640=(struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "struct sModNode", sModNode_finalize, sModNode_clone, sModNode_get_hash_key, sModNode_equals));
    if(    self!=((void*)0)) {
        result_640->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj309=result_640->sname;
        result_640->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_640->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj310=result_640->mLeft;
        result_640->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj311=result_640->mRight;
        result_640->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result375__ = gComeFunResultObject = __result_obj__ = result_640;
    come_call_finalizer3(result_640,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static unsigned int sModNode_get_hash_key(struct sModNode* self){
unsigned int result_639;
    result_639=0;
    result_639+=int_get_hash_key(((int)self->sline));
    result_639+=int_get_hash_key(((int)self->sname));
    result_639+=int_get_hash_key(((int)self->sline_real));
    result_639+=int_get_hash_key(((int)self->mQuote));
    result_639+=int_get_hash_key(((int)self->mLeft));
    result_639+=int_get_hash_key(((int)self->mRight));
    return result_639;
}

static _Bool sModNode_equals(struct sModNode* left, struct sModNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value645 = (void*)0;
struct sNode* node_647;
int sline_real_648;
void* __right_value646 = (void*)0;
struct sNode* right_649;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* __right_value653 = (void*)0;
struct sNode* __result383__;
int sline_real_652;
void* __right_value654 = (void*)0;
struct sNode* right_653;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* __right_value661 = (void*)0;
struct sNode* __result386__;
int sline_real_656;
void* __right_value662 = (void*)0;
struct sNode* right_657;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* __right_value665 = (void*)0;
struct sNode* __result387__;
int sline_real_658;
void* __right_value666 = (void*)0;
struct sNode* right_659;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* __right_value669 = (void*)0;
struct sNode* __result388__;
struct sNode* __result389__;
    node_647=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            sline_real_648=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_649=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_648;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1770, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value9=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value648=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1770, "struct sAddNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_647),(struct sNode*)come_increment_ref_count(right_649),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result383__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value653=_inf_value9));
            if(right_649) { right_649 = come_decrement_ref_count2(right_649, ((struct sNode*)right_649)->finalize, ((struct sNode*)right_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value648,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value653) { __right_value653 = come_decrement_ref_count2(__right_value653, ((struct sNode*)__right_value653)->finalize, ((struct sNode*)__right_value653)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result383__;
            if(right_649) { right_649 = come_decrement_ref_count2(right_649, ((struct sNode*)right_649)->finalize, ((struct sNode*)right_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
            info->p++;
            sline_real_652=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_653=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_652;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1782, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value656=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1782, "struct sSubNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_647),(struct sNode*)come_increment_ref_count(right_653),(_Bool)0,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSubNode_finalize;
            _inf_value10->clone=(void*)sSubNode_clone;
            _inf_value10->compile=(void*)sSubNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSubNode_kind;
            __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value661=_inf_value10));
            if(right_653) { right_653 = come_decrement_ref_count2(right_653, ((struct sNode*)right_653)->finalize, ((struct sNode*)right_653)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value656,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value661) { __right_value661 = come_decrement_ref_count2(__right_value661, ((struct sNode*)__right_value661)->finalize, ((struct sNode*)__right_value661)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result386__;
            if(right_653) { right_653 = come_decrement_ref_count2(right_653, ((struct sNode*)right_653)->finalize, ((struct sNode*)right_653)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
            info->p+=2;
            sline_real_656=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_657=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_656;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1794, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value664=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1794, "struct sAddNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_647),(struct sNode*)come_increment_ref_count(right_657),(_Bool)1,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sAddNode_finalize;
            _inf_value11->clone=(void*)sAddNode_clone;
            _inf_value11->compile=(void*)sAddNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sAddNode_kind;
            __result387__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value665=_inf_value11));
            if(right_657) { right_657 = come_decrement_ref_count2(right_657, ((struct sNode*)right_657)->finalize, ((struct sNode*)right_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value664,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value665) { __right_value665 = come_decrement_ref_count2(__right_value665, ((struct sNode*)__right_value665)->finalize, ((struct sNode*)__right_value665)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result387__;
            if(right_657) { right_657 = come_decrement_ref_count2(right_657, ((struct sNode*)right_657)->finalize, ((struct sNode*)right_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_658=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_659=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_658;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1806, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value668=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1806, "struct sSubNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_647),(struct sNode*)come_increment_ref_count(right_659),(_Bool)1,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSubNode_finalize;
            _inf_value12->clone=(void*)sSubNode_clone;
            _inf_value12->compile=(void*)sSubNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSubNode_kind;
            __result388__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value669=_inf_value12));
            if(right_659) { right_659 = come_decrement_ref_count2(right_659, ((struct sNode*)right_659)->finalize, ((struct sNode*)right_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value668,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value669) { __right_value669 = come_decrement_ref_count2(__right_value669, ((struct sNode*)__right_value669)->finalize, ((struct sNode*)__right_value669)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result388__;
            if(right_659) { right_659 = come_decrement_ref_count2(right_659, ((struct sNode*)right_659)->finalize, ((struct sNode*)right_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result389__ = gComeFunResultObject = __result_obj__ = node_647;
    if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__=(void*)0;
struct sAddNode* __result381__;
void* __right_value649 = (void*)0;
struct sAddNode* result_651;
void* __right_value650 = (void*)0;
char* __dec_obj312;
void* __right_value651 = (void*)0;
struct sNode* __dec_obj313;
void* __right_value652 = (void*)0;
struct sNode* __dec_obj314;
struct sAddNode* __result382__;
    if(    self==(void*)0) {
        __result381__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    result_651=(struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "struct sAddNode", sAddNode_finalize, sAddNode_clone, sAddNode_get_hash_key, sAddNode_equals));
    if(    self!=((void*)0)) {
        result_651->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj312=result_651->sname;
        result_651->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_651->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj313=result_651->mLeft;
        result_651->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj314=result_651->mRight;
        result_651->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_651->mQuote=self->mQuote;
    }
    __result382__ = gComeFunResultObject = __result_obj__ = result_651;
    come_call_finalizer3(result_651,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static unsigned int sAddNode_get_hash_key(struct sAddNode* self){
unsigned int result_650;
    result_650=0;
    result_650+=int_get_hash_key(((int)self->sline));
    result_650+=int_get_hash_key(((int)self->sname));
    result_650+=int_get_hash_key(((int)self->sline_real));
    result_650+=int_get_hash_key(((int)self->mLeft));
    result_650+=int_get_hash_key(((int)self->mRight));
    result_650+=int_get_hash_key(((int)self->mQuote));
    return result_650;
}

static _Bool sAddNode_equals(struct sAddNode* left, struct sAddNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__=(void*)0;
struct sSubNode* __result384__;
void* __right_value657 = (void*)0;
struct sSubNode* result_655;
void* __right_value658 = (void*)0;
char* __dec_obj315;
void* __right_value659 = (void*)0;
struct sNode* __dec_obj316;
void* __right_value660 = (void*)0;
struct sNode* __dec_obj317;
struct sSubNode* __result385__;
    if(    self==(void*)0) {
        __result384__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    result_655=(struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "struct sSubNode", sSubNode_finalize, sSubNode_clone, sSubNode_get_hash_key, sSubNode_equals));
    if(    self!=((void*)0)) {
        result_655->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj315=result_655->sname;
        result_655->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_655->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj316=result_655->mLeft;
        result_655->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj317=result_655->mRight;
        result_655->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_655->mQuote=self->mQuote;
    }
    __result385__ = gComeFunResultObject = __result_obj__ = result_655;
    come_call_finalizer3(result_655,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static unsigned int sSubNode_get_hash_key(struct sSubNode* self){
unsigned int result_654;
    result_654=0;
    result_654+=int_get_hash_key(((int)self->sline));
    result_654+=int_get_hash_key(((int)self->sname));
    result_654+=int_get_hash_key(((int)self->sline_real));
    result_654+=int_get_hash_key(((int)self->mLeft));
    result_654+=int_get_hash_key(((int)self->mRight));
    result_654+=int_get_hash_key(((int)self->mQuote));
    return result_654;
}

static _Bool sSubNode_equals(struct sSubNode* left, struct sSubNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value670 = (void*)0;
struct sNode* node_660;
int sline_real_661;
void* __right_value671 = (void*)0;
struct sNode* right_662;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* __right_value678 = (void*)0;
struct sNode* __result392__;
int sline_real_665;
void* __right_value679 = (void*)0;
struct sNode* right_666;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* __right_value686 = (void*)0;
struct sNode* __result395__;
int sline_real_669;
void* __right_value687 = (void*)0;
struct sNode* right_670;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* __right_value690 = (void*)0;
struct sNode* __result396__;
int sline_real_671;
void* __right_value691 = (void*)0;
struct sNode* right_672;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* __right_value694 = (void*)0;
struct sNode* __result397__;
struct sNode* __result398__;
    parse_sharp_v5(info);
    node_660=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_661=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_662=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_661;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1836, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value673=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1836, "struct sLShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_660),(struct sNode*)come_increment_ref_count(right_662),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value678=_inf_value13));
            if(right_662) { right_662 = come_decrement_ref_count2(right_662, ((struct sNode*)right_662)->finalize, ((struct sNode*)right_662)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_660) { node_660 = come_decrement_ref_count2(node_660, ((struct sNode*)node_660)->finalize, ((struct sNode*)node_660)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value673,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value678) { __right_value678 = come_decrement_ref_count2(__right_value678, ((struct sNode*)__right_value678)->finalize, ((struct sNode*)__right_value678)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result392__;
            if(right_662) { right_662 = come_decrement_ref_count2(right_662, ((struct sNode*)right_662)->finalize, ((struct sNode*)right_662)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_665=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_666=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_665;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1847, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value681=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1847, "struct sRShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_660),(struct sNode*)come_increment_ref_count(right_666),(_Bool)0,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sRShiftNode_finalize;
            _inf_value14->clone=(void*)sRShiftNode_clone;
            _inf_value14->compile=(void*)sRShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sRShiftNode_kind;
            __result395__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value686=_inf_value14));
            if(right_666) { right_666 = come_decrement_ref_count2(right_666, ((struct sNode*)right_666)->finalize, ((struct sNode*)right_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_660) { node_660 = come_decrement_ref_count2(node_660, ((struct sNode*)node_660)->finalize, ((struct sNode*)node_660)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value681,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value686) { __right_value686 = come_decrement_ref_count2(__right_value686, ((struct sNode*)__right_value686)->finalize, ((struct sNode*)__right_value686)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result395__;
            if(right_666) { right_666 = come_decrement_ref_count2(right_666, ((struct sNode*)right_666)->finalize, ((struct sNode*)right_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
            info->p+=3;
            sline_real_669=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_670=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_669;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1858, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value689=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1858, "struct sLShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_660),(struct sNode*)come_increment_ref_count(right_670),(_Bool)1,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLShiftNode_finalize;
            _inf_value15->clone=(void*)sLShiftNode_clone;
            _inf_value15->compile=(void*)sLShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLShiftNode_kind;
            __result396__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value690=_inf_value15));
            if(right_670) { right_670 = come_decrement_ref_count2(right_670, ((struct sNode*)right_670)->finalize, ((struct sNode*)right_670)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_660) { node_660 = come_decrement_ref_count2(node_660, ((struct sNode*)node_660)->finalize, ((struct sNode*)node_660)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value689,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value690) { __right_value690 = come_decrement_ref_count2(__right_value690, ((struct sNode*)__right_value690)->finalize, ((struct sNode*)__right_value690)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result396__;
            if(right_670) { right_670 = come_decrement_ref_count2(right_670, ((struct sNode*)right_670)->finalize, ((struct sNode*)right_670)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
            info->p+=3;
            sline_real_671=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_672=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_671;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1869, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value693=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1869, "struct sRShiftNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_660),(struct sNode*)come_increment_ref_count(right_672),(_Bool)1,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sRShiftNode_finalize;
            _inf_value16->clone=(void*)sRShiftNode_clone;
            _inf_value16->compile=(void*)sRShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sRShiftNode_kind;
            __result397__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value694=_inf_value16));
            if(right_672) { right_672 = come_decrement_ref_count2(right_672, ((struct sNode*)right_672)->finalize, ((struct sNode*)right_672)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_660) { node_660 = come_decrement_ref_count2(node_660, ((struct sNode*)node_660)->finalize, ((struct sNode*)node_660)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value693,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value694) { __right_value694 = come_decrement_ref_count2(__right_value694, ((struct sNode*)__right_value694)->finalize, ((struct sNode*)__right_value694)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result397__;
            if(right_672) { right_672 = come_decrement_ref_count2(right_672, ((struct sNode*)right_672)->finalize, ((struct sNode*)right_672)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result398__ = gComeFunResultObject = __result_obj__ = node_660;
    if(node_660) { node_660 = come_decrement_ref_count2(node_660, ((struct sNode*)node_660)->finalize, ((struct sNode*)node_660)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
struct sLShiftNode* __result390__;
void* __right_value674 = (void*)0;
struct sLShiftNode* result_664;
void* __right_value675 = (void*)0;
char* __dec_obj318;
void* __right_value676 = (void*)0;
struct sNode* __dec_obj319;
void* __right_value677 = (void*)0;
struct sNode* __dec_obj320;
struct sLShiftNode* __result391__;
    if(    self==(void*)0) {
        __result390__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    result_664=(struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "struct sLShiftNode", sLShiftNode_finalize, sLShiftNode_clone, sLShiftNode_get_hash_key, sLShiftNode_equals));
    if(    self!=((void*)0)) {
        result_664->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj318=result_664->sname;
        result_664->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_664->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_664->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj319=result_664->mLeft;
        result_664->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj320=result_664->mRight;
        result_664->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result391__ = gComeFunResultObject = __result_obj__ = result_664;
    come_call_finalizer3(result_664,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

static unsigned int sLShiftNode_get_hash_key(struct sLShiftNode* self){
unsigned int result_663;
    result_663=0;
    result_663+=int_get_hash_key(((int)self->sline));
    result_663+=int_get_hash_key(((int)self->sname));
    result_663+=int_get_hash_key(((int)self->sline_real));
    result_663+=int_get_hash_key(((int)self->mQuote));
    result_663+=int_get_hash_key(((int)self->mLeft));
    result_663+=int_get_hash_key(((int)self->mRight));
    return result_663;
}

static _Bool sLShiftNode_equals(struct sLShiftNode* left, struct sLShiftNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
struct sRShiftNode* __result393__;
void* __right_value682 = (void*)0;
struct sRShiftNode* result_668;
void* __right_value683 = (void*)0;
char* __dec_obj321;
void* __right_value684 = (void*)0;
struct sNode* __dec_obj322;
void* __right_value685 = (void*)0;
struct sNode* __dec_obj323;
struct sRShiftNode* __result394__;
    if(    self==(void*)0) {
        __result393__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result393__;
    }
    result_668=(struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "struct sRShiftNode", sRShiftNode_finalize, sRShiftNode_clone, sRShiftNode_get_hash_key, sRShiftNode_equals));
    if(    self!=((void*)0)) {
        result_668->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj321=result_668->sname;
        result_668->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_668->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_668->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj322=result_668->mLeft;
        result_668->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj323=result_668->mRight;
        result_668->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj323) { __dec_obj323 = come_decrement_ref_count2(__dec_obj323, ((struct sNode*)__dec_obj323)->finalize, ((struct sNode*)__dec_obj323)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result394__ = gComeFunResultObject = __result_obj__ = result_668;
    come_call_finalizer3(result_668,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

static unsigned int sRShiftNode_get_hash_key(struct sRShiftNode* self){
unsigned int result_667;
    result_667=0;
    result_667+=int_get_hash_key(((int)self->sline));
    result_667+=int_get_hash_key(((int)self->sname));
    result_667+=int_get_hash_key(((int)self->sline_real));
    result_667+=int_get_hash_key(((int)self->mQuote));
    result_667+=int_get_hash_key(((int)self->mLeft));
    result_667+=int_get_hash_key(((int)self->mRight));
    return result_667;
}

static _Bool sRShiftNode_equals(struct sRShiftNode* left, struct sRShiftNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value695 = (void*)0;
struct sNode* node_673;
int sline_real_674;
void* __right_value696 = (void*)0;
struct sNode* right_675;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* __right_value703 = (void*)0;
struct sNode* __result401__;
int sline_real_678;
void* __right_value704 = (void*)0;
struct sNode* right_679;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* __right_value711 = (void*)0;
struct sNode* __result404__;
int sline_real_682;
void* __right_value712 = (void*)0;
struct sNode* right_683;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* __right_value719 = (void*)0;
struct sNode* __result407__;
int sline_real_686;
void* __right_value720 = (void*)0;
struct sNode* right_687;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* __right_value727 = (void*)0;
struct sNode* __result410__;
int sline_real_690;
void* __right_value728 = (void*)0;
struct sNode* right_691;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* __right_value731 = (void*)0;
struct sNode* __result411__;
int sline_real_692;
void* __right_value732 = (void*)0;
struct sNode* right_693;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* __right_value735 = (void*)0;
struct sNode* __result412__;
int sline_real_694;
void* __right_value736 = (void*)0;
struct sNode* right_695;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* __right_value739 = (void*)0;
struct sNode* __result413__;
int sline_real_696;
void* __right_value740 = (void*)0;
struct sNode* right_697;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* __right_value743 = (void*)0;
struct sNode* __result414__;
struct sNode* __result415__;
    parse_sharp_v5(info);
    node_673=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_674=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_675=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_674;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1899, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value698=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1899, "struct sGtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_673),(struct sNode*)come_increment_ref_count(right_675),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result401__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value703=_inf_value17));
            if(right_675) { right_675 = come_decrement_ref_count2(right_675, ((struct sNode*)right_675)->finalize, ((struct sNode*)right_675)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value698,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value703) { __right_value703 = come_decrement_ref_count2(__right_value703, ((struct sNode*)__right_value703)->finalize, ((struct sNode*)__right_value703)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result401__;
            if(right_675) { right_675 = come_decrement_ref_count2(right_675, ((struct sNode*)right_675)->finalize, ((struct sNode*)right_675)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_678=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_679=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_678;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1910, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value18=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value706=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1910, "struct sLtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_673),(struct sNode*)come_increment_ref_count(right_679),(_Bool)0,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLtEqNode_finalize;
            _inf_value18->clone=(void*)sLtEqNode_clone;
            _inf_value18->compile=(void*)sLtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLtEqNode_kind;
            __result404__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value711=_inf_value18));
            if(right_679) { right_679 = come_decrement_ref_count2(right_679, ((struct sNode*)right_679)->finalize, ((struct sNode*)right_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value706,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value711) { __right_value711 = come_decrement_ref_count2(__right_value711, ((struct sNode*)__right_value711)->finalize, ((struct sNode*)__right_value711)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result404__;
            if(right_679) { right_679 = come_decrement_ref_count2(right_679, ((struct sNode*)right_679)->finalize, ((struct sNode*)right_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==62&&*(info->p+1)!=62) {
            info->p++;
            sline_real_682=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_683=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_682;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1921, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value19=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value714=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1921, "struct sGtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_673),(struct sNode*)come_increment_ref_count(right_683),(_Bool)0,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sGtNode_finalize;
            _inf_value19->clone=(void*)sGtNode_clone;
            _inf_value19->compile=(void*)sGtNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sGtNode_kind;
            __result407__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value719=_inf_value19));
            if(right_683) { right_683 = come_decrement_ref_count2(right_683, ((struct sNode*)right_683)->finalize, ((struct sNode*)right_683)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value714,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value719) { __right_value719 = come_decrement_ref_count2(__right_value719, ((struct sNode*)__right_value719)->finalize, ((struct sNode*)__right_value719)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result407__;
            if(right_683) { right_683 = come_decrement_ref_count2(right_683, ((struct sNode*)right_683)->finalize, ((struct sNode*)right_683)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45) {
            info->p++;
            sline_real_686=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_687=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_686;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1932, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value20=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value722=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1932, "struct sLtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_673),(struct sNode*)come_increment_ref_count(right_687),(_Bool)0,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLtNode_finalize;
            _inf_value20->clone=(void*)sLtNode_clone;
            _inf_value20->compile=(void*)sLtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLtNode_kind;
            __result410__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value727=_inf_value20));
            if(right_687) { right_687 = come_decrement_ref_count2(right_687, ((struct sNode*)right_687)->finalize, ((struct sNode*)right_687)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value722,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value727) { __right_value727 = come_decrement_ref_count2(__right_value727, ((struct sNode*)__right_value727)->finalize, ((struct sNode*)__right_value727)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result410__;
            if(right_687) { right_687 = come_decrement_ref_count2(right_687, ((struct sNode*)right_687)->finalize, ((struct sNode*)right_687)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_690=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_691=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_690;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1943, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value21=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value730=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1943, "struct sGtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_673),(struct sNode*)come_increment_ref_count(right_691),(_Bool)1,info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sGtEqNode_finalize;
            _inf_value21->clone=(void*)sGtEqNode_clone;
            _inf_value21->compile=(void*)sGtEqNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sGtEqNode_kind;
            __result411__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value731=_inf_value21));
            if(right_691) { right_691 = come_decrement_ref_count2(right_691, ((struct sNode*)right_691)->finalize, ((struct sNode*)right_691)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value730,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value731) { __right_value731 = come_decrement_ref_count2(__right_value731, ((struct sNode*)__right_value731)->finalize, ((struct sNode*)__right_value731)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result411__;
            if(right_691) { right_691 = come_decrement_ref_count2(right_691, ((struct sNode*)right_691)->finalize, ((struct sNode*)right_691)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_692=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_693=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_692;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1954, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value22=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value734=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1954, "struct sLtEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_673),(struct sNode*)come_increment_ref_count(right_693),(_Bool)1,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sLtEqNode_finalize;
            _inf_value22->clone=(void*)sLtEqNode_clone;
            _inf_value22->compile=(void*)sLtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sLtEqNode_kind;
            __result412__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value735=_inf_value22));
            if(right_693) { right_693 = come_decrement_ref_count2(right_693, ((struct sNode*)right_693)->finalize, ((struct sNode*)right_693)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value734,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value735) { __right_value735 = come_decrement_ref_count2(__right_value735, ((struct sNode*)__right_value735)->finalize, ((struct sNode*)__right_value735)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result412__;
            if(right_693) { right_693 = come_decrement_ref_count2(right_693, ((struct sNode*)right_693)->finalize, ((struct sNode*)right_693)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_694=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_695=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_694;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1965, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value23=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value738=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1965, "struct sGtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_673),(struct sNode*)come_increment_ref_count(right_695),(_Bool)1,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sGtNode_finalize;
            _inf_value23->clone=(void*)sGtNode_clone;
            _inf_value23->compile=(void*)sGtNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sGtNode_kind;
            __result413__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value739=_inf_value23));
            if(right_695) { right_695 = come_decrement_ref_count2(right_695, ((struct sNode*)right_695)->finalize, ((struct sNode*)right_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value738,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value739) { __right_value739 = come_decrement_ref_count2(__right_value739, ((struct sNode*)__right_value739)->finalize, ((struct sNode*)__right_value739)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result413__;
            if(right_695) { right_695 = come_decrement_ref_count2(right_695, ((struct sNode*)right_695)->finalize, ((struct sNode*)right_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45) {
            info->p+=2;
            sline_real_696=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_697=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_696;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1976, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value24=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value742=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1976, "struct sLtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_673),(struct sNode*)come_increment_ref_count(right_697),(_Bool)1,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sLtNode_finalize;
            _inf_value24->clone=(void*)sLtNode_clone;
            _inf_value24->compile=(void*)sLtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sLtNode_kind;
            __result414__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value743=_inf_value24));
            if(right_697) { right_697 = come_decrement_ref_count2(right_697, ((struct sNode*)right_697)->finalize, ((struct sNode*)right_697)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value742,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value743) { __right_value743 = come_decrement_ref_count2(__right_value743, ((struct sNode*)__right_value743)->finalize, ((struct sNode*)__right_value743)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result414__;
            if(right_697) { right_697 = come_decrement_ref_count2(right_697, ((struct sNode*)right_697)->finalize, ((struct sNode*)right_697)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result415__ = gComeFunResultObject = __result_obj__ = node_673;
    if(node_673) { node_673 = come_decrement_ref_count2(node_673, ((struct sNode*)node_673)->finalize, ((struct sNode*)node_673)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result415__;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
struct sGtEqNode* __result399__;
void* __right_value699 = (void*)0;
struct sGtEqNode* result_677;
void* __right_value700 = (void*)0;
char* __dec_obj324;
void* __right_value701 = (void*)0;
struct sNode* __dec_obj325;
void* __right_value702 = (void*)0;
struct sNode* __dec_obj326;
struct sGtEqNode* __result400__;
    if(    self==(void*)0) {
        __result399__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result399__;
    }
    result_677=(struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "struct sGtEqNode", sGtEqNode_finalize, sGtEqNode_clone, sGtEqNode_get_hash_key, sGtEqNode_equals));
    if(    self!=((void*)0)) {
        result_677->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj324=result_677->sname;
        result_677->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_677->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_677->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj325=result_677->mLeft;
        result_677->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj325) { __dec_obj325 = come_decrement_ref_count2(__dec_obj325, ((struct sNode*)__dec_obj325)->finalize, ((struct sNode*)__dec_obj325)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj326=result_677->mRight;
        result_677->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result400__ = gComeFunResultObject = __result_obj__ = result_677;
    come_call_finalizer3(result_677,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

static unsigned int sGtEqNode_get_hash_key(struct sGtEqNode* self){
unsigned int result_676;
    result_676=0;
    result_676+=int_get_hash_key(((int)self->sline));
    result_676+=int_get_hash_key(((int)self->sname));
    result_676+=int_get_hash_key(((int)self->sline_real));
    result_676+=int_get_hash_key(((int)self->mQuote));
    result_676+=int_get_hash_key(((int)self->mLeft));
    result_676+=int_get_hash_key(((int)self->mRight));
    return result_676;
}

static _Bool sGtEqNode_equals(struct sGtEqNode* left, struct sGtEqNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
struct sLtEqNode* __result402__;
void* __right_value707 = (void*)0;
struct sLtEqNode* result_681;
void* __right_value708 = (void*)0;
char* __dec_obj327;
void* __right_value709 = (void*)0;
struct sNode* __dec_obj328;
void* __right_value710 = (void*)0;
struct sNode* __dec_obj329;
struct sLtEqNode* __result403__;
    if(    self==(void*)0) {
        __result402__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result402__;
    }
    result_681=(struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "struct sLtEqNode", sLtEqNode_finalize, sLtEqNode_clone, sLtEqNode_get_hash_key, sLtEqNode_equals));
    if(    self!=((void*)0)) {
        result_681->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj327=result_681->sname;
        result_681->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_681->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_681->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj328=result_681->mLeft;
        result_681->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj328) { __dec_obj328 = come_decrement_ref_count2(__dec_obj328, ((struct sNode*)__dec_obj328)->finalize, ((struct sNode*)__dec_obj328)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj329=result_681->mRight;
        result_681->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj329) { __dec_obj329 = come_decrement_ref_count2(__dec_obj329, ((struct sNode*)__dec_obj329)->finalize, ((struct sNode*)__dec_obj329)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result403__ = gComeFunResultObject = __result_obj__ = result_681;
    come_call_finalizer3(result_681,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

static unsigned int sLtEqNode_get_hash_key(struct sLtEqNode* self){
unsigned int result_680;
    result_680=0;
    result_680+=int_get_hash_key(((int)self->sline));
    result_680+=int_get_hash_key(((int)self->sname));
    result_680+=int_get_hash_key(((int)self->sline_real));
    result_680+=int_get_hash_key(((int)self->mQuote));
    result_680+=int_get_hash_key(((int)self->mLeft));
    result_680+=int_get_hash_key(((int)self->mRight));
    return result_680;
}

static _Bool sLtEqNode_equals(struct sLtEqNode* left, struct sLtEqNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__=(void*)0;
struct sGtNode* __result405__;
void* __right_value715 = (void*)0;
struct sGtNode* result_685;
void* __right_value716 = (void*)0;
char* __dec_obj330;
void* __right_value717 = (void*)0;
struct sNode* __dec_obj331;
void* __right_value718 = (void*)0;
struct sNode* __dec_obj332;
struct sGtNode* __result406__;
    if(    self==(void*)0) {
        __result405__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result405__;
    }
    result_685=(struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "struct sGtNode", sGtNode_finalize, sGtNode_clone, sGtNode_get_hash_key, sGtNode_equals));
    if(    self!=((void*)0)) {
        result_685->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj330=result_685->sname;
        result_685->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_685->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_685->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj331=result_685->mLeft;
        result_685->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj331) { __dec_obj331 = come_decrement_ref_count2(__dec_obj331, ((struct sNode*)__dec_obj331)->finalize, ((struct sNode*)__dec_obj331)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj332=result_685->mRight;
        result_685->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj332) { __dec_obj332 = come_decrement_ref_count2(__dec_obj332, ((struct sNode*)__dec_obj332)->finalize, ((struct sNode*)__dec_obj332)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result406__ = gComeFunResultObject = __result_obj__ = result_685;
    come_call_finalizer3(result_685,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

static unsigned int sGtNode_get_hash_key(struct sGtNode* self){
unsigned int result_684;
    result_684=0;
    result_684+=int_get_hash_key(((int)self->sline));
    result_684+=int_get_hash_key(((int)self->sname));
    result_684+=int_get_hash_key(((int)self->sline_real));
    result_684+=int_get_hash_key(((int)self->mQuote));
    result_684+=int_get_hash_key(((int)self->mLeft));
    result_684+=int_get_hash_key(((int)self->mRight));
    return result_684;
}

static _Bool sGtNode_equals(struct sGtNode* left, struct sGtNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__=(void*)0;
struct sLtNode* __result408__;
void* __right_value723 = (void*)0;
struct sLtNode* result_689;
void* __right_value724 = (void*)0;
char* __dec_obj333;
void* __right_value725 = (void*)0;
struct sNode* __dec_obj334;
void* __right_value726 = (void*)0;
struct sNode* __dec_obj335;
struct sLtNode* __result409__;
    if(    self==(void*)0) {
        __result408__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result408__;
    }
    result_689=(struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "struct sLtNode", sLtNode_finalize, sLtNode_clone, sLtNode_get_hash_key, sLtNode_equals));
    if(    self!=((void*)0)) {
        result_689->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj333=result_689->sname;
        result_689->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_689->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_689->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj334=result_689->mLeft;
        result_689->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj334) { __dec_obj334 = come_decrement_ref_count2(__dec_obj334, ((struct sNode*)__dec_obj334)->finalize, ((struct sNode*)__dec_obj334)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj335=result_689->mRight;
        result_689->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj335) { __dec_obj335 = come_decrement_ref_count2(__dec_obj335, ((struct sNode*)__dec_obj335)->finalize, ((struct sNode*)__dec_obj335)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result409__ = gComeFunResultObject = __result_obj__ = result_689;
    come_call_finalizer3(result_689,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

static unsigned int sLtNode_get_hash_key(struct sLtNode* self){
unsigned int result_688;
    result_688=0;
    result_688+=int_get_hash_key(((int)self->sline));
    result_688+=int_get_hash_key(((int)self->sname));
    result_688+=int_get_hash_key(((int)self->sline_real));
    result_688+=int_get_hash_key(((int)self->mQuote));
    result_688+=int_get_hash_key(((int)self->mLeft));
    result_688+=int_get_hash_key(((int)self->mRight));
    return result_688;
}

static _Bool sLtNode_equals(struct sLtNode* left, struct sLtNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value744 = (void*)0;
struct sNode* node_698;
int sline_real_699;
void* __right_value745 = (void*)0;
struct sNode* right_700;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* __right_value752 = (void*)0;
struct sNode* __result418__;
int sline_real_703;
void* __right_value753 = (void*)0;
struct sNode* right_704;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* __right_value760 = (void*)0;
struct sNode* __result421__;
int sline_real_707;
void* __right_value761 = (void*)0;
struct sNode* right_708;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* __right_value768 = (void*)0;
struct sNode* __result424__;
int sline_real_711;
void* __right_value769 = (void*)0;
struct sNode* right_712;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* __right_value776 = (void*)0;
struct sNode* __result427__;
int sline_real_715;
void* __right_value777 = (void*)0;
struct sNode* right_716;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* __right_value780 = (void*)0;
struct sNode* __result428__;
int sline_real_717;
void* __right_value781 = (void*)0;
struct sNode* right_718;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* __right_value784 = (void*)0;
struct sNode* __result429__;
int sline_real_719;
void* __right_value785 = (void*)0;
struct sNode* right_720;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* __right_value788 = (void*)0;
struct sNode* __result430__;
int sline_real_721;
void* __right_value789 = (void*)0;
struct sNode* right_722;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* __right_value792 = (void*)0;
struct sNode* __result431__;
struct sNode* __result432__;
    parse_sharp_v5(info);
    node_698=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_699=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_700=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_699;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2006, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value25=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value747=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2006, "struct sEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_698),(struct sNode*)come_increment_ref_count(right_700),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result418__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value752=_inf_value25));
            if(right_700) { right_700 = come_decrement_ref_count2(right_700, ((struct sNode*)right_700)->finalize, ((struct sNode*)right_700)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value747,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value752) { __right_value752 = come_decrement_ref_count2(__right_value752, ((struct sNode*)__right_value752)->finalize, ((struct sNode*)__right_value752)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result418__;
            if(right_700) { right_700 = come_decrement_ref_count2(right_700, ((struct sNode*)right_700)->finalize, ((struct sNode*)right_700)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==61&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_703=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_704=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_703;
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2017, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value26=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value755=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2017, "struct sEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_698),(struct sNode*)come_increment_ref_count(right_704),(_Bool)0,info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEqNode_finalize;
            _inf_value26->clone=(void*)sEqNode_clone;
            _inf_value26->compile=(void*)sEqNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEqNode_kind;
            __result421__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value760=_inf_value26));
            if(right_704) { right_704 = come_decrement_ref_count2(right_704, ((struct sNode*)right_704)->finalize, ((struct sNode*)right_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value755,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value760) { __right_value760 = come_decrement_ref_count2(__right_value760, ((struct sNode*)__right_value760)->finalize, ((struct sNode*)__right_value760)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result421__;
            if(right_704) { right_704 = come_decrement_ref_count2(right_704, ((struct sNode*)right_704)->finalize, ((struct sNode*)right_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_707=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_708=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_707;
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2028, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value27=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value763=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2028, "struct sNotEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_698),(struct sNode*)come_increment_ref_count(right_708),(_Bool)0,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNotEq2Node_finalize;
            _inf_value27->clone=(void*)sNotEq2Node_clone;
            _inf_value27->compile=(void*)sNotEq2Node_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNotEq2Node_kind;
            __result424__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value768=_inf_value27));
            if(right_708) { right_708 = come_decrement_ref_count2(right_708, ((struct sNode*)right_708)->finalize, ((struct sNode*)right_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value763,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value768) { __right_value768 = come_decrement_ref_count2(__right_value768, ((struct sNode*)__right_value768)->finalize, ((struct sNode*)__right_value768)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result424__;
            if(right_708) { right_708 = come_decrement_ref_count2(right_708, ((struct sNode*)right_708)->finalize, ((struct sNode*)right_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_711=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_712=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_711;
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2039, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value28=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value771=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2039, "struct sNotEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_698),(struct sNode*)come_increment_ref_count(right_712),(_Bool)0,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEqNode_finalize;
            _inf_value28->clone=(void*)sNotEqNode_clone;
            _inf_value28->compile=(void*)sNotEqNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEqNode_kind;
            __result427__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value776=_inf_value28));
            if(right_712) { right_712 = come_decrement_ref_count2(right_712, ((struct sNode*)right_712)->finalize, ((struct sNode*)right_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value771,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value776) { __right_value776 = come_decrement_ref_count2(__right_value776, ((struct sNode*)__right_value776)->finalize, ((struct sNode*)__right_value776)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result427__;
            if(right_712) { right_712 = come_decrement_ref_count2(right_712, ((struct sNode*)right_712)->finalize, ((struct sNode*)right_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_715=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_716=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_715;
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2050, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value29=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value779=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2050, "struct sEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_698),(struct sNode*)come_increment_ref_count(right_716),(_Bool)1,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sEq2Node_finalize;
            _inf_value29->clone=(void*)sEq2Node_clone;
            _inf_value29->compile=(void*)sEq2Node_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sEq2Node_kind;
            __result428__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value780=_inf_value29));
            if(right_716) { right_716 = come_decrement_ref_count2(right_716, ((struct sNode*)right_716)->finalize, ((struct sNode*)right_716)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value779,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value780) { __right_value780 = come_decrement_ref_count2(__right_value780, ((struct sNode*)__right_value780)->finalize, ((struct sNode*)__right_value780)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result428__;
            if(right_716) { right_716 = come_decrement_ref_count2(right_716, ((struct sNode*)right_716)->finalize, ((struct sNode*)right_716)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_717=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_718=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_717;
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2061, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value30=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value783=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2061, "struct sEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_698),(struct sNode*)come_increment_ref_count(right_718),(_Bool)1,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEqNode_finalize;
            _inf_value30->clone=(void*)sEqNode_clone;
            _inf_value30->compile=(void*)sEqNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEqNode_kind;
            __result429__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value784=_inf_value30));
            if(right_718) { right_718 = come_decrement_ref_count2(right_718, ((struct sNode*)right_718)->finalize, ((struct sNode*)right_718)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value783,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value784) { __right_value784 = come_decrement_ref_count2(__right_value784, ((struct sNode*)__right_value784)->finalize, ((struct sNode*)__right_value784)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result429__;
            if(right_718) { right_718 = come_decrement_ref_count2(right_718, ((struct sNode*)right_718)->finalize, ((struct sNode*)right_718)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_719=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_720=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_719;
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2072, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value31=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value787=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2072, "struct sNotEq2Node*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_698),(struct sNode*)come_increment_ref_count(right_720),(_Bool)1,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sNotEq2Node_finalize;
            _inf_value31->clone=(void*)sNotEq2Node_clone;
            _inf_value31->compile=(void*)sNotEq2Node_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sNotEq2Node_kind;
            __result430__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value788=_inf_value31));
            if(right_720) { right_720 = come_decrement_ref_count2(right_720, ((struct sNode*)right_720)->finalize, ((struct sNode*)right_720)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value787,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value788) { __right_value788 = come_decrement_ref_count2(__right_value788, ((struct sNode*)__right_value788)->finalize, ((struct sNode*)__right_value788)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result430__;
            if(right_720) { right_720 = come_decrement_ref_count2(right_720, ((struct sNode*)right_720)->finalize, ((struct sNode*)right_720)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_721=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_722=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_721;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2083, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value32=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value791=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2083, "struct sNotEqNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_698),(struct sNode*)come_increment_ref_count(right_722),(_Bool)1,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEqNode_finalize;
            _inf_value32->clone=(void*)sNotEqNode_clone;
            _inf_value32->compile=(void*)sNotEqNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEqNode_kind;
            __result431__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value792=_inf_value32));
            if(right_722) { right_722 = come_decrement_ref_count2(right_722, ((struct sNode*)right_722)->finalize, ((struct sNode*)right_722)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value791,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value792) { __right_value792 = come_decrement_ref_count2(__right_value792, ((struct sNode*)__right_value792)->finalize, ((struct sNode*)__right_value792)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result431__;
            if(right_722) { right_722 = come_decrement_ref_count2(right_722, ((struct sNode*)right_722)->finalize, ((struct sNode*)right_722)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result432__ = gComeFunResultObject = __result_obj__ = node_698;
    if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result432__;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__=(void*)0;
struct sEq2Node* __result416__;
void* __right_value748 = (void*)0;
struct sEq2Node* result_702;
void* __right_value749 = (void*)0;
char* __dec_obj336;
void* __right_value750 = (void*)0;
struct sNode* __dec_obj337;
void* __right_value751 = (void*)0;
struct sNode* __dec_obj338;
struct sEq2Node* __result417__;
    if(    self==(void*)0) {
        __result416__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result416__;
    }
    result_702=(struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "struct sEq2Node", sEq2Node_finalize, sEq2Node_clone, sEq2Node_get_hash_key, sEq2Node_equals));
    if(    self!=((void*)0)) {
        result_702->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj336=result_702->sname;
        result_702->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_702->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_702->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj337=result_702->mLeft;
        result_702->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj337) { __dec_obj337 = come_decrement_ref_count2(__dec_obj337, ((struct sNode*)__dec_obj337)->finalize, ((struct sNode*)__dec_obj337)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj338=result_702->mRight;
        result_702->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj338) { __dec_obj338 = come_decrement_ref_count2(__dec_obj338, ((struct sNode*)__dec_obj338)->finalize, ((struct sNode*)__dec_obj338)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result417__ = gComeFunResultObject = __result_obj__ = result_702;
    come_call_finalizer3(result_702,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result417__;
}

static unsigned int sEq2Node_get_hash_key(struct sEq2Node* self){
unsigned int result_701;
    result_701=0;
    result_701+=int_get_hash_key(((int)self->sline));
    result_701+=int_get_hash_key(((int)self->sname));
    result_701+=int_get_hash_key(((int)self->sline_real));
    result_701+=int_get_hash_key(((int)self->mQuote));
    result_701+=int_get_hash_key(((int)self->mLeft));
    result_701+=int_get_hash_key(((int)self->mRight));
    return result_701;
}

static _Bool sEq2Node_equals(struct sEq2Node* left, struct sEq2Node* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__=(void*)0;
struct sEqNode* __result419__;
void* __right_value756 = (void*)0;
struct sEqNode* result_706;
void* __right_value757 = (void*)0;
char* __dec_obj339;
void* __right_value758 = (void*)0;
struct sNode* __dec_obj340;
void* __right_value759 = (void*)0;
struct sNode* __dec_obj341;
struct sEqNode* __result420__;
    if(    self==(void*)0) {
        __result419__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result419__;
    }
    result_706=(struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "struct sEqNode", sEqNode_finalize, sEqNode_clone, sEqNode_get_hash_key, sEqNode_equals));
    if(    self!=((void*)0)) {
        result_706->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj339=result_706->sname;
        result_706->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_706->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_706->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj340=result_706->mLeft;
        result_706->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj340) { __dec_obj340 = come_decrement_ref_count2(__dec_obj340, ((struct sNode*)__dec_obj340)->finalize, ((struct sNode*)__dec_obj340)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj341=result_706->mRight;
        result_706->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj341) { __dec_obj341 = come_decrement_ref_count2(__dec_obj341, ((struct sNode*)__dec_obj341)->finalize, ((struct sNode*)__dec_obj341)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result420__ = gComeFunResultObject = __result_obj__ = result_706;
    come_call_finalizer3(result_706,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result420__;
}

static unsigned int sEqNode_get_hash_key(struct sEqNode* self){
unsigned int result_705;
    result_705=0;
    result_705+=int_get_hash_key(((int)self->sline));
    result_705+=int_get_hash_key(((int)self->sname));
    result_705+=int_get_hash_key(((int)self->sline_real));
    result_705+=int_get_hash_key(((int)self->mQuote));
    result_705+=int_get_hash_key(((int)self->mLeft));
    result_705+=int_get_hash_key(((int)self->mRight));
    return result_705;
}

static _Bool sEqNode_equals(struct sEqNode* left, struct sEqNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
struct sNotEq2Node* __result422__;
void* __right_value764 = (void*)0;
struct sNotEq2Node* result_710;
void* __right_value765 = (void*)0;
char* __dec_obj342;
void* __right_value766 = (void*)0;
struct sNode* __dec_obj343;
void* __right_value767 = (void*)0;
struct sNode* __dec_obj344;
struct sNotEq2Node* __result423__;
    if(    self==(void*)0) {
        __result422__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result422__;
    }
    result_710=(struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "struct sNotEq2Node", sNotEq2Node_finalize, sNotEq2Node_clone, sNotEq2Node_get_hash_key, sNotEq2Node_equals));
    if(    self!=((void*)0)) {
        result_710->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj342=result_710->sname;
        result_710->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_710->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_710->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj343=result_710->mLeft;
        result_710->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj343) { __dec_obj343 = come_decrement_ref_count2(__dec_obj343, ((struct sNode*)__dec_obj343)->finalize, ((struct sNode*)__dec_obj343)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj344=result_710->mRight;
        result_710->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj344) { __dec_obj344 = come_decrement_ref_count2(__dec_obj344, ((struct sNode*)__dec_obj344)->finalize, ((struct sNode*)__dec_obj344)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result423__ = gComeFunResultObject = __result_obj__ = result_710;
    come_call_finalizer3(result_710,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result423__;
}

static unsigned int sNotEq2Node_get_hash_key(struct sNotEq2Node* self){
unsigned int result_709;
    result_709=0;
    result_709+=int_get_hash_key(((int)self->sline));
    result_709+=int_get_hash_key(((int)self->sname));
    result_709+=int_get_hash_key(((int)self->sline_real));
    result_709+=int_get_hash_key(((int)self->mQuote));
    result_709+=int_get_hash_key(((int)self->mLeft));
    result_709+=int_get_hash_key(((int)self->mRight));
    return result_709;
}

static _Bool sNotEq2Node_equals(struct sNotEq2Node* left, struct sNotEq2Node* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
struct sNotEqNode* __result425__;
void* __right_value772 = (void*)0;
struct sNotEqNode* result_714;
void* __right_value773 = (void*)0;
char* __dec_obj345;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj346;
void* __right_value775 = (void*)0;
struct sNode* __dec_obj347;
struct sNotEqNode* __result426__;
    if(    self==(void*)0) {
        __result425__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result425__;
    }
    result_714=(struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "struct sNotEqNode", sNotEqNode_finalize, sNotEqNode_clone, sNotEqNode_get_hash_key, sNotEqNode_equals));
    if(    self!=((void*)0)) {
        result_714->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj345=result_714->sname;
        result_714->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_714->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_714->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj346=result_714->mLeft;
        result_714->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj346) { __dec_obj346 = come_decrement_ref_count2(__dec_obj346, ((struct sNode*)__dec_obj346)->finalize, ((struct sNode*)__dec_obj346)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj347=result_714->mRight;
        result_714->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj347) { __dec_obj347 = come_decrement_ref_count2(__dec_obj347, ((struct sNode*)__dec_obj347)->finalize, ((struct sNode*)__dec_obj347)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result426__ = gComeFunResultObject = __result_obj__ = result_714;
    come_call_finalizer3(result_714,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result426__;
}

static unsigned int sNotEqNode_get_hash_key(struct sNotEqNode* self){
unsigned int result_713;
    result_713=0;
    result_713+=int_get_hash_key(((int)self->sline));
    result_713+=int_get_hash_key(((int)self->sname));
    result_713+=int_get_hash_key(((int)self->sline_real));
    result_713+=int_get_hash_key(((int)self->mQuote));
    result_713+=int_get_hash_key(((int)self->mLeft));
    result_713+=int_get_hash_key(((int)self->mRight));
    return result_713;
}

static _Bool sNotEqNode_equals(struct sNotEqNode* left, struct sNotEqNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value793 = (void*)0;
struct sNode* node_723;
int sline_real_724;
void* __right_value794 = (void*)0;
struct sNode* right_725;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* __right_value801 = (void*)0;
struct sNode* __result435__;
int sline_real_728;
void* __right_value802 = (void*)0;
struct sNode* right_729;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* __right_value805 = (void*)0;
struct sNode* __result436__;
struct sNode* __result437__;
    parse_sharp_v5(info);
    node_723=(struct sNode*)come_increment_ref_count(eq_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_723->terminated(node_723->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            sline_real_724=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_725=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_724;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2113, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value33=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value796=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2113, "struct sAndNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_723),(struct sNode*)come_increment_ref_count(right_725),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result435__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value801=_inf_value33));
            if(right_725) { right_725 = come_decrement_ref_count2(right_725, ((struct sNode*)right_725)->finalize, ((struct sNode*)right_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_723) { node_723 = come_decrement_ref_count2(node_723, ((struct sNode*)node_723)->finalize, ((struct sNode*)node_723)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value796,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value801) { __right_value801 = come_decrement_ref_count2(__right_value801, ((struct sNode*)__right_value801)->finalize, ((struct sNode*)__right_value801)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result435__;
            if(right_725) { right_725 = come_decrement_ref_count2(right_725, ((struct sNode*)right_725)->finalize, ((struct sNode*)right_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !node_723->terminated(node_723->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_728=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_729=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_728;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2124, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value804=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2124, "struct sAndNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_723),(struct sNode*)come_increment_ref_count(right_729),(_Bool)1,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            __result436__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value805=_inf_value34));
            if(right_729) { right_729 = come_decrement_ref_count2(right_729, ((struct sNode*)right_729)->finalize, ((struct sNode*)right_729)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_723) { node_723 = come_decrement_ref_count2(node_723, ((struct sNode*)node_723)->finalize, ((struct sNode*)node_723)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value804,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value805) { __right_value805 = come_decrement_ref_count2(__right_value805, ((struct sNode*)__right_value805)->finalize, ((struct sNode*)__right_value805)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result436__;
            if(right_729) { right_729 = come_decrement_ref_count2(right_729, ((struct sNode*)right_729)->finalize, ((struct sNode*)right_729)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result437__ = gComeFunResultObject = __result_obj__ = node_723;
    if(node_723) { node_723 = come_decrement_ref_count2(node_723, ((struct sNode*)node_723)->finalize, ((struct sNode*)node_723)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result437__;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__=(void*)0;
struct sAndNode* __result433__;
void* __right_value797 = (void*)0;
struct sAndNode* result_727;
void* __right_value798 = (void*)0;
char* __dec_obj348;
void* __right_value799 = (void*)0;
struct sNode* __dec_obj349;
void* __right_value800 = (void*)0;
struct sNode* __dec_obj350;
struct sAndNode* __result434__;
    if(    self==(void*)0) {
        __result433__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result433__;
    }
    result_727=(struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "struct sAndNode", sAndNode_finalize, sAndNode_clone, sAndNode_get_hash_key, sAndNode_equals));
    if(    self!=((void*)0)) {
        result_727->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj348=result_727->sname;
        result_727->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_727->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_727->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj349=result_727->mLeft;
        result_727->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj349) { __dec_obj349 = come_decrement_ref_count2(__dec_obj349, ((struct sNode*)__dec_obj349)->finalize, ((struct sNode*)__dec_obj349)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj350=result_727->mRight;
        result_727->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj350) { __dec_obj350 = come_decrement_ref_count2(__dec_obj350, ((struct sNode*)__dec_obj350)->finalize, ((struct sNode*)__dec_obj350)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result434__ = gComeFunResultObject = __result_obj__ = result_727;
    come_call_finalizer3(result_727,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result434__;
}

static unsigned int sAndNode_get_hash_key(struct sAndNode* self){
unsigned int result_726;
    result_726=0;
    result_726+=int_get_hash_key(((int)self->sline));
    result_726+=int_get_hash_key(((int)self->sname));
    result_726+=int_get_hash_key(((int)self->sline_real));
    result_726+=int_get_hash_key(((int)self->mQuote));
    result_726+=int_get_hash_key(((int)self->mLeft));
    result_726+=int_get_hash_key(((int)self->mRight));
    return result_726;
}

static _Bool sAndNode_equals(struct sAndNode* left, struct sAndNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value806 = (void*)0;
struct sNode* node_730;
int sline_real_731;
void* __right_value807 = (void*)0;
struct sNode* right_732;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* __right_value814 = (void*)0;
struct sNode* __result440__;
int sline_real_735;
void* __right_value815 = (void*)0;
struct sNode* right_736;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* __right_value818 = (void*)0;
struct sNode* __result441__;
struct sNode* __result442__;
    parse_sharp_v5(info);
    node_730=(struct sNode*)come_increment_ref_count(and_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==94&&*(info->p+1)!=61) {
            info->p++;
            sline_real_731=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_732=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_731;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2154, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value35=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value809=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2154, "struct sXOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_730),(struct sNode*)come_increment_ref_count(right_732),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result440__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value814=_inf_value35));
            if(right_732) { right_732 = come_decrement_ref_count2(right_732, ((struct sNode*)right_732)->finalize, ((struct sNode*)right_732)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_730) { node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value809,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value814) { __right_value814 = come_decrement_ref_count2(__right_value814, ((struct sNode*)__right_value814)->finalize, ((struct sNode*)__right_value814)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result440__;
            if(right_732) { right_732 = come_decrement_ref_count2(right_732, ((struct sNode*)right_732)->finalize, ((struct sNode*)right_732)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_735=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_736=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_735;
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2165, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value817=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2165, "struct sXOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_730),(struct sNode*)come_increment_ref_count(right_736),(_Bool)1,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            __result441__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value818=_inf_value36));
            if(right_736) { right_736 = come_decrement_ref_count2(right_736, ((struct sNode*)right_736)->finalize, ((struct sNode*)right_736)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_730) { node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value817,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value818) { __right_value818 = come_decrement_ref_count2(__right_value818, ((struct sNode*)__right_value818)->finalize, ((struct sNode*)__right_value818)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result441__;
            if(right_736) { right_736 = come_decrement_ref_count2(right_736, ((struct sNode*)right_736)->finalize, ((struct sNode*)right_736)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result442__ = gComeFunResultObject = __result_obj__ = node_730;
    if(node_730) { node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result442__;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__=(void*)0;
struct sXOrNode* __result438__;
void* __right_value810 = (void*)0;
struct sXOrNode* result_734;
void* __right_value811 = (void*)0;
char* __dec_obj351;
void* __right_value812 = (void*)0;
struct sNode* __dec_obj352;
void* __right_value813 = (void*)0;
struct sNode* __dec_obj353;
struct sXOrNode* __result439__;
    if(    self==(void*)0) {
        __result438__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result438__;
    }
    result_734=(struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "struct sXOrNode", sXOrNode_finalize, sXOrNode_clone, sXOrNode_get_hash_key, sXOrNode_equals));
    if(    self!=((void*)0)) {
        result_734->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj351=result_734->sname;
        result_734->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_734->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_734->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj352=result_734->mLeft;
        result_734->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj352) { __dec_obj352 = come_decrement_ref_count2(__dec_obj352, ((struct sNode*)__dec_obj352)->finalize, ((struct sNode*)__dec_obj352)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj353=result_734->mRight;
        result_734->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj353) { __dec_obj353 = come_decrement_ref_count2(__dec_obj353, ((struct sNode*)__dec_obj353)->finalize, ((struct sNode*)__dec_obj353)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result439__ = gComeFunResultObject = __result_obj__ = result_734;
    come_call_finalizer3(result_734,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result439__;
}

static unsigned int sXOrNode_get_hash_key(struct sXOrNode* self){
unsigned int result_733;
    result_733=0;
    result_733+=int_get_hash_key(((int)self->sline));
    result_733+=int_get_hash_key(((int)self->sname));
    result_733+=int_get_hash_key(((int)self->sline_real));
    result_733+=int_get_hash_key(((int)self->mQuote));
    result_733+=int_get_hash_key(((int)self->mLeft));
    result_733+=int_get_hash_key(((int)self->mRight));
    return result_733;
}

static _Bool sXOrNode_equals(struct sXOrNode* left, struct sXOrNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value819 = (void*)0;
struct sNode* node_737;
int sline_real_738;
void* __right_value820 = (void*)0;
struct sNode* right_739;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* __right_value827 = (void*)0;
struct sNode* __result445__;
int sline_real_742;
void* __right_value828 = (void*)0;
struct sNode* right_743;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* __right_value831 = (void*)0;
struct sNode* __result446__;
struct sNode* __result447__;
    parse_sharp_v5(info);
    node_737=(struct sNode*)come_increment_ref_count(xor_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            sline_real_738=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_739=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_738;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2195, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value37=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value822=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2195, "struct sOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_737),(struct sNode*)come_increment_ref_count(right_739),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result445__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value827=_inf_value37));
            if(right_739) { right_739 = come_decrement_ref_count2(right_739, ((struct sNode*)right_739)->finalize, ((struct sNode*)right_739)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_737) { node_737 = come_decrement_ref_count2(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value822,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value827) { __right_value827 = come_decrement_ref_count2(__right_value827, ((struct sNode*)__right_value827)->finalize, ((struct sNode*)__right_value827)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result445__;
            if(right_739) { right_739 = come_decrement_ref_count2(right_739, ((struct sNode*)right_739)->finalize, ((struct sNode*)right_739)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
            info->p+=2;
            sline_real_742=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_743=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_742;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2206, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value830=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2206, "struct sOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_737),(struct sNode*)come_increment_ref_count(right_743),(_Bool)1,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            __result446__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value831=_inf_value38));
            if(right_743) { right_743 = come_decrement_ref_count2(right_743, ((struct sNode*)right_743)->finalize, ((struct sNode*)right_743)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_737) { node_737 = come_decrement_ref_count2(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value830,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value831) { __right_value831 = come_decrement_ref_count2(__right_value831, ((struct sNode*)__right_value831)->finalize, ((struct sNode*)__right_value831)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result446__;
            if(right_743) { right_743 = come_decrement_ref_count2(right_743, ((struct sNode*)right_743)->finalize, ((struct sNode*)right_743)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result447__ = gComeFunResultObject = __result_obj__ = node_737;
    if(node_737) { node_737 = come_decrement_ref_count2(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result447__;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__=(void*)0;
struct sOrNode* __result443__;
void* __right_value823 = (void*)0;
struct sOrNode* result_741;
void* __right_value824 = (void*)0;
char* __dec_obj354;
void* __right_value825 = (void*)0;
struct sNode* __dec_obj355;
void* __right_value826 = (void*)0;
struct sNode* __dec_obj356;
struct sOrNode* __result444__;
    if(    self==(void*)0) {
        __result443__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result443__;
    }
    result_741=(struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "struct sOrNode", sOrNode_finalize, sOrNode_clone, sOrNode_get_hash_key, sOrNode_equals));
    if(    self!=((void*)0)) {
        result_741->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj354=result_741->sname;
        result_741->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_741->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_741->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj355=result_741->mLeft;
        result_741->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj355) { __dec_obj355 = come_decrement_ref_count2(__dec_obj355, ((struct sNode*)__dec_obj355)->finalize, ((struct sNode*)__dec_obj355)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj356=result_741->mRight;
        result_741->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj356) { __dec_obj356 = come_decrement_ref_count2(__dec_obj356, ((struct sNode*)__dec_obj356)->finalize, ((struct sNode*)__dec_obj356)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result444__ = gComeFunResultObject = __result_obj__ = result_741;
    come_call_finalizer3(result_741,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result444__;
}

static unsigned int sOrNode_get_hash_key(struct sOrNode* self){
unsigned int result_740;
    result_740=0;
    result_740+=int_get_hash_key(((int)self->sline));
    result_740+=int_get_hash_key(((int)self->sname));
    result_740+=int_get_hash_key(((int)self->sline_real));
    result_740+=int_get_hash_key(((int)self->mQuote));
    result_740+=int_get_hash_key(((int)self->mLeft));
    result_740+=int_get_hash_key(((int)self->mRight));
    return result_740;
}

static _Bool sOrNode_equals(struct sOrNode* left, struct sOrNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value832 = (void*)0;
struct sNode* node_744;
int sline_real_745;
void* __right_value833 = (void*)0;
struct sNode* right_746;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* __right_value840 = (void*)0;
struct sNode* __result450__;
int sline_real_749;
void* __right_value841 = (void*)0;
struct sNode* right_750;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* __right_value844 = (void*)0;
struct sNode* __result451__;
struct sNode* __result452__;
    parse_sharp_v5(info);
    node_744=(struct sNode*)come_increment_ref_count(or_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            sline_real_745=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_746=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_745;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2236, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value39=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value835=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2236, "struct sAndAndNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_744),(struct sNode*)come_increment_ref_count(right_746),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result450__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value840=_inf_value39));
            if(right_746) { right_746 = come_decrement_ref_count2(right_746, ((struct sNode*)right_746)->finalize, ((struct sNode*)right_746)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_744) { node_744 = come_decrement_ref_count2(node_744, ((struct sNode*)node_744)->finalize, ((struct sNode*)node_744)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value835,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value840) { __right_value840 = come_decrement_ref_count2(__right_value840, ((struct sNode*)__right_value840)->finalize, ((struct sNode*)__right_value840)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result450__;
            if(right_746) { right_746 = come_decrement_ref_count2(right_746, ((struct sNode*)right_746)->finalize, ((struct sNode*)right_746)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
            info->p+=3;
            sline_real_749=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_750=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_749;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2247, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value843=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2247, "struct sAndAndNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_744),(struct sNode*)come_increment_ref_count(right_750),(_Bool)1,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            __result451__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value844=_inf_value40));
            if(right_750) { right_750 = come_decrement_ref_count2(right_750, ((struct sNode*)right_750)->finalize, ((struct sNode*)right_750)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_744) { node_744 = come_decrement_ref_count2(node_744, ((struct sNode*)node_744)->finalize, ((struct sNode*)node_744)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value843,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value844) { __right_value844 = come_decrement_ref_count2(__right_value844, ((struct sNode*)__right_value844)->finalize, ((struct sNode*)__right_value844)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result451__;
            if(right_750) { right_750 = come_decrement_ref_count2(right_750, ((struct sNode*)right_750)->finalize, ((struct sNode*)right_750)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result452__ = gComeFunResultObject = __result_obj__ = node_744;
    if(node_744) { node_744 = come_decrement_ref_count2(node_744, ((struct sNode*)node_744)->finalize, ((struct sNode*)node_744)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result452__;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
struct sAndAndNode* __result448__;
void* __right_value836 = (void*)0;
struct sAndAndNode* result_748;
void* __right_value837 = (void*)0;
char* __dec_obj357;
void* __right_value838 = (void*)0;
struct sNode* __dec_obj358;
void* __right_value839 = (void*)0;
struct sNode* __dec_obj359;
struct sAndAndNode* __result449__;
    if(    self==(void*)0) {
        __result448__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result448__;
    }
    result_748=(struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "struct sAndAndNode", sAndAndNode_finalize, sAndAndNode_clone, sAndAndNode_get_hash_key, sAndAndNode_equals));
    if(    self!=((void*)0)) {
        result_748->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj357=result_748->sname;
        result_748->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_748->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj358=result_748->mLeft;
        result_748->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj358) { __dec_obj358 = come_decrement_ref_count2(__dec_obj358, ((struct sNode*)__dec_obj358)->finalize, ((struct sNode*)__dec_obj358)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj359=result_748->mRight;
        result_748->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj359) { __dec_obj359 = come_decrement_ref_count2(__dec_obj359, ((struct sNode*)__dec_obj359)->finalize, ((struct sNode*)__dec_obj359)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result449__ = gComeFunResultObject = __result_obj__ = result_748;
    come_call_finalizer3(result_748,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result449__;
}

static unsigned int sAndAndNode_get_hash_key(struct sAndAndNode* self){
unsigned int result_747;
    result_747=0;
    result_747+=int_get_hash_key(((int)self->sline));
    result_747+=int_get_hash_key(((int)self->sname));
    result_747+=int_get_hash_key(((int)self->sline_real));
    result_747+=int_get_hash_key(((int)self->mQuote));
    result_747+=int_get_hash_key(((int)self->mLeft));
    result_747+=int_get_hash_key(((int)self->mRight));
    return result_747;
}

static _Bool sAndAndNode_equals(struct sAndAndNode* left, struct sAndAndNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value845 = (void*)0;
struct sNode* node_751;
int sline_real_752;
void* __right_value846 = (void*)0;
struct sNode* right_753;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* __right_value853 = (void*)0;
struct sNode* __result455__;
int sline_real_756;
void* __right_value854 = (void*)0;
struct sNode* right_757;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* __right_value857 = (void*)0;
struct sNode* __result456__;
struct sNode* __result457__;
    parse_sharp_v5(info);
    node_751=(struct sNode*)come_increment_ref_count(andand_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            sline_real_752=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_753=(struct sNode*)come_increment_ref_count(oror_exp(info));
            info->sline_real=sline_real_752;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2277, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value41=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value848=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2277, "struct sOrOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_751),(struct sNode*)come_increment_ref_count(right_753),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result455__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value853=_inf_value41));
            if(right_753) { right_753 = come_decrement_ref_count2(right_753, ((struct sNode*)right_753)->finalize, ((struct sNode*)right_753)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_751) { node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value848,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value853) { __right_value853 = come_decrement_ref_count2(__right_value853, ((struct sNode*)__right_value853)->finalize, ((struct sNode*)__right_value853)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result455__;
            if(right_753) { right_753 = come_decrement_ref_count2(right_753, ((struct sNode*)right_753)->finalize, ((struct sNode*)right_753)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
            info->p+=3;
            sline_real_756=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_757=(struct sNode*)come_increment_ref_count(oror_exp(info));
            info->sline_real=sline_real_756;
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2288, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value856=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2288, "struct sOrOrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_751),(struct sNode*)come_increment_ref_count(right_757),(_Bool)1,info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            __result456__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value857=_inf_value42));
            if(right_757) { right_757 = come_decrement_ref_count2(right_757, ((struct sNode*)right_757)->finalize, ((struct sNode*)right_757)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_751) { node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value856,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value857) { __right_value857 = come_decrement_ref_count2(__right_value857, ((struct sNode*)__right_value857)->finalize, ((struct sNode*)__right_value857)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result456__;
            if(right_757) { right_757 = come_decrement_ref_count2(right_757, ((struct sNode*)right_757)->finalize, ((struct sNode*)right_757)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result457__ = gComeFunResultObject = __result_obj__ = node_751;
    if(node_751) { node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result457__;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
struct sOrOrNode* __result453__;
void* __right_value849 = (void*)0;
struct sOrOrNode* result_755;
void* __right_value850 = (void*)0;
char* __dec_obj360;
void* __right_value851 = (void*)0;
struct sNode* __dec_obj361;
void* __right_value852 = (void*)0;
struct sNode* __dec_obj362;
struct sOrOrNode* __result454__;
    if(    self==(void*)0) {
        __result453__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result453__;
    }
    result_755=(struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "struct sOrOrNode", sOrOrNode_finalize, sOrOrNode_clone, sOrOrNode_get_hash_key, sOrOrNode_equals));
    if(    self!=((void*)0)) {
        result_755->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj360=result_755->sname;
        result_755->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_755->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_755->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj361=result_755->mLeft;
        result_755->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj361) { __dec_obj361 = come_decrement_ref_count2(__dec_obj361, ((struct sNode*)__dec_obj361)->finalize, ((struct sNode*)__dec_obj361)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj362=result_755->mRight;
        result_755->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj362) { __dec_obj362 = come_decrement_ref_count2(__dec_obj362, ((struct sNode*)__dec_obj362)->finalize, ((struct sNode*)__dec_obj362)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result454__ = gComeFunResultObject = __result_obj__ = result_755;
    come_call_finalizer3(result_755,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result454__;
}

static unsigned int sOrOrNode_get_hash_key(struct sOrOrNode* self){
unsigned int result_754;
    result_754=0;
    result_754+=int_get_hash_key(((int)self->sline));
    result_754+=int_get_hash_key(((int)self->sname));
    result_754+=int_get_hash_key(((int)self->sline_real));
    result_754+=int_get_hash_key(((int)self->mQuote));
    result_754+=int_get_hash_key(((int)self->mLeft));
    result_754+=int_get_hash_key(((int)self->mRight));
    return result_754;
}

static _Bool sOrOrNode_equals(struct sOrOrNode* left, struct sOrOrNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value858 = (void*)0;
struct sNode* node_758;
int sline_real_759;
void* __right_value859 = (void*)0;
struct sNode* node2_760;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* __right_value866 = (void*)0;
struct sNode* __result460__;
struct sNode* __result461__;
    parse_sharp_v5(info);
    node_758=(struct sNode*)come_increment_ref_count(oror_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !info->no_comma&&*info->p==44) {
            info->p++;
            sline_real_759=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            node2_760=(struct sNode*)come_increment_ref_count(comma_exp(info));
            info->sline_real=sline_real_759;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2318, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value43=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value861=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2318, "struct sCommaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_758),(struct sNode*)come_increment_ref_count(node2_760),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sline_real=(void*)sNodeBase_sline_real;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result460__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value866=_inf_value43));
            if(node2_760) { node2_760 = come_decrement_ref_count2(node2_760, ((struct sNode*)node2_760)->finalize, ((struct sNode*)node2_760)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_758) { node_758 = come_decrement_ref_count2(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value861,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value866) { __right_value866 = come_decrement_ref_count2(__right_value866, ((struct sNode*)__right_value866)->finalize, ((struct sNode*)__right_value866)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result460__;
            if(node2_760) { node2_760 = come_decrement_ref_count2(node2_760, ((struct sNode*)node2_760)->finalize, ((struct sNode*)node2_760)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result461__ = gComeFunResultObject = __result_obj__ = node_758;
    if(node_758) { node_758 = come_decrement_ref_count2(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result461__;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__=(void*)0;
struct sCommaNode* __result458__;
void* __right_value862 = (void*)0;
struct sCommaNode* result_762;
void* __right_value863 = (void*)0;
char* __dec_obj363;
void* __right_value864 = (void*)0;
struct sNode* __dec_obj364;
void* __right_value865 = (void*)0;
struct sNode* __dec_obj365;
struct sCommaNode* __result459__;
    if(    self==(void*)0) {
        __result458__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result458__;
    }
    result_762=(struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "struct sCommaNode", sCommaNode_finalize, sCommaNode_clone, sCommaNode_get_hash_key, sCommaNode_equals));
    if(    self!=((void*)0)) {
        result_762->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj363=result_762->sname;
        result_762->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_762->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj364=result_762->mLeft;
        result_762->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj364) { __dec_obj364 = come_decrement_ref_count2(__dec_obj364, ((struct sNode*)__dec_obj364)->finalize, ((struct sNode*)__dec_obj364)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj365=result_762->mRight;
        result_762->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj365) { __dec_obj365 = come_decrement_ref_count2(__dec_obj365, ((struct sNode*)__dec_obj365)->finalize, ((struct sNode*)__dec_obj365)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result459__ = gComeFunResultObject = __result_obj__ = result_762;
    come_call_finalizer3(result_762,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result459__;
}

static unsigned int sCommaNode_get_hash_key(struct sCommaNode* self){
unsigned int result_761;
    result_761=0;
    result_761+=int_get_hash_key(((int)self->sline));
    result_761+=int_get_hash_key(((int)self->sname));
    result_761+=int_get_hash_key(((int)self->sline_real));
    result_761+=int_get_hash_key(((int)self->mLeft));
    result_761+=int_get_hash_key(((int)self->mRight));
    return result_761;
}

static _Bool sCommaNode_equals(struct sCommaNode* left, struct sCommaNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mRight,right->mRight)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value867 = (void*)0;
struct sNode* node_763;
int sline_real_764;
struct sNode* value1_765;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* __right_value870 = (void*)0;
struct sNode* __dec_obj366;
_Bool no_label_766;
void* __right_value871 = (void*)0;
struct sNode* __dec_obj367;
void* __right_value872 = (void*)0;
struct sNode* value2_767;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* __right_value875 = (void*)0;
struct sNode* __result462__;
struct sNode* __result463__;
value1_765 = (void*)0;
    parse_sharp_v5(info);
    node_763=(struct sNode*)come_increment_ref_count(comma_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==63) {
            info->p++;
            sline_real_764=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2349, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value44=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value869=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2349, "struct sNullNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNodeBase_sline;
                _inf_value44->sline_real=(void*)sNodeBase_sline_real;
                _inf_value44->sname=(void*)sNodeBase_sname;
                _inf_value44->terminated=(void*)sNodeBase_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj366=value1_765;
                value1_765=(struct sNode*)come_increment_ref_count(_inf_value44);
                if(__dec_obj366) { __dec_obj366 = come_decrement_ref_count2(__dec_obj366, ((struct sNode*)__dec_obj366)->finalize, ((struct sNode*)__dec_obj366)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value869,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                no_label_766=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj367=value1_765;
                value1_765=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                if(__dec_obj367) { __dec_obj367 = come_decrement_ref_count2(__dec_obj367, ((struct sNode*)__dec_obj367)->finalize, ((struct sNode*)__dec_obj367)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_label=no_label_766;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_767=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            parse_sharp_v5(info);
            info->sline_real=sline_real_764;
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2367, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value45=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value874=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2367, "struct sConditionalNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_763),(struct sNode*)come_increment_ref_count(value1_765),(struct sNode*)come_increment_ref_count(value2_767),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sline_real=(void*)sNodeBase_sline_real;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result462__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value875=_inf_value45));
            if(value1_765) { value1_765 = come_decrement_ref_count2(value1_765, ((struct sNode*)value1_765)->finalize, ((struct sNode*)value1_765)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_767) { value2_767 = come_decrement_ref_count2(value2_767, ((struct sNode*)value2_767)->finalize, ((struct sNode*)value2_767)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_763) { node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value874,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value875) { __right_value875 = come_decrement_ref_count2(__right_value875, ((struct sNode*)__right_value875)->finalize, ((struct sNode*)__right_value875)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result462__;
            if(value1_765) { value1_765 = come_decrement_ref_count2(value1_765, ((struct sNode*)value1_765)->finalize, ((struct sNode*)value1_765)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_767) { value2_767 = come_decrement_ref_count2(value2_767, ((struct sNode*)value2_767)->finalize, ((struct sNode*)value2_767)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result463__ = gComeFunResultObject = __result_obj__ = node_763;
    if(node_763) { node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result463__;
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value876 = (void*)0;
struct sNode* node_768;
struct sNode* __result464__;
    parse_sharp_v5(info);
    node_768=(struct sNode*)come_increment_ref_count(conditional_exp(info));
    __result464__ = gComeFunResultObject = __result_obj__ = node_768;
    if(node_768) { node_768 = come_decrement_ref_count2(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result464__;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* __right_value879 = (void*)0;
struct sNode* __result465__;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* __right_value884 = (void*)0;
struct sNode* __result468__;
void* __right_value885 = (void*)0;
struct sNode* __result469__;
    if(    !gComeC&&charp_operator_equals(buf,"null")) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2391, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value878=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2391, "struct sNullNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNodeBase_sline;
        _inf_value46->sline_real=(void*)sNodeBase_sline_real;
        _inf_value46->sname=(void*)sNodeBase_sname;
        _inf_value46->terminated=(void*)sNodeBase_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result465__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value879=_inf_value46));
        come_call_finalizer3(__right_value878,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value879) { __right_value879 = come_decrement_ref_count2(__right_value879, ((struct sNode*)__right_value879)->finalize, ((struct sNode*)__right_value879)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result465__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"nil")) {
        _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2394, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value47=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(__right_value881=sNilNode_initialize((struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2394, "struct sNilNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value47->_protocol_obj=_inf_obj_value47;
        _inf_value47->finalize=(void*)sNilNode_finalize;
        _inf_value47->clone=(void*)sNilNode_clone;
        _inf_value47->compile=(void*)sNilNode_compile;
        _inf_value47->sline=(void*)sNodeBase_sline;
        _inf_value47->sline_real=(void*)sNodeBase_sline_real;
        _inf_value47->sname=(void*)sNodeBase_sname;
        _inf_value47->terminated=(void*)sNodeBase_terminated;
        _inf_value47->kind=(void*)sNilNode_kind;
        __result468__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value884=_inf_value47));
        come_call_finalizer3(__right_value881,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value884) { __right_value884 = come_decrement_ref_count2(__right_value884, ((struct sNode*)__right_value884)->finalize, ((struct sNode*)__right_value884)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result468__;
    }
    __result469__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value885=string_node_v12(buf,head,head_sline,info)));
    if(__right_value885) { __right_value885 = come_decrement_ref_count2(__right_value885, ((struct sNode*)__right_value885)->finalize, ((struct sNode*)__right_value885)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result469__;
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__=(void*)0;
struct sNilNode* __result466__;
void* __right_value882 = (void*)0;
struct sNilNode* result_770;
void* __right_value883 = (void*)0;
char* __dec_obj368;
struct sNilNode* __result467__;
    if(    self==(void*)0) {
        __result466__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result466__;
    }
    result_770=(struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "struct sNilNode", sNilNode_finalize, sNilNode_clone, sNilNode_get_hash_key, sNilNode_equals));
    if(    self!=((void*)0)) {
        result_770->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj368=result_770->sname;
        result_770->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_770->sline_real=self->sline_real;
    }
    __result467__ = gComeFunResultObject = __result_obj__ = result_770;
    come_call_finalizer3(result_770,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result467__;
}

static unsigned int sNilNode_get_hash_key(struct sNilNode* self){
unsigned int result_769;
    result_769=0;
    result_769+=int_get_hash_key(((int)self->sline));
    result_769+=int_get_hash_key(((int)self->sname));
    result_769+=int_get_hash_key(((int)self->sline_real));
    return result_769;
}

static _Bool sNilNode_equals(struct sNilNode* left, struct sNilNode* right){
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

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct sNode* _inf_value48;
struct sLtNode* _inf_obj_value48;
void* __right_value888 = (void*)0;
struct sNode* __result470__;
    _inf_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2402, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value48=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value887=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2402, "struct sLtNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
    _inf_value48->_protocol_obj=_inf_obj_value48;
    _inf_value48->finalize=(void*)sLtNode_finalize;
    _inf_value48->clone=(void*)sLtNode_clone;
    _inf_value48->compile=(void*)sLtNode_compile;
    _inf_value48->sline=(void*)sNodeBase_sline;
    _inf_value48->sline_real=(void*)sNodeBase_sline_real;
    _inf_value48->sname=(void*)sNodeBase_sname;
    _inf_value48->terminated=(void*)sNodeBase_terminated;
    _inf_value48->kind=(void*)sLtNode_kind;
    __result470__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value888=_inf_value48));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value887,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value888) { __right_value888 = come_decrement_ref_count2(__right_value888, ((struct sNode*)__right_value888)->finalize, ((struct sNode*)__right_value888)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result470__;
}

