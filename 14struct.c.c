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
struct sStructNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sStructNobodyNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sClassNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
    struct list$1sNodeph* mMethods;
};

struct list_item$1sClassp
{
    struct sClass* item;
    struct list_item$1sClassp* prev;
    struct list_item$1sClassp* next;
};

struct list$1sClassp
{
    struct list_item$1sClassp* head;
    struct list_item$1sClassp* tail;
    int len;
    struct list_item$1sClassp* it;
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
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
void output_struct(struct sClass* klass, struct sInfo* info);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct buffer* map$2charphbufferphp_operator_load_element(struct map$2charphbufferph* self, char* key);
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
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2charphsClassphp_find(struct map$2charphsClassph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static struct sType* sType_clone(struct sType* self);
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
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* left, struct tuple2$2charphsTypeph* right);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static void sStructNode_finalize(struct sStructNode* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNode* create_nothing_node(struct sInfo* info);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
static unsigned int sNothingNode_get_hash_key(struct sNothingNode* self);
static _Bool sNothingNode_equals(struct sNothingNode* left, struct sNothingNode* right);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static void sClassNode_finalize(struct sClassNode* self);
static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct map$2charphsTypeph* map$2charphsTypephp_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypephp_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypephp_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypephp_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypephp_next(struct map$2charphsTypeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
static unsigned int sStructNode_get_hash_key(struct sStructNode* self);
static _Bool sStructNode_equals(struct sStructNode* left, struct sStructNode* right);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static unsigned int sStructNobodyNode_get_hash_key(struct sStructNobodyNode* self);
static _Bool sStructNobodyNode_equals(struct sStructNobodyNode* left, struct sStructNobodyNode* right);
static struct list$1charph* list$1charphp_reset(struct list$1charph* self);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
static struct list$1sClassp* list$1sClasspp_initialize(struct list$1sClassp* self);
static void list$1sClasspp_finalize(struct list$1sClassp* self);
static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self);
static struct list$1sClassp* list$1sClasspp_add(struct list$1sClassp* self, struct sClass* item);
static struct list$1sClassp* list$1sClasspp_reverse(struct list$1sClassp* self);
static struct list$1sClassp* list$1sClasspp_push_back(struct list$1sClassp* self, struct sClass* item);
static struct sClass* list$1sClasspp_begin(struct list$1sClassp* self);
static _Bool list$1sClasspp_end(struct list$1sClassp* self);
static struct sClass* list$1sClasspp_next(struct list$1sClassp* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charphp_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharphp_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharphp_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharphp_rehash(struct map$2charphcharph* self);
static char* map$2charphcharphp_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharphp_end(struct map$2charphcharph* self);
static char* map$2charphcharphp_next(struct map$2charphcharph* self);
static char* map$2charphcharphp_at(struct map$2charphcharph* self, char* key, char* default_value);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
static unsigned int sClassNode_get_hash_key(struct sClassNode* self);
static _Bool sClassNode_equals(struct sClassNode* left, struct sClassNode* right);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
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

char* get_none_generics_name(char* class_name){
void* __result_obj__=(void*)0;
char* p_308;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
char* __result229__;
void* __right_value252 = (void*)0;
char* __result230__;
    p_308=class_name;
    while(*p_308) {
        if(        *p_308==36) {
            __result229__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=charp_substring(((char*)(__right_value250=__builtin_string(class_name))),0,p_308-class_name)));
            __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result229__;
        }
        else {
            p_308++;
        }
    }
    __result230__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string(class_name)));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct buffer* buf_309;
struct sClass* klass_310;
char* class_name_311;
int i_312;
void* __right_value255 = (void*)0;
struct sType* type_313;
void* __right_value256 = (void*)0;
char* type_name_317;
int i_318;
void* __right_value257 = (void*)0;
char* __result233__;
    buf_309=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    klass_310=generics_type->mClass;
    class_name_311=klass_310->mName;
    buffer_append_str(buf_309,class_name_311);
    if(    list$1voidphp_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_309,36);
        buffer_append_char(buf_309,list$1voidphp_length(generics_type->mGenericsTypes)+48);
        for(        i_312=0;        i_312<list$1voidphp_length(generics_type->mGenericsTypes);        i_312++        ){
            type_313=((struct sType*)((void*)(__right_value255=list$1voidphp_operator_load_element(generics_type->mGenericsTypes,i_312))));
            come_call_finalizer3(__right_value255,(void*)0, 0, 1, 0, 0, __result_obj__);
            type_name_317=(char*)come_increment_ref_count(create_generics_name(type_313,info));
            buffer_append_str(buf_309,type_name_317);
            for(            i_318=0;            i_318<type_313->mPointerNum;            i_318++            ){
                buffer_append_char(buf_309,112);
            }
            if(            type_313->mHeap) {
                buffer_append_str(buf_309,"h");
            }
            type_name_317 = come_decrement_ref_count2(type_name_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result233__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value257=buffer_to_string(buf_309)));
    come_call_finalizer3(buf_309,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_314;
int i_315;
void* __result231__;
void* default_value_316;
void* __result232__;
default_value_316 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_314=self->head;
    i_315=0;
    while(it_314!=((void*)0)) {
        if(        position==i_315) {
            __result231__ = gComeFunResultObject = __result_obj__ = it_314->item;
            gComeFunResultObject = (void*)0;
            return __result231__;
        }
        it_314=it_314->next;
        i_315++;
    }
    memset(&default_value_316,0,sizeof(void*));
    __result232__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_316);
    come_call_finalizer3(default_value_316, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

void output_struct(struct sClass* klass, struct sInfo* info){
char* name_319;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct buffer* buf_320;
_Bool existance_generics_321;
struct list$1voidph* o2_saved_322;
struct tuple2$2charphsTypeph* it_325;
struct tuple2$2charphsTypeph* multiple_assign_var1 = (void*)0;
char* name_328=0;
struct sType* type_329=0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
_Bool _if_conditional1;
    if(    info->no_output_come_code) {
        return;
    }
    if(    list$1voidphp_length(klass->mFields)==0) {
        return;
    }
    name_319=(char*)come_increment_ref_count(klass->mName);
    buf_320=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 62, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_format(buf_320,"struct %s\n{\n",klass->mName);
    existance_generics_321=(_Bool)0;
    for(    o2_saved_322=(struct list$1voidph*)come_increment_ref_count((klass->mFields)),it_325=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_322)));    !list$1voidphp_end((o2_saved_322));    it_325=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_322)))    ){
        multiple_assign_var1=it_325;
        name_328=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_329=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_method_generics_types(type_329,info)||is_contained_generics_types(type_329,info)) {
            existance_generics_321=(_Bool)1;
        }
        type_329->mStatic=(_Bool)0;
        buffer_append_str(buf_320,"    ");
        buffer_append_str(buf_320,((char*)(__right_value260=make_define_var(type_329,name_328,(_Bool)0,info))));
        __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_320,";\n");
        name_328 = come_decrement_ref_count2(name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_322,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_320,"};\n");
    }
    else {
        buffer_append_format(buf_320,"} %s;\n",klass->mAttribute);
    }
    if(    (_if_conditional1=(((struct buffer*)(__right_value261=map$2charphbufferphp_operator_load_element(info->struct_definition,name_319)))==((void*)0)&&!existance_generics_321)),    come_call_finalizer3(__right_value261,buffer_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional1) {
        map$2charphbufferphp_insert(info->struct_definition,(char*)come_increment_ref_count(name_319),(struct buffer*)come_increment_ref_count(buf_320));
    }
    name_319 = come_decrement_ref_count2(name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_320,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_323;
void* __result234__;
void* __result235__;
void* result_324;
void* __result236__;
result_323 = (void*)0;
result_324 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_323,0,sizeof(void*));
        __result234__ = gComeFunResultObject = __result_obj__ = result_323;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    self->it=self->head;
    if(    self->it) {
        __result235__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    memset(&result_324,0,sizeof(void*));
    __result236__ = gComeFunResultObject = __result_obj__ = result_324;
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_326;
void* __result237__;
void* __result238__;
void* result_327;
void* __result239__;
result_326 = (void*)0;
result_327 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_326,0,sizeof(void*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_326;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->it=self->it->next;
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
struct list_item$1voidph* it_330;
struct list_item$1voidph* prev_it_331;
    it_330=self->head;
    while(it_330!=((void*)0)) {
        prev_it_331=it_330;
        it_330=it_330->next;
        come_call_finalizer3(prev_it_331,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1voidph* it_332;
struct list_item$1voidph* prev_it_333;
    it_332=self->head;
    while(it_332!=((void*)0)) {
        prev_it_333=it_332;
        it_332=it_332->next;
        come_call_finalizer3(prev_it_333,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_334;
struct list_item$1sNodeph* prev_it_335;
    it_334=self->head;
    while(it_334!=((void*)0)) {
        prev_it_335=it_334;
        it_334=it_334->next;
        come_call_finalizer3(prev_it_335,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_336;
struct list_item$1sNodeph* prev_it_337;
    it_336=self->head;
    while(it_336!=((void*)0)) {
        prev_it_337=it_336;
        it_336=it_336->next;
        come_call_finalizer3(prev_it_337,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_338;
struct list_item$1charph* prev_it_339;
    it_338=self->head;
    while(it_338!=((void*)0)) {
        prev_it_339=it_338;
        it_338=it_338->next;
        come_call_finalizer3(prev_it_339,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct buffer* map$2charphbufferphp_operator_load_element(struct map$2charphbufferph* self, char* key){
void* __result_obj__=(void*)0;
struct buffer* default_value_340;
unsigned int hash_341;
unsigned int it_342;
struct buffer* __result240__;
struct buffer* __result241__;
struct buffer* __result242__;
struct buffer* __result243__;
default_value_340 = (void*)0;
    memset(&default_value_340,0,sizeof(struct buffer*));
    hash_341=string_get_hash_key(((char*)key))%self->size;
    it_342=hash_341;
    while((_Bool)1) {
        if(        self->item_existance[it_342]) {
            if(            string_equals(self->keys[it_342],key)) {
                __result240__ = gComeFunResultObject = __result_obj__ = self->items[it_342];
                come_call_finalizer3(default_value_340,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result240__;
            }
            it_342++;
            if(            it_342>=self->size) {
                it_342=0;
            }
            else if(            it_342==hash_341) {
                __result241__ = gComeFunResultObject = __result_obj__ = default_value_340;
                come_call_finalizer3(default_value_340,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
        }
        else {
            __result242__ = gComeFunResultObject = __result_obj__ = default_value_340;
            come_call_finalizer3(default_value_340,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result242__;
        }
    }
    __result243__ = gComeFunResultObject = __result_obj__ = default_value_340;
    come_call_finalizer3(default_value_340,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct map$2charphbufferph* map$2charphbufferphp_insert(struct map$2charphbufferph* self, char* key, struct buffer* item){
void* __result_obj__=(void*)0;
unsigned int hash_360;
unsigned int it_361;
_Bool same_key_exist_378;
char* it2_381;
struct map$2charphbufferph* __result264__;
    if(    self->len*10>=self->size) {
        map$2charphbufferphp_rehash(self);
    }
    hash_360=string_get_hash_key(key)%self->size;
    it_361=hash_360;
    while((_Bool)1) {
        if(        self->item_existance[it_361]) {
            if(            string_equals(self->keys[it_361],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_361]);
                    self->keys[it_361] = come_decrement_ref_count2(self->keys[it_361], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_361]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_361]);
                    self->keys[it_361]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_361],buffer_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_361]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_361]=item;
                }
                break;
            }
            it_361++;
            if(            it_361>=self->size) {
                it_361=0;
            }
            else if(            it_361==hash_360) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_361]=(_Bool)1;
            if(            1) {
                self->keys[it_361]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_361]=key;
            }
            if(            1) {
                self->items[it_361]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_361]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_378=(_Bool)0;
    for(    it2_381=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_381=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_381,key)) {
            same_key_exist_378=(_Bool)1;
        }
    }
    if(    !same_key_exist_378) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void map$2charphbufferphp_rehash(struct map$2charphbufferph* self){
int size_343;
void* __right_value262 = (void*)0;
char** keys_344;
void* __right_value263 = (void*)0;
struct buffer** items_345;
void* __right_value264 = (void*)0;
_Bool* item_existance_346;
int len_347;
char* it_350;
struct buffer* default_value_353;
void* __right_value265 = (void*)0;
struct buffer* it2_354;
unsigned int hash_357;
int n_358;
struct buffer* default_value_359;
void* __right_value266 = (void*)0;
default_value_353 = (void*)0;
default_value_359 = (void*)0;
    size_343=self->size*10;
    keys_344=(char**)come_increment_ref_count(((char**)(__right_value262=(char**)come_calloc(1, sizeof(char*)*(1*(size_343)), "/usr/local/include/comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_345=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value263=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(size_343)), "/usr/local/include/comelang.h", 2809, "struct buffer**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_346=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value264=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_343)), "/usr/local/include/comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_347=0;
    for(    it_350=map$2charphbufferphp_begin(self);    !map$2charphbufferphp_end(self);    it_350=map$2charphbufferphp_next(self)    ){
        memset(&default_value_353,0,sizeof(struct buffer*));
        it2_354=((struct buffer*)(__right_value265=map$2charphbufferphp_at(self,it_350,default_value_353)));
        come_call_finalizer3(__right_value265,buffer_finalize, 0, 1, 0, 0, (void*)0);
        hash_357=string_get_hash_key(it_350)%size_343;
        n_358=hash_357;
        while((_Bool)1) {
            if(            item_existance_346[n_358]) {
                n_358++;
                if(                n_358>=size_343) {
                    n_358=0;
                }
                else if(                n_358==hash_357) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_346[n_358]=(_Bool)1;
                keys_344[n_358]=it_350;
                items_345[n_358]=((struct buffer*)(__right_value266=map$2charphbufferphp_at(self,it_350,default_value_359)));
                come_call_finalizer3(__right_value266,buffer_finalize, 0, 1, 0, 0, (void*)0);
                len_347++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_344;
    self->items=items_345;
    self->item_existance=item_existance_346;
    self->size=size_343;
    self->len=len_347;
}

static char* map$2charphbufferphp_begin(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_348;
char* __result244__;
char* __result245__;
char* result_349;
char* __result246__;
result_348 = (void*)0;
result_349 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_348,0,sizeof(char*));
        __result244__ = gComeFunResultObject = __result_obj__ = result_348;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result245__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    memset(&result_349,0,sizeof(char*));
    __result246__ = gComeFunResultObject = __result_obj__ = result_349;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static _Bool map$2charphbufferphp_end(struct map$2charphbufferph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphbufferphp_next(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_351;
char* __result247__;
char* __result248__;
char* result_352;
char* __result249__;
result_351 = (void*)0;
result_352 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_351,0,sizeof(char*));
        __result247__ = gComeFunResultObject = __result_obj__ = result_351;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result248__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    memset(&result_352,0,sizeof(char*));
    __result249__ = gComeFunResultObject = __result_obj__ = result_352;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct buffer* map$2charphbufferphp_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_355;
unsigned int it_356;
struct buffer* __result250__;
struct buffer* __result251__;
struct buffer* __result252__;
struct buffer* __result253__;
    hash_355=string_get_hash_key(((char*)key))%self->size;
    it_356=hash_355;
    while((_Bool)1) {
        if(        self->item_existance[it_356]) {
            if(            string_equals(self->keys[it_356],key)) {
                __result250__ = gComeFunResultObject = __result_obj__ = self->items[it_356];
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result250__;
            }
            it_356++;
            if(            it_356>=self->size) {
                it_356=0;
            }
            else if(            it_356==hash_355) {
                __result251__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result251__;
            }
        }
        else {
            __result252__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result252__;
        }
    }
    __result253__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_362;
struct list_item$1charp* it_363;
struct list$1charp* __result257__;
    it2_362=0;
    it_363=self->head;
    while(it_363!=((void*)0)) {
        if(        charp_equals(it_363->item,item)) {
            list$1charpp_delete(self,it2_362,it2_362+1);
            break;
        }
        it2_362++;
        it_363=it_363->next;
    }
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_364;
struct list$1charp* __result254__;
struct list_item$1charp* it_367;
int i_368;
struct list_item$1charp* prev_it_369;
struct list_item$1charp* it_370;
int i_371;
struct list_item$1charp* prev_it_372;
struct list_item$1charp* it_373;
struct list_item$1charp* head_prev_it_374;
struct list_item$1charp* tail_it_375;
int i_376;
struct list_item$1charp* prev_it_377;
struct list$1charp* __result256__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_364=tail;
        tail=head;
        head=tmp_364;
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
        it_367=self->head;
        i_368=0;
        while(it_367!=((void*)0)) {
            if(            i_368<tail) {
                prev_it_369=it_367;
                it_367=it_367->next;
                i_368++;
                come_call_finalizer3(prev_it_369,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_368==tail) {
                self->head=it_367;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_367=it_367->next;
                i_368++;
            }
        }
    }
    else if(    tail==self->len) {
        it_370=self->head;
        i_371=0;
        while(it_370!=((void*)0)) {
            if(            i_371==head) {
                self->tail=it_370->prev;
                self->tail->next=((void*)0);
            }
            if(            i_371>=head) {
                prev_it_372=it_370;
                it_370=it_370->next;
                i_371++;
                come_call_finalizer3(prev_it_372,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_370=it_370->next;
                i_371++;
            }
        }
    }
    else {
        it_373=self->head;
        head_prev_it_374=((void*)0);
        tail_it_375=((void*)0);
        i_376=0;
        while(it_373!=((void*)0)) {
            if(            i_376==head) {
                head_prev_it_374=it_373->prev;
            }
            if(            i_376==tail) {
                tail_it_375=it_373;
            }
            if(            i_376>=head&&i_376<tail) {
                prev_it_377=it_373;
                it_373=it_373->next;
                i_376++;
                come_call_finalizer3(prev_it_377,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_373=it_373->next;
                i_376++;
            }
        }
        if(        head_prev_it_374!=((void*)0)) {
            head_prev_it_374->next=tail_it_375;
        }
        if(        tail_it_375!=((void*)0)) {
            tail_it_375->prev=head_prev_it_374;
        }
    }
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_365;
struct list_item$1charp* prev_it_366;
struct list$1charp* __result255__;
    it_365=self->head;
    while(it_365!=((void*)0)) {
        prev_it_366=it_365;
        it_365=it_365->next;
        come_call_finalizer3(prev_it_366,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
char* result_379;
char* __result258__;
char* __result259__;
char* result_380;
char* __result260__;
result_379 = (void*)0;
result_380 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_379,0,sizeof(char*));
        __result258__ = gComeFunResultObject = __result_obj__ = result_379;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    self->it=self->head;
    if(    self->it) {
        __result259__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    memset(&result_380,0,sizeof(char*));
    __result260__ = gComeFunResultObject = __result_obj__ = result_380;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_382;
char* __result261__;
char* __result262__;
char* result_383;
char* __result263__;
result_382 = (void*)0;
result_383 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_382,0,sizeof(char*));
        __result261__ = gComeFunResultObject = __result_obj__ = result_382;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result262__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    memset(&result_383,0,sizeof(char*));
    __result263__ = gComeFunResultObject = __result_obj__ = result_383;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct buffer* buf_384;
struct list$1voidph* o2_saved_385;
struct tuple2$2charphsTypeph* it_386;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* name_387=0;
struct sType* type_388=0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    if(    !klass->mOutputed2) {
        klass->mOutputed2=(_Bool)1;
        buf_384=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 101, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        klass->mParentClassName) {
            buffer_append_format(buf_384,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
        }
        else {
            buffer_append_format(buf_384,"struct %s\n{\n",klass->mName);
        }
        for(        o2_saved_385=(struct list$1voidph*)come_increment_ref_count((klass->mFields)),it_386=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_385)));        !list$1voidphp_end((o2_saved_385));        it_386=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_385)))        ){
            multiple_assign_var2=it_386;
            name_387=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_388=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            type_388->mStatic=(_Bool)0;
            buffer_append_str(buf_384,"    ");
            buffer_append_str(buf_384,((char*)(__right_value269=make_define_var_no_solved(type_388,name_387,(_Bool)0,(_Bool)1,info))));
            __right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_384,";\n");
            name_387 = come_decrement_ref_count2(name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_385,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        klass->mAttribute==((void*)0)) {
            buffer_append_str(buf_384,"};\n");
        }
        else {
            buffer_append_format(buf_384,"} %s;\n",klass->mAttribute);
        }
        if(        string_operator_equals(klass->mDeclareSName,info->base_sname)) {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value270=buffer_to_string(buf_384))));
            __right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(buf_384,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_389;
struct sClass* klass_390;
int i_391;
void* __right_value271 = (void*)0;
_Bool result_392;
    type2_389=type->mNoSolvedGenericsType;
    if(    type2_389&&is_contained_generics_types(type2_389,info)) {
        return (_Bool)1;
    }
    klass_390=type->mClass;
    if(    klass_390->mGenerics) {
        return (_Bool)1;
    }
    for(    i_391=0;    i_391<list$1voidphp_length(type->mGenericsTypes);    i_391++    ){
        result_392=is_contained_generics_types(((struct sType*)((void*)(__right_value271=list$1voidphp_operator_load_element(type->mGenericsTypes,i_391)))),info);
        come_call_finalizer3(__right_value271,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        result_392) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_393;
struct sClass* klass_394;
int i_395;
void* __right_value272 = (void*)0;
_Bool result_396;
    type2_393=type->mNoSolvedGenericsType;
    if(    type2_393&&is_contained_method_generics_types(type2_393,info)) {
        return (_Bool)1;
    }
    klass_394=type->mClass;
    if(    klass_394->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_395=0;    i_395<list$1voidphp_length(type->mGenericsTypes);    i_395++    ){
        result_396=is_contained_method_generics_types(((struct sType*)((void*)(__right_value272=list$1voidphp_operator_load_element(type->mGenericsTypes,i_395)))),info);
        come_call_finalizer3(__right_value272,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        result_396) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value273 = (void*)0;
char* new_name_397;
void* __right_value274 = (void*)0;
struct sClass* generics_class_400;
_Bool __result269__;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sClass* new_class_425;
int i_426;
struct list$1voidph* o2_saved_427;
struct tuple2$2charphsTypeph* it_428;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* name_429=0;
struct sType* type_430=0;
void* __right_value285 = (void*)0;
struct sType* new_type_431;
void* __right_value289 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sType* __dec_obj92;
void* __right_value334 = (void*)0;
struct sType* __dec_obj93;
void* __right_value335 = (void*)0;
_Bool __result301__;
    new_name_397=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2charphsClassphp_find(info->classes,new_name_397)) {
        generics_class_400=((struct sClass*)(__right_value274=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName)));
        come_call_finalizer3(__right_value274,sClass_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_class_400==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result269__ = (_Bool)0;
            new_name_397 = come_decrement_ref_count2(new_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result269__;
        }
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_397)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 193, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),new_name_397,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        new_class_425=((struct sClass*)(__right_value284=map$2charphsClassphp_at(info->classes,((char*)(__right_value283=__builtin_string(new_name_397))),((void*)0))));
        __right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value284,sClass_finalize, 0, 1, 0, 0, (void*)0);
        i_426=0;
        for(        o2_saved_427=(struct list$1voidph*)come_increment_ref_count((generics_class_400->mFields)),it_428=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_427)));        !list$1voidphp_end((o2_saved_427));        it_428=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_427)))        ){
            multiple_assign_var3=it_428;
            name_429=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_430=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_431=(struct sType*)come_increment_ref_count(solve_generics(type_430,generics_type,info));
            list$1voidphp_push_back(new_class_425->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 203, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_429)),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, new_type_431)))));
            name_429 = come_decrement_ref_count2(name_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(new_type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_427,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj92=type->mNoSolvedGenericsType;
        type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
        type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        type->mClass=new_class_425;
        list$1voidphp_reset(type->mGenericsTypes);
        output_struct(new_class_425,info);
    }
    else {
        if(        type->mNoSolvedGenericsType==((void*)0)) {
            __dec_obj93=type->mNoSolvedGenericsType;
            type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
            type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)(__right_value335=map$2charphsClassphp_operator_load_element(info->classes,new_name_397)));
        come_call_finalizer3(__right_value335,sClass_finalize, 0, 1, 0, 0, (void*)0);
        list$1voidphp_reset(type->mGenericsTypes);
    }
    __result301__ = (_Bool)1;
    new_name_397 = come_decrement_ref_count2(new_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result301__;
}

static _Bool map$2charphsClassphp_find(struct map$2charphsClassph* self, char* key){
unsigned int hash_398;
int it_399;
    hash_398=string_get_hash_key(((char*)key))%self->size;
    it_399=hash_398;
    while((_Bool)1) {
        if(        self->item_existance[it_399]) {
            if(            string_equals(self->keys[it_399],key)) {
                return (_Bool)1;
            }
            it_399++;
            if(            it_399>=self->size) {
                it_399=0;
            }
            else if(            it_399==hash_398) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_401;
unsigned int hash_402;
unsigned int it_403;
struct sClass* __result265__;
struct sClass* __result266__;
struct sClass* __result267__;
struct sClass* __result268__;
default_value_401 = (void*)0;
    memset(&default_value_401,0,sizeof(struct sClass*));
    hash_402=string_get_hash_key(((char*)key))%self->size;
    it_403=hash_402;
    while((_Bool)1) {
        if(        self->item_existance[it_403]) {
            if(            string_equals(self->keys[it_403],key)) {
                __result265__ = gComeFunResultObject = __result_obj__ = self->items[it_403];
                come_call_finalizer3(default_value_401,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result265__;
            }
            it_403++;
            if(            it_403>=self->size) {
                it_403=0;
            }
            else if(            it_403==hash_402) {
                __result266__ = gComeFunResultObject = __result_obj__ = default_value_401;
                come_call_finalizer3(default_value_401,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
        }
        else {
            __result267__ = gComeFunResultObject = __result_obj__ = default_value_401;
            come_call_finalizer3(default_value_401,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result267__;
        }
    }
    __result268__ = gComeFunResultObject = __result_obj__ = default_value_401;
    come_call_finalizer3(default_value_401,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj50;
struct list$1voidph* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj50=self->mName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj51=self->mFields;
            come_call_finalizer3(__dec_obj51,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj52=self->mDeclareSName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj53=self->mParentClassName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj54=self->mAttribute;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_421;
unsigned int it_422;
_Bool same_key_exist_423;
char* it2_424;
struct map$2charphsClassph* __result280__;
    if(    self->len*10>=self->size) {
        map$2charphsClassphp_rehash(self);
    }
    hash_421=string_get_hash_key(key)%self->size;
    it_422=hash_421;
    while((_Bool)1) {
        if(        self->item_existance[it_422]) {
            if(            string_equals(self->keys[it_422],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_422]);
                    self->keys[it_422] = come_decrement_ref_count2(self->keys[it_422], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_422]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_422]);
                    self->keys[it_422]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_422],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_422]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_422]=item;
                }
                break;
            }
            it_422++;
            if(            it_422>=self->size) {
                it_422=0;
            }
            else if(            it_422==hash_421) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_422]=(_Bool)1;
            if(            1) {
                self->keys[it_422]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_422]=key;
            }
            if(            1) {
                self->items[it_422]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_422]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_423=(_Bool)0;
    for(    it2_424=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_424=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_424,key)) {
            same_key_exist_423=(_Bool)1;
        }
    }
    if(    !same_key_exist_423) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_404;
void* __right_value275 = (void*)0;
char** keys_405;
void* __right_value276 = (void*)0;
struct sClass** items_406;
void* __right_value277 = (void*)0;
_Bool* item_existance_407;
int len_408;
char* it_411;
struct sClass* default_value_414;
void* __right_value278 = (void*)0;
struct sClass* it2_415;
unsigned int hash_418;
int n_419;
struct sClass* default_value_420;
void* __right_value279 = (void*)0;
default_value_414 = (void*)0;
default_value_420 = (void*)0;
    size_404=self->size*10;
    keys_405=(char**)come_increment_ref_count(((char**)(__right_value275=(char**)come_calloc(1, sizeof(char*)*(1*(size_404)), "/usr/local/include/comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_406=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value276=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_404)), "/usr/local/include/comelang.h", 2809, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_407=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value277=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_404)), "/usr/local/include/comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_408=0;
    for(    it_411=map$2charphsClassphp_begin(self);    !map$2charphsClassphp_end(self);    it_411=map$2charphsClassphp_next(self)    ){
        memset(&default_value_414,0,sizeof(struct sClass*));
        it2_415=((struct sClass*)(__right_value278=map$2charphsClassphp_at(self,it_411,default_value_414)));
        come_call_finalizer3(__right_value278,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_418=string_get_hash_key(it_411)%size_404;
        n_419=hash_418;
        while((_Bool)1) {
            if(            item_existance_407[n_419]) {
                n_419++;
                if(                n_419>=size_404) {
                    n_419=0;
                }
                else if(                n_419==hash_418) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_407[n_419]=(_Bool)1;
                keys_405[n_419]=it_411;
                items_406[n_419]=((struct sClass*)(__right_value279=map$2charphsClassphp_at(self,it_411,default_value_420)));
                come_call_finalizer3(__right_value279,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_408++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_405;
    self->items=items_406;
    self->item_existance=item_existance_407;
    self->size=size_404;
    self->len=len_408;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_409;
char* __result270__;
char* __result271__;
char* result_410;
char* __result272__;
result_409 = (void*)0;
result_410 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_409,0,sizeof(char*));
        __result270__ = gComeFunResultObject = __result_obj__ = result_409;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result271__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    memset(&result_410,0,sizeof(char*));
    __result272__ = gComeFunResultObject = __result_obj__ = result_410;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_412;
char* __result273__;
char* __result274__;
char* result_413;
char* __result275__;
result_412 = (void*)0;
result_413 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_412,0,sizeof(char*));
        __result273__ = gComeFunResultObject = __result_obj__ = result_412;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result274__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    memset(&result_413,0,sizeof(char*));
    __result275__ = gComeFunResultObject = __result_obj__ = result_413;
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_416;
unsigned int it_417;
struct sClass* __result276__;
struct sClass* __result277__;
struct sClass* __result278__;
struct sClass* __result279__;
    hash_416=string_get_hash_key(((char*)key))%self->size;
    it_417=hash_416;
    while((_Bool)1) {
        if(        self->item_existance[it_417]) {
            if(            string_equals(self->keys[it_417],key)) {
                __result276__ = gComeFunResultObject = __result_obj__ = self->items[it_417];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result276__;
            }
            it_417++;
            if(            it_417>=self->size) {
                it_417=0;
            }
            else if(            it_417==hash_416) {
                __result277__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result277__;
            }
        }
        else {
            __result278__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result278__;
        }
    }
    __result279__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value286 = (void*)0;
struct list_item$1voidph* litem_432;
void* __dec_obj55;
void* __right_value287 = (void*)0;
struct list_item$1voidph* litem_433;
void* __dec_obj56;
void* __right_value288 = (void*)0;
struct list_item$1voidph* litem_434;
void* __dec_obj57;
struct list$1voidph* __result281__;
    if(    self->len==0) {
        litem_432=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value286=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_432->prev=((void*)0);
        litem_432->next=((void*)0);
        __dec_obj55=litem_432->item;
        litem_432->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_432;
        self->head=litem_432;
    }
    else if(    self->len==1) {
        litem_433=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value287=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_433->prev=self->head;
        litem_433->next=((void*)0);
        __dec_obj56=litem_433->item;
        litem_433->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_433;
        self->head->next=litem_433;
    }
    else {
        litem_434=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value288=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_434->prev=self->tail;
        litem_434->next=((void*)0);
        __dec_obj57=litem_434->item;
        litem_434->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_434;
        self->tail=litem_434;
    }
    self->len++;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result282__;
void* __right_value290 = (void*)0;
struct sType* result_442;
void* __right_value291 = (void*)0;
struct sType* __dec_obj58;
void* __right_value292 = (void*)0;
struct sType* __dec_obj59;
void* __right_value293 = (void*)0;
struct sType* __dec_obj60;
void* __right_value294 = (void*)0;
char* __dec_obj61;
void* __right_value295 = (void*)0;
char* __dec_obj62;
void* __right_value302 = (void*)0;
struct list$1voidph* __dec_obj66;
void* __right_value310 = (void*)0;
struct list$1sNodeph* __dec_obj70;
void* __right_value311 = (void*)0;
struct list$1voidph* __dec_obj71;
void* __right_value318 = (void*)0;
struct list$1charph* __dec_obj75;
void* __right_value319 = (void*)0;
struct sType* __dec_obj76;
void* __right_value320 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value321 = (void*)0;
struct sType* __dec_obj78;
void* __right_value322 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value323 = (void*)0;
char* __dec_obj80;
void* __right_value324 = (void*)0;
char* __dec_obj81;
void* __right_value325 = (void*)0;
char* __dec_obj82;
void* __right_value326 = (void*)0;
char* __dec_obj83;
struct sType* __result296__;
    if(    self==(void*)0) {
        __result282__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    result_442=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_442->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj58=result_442->mNoSolvedGenericsType;
        result_442->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj59=result_442->mOriginalLoadVarType;
        result_442->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj60=result_442->mAnyOriginalType;
        result_442->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_442->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj61=result_442->mInterfaceName;
        result_442->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj62=result_442->mGenericsName;
        result_442->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj66=result_442->mGenericsTypes;
        result_442->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj66,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj70=result_442->mArrayNum;
        result_442->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj70,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_442->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj71=result_442->mParamTypes;
        result_442->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj71,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj75=result_442->mParamNames;
        result_442->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj76=result_442->mResultType;
        result_442->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_442->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj77=result_442->mAlignas;
        result_442->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj78=result_442->mChannelType;
        result_442->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_442->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_442->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_442->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_442->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_442->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_442->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_442->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_442->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_442->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_442->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_442->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_442->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_442->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_442->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_442->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_442->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_442->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_442->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_442->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_442->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_442->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_442->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_442->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_442->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj79=result_442->mSizeNum;
        result_442->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_442->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj80=result_442->mOriginalTypeName;
        result_442->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_442->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_442->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_442->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_442->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_442->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_442->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_442->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_442->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj81=result_442->mAsmName;
        result_442->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_442->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_442->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_442->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_442->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_442->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_442->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj82=result_442->mTupleName;
        result_442->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj83=result_442->mAttribute;
        result_442->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_442->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_442->mGenerate=self->mGenerate;
    }
    __result296__ = gComeFunResultObject = __result_obj__ = result_442;
    come_call_finalizer3(result_442,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_435;
    result_435=0;
    result_435+=int_get_hash_key(((int)self->mClass));
    result_435+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_435+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_435+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_435+=int_get_hash_key(((int)self->mAnyClass));
    result_435+=int_get_hash_key(((int)self->mInterfaceName));
    result_435+=int_get_hash_key(((int)self->mGenericsName));
    result_435+=int_get_hash_key(((int)self->mGenericsTypes));
    result_435+=int_get_hash_key(((int)self->mArrayNum));
    result_435+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_435+=int_get_hash_key(((int)self->mParamTypes));
    result_435+=int_get_hash_key(((int)self->mParamNames));
    result_435+=int_get_hash_key(((int)self->mResultType));
    result_435+=int_get_hash_key(((int)self->mVarArgs));
    result_435+=int_get_hash_key(((int)self->mAlignas));
    result_435+=int_get_hash_key(((int)self->mChannelType));
    result_435+=int_get_hash_key(((int)self->mUnsigned));
    result_435+=int_get_hash_key(((int)self->mShort));
    result_435+=int_get_hash_key(((int)self->mLong));
    result_435+=int_get_hash_key(((int)self->mLongLong));
    result_435+=int_get_hash_key(((int)self->mConstant));
    result_435+=int_get_hash_key(((int)self->mAtomic));
    result_435+=int_get_hash_key(((int)self->mRegister));
    result_435+=int_get_hash_key(((int)self->mVolatile));
    result_435+=int_get_hash_key(((int)self->mStatic));
    result_435+=int_get_hash_key(((int)self->mUniq));
    result_435+=int_get_hash_key(((int)self->mRecord));
    result_435+=int_get_hash_key(((int)self->mExtern));
    result_435+=int_get_hash_key(((int)self->mRestrict));
    result_435+=int_get_hash_key(((int)self->mImmutable));
    result_435+=int_get_hash_key(((int)self->mHeap));
    result_435+=int_get_hash_key(((int)self->mChannel));
    result_435+=int_get_hash_key(((int)self->mNoHeap));
    result_435+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_435+=int_get_hash_key(((int)self->mException));
    result_435+=int_get_hash_key(((int)self->mPointerNum));
    result_435+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_435+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_435+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_435+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_435+=int_get_hash_key(((int)self->mSizeNum));
    result_435+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_435+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_435+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_435+=int_get_hash_key(((int)self->mFunctionParam));
    result_435+=int_get_hash_key(((int)self->mAllocaValue));
    result_435+=int_get_hash_key(((int)self->mGenericsStruct));
    result_435+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_435+=int_get_hash_key(((int)self->mInline));
    result_435+=int_get_hash_key(((int)self->mNullValue));
    result_435+=int_get_hash_key(((int)self->mGuardValue));
    result_435+=int_get_hash_key(((int)self->mAsmName));
    result_435+=int_get_hash_key(((int)self->mArrayPointerType));
    result_435+=int_get_hash_key(((int)self->mLambdaArray));
    result_435+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_435+=int_get_hash_key(((int)self->mTypedef));
    result_435+=int_get_hash_key(((int)self->mMultipleTypes));
    result_435+=int_get_hash_key(((int)self->mOriginIsArray));
    result_435+=int_get_hash_key(((int)self->mTupleName));
    result_435+=int_get_hash_key(((int)self->mAttribute));
    result_435+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_435+=int_get_hash_key(((int)self->mGenerate));
    return result_435;
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
struct list_item$1voidph* it_436;
struct list_item$1voidph* it2_437;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_436=left->head;
    it2_437=right->head;
    while(it_436!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_436->item)) {
            return (_Bool)0;
        }
        it_436=it_436->next;
        it2_437=it2_437->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_438;
struct list_item$1sNodeph* it2_439;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_438=left->head;
    it2_439=right->head;
    while(it_438!=((void*)0)) {
        if(        !sNode_equals(it_438->item,it2_439->item)) {
            return (_Bool)0;
        }
        it_438=it_438->next;
        it2_439=it2_439->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_440;
struct list_item$1charph* it2_441;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_440=left->head;
    it2_441=right->head;
    while(it_440!=((void*)0)) {
        if(        !string_equals(it_440->item,it2_441->item)) {
            return (_Bool)0;
        }
        it_440=it_440->next;
        it2_441=it2_441->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result283__;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1voidph* result_444;
struct list_item$1voidph* it_445;
void* __right_value301 = (void*)0;
struct list$1voidph* __result286__;
    if(    self==((void*)0)) {
        __result283__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    result_444=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_445=self->head;
    while(it_445!=((void*)0)) {
        list$1voidphp_add(result_444,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_445->item)));
        it_445=it_445->next;
    }
    __result286__ = gComeFunResultObject = __result_obj__ = result_444;
    come_call_finalizer3(result_444,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_443;
    result_443=0;
    result_443+=int_get_hash_key(((int)self->head));
    result_443+=int_get_hash_key(((int)self->tail));
    result_443+=int_get_hash_key(((int)self->len));
    result_443+=int_get_hash_key(((int)self->it));
    return result_443;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result284__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
struct list_item$1voidph* litem_446;
void* __dec_obj63;
void* __right_value299 = (void*)0;
struct list_item$1voidph* litem_447;
void* __dec_obj64;
void* __right_value300 = (void*)0;
struct list_item$1voidph* litem_448;
void* __dec_obj65;
struct list$1voidph* __result285__;
    if(    self->len==0) {
        litem_446=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value298=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_446->prev=((void*)0);
        litem_446->next=((void*)0);
        __dec_obj63=litem_446->item;
        litem_446->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_446;
        self->head=litem_446;
    }
    else if(    self->len==1) {
        litem_447=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value299=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_447->prev=self->head;
        litem_447->next=((void*)0);
        __dec_obj64=litem_447->item;
        litem_447->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_447;
        self->head->next=litem_447;
    }
    else {
        litem_448=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value300=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_448->prev=self->tail;
        litem_448->next=((void*)0);
        __dec_obj65=litem_448->item;
        litem_448->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_448;
        self->tail=litem_448;
    }
    self->len++;
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result287__;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct list$1sNodeph* result_449;
struct list_item$1sNodeph* it_450;
void* __right_value309 = (void*)0;
struct list$1sNodeph* __result292__;
    if(    self==((void*)0)) {
        __result287__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    result_449=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_450=self->head;
    while(it_450!=((void*)0)) {
        list$1sNodephp_add(result_449,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_450->item)));
        it_450=it_450->next;
    }
    __result292__ = gComeFunResultObject = __result_obj__ = result_449;
    come_call_finalizer3(result_449,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result288__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value305 = (void*)0;
struct list_item$1sNodeph* litem_451;
struct sNode* __dec_obj67;
void* __right_value306 = (void*)0;
struct list_item$1sNodeph* litem_452;
struct sNode* __dec_obj68;
void* __right_value307 = (void*)0;
struct list_item$1sNodeph* litem_453;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result289__;
    if(    self->len==0) {
        litem_451=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value305=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_451->prev=((void*)0);
        litem_451->next=((void*)0);
        __dec_obj67=litem_451->item;
        litem_451->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_451;
        self->head=litem_451;
    }
    else if(    self->len==1) {
        litem_452=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value306=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_452->prev=self->head;
        litem_452->next=((void*)0);
        __dec_obj68=litem_452->item;
        litem_452->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_452;
        self->head->next=litem_452;
    }
    else {
        litem_453=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value307=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_453->prev=self->tail;
        litem_453->next=((void*)0);
        __dec_obj69=litem_453->item;
        litem_453->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_453;
        self->tail=litem_453;
    }
    self->len++;
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result290__;
void* __right_value308 = (void*)0;
struct sNode* result_454;
struct sNode* __result291__;
    if(    self==(void*)0) {
        __result290__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    result_454=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_454->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_454->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_454->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_454->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_454->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_454->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_454->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_454->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_454->kind=self->kind;
    }
    __result291__ = gComeFunResultObject = __result_obj__ = result_454;
    come_call_finalizer2((void*)0, result_454, result_454 ? ((struct sNode*)result_454)->finalize:(void*)0, result_454 ? ((struct sNode*)result_454)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result293__;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct list$1charph* result_455;
struct list_item$1charph* it_456;
void* __right_value317 = (void*)0;
struct list$1charph* __result295__;
    if(    self==((void*)0)) {
        __result293__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    result_455=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_456=self->head;
    while(it_456!=((void*)0)) {
        list$1charphp_add(result_455,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_456->item)));
        it_456=it_456->next;
    }
    __result295__ = gComeFunResultObject = __result_obj__ = result_455;
    come_call_finalizer3(result_455,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
struct list_item$1charph* litem_457;
char* __dec_obj72;
void* __right_value315 = (void*)0;
struct list_item$1charph* litem_458;
char* __dec_obj73;
void* __right_value316 = (void*)0;
struct list_item$1charph* litem_459;
char* __dec_obj74;
struct list$1charph* __result294__;
    if(    self->len==0) {
        litem_457=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value314=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_457->prev=((void*)0);
        litem_457->next=((void*)0);
        __dec_obj72=litem_457->item;
        litem_457->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_457;
        self->head=litem_457;
    }
    else if(    self->len==1) {
        litem_458=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value315=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_458->prev=self->head;
        litem_458->next=((void*)0);
        __dec_obj73=litem_458->item;
        litem_458->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_458;
        self->head->next=litem_458;
    }
    else {
        litem_459=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value316=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_459->prev=self->tail;
        litem_459->next=((void*)0);
        __dec_obj74=litem_459->item;
        litem_459->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_459;
        self->tail=litem_459;
    }
    self->len++;
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj84;
struct sType* __dec_obj85;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj84=self->v1;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj85=self->v2;
            come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result297__;
void* __right_value328 = (void*)0;
struct tuple2$2charphsTypeph* result_461;
void* __right_value329 = (void*)0;
char* __dec_obj86;
void* __right_value330 = (void*)0;
struct sType* __dec_obj87;
struct tuple2$2charphsTypeph* __result298__;
    if(    self==(void*)0) {
        __result297__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    result_461=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj86=result_461->v1;
        result_461->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj87=result_461->v2;
        result_461->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result298__ = gComeFunResultObject = __result_obj__ = result_461;
    come_call_finalizer3(result_461,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self){
unsigned int result_460;
    result_460=0;
    result_460+=int_get_hash_key(((int)self->v1));
    result_460+=int_get_hash_key(((int)self->v2));
    return result_460;
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
char* __dec_obj88;
struct sType* __dec_obj89;
struct tuple2$2charphsTypeph* __result299__;
    __dec_obj88=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj89=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj90;
struct sType* __dec_obj91;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj90=self->v1;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj91=self->v2;
            come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_462;
struct list_item$1voidph* prev_it_463;
struct list$1voidph* __result300__;
    it_462=self->head;
    while(it_462!=((void*)0)) {
        prev_it_463=it_462;
        it_462=it_462->next;
        come_call_finalizer3(prev_it_463,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result300__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
char* __dec_obj95;
void* __right_value344 = (void*)0;
struct sClass* __dec_obj101;
struct sStructNode* __result304__;
    ((struct sNodeBase*)(__right_value336=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value336,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj101=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj101,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value345 = (void*)0;
char* __result305__;
    __result305__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value345=__builtin_string("sStructNode")));
    __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_466;
void* __right_value346 = (void*)0;
char* name_467;
_Bool __result306__;
    klass_466=(struct sClass*)come_increment_ref_count(self->mClass);
    name_467=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_466,info);
    __result306__ = (_Bool)1;
    come_call_finalizer3(klass_466,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_467 = come_decrement_ref_count2(name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result306__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj94;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj94=self->sname;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result302__;
void* __right_value338 = (void*)0;
struct sClass* result_465;
void* __right_value339 = (void*)0;
char* __dec_obj96;
void* __right_value340 = (void*)0;
struct list$1voidph* __dec_obj97;
void* __right_value341 = (void*)0;
char* __dec_obj98;
void* __right_value342 = (void*)0;
char* __dec_obj99;
void* __right_value343 = (void*)0;
char* __dec_obj100;
struct sClass* __result303__;
    if(    self==(void*)0) {
        __result302__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    result_465=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_465->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_465->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_465->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_465->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_465->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_465->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_465->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_465->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj96=result_465->mName;
        result_465->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_465->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_465->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj97=result_465->mFields;
        result_465->mFields=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mFields));
        come_call_finalizer3(__dec_obj97,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_465->mOutputed=self->mOutputed;
    }
    if(    self!=((void*)0)) {
        result_465->mOutputed2=self->mOutputed2;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj98=result_465->mDeclareSName;
        result_465->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_465->mNobodyStruct=self->mNobodyStruct;
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj99=result_465->mParentClassName;
        result_465->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj100=result_465->mAttribute;
        result_465->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result303__ = gComeFunResultObject = __result_obj__ = result_465;
    come_call_finalizer3(result_465,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_464;
    result_464=0;
    result_464+=int_get_hash_key(((int)self->mStruct));
    result_464+=int_get_hash_key(((int)self->mFloat));
    result_464+=int_get_hash_key(((int)self->mUnion));
    result_464+=int_get_hash_key(((int)self->mGenerics));
    result_464+=int_get_hash_key(((int)self->mMethodGenerics));
    result_464+=int_get_hash_key(((int)self->mEnum));
    result_464+=int_get_hash_key(((int)self->mProtocol));
    result_464+=int_get_hash_key(((int)self->mNumber));
    result_464+=int_get_hash_key(((int)self->mName));
    result_464+=int_get_hash_key(((int)self->mGenericsNum));
    result_464+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_464+=int_get_hash_key(((int)self->mFields));
    result_464+=int_get_hash_key(((int)self->mOutputed));
    result_464+=int_get_hash_key(((int)self->mOutputed2));
    result_464+=int_get_hash_key(((int)self->mDeclareSName));
    result_464+=int_get_hash_key(((int)self->mNobodyStruct));
    result_464+=int_get_hash_key(((int)self->mParentClassName));
    result_464+=int_get_hash_key(((int)self->mAttribute));
    return result_464;
}

static void sStructNode_finalize(struct sStructNode* self){
char* __dec_obj102;
char* __dec_obj103;
struct sClass* __dec_obj104;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj102=self->sname;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj103=self->mName;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj104=self->mClass;
            come_call_finalizer3(__dec_obj104,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
char* __dec_obj105;
void* __right_value349 = (void*)0;
struct sClass* __dec_obj106;
struct sStructNobodyNode* __result307__;
    ((struct sNodeBase*)(__right_value347=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value347,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj105=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj106=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj106,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
void* __right_value350 = (void*)0;
char* __result308__;
    __result308__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value350=__builtin_string("sStructNobodyNode")));
    __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __right_value351 = (void*)0;
char* name_468;
struct sClass* klass_469;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
_Bool __result309__;
    name_468=(char*)come_increment_ref_count(__builtin_string(self->mName));
    klass_469=self->mClass;
    map$2charphbufferphp_insert(info->previous_struct_definition,(char*)come_increment_ref_count(name_468),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value352=xsprintf("struct %s;\n",name_468))))));
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result309__ = (_Bool)1;
    name_468 = come_decrement_ref_count2(name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result309__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
char* __dec_obj107;
char* __dec_obj108;
struct sClass* __dec_obj109;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj107=self->sname;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj108=self->mName;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj109=self->mClass;
            come_call_finalizer3(__dec_obj109,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
struct sNothingNode* __result310__;
    ((struct sNodeBase*)(__right_value354=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value354,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
char* __result311__;
    __result311__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value355=__builtin_string("sNothingNode")));
    __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNothingNode_finalize(struct sNothingNode* self){
char* __dec_obj110;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj110=self->sname;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_nothing_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value360 = (void*)0;
struct sNode* __result314__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 314, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value357=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 314, "struct sNothingNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    __result314__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value360=_inf_value1));
    come_call_finalizer3(__right_value357,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value360) { __right_value360 = come_decrement_ref_count2(__right_value360, ((struct sNode*)__right_value360)->finalize, ((struct sNode*)__right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__=(void*)0;
struct sNothingNode* __result312__;
void* __right_value358 = (void*)0;
struct sNothingNode* result_471;
void* __right_value359 = (void*)0;
char* __dec_obj111;
struct sNothingNode* __result313__;
    if(    self==(void*)0) {
        __result312__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    result_471=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode", sNothingNode_finalize, sNothingNode_clone, sNothingNode_get_hash_key, sNothingNode_equals));
    if(    self!=((void*)0)) {
        result_471->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj111=result_471->sname;
        result_471->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_471->sline_real=self->sline_real;
    }
    __result313__ = gComeFunResultObject = __result_obj__ = result_471;
    come_call_finalizer3(result_471,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static unsigned int sNothingNode_get_hash_key(struct sNothingNode* self){
unsigned int result_470;
    result_470=0;
    result_470+=int_get_hash_key(((int)self->sline));
    result_470+=int_get_hash_key(((int)self->sname));
    result_470+=int_get_hash_key(((int)self->sline_real));
    return result_470;
}

static _Bool sNothingNode_equals(struct sNothingNode* left, struct sNothingNode* right){
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

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
char* __dec_obj112;
void* __right_value363 = (void*)0;
struct sClass* __dec_obj113;
struct list$1sNodeph* __dec_obj114;
struct sClassNode* __result315__;
    ((struct sNodeBase*)(__right_value361=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value361,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj112=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj113,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj114=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer3(__dec_obj114,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result315__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
char* __result316__;
    __result316__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value364=__builtin_string("sClassNode")));
    __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __right_value365 = (void*)0;
struct sClass* klass_472;
void* __right_value366 = (void*)0;
char* name_473;
void* __right_value367 = (void*)0;
_Bool _if_conditional2;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
_Bool _elif_conditional1;
void* __right_value370 = (void*)0;
struct sClass* klass2_474;
void* __right_value371 = (void*)0;
struct list$1voidph* __dec_obj119;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct sType* type_475;
void* __right_value374 = (void*)0;
struct sType* override__476;
void* __right_value380 = (void*)0;
struct list$1sNodeph* o2_saved_498;
struct sNode* it_501;
_Bool Value_504;
_Bool __result334__;
_Bool __result335__;
    klass_472=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
    name_473=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    (_if_conditional2=(((struct sClass*)(__right_value367=map$2charphsClassphp_at(info->classes,name_473,((void*)0))))==((void*)0))),    come_call_finalizer3(__right_value367,sClass_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(name_473),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_472)));
    }
    else if(    (_elif_conditional1=(list$1voidphp_length(((struct sClass*)(__right_value369=map$2charphsClassphp_at(info->classes,name_473,((void*)0))))->mFields)==0&&list$1voidphp_length(klass_472->mFields)>0)),    come_call_finalizer3(__right_value369,sClass_finalize, 0, 1, 0, 0, (void*)0),
    _elif_conditional1) {
        klass2_474=((struct sClass*)(__right_value370=map$2charphsClassphp_at(info->classes,name_473,((void*)0))));
        come_call_finalizer3(__right_value370,sClass_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj119=klass2_474->mFields;
        klass2_474->mFields=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, klass_472->mFields));
        come_call_finalizer3(__dec_obj119,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_475=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 352, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),name_473,(_Bool)0,info));
    override__476=((struct sType*)(__right_value374=map$2charphsTypephp_at(info->types,name_473,((void*)0))));
    come_call_finalizer3(__right_value374,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    override__476) {
        if(        override__476->mTypedef) {
            type_475->mTypedef=(_Bool)1;
        }
    }
    map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(name_473),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_475)));
    output_struct(klass_472,info);
    for(    o2_saved_498=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_501=list$1sNodephp_begin((o2_saved_498));    !list$1sNodephp_end((o2_saved_498));    it_501=list$1sNodephp_next((o2_saved_498))    ){
        Value_504=node_compile(it_501,info);
        if(        !Value_504) {
            __result334__ = (_Bool)0;
            come_call_finalizer3(o2_saved_498,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(klass_472,sClass_finalize, 0, 0, 0, 0, (void*)0);
            name_473 = come_decrement_ref_count2(name_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result334__;
        }
        else {
        }
    }
    come_call_finalizer3(o2_saved_498,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    output_struct_come_header(klass_472,info);
    __result335__ = (_Bool)1;
    come_call_finalizer3(klass_472,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_473 = come_decrement_ref_count2(name_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result335__;
}

static void sClassNode_finalize(struct sClassNode* self){
char* __dec_obj115;
char* __dec_obj116;
struct sClass* __dec_obj117;
struct list$1sNodeph* __dec_obj118;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj115=self->sname;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj116=self->mName;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj117=self->mClass;
            come_call_finalizer3(__dec_obj117,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        if(        self->mMethods==gComeFunResultObject) {
            __dec_obj118=self->mMethods;
            come_call_finalizer3(__dec_obj118,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_477;
unsigned int it_478;
struct sType* __result317__;
struct sType* __result318__;
struct sType* __result319__;
struct sType* __result320__;
    hash_477=string_get_hash_key(((char*)key))%self->size;
    it_478=hash_477;
    while((_Bool)1) {
        if(        self->item_existance[it_478]) {
            if(            string_equals(self->keys[it_478],key)) {
                __result317__ = gComeFunResultObject = __result_obj__ = self->items[it_478];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result317__;
            }
            it_478++;
            if(            it_478>=self->size) {
                it_478=0;
            }
            else if(            it_478==hash_477) {
                __result318__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result318__;
            }
        }
        else {
            __result319__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result319__;
        }
    }
    __result320__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct map$2charphsTypeph* map$2charphsTypephp_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_494;
unsigned int it_495;
_Bool same_key_exist_496;
char* it2_497;
struct map$2charphsTypeph* __result327__;
    if(    self->len*10>=self->size) {
        map$2charphsTypephp_rehash(self);
    }
    hash_494=string_get_hash_key(key)%self->size;
    it_495=hash_494;
    while((_Bool)1) {
        if(        self->item_existance[it_495]) {
            if(            string_equals(self->keys[it_495],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_495]);
                    self->keys[it_495] = come_decrement_ref_count2(self->keys[it_495], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_495]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_495]);
                    self->keys[it_495]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_495],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_495]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_495]=item;
                }
                break;
            }
            it_495++;
            if(            it_495>=self->size) {
                it_495=0;
            }
            else if(            it_495==hash_494) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_495]=(_Bool)1;
            if(            1) {
                self->keys[it_495]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_495]=key;
            }
            if(            1) {
                self->items[it_495]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_495]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_496=(_Bool)0;
    for(    it2_497=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_497=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_497,key)) {
            same_key_exist_496=(_Bool)1;
        }
    }
    if(    !same_key_exist_496) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static void map$2charphsTypephp_rehash(struct map$2charphsTypeph* self){
int size_479;
void* __right_value375 = (void*)0;
char** keys_480;
void* __right_value376 = (void*)0;
struct sType** items_481;
void* __right_value377 = (void*)0;
_Bool* item_existance_482;
int len_483;
char* it_486;
struct sType* default_value_489;
void* __right_value378 = (void*)0;
struct sType* it2_490;
unsigned int hash_491;
int n_492;
struct sType* default_value_493;
void* __right_value379 = (void*)0;
default_value_489 = (void*)0;
default_value_493 = (void*)0;
    size_479=self->size*10;
    keys_480=(char**)come_increment_ref_count(((char**)(__right_value375=(char**)come_calloc(1, sizeof(char*)*(1*(size_479)), "/usr/local/include/comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_481=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value376=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_479)), "/usr/local/include/comelang.h", 2809, "struct sType**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_482=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value377=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_479)), "/usr/local/include/comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_483=0;
    for(    it_486=map$2charphsTypephp_begin(self);    !map$2charphsTypephp_end(self);    it_486=map$2charphsTypephp_next(self)    ){
        memset(&default_value_489,0,sizeof(struct sType*));
        it2_490=((struct sType*)(__right_value378=map$2charphsTypephp_at(self,it_486,default_value_489)));
        come_call_finalizer3(__right_value378,sType_finalize, 0, 1, 0, 0, (void*)0);
        hash_491=string_get_hash_key(it_486)%size_479;
        n_492=hash_491;
        while((_Bool)1) {
            if(            item_existance_482[n_492]) {
                n_492++;
                if(                n_492>=size_479) {
                    n_492=0;
                }
                else if(                n_492==hash_491) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_482[n_492]=(_Bool)1;
                keys_480[n_492]=it_486;
                items_481[n_492]=((struct sType*)(__right_value379=map$2charphsTypephp_at(self,it_486,default_value_493)));
                come_call_finalizer3(__right_value379,sType_finalize, 0, 1, 0, 0, (void*)0);
                len_483++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_480;
    self->items=items_481;
    self->item_existance=item_existance_482;
    self->size=size_479;
    self->len=len_483;
}

static char* map$2charphsTypephp_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_484;
char* __result321__;
char* __result322__;
char* result_485;
char* __result323__;
result_484 = (void*)0;
result_485 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_484,0,sizeof(char*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_484;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_485,0,sizeof(char*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_485;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static _Bool map$2charphsTypephp_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypephp_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_487;
char* __result324__;
char* __result325__;
char* result_488;
char* __result326__;
result_487 = (void*)0;
result_488 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_487,0,sizeof(char*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_487;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_488,0,sizeof(char*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_488;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_499;
struct sNode* __result328__;
struct sNode* __result329__;
struct sNode* result_500;
struct sNode* __result330__;
result_499 = (void*)0;
result_500 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_499,0,sizeof(struct sNode*));
        __result328__ = gComeFunResultObject = __result_obj__ = result_499;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    self->it=self->head;
    if(    self->it) {
        __result329__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    memset(&result_500,0,sizeof(struct sNode*));
    __result330__ = gComeFunResultObject = __result_obj__ = result_500;
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_502;
struct sNode* __result331__;
struct sNode* __result332__;
struct sNode* result_503;
struct sNode* __result333__;
result_502 = (void*)0;
result_503 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_502,0,sizeof(struct sNode*));
        __result331__ = gComeFunResultObject = __result_obj__ = result_502;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result332__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    memset(&result_503,0,sizeof(struct sNode*));
    __result333__ = gComeFunResultObject = __result_obj__ = result_503;
    gComeFunResultObject = (void*)0;
    return __result333__;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sClass* klass_505;
void* __right_value381 = (void*)0;
_Bool _if_conditional3;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct sType* type_506;
void* __right_value388 = (void*)0;
struct sType* override__507;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sType* type_508;
void* __right_value394 = (void*)0;
struct sType* override__509;
void* __right_value395 = (void*)0;
struct sClass* parent_class_510;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
char* parent_class_name_511;
void* __right_value398 = (void*)0;
struct sNode* __result336__;
_Bool multiple_declare_512;
char* p_513;
int sline_514;
void* __right_value399 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_515=0;
char* name_516=0;
_Bool err_517=0;
void* __right_value400 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* base_type_518=0;
char* name_519=0;
_Bool err_520=0;
void* __right_value401 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var6 = (void*)0;
struct sType* type2_521=0;
char* name2_522=0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7 = (void*)0;
struct sType* type2_523=0;
char* name2_524=0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_525=0;
char* name_526=0;
_Bool err_527=0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
char* struct_attribute2_528;
void* __right_value411 = (void*)0;
char* __dec_obj124;
void* __right_value412 = (void*)0;
char* __dec_obj125;
char* __dec_obj126;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
char* __dec_obj127;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value422 = (void*)0;
struct sNode* node_529;
_Bool Value_532;
struct sNode* __result339__;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value425 = (void*)0;
struct sNode* __result340__;
klass_505 = (void*)0;
    if(    (_if_conditional3=(((struct sClass*)(__right_value381=map$2charphsClassphp_at(info->classes,type_name,((void*)0))))==((void*)0))),    come_call_finalizer3(__right_value381,sClass_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional3) {
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 379, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),((char*)(__right_value384=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_506=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 380, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name,(_Bool)0,info));
        override__507=((struct sType*)(__right_value388=map$2charphsTypephp_at(info->types,type_name,((void*)0))));
        come_call_finalizer3(__right_value388,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        override__507) {
            if(            override__507->mTypedef) {
                type_506->mTypedef=(_Bool)1;
            }
        }
        map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_506)));
        klass_505=((struct sClass*)(__right_value390=map$2charphsClassphp_at(info->classes,type_name,((void*)0))));
        come_call_finalizer3(__right_value390,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_505=((struct sClass*)(__right_value391=map$2charphsClassphp_at(info->classes,type_name,((void*)0))));
        come_call_finalizer3(__right_value391,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 393, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name,(_Bool)0,info));
        override__509=((struct sType*)(__right_value394=map$2charphsTypephp_at(info->types,type_name,((void*)0))));
        come_call_finalizer3(__right_value394,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        override__509) {
            if(            override__509->mTypedef) {
                type_508->mTypedef=(_Bool)1;
            }
        }
        map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_508)));
        come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    parent_class_510=((void*)0);
    if(    parsecmp("extends",info)) {
        ((char*)(__right_value396=parse_word(info)));
        __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_name_511=(char*)come_increment_ref_count(parse_word(info));
        parent_class_510=((struct sClass*)(__right_value398=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_511)));
        come_call_finalizer3(__right_value398,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        if(        parent_class_510==((void*)0)) {
            err_msg(info,"invalid class name(%s)",parent_class_name_511);
            __result336__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            parent_class_name_511 = come_decrement_ref_count2(parent_class_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result336__;
        }
        parent_class_name_511 = come_decrement_ref_count2(parent_class_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        multiple_declare_512=(_Bool)0;
        {
            p_513=info->p;
            sline_514=info->sline;
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value399=backtrace_parse_type((_Bool)1,info)));
            type_515=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_516=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_517=multiple_assign_var4->v3;
            come_call_finalizer3(__right_value399,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            err_517&&*info->p==44) {
                multiple_declare_512=(_Bool)1;
            }
            info->p=p_513;
            info->sline=sline_514;
            come_call_finalizer3(type_515,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_516 = come_decrement_ref_count2(name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        multiple_declare_512) {
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value400=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_518=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_519=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_520=multiple_assign_var5->v3;
            come_call_finalizer3(__right_value400,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(__right_value401=parse_variable_name((struct sType*)come_increment_ref_count(base_type_518),(_Bool)1,info)));
            type2_521=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_522=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer3(__right_value401,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1voidphp_push_back(klass_505->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 450, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_522),(struct sType*)come_increment_ref_count(type2_521))));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value404=parse_variable_name((struct sType*)come_increment_ref_count(base_type_518),(_Bool)0,info)));
                type2_523=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_524=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer3(__right_value404,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1voidphp_push_back(klass_505->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 458, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_524),(struct sType*)come_increment_ref_count(type2_523))));
                come_call_finalizer3(type2_523,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_524 = come_decrement_ref_count2(name2_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(base_type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_519 = come_decrement_ref_count2(name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_521,sType_finalize, 0, 0, 0, 0, (void*)0);
            name2_522 = come_decrement_ref_count2(name2_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value407=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_525=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_526=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_527=multiple_assign_var8->v3;
            come_call_finalizer3(__right_value407,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_527) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1voidphp_push_back(klass_505->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 469, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_526),(struct sType*)come_increment_ref_count(type2_525))));
            come_call_finalizer3(type2_525,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_526 = come_decrement_ref_count2(name_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    struct_attribute2_528=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    parent_class_510) {
        __dec_obj124=klass_505->mParentClassName;
        klass_505->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_510->mName));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(klass_505->mName),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_505)));
    }
    if(    string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2_528,"")) {
    }
    else if(    string_operator_equals(struct_attribute,"")) {
        __dec_obj125=klass_505->mAttribute;
        klass_505->mAttribute=(char*)come_increment_ref_count(struct_attribute2_528);
        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(struct_attribute2_528,"")) {
        __dec_obj126=klass_505->mAttribute;
        klass_505->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj127=klass_505->mAttribute;
        klass_505->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute,((char*)(__right_value413=charp_operator_add(" ",struct_attribute2_528)))));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 505, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value417=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 505, "struct sStructNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_505,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    node_529=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value417,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    Value_532=node_compile(node_529,info);
    if(    !Value_532) {
        __result339__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        struct_attribute2_528 = come_decrement_ref_count2(struct_attribute2_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_529) { node_529 = come_decrement_ref_count2(node_529, ((struct sNode*)node_529)->finalize, ((struct sNode*)node_529)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 511, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value424=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 511, "struct sNothingNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value425=_inf_value3));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    struct_attribute2_528 = come_decrement_ref_count2(struct_attribute2_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(node_529) { node_529 = come_decrement_ref_count2(node_529, ((struct sNode*)node_529)->finalize, ((struct sNode*)node_529)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value424,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value425) { __right_value425 = come_decrement_ref_count2(__right_value425, ((struct sNode*)__right_value425)->finalize, ((struct sNode*)__right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj120;
char* __dec_obj121;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj120=self->v1;
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj121=self->v2;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj122;
char* __dec_obj123;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj122=self->v1;
            come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj123=self->v2;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__=(void*)0;
struct sStructNode* __result337__;
void* __right_value418 = (void*)0;
struct sStructNode* result_531;
void* __right_value419 = (void*)0;
char* __dec_obj128;
void* __right_value420 = (void*)0;
char* __dec_obj129;
void* __right_value421 = (void*)0;
struct sClass* __dec_obj130;
struct sStructNode* __result338__;
    if(    self==(void*)0) {
        __result337__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    result_531=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode", sStructNode_finalize, sStructNode_clone, sStructNode_get_hash_key, sStructNode_equals));
    if(    self!=((void*)0)) {
        result_531->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj128=result_531->sname;
        result_531->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_531->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj129=result_531->mName;
        result_531->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj130=result_531->mClass;
        result_531->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj130,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result338__ = gComeFunResultObject = __result_obj__ = result_531;
    come_call_finalizer3(result_531,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static unsigned int sStructNode_get_hash_key(struct sStructNode* self){
unsigned int result_530;
    result_530=0;
    result_530+=int_get_hash_key(((int)self->sline));
    result_530+=int_get_hash_key(((int)self->sname));
    result_530+=int_get_hash_key(((int)self->sline_real));
    result_530+=int_get_hash_key(((int)self->mName));
    result_530+=int_get_hash_key(((int)self->mClass));
    return result_530;
}

static _Bool sStructNode_equals(struct sStructNode* left, struct sStructNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

char* parse_struct_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct buffer* result_533;
char* head_534;
char* tail_535;
void* __right_value428 = (void*)0;
char* __result341__;
    parse_sharp_v5(info);
    result_533=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 517, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while(1) {
        if(        memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
            head_534=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_535=info->p;
            buffer_append(result_533,head_534,tail_535-head_534);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result341__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value428=buffer_to_string(result_533)));
    come_call_finalizer3(result_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_536;
void* __right_value429 = (void*)0;
char* struct_attribute_537;
void* __right_value430 = (void*)0;
char* type_name_538;
struct sClass* struct_class_539;
void* __right_value431 = (void*)0;
_Bool _if_conditional4;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct sType* type_540;
void* __right_value437 = (void*)0;
struct sType* override__541;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sType* type_542;
void* __right_value441 = (void*)0;
struct sType* override__543;
char* source_tail_544;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct buffer* header_545;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value452 = (void*)0;
struct sNode* __result344__;
void* __right_value453 = (void*)0;
char* T_550;
void* __right_value454 = (void*)0;
struct sClass* generics_class_551;
void* __right_value455 = (void*)0;
_Bool _if_conditional5;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sClass* __dec_obj134;
void* __right_value458 = (void*)0;
_Bool _if_conditional6;
void* __right_value459 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type2_552=0;
char* name_553=0;
_Bool err_554=0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
char* name2_555;
void* __right_value463 = (void*)0;
struct sType* type3_556;
_Bool no_comma_557;
void* __right_value464 = (void*)0;
struct sNode* node_558;
struct sNode* __dec_obj135;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
char* source_tail_559;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct buffer* header_560;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value475 = (void*)0;
struct sNode* __result346__;
struct sClass* struct_class_561;
void* __right_value476 = (void*)0;
_Bool _if_conditional7;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* type_562;
void* __right_value481 = (void*)0;
struct sType* override__563;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* type_564;
void* __right_value485 = (void*)0;
struct sType* override__565;
void* __right_value486 = (void*)0;
struct sClass* parent_class_566;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
char* parent_class_name_567;
void* __right_value489 = (void*)0;
struct sNode* __result347__;
_Bool multiple_declare_568;
char* p_569;
int sline_570;
void* __right_value490 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_571=0;
char* name_572=0;
_Bool err_573=0;
void* __right_value491 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* base_type_574=0;
char* name_575=0;
_Bool err_576=0;
void* __right_value492 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var12 = (void*)0;
struct sType* type2_577=0;
char* name2_578=0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var13 = (void*)0;
struct sType* type2_579=0;
char* name2_580=0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var14 = (void*)0;
struct sType* type2_581=0;
char* name_582=0;
_Bool err_583=0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
char* struct_attribute2_584;
void* __right_value502 = (void*)0;
struct sClass* klass2_585;
char* source_tail_586;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct buffer* header_587;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
char* __dec_obj138;
void* __right_value507 = (void*)0;
char* __dec_obj139;
char* __dec_obj140;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
char* __dec_obj141;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value513 = (void*)0;
struct sNode* __result348__;
char* source_head_588;
void* __right_value514 = (void*)0;
char* type_name_589;
struct sClass* parent_class_590;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
char* parent_class_name_591;
void* __right_value517 = (void*)0;
struct sNode* __result349__;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct list$1sClassp* parent_classes_592;
struct sClass* parent_class2_595;
void* __right_value523 = (void*)0;
struct sClass* struct_class_599;
void* __right_value524 = (void*)0;
_Bool _if_conditional8;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sClass* __dec_obj142;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sClass* __dec_obj143;
struct sClass* defining_class_600;
void* __right_value529 = (void*)0;
_Bool _if_conditional9;
void* __right_value530 = (void*)0;
char* __dec_obj144;
void* __right_value531 = (void*)0;
void* __right_value537 = (void*)0;
struct list$1sClassp* o2_saved_606;
struct sClass* parent_609;
struct list$1voidph* o2_saved_612;
struct tuple2$2charphsTypeph* it_613;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
_Bool _elif_conditional2;
void* __right_value540 = (void*)0;
struct sClass* klass2_614;
void* __right_value541 = (void*)0;
char* __dec_obj145;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct list$1sClassp* o2_saved_615;
struct sClass* parent_616;
struct list$1voidph* o2_saved_617;
struct tuple2$2charphsTypeph* it_618;
void* __right_value544 = (void*)0;
struct list$1voidph* o2_saved_619;
struct tuple2$2charphsTypeph* it_620;
void* __right_value545 = (void*)0;
char* head_621;
char* p_saved_622;
int sline_saved_623;
char* sname_saved_624;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct list$1sNodeph* methods_625;
void* __right_value548 = (void*)0;
char* __dec_obj146;
char* __dec_obj147;
struct map$2charphcharph* __dec_obj148;
_Bool include__628;
_Bool multiple_declare_629;
char* p_630;
int sline_631;
void* __right_value549 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15 = (void*)0;
struct sType* type_632=0;
char* name_633=0;
_Bool err_634=0;
_Bool define_function_flag_635;
char* p_636;
int sline_637;
_Bool invalid_type_638;
void* __right_value550 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16 = (void*)0;
struct sType* result_type_639=0;
char* fun_name_640=0;
_Bool err_641=0;
char* word_642;
void* __right_value551 = (void*)0;
char* __dec_obj149;
void* __right_value552 = (void*)0;
char* __dec_obj150;
char* __dec_obj151;
void* __right_value553 = (void*)0;
char* __dec_obj152;
char* tail_643;
int pointer_num_644;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sType* __dec_obj153;
void* __right_value556 = (void*)0;
struct sNode* method_645;
struct sType* __dec_obj154;
void* __right_value560 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var17 = (void*)0;
struct sType* base_type_649=0;
char* name_650=0;
_Bool err_651=0;
void* __right_value561 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var18 = (void*)0;
struct sType* type2_652=0;
char* name2_653=0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var19 = (void*)0;
struct sType* type2_654=0;
char* name2_655=0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
char* module_name_656;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct list$1charph* params_657;
void* __right_value571 = (void*)0;
char* word_658;
void* __right_value572 = (void*)0;
char* __dec_obj158;
void* __right_value573 = (void*)0;
char* __dec_obj159;
void* __right_value574 = (void*)0;
_Bool _if_conditional10;
struct sNode* __result365__;
void* __right_value575 = (void*)0;
struct sClassModule* module_662;
void* __right_value576 = (void*)0;
void* __right_value582 = (void*)0;
struct map$2charphcharph* __dec_obj165;
int i_666;
struct list$1charph* o2_saved_667;
char* it_670;
void* __right_value583 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
char* __dec_obj166;
void* __right_value592 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var20 = (void*)0;
struct sType* type2_697=0;
char* name_698=0;
_Bool err_699=0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
char* __dec_obj167;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value605 = (void*)0;
struct sNode* __result389__;
void* __right_value606 = (void*)0;
struct sNode* __result390__;
struct_class_539 = (void*)0;
generics_class_551 = (void*)0;
struct_class_561 = (void*)0;
struct_class_599 = (void*)0;
    if(    charp_operator_equals(buf,"struct")) {
        source_head_536=head;
        struct_attribute_537=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_538=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional4=(((struct sClass*)(__right_value431=map$2charphsClassphp_at(info->classes,type_name_538,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value431,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional4) {
                map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_538),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 554, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),type_name_538,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                struct_class_539=((struct sClass*)(__right_value434=map$2charphsClassphp_at(info->classes,type_name_538,((void*)0))));
                come_call_finalizer3(__right_value434,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                type_540=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 556, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_538,(_Bool)0,info));
                override__541=((struct sType*)(__right_value437=map$2charphsTypephp_at(info->types,type_name_538,((void*)0))));
                come_call_finalizer3(__right_value437,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__541) {
                    if(                    override__541->mTypedef) {
                        type_540->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(type_name_538),(struct sType*)come_increment_ref_count(type_540));
                come_call_finalizer3(type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                struct_class_539=((struct sClass*)(__right_value438=map$2charphsClassphp_at(info->classes,type_name_538,((void*)0))));
                come_call_finalizer3(__right_value438,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_538,(_Bool)0,info));
                override__543=((struct sType*)(__right_value441=map$2charphsTypephp_at(info->types,type_name_538,((void*)0))));
                come_call_finalizer3(__right_value441,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__543) {
                    if(                    override__543->mTypedef) {
                        type_542->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(type_name_538),(struct sType*)come_increment_ref_count(type_542));
                come_call_finalizer3(type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            source_tail_544=info->p;
            header_545=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 579, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append(header_545,source_head_536,source_tail_544-source_head_536);
            add_come_code_at_come_header(info,"%s",((char*)(__right_value444=buffer_to_string(header_545))));
            __right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 584, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value447=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 584, "struct sStructNobodyNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_538)),struct_class_539,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            __result344__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value452=_inf_value4));
            come_call_finalizer3(header_545,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_537 = come_decrement_ref_count2(struct_attribute_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_538 = come_decrement_ref_count2(type_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value447,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value452) { __right_value452 = come_decrement_ref_count2(__right_value452, ((struct sNode*)__right_value452)->finalize, ((struct sNode*)__right_value452)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result344__;
            come_call_finalizer3(header_545,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==60) {
            list$1charphp_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while((_Bool)1) {
                T_550=(char*)come_increment_ref_count(parse_word(info));
                list$1charphp_push_back(info->generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, T_550)));
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    T_550 = come_decrement_ref_count2(T_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    err_msg(info,"invalid generics struct definition");
                    exit(2);
                }
                T_550 = come_decrement_ref_count2(T_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional5=(((struct sClass*)(__right_value455=map$2charphsClassphp_at(info->generics_classes,type_name_538,((void*)0))))!=((void*)0))),            come_call_finalizer3(__right_value455,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional5) {
                err_msg(info,"redifined generics struct(%s)",type_name_538);
                exit(2);
            }
            else {
                __dec_obj134=generics_class_551;
                generics_class_551=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 617, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),type_name_538,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                come_call_finalizer3(__dec_obj134,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional6=(((struct sClass*)(__right_value458=map$2charphsClassphp_at(info->generics_classes,type_name_538,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value458,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional6) {
                map$2charphsClassphp_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_538),(struct sClass*)come_increment_ref_count(generics_class_551));
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value459=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_552=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_553=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_554=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value459,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_554) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44) {
                    list$1voidphp_push_back(generics_class_551->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 645, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_553),(struct sType*)come_increment_ref_count(type2_552))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_555=(char*)come_increment_ref_count(parse_word(info));
                        type3_556=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_552));
                        if(                        *info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_557=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_558=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_557;
                            __dec_obj135=type3_556->mSizeNum;
                            type3_556->mSizeNum=(struct sNode*)come_increment_ref_count(node_558);
                            if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
                            if(node_558) { node_558 = come_decrement_ref_count2(node_558, ((struct sNode*)node_558)->finalize, ((struct sNode*)node_558)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        list$1voidphp_push_back(generics_class_551->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 667, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_555),(struct sType*)come_increment_ref_count(type3_556))));
                        name2_555 = come_decrement_ref_count2(name2_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type3_556,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    list$1voidphp_push_back(generics_class_551->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 671, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_553),(struct sType*)come_increment_ref_count(type2_552))));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(type2_552,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_553 = come_decrement_ref_count2(name_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                parse_sharp_v5(info);
                come_call_finalizer3(type2_552,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_553 = come_decrement_ref_count2(name_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            ((struct tuple2$2charphcharph*)(__right_value469=parse_attribute(info,(_Bool)0)));
            come_call_finalizer3(__right_value469,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charphp_reset(info->generics_type_names);
            source_tail_559=info->p;
            header_560=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 696, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append_str(header_560,"struct ");
            buffer_append(header_560,source_head_536,source_tail_559-source_head_536);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value472=buffer_to_string(header_560))));
            __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 702, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value474=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 702, "struct sNothingNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            __result346__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value475=_inf_value5));
            come_call_finalizer3(generics_class_551,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_560,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_537 = come_decrement_ref_count2(struct_attribute_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_538 = come_decrement_ref_count2(type_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value474,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value475) { __right_value475 = come_decrement_ref_count2(__right_value475, ((struct sNode*)__right_value475)->finalize, ((struct sNode*)__right_value475)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result346__;
            come_call_finalizer3(generics_class_551,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_560,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(            (_if_conditional7=(((struct sClass*)(__right_value476=map$2charphsClassphp_at(info->classes,type_name_538,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value476,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional7) {
                map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_538),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 707, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),type_name_538,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                type_562=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 709, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_538,(_Bool)0,info));
                override__563=((struct sType*)(__right_value481=map$2charphsTypephp_at(info->types,type_name_538,((void*)0))));
                come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__563) {
                    if(                    override__563->mTypedef) {
                        type_562->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(type_name_538),(struct sType*)come_increment_ref_count(type_562));
                struct_class_561=((struct sClass*)(__right_value482=map$2charphsClassphp_at(info->classes,type_name_538,((void*)0))));
                come_call_finalizer3(__right_value482,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                type_564=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 721, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_538,(_Bool)0,info));
                override__565=((struct sType*)(__right_value485=map$2charphsTypephp_at(info->types,type_name_538,((void*)0))));
                come_call_finalizer3(__right_value485,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__565) {
                    if(                    override__565->mTypedef) {
                        type_564->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(type_name_538),(struct sType*)come_increment_ref_count(type_564));
                struct_class_561=((struct sClass*)(__right_value486=map$2charphsClassphp_at(info->classes,type_name_538,((void*)0))));
                come_call_finalizer3(__right_value486,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            parent_class_566=((void*)0);
            if(            parsecmp("extends",info)) {
                ((char*)(__right_value487=parse_word(info)));
                __right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_name_567=(char*)come_increment_ref_count(parse_word(info));
                parent_class_566=((struct sClass*)(__right_value489=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_567)));
                come_call_finalizer3(__right_value489,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                parent_class_566==((void*)0)) {
                    err_msg(info,"invalid class name(%s)",parent_class_name_567);
                    __result347__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    parent_class_name_567 = come_decrement_ref_count2(parent_class_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    struct_attribute_537 = come_decrement_ref_count2(struct_attribute_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_538 = come_decrement_ref_count2(type_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result347__;
                }
                parent_class_name_567 = come_decrement_ref_count2(parent_class_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_declare_568=(_Bool)0;
                {
                    p_569=info->p;
                    sline_570=info->sline;
                    multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value490=backtrace_parse_type((_Bool)1,info)));
                    type_571=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_572=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_573=multiple_assign_var10->v3;
                    come_call_finalizer3(__right_value490,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_573&&*info->p==44) {
                        multiple_declare_568=(_Bool)1;
                    }
                    info->p=p_569;
                    info->sline=sline_570;
                    come_call_finalizer3(type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_572 = come_decrement_ref_count2(name_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(                multiple_declare_568) {
                    multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value491=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_574=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                    name_575=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    err_576=multiple_assign_var11->v3;
                    come_call_finalizer3(__right_value491,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var12=((struct tuple2$2sTypephcharph*)(__right_value492=parse_variable_name((struct sType*)come_increment_ref_count(base_type_574),(_Bool)1,info)));
                    type2_577=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                    name2_578=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                    come_call_finalizer3(__right_value492,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1voidphp_push_back(struct_class_561->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 778, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_578),(struct sType*)come_increment_ref_count(type2_577))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var13=((struct tuple2$2sTypephcharph*)(__right_value495=parse_variable_name((struct sType*)come_increment_ref_count(base_type_574),(_Bool)0,info)));
                        type2_579=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_580=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer3(__right_value495,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1voidphp_push_back(struct_class_561->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 786, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_580),(struct sType*)come_increment_ref_count(type2_579))));
                        come_call_finalizer3(type2_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_580 = come_decrement_ref_count2(name2_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(base_type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_575 = come_decrement_ref_count2(name_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_577,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name2_578 = come_decrement_ref_count2(name2_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(__right_value498=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_581=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                    name_582=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    err_583=multiple_assign_var14->v3;
                    come_call_finalizer3(__right_value498,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_583) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1voidphp_push_back(struct_class_561->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 796, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_582),(struct sType*)come_increment_ref_count(type2_581))));
                    come_call_finalizer3(type2_581,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_582 = come_decrement_ref_count2(name_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            struct_attribute2_584=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1charphp_reset(info->generics_type_names);
            klass2_585=((struct sClass*)(__right_value502=map$2charphsClassphp_at(info->classes,type_name_538,((void*)0))));
            come_call_finalizer3(__right_value502,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            source_tail_586=info->p;
            header_587=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 823, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append(header_587,source_head_536,source_tail_586-source_head_536);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value505=buffer_to_string(header_587))));
            __right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            parent_class_566) {
                __dec_obj138=struct_class_561->mParentClassName;
                struct_class_561->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_566->mName));
                __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(struct_class_561->mName),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_561)));
            }
            if(            string_operator_equals(struct_attribute_537,"")&&string_operator_equals(struct_attribute2_584,"")) {
            }
            else if(            string_operator_equals(struct_attribute_537,"")) {
                __dec_obj139=struct_class_561->mAttribute;
                struct_class_561->mAttribute=(char*)come_increment_ref_count(struct_attribute2_584);
                __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            string_operator_equals(struct_attribute2_584,"")) {
                __dec_obj140=struct_class_561->mAttribute;
                struct_class_561->mAttribute=(char*)come_increment_ref_count(struct_attribute_537);
                __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj141=struct_class_561->mAttribute;
                struct_class_561->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute_537,((char*)(__right_value508=charp_operator_add(" ",struct_attribute2_584)))));
                __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 845, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value512=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 845, "struct sStructNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_538)),struct_class_561,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            __result348__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value513=_inf_value6));
            struct_attribute2_584 = come_decrement_ref_count2(struct_attribute2_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_587,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_537 = come_decrement_ref_count2(struct_attribute_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_538 = come_decrement_ref_count2(type_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value512,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value513) { __right_value513 = come_decrement_ref_count2(__right_value513, ((struct sNode*)__right_value513)->finalize, ((struct sNode*)__right_value513)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result348__;
            struct_attribute2_584 = come_decrement_ref_count2(struct_attribute2_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_587,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        struct_attribute_537 = come_decrement_ref_count2(struct_attribute_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_538 = come_decrement_ref_count2(type_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"class")) {
        source_head_588=head;
        type_name_589=(char*)come_increment_ref_count(parse_word(info));
        add_come_code_at_come_header(info,"struct %s;\n",type_name_589);
        parent_class_590=((void*)0);
        if(        parsecmp("extends",info)) {
            ((char*)(__right_value515=parse_word(info)));
            __right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parent_class_name_591=(char*)come_increment_ref_count(parse_word(info));
            parent_class_590=((struct sClass*)(__right_value517=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_591)));
            come_call_finalizer3(__right_value517,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(            parent_class_590==((void*)0)) {
                err_msg(info,"invalid class name(%s)",parent_class_name_591);
                __result349__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                parent_class_name_591 = come_decrement_ref_count2(parent_class_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name_589 = come_decrement_ref_count2(type_name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result349__;
            }
            parent_class_name_591 = come_decrement_ref_count2(parent_class_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        parent_classes_592=(struct list$1sClassp*)come_increment_ref_count(list$1sClasspp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 869, "struct list$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        parent_class2_595=parent_class_590;
        while(parent_class2_595) {
            list$1sClasspp_add(parent_classes_592,parent_class2_595);
            if(            parent_class_590->mParentClassName) {
                parent_class2_595=((struct sClass*)(__right_value523=map$2charphsClassphp_operator_load_element(info->classes,parent_class_590->mParentClassName)));
                come_call_finalizer3(__right_value523,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                parent_class2_595=((void*)0);
            }
        }
        if(        (_if_conditional8=(((struct sClass*)(__right_value524=map$2charphsClassphp_at(info->classes,type_name_589,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value524,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional8) {
            __dec_obj142=struct_class_599;
            struct_class_599=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 884, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),type_name_589,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            come_call_finalizer3(__dec_obj142,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj143=struct_class_599;
            struct_class_599=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, ((struct sClass*)(__right_value527=map$2charphsClassphp_at(info->classes,type_name_589,((void*)0))))));
            come_call_finalizer3(__dec_obj143,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value527,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        defining_class_600=info->defining_class;
        info->defining_class=struct_class_599;
        if(        (_if_conditional9=(((struct sClass*)(__right_value529=map$2charphsClassphp_at(info->classes,type_name_589,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value529,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional9) {
            if(            parent_class_590) {
                __dec_obj144=struct_class_599->mParentClassName;
                struct_class_599->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_590->mName));
                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_589),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_599)));
            for(            o2_saved_606=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value537=list$1sClasspp_reverse(parent_classes_592))))),parent_609=list$1sClasspp_begin((o2_saved_606)) ,            come_call_finalizer3(__right_value537,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClasspp_end((o2_saved_606));            parent_609=list$1sClasspp_next((o2_saved_606))            ){
                for(                o2_saved_612=(struct list$1voidph*)come_increment_ref_count((parent_609->mFields)),it_613=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_612)));                !list$1voidphp_end((o2_saved_612));                it_613=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_612)))                ){
                    list$1voidphp_add(struct_class_599->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, it_613)));
                }
                come_call_finalizer3(o2_saved_612,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_606,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        (_elif_conditional2=(list$1voidphp_length(((struct sClass*)(__right_value539=map$2charphsClassphp_at(info->classes,type_name_589,((void*)0))))->mFields)==0&&list$1voidphp_length(struct_class_599->mFields)>0)),        come_call_finalizer3(__right_value539,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _elif_conditional2) {
            klass2_614=((struct sClass*)(__right_value540=map$2charphsClassphp_at(info->classes,type_name_589,((void*)0))));
            come_call_finalizer3(__right_value540,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(            parent_class_590) {
                __dec_obj145=klass2_614->mParentClassName;
                klass2_614->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_590->mName));
                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_589),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass2_614)));
            for(            o2_saved_615=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value543=list$1sClasspp_reverse(parent_classes_592))))),parent_616=list$1sClasspp_begin((o2_saved_615)) ,            come_call_finalizer3(__right_value543,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClasspp_end((o2_saved_615));            parent_616=list$1sClasspp_next((o2_saved_615))            ){
                for(                o2_saved_617=(struct list$1voidph*)come_increment_ref_count((parent_616->mFields)),it_618=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_617)));                !list$1voidphp_end((o2_saved_617));                it_618=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_617)))                ){
                    list$1voidphp_add(klass2_614->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, it_618)));
                }
                come_call_finalizer3(o2_saved_617,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_615,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_619=(struct list$1voidph*)come_increment_ref_count((struct_class_599->mFields)),it_620=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_619)));            !list$1voidphp_end((o2_saved_619));            it_620=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_619)))            ){
                list$1voidphp_add(klass2_614->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, it_620)));
            }
            come_call_finalizer3(o2_saved_619,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        expected_next_character(123,info);
        head_621=info->p;
        p_saved_622=((void*)0);
        sline_saved_623=0;
        sname_saved_624=((void*)0);
        methods_625=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 931, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            p_saved_622) {
                if(                *info->p==0) {
                    info->p=p_saved_622;
                    info->sline=sline_saved_623;
                    __dec_obj146=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_624));
                    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_622=((void*)0);
                    sline_saved_623=0;
                    __dec_obj147=sname_saved_624;
                    sname_saved_624=((void*)0);
                    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj148=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj148,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__628=parsecmp("include",info);
            multiple_declare_629=(_Bool)0;
            if(            include__628==(_Bool)0) {
                p_630=info->p;
                sline_631=info->sline;
                if(                memcmp(info->p,"new(",4)!=0) {
                    multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value549=backtrace_parse_type((_Bool)1,info)));
                    type_632=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_633=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_634=multiple_assign_var15->v3;
                    come_call_finalizer3(__right_value549,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_634&&*info->p==44) {
                        multiple_declare_629=(_Bool)1;
                    }
                    come_call_finalizer3(type_632,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_633 = come_decrement_ref_count2(name_633, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_630;
                info->sline=sline_631;
            }
            define_function_flag_635=(_Bool)0;
            if(            include__628==(_Bool)0) {
                p_636=info->p;
                sline_637=info->sline;
                if(                memcmp(info->p,"new(",4)==0) {
                    define_function_flag_635=(_Bool)1;
                }
                else {
                    invalid_type_638=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value550=backtrace_parse_type((_Bool)0,info)));
                        result_type_639=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        fun_name_640=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_641=multiple_assign_var16->v3;
                        come_call_finalizer3(__right_value550,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(result_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_640 = come_decrement_ref_count2(fun_name_640, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    word_642=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj149=word_642;
                        word_642=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_642,"extern")) {
                            __dec_obj150=word_642;
                            word_642=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                    }
                    else {
                        __dec_obj151=word_642;
                        word_642=((void*)0);
                        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_642) {
                        if(                        is_type_name(word_642,info)) {
                            while(*info->p==42) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==91&&*(info->p+1)==93) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            xisalnum(*info->p)||*info->p==95) {
                                __dec_obj152=word_642;
                                word_642=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        if(                        strlen(word_642)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                            define_function_flag_635=(_Bool)1;
                        }
                    }
                    word_642 = come_decrement_ref_count2(word_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_636;
                info->sline=sline_637;
            }
            if(            define_function_flag_635) {
                tail_643=info->p;
                pointer_num_644=1;
                __dec_obj153=info->impl_type;
                info->impl_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 1041, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_589,(_Bool)0,info));
                come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->impl_type->mPointerNum=pointer_num_644;
                info->in_class=(_Bool)1;
                method_645=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj154=info->impl_type;
                info->impl_type=((void*)0);
                come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNodephp_push_back(methods_625,(struct sNode*)come_increment_ref_count(method_645));
                if(method_645) { method_645 = come_decrement_ref_count2(method_645, ((struct sNode*)method_645)->finalize, ((struct sNode*)method_645)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            multiple_declare_629) {
                multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(__right_value560=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_649=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                name_650=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                err_651=multiple_assign_var17->v3;
                come_call_finalizer3(__right_value560,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var18=((struct tuple2$2sTypephcharph*)(__right_value561=parse_variable_name((struct sType*)come_increment_ref_count(base_type_649),(_Bool)1,info)));
                type2_652=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name2_653=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                come_call_finalizer3(__right_value561,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1voidphp_push_back(struct_class_599->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1058, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_653),(struct sType*)come_increment_ref_count(type2_652))));
                while(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var19=((struct tuple2$2sTypephcharph*)(__right_value564=parse_variable_name((struct sType*)come_increment_ref_count(base_type_649),(_Bool)0,info)));
                    type2_654=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name2_655=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    come_call_finalizer3(__right_value564,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1voidphp_push_back(struct_class_599->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1066, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name2_655),(struct sType*)come_increment_ref_count(type2_654))));
                    come_call_finalizer3(type2_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name2_655 = come_decrement_ref_count2(name2_655, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                expected_next_character(59,info);
                come_call_finalizer3(base_type_649,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_650 = come_decrement_ref_count2(name_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_652,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_653 = come_decrement_ref_count2(name2_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            parsecmp("include",info)) {
                ((char*)(__right_value567=parse_word(info)));
                __right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_656=(char*)come_increment_ref_count(parse_word(info));
                params_657=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1075, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_658=(char*)come_increment_ref_count(parse_word(info));
                        list$1charphp_add(params_657,(char*)come_increment_ref_count(word_658));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid source end");
                            exit(2);
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            word_658 = come_decrement_ref_count2(word_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_658 = come_decrement_ref_count2(word_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_622=info->p;
                sline_saved_623=info->sline;
                __dec_obj158=sname_saved_624;
                sname_saved_624=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj159=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_656));
                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional10=(((struct sClassModule*)(__right_value574=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_656)))==((void*)0))),                come_call_finalizer3(__right_value574,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional10) {
                    err_msg(info,"module not found");
                    __result365__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_656 = come_decrement_ref_count2(module_name_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_657,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_589 = come_decrement_ref_count2(type_name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(parent_classes_592,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(struct_class_599,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    sname_saved_624 = come_decrement_ref_count2(sname_saved_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(methods_625,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result365__;
                }
                module_662=((struct sClassModule*)(__right_value575=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_656)));
                come_call_finalizer3(__right_value575,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charphp_length(module_662->mParams)!=list$1charphp_length(params_657)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj165=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharphp_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1129, "struct map$2charphcharph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj165,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_666=0;
                for(                o2_saved_667=(struct list$1charph*)come_increment_ref_count((module_662->mParams)),it_670=list$1charphp_begin((o2_saved_667));                !list$1charphp_end((o2_saved_667));                it_670=list$1charphp_next((o2_saved_667))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_670)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value589=list$1charphp_operator_load_element(params_657,i_666))))));
                    __right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_666++;
                }
                come_call_finalizer3(o2_saved_667,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_662->mText;
                info->sline=module_662->mSLine;
                __dec_obj166=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_662->mSName));
                __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_656 = come_decrement_ref_count2(module_name_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_657,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var20=((struct tuple3$3sTypephcharphbool*)(__right_value592=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_697=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                name_698=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                err_699=multiple_assign_var20->v3;
                come_call_finalizer3(__right_value592,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_699) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1voidphp_push_back(struct_class_599->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1148, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(name_698),(struct sType*)come_increment_ref_count(type2_697))));
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                come_call_finalizer3(type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_698 = come_decrement_ref_count2(name_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_622) {
            if(            info->p==0) {
                info->p=p_saved_622;
                info->sline=sline_saved_623;
                __dec_obj167=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_624));
                __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_622=((void*)0);
                sline_saved_623=0;
            }
        }
        list$1charphp_reset(info->generics_type_names);
        info->defining_class=defining_class_600;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1182, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value599=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1182, "struct sClassNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_589)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_599)),(struct list$1sNodeph*)come_increment_ref_count(methods_625),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value605=_inf_value7));
        type_name_589 = come_decrement_ref_count2(type_name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(parent_classes_592,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_599,sClass_finalize, 0, 0, 0, 0, (void*)0);
        sname_saved_624 = come_decrement_ref_count2(sname_saved_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(methods_625,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value599,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value605) { __right_value605 = come_decrement_ref_count2(__right_value605, ((struct sNode*)__right_value605)->finalize, ((struct sNode*)__right_value605)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result389__;
        type_name_589 = come_decrement_ref_count2(type_name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(parent_classes_592,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_599,sClass_finalize, 0, 0, 0, 0, (void*)0);
        sname_saved_624 = come_decrement_ref_count2(sname_saved_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(methods_625,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result390__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value606=top_level_v97(buf,head,head_sline,info)));
    if(__right_value606) { __right_value606 = come_decrement_ref_count2(__right_value606, ((struct sNode*)__right_value606)->finalize, ((struct sNode*)__right_value606)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
struct sStructNobodyNode* __result342__;
void* __right_value448 = (void*)0;
struct sStructNobodyNode* result_547;
void* __right_value449 = (void*)0;
char* __dec_obj131;
void* __right_value450 = (void*)0;
char* __dec_obj132;
void* __right_value451 = (void*)0;
struct sClass* __dec_obj133;
struct sStructNobodyNode* __result343__;
    if(    self==(void*)0) {
        __result342__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    result_547=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode", sStructNobodyNode_finalize, sStructNobodyNode_clone, sStructNobodyNode_get_hash_key, sStructNobodyNode_equals));
    if(    self!=((void*)0)) {
        result_547->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj131=result_547->sname;
        result_547->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_547->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj132=result_547->mName;
        result_547->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj133=result_547->mClass;
        result_547->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj133,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result343__ = gComeFunResultObject = __result_obj__ = result_547;
    come_call_finalizer3(result_547,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static unsigned int sStructNobodyNode_get_hash_key(struct sStructNobodyNode* self){
unsigned int result_546;
    result_546=0;
    result_546+=int_get_hash_key(((int)self->sline));
    result_546+=int_get_hash_key(((int)self->sname));
    result_546+=int_get_hash_key(((int)self->sline_real));
    result_546+=int_get_hash_key(((int)self->mName));
    result_546+=int_get_hash_key(((int)self->mClass));
    return result_546;
}

static _Bool sStructNobodyNode_equals(struct sStructNobodyNode* left, struct sStructNobodyNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1charph* list$1charphp_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_548;
struct list_item$1charph* prev_it_549;
struct list$1charph* __result345__;
    it_548=self->head;
    while(it_548!=((void*)0)) {
        prev_it_549=it_548;
        it_548=it_548->next;
        come_call_finalizer3(prev_it_549,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result345__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj136;
char* __dec_obj137;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj136=self->v1;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj137=self->v2;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sClassp* list$1sClasspp_initialize(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct list$1sClassp* __result350__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result350__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
struct list_item$1sClassp* it_593;
struct list_item$1sClassp* prev_it_594;
    it_593=self->head;
    while(it_593!=((void*)0)) {
        prev_it_594=it_593;
        it_593=it_593->next;
        come_call_finalizer3(prev_it_594,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
}

static struct list$1sClassp* list$1sClasspp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value520 = (void*)0;
struct list_item$1sClassp* litem_596;
void* __right_value521 = (void*)0;
struct list_item$1sClassp* litem_597;
void* __right_value522 = (void*)0;
struct list_item$1sClassp* litem_598;
struct list$1sClassp* __result351__;
    if(    self->len==0) {
        litem_596=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value520=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_596->prev=((void*)0);
        litem_596->next=((void*)0);
        litem_596->item=item;
        self->tail=litem_596;
        self->head=litem_596;
    }
    else if(    self->len==1) {
        litem_597=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value521=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_597->prev=self->head;
        litem_597->next=((void*)0);
        litem_597->item=item;
        self->tail=litem_597;
        self->head->next=litem_597;
    }
    else {
        litem_598=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value522=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_598->prev=self->tail;
        litem_598->next=((void*)0);
        litem_598->item=item;
        self->tail->next=litem_598;
        self->tail=litem_598;
    }
    self->len++;
    __result351__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static struct list$1sClassp* list$1sClasspp_reverse(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct list$1sClassp* result_601;
struct list_item$1sClassp* it_602;
struct list$1sClassp* __result353__;
    result_601=(struct list$1sClassp*)come_increment_ref_count(list$1sClasspp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "/usr/local/include/comelang.h", 2072, "struct list$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_602=self->tail;
    while(it_602!=((void*)0)) {
        list$1sClasspp_push_back(result_601,it_602->item);
        it_602=it_602->prev;
    }
    __result353__ = gComeFunResultObject = __result_obj__ = result_601;
    come_call_finalizer3(result_601,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct list$1sClassp* list$1sClasspp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value534 = (void*)0;
struct list_item$1sClassp* litem_603;
void* __right_value535 = (void*)0;
struct list_item$1sClassp* litem_604;
void* __right_value536 = (void*)0;
struct list_item$1sClassp* litem_605;
struct list$1sClassp* __result352__;
    if(    self->len==0) {
        litem_603=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value534=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_603->prev=((void*)0);
        litem_603->next=((void*)0);
        litem_603->item=item;
        self->tail=litem_603;
        self->head=litem_603;
    }
    else if(    self->len==1) {
        litem_604=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value535=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_604->prev=self->head;
        litem_604->next=((void*)0);
        litem_604->item=item;
        self->tail=litem_604;
        self->head->next=litem_604;
    }
    else {
        litem_605=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value536=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1sClassp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_605->prev=self->tail;
        litem_605->next=((void*)0);
        litem_605->item=item;
        self->tail->next=litem_605;
        self->tail=litem_605;
    }
    self->len++;
    __result352__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static struct sClass* list$1sClasspp_begin(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_607;
struct sClass* __result354__;
struct sClass* __result355__;
struct sClass* result_608;
struct sClass* __result356__;
result_607 = (void*)0;
result_608 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_607,0,sizeof(struct sClass*));
        __result354__ = gComeFunResultObject = __result_obj__ = result_607;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    self->it=self->head;
    if(    self->it) {
        __result355__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    memset(&result_608,0,sizeof(struct sClass*));
    __result356__ = gComeFunResultObject = __result_obj__ = result_608;
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static _Bool list$1sClasspp_end(struct list$1sClassp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClasspp_next(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_610;
struct sClass* __result357__;
struct sClass* __result358__;
struct sClass* result_611;
struct sClass* __result359__;
result_610 = (void*)0;
result_611 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_610,0,sizeof(struct sClass*));
        __result357__ = gComeFunResultObject = __result_obj__ = result_610;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result358__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    memset(&result_611,0,sizeof(struct sClass*));
    __result359__ = gComeFunResultObject = __result_obj__ = result_611;
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_626;
int i_627;
    for(    i_626=0;    i_626<self->size;    i_626++    ){
        if(        self->item_existance[i_626]) {
            if(            1) {
                self->items[i_626] = come_decrement_ref_count2(self->items[i_626], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_627=0;    i_627<self->size;    i_627++    ){
        if(        self->item_existance[i_627]) {
            if(            1) {
                self->keys[i_627] = come_decrement_ref_count2(self->keys[i_627], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value557 = (void*)0;
struct list_item$1sNodeph* litem_646;
struct sNode* __dec_obj155;
void* __right_value558 = (void*)0;
struct list_item$1sNodeph* litem_647;
struct sNode* __dec_obj156;
void* __right_value559 = (void*)0;
struct list_item$1sNodeph* litem_648;
struct sNode* __dec_obj157;
struct list$1sNodeph* __result360__;
    if(    self->len==0) {
        litem_646=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value557=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_646->prev=((void*)0);
        litem_646->next=((void*)0);
        __dec_obj155=litem_646->item;
        litem_646->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_646;
        self->head=litem_646;
    }
    else if(    self->len==1) {
        litem_647=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value558=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_647->prev=self->head;
        litem_647->next=((void*)0);
        __dec_obj156=litem_647->item;
        litem_647->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_647;
        self->head->next=litem_647;
    }
    else {
        litem_648=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value559=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_648->prev=self->tail;
        litem_648->next=((void*)0);
        __dec_obj157=litem_648->item;
        litem_648->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_648;
        self->tail=litem_648;
    }
    self->len++;
    __result360__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_659;
unsigned int hash_660;
unsigned int it_661;
struct sClassModule* __result361__;
struct sClassModule* __result362__;
struct sClassModule* __result363__;
struct sClassModule* __result364__;
default_value_659 = (void*)0;
    memset(&default_value_659,0,sizeof(struct sClassModule*));
    hash_660=string_get_hash_key(((char*)key))%self->size;
    it_661=hash_660;
    while((_Bool)1) {
        if(        self->item_existance[it_661]) {
            if(            string_equals(self->keys[it_661],key)) {
                __result361__ = gComeFunResultObject = __result_obj__ = self->items[it_661];
                come_call_finalizer3(default_value_659,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result361__;
            }
            it_661++;
            if(            it_661>=self->size) {
                it_661=0;
            }
            else if(            it_661==hash_660) {
                __result362__ = gComeFunResultObject = __result_obj__ = default_value_659;
                come_call_finalizer3(default_value_659,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result362__;
            }
        }
        else {
            __result363__ = gComeFunResultObject = __result_obj__ = default_value_659;
            come_call_finalizer3(default_value_659,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result363__;
        }
    }
    __result364__ = gComeFunResultObject = __result_obj__ = default_value_659;
    come_call_finalizer3(default_value_659,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj160;
char* __dec_obj161;
struct list$1charph* __dec_obj162;
char* __dec_obj163;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj160=self->mName;
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj161=self->mText;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj162=self->mParams;
            come_call_finalizer3(__dec_obj162,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj163=self->mSName;
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphcharph* map$2charphcharphp_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
int i_663;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct list$1charp* __dec_obj164;
struct map$2charphcharph* __result367__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value577=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value578=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2581, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value579=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_663=0;    i_663<128;    i_663++    ){
        self->item_existance[i_663]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj164=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj164,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result367__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result366__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result366__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_664;
int i_665;
    for(    i_664=0;    i_664<self->size;    i_664++    ){
        if(        self->item_existance[i_664]) {
            if(            1) {
                self->items[i_664] = come_decrement_ref_count2(self->items[i_664], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_665=0;    i_665<self->size;    i_665++    ){
        if(        self->item_existance[i_665]) {
            if(            1) {
                self->keys[i_665] = come_decrement_ref_count2(self->keys[i_665], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_668;
char* __result368__;
char* __result369__;
char* result_669;
char* __result370__;
result_668 = (void*)0;
result_669 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_668,0,sizeof(char*));
        __result368__ = gComeFunResultObject = __result_obj__ = result_668;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    self->it=self->head;
    if(    self->it) {
        __result369__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    memset(&result_669,0,sizeof(char*));
    __result370__ = gComeFunResultObject = __result_obj__ = result_669;
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_671;
char* __result371__;
char* __result372__;
char* result_672;
char* __result373__;
result_671 = (void*)0;
result_672 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_671,0,sizeof(char*));
        __result371__ = gComeFunResultObject = __result_obj__ = result_671;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result372__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    memset(&result_672,0,sizeof(char*));
    __result373__ = gComeFunResultObject = __result_obj__ = result_672;
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharphp_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharphp_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_690;
unsigned int it_691;
_Bool same_key_exist_692;
char* it2_693;
struct map$2charphcharph* __result384__;
    if(    self->len*10>=self->size) {
        map$2charphcharphp_rehash(self);
    }
    hash_690=string_get_hash_key(key)%self->size;
    it_691=hash_690;
    while((_Bool)1) {
        if(        self->item_existance[it_691]) {
            if(            string_equals(self->keys[it_691],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_691]);
                    self->keys[it_691] = come_decrement_ref_count2(self->keys[it_691], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_691]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_691]);
                    self->keys[it_691]=key;
                }
                if(                1) {
                    self->items[it_691] = come_decrement_ref_count2(self->items[it_691], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_691]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_691]=item;
                }
                break;
            }
            it_691++;
            if(            it_691>=self->size) {
                it_691=0;
            }
            else if(            it_691==hash_690) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_691]=(_Bool)1;
            if(            1) {
                self->keys[it_691]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_691]=key;
            }
            if(            1) {
                self->items[it_691]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_691]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_692=(_Bool)0;
    for(    it2_693=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_693=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_693,key)) {
            same_key_exist_692=(_Bool)1;
        }
    }
    if(    !same_key_exist_692) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result384__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static void map$2charphcharphp_rehash(struct map$2charphcharph* self){
int size_673;
void* __right_value584 = (void*)0;
char** keys_674;
void* __right_value585 = (void*)0;
char** items_675;
void* __right_value586 = (void*)0;
_Bool* item_existance_676;
int len_677;
char* it_680;
char* default_value_683;
void* __right_value587 = (void*)0;
char* it2_684;
unsigned int hash_687;
int n_688;
char* default_value_689;
void* __right_value588 = (void*)0;
default_value_683 = (void*)0;
default_value_689 = (void*)0;
    size_673=self->size*10;
    keys_674=(char**)come_increment_ref_count(((char**)(__right_value584=(char**)come_calloc(1, sizeof(char*)*(1*(size_673)), "/usr/local/include/comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_675=(char**)come_increment_ref_count(((char**)(__right_value585=(char**)come_calloc(1, sizeof(char*)*(1*(size_673)), "/usr/local/include/comelang.h", 2809, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_676=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value586=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_673)), "/usr/local/include/comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_677=0;
    for(    it_680=map$2charphcharphp_begin(self);    !map$2charphcharphp_end(self);    it_680=map$2charphcharphp_next(self)    ){
        memset(&default_value_683,0,sizeof(char*));
        it2_684=((char*)(__right_value587=map$2charphcharphp_at(self,it_680,default_value_683)));
        __right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_687=string_get_hash_key(it_680)%size_673;
        n_688=hash_687;
        while((_Bool)1) {
            if(            item_existance_676[n_688]) {
                n_688++;
                if(                n_688>=size_673) {
                    n_688=0;
                }
                else if(                n_688==hash_687) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_676[n_688]=(_Bool)1;
                keys_674[n_688]=it_680;
                items_675[n_688]=((char*)(__right_value588=map$2charphcharphp_at(self,it_680,default_value_689)));
                __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_677++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_674;
    self->items=items_675;
    self->item_existance=item_existance_676;
    self->size=size_673;
    self->len=len_677;
}

static char* map$2charphcharphp_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_678;
char* __result374__;
char* __result375__;
char* result_679;
char* __result376__;
result_678 = (void*)0;
result_679 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_678,0,sizeof(char*));
        __result374__ = gComeFunResultObject = __result_obj__ = result_678;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result375__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    memset(&result_679,0,sizeof(char*));
    __result376__ = gComeFunResultObject = __result_obj__ = result_679;
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static _Bool map$2charphcharphp_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharphp_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_681;
char* __result377__;
char* __result378__;
char* result_682;
char* __result379__;
result_681 = (void*)0;
result_682 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_681,0,sizeof(char*));
        __result377__ = gComeFunResultObject = __result_obj__ = result_681;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result378__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    memset(&result_682,0,sizeof(char*));
    __result379__ = gComeFunResultObject = __result_obj__ = result_682;
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static char* map$2charphcharphp_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_685;
unsigned int it_686;
char* __result380__;
char* __result381__;
char* __result382__;
char* __result383__;
    hash_685=string_get_hash_key(((char*)key))%self->size;
    it_686=hash_685;
    while((_Bool)1) {
        if(        self->item_existance[it_686]) {
            if(            string_equals(self->keys[it_686],key)) {
                __result380__ = gComeFunResultObject = __result_obj__ = self->items[it_686];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result380__;
            }
            it_686++;
            if(            it_686>=self->size) {
                it_686=0;
            }
            else if(            it_686==hash_685) {
                __result381__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result381__;
            }
        }
        else {
            __result382__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result382__;
        }
    }
    __result383__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_694;
int i_695;
char* __result385__;
char* default_value_696;
char* __result386__;
default_value_696 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_694=self->head;
    i_695=0;
    while(it_694!=((void*)0)) {
        if(        position==i_695) {
            __result385__ = gComeFunResultObject = __result_obj__ = it_694->item;
            gComeFunResultObject = (void*)0;
            return __result385__;
        }
        it_694=it_694->next;
        i_695++;
    }
    memset(&default_value_696,0,sizeof(char*));
    __result386__ = gComeFunResultObject = __result_obj__ = default_value_696;
    default_value_696 = come_decrement_ref_count2(default_value_696, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__=(void*)0;
struct sClassNode* __result387__;
void* __right_value600 = (void*)0;
struct sClassNode* result_701;
void* __right_value601 = (void*)0;
char* __dec_obj168;
void* __right_value602 = (void*)0;
char* __dec_obj169;
void* __right_value603 = (void*)0;
struct sClass* __dec_obj170;
void* __right_value604 = (void*)0;
struct list$1sNodeph* __dec_obj171;
struct sClassNode* __result388__;
    if(    self==(void*)0) {
        __result387__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    result_701=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "struct sClassNode", sClassNode_finalize, sClassNode_clone, sClassNode_get_hash_key, sClassNode_equals));
    if(    self!=((void*)0)) {
        result_701->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj168=result_701->sname;
        result_701->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_701->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj169=result_701->mName;
        result_701->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj170=result_701->mClass;
        result_701->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj170,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj171=result_701->mMethods;
        result_701->mMethods=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mMethods));
        come_call_finalizer3(__dec_obj171,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result388__ = gComeFunResultObject = __result_obj__ = result_701;
    come_call_finalizer3(result_701,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static unsigned int sClassNode_get_hash_key(struct sClassNode* self){
unsigned int result_700;
    result_700=0;
    result_700+=int_get_hash_key(((int)self->sline));
    result_700+=int_get_hash_key(((int)self->sname));
    result_700+=int_get_hash_key(((int)self->sline_real));
    result_700+=int_get_hash_key(((int)self->mName));
    result_700+=int_get_hash_key(((int)self->mClass));
    result_700+=int_get_hash_key(((int)self->mMethods));
    return result_700;
}

static _Bool sClassNode_equals(struct sClassNode* left, struct sClassNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mMethods,right->mMethods)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool define_struct_702;
char* p_703;
int sline_704;
void* __right_value607 = (void*)0;
char* type_name_705;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
char* struct_attribute_706;
void* __right_value612 = (void*)0;
char* type_name_707;
void* __right_value613 = (void*)0;
struct sNode* __result391__;
void* __right_value614 = (void*)0;
struct sNode* __result392__;
    define_struct_702=(_Bool)0;
    {
        p_703=info->p;
        sline_704=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                type_name_705=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value608=parse_word(info)));
                    __right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    ((char*)(__right_value609=parse_word(info)));
                    __right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==123) {
                    ((char*)(__right_value610=skip_block(info)));
                    __right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        define_struct_702=(_Bool)1;
                    }
                }
                type_name_705 = come_decrement_ref_count2(type_name_705, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_703;
        info->sline=sline_704;
    }
    if(    define_struct_702) {
        struct_attribute_706=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_707=(char*)come_increment_ref_count(parse_word(info));
        __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value613=parse_struct((char*)come_increment_ref_count(type_name_707),(char*)come_increment_ref_count(struct_attribute_706),info)));
        struct_attribute_706 = come_decrement_ref_count2(struct_attribute_706, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_707 = come_decrement_ref_count2(type_name_707, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(__right_value613) { __right_value613 = come_decrement_ref_count2(__right_value613, ((struct sNode*)__right_value613)->finalize, ((struct sNode*)__right_value613)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result391__;
        struct_attribute_706 = come_decrement_ref_count2(struct_attribute_706, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_707 = come_decrement_ref_count2(type_name_707, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value614=string_node_v13(buf,head,head_sline,info)));
    if(__right_value614) { __right_value614 = come_decrement_ref_count2(__right_value614, ((struct sNode*)__right_value614)->finalize, ((struct sNode*)__right_value614)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result392__;
}

