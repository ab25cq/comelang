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
struct tuple3$3charphsFunpsGenericsFunp
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
};

struct sStoreFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};

struct sNullCheckNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};

struct sNullableNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
};

struct sLoadFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    char* mName;
};

struct sStoreArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
};

struct sLoadArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
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
struct tuple3$3charphsFunpsGenericsFunp* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1voidphp_length(struct list$1voidph* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
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
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple3$3charphsFunpsGenericsFunp_finalize(struct tuple3$3charphsFunpsGenericsFunp* self);
static struct tuple3$3charphsFunpsGenericsFunp* tuple3$3charphsFunpsGenericsFunp_clone(struct tuple3$3charphsFunpsGenericsFunp* self);
static unsigned int tuple3$3charphsFunpsGenericsFunp_get_hash_key(struct tuple3$3charphsFunpsGenericsFunp* self);
static _Bool tuple3$3charphsFunpsGenericsFunp_equals(struct tuple3$3charphsFunpsGenericsFunp* left, struct tuple3$3charphsFunpsGenericsFunp* right);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2charphsVarphp_equals(struct map$2charphsVarph* left, struct map$2charphsVarph* right);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static char* list$1charpp_item(struct list$1charp* self, int position, char* default_value);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static _Bool buffer_equals(struct buffer* left, struct buffer* right);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static struct tuple3$3charphsFunpsGenericsFunp* tuple3$3charphsFunpsGenericsFunp_initialize(struct tuple3$3charphsFunpsGenericsFunp* self, char* v1, struct sFun* v2, struct sGenericsFun* v3);
static void tuple3$3charphsFunpsGenericsFunpp_finalize(struct tuple3$3charphsFunpsGenericsFunp* self);
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
char* sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);
char* sNullCheckNode_kind(struct sNullCheckNode* self);
_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);
char* sNullableNode_kind(struct sNullableNode* self);
_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static unsigned int CVALUE_get_hash_key(struct CVALUE* self);
static _Bool CVALUE_equals(struct CVALUE* left, struct CVALUE* right);
static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
static unsigned int sNullableNode_get_hash_key(struct sNullableNode* self);
static _Bool sNullableNode_equals(struct sNullableNode* left, struct sNullableNode* right);
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);
char* sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
static unsigned int sLoadFieldNode_get_hash_key(struct sLoadFieldNode* self);
static _Bool sLoadFieldNode_equals(struct sLoadFieldNode* left, struct sLoadFieldNode* right);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);
char* sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static unsigned int sStoreFieldNode_get_hash_key(struct sStoreFieldNode* self);
static _Bool sStoreFieldNode_equals(struct sStoreFieldNode* left, struct sStoreFieldNode* right);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static unsigned int sLoadRangeArrayNode_get_hash_key(struct sLoadRangeArrayNode* self);
static _Bool sLoadRangeArrayNode_equals(struct sLoadRangeArrayNode* left, struct sLoadRangeArrayNode* right);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static unsigned int sStoreArrayNode_get_hash_key(struct sStoreArrayNode* self);
static _Bool sStoreArrayNode_equals(struct sStoreArrayNode* left, struct sStoreArrayNode* right);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static unsigned int sLoadArrayNode_get_hash_key(struct sLoadArrayNode* self);
static _Bool sLoadArrayNode_equals(struct sLoadArrayNode* left, struct sLoadArrayNode* right);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static unsigned int sNullCheckNode_get_hash_key(struct sNullCheckNode* self);
static _Bool sNullCheckNode_equals(struct sNullCheckNode* left, struct sNullCheckNode* right);
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

struct tuple3$3charphsFunpsGenericsFunp* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* fun_name2_308;
struct sFun* operator_fun_309;
struct sGenericsFun* generics_fun_310;
void* __right_value250 = (void*)0;
char* none_generics_name_311;
void* __right_value251 = (void*)0;
struct sType* obj_type_312;
void* __right_value252 = (void*)0;
char* __dec_obj31;
void* __right_value253 = (void*)0;
char* fun_name3_313;
void* __right_value254 = (void*)0;
_Bool generics_any_child_326;
void* __right_value292 = (void*)0;
struct sType* no_solved_type_327;
struct sType* __dec_obj87;
struct list$1voidph* o2_saved_353;
struct sType* it_356;
struct list$1voidph* o2_saved_359;
struct sType* it_360;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sType* type2_361;
void* __right_value295 = (void*)0;
struct sType* type_before_362;
void* __right_value296 = (void*)0;
char* __dec_obj88;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var1 = (void*)0;
char* name_363=0;
_Bool err_364=0;
void* __right_value299 = (void*)0;
char* __dec_obj107;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var2 = (void*)0;
char* name_368=0;
_Bool err_369=0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
char* __dec_obj108;
int i_370;
void* __right_value305 = (void*)0;
char* new_fun_name_371;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
char* __dec_obj109;
void* __right_value308 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct tuple3$3charphsFunpsGenericsFunp* __result273__;
memset(&i_370, 0, sizeof(int));
    fun_name2_308=((void*)0);
    operator_fun_309=((void*)0);
    generics_fun_310=((void*)0);
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_311=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_312=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj31=fun_name2_308;
        fun_name2_308=(char*)come_increment_ref_count(create_method_name(obj_type_312,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_313=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_311,fun_name));
        generics_fun_310=((struct sGenericsFun*)(__right_value254=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_313,((void*)0))));
        come_call_finalizer3(__right_value254,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_310) {
            generics_any_child_326=(_Bool)0;
            no_solved_type_327=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            if(            type->mNoSolvedGenericsType) {
                __dec_obj87=no_solved_type_327;
                no_solved_type_327=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
                come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                for(                o2_saved_353=(struct list$1voidph*)come_increment_ref_count((no_solved_type_327->mGenericsTypes)),it_356=((struct sType*)list$1voidphp_begin((o2_saved_353)));                !list$1voidphp_end((o2_saved_353));                it_356=((struct sType*)list$1voidphp_next((o2_saved_353)))                ){
                    if(                    it_356->mAnyOriginalType) {
                        generics_any_child_326=(_Bool)1;
                    }
                }
                come_call_finalizer3(o2_saved_353,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            for(            o2_saved_359=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_360=((struct sType*)list$1voidphp_begin((o2_saved_359)));            !list$1voidphp_end((o2_saved_359));            it_360=((struct sType*)list$1voidphp_next((o2_saved_359)))            ){
                if(                it_360->mAnyOriginalType) {
                    generics_any_child_326=(_Bool)1;
                }
            }
            come_call_finalizer3(o2_saved_359,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            generics_fun_310->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_326)) {
                type2_361=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type))));
                type_before_362=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
                __dec_obj88=fun_name2_308;
                fun_name2_308=(char*)come_increment_ref_count(create_method_name(type2_361,(_Bool)0,fun_name,info,(_Bool)1));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                multiple_assign_var1=((struct tuple2$2charphbool*)(__right_value298=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_308)),generics_fun_310,type2_361,info)));
                name_363=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                err_364=multiple_assign_var1->v2;
                come_call_finalizer3(__right_value298,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_364) {
                    err_msg(info,"%s not found",fun_name3_313);
                    exit(1);
                }
                operator_fun_309=((struct sFun*)(__right_value299=map$2charphsFunphp_operator_load_element(info->funcs,name_363)));
                come_call_finalizer3(__right_value299,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj107=fun_name2_308;
                fun_name2_308=(char*)come_increment_ref_count(name_363);
                __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                type=type_before_362;
                come_call_finalizer3(type2_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_362,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_363 = come_decrement_ref_count2(name_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var2=((struct tuple2$2charphbool*)(__right_value301=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_308)),generics_fun_310,obj_type_312,info)));
                name_368=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                err_369=multiple_assign_var2->v2;
                come_call_finalizer3(__right_value301,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_369) {
                    exit(1);
                }
                operator_fun_309=((struct sFun*)(__right_value302=map$2charphsFunphp_operator_load_element(info->funcs,name_368)));
                come_call_finalizer3(__right_value302,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                name_368 = come_decrement_ref_count2(name_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(no_solved_type_327,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            operator_fun_309=((struct sFun*)(__right_value303=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_308)));
            come_call_finalizer3(__right_value303,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        none_generics_name_311 = come_decrement_ref_count2(none_generics_name_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_312,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_313 = come_decrement_ref_count2(fun_name3_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj108=fun_name2_308;
        fun_name2_308=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_370=128-1;        i_370>=1;        i_370--        ){
            new_fun_name_371=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_308,i_370));
            operator_fun_309=((struct sFun*)(__right_value306=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_371)));
            come_call_finalizer3(__right_value306,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            operator_fun_309) {
                __dec_obj109=fun_name2_308;
                fun_name2_308=(char*)come_increment_ref_count(__builtin_string(new_fun_name_371));
                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_371 = come_decrement_ref_count2(new_fun_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_371 = come_decrement_ref_count2(new_fun_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_309==((void*)0)) {
            operator_fun_309=((struct sFun*)(__right_value308=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_308)));
            come_call_finalizer3(__right_value308,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    __result273__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3charphsFunpsGenericsFunp*)(__right_value314=tuple3$3charphsFunpsGenericsFunp_initialize((struct tuple3$3charphsFunpsGenericsFunp**)come_increment_ref_count((struct tuple3$3charphsFunpsGenericsFunp*)come_calloc(1, sizeof(struct tuple3$3charphsFunpsGenericsFunp)*(1), "18field.c", 93, "struct tuple3$3charphsFunpsGenericsFunp", tuple3$3charphsFunpsGenericsFunp_finalize, tuple3$3charphsFunpsGenericsFunp_clone, tuple3$3charphsFunpsGenericsFunp_get_hash_key, tuple3$3charphsFunpsGenericsFunp_equals)),(char*)come_increment_ref_count(fun_name2_308),operator_fun_309,generics_fun_310)));
    fun_name2_308 = come_decrement_ref_count2(fun_name2_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value314,tuple3$3charphsFunpsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_314;
unsigned int it_315;
struct sGenericsFun* __result229__;
struct sGenericsFun* __result230__;
struct sGenericsFun* __result231__;
struct sGenericsFun* __result232__;
    hash_314=string_get_hash_key(((char*)key))%self->size;
    it_315=hash_314;
    while((_Bool)1) {
        if(        self->item_existance[it_315]) {
            if(            string_equals(self->keys[it_315],key)) {
                __result229__ = gComeFunResultObject = __result_obj__ = self->items[it_315];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result229__;
            }
            it_315++;
            if(            it_315>=self->size) {
                it_315=0;
            }
            else if(            it_315==hash_314) {
                __result230__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
        }
        else {
            __result231__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result231__;
        }
    }
    __result232__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj32;
struct list$1charph* __dec_obj52;
struct list$1charph* __dec_obj53;
char* __dec_obj54;
struct sType* __dec_obj55;
struct list$1voidph* __dec_obj56;
struct list$1charph* __dec_obj57;
struct list$1charph* __dec_obj58;
char* __dec_obj59;
char* __dec_obj60;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj32=self->mImplType;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj52=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj53=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj54=self->mName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj55=self->mResultType;
            come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj56=self->mParamTypes;
            come_call_finalizer3(__dec_obj56,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj57=self->mParamNames;
            come_call_finalizer3(__dec_obj57,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj58=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj58,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj59=self->mBlock;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj60=self->mGenericsSName;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj33;
struct sType* __dec_obj34;
struct sType* __dec_obj35;
char* __dec_obj36;
char* __dec_obj37;
struct list$1voidph* __dec_obj38;
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
            __dec_obj33=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj34=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj35=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj36=self->mInterfaceName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj37=self->mGenericsName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj38=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj38,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1voidph* it_316;
struct list_item$1voidph* prev_it_317;
    it_316=self->head;
    while(it_316!=((void*)0)) {
        prev_it_317=it_316;
        it_316=it_316->next;
        come_call_finalizer3(prev_it_317,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj39;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj39=self->item;
            come_call_finalizer3(__dec_obj39,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_318;
struct list_item$1voidph* prev_it_319;
    it_318=self->head;
    while(it_318!=((void*)0)) {
        prev_it_319=it_318;
        it_318=it_318->next;
        come_call_finalizer3(prev_it_319,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_320;
struct list_item$1sNodeph* prev_it_321;
    it_320=self->head;
    while(it_320!=((void*)0)) {
        prev_it_321=it_320;
        it_320=it_320->next;
        come_call_finalizer3(prev_it_321,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_322;
struct list_item$1sNodeph* prev_it_323;
    it_322=self->head;
    while(it_322!=((void*)0)) {
        prev_it_323=it_322;
        it_322=it_322->next;
        come_call_finalizer3(prev_it_323,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_324;
struct list_item$1charph* prev_it_325;
    it_324=self->head;
    while(it_324!=((void*)0)) {
        prev_it_325=it_324;
        it_324=it_324->next;
        come_call_finalizer3(prev_it_325,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result233__;
void* __right_value255 = (void*)0;
struct sType* result_335;
void* __right_value256 = (void*)0;
struct sType* __dec_obj61;
void* __right_value257 = (void*)0;
struct sType* __dec_obj62;
void* __right_value258 = (void*)0;
struct sType* __dec_obj63;
void* __right_value259 = (void*)0;
char* __dec_obj64;
void* __right_value260 = (void*)0;
char* __dec_obj65;
void* __right_value267 = (void*)0;
struct list$1voidph* __dec_obj69;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __dec_obj73;
void* __right_value276 = (void*)0;
struct list$1voidph* __dec_obj74;
void* __right_value283 = (void*)0;
struct list$1charph* __dec_obj78;
void* __right_value284 = (void*)0;
struct sType* __dec_obj79;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value286 = (void*)0;
struct sType* __dec_obj81;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value288 = (void*)0;
char* __dec_obj83;
void* __right_value289 = (void*)0;
char* __dec_obj84;
void* __right_value290 = (void*)0;
char* __dec_obj85;
void* __right_value291 = (void*)0;
char* __dec_obj86;
struct sType* __result247__;
    if(    self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_335=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_335->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj61=result_335->mNoSolvedGenericsType;
        result_335->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj62=result_335->mOriginalLoadVarType;
        result_335->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj63=result_335->mAnyOriginalType;
        result_335->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj64=result_335->mInterfaceName;
        result_335->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj65=result_335->mGenericsName;
        result_335->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj69=result_335->mGenericsTypes;
        result_335->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj69,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj73=result_335->mArrayNum;
        result_335->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj73,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj74=result_335->mParamTypes;
        result_335->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj74,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj78=result_335->mParamNames;
        result_335->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj78,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj79=result_335->mResultType;
        result_335->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj80=result_335->mAlignas;
        result_335->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj81=result_335->mChannelType;
        result_335->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_335->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_335->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_335->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_335->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_335->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_335->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_335->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_335->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_335->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_335->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_335->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_335->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_335->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_335->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_335->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_335->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_335->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj82=result_335->mSizeNum;
        result_335->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_335->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj83=result_335->mOriginalTypeName;
        result_335->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_335->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_335->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_335->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_335->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_335->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_335->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj84=result_335->mAsmName;
        result_335->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_335->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_335->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_335->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_335->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj85=result_335->mTupleName;
        result_335->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj86=result_335->mAttribute;
        result_335->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_335->mGenerate=self->mGenerate;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_335;
    come_call_finalizer3(result_335,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_328;
    result_328=0;
    result_328+=int_get_hash_key(((int)self->mClass));
    result_328+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_328+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_328+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_328+=int_get_hash_key(((int)self->mAnyClass));
    result_328+=int_get_hash_key(((int)self->mInterfaceName));
    result_328+=int_get_hash_key(((int)self->mGenericsName));
    result_328+=int_get_hash_key(((int)self->mGenericsTypes));
    result_328+=int_get_hash_key(((int)self->mArrayNum));
    result_328+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_328+=int_get_hash_key(((int)self->mParamTypes));
    result_328+=int_get_hash_key(((int)self->mParamNames));
    result_328+=int_get_hash_key(((int)self->mResultType));
    result_328+=int_get_hash_key(((int)self->mVarArgs));
    result_328+=int_get_hash_key(((int)self->mAlignas));
    result_328+=int_get_hash_key(((int)self->mChannelType));
    result_328+=int_get_hash_key(((int)self->mUnsigned));
    result_328+=int_get_hash_key(((int)self->mShort));
    result_328+=int_get_hash_key(((int)self->mLong));
    result_328+=int_get_hash_key(((int)self->mLongLong));
    result_328+=int_get_hash_key(((int)self->mConstant));
    result_328+=int_get_hash_key(((int)self->mAtomic));
    result_328+=int_get_hash_key(((int)self->mRegister));
    result_328+=int_get_hash_key(((int)self->mVolatile));
    result_328+=int_get_hash_key(((int)self->mStatic));
    result_328+=int_get_hash_key(((int)self->mUniq));
    result_328+=int_get_hash_key(((int)self->mRecord));
    result_328+=int_get_hash_key(((int)self->mExtern));
    result_328+=int_get_hash_key(((int)self->mRestrict));
    result_328+=int_get_hash_key(((int)self->mImmutable));
    result_328+=int_get_hash_key(((int)self->mHeap));
    result_328+=int_get_hash_key(((int)self->mChannel));
    result_328+=int_get_hash_key(((int)self->mNoHeap));
    result_328+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_328+=int_get_hash_key(((int)self->mException));
    result_328+=int_get_hash_key(((int)self->mPointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_328+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_328+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_328+=int_get_hash_key(((int)self->mSizeNum));
    result_328+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_328+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_328+=int_get_hash_key(((int)self->mFunctionParam));
    result_328+=int_get_hash_key(((int)self->mAllocaValue));
    result_328+=int_get_hash_key(((int)self->mGenericsStruct));
    result_328+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_328+=int_get_hash_key(((int)self->mInline));
    result_328+=int_get_hash_key(((int)self->mNullValue));
    result_328+=int_get_hash_key(((int)self->mGuardValue));
    result_328+=int_get_hash_key(((int)self->mAsmName));
    result_328+=int_get_hash_key(((int)self->mArrayPointerType));
    result_328+=int_get_hash_key(((int)self->mLambdaArray));
    result_328+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_328+=int_get_hash_key(((int)self->mTypedef));
    result_328+=int_get_hash_key(((int)self->mMultipleTypes));
    result_328+=int_get_hash_key(((int)self->mOriginIsArray));
    result_328+=int_get_hash_key(((int)self->mTupleName));
    result_328+=int_get_hash_key(((int)self->mAttribute));
    result_328+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_328+=int_get_hash_key(((int)self->mGenerate));
    return result_328;
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
struct list_item$1voidph* it_329;
struct list_item$1voidph* it2_330;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_329=left->head;
    it2_330=right->head;
    while(it_329!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_329->item)) {
            return (_Bool)0;
        }
        it_329=it_329->next;
        it2_330=it2_330->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_331;
struct list_item$1sNodeph* it2_332;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_331=left->head;
    it2_332=right->head;
    while(it_331!=((void*)0)) {
        if(        !sNode_equals(it_331->item,it2_332->item)) {
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

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_333;
struct list_item$1charph* it2_334;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_333=left->head;
    it2_334=right->head;
    while(it_333!=((void*)0)) {
        if(        !string_equals(it_333->item,it2_334->item)) {
            return (_Bool)0;
        }
        it_333=it_333->next;
        it2_334=it2_334->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result234__;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1voidph* result_337;
struct list_item$1voidph* it_338;
void* __right_value266 = (void*)0;
struct list$1voidph* __result237__;
    if(    self==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_337=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_338=self->head;
    while(it_338!=((void*)0)) {
        list$1voidphp_add(result_337,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_338->item)));
        it_338=it_338->next;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_337;
    come_call_finalizer3(result_337,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_336;
    result_336=0;
    result_336+=int_get_hash_key(((int)self->head));
    result_336+=int_get_hash_key(((int)self->tail));
    result_336+=int_get_hash_key(((int)self->len));
    result_336+=int_get_hash_key(((int)self->it));
    return result_336;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result235__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
struct list_item$1voidph* litem_339;
void* __dec_obj66;
void* __right_value264 = (void*)0;
struct list_item$1voidph* litem_340;
void* __dec_obj67;
void* __right_value265 = (void*)0;
struct list_item$1voidph* litem_341;
void* __dec_obj68;
struct list$1voidph* __result236__;
    if(    self->len==0) {
        litem_339=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value263=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_339->prev=((void*)0);
        litem_339->next=((void*)0);
        __dec_obj66=litem_339->item;
        litem_339->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_339;
        self->head=litem_339;
    }
    else if(    self->len==1) {
        litem_340=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value264=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_340->prev=self->head;
        litem_340->next=((void*)0);
        __dec_obj67=litem_340->item;
        litem_340->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_340;
        self->head->next=litem_340;
    }
    else {
        litem_341=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value265=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=self->tail;
        litem_341->next=((void*)0);
        __dec_obj68=litem_341->item;
        litem_341->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_341;
        self->tail=litem_341;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result238__;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sNodeph* result_342;
struct list_item$1sNodeph* it_343;
void* __right_value274 = (void*)0;
struct list$1sNodeph* __result243__;
    if(    self==((void*)0)) {
        __result238__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    result_342=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_343=self->head;
    while(it_343!=((void*)0)) {
        list$1sNodephp_add(result_342,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_343->item)));
        it_343=it_343->next;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_342;
    come_call_finalizer3(result_342,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result239__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_344;
struct sNode* __dec_obj70;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_345;
struct sNode* __dec_obj71;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj72;
struct list$1sNodeph* __result240__;
    if(    self->len==0) {
        litem_344=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_344->prev=((void*)0);
        litem_344->next=((void*)0);
        __dec_obj70=litem_344->item;
        litem_344->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_344;
        self->head=litem_344;
    }
    else if(    self->len==1) {
        litem_345=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=self->head;
        litem_345->next=((void*)0);
        __dec_obj71=litem_345->item;
        litem_345->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_345;
        self->head->next=litem_345;
    }
    else {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->tail;
        litem_346->next=((void*)0);
        __dec_obj72=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_346;
        self->tail=litem_346;
    }
    self->len++;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result241__;
void* __right_value273 = (void*)0;
struct sNode* result_347;
struct sNode* __result242__;
    if(    self==(void*)0) {
        __result241__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_347=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_347->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_347->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_347->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_347->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_347->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_347->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_347->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_347->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_347->kind=self->kind;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_347;
    come_call_finalizer2((void*)0, result_347, result_347 ? ((struct sNode*)result_347)->finalize:(void*)0, result_347 ? ((struct sNode*)result_347)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result244__;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1charph* result_348;
struct list_item$1charph* it_349;
void* __right_value282 = (void*)0;
struct list$1charph* __result246__;
    if(    self==((void*)0)) {
        __result244__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    result_348=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_349=self->head;
    while(it_349!=((void*)0)) {
        list$1charphp_add(result_348,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_349->item)));
        it_349=it_349->next;
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_348;
    come_call_finalizer3(result_348,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_350;
char* __dec_obj75;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_351;
char* __dec_obj76;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_352;
char* __dec_obj77;
struct list$1charph* __result245__;
    if(    self->len==0) {
        litem_350=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_350->prev=((void*)0);
        litem_350->next=((void*)0);
        __dec_obj75=litem_350->item;
        litem_350->item=(char*)come_increment_ref_count(item);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_350;
        self->head=litem_350;
    }
    else if(    self->len==1) {
        litem_351=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_351->prev=self->head;
        litem_351->next=((void*)0);
        __dec_obj76=litem_351->item;
        litem_351->item=(char*)come_increment_ref_count(item);
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_351;
        self->head->next=litem_351;
    }
    else {
        litem_352=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_352->prev=self->tail;
        litem_352->next=((void*)0);
        __dec_obj77=litem_352->item;
        litem_352->item=(char*)come_increment_ref_count(item);
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_352;
        self->tail=litem_352;
    }
    self->len++;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_354;
void* __result248__;
void* __result249__;
void* result_355;
void* __result250__;
result_354 = (void*)0;
result_355 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_354,0,sizeof(void*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_354;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->it=self->head;
    if(    self->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_355,0,sizeof(void*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_355;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_357;
void* __result251__;
void* __result252__;
void* result_358;
void* __result253__;
result_357 = (void*)0;
result_358 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_357,0,sizeof(void*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_357;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_358,0,sizeof(void*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_358;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj89;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj89=self->v1;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_365;
unsigned int hash_366;
unsigned int it_367;
struct sFun* __result254__;
struct sFun* __result255__;
struct sFun* __result256__;
struct sFun* __result257__;
default_value_365 = (void*)0;
    memset(&default_value_365,0,sizeof(struct sFun*));
    hash_366=string_get_hash_key(((char*)key))%self->size;
    it_367=hash_366;
    while((_Bool)1) {
        if(        self->item_existance[it_367]) {
            if(            string_equals(self->keys[it_367],key)) {
                __result254__ = gComeFunResultObject = __result_obj__ = self->items[it_367];
                come_call_finalizer3(default_value_365,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result254__;
            }
            it_367++;
            if(            it_367>=self->size) {
                it_367=0;
            }
            else if(            it_367==hash_366) {
                __result255__ = gComeFunResultObject = __result_obj__ = default_value_365;
                come_call_finalizer3(default_value_365,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result255__;
            }
        }
        else {
            __result256__ = gComeFunResultObject = __result_obj__ = default_value_365;
            come_call_finalizer3(default_value_365,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result256__;
        }
    }
    __result257__ = gComeFunResultObject = __result_obj__ = default_value_365;
    come_call_finalizer3(default_value_365,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj90;
struct sType* __dec_obj91;
struct list$1voidph* __dec_obj92;
struct list$1charph* __dec_obj93;
struct list$1charph* __dec_obj94;
struct sType* __dec_obj95;
struct sBlock* __dec_obj96;
struct buffer* __dec_obj99;
struct buffer* __dec_obj100;
struct buffer* __dec_obj101;
struct buffer* __dec_obj102;
char* __dec_obj103;
char* __dec_obj104;
char* __dec_obj105;
char* __dec_obj106;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj90=self->mName;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj91=self->mResultType;
            come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj92=self->mParamTypes;
            come_call_finalizer3(__dec_obj92,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj93=self->mParamNames;
            come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj94=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj95=self->mLambdaType;
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj96=self->mBlock;
            come_call_finalizer3(__dec_obj96,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj99=self->mSource;
            come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj100=self->mSourceHead;
            come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj101=self->mSourceHead2;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj102=self->mSourceDefer;
            come_call_finalizer3(__dec_obj102,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj103=self->mComeHeader;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj104=self->mDeclareSName;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj105=self->mAttribute;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj106=self->mFunAttribute;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj97;
struct sVarTable* __dec_obj98;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj97=self->mNodes;
            come_call_finalizer3(__dec_obj97,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj98=self->mVarTable;
            come_call_finalizer3(__dec_obj98,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple3$3charphsFunpsGenericsFunp_finalize(struct tuple3$3charphsFunpsGenericsFunp* self){
char* __dec_obj110;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj110=self->v1;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple3$3charphsFunpsGenericsFunp* tuple3$3charphsFunpsGenericsFunp_clone(struct tuple3$3charphsFunpsGenericsFunp* self){
void* __result_obj__=(void*)0;
struct tuple3$3charphsFunpsGenericsFunp* __result258__;
void* __right_value311 = (void*)0;
struct tuple3$3charphsFunpsGenericsFunp* result_389;
void* __right_value312 = (void*)0;
char* __dec_obj115;
struct tuple3$3charphsFunpsGenericsFunp* __result271__;
    if(    self==(void*)0) {
        __result258__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    result_389=(struct tuple3$3charphsFunpsGenericsFunp*)come_increment_ref_count((struct tuple3$3charphsFunpsGenericsFunp*)come_calloc(1, sizeof(struct tuple3$3charphsFunpsGenericsFunp)*(1), "tuple3$3charphsFunpsGenericsFunp_clone", 3, "struct tuple3$3charphsFunpsGenericsFunp", tuple3$3charphsFunpsGenericsFunp_finalize, tuple3$3charphsFunpsGenericsFunp_clone, tuple3$3charphsFunpsGenericsFunp_get_hash_key, tuple3$3charphsFunpsGenericsFunp_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj115=result_389->v1;
        result_389->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_389->v2=self->v2;
    }
    if(    self!=((void*)0)) {
        result_389->v3=self->v3;
    }
    __result271__ = gComeFunResultObject = __result_obj__ = result_389;
    come_call_finalizer3(result_389,tuple3$3charphsFunpsGenericsFunp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static unsigned int tuple3$3charphsFunpsGenericsFunp_get_hash_key(struct tuple3$3charphsFunpsGenericsFunp* self){
unsigned int result_372;
    result_372=0;
    result_372+=int_get_hash_key(((int)self->v1));
    result_372+=int_get_hash_key(((int)self->v2));
    result_372+=int_get_hash_key(((int)self->v3));
    return result_372;
}

static _Bool tuple3$3charphsFunpsGenericsFunp_equals(struct tuple3$3charphsFunpsGenericsFunp* left, struct tuple3$3charphsFunpsGenericsFunp* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sFun_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !sGenericsFun_equals(left->v3,right->v3)) {
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
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mLambdaType,right->mLambdaType)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExternal,right->mExternal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
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
    if(    !string_equals(left->mComeHeader,right->mComeHeader)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCloner,right->mCloner)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoResultType,right->mNoResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDeclaredResultObject,right->mDeclaredResultObject)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->no_output_come_code2,right->no_output_come_code2)) {
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
int n_373;
_Bool result_374;
char* it_377;
char* default_value_380;
char* it2_381;
struct sVar* default_value2_384;
void* __right_value309 = (void*)0;
struct sVar* item_385;
void* __right_value310 = (void*)0;
struct sVar* item2_388;
default_value_380 = (void*)0;
default_value2_384 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_373=0;
    result_374=(_Bool)1;
    for(    it_377=list$1charpp_begin(left->key_list);    !list$1charpp_end(left->key_list);    it_377=list$1charpp_next(left->key_list)    ){
        memset(&default_value_380,0,sizeof(char*));
        it2_381=list$1charpp_item(right->key_list,n_373,default_value_380);
        if(        string_equals(it_377,it2_381)) {
            memset(&default_value2_384,0,sizeof(struct sVar*));
            item_385=((struct sVar*)(__right_value309=map$2charphsVarphp_at(left,it_377,default_value2_384)));
            come_call_finalizer3(__right_value309,sVar_finalize, 0, 1, 0, 0, (void*)0);
            item2_388=((struct sVar*)(__right_value310=map$2charphsVarphp_at(right,it2_381,default_value2_384)));
            come_call_finalizer3(__right_value310,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            !sVar_equals(item_385,item2_388)) {
                result_374=(_Bool)0;
            }
        }
        else {
            result_374=(_Bool)0;
        }
        n_373++;
    }
    return result_374;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_375;
char* __result259__;
char* __result260__;
char* result_376;
char* __result261__;
result_375 = (void*)0;
result_376 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_375,0,sizeof(char*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_375;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->it=self->head;
    if(    self->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_376,0,sizeof(char*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_376;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_378;
char* __result262__;
char* __result263__;
char* result_379;
char* __result264__;
result_378 = (void*)0;
result_379 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_378,0,sizeof(char*));
        __result262__ = gComeFunResultObject = __result_obj__ = result_378;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result263__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    memset(&result_379,0,sizeof(char*));
    __result264__ = gComeFunResultObject = __result_obj__ = result_379;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static char* list$1charpp_item(struct list$1charp* self, int position, char* default_value){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_382;
int i_383;
char* __result265__;
char* __result266__;
    if(    position<0) {
        position+=self->len;
    }
    it_382=self->head;
    i_383=0;
    while(it_382!=((void*)0)) {
        if(        position==i_383) {
            __result265__ = gComeFunResultObject = __result_obj__ = it_382->item;
            gComeFunResultObject = (void*)0;
            return __result265__;
        }
        it_382=it_382->next;
        i_383++;
    }
    __result266__ = gComeFunResultObject = __result_obj__ = default_value;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_386;
unsigned int it_387;
struct sVar* __result267__;
struct sVar* __result268__;
struct sVar* __result269__;
struct sVar* __result270__;
    hash_386=string_get_hash_key(((char*)key))%self->size;
    it_387=hash_386;
    while((_Bool)1) {
        if(        self->item_existance[it_387]) {
            if(            string_equals(self->keys[it_387],key)) {
                __result267__ = gComeFunResultObject = __result_obj__ = self->items[it_387];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result267__;
            }
            it_387++;
            if(            it_387>=self->size) {
                it_387=0;
            }
            else if(            it_387==hash_386) {
                __result268__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result268__;
            }
        }
        else {
            __result269__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result269__;
        }
    }
    __result270__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj111;
char* __dec_obj112;
struct sType* __dec_obj113;
char* __dec_obj114;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj111=self->mName;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj112=self->mCValueName;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj113=self->mType;
            come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj114=self->mFunName;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
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

static _Bool buffer_equals(struct buffer* left, struct buffer* right){
    if(    !charp_equals(left->buf,right->buf)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->size,right->size)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right){
    if(    !sType_equals(left->mImplType,right->mImplType)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mGenericsTypeNames,right->mGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mMethodGenericsTypeNames,right->mMethodGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
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

static struct tuple3$3charphsFunpsGenericsFunp* tuple3$3charphsFunpsGenericsFunp_initialize(struct tuple3$3charphsFunpsGenericsFunp* self, char* v1, struct sFun* v2, struct sGenericsFun* v3){
void* __result_obj__=(void*)0;
char* __dec_obj116;
struct tuple3$3charphsFunpsGenericsFunp* __result272__;
    __dec_obj116=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    self->v3=v3;
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3charphsFunpsGenericsFunpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static void tuple3$3charphsFunpsGenericsFunpp_finalize(struct tuple3$3charphsFunpsGenericsFunp* self){
char* __dec_obj117;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj117=self->v1;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value315 = (void*)0;
struct sType* generics_type_390;
struct sType* __dec_obj118;
struct sClass* klass_391;
char* class_name_392;
void* __right_value316 = (void*)0;
struct tuple3$3charphsFunpsGenericsFunp* multiple_assign_var3 = (void*)0;
char* fun_name2_393=0;
struct sFun* operator_fun_394=0;
struct sGenericsFun* generics_fun_395=0;
_Bool result_396;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct CVALUE* come_value_397;
char* left_value2_398;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
_Bool _if_conditional1;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
char* __dec_obj119;
void* __right_value325 = (void*)0;
char* __dec_obj120;
char* middle_value2_402;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
_Bool _if_conditional2;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* __dec_obj121;
void* __right_value332 = (void*)0;
char* __dec_obj122;
char* right_value2_403;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
_Bool _if_conditional3;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
char* __dec_obj123;
void* __right_value339 = (void*)0;
char* __dec_obj124;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
char* __dec_obj125;
void* __right_value345 = (void*)0;
struct sType* result_type1_404;
void* __right_value346 = (void*)0;
struct sType* result_type2_405;
struct sType* obj_type_406;
void* __right_value347 = (void*)0;
struct sType* __dec_obj126;
void* __right_value348 = (void*)0;
struct sType* __dec_obj127;
void* __right_value349 = (void*)0;
struct sType* __dec_obj128;
void* __right_value350 = (void*)0;
char* __dec_obj129;
void* __right_value351 = (void*)0;
struct CVALUE* __dec_obj130;
_Bool __result277__;
left_value2_398 = (void*)0;
middle_value2_402 = (void*)0;
right_value2_403 = (void*)0;
    generics_type_390=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type_390->mNoSolvedGenericsType) {
        __dec_obj118=generics_type_390;
        generics_type_390=(struct sType*)come_increment_ref_count(generics_type_390->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    klass_391=type->mClass;
    class_name_392=klass_391->mName;
    multiple_assign_var3=((struct tuple3$3charphsFunpsGenericsFunp*)(__right_value316=get_operator_function(type,fun_name,info)));
    fun_name2_393=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    operator_fun_394=multiple_assign_var3->v2;
    generics_fun_395=multiple_assign_var3->v3;
    come_call_finalizer3(__right_value316,tuple3$3charphsFunpsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    result_396=(_Bool)0;
    if(    operator_fun_394) {
        come_value_397=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 112, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        check_assign_type(((char*)(__right_value320=xsprintf("\%s is assigned to",((char*)(__right_value319=string_to_string(fun_name2_393)))))),((struct sType*)((void*)(__right_value321=list$1voidphp_operator_load_element(operator_fun_394->mParamTypes,0)))),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value320,charp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value321,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional1=(((struct sType*)((void*)(__right_value322=list$1voidphp_operator_load_element(operator_fun_394->mParamTypes,0))))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value322,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            std_move(((struct sType*)((void*)(__right_value323=list$1voidphp_operator_load_element(operator_fun_394->mParamTypes,0)))),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value323,(void*)0, 0, 1, 0, 0, (void*)0);
            __dec_obj119=left_value2_398;
            left_value2_398=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj120=left_value2_398;
            left_value2_398=(char*)come_increment_ref_count(come_call_cloner(string_clone, left_value->c_value));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value327=xsprintf("\%s is assigned to",((char*)(__right_value326=string_to_string(fun_name2_393)))))),((struct sType*)((void*)(__right_value328=list$1voidphp_operator_load_element(operator_fun_394->mParamTypes,1)))),middle_value->type,middle_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value327,charp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value328,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional2=(((struct sType*)((void*)(__right_value329=list$1voidphp_operator_load_element(operator_fun_394->mParamTypes,1))))->mHeap&&middle_value->type->mHeap)),        come_call_finalizer3(__right_value329,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)((void*)(__right_value330=list$1voidphp_operator_load_element(operator_fun_394->mParamTypes,1)))),middle_value->type,middle_value,info,(_Bool)1);
            come_call_finalizer3(__right_value330,(void*)0, 0, 1, 0, 0, (void*)0);
            __dec_obj121=middle_value2_402;
            middle_value2_402=(char*)come_increment_ref_count(xsprintf("%s",middle_value->c_value));
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj122=middle_value2_402;
            middle_value2_402=(char*)come_increment_ref_count(come_call_cloner(string_clone, middle_value->c_value));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value334=xsprintf("\%s is assigned to",((char*)(__right_value333=string_to_string(fun_name2_393)))))),((struct sType*)((void*)(__right_value335=list$1voidphp_operator_load_element(operator_fun_394->mParamTypes,2)))),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value334,charp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value335,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional3=(((struct sType*)((void*)(__right_value336=list$1voidphp_operator_load_element(operator_fun_394->mParamTypes,2))))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value336,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional3) {
            std_move(((struct sType*)((void*)(__right_value337=list$1voidphp_operator_load_element(operator_fun_394->mParamTypes,2)))),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value337,(void*)0, 0, 1, 0, 0, (void*)0);
            __dec_obj123=right_value2_403;
            right_value2_403=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj124=right_value2_403;
            right_value2_403=(char*)come_increment_ref_count(come_call_cloner(string_clone, right_value->c_value));
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj125=come_value_397->c_value;
        come_value_397->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s,\%s)",((char*)(__right_value340=string_to_string(fun_name2_393))),((char*)(__right_value341=string_to_string(left_value2_398))),((char*)(__right_value342=string_to_string(middle_value2_402))),((char*)(__right_value343=string_to_string(right_value2_403)))));
        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type1_404=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, operator_fun_394->mResultType));
        result_type2_405=(struct sType*)come_increment_ref_count(solve_generics(result_type1_404,generics_type_390,info));
        obj_type_406=(struct sType*)come_increment_ref_count(generics_type_390);
        if(        result_type2_405->mAnyOriginalType&&generics_fun_395) {
            __dec_obj126=result_type2_405;
            result_type2_405=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_395->mResultType,obj_type_406,info));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj127=come_value_397->type;
            come_value_397->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_405));
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_397->type->mStatic=(_Bool)0;
        }
        else {
            __dec_obj128=come_value_397->type;
            come_value_397->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_405));
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_397->var=((void*)0);
        if(        result_type2_405->mHeap) {
            append_object_to_right_values2(come_value_397,(struct sType*)come_increment_ref_count(result_type2_405),info,(_Bool)0);
        }
        __dec_obj129=come_value_397->c_value;
        come_value_397->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_397->c_value,come_value_397->type,info));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj130=come_value_397;
        come_value_397=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_397),info));
        come_call_finalizer3(__dec_obj130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        add_come_last_code(info,"%s",come_value_397->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_397));
        result_396=(_Bool)1;
        come_call_finalizer3(come_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_398 = come_decrement_ref_count2(left_value2_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_402 = come_decrement_ref_count2(middle_value2_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_403 = come_decrement_ref_count2(right_value2_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type1_404,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_406,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result277__ = result_396;
    come_call_finalizer3(generics_type_390,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_393 = come_decrement_ref_count2(fun_name2_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result277__;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_399;
int i_400;
void* __result274__;
void* default_value_401;
void* __result275__;
default_value_401 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_399=self->head;
    i_400=0;
    while(it_399!=((void*)0)) {
        if(        position==i_400) {
            __result274__ = gComeFunResultObject = __result_obj__ = it_399->item;
            gComeFunResultObject = (void*)0;
            return __result274__;
        }
        it_399=it_399->next;
        i_400++;
    }
    memset(&default_value_401,0,sizeof(void*));
    __result275__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_401);
    come_call_finalizer3(default_value_401, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj131;
struct sType* __dec_obj132;
char* __dec_obj133;
char* __dec_obj134;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj131=self->c_value;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj132=self->type;
            come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj133=self->c_value_without_right_value_objects;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj134=self->c_value_without_cast_object_value;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
struct list_item$1CVALUEph* litem_407;
struct CVALUE* __dec_obj135;
void* __right_value353 = (void*)0;
struct list_item$1CVALUEph* litem_408;
struct CVALUE* __dec_obj136;
void* __right_value354 = (void*)0;
struct list_item$1CVALUEph* litem_409;
struct CVALUE* __dec_obj137;
struct list$1CVALUEph* __result276__;
    if(    self->len==0) {
        litem_407=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value352=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_407->prev=((void*)0);
        litem_407->next=((void*)0);
        __dec_obj135=litem_407->item;
        litem_407->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_407;
        self->head=litem_407;
    }
    else if(    self->len==1) {
        litem_408=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value353=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_408->prev=self->head;
        litem_408->next=((void*)0);
        __dec_obj136=litem_408->item;
        litem_408->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj136,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_408;
        self->head->next=litem_408;
    }
    else {
        litem_409=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value354=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_409->prev=self->tail;
        litem_409->next=((void*)0);
        __dec_obj137=litem_409->item;
        litem_409->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj137,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_409;
        self->tail=litem_409;
    }
    self->len++;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* __dec_obj139;
void* __right_value357 = (void*)0;
struct sNode* __dec_obj140;
void* __right_value358 = (void*)0;
char* __dec_obj141;
struct sStoreFieldNode* __result278__;
    ((struct sNodeBase*)(__right_value355=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value355,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj139=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj140=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj141=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
char* __result279__;
    __result279__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value359=__builtin_string("sStoreFieldNode")));
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_410;
struct sNode* right_411;
void* __right_value360 = (void*)0;
char* name_412;
_Bool Value_413;
_Bool __result280__;
void* __right_value361 = (void*)0;
struct CVALUE* left_value_414;
struct sType* left_type2_415;
struct sType* __dec_obj146;
struct sType* __dec_obj147;
int i_416;
void* __right_value362 = (void*)0;
_Bool _if_conditional4;
void* __right_value363 = (void*)0;
char* __dec_obj148;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
char* __dec_obj149;
_Bool Value_417;
_Bool __result281__;
void* __right_value366 = (void*)0;
_Bool new_channel_418;
void* __right_value367 = (void*)0;
struct CVALUE* right_value_419;
struct sType* right_type_420;
struct sType* left_type_421;
void* __right_value368 = (void*)0;
struct sType* left_type2_422;
struct sClass* klass_423;
void* __right_value369 = (void*)0;
struct sType* field_type_427;
int index_428;
char* child_field_name_429;
_Bool child_field_is_pointer_430;
void* __right_value370 = (void*)0;
_Bool __result286__;
struct list$1voidph* o2_saved_431;
struct tuple2$2charphsTypeph* field_432;
struct tuple2$2charphsTypeph* multiple_assign_var4 = (void*)0;
char* field_name_433=0;
struct sType* field_type2_434=0;
void* __right_value371 = (void*)0;
struct sType* __dec_obj155;
struct list$1voidph* o2_saved_435;
struct tuple2$2charphsTypeph* field_436;
struct tuple2$2charphsTypeph* multiple_assign_var5 = (void*)0;
char* field_name_437=0;
struct sType* field_type2_438=0;
struct sClass* klass2_439;
struct list$1voidph* o2_saved_440;
struct tuple2$2charphsTypeph* field2_441;
struct tuple2$2charphsTypeph* multiple_assign_var6 = (void*)0;
char* field_name2_442=0;
struct sType* field_type3_443=0;
void* __right_value372 = (void*)0;
char* __dec_obj156;
void* __right_value373 = (void*)0;
struct sType* __dec_obj157;
void* __right_value374 = (void*)0;
struct sType* __dec_obj158;
_Bool __result287__;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct CVALUE* come_value_444;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
_Bool __result288__;
char* c_value_445;
void* __right_value380 = (void*)0;
char* __dec_obj159;
void* __right_value381 = (void*)0;
char* __dec_obj160;
void* __right_value382 = (void*)0;
char* __dec_obj161;
void* __right_value383 = (void*)0;
char* __dec_obj162;
void* __right_value384 = (void*)0;
char* c_value_446;
void* __right_value385 = (void*)0;
char* __dec_obj163;
char* c_value_447;
void* __right_value386 = (void*)0;
char* __dec_obj164;
void* __right_value387 = (void*)0;
char* __dec_obj165;
void* __right_value388 = (void*)0;
char* __dec_obj166;
void* __right_value389 = (void*)0;
char* __dec_obj167;
void* __right_value390 = (void*)0;
char* c_value_448;
void* __right_value391 = (void*)0;
char* __dec_obj168;
_Bool __result289__;
char* c_value_449;
void* __right_value392 = (void*)0;
char* __dec_obj169;
void* __right_value393 = (void*)0;
char* __dec_obj170;
void* __right_value394 = (void*)0;
char* __dec_obj171;
void* __right_value395 = (void*)0;
char* __dec_obj172;
void* __right_value396 = (void*)0;
char* c_value_450;
void* __right_value397 = (void*)0;
char* __dec_obj173;
char* c_value_451;
void* __right_value398 = (void*)0;
char* __dec_obj174;
void* __right_value399 = (void*)0;
char* __dec_obj175;
void* __right_value400 = (void*)0;
char* __dec_obj176;
void* __right_value401 = (void*)0;
char* __dec_obj177;
void* __right_value402 = (void*)0;
char* c_value_452;
void* __right_value403 = (void*)0;
char* __dec_obj178;
_Bool __result290__;
void* __right_value404 = (void*)0;
char* __dec_obj179;
void* __right_value405 = (void*)0;
char* __dec_obj180;
void* __right_value406 = (void*)0;
struct sType* __dec_obj181;
_Bool __result291__;
void* __right_value407 = (void*)0;
char* __dec_obj182;
void* __right_value408 = (void*)0;
char* __dec_obj183;
void* __right_value409 = (void*)0;
char* __dec_obj184;
void* __right_value410 = (void*)0;
char* __dec_obj185;
void* __right_value411 = (void*)0;
char* __dec_obj186;
void* __right_value412 = (void*)0;
char* __dec_obj187;
_Bool __result292__;
void* __right_value413 = (void*)0;
struct sType* __dec_obj188;
_Bool __result293__;
c_value_445 = (void*)0;
c_value_447 = (void*)0;
c_value_449 = (void*)0;
c_value_451 = (void*)0;
    left_410=self->mLeft;
    right_411=self->mRight;
    name_412=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_413=node_compile(left_410,info);
    if(    !Value_413) {
        __result280__ = (_Bool)0;
        name_412 = come_decrement_ref_count2(name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result280__;
    }
    else {
    }
    left_value_414=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_415=(struct sType*)come_increment_ref_count(left_value_414->type);
    if(    left_type2_415->mNoSolvedGenericsType) {
        __dec_obj146=left_type2_415;
        left_type2_415=(struct sType*)come_increment_ref_count(left_type2_415->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    left_type2_415->mAnyOriginalType) {
        __dec_obj147=left_type2_415;
        left_type2_415=(struct sType*)come_increment_ref_count(left_type2_415->mAnyOriginalType);
        come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(left_type2_415->mClass->mName,"tuple1")||string_operator_equals(left_type2_415->mClass->mName,"tuple2")||string_operator_equals(left_type2_415->mClass->mName,"tuple3")||string_operator_equals(left_type2_415->mClass->mName,"tuple3")||string_operator_equals(left_type2_415->mClass->mName,"tuple4")||string_operator_equals(left_type2_415->mClass->mName,"tuple5")) {
        for(        i_416=0;        i_416<list$1voidphp_length(left_type2_415->mGenericsTypes);        i_416++        ){
            if(            (_if_conditional4=(string_operator_equals(name_412,((struct sType*)((void*)(__right_value362=list$1voidphp_operator_load_element(left_type2_415->mGenericsTypes,i_416))))->mTupleName))),            come_call_finalizer3(__right_value362,(void*)0, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __dec_obj148=name_412;
                name_412=(char*)come_increment_ref_count(xsprintf("v%d",i_416+1));
                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_414->type->mPointerNum>0) {
        __dec_obj149=left_value_414->c_value;
        left_value_414->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value364=make_type_name_string(left_value_414->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_414->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    Value_417=node_compile(right_411,info);
    if(    !Value_417) {
        __result281__ = (_Bool)0;
        name_412 = come_decrement_ref_count2(name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_415,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result281__;
    }
    else {
    }
    new_channel_418=string_operator_equals(((char*)(__right_value366=right_411->kind(right_411->_protocol_obj))),"sNewChannel");
    __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value_419=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_420=right_value_419->type;
    dec_stack_ptr(1,info);
    left_type_421=left_value_414->type;
    come_call_finalizer3(left_type2_415,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_422=(struct sType*)come_increment_ref_count(solve_generics(left_type_421,left_type_421,info));
    klass_423=left_type2_422->mClass;
    klass_423=((struct sClass*)(__right_value369=map$2charphsClassphp_operator_load_element(info->classes,klass_423->mName)));
    come_call_finalizer3(__right_value369,sClass_finalize, 0, 1, 0, 0, (void*)0);
    field_type_427=((void*)0);
    index_428=0;
    child_field_name_429=((void*)0);
    child_field_is_pointer_430=(_Bool)0;
    klass_423=((struct sClass*)(__right_value370=map$2charphsClassphp_operator_load_element(info->classes,klass_423->mName)));
    come_call_finalizer3(__right_value370,sClass_finalize, 0, 1, 0, 0, (void*)0);
    if(    klass_423->mFields==((void*)0)) {
        err_msg(info,"%s fields are null",klass_423->mName);
        __result286__ = (_Bool)0;
        name_412 = come_decrement_ref_count2(name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_422,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_429 = come_decrement_ref_count2(child_field_name_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result286__;
    }
    for(    o2_saved_431=(struct list$1voidph*)come_increment_ref_count((klass_423->mFields)),field_432=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_431)));    !list$1voidphp_end((o2_saved_431));    field_432=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_431)))    ){
        multiple_assign_var4=field_432;
        field_name_433=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_434=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(        string_operator_equals(field_name_433,name_412)) {
            __dec_obj155=field_type_427;
            field_type_427=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_434));
            come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
            field_name_433 = come_decrement_ref_count2(field_name_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_434,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_428++;
        field_name_433 = come_decrement_ref_count2(field_name_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_434,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_431,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_428==list$1voidphp_length(klass_423->mFields)) {
        index_428=0;
        for(        o2_saved_435=(struct list$1voidph*)come_increment_ref_count((klass_423->mFields)),field_436=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_435)));        !list$1voidphp_end((o2_saved_435));        field_436=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_435)))        ){
            multiple_assign_var5=field_436;
            field_name_437=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_438=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_439=field_type2_438->mClass;
            for(            o2_saved_440=(struct list$1voidph*)come_increment_ref_count((klass2_439->mFields)),field2_441=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_440)));            !list$1voidphp_end((o2_saved_440));            field2_441=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_440)))            ){
                multiple_assign_var6=field2_441;
                field_name2_442=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_443=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                string_operator_equals(field_name2_442,name_412)) {
                    __dec_obj156=child_field_name_429;
                    child_field_name_429=(char*)come_increment_ref_count(__builtin_string(field_name_437));
                    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_438->mPointerNum>0) {
                        child_field_is_pointer_430=(_Bool)1;
                    }
                    __dec_obj157=field_type_427;
                    field_type_427=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type3_443));
                    come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name2_442 = come_decrement_ref_count2(field_name2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_442 = come_decrement_ref_count2(field_name2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_440,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_429) {
                field_name_437 = come_decrement_ref_count2(field_name_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_438,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_437,name_412)) {
                __dec_obj158=field_type_427;
                field_type_427=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_438));
                come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
                field_name_437 = come_decrement_ref_count2(field_name_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_438,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_428++;
            field_name_437 = come_decrement_ref_count2(field_name_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_438,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_435,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_428==list$1voidphp_length(klass_423->mFields)||field_type_427==((void*)0)) {
            err_msg(info,"field not found(%s) in %s(1)",name_412,klass_423->mName);
            __result287__ = (_Bool)0;
            name_412 = come_decrement_ref_count2(name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_422,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_429 = come_decrement_ref_count2(child_field_name_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result287__;
        }
    }
    come_value_444=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 313, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    check_assign_type(((char*)(__right_value378=xsprintf("\%s is assigned to",((char*)(__right_value377=string_to_string(name_412)))))),field_type_427,right_type_420,right_value_419,(_Bool)0,(_Bool)1,(_Bool)0,info);
    __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value378,charp_finalize, 0, 1, 0, 0, (void*)0);
    right_type_420=((struct sType*)(__right_value379=come_call_cloner(sType_clone, right_value_419->type)));
    come_call_finalizer3(__right_value379,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    field_type_427->mHeap&&!right_value_419->type->mHeap) {
        if(        string_operator_equals(right_value_419->type->mClass->mName,"void")&&right_value_419->type->mPointerNum==1) {
        }
        else {
            if(            !gComeGC) {
                err_msg(info,"require right value as heap object(%s)(1)",name_412);
                printf("right type is %s pointer num %d heap %d\n",right_value_419->type->mClass->mName,right_value_419->type->mPointerNum,right_value_419->type->mHeap);
                __result288__ = (_Bool)0;
                name_412 = come_decrement_ref_count2(name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_422,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_429 = come_decrement_ref_count2(child_field_name_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result288__;
            }
        }
    }
    if(    field_type_427->mHeap&&right_type_420->mHeap&&field_type_427->mPointerNum>0&&right_type_420->mPointerNum>0) {
        if(        left_value_414->type->mPointerNum==1) {
            if(            child_field_name_429) {
                if(                child_field_is_pointer_430) {
                    __dec_obj159=c_value_445;
                    c_value_445=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_414->c_value,child_field_name_429,name_412));
                    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj160=c_value_445;
                    c_value_445=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_414->c_value,child_field_name_429,name_412));
                    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_427,c_value_445,info,(_Bool)0,(_Bool)0);
                std_move(field_type_427,right_type_420,right_value_419,info,(_Bool)0);
                if(                child_field_is_pointer_430) {
                    __dec_obj161=come_value_444->c_value;
                    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_414->c_value,child_field_name_429,name_412,right_value_419->c_value));
                    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj162=come_value_444->c_value;
                    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_414->c_value,child_field_name_429,name_412,right_value_419->c_value));
                    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_445 = come_decrement_ref_count2(c_value_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_446=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_414->c_value,name_412));
                decrement_ref_count_object(field_type_427,c_value_446,info,(_Bool)0,(_Bool)0);
                std_move(field_type_427,right_type_420,right_value_419,info,(_Bool)0);
                __dec_obj163=come_value_444->c_value;
                come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_414->c_value,name_412,right_value_419->c_value));
                __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_446 = come_decrement_ref_count2(c_value_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_414->type->mPointerNum==0) {
            if(            child_field_name_429) {
                if(                child_field_is_pointer_430) {
                    __dec_obj164=c_value_447;
                    c_value_447=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_414->c_value,child_field_name_429,name_412));
                    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj165=c_value_447;
                    c_value_447=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_414->c_value,child_field_name_429,name_412));
                    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_427,c_value_447,info,(_Bool)0,(_Bool)0);
                std_move(field_type_427,right_type_420,right_value_419,info,(_Bool)0);
                if(                child_field_is_pointer_430) {
                    __dec_obj166=come_value_444->c_value;
                    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_414->c_value,child_field_name_429,name_412,right_value_419->c_value));
                    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj167=come_value_444->c_value;
                    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_414->c_value,child_field_name_429,name_412,right_value_419->c_value));
                    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_447 = come_decrement_ref_count2(c_value_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_448=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_414->c_value,name_412));
                decrement_ref_count_object(field_type_427,c_value_448,info,(_Bool)0,(_Bool)0);
                std_move(field_type_427,right_value_419->type,right_value_419,info,(_Bool)0);
                __dec_obj168=come_value_444->c_value;
                come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_414->c_value,name_412,right_value_419->c_value));
                __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_448 = come_decrement_ref_count2(c_value_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_412,left_value_414->type->mPointerNum);
            __result289__ = (_Bool)0;
            name_412 = come_decrement_ref_count2(name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_422,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_429 = come_decrement_ref_count2(child_field_name_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result289__;
        }
    }
    else if(    field_type_427->mHeap&&field_type_427->mPointerNum>0&&right_type_420->mPointerNum>0&&string_operator_equals(right_type_420->mClass->mName,"void")) {
        if(        left_value_414->type->mPointerNum==1) {
            if(            child_field_name_429) {
                if(                child_field_is_pointer_430) {
                    __dec_obj169=c_value_449;
                    c_value_449=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_414->c_value,child_field_name_429,name_412));
                    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj170=c_value_449;
                    c_value_449=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_414->c_value,child_field_name_429,name_412));
                    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_427,c_value_449,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_430) {
                    __dec_obj171=come_value_444->c_value;
                    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_414->c_value,child_field_name_429,name_412,right_value_419->c_value));
                    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj172=come_value_444->c_value;
                    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_414->c_value,child_field_name_429,name_412,right_value_419->c_value));
                    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_449 = come_decrement_ref_count2(c_value_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_450=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_414->c_value,name_412));
                decrement_ref_count_object(field_type_427,c_value_450,info,(_Bool)0,(_Bool)0);
                __dec_obj173=come_value_444->c_value;
                come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_414->c_value,name_412,right_value_419->c_value));
                __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_450 = come_decrement_ref_count2(c_value_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_414->type->mPointerNum==0) {
            if(            child_field_name_429) {
                if(                child_field_is_pointer_430) {
                    __dec_obj174=c_value_451;
                    c_value_451=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_414->c_value,child_field_name_429,name_412));
                    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj175=c_value_451;
                    c_value_451=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_414->c_value,child_field_name_429,name_412));
                    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_427,c_value_451,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_430) {
                    __dec_obj176=come_value_444->c_value;
                    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_414->c_value,child_field_name_429,name_412,right_value_419->c_value));
                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj177=come_value_444->c_value;
                    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_414->c_value,child_field_name_429,name_412,right_value_419->c_value));
                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_451 = come_decrement_ref_count2(c_value_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_452=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_414->c_value,name_412));
                decrement_ref_count_object(field_type_427,c_value_452,info,(_Bool)0,(_Bool)0);
                __dec_obj178=come_value_444->c_value;
                come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_414->c_value,name_412,right_value_419->c_value));
                __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_452 = come_decrement_ref_count2(c_value_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_412,left_value_414->type->mPointerNum);
            __result290__ = (_Bool)0;
            name_412 = come_decrement_ref_count2(name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_422,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_429 = come_decrement_ref_count2(child_field_name_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result290__;
        }
    }
    else if(    field_type_427->mChannel&&new_channel_418) {
        if(        child_field_is_pointer_430) {
            __dec_obj179=come_value_444->c_value;
            come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_414->c_value,name_412,right_value_419->c_value));
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj180=come_value_444->c_value;
            come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_414->c_value,name_412,right_value_419->c_value));
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj181=come_value_444->type;
        come_value_444->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_value_419->type));
        come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_444->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_444));
        add_come_last_code(info,"%s",come_value_444->c_value);
        __result291__ = (_Bool)1;
        name_412 = come_decrement_ref_count2(name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_422,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_429 = come_decrement_ref_count2(child_field_name_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result291__;
    }
    else {
        if(        left_value_414->type->mPointerNum==1) {
            if(            child_field_name_429) {
                if(                child_field_is_pointer_430) {
                    __dec_obj182=come_value_444->c_value;
                    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_414->c_value,child_field_name_429,name_412,right_value_419->c_value));
                    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj183=come_value_444->c_value;
                    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_414->c_value,child_field_name_429,name_412,right_value_419->c_value));
                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj184=come_value_444->c_value;
                come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_414->c_value,name_412,right_value_419->c_value));
                __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else if(        left_value_414->type->mPointerNum==0) {
            if(            child_field_name_429) {
                if(                child_field_is_pointer_430) {
                    __dec_obj185=come_value_444->c_value;
                    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_414->c_value,child_field_name_429,name_412,right_value_419->c_value));
                    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj186=come_value_444->c_value;
                    come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_414->c_value,child_field_name_429,name_412,right_value_419->c_value));
                    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj187=come_value_444->c_value;
                come_value_444->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_414->c_value,name_412,right_value_419->c_value));
                __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_412,left_value_414->type->mPointerNum);
            __result292__ = (_Bool)0;
            name_412 = come_decrement_ref_count2(name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_422,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_429 = come_decrement_ref_count2(child_field_name_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result292__;
        }
    }
    __dec_obj188=come_value_444->type;
    come_value_444->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_427));
    come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_444->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_444));
    add_come_last_code(info,"%s",come_value_444->c_value);
    __result293__ = (_Bool)1;
    name_412 = come_decrement_ref_count2(name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_422,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_429 = come_decrement_ref_count2(child_field_name_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result293__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
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

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
char* __dec_obj142;
struct sNode* __dec_obj143;
struct sNode* __dec_obj144;
char* __dec_obj145;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj142=self->sname;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj143=self->mLeft;
            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj144=self->mRight;
            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj145=self->mName;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_424;
unsigned int hash_425;
unsigned int it_426;
struct sClass* __result282__;
struct sClass* __result283__;
struct sClass* __result284__;
struct sClass* __result285__;
default_value_424 = (void*)0;
    memset(&default_value_424,0,sizeof(struct sClass*));
    hash_425=string_get_hash_key(((char*)key))%self->size;
    it_426=hash_425;
    while((_Bool)1) {
        if(        self->item_existance[it_426]) {
            if(            string_equals(self->keys[it_426],key)) {
                __result282__ = gComeFunResultObject = __result_obj__ = self->items[it_426];
                come_call_finalizer3(default_value_424,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result282__;
            }
            it_426++;
            if(            it_426>=self->size) {
                it_426=0;
            }
            else if(            it_426==hash_425) {
                __result283__ = gComeFunResultObject = __result_obj__ = default_value_424;
                come_call_finalizer3(default_value_424,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result283__;
            }
        }
        else {
            __result284__ = gComeFunResultObject = __result_obj__ = default_value_424;
            come_call_finalizer3(default_value_424,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result284__;
        }
    }
    __result285__ = gComeFunResultObject = __result_obj__ = default_value_424;
    come_call_finalizer3(default_value_424,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj150;
struct list$1voidph* __dec_obj151;
char* __dec_obj152;
char* __dec_obj153;
char* __dec_obj154;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj150=self->mName;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj151=self->mFields;
            come_call_finalizer3(__dec_obj151,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj152=self->mDeclareSName;
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj153=self->mParentClassName;
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj154=self->mAttribute;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct sNode* __dec_obj189;
struct sNullCheckNode* __result294__;
struct sNullCheckNode* __result295__;
    ((struct sNodeBase*)(__right_value414=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value414,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj189=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); };
    self->mOnlyNullCecker=only_null_checker;
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
void* __right_value416 = (void*)0;
char* __result296__;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value416=__builtin_string("sNullCheckNode")));
    __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_453;
_Bool Value_454;
void* __right_value417 = (void*)0;
struct CVALUE* left_value_455;
void* __right_value418 = (void*)0;
char* method_name_456;
void* __right_value419 = (void*)0;
_Bool _if_conditional5;
struct sType* obj_type_459;
struct sType* obj_type2_460;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var7 = (void*)0;
char* name_461=0;
struct sGenericsFun* generics_fun_462=0;
char* __dec_obj193;
void* __right_value422 = (void*)0;
struct sFun* fun_463;
_Bool __result301__;
void* __right_value423 = (void*)0;
struct sType* type_464;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct CVALUE* come_value_465;
void* __right_value426 = (void*)0;
char* __dec_obj194;
void* __right_value427 = (void*)0;
struct sType* __dec_obj195;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct CVALUE* come_value_466;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
char* __dec_obj196;
void* __right_value432 = (void*)0;
struct sType* __dec_obj197;
_Bool __result302__;
    left_453=self->mLeft;
    Value_454=node_compile(left_453,info);
    if(    !Value_454) {
        return (_Bool)0;
    }
    else {
    }
    left_value_455=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    !self->mOnlyNullCecker&&left_value_455->type->mNoSolvedGenericsType&&left_value_455->type->mNoSolvedGenericsType->mClass&&string_operator_equals(left_value_455->type->mNoSolvedGenericsType->mClass->mName,"optional")) {
        method_name_456=(char*)come_increment_ref_count(create_method_name(left_value_455->type,(_Bool)0,"expect",info,(_Bool)1));
        if(        (_if_conditional5=(((struct sFun*)(__right_value419=map$2charphsFunphp_at(info->funcs,method_name_456,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value419,sFun_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional5) {
            obj_type_459=left_value_455->type->mNoSolvedGenericsType;
            if(            list$1voidphp_length(obj_type_459->mGenericsTypes)>0) {
                obj_type2_460=left_value_455->type;
                multiple_assign_var7=((struct tuple2$2charphsGenericsFunp*)(__right_value421=make_generics_function(obj_type2_460,(char*)come_increment_ref_count(__builtin_string("expect")),info,(_Bool)1)));
                name_461=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                generics_fun_462=multiple_assign_var7->v2;
                come_call_finalizer3(__right_value421,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj193=method_name_456;
                method_name_456=(char*)come_increment_ref_count(name_461);
                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_461 = come_decrement_ref_count2(name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_455->type->mClass->mName);
                exit(1);
            }
        }
        fun_463=((struct sFun*)(__right_value422=map$2charphsFunphp_operator_load_element(info->funcs,method_name_456)));
        come_call_finalizer3(__right_value422,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_463==((void*)0)) {
            err_msg(info,"function not found(%s)",method_name_456);
            __result301__ = (_Bool)1;
            method_name_456 = come_decrement_ref_count2(method_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result301__;
        }
        type_464=(struct sType*)come_increment_ref_count(solve_generics(fun_463->mResultType,left_value_455->type,info));
        come_value_465=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 555, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj194=come_value_465->c_value;
        come_value_465->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",method_name_456,left_value_455->c_value));
        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj195=come_value_465->type;
        come_value_465->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_464));
        come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_465->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_465));
        add_come_last_code(info,"%s",come_value_465->c_value);
        method_name_456 = come_decrement_ref_count2(method_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeDebug) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_455));
    }
    else if(    left_value_455->type->mPointerNum>0) {
        come_value_466=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 569, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj196=come_value_466->c_value;
        come_value_466->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value430=make_type_name_string(left_value_455->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_455->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj197=come_value_466->type;
        come_value_466->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_455->type));
        come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_466->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_466));
        add_come_last_code(info,"%s",come_value_466->c_value);
        come_call_finalizer3(come_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_455));
    }
    __result302__ = (_Bool)1;
    come_call_finalizer3(left_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result302__;
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
char* __dec_obj190;
struct sNode* __dec_obj191;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj190=self->sname;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj191=self->mLeft;
            if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_457;
unsigned int it_458;
struct sFun* __result297__;
struct sFun* __result298__;
struct sFun* __result299__;
struct sFun* __result300__;
    hash_457=string_get_hash_key(((char*)key))%self->size;
    it_458=hash_457;
    while((_Bool)1) {
        if(        self->item_existance[it_458]) {
            if(            string_equals(self->keys[it_458],key)) {
                __result297__ = gComeFunResultObject = __result_obj__ = self->items[it_458];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result297__;
            }
            it_458++;
            if(            it_458>=self->size) {
                it_458=0;
            }
            else if(            it_458==hash_457) {
                __result298__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result298__;
            }
        }
        else {
            __result299__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result299__;
        }
    }
    __result300__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj192;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj192=self->v1;
            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sNode* __dec_obj198;
struct sNullableNode* __result303__;
    ((struct sNodeBase*)(__right_value433=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value433,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj198=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); };
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__=(void*)0;
void* __right_value435 = (void*)0;
char* __result304__;
    __result304__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value435=__builtin_string("sNullableNode")));
    __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_467;
_Bool Value_468;
void* __right_value436 = (void*)0;
struct CVALUE* left_value_469;
void* __right_value442 = (void*)0;
struct CVALUE* come_value_470;
_Bool __result307__;
    left_467=self->mLeft;
    Value_468=node_compile(left_467,info);
    if(    !Value_468) {
        return (_Bool)0;
    }
    else {
    }
    left_value_469=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    left_value_469->type->mPointerNum>0&&left_value_469->type->mNullValue) {
        come_value_470=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, left_value_469));
        come_value_470->type->mNullValue=(_Bool)0;
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_470));
        add_come_last_code(info,"%s",come_value_470->c_value);
        come_call_finalizer3(come_value_470,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_469));
    }
    __result307__ = (_Bool)1;
    come_call_finalizer3(left_value_469,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result307__;
}

static void sNullableNode_finalize(struct sNullableNode* self){
char* __dec_obj199;
struct sNode* __dec_obj200;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj199=self->sname;
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj200=self->mLeft;
            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result305__;
void* __right_value437 = (void*)0;
struct CVALUE* result_472;
void* __right_value438 = (void*)0;
char* __dec_obj201;
void* __right_value439 = (void*)0;
struct sType* __dec_obj202;
void* __right_value440 = (void*)0;
char* __dec_obj203;
void* __right_value441 = (void*)0;
char* __dec_obj204;
struct CVALUE* __result306__;
    if(    self==(void*)0) {
        __result305__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    result_472=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone, CVALUE_get_hash_key, CVALUE_equals));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj201=result_472->c_value;
        result_472->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj202=result_472->type;
        result_472->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_472->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_472->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj203=result_472->c_value_without_right_value_objects;
        result_472->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj204=result_472->c_value_without_cast_object_value;
        result_472->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result306__ = gComeFunResultObject = __result_obj__ = result_472;
    come_call_finalizer3(result_472,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static unsigned int CVALUE_get_hash_key(struct CVALUE* self){
unsigned int result_471;
    result_471=0;
    result_471+=int_get_hash_key(((int)self->c_value));
    result_471+=int_get_hash_key(((int)self->type));
    result_471+=int_get_hash_key(((int)self->var));
    result_471+=int_get_hash_key(((int)self->right_value_objects));
    result_471+=int_get_hash_key(((int)self->c_value_without_right_value_objects));
    result_471+=int_get_hash_key(((int)self->c_value_without_cast_object_value));
    return result_471;
}

static _Bool CVALUE_equals(struct CVALUE* left, struct CVALUE* right){
    if(    !string_equals(left->c_value,right->c_value)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    if(    !sVar_equals(left->var,right->var)) {
        return (_Bool)0;
    }
    if(    !sRightValueObject_equals(left->right_value_objects,right->right_value_objects)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->c_value_without_right_value_objects,right->c_value_without_right_value_objects)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->c_value_without_cast_object_value,right->c_value_without_cast_object_value)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right){
    if(    !sType_equals(left->mType,right->mType)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mVarName,right->mVarName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunName,right->mFunName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFreed,right->mFreed)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mID,right->mID)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mBlockLevel,right->mBlockLevel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStored,right->mStored)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDecrementRefCount,right->mDecrementRefCount)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sNode* _inf_value1;
struct sNullableNode* _inf_obj_value1;
void* __right_value448 = (void*)0;
struct sNode* __result310__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 631, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value444=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 631, "struct sNullableNode*", (void*)0, (void*)0, (void*)0, (void*)0)),left,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullableNode_finalize;
    _inf_value1->clone=(void*)sNullableNode_clone;
    _inf_value1->compile=(void*)sNullableNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullableNode_kind;
    __result310__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value448=_inf_value1));
    come_call_finalizer3(__right_value444,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value448) { __right_value448 = come_decrement_ref_count2(__right_value448, ((struct sNode*)__right_value448)->finalize, ((struct sNode*)__right_value448)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__=(void*)0;
struct sNullableNode* __result308__;
void* __right_value445 = (void*)0;
struct sNullableNode* result_474;
void* __right_value446 = (void*)0;
char* __dec_obj205;
void* __right_value447 = (void*)0;
struct sNode* __dec_obj206;
struct sNullableNode* __result309__;
    if(    self==(void*)0) {
        __result308__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    result_474=(struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "struct sNullableNode", sNullableNode_finalize, sNullableNode_clone, sNullableNode_get_hash_key, sNullableNode_equals));
    if(    self!=((void*)0)) {
        result_474->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj205=result_474->sname;
        result_474->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_474->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj206=result_474->mLeft;
        result_474->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result309__ = gComeFunResultObject = __result_obj__ = result_474;
    come_call_finalizer3(result_474,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static unsigned int sNullableNode_get_hash_key(struct sNullableNode* self){
unsigned int result_473;
    result_473=0;
    result_473+=int_get_hash_key(((int)self->sline));
    result_473+=int_get_hash_key(((int)self->sname));
    result_473+=int_get_hash_key(((int)self->sline_real));
    result_473+=int_get_hash_key(((int)self->mLeft));
    return result_473;
}

static _Bool sNullableNode_equals(struct sNullableNode* left, struct sNullableNode* right){
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
    return (_Bool)1;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sNode* __dec_obj207;
void* __right_value451 = (void*)0;
char* __dec_obj208;
struct sLoadFieldNode* __result311__;
    ((struct sNodeBase*)(__right_value449=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value449,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj207=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj208=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value452 = (void*)0;
char* __result312__;
    __result312__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value452=__builtin_string("sLoadFieldNode")));
    __right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_475;
void* __right_value453 = (void*)0;
char* name_476;
_Bool Value_477;
_Bool __result313__;
void* __right_value454 = (void*)0;
struct CVALUE* left_value_478;
struct sType* left_type2_479;
struct sType* __dec_obj212;
struct sType* __dec_obj213;
int i_480;
void* __right_value455 = (void*)0;
_Bool _if_conditional6;
void* __right_value456 = (void*)0;
char* __dec_obj214;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
char* __dec_obj215;
struct sType* left_type_481;
void* __right_value459 = (void*)0;
struct sType* left_type2_482;
struct sClass* klass_483;
void* __right_value460 = (void*)0;
struct sType* field_type_484;
int index_485;
_Bool child_field_is_pointer_486;
char* child_field_name_487;
void* __right_value461 = (void*)0;
_Bool __result314__;
struct list$1voidph* o2_saved_488;
struct tuple2$2charphsTypeph* field_489;
struct tuple2$2charphsTypeph* multiple_assign_var8 = (void*)0;
char* field_name_490=0;
struct sType* field_type2_491=0;
void* __right_value462 = (void*)0;
struct sType* __dec_obj216;
struct list$1voidph* o2_saved_492;
struct tuple2$2charphsTypeph* field_493;
struct tuple2$2charphsTypeph* multiple_assign_var9 = (void*)0;
char* field_name_494=0;
struct sType* field_type2_495=0;
struct sClass* klass2_496;
struct list$1voidph* o2_saved_497;
struct tuple2$2charphsTypeph* field2_498;
struct tuple2$2charphsTypeph* multiple_assign_var10 = (void*)0;
char* field_name2_499=0;
struct sType* field_type3_500=0;
void* __right_value463 = (void*)0;
char* __dec_obj217;
void* __right_value464 = (void*)0;
struct sType* __dec_obj218;
void* __right_value465 = (void*)0;
struct sType* __dec_obj219;
_Bool __result315__;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct CVALUE* come_value_501;
void* __right_value468 = (void*)0;
char* __dec_obj220;
void* __right_value469 = (void*)0;
char* __dec_obj221;
void* __right_value470 = (void*)0;
char* __dec_obj222;
void* __right_value471 = (void*)0;
char* __dec_obj223;
void* __right_value472 = (void*)0;
char* __dec_obj224;
void* __right_value473 = (void*)0;
char* __dec_obj225;
void* __right_value474 = (void*)0;
struct sType* __dec_obj226;
_Bool __result316__;
void* __right_value475 = (void*)0;
struct sType* __dec_obj227;
_Bool __result318__;
    left_475=self->mLeft;
    name_476=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_477=node_compile(left_475,info);
    if(    !Value_477) {
        __result313__ = (_Bool)0;
        name_476 = come_decrement_ref_count2(name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result313__;
    }
    else {
    }
    left_value_478=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_479=(struct sType*)come_increment_ref_count(left_value_478->type);
    if(    left_type2_479->mNoSolvedGenericsType) {
        __dec_obj212=left_type2_479;
        left_type2_479=(struct sType*)come_increment_ref_count(left_type2_479->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    left_type2_479->mAnyOriginalType) {
        __dec_obj213=left_type2_479;
        left_type2_479=(struct sType*)come_increment_ref_count(left_type2_479->mAnyOriginalType);
        come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(left_type2_479->mClass->mName,"tuple1")||string_operator_equals(left_type2_479->mClass->mName,"tuple2")||string_operator_equals(left_type2_479->mClass->mName,"tuple3")||string_operator_equals(left_type2_479->mClass->mName,"tuple3")||string_operator_equals(left_type2_479->mClass->mName,"tuple4")||string_operator_equals(left_type2_479->mClass->mName,"tuple5")) {
        for(        i_480=0;        i_480<list$1voidphp_length(left_type2_479->mGenericsTypes);        i_480++        ){
            if(            (_if_conditional6=(string_operator_equals(name_476,((struct sType*)((void*)(__right_value455=list$1voidphp_operator_load_element(left_type2_479->mGenericsTypes,i_480))))->mTupleName))),            come_call_finalizer3(__right_value455,(void*)0, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __dec_obj214=name_476;
                name_476=(char*)come_increment_ref_count(xsprintf("v%d",i_480+1));
                __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_478->type->mPointerNum>0) {
        __dec_obj215=left_value_478->c_value;
        left_value_478->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value457=make_type_name_string(left_value_478->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_478->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_481=left_value_478->type;
    come_call_finalizer3(left_type2_479,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_482=(struct sType*)come_increment_ref_count(solve_generics(left_type_481,left_type_481,info));
    klass_483=left_type2_482->mClass;
    klass_483=((struct sClass*)(__right_value460=map$2charphsClassphp_operator_load_element(info->classes,klass_483->mName)));
    come_call_finalizer3(__right_value460,sClass_finalize, 0, 1, 0, 0, (void*)0);
    field_type_484=((void*)0);
    index_485=0;
    child_field_is_pointer_486=(_Bool)0;
    child_field_name_487=((void*)0);
    klass_483=((struct sClass*)(__right_value461=map$2charphsClassphp_operator_load_element(info->classes,klass_483->mName)));
    come_call_finalizer3(__right_value461,sClass_finalize, 0, 1, 0, 0, (void*)0);
    if(    klass_483==((void*)0)||klass_483->mFields==((void*)0)) {
        err_msg(info,"invalid class %s",klass_483->mName);
        __result314__ = (_Bool)0;
        name_476 = come_decrement_ref_count2(name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_482,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_487 = come_decrement_ref_count2(child_field_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result314__;
    }
    for(    o2_saved_488=(struct list$1voidph*)come_increment_ref_count((klass_483->mFields)),field_489=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_488)));    !list$1voidphp_end((o2_saved_488));    field_489=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_488)))    ){
        multiple_assign_var8=field_489;
        field_name_490=(char*)come_increment_ref_count(multiple_assign_var8->v1);
        field_type2_491=(struct sType*)come_increment_ref_count(multiple_assign_var8->v2);
        if(        string_operator_equals(field_name_490,name_476)) {
            __dec_obj216=field_type_484;
            field_type_484=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_491));
            come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
            field_name_490 = come_decrement_ref_count2(field_name_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_491,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_485++;
        field_name_490 = come_decrement_ref_count2(field_name_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_491,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_488,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_485==list$1voidphp_length(klass_483->mFields)) {
        index_485=0;
        for(        o2_saved_492=(struct list$1voidph*)come_increment_ref_count((klass_483->mFields)),field_493=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_492)));        !list$1voidphp_end((o2_saved_492));        field_493=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_492)))        ){
            multiple_assign_var9=field_493;
            field_name_494=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            field_type2_495=(struct sType*)come_increment_ref_count(multiple_assign_var9->v2);
            klass2_496=field_type2_495->mClass;
            for(            o2_saved_497=(struct list$1voidph*)come_increment_ref_count((klass2_496->mFields)),field2_498=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_497)));            !list$1voidphp_end((o2_saved_497));            field2_498=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_497)))            ){
                multiple_assign_var10=field2_498;
                field_name2_499=(char*)come_increment_ref_count(multiple_assign_var10->v1);
                field_type3_500=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
                if(                string_operator_equals(field_name2_499,name_476)) {
                    __dec_obj217=child_field_name_487;
                    child_field_name_487=(char*)come_increment_ref_count(__builtin_string(field_name_494));
                    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_495->mPointerNum>0) {
                        child_field_is_pointer_486=(_Bool)1;
                    }
                    __dec_obj218=field_type_484;
                    field_type_484=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type3_500));
                    come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name2_499 = come_decrement_ref_count2(field_name2_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_500,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_499 = come_decrement_ref_count2(field_name2_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_500,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_497,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_487) {
                field_name_494 = come_decrement_ref_count2(field_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_495,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_494,name_476)) {
                __dec_obj219=field_type_484;
                field_type_484=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_495));
                come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
                field_name_494 = come_decrement_ref_count2(field_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_495,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_485++;
            field_name_494 = come_decrement_ref_count2(field_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_495,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_492,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_485==list$1voidphp_length(klass_483->mFields)) {
            err_msg(info,"field not found(%s) in %s(2)",name_476,klass_483->mName);
            __result315__ = (_Bool)0;
            name_476 = come_decrement_ref_count2(name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_482,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_487 = come_decrement_ref_count2(child_field_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result315__;
        }
    }
    come_value_501=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 748, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    left_value_478->type->mPointerNum>0) {
        if(        child_field_name_487) {
            if(            child_field_is_pointer_486) {
                __dec_obj220=come_value_501->c_value;
                come_value_501->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_478->c_value,child_field_name_487,name_476));
                __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj221=come_value_501->c_value;
                come_value_501->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_478->c_value,child_field_name_487,name_476));
                __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj222=come_value_501->c_value;
            come_value_501->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_478->c_value,name_476));
            __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        if(        child_field_name_487) {
            if(            child_field_is_pointer_486) {
                __dec_obj223=come_value_501->c_value;
                come_value_501->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_478->c_value,child_field_name_487,name_476));
                __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj224=come_value_501->c_value;
                come_value_501->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_478->c_value,child_field_name_487,name_476));
                __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj225=come_value_501->c_value;
            come_value_501->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_478->c_value,name_476));
            __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    __dec_obj226=come_value_501->type;
    come_value_501->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_484));
    come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_501->var=((void*)0);
    if(    field_type_484==((void*)0)) {
        err_msg(info,"no field(%s)\n",name_476);
        __result316__ = (_Bool)0;
        name_476 = come_decrement_ref_count2(name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_482,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_487 = come_decrement_ref_count2(child_field_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result316__;
    }
    if(    list$1sNodephp_length(come_value_501->type->mArrayNum)==1) {
        __dec_obj227=come_value_501->type->mOriginalLoadVarType;
        come_value_501->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_501->type));
        come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodephp_reset(come_value_501->type->mArrayNum);
        come_value_501->type->mPointerNum++;
        come_value_501->type->mOriginalTypeNamePointerNum=come_value_501->type->mPointerNum;
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_501));
    __result318__ = (_Bool)1;
    name_476 = come_decrement_ref_count2(name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_482,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_487 = come_decrement_ref_count2(child_field_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result318__;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
char* __dec_obj209;
struct sNode* __dec_obj210;
char* __dec_obj211;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj209=self->sname;
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj210=self->mLeft;
            if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj211=self->mName;
            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_502;
struct list_item$1sNodeph* prev_it_503;
struct list$1sNodeph* __result317__;
    it_502=self->head;
    while(it_502!=((void*)0)) {
        prev_it_503=it_502;
        it_502=it_502->next;
        come_call_finalizer3(prev_it_503,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sNode* _inf_value2;
struct sLoadFieldNode* _inf_obj_value2;
void* __right_value482 = (void*)0;
struct sNode* __result321__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 806, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value477=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 806, "struct sLoadFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0)),left,(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    __result321__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value482=_inf_value2));
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value477,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value482) { __right_value482 = come_decrement_ref_count2(__right_value482, ((struct sNode*)__right_value482)->finalize, ((struct sNode*)__right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
struct sLoadFieldNode* __result319__;
void* __right_value478 = (void*)0;
struct sLoadFieldNode* result_505;
void* __right_value479 = (void*)0;
char* __dec_obj228;
void* __right_value480 = (void*)0;
struct sNode* __dec_obj229;
void* __right_value481 = (void*)0;
char* __dec_obj230;
struct sLoadFieldNode* __result320__;
    if(    self==(void*)0) {
        __result319__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    result_505=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode", sLoadFieldNode_finalize, sLoadFieldNode_clone, sLoadFieldNode_get_hash_key, sLoadFieldNode_equals));
    if(    self!=((void*)0)) {
        result_505->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj228=result_505->sname;
        result_505->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_505->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj229=result_505->mLeft;
        result_505->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj230=result_505->mName;
        result_505->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result320__ = gComeFunResultObject = __result_obj__ = result_505;
    come_call_finalizer3(result_505,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static unsigned int sLoadFieldNode_get_hash_key(struct sLoadFieldNode* self){
unsigned int result_504;
    result_504=0;
    result_504+=int_get_hash_key(((int)self->sline));
    result_504+=int_get_hash_key(((int)self->sname));
    result_504+=int_get_hash_key(((int)self->sline_real));
    result_504+=int_get_hash_key(((int)self->mLeft));
    result_504+=int_get_hash_key(((int)self->mName));
    return result_504;
}

static _Bool sLoadFieldNode_equals(struct sLoadFieldNode* left, struct sLoadFieldNode* right){
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
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sNode* __dec_obj231;
void* __right_value485 = (void*)0;
struct sNode* __dec_obj232;
void* __right_value486 = (void*)0;
struct list$1sNodeph* __dec_obj233;
struct sStoreArrayNode* __result322__;
    ((struct sNodeBase*)(__right_value483=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value483,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj231=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj232=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj233=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, array_num));
    come_call_finalizer3(__dec_obj233,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mQuote=quote;
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value487 = (void*)0;
char* __result323__;
    __result323__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value487=__builtin_string("sStoreArrayNode")));
    __right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_506;
struct sNode* right_507;
struct list$1sNodeph* array_num_nodes_508;
_Bool Value_509;
_Bool __result324__;
void* __right_value488 = (void*)0;
struct CVALUE* left_value_510;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
char* __dec_obj238;
struct sType* left_type_511;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1CVALUEph* array_num_512;
struct list$1sNodeph* o2_saved_515;
struct sNode* it_518;
_Bool Value_521;
_Bool __result332__;
void* __right_value493 = (void*)0;
struct CVALUE* c_value_522;
char* fun_name_523;
void* __right_value494 = (void*)0;
struct tuple3$3charphsFunpsGenericsFunp* multiple_assign_var11 = (void*)0;
char* fun_name2_524=0;
struct sFun* operator_fun_525=0;
struct sGenericsFun* generics_fun_526=0;
_Bool Value_527;
_Bool __result333__;
void* __right_value495 = (void*)0;
struct CVALUE* right_value_528;
struct sType* right_type_529;
struct sClass* klass_530;
void* __right_value496 = (void*)0;
struct sType* type_531;
_Bool calling_fun_532;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct CVALUE* come_value_536;
int i_537;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct buffer* buf_550;
struct list$1CVALUEph* o2_saved_551;
struct CVALUE* it_554;
void* __right_value502 = (void*)0;
char* left_value_code_557;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
char* __dec_obj240;
void* __right_value505 = (void*)0;
char* __dec_obj241;
_Bool __result344__;
void* __right_value506 = (void*)0;
char* __dec_obj242;
void* __right_value507 = (void*)0;
char* __dec_obj243;
_Bool __result345__;
void* __right_value508 = (void*)0;
struct sType* result_type_558;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct list$1sNodeph* __dec_obj244;
struct sType* __dec_obj245;
_Bool __result346__;
memset(&calling_fun_532, 0, sizeof(_Bool));
    left_506=self->mLeft;
    right_507=(struct sNode*)come_increment_ref_count(self->mRight);
    array_num_nodes_508=self->mArrayNum;
    Value_509=node_compile(left_506,info);
    if(    !Value_509) {
        __result324__ = (_Bool)0;
        if(right_507) { right_507 = come_decrement_ref_count2(right_507, ((struct sNode*)right_507)->finalize, ((struct sNode*)right_507)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result324__;
    }
    else {
    }
    left_value_510=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_510->type->mPointerNum>0) {
        __dec_obj238=left_value_510->c_value;
        left_value_510->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value489=make_type_name_string(left_value_510->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_510->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_511=left_value_510->type;
    array_num_512=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 845, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_515=(array_num_nodes_508),it_518=list$1sNodephp_begin((o2_saved_515));    !list$1sNodephp_end((o2_saved_515));    it_518=list$1sNodephp_next((o2_saved_515))    ){
        Value_521=node_compile(it_518,info);
        if(        !Value_521) {
            __result332__ = (_Bool)0;
            if(right_507) { right_507 = come_decrement_ref_count2(right_507, ((struct sNode*)right_507)->finalize, ((struct sNode*)right_507)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_512,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result332__;
        }
        else {
        }
        c_value_522=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(array_num_512,(struct CVALUE*)come_increment_ref_count(c_value_522));
        come_call_finalizer3(c_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    fun_name_523="operator_store_element";
    multiple_assign_var11=((struct tuple3$3charphsFunpsGenericsFunp*)(__right_value494=get_operator_function(left_type_511,fun_name_523,info)));
    fun_name2_524=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    operator_fun_525=multiple_assign_var11->v2;
    generics_fun_526=multiple_assign_var11->v3;
    come_call_finalizer3(__right_value494,tuple3$3charphsFunpsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    Value_527=node_compile(right_507,info);
    if(    !Value_527) {
        __result333__ = (_Bool)0;
        if(right_507) { right_507 = come_decrement_ref_count2(right_507, ((struct sNode*)right_507)->finalize, ((struct sNode*)right_507)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(left_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(array_num_512,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_524 = come_decrement_ref_count2(fun_name2_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result333__;
    }
    else {
    }
    right_value_528=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_type_529=right_value_528->type;
    klass_530=left_value_510->type->mClass;
    type_531=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_510->type));
    if(    self->mQuote) {
        calling_fun_532=(_Bool)0;
    }
    else {
        calling_fun_532=operator_overload_fun2(type_531,fun_name_523,left_value_510,((struct CVALUE*)(__right_value497=list$1CVALUEphp_operator_load_element(array_num_512,0))),right_value_528,info);
        come_call_finalizer3(__right_value497,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_532) {
        come_value_536=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 883, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        list$1sNodephp_length(left_type_511->mArrayNum)>0) {
            for(            i_537=0;            i_537<list$1CVALUEphp_length(array_num_512);            i_537++            ){
                list$1sNodephp_delete(left_type_511->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_511->mPointerNum>0) {
            left_type_511->mPointerNum-=list$1CVALUEphp_length(array_num_512);
            if(            left_type_511->mPointerNum<0) {
                left_type_511->mPointerNum=0;
            }
        }
        buf_550=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 898, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(buf_550,left_value_510->c_value);
        for(        o2_saved_551=(struct list$1CVALUEph*)come_increment_ref_count((array_num_512)),it_554=list$1CVALUEphp_begin((o2_saved_551));        !list$1CVALUEphp_end((o2_saved_551));        it_554=list$1CVALUEphp_next((o2_saved_551))        ){
            buffer_append_format(buf_550,"[%s]",it_554->c_value);
        }
        come_call_finalizer3(o2_saved_551,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_557=(char*)come_increment_ref_count(buffer_to_string(buf_550));
        check_assign_type(((char*)(__right_value503=xsprintf("array is assinged to"))),left_type_511,right_type_529,right_value_528,(_Bool)0,(_Bool)1,(_Bool)0,info);
        come_call_finalizer3(__right_value503,charp_finalize, 0, 1, 0, 0, (void*)0);
        if(        left_type_511->mHeap&&right_type_529->mHeap&&left_type_511->mPointerNum>0&&right_type_529->mPointerNum>0) {
            if(            left_value_510->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_511,left_value_code_557,info,(_Bool)0,(_Bool)0);
                std_move(left_type_511,right_type_529,right_value_528,info,(_Bool)0);
                __dec_obj240=come_value_536->c_value;
                come_value_536->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_557,right_value_528->c_value));
                __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_510->type->mPointerNum==0) {
                decrement_ref_count_object(left_type_511,left_value_code_557,info,(_Bool)0,(_Bool)0);
                std_move(left_type_511,right_type_529,right_value_528,info,(_Bool)0);
                __dec_obj241=come_value_536->c_value;
                come_value_536->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_557,right_value_528->c_value));
                __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_557,left_value_510->type->mPointerNum);
                __result344__ = (_Bool)0;
                come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_550,buffer_finalize, 0, 0, 0, 0, (void*)0);
                left_value_code_557 = come_decrement_ref_count2(left_value_code_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_507) { right_507 = come_decrement_ref_count2(right_507, ((struct sNode*)right_507)->finalize, ((struct sNode*)right_507)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_512,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_524 = come_decrement_ref_count2(fun_name2_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result344__;
            }
        }
        else {
            if(            left_value_510->type->mPointerNum>=1) {
                __dec_obj242=come_value_536->c_value;
                come_value_536->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_557,right_value_528->c_value));
                __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_510->type->mPointerNum==0) {
                __dec_obj243=come_value_536->c_value;
                come_value_536->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_557,right_value_528->c_value));
                __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_557,left_value_510->type->mPointerNum);
                __result345__ = (_Bool)0;
                come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_550,buffer_finalize, 0, 0, 0, 0, (void*)0);
                left_value_code_557 = come_decrement_ref_count2(left_value_code_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_507) { right_507 = come_decrement_ref_count2(right_507, ((struct sNode*)right_507)->finalize, ((struct sNode*)right_507)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(left_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_512,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_524 = come_decrement_ref_count2(fun_name2_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result345__;
            }
        }
        result_type_558=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_511));
        __dec_obj244=result_type_558->mArrayNum;
        result_type_558->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 939, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj244,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj245=come_value_536->type;
        come_value_536->type=(struct sType*)come_increment_ref_count(result_type_558);
        come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_536->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_536));
        add_come_last_code(info,"%s",come_value_536->c_value);
        come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_550,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_557 = come_decrement_ref_count2(left_value_code_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_558,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result346__ = (_Bool)1;
    if(right_507) { right_507 = come_decrement_ref_count2(right_507, ((struct sNode*)right_507)->finalize, ((struct sNode*)right_507)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(left_value_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_512,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_524 = come_decrement_ref_count2(fun_name2_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result346__;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
char* __dec_obj234;
struct sNode* __dec_obj235;
struct sNode* __dec_obj236;
struct list$1sNodeph* __dec_obj237;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj234=self->sname;
            __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj235=self->mLeft;
            if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj236=self->mRight;
            if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj237=self->mArrayNum;
            come_call_finalizer3(__dec_obj237,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result325__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_513;
struct list_item$1CVALUEph* prev_it_514;
    it_513=self->head;
    while(it_513!=((void*)0)) {
        prev_it_514=it_513;
        it_513=it_513->next;
        come_call_finalizer3(prev_it_514,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj239;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj239=self->item;
            come_call_finalizer3(__dec_obj239,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_516;
struct sNode* __result326__;
struct sNode* __result327__;
struct sNode* result_517;
struct sNode* __result328__;
result_516 = (void*)0;
result_517 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_516,0,sizeof(struct sNode*));
        __result326__ = gComeFunResultObject = __result_obj__ = result_516;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    self->it=self->head;
    if(    self->it) {
        __result327__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    memset(&result_517,0,sizeof(struct sNode*));
    __result328__ = gComeFunResultObject = __result_obj__ = result_517;
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_519;
struct sNode* __result329__;
struct sNode* __result330__;
struct sNode* result_520;
struct sNode* __result331__;
result_519 = (void*)0;
result_520 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_519,0,sizeof(struct sNode*));
        __result329__ = gComeFunResultObject = __result_obj__ = result_519;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result330__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    memset(&result_520,0,sizeof(struct sNode*));
    __result331__ = gComeFunResultObject = __result_obj__ = result_520;
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_533;
int i_534;
struct CVALUE* __result334__;
struct CVALUE* default_value_535;
struct CVALUE* __result335__;
default_value_535 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_533=self->head;
    i_534=0;
    while(it_533!=((void*)0)) {
        if(        position==i_534) {
            __result334__ = gComeFunResultObject = __result_obj__ = it_533->item;
            gComeFunResultObject = (void*)0;
            return __result334__;
        }
        it_533=it_533->next;
        i_534++;
    }
    memset(&default_value_535,0,sizeof(struct CVALUE*));
    __result335__ = gComeFunResultObject = __result_obj__ = default_value_535;
    come_call_finalizer3(default_value_535,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_538;
struct list$1sNodeph* __result336__;
struct list_item$1sNodeph* it_539;
int i_540;
struct list_item$1sNodeph* prev_it_541;
struct list_item$1sNodeph* it_542;
int i_543;
struct list_item$1sNodeph* prev_it_544;
struct list_item$1sNodeph* it_545;
struct list_item$1sNodeph* head_prev_it_546;
struct list_item$1sNodeph* tail_it_547;
int i_548;
struct list_item$1sNodeph* prev_it_549;
struct list$1sNodeph* __result337__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_538=tail;
        tail=head;
        head=tmp_538;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result336__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodephp_reset(self);
    }
    else if(    head==0) {
        it_539=self->head;
        i_540=0;
        while(it_539!=((void*)0)) {
            if(            i_540<tail) {
                prev_it_541=it_539;
                it_539=it_539->next;
                i_540++;
                come_call_finalizer3(prev_it_541,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_540==tail) {
                self->head=it_539;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_539=it_539->next;
                i_540++;
            }
        }
    }
    else if(    tail==self->len) {
        it_542=self->head;
        i_543=0;
        while(it_542!=((void*)0)) {
            if(            i_543==head) {
                self->tail=it_542->prev;
                self->tail->next=((void*)0);
            }
            if(            i_543>=head) {
                prev_it_544=it_542;
                it_542=it_542->next;
                i_543++;
                come_call_finalizer3(prev_it_544,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_542=it_542->next;
                i_543++;
            }
        }
    }
    else {
        it_545=self->head;
        head_prev_it_546=((void*)0);
        tail_it_547=((void*)0);
        i_548=0;
        while(it_545!=((void*)0)) {
            if(            i_548==head) {
                head_prev_it_546=it_545->prev;
            }
            if(            i_548==tail) {
                tail_it_547=it_545;
            }
            if(            i_548>=head&&i_548<tail) {
                prev_it_549=it_545;
                it_545=it_545->next;
                i_548++;
                come_call_finalizer3(prev_it_549,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_545=it_545->next;
                i_548++;
            }
        }
        if(        head_prev_it_546!=((void*)0)) {
            head_prev_it_546->next=tail_it_547;
        }
        if(        tail_it_547!=((void*)0)) {
            tail_it_547->prev=head_prev_it_546;
        }
    }
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_552;
struct CVALUE* __result338__;
struct CVALUE* __result339__;
struct CVALUE* result_553;
struct CVALUE* __result340__;
result_552 = (void*)0;
result_553 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_552,0,sizeof(struct CVALUE*));
        __result338__ = gComeFunResultObject = __result_obj__ = result_552;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    self->it=self->head;
    if(    self->it) {
        __result339__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    memset(&result_553,0,sizeof(struct CVALUE*));
    __result340__ = gComeFunResultObject = __result_obj__ = result_553;
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_555;
struct CVALUE* __result341__;
struct CVALUE* __result342__;
struct CVALUE* result_556;
struct CVALUE* __result343__;
result_555 = (void*)0;
result_556 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_555,0,sizeof(struct CVALUE*));
        __result341__ = gComeFunResultObject = __result_obj__ = result_555;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result342__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    memset(&result_556,0,sizeof(struct CVALUE*));
    __result343__ = gComeFunResultObject = __result_obj__ = result_556;
    gComeFunResultObject = (void*)0;
    return __result343__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct list$1sNodeph* __dec_obj246;
void* __right_value513 = (void*)0;
struct sNode* __dec_obj247;
struct sLoadArrayNode* __result347__;
    ((struct sNodeBase*)(__right_value511=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value511,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj246=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, array_num));
    come_call_finalizer3(__dec_obj246,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj247=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value514 = (void*)0;
char* __result348__;
    __result348__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value514=__builtin_string("sLoadArrayNode")));
    __right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_559;
struct list$1sNodeph* array_num_nodes_560;
_Bool Value_561;
void* __right_value515 = (void*)0;
struct CVALUE* left_value_562;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
char* __dec_obj251;
void* __right_value518 = (void*)0;
struct sType* left_type_563;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct list$1CVALUEph* array_num_564;
struct list$1sNodeph* o2_saved_565;
struct sNode* it_566;
_Bool Value_567;
_Bool __result349__;
void* __right_value521 = (void*)0;
struct CVALUE* c_value_568;
void* __right_value522 = (void*)0;
struct sType* type_569;
char* fun_name_570;
_Bool calling_fun_571;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct CVALUE* come_value_572;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct buffer* buf_573;
struct list$1CVALUEph* o2_saved_574;
struct CVALUE* it_575;
void* __right_value528 = (void*)0;
char* left_value_code_576;
void* __right_value529 = (void*)0;
char* __dec_obj252;
void* __right_value530 = (void*)0;
struct sType* result_type_577;
struct sType* __dec_obj253;
int n_578;
void* __right_value531 = (void*)0;
struct sType* __dec_obj254;
void* __right_value532 = (void*)0;
struct sType* __dec_obj255;
int i_579;
void* __right_value533 = (void*)0;
struct sType* __dec_obj256;
_Bool __result350__;
memset(&calling_fun_571, 0, sizeof(_Bool));
    left_559=self->mLeft;
    array_num_nodes_560=self->mArrayNum;
    Value_561=node_compile(left_559,info);
    if(    !Value_561) {
        return (_Bool)0;
    }
    else {
    }
    left_value_562=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_562->type->mPointerNum>0&&!self->mBreakGuard) {
        __dec_obj251=left_value_562->c_value;
        left_value_562->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value516=make_type_name_string(left_value_562->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_562->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_563=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_562->type));
    array_num_564=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 988, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_565=(array_num_nodes_560),it_566=list$1sNodephp_begin((o2_saved_565));    !list$1sNodephp_end((o2_saved_565));    it_566=list$1sNodephp_next((o2_saved_565))    ){
        Value_567=node_compile(it_566,info);
        if(        !Value_567) {
            __result349__ = (_Bool)0;
            come_call_finalizer3(left_value_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_563,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_564,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result349__;
        }
        else {
        }
        c_value_568=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(array_num_564,(struct CVALUE*)come_increment_ref_count(c_value_568));
        come_call_finalizer3(c_value_568,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_569=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_562->type));
    fun_name_570="operator_load_element";
    if(    self->mQuote) {
        calling_fun_571=(_Bool)0;
    }
    else {
        calling_fun_571=operator_overload_fun(type_569,fun_name_570,left_value_562,((struct CVALUE*)(__right_value523=list$1CVALUEphp_operator_load_element(array_num_564,0))),self->mBreakGuard,info);
        come_call_finalizer3(__right_value523,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_571) {
        come_value_572=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1013, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_573=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1015, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(buf_573,left_value_562->c_value);
        for(        o2_saved_574=(struct list$1CVALUEph*)come_increment_ref_count((array_num_564)),it_575=list$1CVALUEphp_begin((o2_saved_574));        !list$1CVALUEphp_end((o2_saved_574));        it_575=list$1CVALUEphp_next((o2_saved_574))        ){
            buffer_append_format(buf_573,"[%s]",it_575->c_value);
        }
        come_call_finalizer3(o2_saved_574,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_576=(char*)come_increment_ref_count(buffer_to_string(buf_573));
        __dec_obj252=come_value_572->c_value;
        come_value_572->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_576));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_577=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_563));
        if(        result_type_577->mOriginalLoadVarType) {
            __dec_obj253=result_type_577;
            result_type_577=(struct sType*)come_increment_ref_count(result_type_577->mOriginalLoadVarType);
            come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        list$1sNodephp_length(result_type_577->mArrayNum)>0) {
            n_578=list$1sNodephp_length(result_type_577->mArrayNum)-list$1CVALUEphp_length(array_num_564);
            if(            n_578==0) {
                __dec_obj254=result_type_577;
                result_type_577=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_563));
                come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(                left_type_563->mOriginalLoadVarType) {
                    __dec_obj255=result_type_577;
                    result_type_577=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_563->mOriginalLoadVarType));
                    come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                list$1sNodephp_reset(result_type_577->mArrayNum);
            }
            else if(            n_578>0) {
                for(                i_579=0;                i_579<n_578;                i_579++                ){
                    list$1sNodephp_delete(result_type_577->mArrayNum,-1,-1);
                }
            }
            else if(            n_578<0) {
                list$1sNodephp_reset(result_type_577->mArrayNum);
                result_type_577->mPointerNum+=n_578;
                if(                result_type_577->mPointerNum<0) {
                    result_type_577->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_577->mPointerNum>0) {
                result_type_577->mPointerNum-=list$1CVALUEphp_length(array_num_564);
                if(                result_type_577->mPointerNum<0) {
                    result_type_577->mPointerNum=0;
                }
            }
        }
        __dec_obj256=come_value_572->type;
        come_value_572->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_577));
        come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_572->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_572));
        add_come_last_code(info,"%s",come_value_572->c_value);
        come_call_finalizer3(come_value_572,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_573,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_576 = come_decrement_ref_count2(left_value_code_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_577,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result350__ = (_Bool)1;
    come_call_finalizer3(left_value_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_563,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_564,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result350__;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
char* __dec_obj248;
struct list$1sNodeph* __dec_obj249;
struct sNode* __dec_obj250;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj248=self->sname;
            __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj249=self->mArrayNum;
            come_call_finalizer3(__dec_obj249,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj250=self->mLeft;
            if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct list$1sNodeph* __dec_obj257;
void* __right_value536 = (void*)0;
struct sNode* __dec_obj258;
struct sLoadRangeArrayNode* __result351__;
    ((struct sNodeBase*)(__right_value534=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value534,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj257=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, array_num));
    come_call_finalizer3(__dec_obj257,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj258=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result351__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value537 = (void*)0;
char* __result352__;
    __result352__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value537=__builtin_string("sLoadRangeArrayNode")));
    __right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_580;
struct list$1sNodeph* array_num_nodes_581;
_Bool Value_582;
void* __right_value538 = (void*)0;
struct CVALUE* left_value_583;
void* __right_value539 = (void*)0;
struct sType* left_type_584;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct list$1CVALUEph* array_num_585;
struct list$1sNodeph* o2_saved_586;
struct sNode* it_587;
_Bool Value_588;
_Bool __result353__;
void* __right_value542 = (void*)0;
struct CVALUE* c_value_589;
void* __right_value543 = (void*)0;
struct sType* type_590;
char* fun_name_591;
_Bool calling_fun_592;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct CVALUE* come_value_593;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct buffer* buf_594;
struct list$1CVALUEph* o2_saved_595;
struct CVALUE* it_596;
void* __right_value550 = (void*)0;
char* left_value_code_597;
void* __right_value551 = (void*)0;
char* __dec_obj262;
void* __right_value552 = (void*)0;
struct sType* result_type_598;
struct sType* __dec_obj263;
int n_599;
void* __right_value553 = (void*)0;
struct sType* __dec_obj264;
void* __right_value554 = (void*)0;
struct sType* __dec_obj265;
int i_600;
void* __right_value555 = (void*)0;
struct sType* __dec_obj266;
_Bool __result354__;
memset(&calling_fun_592, 0, sizeof(_Bool));
    left_580=self->mLeft;
    array_num_nodes_581=self->mArrayNum;
    Value_582=node_compile(left_580,info);
    if(    !Value_582) {
        return (_Bool)0;
    }
    else {
    }
    left_value_583=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_584=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_583->type));
    array_num_585=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1110, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_586=(array_num_nodes_581),it_587=list$1sNodephp_begin((o2_saved_586));    !list$1sNodephp_end((o2_saved_586));    it_587=list$1sNodephp_next((o2_saved_586))    ){
        Value_588=node_compile(it_587,info);
        if(        !Value_588) {
            __result353__ = (_Bool)0;
            come_call_finalizer3(left_value_583,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_585,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result353__;
        }
        else {
        }
        c_value_589=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(array_num_585,(struct CVALUE*)come_increment_ref_count(c_value_589));
        come_call_finalizer3(c_value_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_590=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_583->type));
    fun_name_591="operator_load_range_element";
    if(    self->mQuote) {
        calling_fun_592=(_Bool)0;
    }
    else {
        calling_fun_592=operator_overload_fun2(type_590,fun_name_591,left_value_583,((struct CVALUE*)(__right_value544=list$1CVALUEphp_operator_load_element(array_num_585,0))),((struct CVALUE*)(__right_value545=list$1CVALUEphp_operator_load_element(array_num_585,1))),info);
        come_call_finalizer3(__right_value544,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value545,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_592) {
        come_value_593=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1135, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_594=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1137, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(buf_594,left_value_583->c_value);
        for(        o2_saved_595=(struct list$1CVALUEph*)come_increment_ref_count((array_num_585)),it_596=list$1CVALUEphp_begin((o2_saved_595));        !list$1CVALUEphp_end((o2_saved_595));        it_596=list$1CVALUEphp_next((o2_saved_595))        ){
            buffer_append_format(buf_594,"[%s]",it_596->c_value);
        }
        come_call_finalizer3(o2_saved_595,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_597=(char*)come_increment_ref_count(buffer_to_string(buf_594));
        __dec_obj262=come_value_593->c_value;
        come_value_593->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_597));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_598=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_584));
        if(        result_type_598->mOriginalLoadVarType) {
            __dec_obj263=result_type_598;
            result_type_598=(struct sType*)come_increment_ref_count(result_type_598->mOriginalLoadVarType);
            come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        list$1sNodephp_length(result_type_598->mArrayNum)>0) {
            n_599=list$1sNodephp_length(result_type_598->mArrayNum)-list$1CVALUEphp_length(array_num_585);
            if(            n_599==0) {
                __dec_obj264=result_type_598;
                result_type_598=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_584));
                come_call_finalizer3(__dec_obj264,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(                left_type_584->mOriginalLoadVarType) {
                    __dec_obj265=result_type_598;
                    result_type_598=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_584->mOriginalLoadVarType));
                    come_call_finalizer3(__dec_obj265,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                list$1sNodephp_reset(result_type_598->mArrayNum);
            }
            else if(            n_599>0) {
                for(                i_600=0;                i_600<n_599;                i_600++                ){
                    list$1sNodephp_delete(result_type_598->mArrayNum,-1,-1);
                }
            }
            else if(            n_599<0) {
                list$1sNodephp_reset(result_type_598->mArrayNum);
                result_type_598->mPointerNum+=n_599;
                if(                result_type_598->mPointerNum<0) {
                    result_type_598->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_598->mPointerNum>0) {
                result_type_598->mPointerNum-=list$1CVALUEphp_length(array_num_585);
                if(                result_type_598->mPointerNum<0) {
                    result_type_598->mPointerNum=0;
                }
            }
        }
        __dec_obj266=come_value_593->type;
        come_value_593->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_598));
        come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_593->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_593));
        add_come_last_code(info,"%s",come_value_593->c_value);
        come_call_finalizer3(come_value_593,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_594,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_597 = come_decrement_ref_count2(left_value_code_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result354__ = (_Bool)1;
    come_call_finalizer3(left_value_583,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_585,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_590,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result354__;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
char* __dec_obj259;
struct list$1sNodeph* __dec_obj260;
struct sNode* __dec_obj261;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj259=self->sname;
            __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj260=self->mArrayNum;
            come_call_finalizer3(__dec_obj260,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj261=self->mLeft;
            if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result355__;
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result355__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sNode* _inf_value3;
struct sStoreFieldNode* _inf_obj_value3;
void* __right_value563 = (void*)0;
struct sNode* __result358__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1211, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value557=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1211, "struct sStoreFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0)),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    __result358__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value563=_inf_value3));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value557,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value563) { __right_value563 = come_decrement_ref_count2(__right_value563, ((struct sNode*)__right_value563)->finalize, ((struct sNode*)__right_value563)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
struct sStoreFieldNode* __result356__;
void* __right_value558 = (void*)0;
struct sStoreFieldNode* result_602;
void* __right_value559 = (void*)0;
char* __dec_obj267;
void* __right_value560 = (void*)0;
struct sNode* __dec_obj268;
void* __right_value561 = (void*)0;
struct sNode* __dec_obj269;
void* __right_value562 = (void*)0;
char* __dec_obj270;
struct sStoreFieldNode* __result357__;
    if(    self==(void*)0) {
        __result356__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    result_602=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode", sStoreFieldNode_finalize, sStoreFieldNode_clone, sStoreFieldNode_get_hash_key, sStoreFieldNode_equals));
    if(    self!=((void*)0)) {
        result_602->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj267=result_602->sname;
        result_602->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_602->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj268=result_602->mLeft;
        result_602->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj269=result_602->mRight;
        result_602->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj270=result_602->mName;
        result_602->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result357__ = gComeFunResultObject = __result_obj__ = result_602;
    come_call_finalizer3(result_602,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static unsigned int sStoreFieldNode_get_hash_key(struct sStoreFieldNode* self){
unsigned int result_601;
    result_601=0;
    result_601+=int_get_hash_key(((int)self->sline));
    result_601+=int_get_hash_key(((int)self->sname));
    result_601+=int_get_hash_key(((int)self->sline_real));
    result_601+=int_get_hash_key(((int)self->mLeft));
    result_601+=int_get_hash_key(((int)self->mRight));
    result_601+=int_get_hash_key(((int)self->mName));
    return result_601;
}

static _Bool sStoreFieldNode_equals(struct sStoreFieldNode* left, struct sStoreFieldNode* right){
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
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool range_array_603;
char* p_604;
int sline_605;
_Bool no_comma_606;
_Bool no_output_err_607;
_Bool no_output_come_code_608;
void* __right_value564 = (void*)0;
struct sNode* exp_609;
_Bool quote_610;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct list$1sNodeph* array_num_611;
void* __right_value567 = (void*)0;
struct sNode* node2_612;
void* __right_value571 = (void*)0;
struct sNode* node3_616;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sNode* _inf_value4;
struct sLoadRangeArrayNode* _inf_obj_value4;
void* __right_value578 = (void*)0;
struct sNode* __dec_obj277;
_Bool quote_619;
_Bool range_620;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct list$1sNodeph* array_num_621;
_Bool range_array2_622;
char* p_623;
int sline_624;
_Bool no_comma_625;
_Bool no_output_err_626;
_Bool no_output_come_code_627;
void* __right_value581 = (void*)0;
struct sNode* exp_628;
void* __right_value582 = (void*)0;
struct sNode* node2_629;
_Bool break_guard_630;
void* __right_value583 = (void*)0;
struct sNode* right_node_631;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sNode* _inf_value5;
struct sStoreArrayNode* _inf_obj_value5;
void* __right_value591 = (void*)0;
struct sNode* __dec_obj282;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sNode* _inf_value6;
struct sLoadArrayNode* _inf_obj_value6;
void* __right_value598 = (void*)0;
struct sNode* __dec_obj286;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* __right_value604 = (void*)0;
struct sNode* __dec_obj289;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sNode* _inf_value8;
struct sNullableNode* _inf_obj_value8;
void* __right_value607 = (void*)0;
struct sNode* __dec_obj290;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sNode* __dec_obj291;
void* __right_value610 = (void*)0;
char* field_name_638;
_Bool parse_method_generics_type_639;
char* p_640;
int sline_641;
void* __right_value611 = (void*)0;
char* word_642;
void* __right_value612 = (void*)0;
struct sNode* right_node_643;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* __right_value615 = (void*)0;
struct sNode* __dec_obj292;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sNode* __dec_obj293;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sNode* __dec_obj294;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sNode* __dec_obj295;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sNode* __dec_obj296;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* __dec_obj297;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sNode* __dec_obj298;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sNode* __dec_obj299;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sNode* __dec_obj300;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* __right_value634 = (void*)0;
struct sNode* __dec_obj301;
void* __right_value635 = (void*)0;
struct sNode* node2_644;
struct sNode* __dec_obj302;
struct sNode* __result368__;
    while((_Bool)1) {
        range_array_603=(_Bool)0;
        {
            p_604=info->p;
            sline_605=info->sline;
            if(            *info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_606=info->no_comma;
                no_output_err_607=info->no_output_err;
                no_output_come_code_608=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_609=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_606;
                info->no_output_err=no_output_err_607;
                info->no_output_come_code=no_output_come_code_608;
                if(                *info->p==46&&*(info->p+1)==46) {
                    range_array_603=(_Bool)1;
                }
                if(exp_609) { exp_609 = come_decrement_ref_count2(exp_609, ((struct sNode*)exp_609)->finalize, ((struct sNode*)exp_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_604;
            info->sline=sline_605;
        }
        if(        range_array_603&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_610=*info->p==92;
            if(            quote_610) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_611=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1255, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            skip_pointer_attribute(info);
            node2_612=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodephp_push_back(array_num_611,(struct sNode*)come_increment_ref_count(node2_612));
            if(            *info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_616=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodephp_push_back(array_num_611,(struct sNode*)come_increment_ref_count(node3_616));
                expected_next_character(93,info);
                if(node3_616) { node3_616 = come_decrement_ref_count2(node3_616, ((struct sNode*)node3_616)->finalize, ((struct sNode*)node3_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1276, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value4=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value573=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1276, "struct sLoadRangeArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_611),quote_610,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj277=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count2(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value573,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(array_num_611,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_612) { node2_612 = come_decrement_ref_count2(node2_612, ((struct sNode*)node2_612)->finalize, ((struct sNode*)node2_612)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !range_array_603&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_619=*info->p==92;
            if(            quote_619) {
                info->p++;
            }
            range_620=(_Bool)0;
            array_num_621=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1285, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            while(1) {
                range_array2_622=(_Bool)0;
                {
                    p_623=info->p;
                    sline_624=info->sline;
                    if(                    *info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_625=info->no_comma;
                        no_output_err_626=info->no_output_err;
                        no_output_come_code_627=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_628=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_625;
                        info->no_output_err=no_output_err_626;
                        info->no_output_come_code=no_output_come_code_627;
                        if(                        *info->p==46&&*(info->p+1)==46) {
                            range_array2_622=(_Bool)1;
                        }
                        if(exp_628) { exp_628 = come_decrement_ref_count2(exp_628, ((struct sNode*)exp_628)->finalize, ((struct sNode*)exp_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    info->p=p_623;
                    info->sline=sline_624;
                }
                if(                range_array2_622) {
                    break;
                }
                else if(                *info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_629=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_push_back(array_num_621,(struct sNode*)come_increment_ref_count(node2_629));
                    if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info,"require ] character");
                        exit(2);
                    }
                    if(node2_629) { node2_629 = come_decrement_ref_count2(node2_629, ((struct sNode*)node2_629)->finalize, ((struct sNode*)node2_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    break;
                }
            }
            break_guard_630=(_Bool)0;
            if(            *info->p==63&&*(info->p+1)==63) {
                info->p+=2;
                skip_spaces_and_lf(info);
                break_guard_630=(_Bool)1;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_631=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1360, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value5=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value585=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1360, "struct sStoreArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(struct sNode*)come_increment_ref_count(right_node_631),(struct list$1sNodeph*)come_increment_ref_count(array_num_621),quote_619,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj282=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value585,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_631) { right_node_631 = come_decrement_ref_count2(right_node_631, ((struct sNode*)right_node_631)->finalize, ((struct sNode*)right_node_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1363, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value6=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value593=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1363, "struct sLoadArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_621),quote_619,break_guard_630,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj286=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value593,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(array_num_621,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=33) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1393, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value600=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1393, "struct sNullCheckNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(_Bool)0,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sNullCheckNode_finalize;
            _inf_value7->clone=(void*)sNullCheckNode_clone;
            _inf_value7->compile=(void*)sNullCheckNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sNullCheckNode_kind;
            __dec_obj289=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value7);
            if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value600,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1401, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value606=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1401, "struct sNullableNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sNullableNode_finalize;
            _inf_value8->clone=(void*)sNullableNode_clone;
            _inf_value8->compile=(void*)sNullableNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sNullableNode_kind;
            __dec_obj290=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value8);
            if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value606,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==33&&*(info->p+1)==33) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __dec_obj291=node;
            node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
            if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else if(        (*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)) {
            if(            *info->p==46) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            field_name_638=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_639=(_Bool)0;
            {
                p_640=info->p;
                sline_641=info->sline;
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_642=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_642,info)) {
                            parse_method_generics_type_639=(_Bool)1;
                        }
                        word_642 = come_decrement_ref_count2(word_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                info->p=p_640;
                info->sline=sline_641;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_643=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1457, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value614=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1457, "struct sStoreFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(struct sNode*)come_increment_ref_count(right_node_643),(char*)come_increment_ref_count(field_name_638),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value9->clone=(void*)sStoreFieldNode_clone;
                _inf_value9->compile=(void*)sStoreFieldNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sStoreFieldNode_kind;
                __dec_obj292=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value9);
                if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value614,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_643) { right_node_643 = come_decrement_ref_count2(right_node_643, ((struct sNode*)right_node_643)->finalize, ((struct sNode*)right_node_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||string_operator_equals(field_name_638,"exception_throw")||string_operator_equals(field_name_638,"exception_value")||parse_method_generics_type_639||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40))) {
                if(                string_operator_equals(field_name_638,"if")) {
                    __dec_obj293=node;
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_638,"elif")) {
                    __dec_obj294=node;
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_638,"case")) {
                    __dec_obj295=node;
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_638,"less")) {
                    __dec_obj296=node;
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_638,"rescue")) {
                    __dec_obj297=node;
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_638,"exception_throw")) {
                    __dec_obj298=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_638,"exception_value")) {
                    __dec_obj299=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else {
                    __dec_obj300=node;
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),(char*)come_increment_ref_count(field_name_638),info));
                    if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
                }
            }
            else {
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1489, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value10=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value633=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1489, "struct sLoadFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(char*)come_increment_ref_count(field_name_638),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value10->clone=(void*)sLoadFieldNode_clone;
                _inf_value10->compile=(void*)sLoadFieldNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sLoadFieldNode_kind;
                __dec_obj301=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value10);
                if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value633,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            field_name_638 = come_decrement_ref_count2(field_name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            node2_644=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_644==((void*)0)) {
                if(node2_644) { node2_644 = come_decrement_ref_count2(node2_644, ((struct sNode*)node2_644)->finalize, ((struct sNode*)node2_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            __dec_obj302=node;
            node=(struct sNode*)come_increment_ref_count(node2_644);
            if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
            if(node2_644) { node2_644 = come_decrement_ref_count2(node2_644, ((struct sNode*)node2_644)->finalize, ((struct sNode*)node2_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result368__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value568 = (void*)0;
struct list_item$1sNodeph* litem_613;
struct sNode* __dec_obj271;
void* __right_value569 = (void*)0;
struct list_item$1sNodeph* litem_614;
struct sNode* __dec_obj272;
void* __right_value570 = (void*)0;
struct list_item$1sNodeph* litem_615;
struct sNode* __dec_obj273;
struct list$1sNodeph* __result359__;
    if(    self->len==0) {
        litem_613=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value568=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_613->prev=((void*)0);
        litem_613->next=((void*)0);
        __dec_obj271=litem_613->item;
        litem_613->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_613;
        self->head=litem_613;
    }
    else if(    self->len==1) {
        litem_614=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value569=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_614->prev=self->head;
        litem_614->next=((void*)0);
        __dec_obj272=litem_614->item;
        litem_614->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj272) { __dec_obj272 = come_decrement_ref_count2(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_614;
        self->head->next=litem_614;
    }
    else {
        litem_615=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value570=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_615->prev=self->tail;
        litem_615->next=((void*)0);
        __dec_obj273=litem_615->item;
        litem_615->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_615;
        self->tail=litem_615;
    }
    self->len++;
    __result359__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadRangeArrayNode* __result360__;
void* __right_value574 = (void*)0;
struct sLoadRangeArrayNode* result_618;
void* __right_value575 = (void*)0;
char* __dec_obj274;
void* __right_value576 = (void*)0;
struct list$1sNodeph* __dec_obj275;
void* __right_value577 = (void*)0;
struct sNode* __dec_obj276;
struct sLoadRangeArrayNode* __result361__;
    if(    self==(void*)0) {
        __result360__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    result_618=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode", sLoadRangeArrayNode_finalize, sLoadRangeArrayNode_clone, sLoadRangeArrayNode_get_hash_key, sLoadRangeArrayNode_equals));
    if(    self!=((void*)0)) {
        result_618->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj274=result_618->sname;
        result_618->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_618->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj275=result_618->mArrayNum;
        result_618->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj275,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj276=result_618->mLeft;
        result_618->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_618->mQuote=self->mQuote;
    }
    __result361__ = gComeFunResultObject = __result_obj__ = result_618;
    come_call_finalizer3(result_618,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static unsigned int sLoadRangeArrayNode_get_hash_key(struct sLoadRangeArrayNode* self){
unsigned int result_617;
    result_617=0;
    result_617+=int_get_hash_key(((int)self->sline));
    result_617+=int_get_hash_key(((int)self->sname));
    result_617+=int_get_hash_key(((int)self->sline_real));
    result_617+=int_get_hash_key(((int)self->mArrayNum));
    result_617+=int_get_hash_key(((int)self->mLeft));
    result_617+=int_get_hash_key(((int)self->mQuote));
    return result_617;
}

static _Bool sLoadRangeArrayNode_equals(struct sLoadRangeArrayNode* left, struct sLoadRangeArrayNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
struct sStoreArrayNode* __result362__;
void* __right_value586 = (void*)0;
struct sStoreArrayNode* result_633;
void* __right_value587 = (void*)0;
char* __dec_obj278;
void* __right_value588 = (void*)0;
struct sNode* __dec_obj279;
void* __right_value589 = (void*)0;
struct sNode* __dec_obj280;
void* __right_value590 = (void*)0;
struct list$1sNodeph* __dec_obj281;
struct sStoreArrayNode* __result363__;
    if(    self==(void*)0) {
        __result362__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    result_633=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode", sStoreArrayNode_finalize, sStoreArrayNode_clone, sStoreArrayNode_get_hash_key, sStoreArrayNode_equals));
    if(    self!=((void*)0)) {
        result_633->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj278=result_633->sname;
        result_633->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_633->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj279=result_633->mLeft;
        result_633->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj280=result_633->mRight;
        result_633->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj281=result_633->mArrayNum;
        result_633->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj281,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_633->mQuote=self->mQuote;
    }
    __result363__ = gComeFunResultObject = __result_obj__ = result_633;
    come_call_finalizer3(result_633,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static unsigned int sStoreArrayNode_get_hash_key(struct sStoreArrayNode* self){
unsigned int result_632;
    result_632=0;
    result_632+=int_get_hash_key(((int)self->sline));
    result_632+=int_get_hash_key(((int)self->sname));
    result_632+=int_get_hash_key(((int)self->sline_real));
    result_632+=int_get_hash_key(((int)self->mLeft));
    result_632+=int_get_hash_key(((int)self->mRight));
    result_632+=int_get_hash_key(((int)self->mArrayNum));
    result_632+=int_get_hash_key(((int)self->mQuote));
    return result_632;
}

static _Bool sStoreArrayNode_equals(struct sStoreArrayNode* left, struct sStoreArrayNode* right){
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
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadArrayNode* __result364__;
void* __right_value594 = (void*)0;
struct sLoadArrayNode* result_635;
void* __right_value595 = (void*)0;
char* __dec_obj283;
void* __right_value596 = (void*)0;
struct list$1sNodeph* __dec_obj284;
void* __right_value597 = (void*)0;
struct sNode* __dec_obj285;
struct sLoadArrayNode* __result365__;
    if(    self==(void*)0) {
        __result364__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    result_635=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode", sLoadArrayNode_finalize, sLoadArrayNode_clone, sLoadArrayNode_get_hash_key, sLoadArrayNode_equals));
    if(    self!=((void*)0)) {
        result_635->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj283=result_635->sname;
        result_635->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_635->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj284=result_635->mArrayNum;
        result_635->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj284,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_635->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj285=result_635->mLeft;
        result_635->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_635->mQuote=self->mQuote;
    }
    __result365__ = gComeFunResultObject = __result_obj__ = result_635;
    come_call_finalizer3(result_635,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static unsigned int sLoadArrayNode_get_hash_key(struct sLoadArrayNode* self){
unsigned int result_634;
    result_634=0;
    result_634+=int_get_hash_key(((int)self->sline));
    result_634+=int_get_hash_key(((int)self->sname));
    result_634+=int_get_hash_key(((int)self->sline_real));
    result_634+=int_get_hash_key(((int)self->mArrayNum));
    result_634+=int_get_hash_key(((int)self->mBreakGuard));
    result_634+=int_get_hash_key(((int)self->mLeft));
    result_634+=int_get_hash_key(((int)self->mQuote));
    return result_634;
}

static _Bool sLoadArrayNode_equals(struct sLoadArrayNode* left, struct sLoadArrayNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mBreakGuard,right->mBreakGuard)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mLeft,right->mLeft)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mQuote,right->mQuote)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
struct sNullCheckNode* __result366__;
void* __right_value601 = (void*)0;
struct sNullCheckNode* result_637;
void* __right_value602 = (void*)0;
char* __dec_obj287;
void* __right_value603 = (void*)0;
struct sNode* __dec_obj288;
struct sNullCheckNode* __result367__;
    if(    self==(void*)0) {
        __result366__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    result_637=(struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "struct sNullCheckNode", sNullCheckNode_finalize, sNullCheckNode_clone, sNullCheckNode_get_hash_key, sNullCheckNode_equals));
    if(    self!=((void*)0)) {
        result_637->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj287=result_637->sname;
        result_637->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_637->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj288=result_637->mLeft;
        result_637->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_637->mOnlyNullCecker=self->mOnlyNullCecker;
    }
    __result367__ = gComeFunResultObject = __result_obj__ = result_637;
    come_call_finalizer3(result_637,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static unsigned int sNullCheckNode_get_hash_key(struct sNullCheckNode* self){
unsigned int result_636;
    result_636=0;
    result_636+=int_get_hash_key(((int)self->sline));
    result_636+=int_get_hash_key(((int)self->sname));
    result_636+=int_get_hash_key(((int)self->sline_real));
    result_636+=int_get_hash_key(((int)self->mLeft));
    result_636+=int_get_hash_key(((int)self->mOnlyNullCecker));
    return result_636;
}

static _Bool sNullCheckNode_equals(struct sNullCheckNode* left, struct sNullCheckNode* right){
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
    if(    !bool_equals(left->mOnlyNullCecker,right->mOnlyNullCecker)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

