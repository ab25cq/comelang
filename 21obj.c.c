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
struct sNewNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    struct list$1tuple2$2charphsNodephph* initializer;
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
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info);
char* sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static void sNewNode_finalize(struct sNewNode* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);
char* sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);
static void sImplementsNode_finalize(struct sImplementsNode* self);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);
char* sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);
static void sTrueNode_finalize(struct sTrueNode* self);
struct sNode* create_true_object(struct sInfo* info);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
static unsigned int sTrueNode_get_hash_key(struct sTrueNode* self);
static _Bool sTrueNode_equals(struct sTrueNode* left, struct sTrueNode* right);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);
char* sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);
static void sFalseNode_finalize(struct sFalseNode* self);
struct sNode* create_false_object(struct sInfo* info);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
static unsigned int sFalseNode_get_hash_key(struct sFalseNode* self);
static _Bool sFalseNode_equals(struct sFalseNode* left, struct sFalseNode* right);
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
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
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
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static unsigned int sNewNode_get_hash_key(struct sNewNode* self);
static _Bool sNewNode_equals(struct sNewNode* left, struct sNewNode* right);
static _Bool list$1tuple2$2charphsNodephphp_equals(struct list$1tuple2$2charphsNodephph* left, struct list$1tuple2$2charphsNodephph* right);
static _Bool tuple2$2charphsNodephp_equals(struct tuple2$2charphsNodeph* self, struct tuple2$2charphsNodeph* right);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self);
static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static unsigned int sDeleteNode_get_hash_key(struct sDeleteNode* self);
static _Bool sDeleteNode_equals(struct sDeleteNode* left, struct sDeleteNode* right);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static unsigned int sBorrowNode_get_hash_key(struct sBorrowNode* self);
static _Bool sBorrowNode_equals(struct sBorrowNode* left, struct sBorrowNode* right);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static unsigned int sCloneNode_get_hash_key(struct sCloneNode* self);
static _Bool sCloneNode_equals(struct sCloneNode* left, struct sCloneNode* right);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static unsigned int sDupeNode_get_hash_key(struct sDupeNode* self);
static _Bool sDupeNode_equals(struct sDupeNode* left, struct sDupeNode* right);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static unsigned int sDummyHeapNode_get_hash_key(struct sDummyHeapNode* self);
static _Bool sDummyHeapNode_equals(struct sDummyHeapNode* left, struct sDummyHeapNode* right);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static unsigned int sGCIncNode_get_hash_key(struct sGCIncNode* self);
static _Bool sGCIncNode_equals(struct sGCIncNode* left, struct sGCIncNode* right);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static unsigned int sGCDecNode_get_hash_key(struct sGCDecNode* self);
static _Bool sGCDecNode_equals(struct sGCDecNode* left, struct sGCDecNode* right);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static unsigned int sGCDecNoFreeNode_get_hash_key(struct sGCDecNoFreeNode* self);
static _Bool sGCDecNoFreeNode_equals(struct sGCDecNoFreeNode* left, struct sGCDecNoFreeNode* right);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static unsigned int sIsHeap_get_hash_key(struct sIsHeap* self);
static _Bool sIsHeap_equals(struct sIsHeap* left, struct sIsHeap* right);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static unsigned int sIsPointer_get_hash_key(struct sIsPointer* self);
static _Bool sIsPointer_equals(struct sIsPointer* left, struct sIsPointer* right);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static unsigned int sSizeOfNode_get_hash_key(struct sSizeOfNode* self);
static _Bool sSizeOfNode_equals(struct sSizeOfNode* left, struct sSizeOfNode* right);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static unsigned int sSizeOfExpNode_get_hash_key(struct sSizeOfExpNode* self);
static _Bool sSizeOfExpNode_equals(struct sSizeOfExpNode* left, struct sSizeOfExpNode* right);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static unsigned int sTypeOfNode_get_hash_key(struct sTypeOfNode* self);
static _Bool sTypeOfNode_equals(struct sTypeOfNode* left, struct sTypeOfNode* right);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static unsigned int sTypeOfExpNode_get_hash_key(struct sTypeOfExpNode* self);
static _Bool sTypeOfExpNode_equals(struct sTypeOfExpNode* left, struct sTypeOfExpNode* right);
static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self);
static unsigned int sDynamicTypeOf_get_hash_key(struct sDynamicTypeOf* self);
static _Bool sDynamicTypeOf_equals(struct sDynamicTypeOf* left, struct sDynamicTypeOf* right);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static unsigned int sAlignOfNode_get_hash_key(struct sAlignOfNode* self);
static _Bool sAlignOfNode_equals(struct sAlignOfNode* left, struct sAlignOfNode* right);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static unsigned int sAlignOfExpNode_get_hash_key(struct sAlignOfExpNode* self);
static _Bool sAlignOfExpNode_equals(struct sAlignOfExpNode* left, struct sAlignOfExpNode* right);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static unsigned int sAlignOfNode2_get_hash_key(struct sAlignOfNode2* self);
static _Bool sAlignOfNode2_equals(struct sAlignOfNode2* left, struct sAlignOfNode2* right);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static unsigned int sAlignOfExpNode2_get_hash_key(struct sAlignOfExpNode2* self);
static _Bool sAlignOfExpNode2_equals(struct sAlignOfExpNode2* left, struct sAlignOfExpNode2* right);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static unsigned int sAlignAsNode_get_hash_key(struct sAlignAsNode* self);
static _Bool sAlignAsNode_equals(struct sAlignAsNode* left, struct sAlignAsNode* right);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
static unsigned int sAlignAsExpNode_get_hash_key(struct sAlignAsExpNode* self);
static _Bool sAlignAsExpNode_equals(struct sAlignAsExpNode* left, struct sAlignAsExpNode* right);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
static unsigned int sImplementsNode_get_hash_key(struct sImplementsNode* self);
static _Bool sImplementsNode_equals(struct sImplementsNode* left, struct sImplementsNode* right);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
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

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
void* __right_value288 = (void*)0;
struct sType* __dec_obj77;
struct list$1tuple2$2charphsNodephph* __dec_obj78;
struct sNewNode* __result244__;
    ((struct sNodeBase*)(__right_value250=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value250,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj77=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj78=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer);
    come_call_finalizer3(__dec_obj78,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

char* sNewNode_kind(struct sNewNode* self){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
char* __result245__;
    __result245__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value289=__builtin_string("sNewNode")));
    __right_value289 = come_decrement_ref_count2(__right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_347;
struct list$1tuple2$2charphsNodephph* initializer_348;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct CVALUE* come_value_349;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct buffer* num_string_350;
struct list$1sNodeph* o2_saved_351;
struct sNode* it_354;
_Bool Value_357;
_Bool __result252__;
void* __right_value294 = (void*)0;
struct CVALUE* cvalue_358;
void* __right_value295 = (void*)0;
struct sType* type2_359;
_Bool generics_any_child_360;
struct sType* no_solved_type_361;
struct sType* __dec_obj89;
struct list$1voidph* o2_saved_362;
struct sType* it_365;
void* __right_value296 = (void*)0;
char* type_name_370;
void* __right_value297 = (void*)0;
char* type_name2_371;
void* __right_value298 = (void*)0;
char* var_name_373;
void* __right_value299 = (void*)0;
struct sType* type3_374;
struct sType* __dec_obj90;
void* __right_value300 = (void*)0;
char* type_name3_375;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct buffer* buf_376;
char* obj_377;
void* __right_value304 = (void*)0;
struct sType* any_type_378;
void* __right_value305 = (void*)0;
char* finalizer_name_379;
void* __right_value306 = (void*)0;
char* cloner_name_380;
void* __right_value307 = (void*)0;
char* get_hash_key_name_381;
void* __right_value308 = (void*)0;
char* equaler_name_382;
void* __right_value309 = (void*)0;
_Bool _if_conditional1;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
_Bool _if_conditional2;
void* __right_value312 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_386=0;
char* name_387=0;
char* __dec_obj109;
void* __right_value313 = (void*)0;
_Bool _if_conditional3;
void* __right_value314 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun_388=0;
char* name_389=0;
char* __dec_obj110;
void* __right_value315 = (void*)0;
_Bool _if_conditional4;
void* __right_value316 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3 = (void*)0;
struct sFun* fun_390=0;
char* name_391=0;
char* __dec_obj111;
void* __right_value317 = (void*)0;
char* any_type_name_392;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* __dec_obj112;
void* __right_value320 = (void*)0;
struct sType* __dec_obj113;
struct sType* any_type_393;
void* __right_value321 = (void*)0;
char* finalizer_name_394;
void* __right_value322 = (void*)0;
char* cloner_name_395;
void* __right_value323 = (void*)0;
char* get_hash_key_name_396;
void* __right_value324 = (void*)0;
char* equaler_name_397;
void* __right_value325 = (void*)0;
_Bool _if_conditional5;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
_Bool _if_conditional6;
void* __right_value328 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun_398=0;
char* name_399=0;
char* __dec_obj114;
void* __right_value329 = (void*)0;
_Bool _if_conditional7;
void* __right_value330 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_400=0;
char* name_401=0;
char* __dec_obj115;
void* __right_value331 = (void*)0;
_Bool _if_conditional8;
void* __right_value332 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun_402=0;
char* name_403=0;
char* __dec_obj116;
void* __right_value333 = (void*)0;
char* any_type_name_404;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
char* __dec_obj117;
void* __right_value336 = (void*)0;
struct sType* __dec_obj118;
char* finalizer_name_405;
char* cloner_name_406;
char* get_hash_key_name_407;
char* equaler_name_408;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
char* __dec_obj119;
struct sClass* klass_409;
int i_410;
struct list$1tuple2$2charphsNodephph* o2_saved_411;
struct tuple2$2charphsNodeph* it_414;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* name_417=0;
struct sNode* exp_418=0;
_Bool Value_419;
_Bool __result270__;
void* __right_value339 = (void*)0;
struct CVALUE* come_value2_420;
struct sType* left_type_421;
struct list$1voidph* o2_saved_422;
struct tuple2$2charphsTypeph* it2_423;
struct tuple2$2charphsTypeph* multiple_assign_var8 = (void*)0;
char* field_name_424=0;
struct sType* field_type_425=0;
void* __right_value340 = (void*)0;
struct sType* __dec_obj120;
_Bool __result271__;
struct sType* right_type_426;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sType* __dec_obj121;
void* __right_value343 = (void*)0;
char* c_value_427;
void* __right_value344 = (void*)0;
char* __dec_obj122;
void* __right_value345 = (void*)0;
struct sType* __dec_obj123;
void* __right_value349 = (void*)0;
struct sType* type3_431;
void* __right_value350 = (void*)0;
char* type_name3_432;
char* obj_433;
void* __right_value351 = (void*)0;
struct sType* any_type_434;
void* __right_value352 = (void*)0;
char* finalizer_name_435;
void* __right_value353 = (void*)0;
char* cloner_name_436;
void* __right_value354 = (void*)0;
char* get_hash_key_name_437;
void* __right_value355 = (void*)0;
char* equaler_name_438;
void* __right_value356 = (void*)0;
_Bool _if_conditional9;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
_Bool _if_conditional10;
void* __right_value359 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var9 = (void*)0;
struct sFun* fun_439=0;
char* name_440=0;
char* __dec_obj127;
void* __right_value360 = (void*)0;
_Bool _if_conditional11;
void* __right_value361 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var10 = (void*)0;
struct sFun* fun_441=0;
char* name_442=0;
char* __dec_obj128;
void* __right_value362 = (void*)0;
_Bool _if_conditional12;
void* __right_value363 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var11 = (void*)0;
struct sFun* fun_443=0;
char* name_444=0;
char* __dec_obj129;
void* __right_value364 = (void*)0;
char* any_type_name_445;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
char* __dec_obj130;
void* __right_value367 = (void*)0;
struct sType* __dec_obj131;
struct sType* any_type_446;
struct sType* __dec_obj132;
void* __right_value368 = (void*)0;
char* finalizer_name_447;
void* __right_value369 = (void*)0;
char* cloner_name_448;
void* __right_value370 = (void*)0;
char* get_hash_key_name_449;
void* __right_value371 = (void*)0;
char* equaler_name_450;
void* __right_value372 = (void*)0;
_Bool _if_conditional13;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
_Bool _if_conditional14;
void* __right_value375 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var12 = (void*)0;
struct sFun* fun_451=0;
char* name_452=0;
char* __dec_obj133;
void* __right_value376 = (void*)0;
_Bool _if_conditional15;
void* __right_value377 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var13 = (void*)0;
struct sFun* fun_453=0;
char* name_454=0;
char* __dec_obj134;
void* __right_value378 = (void*)0;
_Bool _if_conditional16;
void* __right_value379 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var14 = (void*)0;
struct sFun* fun_455=0;
char* name_456=0;
char* __dec_obj135;
void* __right_value380 = (void*)0;
char* any_type_name_457;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
char* __dec_obj136;
void* __right_value383 = (void*)0;
struct sType* __dec_obj137;
char* finalizer_name_458;
char* cloner_name_459;
char* get_hash_key_name_460;
char* equaler_name_461;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
char* __dec_obj138;
void* __right_value386 = (void*)0;
struct sType* __dec_obj139;
_Bool __result273__;
obj_377 = (void*)0;
obj_433 = (void*)0;
    type_347=self->type;
    initializer_348=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    come_value_349=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 23, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_350=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 25, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_350,"1");
    for(    o2_saved_351=(struct list$1sNodeph*)come_increment_ref_count((type_347->mArrayNum)),it_354=list$1sNodephp_begin((o2_saved_351));    !list$1sNodephp_end((o2_saved_351));    it_354=list$1sNodephp_next((o2_saved_351))    ){
        Value_357=node_compile(it_354,info);
        if(        !Value_357) {
            __result252__ = (_Bool)0;
            come_call_finalizer3(o2_saved_351,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_348,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_349,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_350,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result252__;
        }
        else {
        }
        cvalue_358=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        buffer_append_format(num_string_350,"*(%s)",cvalue_358->c_value);
        come_call_finalizer3(cvalue_358,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_351,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    type2_359=(struct sType*)come_increment_ref_count(solve_generics(type_347,info->generics_type,info));
    generics_any_child_360=(_Bool)0;
    no_solved_type_361=((void*)0);
    if(    type2_359->mNoSolvedGenericsType) {
        __dec_obj89=no_solved_type_361;
        no_solved_type_361=(struct sType*)come_increment_ref_count(type2_359->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
        for(        o2_saved_362=(struct list$1voidph*)come_increment_ref_count((no_solved_type_361->mGenericsTypes)),it_365=((struct sType*)list$1voidphp_begin((o2_saved_362)));        !list$1voidphp_end((o2_saved_362));        it_365=((struct sType*)list$1voidphp_next((o2_saved_362)))        ){
            if(            it_365->mAnyOriginalType) {
                generics_any_child_360=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_362,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    list$1sNodephp_reset(type2_359->mArrayNum);
    type_name_370=(char*)come_increment_ref_count(make_type_name_string(type2_359,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1));
    type_name2_371=(char*)come_increment_ref_count(make_come_type_name_string(type2_359,info));
    if(    initializer_348) {
        static int var_num_372=1;
        var_num_372++;
        var_name_373=(char*)come_increment_ref_count(xsprintf("__new_obj__%d",var_num_372));
        type3_374=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_359));
        type3_374->mPointerNum++;
        if(        type3_374->mNoSolvedGenericsType) {
            type3_374->mNoSolvedGenericsType->mPointerNum++;
        }
        if(        type3_374->mAnyOriginalType) {
            __dec_obj90=type3_374;
            type3_374=(struct sType*)come_increment_ref_count(type3_374->mAnyOriginalType);
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        type_name3_375=(char*)come_increment_ref_count(make_type_name_string(type3_374,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value301=make_define_var(type3_374,var_name_373,(_Bool)0,info))));
        __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buf_376=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 85, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(buf_376,"(");
        if(        type2_359->mAnyClass&&type2_359->mAnyOriginalType) {
            any_type_378=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_359->mAnyOriginalType));
            finalizer_name_379=(char*)come_increment_ref_count(create_method_name(any_type_378,(_Bool)0,"finalize",info,(_Bool)1));
            cloner_name_380=(char*)come_increment_ref_count(create_method_name(any_type_378,(_Bool)0,"clone",info,(_Bool)1));
            get_hash_key_name_381=(char*)come_increment_ref_count(create_method_name(any_type_378,(_Bool)0,"get_hash_key",info,(_Bool)1));
            equaler_name_382=(char*)come_increment_ref_count(create_method_name(any_type_378,(_Bool)0,"equals",info,(_Bool)1));
            if(            (_if_conditional1=(((struct sFun*)(__right_value309=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_379)))==((void*)0))),            come_call_finalizer3(__right_value309,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional1) {
                (void*)((struct tuple2$2sFunpcharph*)(__right_value310=create_finalizer_automatically(any_type_378,"finalize",info)));
                come_call_finalizer3(__right_value310,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional2=(((struct sFun*)(__right_value311=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_380)))==((void*)0))),            come_call_finalizer3(__right_value311,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional2) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value312=create_cloner_automatically(any_type_378,"clone",info)));
                fun_386=multiple_assign_var1->v1;
                name_387=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer3(__right_value312,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj109=cloner_name_380;
                cloner_name_380=(char*)come_increment_ref_count(name_387);
                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_387 = come_decrement_ref_count2(name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional3=(((struct sFun*)(__right_value313=map$2charphsFunphp_operator_load_element(info->funcs,get_hash_key_name_381)))==((void*)0))),            come_call_finalizer3(__right_value313,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value314=create_get_hash_key_automatically(any_type_378,"get_hash_key",info)));
                fun_388=multiple_assign_var2->v1;
                name_389=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(__right_value314,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj110=get_hash_key_name_381;
                get_hash_key_name_381=(char*)come_increment_ref_count(name_389);
                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_389 = come_decrement_ref_count2(name_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional4=(((struct sFun*)(__right_value315=map$2charphsFunphp_operator_load_element(info->funcs,equaler_name_382)))==((void*)0))),            come_call_finalizer3(__right_value315,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value316=create_equals_automatically(any_type_378,"equals",info)));
                fun_390=multiple_assign_var3->v1;
                name_391=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(__right_value316,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj111=equaler_name_382;
                equaler_name_382=(char*)come_increment_ref_count(name_391);
                __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_391 = come_decrement_ref_count2(name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            any_type_378->mPointerNum--;
            any_type_name_392=(char*)come_increment_ref_count(make_type_name_string(any_type_378,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj112=obj_377;
            obj_377=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",var_name_373,any_type_name_392,any_type_name_392,((char*)(__right_value318=buffer_to_string(num_string_350))),info->sname,info->sline,any_type_name_392,finalizer_name_379,cloner_name_380,get_hash_key_name_381,equaler_name_382));
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            any_type_378->mPointerNum++;
            __dec_obj113=come_value_349->type;
            come_value_349->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, any_type_378));
            come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_379 = come_decrement_ref_count2(finalizer_name_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_380 = come_decrement_ref_count2(cloner_name_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_381 = come_decrement_ref_count2(get_hash_key_name_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_382 = come_decrement_ref_count2(equaler_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            any_type_name_392 = come_decrement_ref_count2(any_type_name_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        generics_any_child_360) {
            any_type_393=(struct sType*)come_increment_ref_count(no_solved_type_361);
            any_type_393->mPointerNum=(_Bool)1;
            finalizer_name_394=(char*)come_increment_ref_count(create_method_name(any_type_393,(_Bool)0,"finalize",info,(_Bool)1));
            cloner_name_395=(char*)come_increment_ref_count(create_method_name(any_type_393,(_Bool)0,"clone",info,(_Bool)1));
            get_hash_key_name_396=(char*)come_increment_ref_count(create_method_name(any_type_393,(_Bool)0,"get_hash_key",info,(_Bool)1));
            equaler_name_397=(char*)come_increment_ref_count(create_method_name(any_type_393,(_Bool)0,"equals",info,(_Bool)1));
            if(            (_if_conditional5=(((struct sFun*)(__right_value325=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_394)))==((void*)0))),            come_call_finalizer3(__right_value325,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                (void*)((struct tuple2$2sFunpcharph*)(__right_value326=create_finalizer_automatically(any_type_393,"finalize",info)));
                come_call_finalizer3(__right_value326,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional6=(((struct sFun*)(__right_value327=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_395)))==((void*)0))),            come_call_finalizer3(__right_value327,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value328=create_cloner_automatically(any_type_393,"clone",info)));
                fun_398=multiple_assign_var4->v1;
                name_399=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer3(__right_value328,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj114=cloner_name_395;
                cloner_name_395=(char*)come_increment_ref_count(name_399);
                __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_399 = come_decrement_ref_count2(name_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional7=(((struct sFun*)(__right_value329=map$2charphsFunphp_operator_load_element(info->funcs,get_hash_key_name_396)))==((void*)0))),            come_call_finalizer3(__right_value329,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value330=create_get_hash_key_automatically(any_type_393,"get_hash_key",info)));
                fun_400=multiple_assign_var5->v1;
                name_401=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(__right_value330,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj115=get_hash_key_name_396;
                get_hash_key_name_396=(char*)come_increment_ref_count(name_401);
                __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_401 = come_decrement_ref_count2(name_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional8=(((struct sFun*)(__right_value331=map$2charphsFunphp_operator_load_element(info->funcs,equaler_name_397)))==((void*)0))),            come_call_finalizer3(__right_value331,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value332=create_equals_automatically(any_type_393,"equals",info)));
                fun_402=multiple_assign_var6->v1;
                name_403=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                come_call_finalizer3(__right_value332,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj116=equaler_name_397;
                equaler_name_397=(char*)come_increment_ref_count(name_403);
                __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_403 = come_decrement_ref_count2(name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            any_type_393->mPointerNum--;
            any_type_name_404=(char*)come_increment_ref_count(make_type_name_string(any_type_393,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj117=obj_377;
            obj_377=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",var_name_373,any_type_name_404,any_type_name_404,((char*)(__right_value334=buffer_to_string(num_string_350))),info->sname,info->sline,any_type_name_404,finalizer_name_394,cloner_name_395,get_hash_key_name_396,equaler_name_397));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            any_type_393->mPointerNum++;
            type2_359->mHeap=(_Bool)1;
            type2_359->mPointerNum++;
            if(            type2_359->mNoSolvedGenericsType) {
                type2_359->mNoSolvedGenericsType->mPointerNum++;
                type2_359->mNoSolvedGenericsType->mHeap=(_Bool)1;
            }
            __dec_obj118=come_value_349->type;
            come_value_349->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_359));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_394 = come_decrement_ref_count2(finalizer_name_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_395 = come_decrement_ref_count2(cloner_name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_396 = come_decrement_ref_count2(get_hash_key_name_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_397 = come_decrement_ref_count2(equaler_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            any_type_name_404 = come_decrement_ref_count2(any_type_name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            finalizer_name_405="(void*)0";
            cloner_name_406="(void*)0";
            get_hash_key_name_407="(void*)0";
            equaler_name_408="(void*)0";
            __dec_obj119=obj_377;
            obj_377=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",var_name_373,type_name_370,type_name_370,((char*)(__right_value337=buffer_to_string(num_string_350))),info->sname,info->sline,type_name3_375,finalizer_name_405,cloner_name_406,get_hash_key_name_407,equaler_name_408));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        buffer_append_str(buf_376,obj_377);
        buffer_append_str(buf_376,",");
        klass_409=type3_374->mClass;
        i_410=0;
        for(        o2_saved_411=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_348)),it_414=list$1tuple2$2charphsNodephphp_begin((o2_saved_411));        !list$1tuple2$2charphsNodephphp_end((o2_saved_411));        it_414=list$1tuple2$2charphsNodephphp_next((o2_saved_411))        ){
            multiple_assign_var7=it_414;
            name_417=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            exp_418=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_419=node_compile(exp_418,info);
            if(            !Value_419) {
                __result270__ = (_Bool)0;
                name_417 = come_decrement_ref_count2(name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_418) { exp_418 = come_decrement_ref_count2(exp_418, ((struct sNode*)exp_418)->finalize, ((struct sNode*)exp_418)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_411,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                var_name_373 = come_decrement_ref_count2(var_name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type3_374,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name3_375 = come_decrement_ref_count2(type_name3_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_376,buffer_finalize, 0, 0, 0, 0, (void*)0);
                obj_377 = come_decrement_ref_count2(obj_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_348,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_349,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_350,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_359,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_370 = come_decrement_ref_count2(type_name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_371 = come_decrement_ref_count2(type_name2_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result270__;
            }
            else {
            }
            come_value2_420=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            left_type_421=((void*)0);
            for(            o2_saved_422=(struct list$1voidph*)come_increment_ref_count((klass_409->mFields)),it2_423=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_422)));            !list$1voidphp_end((o2_saved_422));            it2_423=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_422)))            ){
                multiple_assign_var8=it2_423;
                field_name_424=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                field_type_425=(struct sType*)come_increment_ref_count(multiple_assign_var8->v2);
                if(                string_operator_equals(name_417,field_name_424)) {
                    __dec_obj120=left_type_421;
                    left_type_421=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_425));
                    come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name_424 = come_decrement_ref_count2(field_name_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name_424 = come_decrement_ref_count2(field_name_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_422,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_421==((void*)0)) {
                err_msg(info,"field %s is not defined",name_417);
                __result271__ = (_Bool)0;
                name_417 = come_decrement_ref_count2(name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_418) { exp_418 = come_decrement_ref_count2(exp_418, ((struct sNode*)exp_418)->finalize, ((struct sNode*)exp_418)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value2_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_411,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                var_name_373 = come_decrement_ref_count2(var_name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type3_374,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name3_375 = come_decrement_ref_count2(type_name3_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_376,buffer_finalize, 0, 0, 0, 0, (void*)0);
                obj_377 = come_decrement_ref_count2(obj_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_348,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_349,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_350,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_359,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_370 = come_decrement_ref_count2(type_name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_371 = come_decrement_ref_count2(type_name2_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result271__;
            }
            right_type_426=(struct sType*)come_increment_ref_count(come_value2_420->type);
            check_assign_type(((char*)(__right_value342=xsprintf("\%s is assining to",((char*)(__right_value341=string_to_string(name_417)))))),left_type_421,right_type_426,come_value2_420,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value342,charp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj121=right_type_426;
            right_type_426=(struct sType*)come_increment_ref_count(come_value2_420->type);
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_421->mHeap&&right_type_426->mHeap&&left_type_421->mPointerNum>0&&right_type_426->mPointerNum>0) {
                c_value_427=(char*)come_increment_ref_count(increment_ref_count_object(left_type_421,come_value2_420->c_value,info));
                buffer_append_format(buf_376,"%s->%s = %s",var_name_373,name_417,c_value_427);
                c_value_427 = come_decrement_ref_count2(c_value_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                buffer_append_format(buf_376,"%s->%s = %s",var_name_373,name_417,come_value2_420->c_value);
            }
            buffer_append_str(buf_376,",");
            i_410++;
            name_417 = come_decrement_ref_count2(name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_418) { exp_418 = come_decrement_ref_count2(exp_418, ((struct sNode*)exp_418)->finalize, ((struct sNode*)exp_418)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value2_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_411,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_376,var_name_373);
        buffer_append_str(buf_376,")");
        __dec_obj122=come_value_349->c_value;
        come_value_349->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_376));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        type2_359->mHeap=(_Bool)1;
        type2_359->mPointerNum++;
        if(        type2_359->mNoSolvedGenericsType) {
            type2_359->mNoSolvedGenericsType->mPointerNum++;
            type2_359->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj123=come_value_349->type;
        come_value_349->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_359));
        come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_349->var=((void*)0);
        append_object_to_right_values2(come_value_349,(struct sType*)come_increment_ref_count(type2_359),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_349->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_349));
        var_name_373 = come_decrement_ref_count2(var_name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_374,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name3_375 = come_decrement_ref_count2(type_name3_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_376,buffer_finalize, 0, 0, 0, 0, (void*)0);
        obj_377 = come_decrement_ref_count2(obj_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        type3_431=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_359));
        type3_431->mPointerNum++;
        type3_431->mHeap=(_Bool)1;
        if(        type3_431->mNoSolvedGenericsType) {
            type3_431->mNoSolvedGenericsType->mPointerNum++;
            type3_431->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        type_name3_432=(char*)come_increment_ref_count(make_type_name_string(type3_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        type2_359->mAnyClass&&type2_359->mAnyOriginalType) {
            any_type_434=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_359->mAnyOriginalType));
            any_type_434->mPointerNum=1;
            any_type_434->mHeap=(_Bool)1;
            finalizer_name_435=(char*)come_increment_ref_count(create_method_name(any_type_434,(_Bool)0,"finalize",info,(_Bool)1));
            cloner_name_436=(char*)come_increment_ref_count(create_method_name(any_type_434,(_Bool)0,"clone",info,(_Bool)1));
            get_hash_key_name_437=(char*)come_increment_ref_count(create_method_name(any_type_434,(_Bool)0,"get_hash_key",info,(_Bool)1));
            equaler_name_438=(char*)come_increment_ref_count(create_method_name(any_type_434,(_Bool)0,"equals",info,(_Bool)1));
            if(            (_if_conditional9=(((struct sFun*)(__right_value356=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_435)))==((void*)0))),            come_call_finalizer3(__right_value356,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                (void*)((struct tuple2$2sFunpcharph*)(__right_value357=create_finalizer_automatically(any_type_434,"finalize",info)));
                come_call_finalizer3(__right_value357,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional10=(((struct sFun*)(__right_value358=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_436)))==((void*)0))),            come_call_finalizer3(__right_value358,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional10) {
                multiple_assign_var9=((struct tuple2$2sFunpcharph*)(__right_value359=create_cloner_automatically(any_type_434,"clone",info)));
                fun_439=multiple_assign_var9->v1;
                name_440=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                come_call_finalizer3(__right_value359,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj127=cloner_name_436;
                cloner_name_436=(char*)come_increment_ref_count(name_440);
                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_440 = come_decrement_ref_count2(name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional11=(((struct sFun*)(__right_value360=map$2charphsFunphp_operator_load_element(info->funcs,get_hash_key_name_437)))==((void*)0))),            come_call_finalizer3(__right_value360,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional11) {
                multiple_assign_var10=((struct tuple2$2sFunpcharph*)(__right_value361=create_get_hash_key_automatically(any_type_434,"get_hash_key",info)));
                fun_441=multiple_assign_var10->v1;
                name_442=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                come_call_finalizer3(__right_value361,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj128=get_hash_key_name_437;
                get_hash_key_name_437=(char*)come_increment_ref_count(name_442);
                __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_442 = come_decrement_ref_count2(name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional12=(((struct sFun*)(__right_value362=map$2charphsFunphp_operator_load_element(info->funcs,equaler_name_438)))==((void*)0))),            come_call_finalizer3(__right_value362,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                multiple_assign_var11=((struct tuple2$2sFunpcharph*)(__right_value363=create_equals_automatically(any_type_434,"equals",info)));
                fun_443=multiple_assign_var11->v1;
                name_444=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                come_call_finalizer3(__right_value363,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj129=equaler_name_438;
                equaler_name_438=(char*)come_increment_ref_count(name_444);
                __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_444 = come_decrement_ref_count2(name_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            any_type_434->mPointerNum--;
            any_type_name_445=(char*)come_increment_ref_count(make_type_name_string(any_type_434,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj130=come_value_349->c_value;
            come_value_349->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",any_type_name_445,any_type_name_445,((char*)(__right_value365=buffer_to_string(num_string_350))),info->sname,info->sline,any_type_name_445,finalizer_name_435,cloner_name_436,get_hash_key_name_437,equaler_name_438));
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            type2_359->mPointerNum--;
            any_type_434->mPointerNum++;
            __dec_obj131=come_value_349->type;
            come_value_349->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, any_type_434));
            come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_435 = come_decrement_ref_count2(finalizer_name_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_436 = come_decrement_ref_count2(cloner_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_437 = come_decrement_ref_count2(get_hash_key_name_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_438 = come_decrement_ref_count2(equaler_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            any_type_name_445 = come_decrement_ref_count2(any_type_name_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        generics_any_child_360) {
            any_type_446=(struct sType*)come_increment_ref_count(no_solved_type_361);
            __dec_obj132=any_type_446->mAnyOriginalType;
            any_type_446->mAnyOriginalType=((void*)0);
            come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
            any_type_446->mPointerNum=1;
            any_type_446->mHeap=(_Bool)1;
            finalizer_name_447=(char*)come_increment_ref_count(create_method_name(any_type_446,(_Bool)0,"finalize",info,(_Bool)1));
            cloner_name_448=(char*)come_increment_ref_count(create_method_name(any_type_446,(_Bool)0,"clone",info,(_Bool)1));
            get_hash_key_name_449=(char*)come_increment_ref_count(create_method_name(any_type_446,(_Bool)0,"get_hash_key",info,(_Bool)1));
            equaler_name_450=(char*)come_increment_ref_count(create_method_name(any_type_446,(_Bool)0,"equals",info,(_Bool)1));
            if(            (_if_conditional13=(((struct sFun*)(__right_value372=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_447)))==((void*)0))),            come_call_finalizer3(__right_value372,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                (void*)((struct tuple2$2sFunpcharph*)(__right_value373=create_finalizer_automatically(any_type_446,"finalize",info)));
                come_call_finalizer3(__right_value373,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional14=(((struct sFun*)(__right_value374=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_448)))==((void*)0))),            come_call_finalizer3(__right_value374,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional14) {
                multiple_assign_var12=((struct tuple2$2sFunpcharph*)(__right_value375=create_cloner_automatically(any_type_446,"clone",info)));
                fun_451=multiple_assign_var12->v1;
                name_452=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                come_call_finalizer3(__right_value375,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj133=cloner_name_448;
                cloner_name_448=(char*)come_increment_ref_count(name_452);
                __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_452 = come_decrement_ref_count2(name_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional15=(((struct sFun*)(__right_value376=map$2charphsFunphp_operator_load_element(info->funcs,get_hash_key_name_449)))==((void*)0))),            come_call_finalizer3(__right_value376,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional15) {
                multiple_assign_var13=((struct tuple2$2sFunpcharph*)(__right_value377=create_get_hash_key_automatically(any_type_446,"get_hash_key",info)));
                fun_453=multiple_assign_var13->v1;
                name_454=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                come_call_finalizer3(__right_value377,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj134=get_hash_key_name_449;
                get_hash_key_name_449=(char*)come_increment_ref_count(name_454);
                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_454 = come_decrement_ref_count2(name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional16=(((struct sFun*)(__right_value378=map$2charphsFunphp_operator_load_element(info->funcs,equaler_name_450)))==((void*)0))),            come_call_finalizer3(__right_value378,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional16) {
                multiple_assign_var14=((struct tuple2$2sFunpcharph*)(__right_value379=create_equals_automatically(any_type_446,"equals",info)));
                fun_455=multiple_assign_var14->v1;
                name_456=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                come_call_finalizer3(__right_value379,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj135=equaler_name_450;
                equaler_name_450=(char*)come_increment_ref_count(name_456);
                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                name_456 = come_decrement_ref_count2(name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            any_type_446->mPointerNum--;
            any_type_name_457=(char*)come_increment_ref_count(make_type_name_string(any_type_446,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj136=come_value_349->c_value;
            come_value_349->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_370,type_name_370,((char*)(__right_value381=buffer_to_string(num_string_350))),info->sname,info->sline,type_name3_432,finalizer_name_447,cloner_name_448,get_hash_key_name_449,equaler_name_450));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            any_type_446->mPointerNum++;
            type2_359->mHeap=(_Bool)1;
            type2_359->mPointerNum++;
            if(            type2_359->mNoSolvedGenericsType) {
                type2_359->mNoSolvedGenericsType->mPointerNum++;
                type2_359->mNoSolvedGenericsType->mHeap=(_Bool)1;
            }
            __dec_obj137=come_value_349->type;
            come_value_349->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_359));
            come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_446,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_447 = come_decrement_ref_count2(finalizer_name_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_448 = come_decrement_ref_count2(cloner_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_449 = come_decrement_ref_count2(get_hash_key_name_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            equaler_name_450 = come_decrement_ref_count2(equaler_name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            any_type_name_457 = come_decrement_ref_count2(any_type_name_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            finalizer_name_458="(void*)0";
            cloner_name_459="(void*)0";
            get_hash_key_name_460="(void*)0";
            equaler_name_461="(void*)0";
            __dec_obj138=come_value_349->c_value;
            come_value_349->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_370,type_name_370,((char*)(__right_value384=buffer_to_string(num_string_350))),info->sname,info->sline,type_name3_432,finalizer_name_458,cloner_name_459,get_hash_key_name_460,equaler_name_461));
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            type2_359->mHeap=(_Bool)1;
            type2_359->mPointerNum++;
            if(            type2_359->mNoSolvedGenericsType) {
                type2_359->mNoSolvedGenericsType->mPointerNum++;
                type2_359->mNoSolvedGenericsType->mHeap=(_Bool)1;
            }
            __dec_obj139=come_value_349->type;
            come_value_349->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_359));
            come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_349->var=((void*)0);
        append_object_to_right_values2(come_value_349,(struct sType*)come_increment_ref_count(type2_359),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_349->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_349));
        come_call_finalizer3(type3_431,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name3_432 = come_decrement_ref_count2(type_name3_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        obj_433 = come_decrement_ref_count2(obj_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result273__ = (_Bool)1;
    come_call_finalizer3(initializer_348,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_349,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_350,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_359,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(no_solved_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_370 = come_decrement_ref_count2(type_name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_371 = come_decrement_ref_count2(type_name2_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result273__;
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result229__;
void* __right_value251 = (void*)0;
struct sType* result_325;
void* __right_value252 = (void*)0;
struct sType* __dec_obj51;
void* __right_value253 = (void*)0;
struct sType* __dec_obj52;
void* __right_value254 = (void*)0;
struct sType* __dec_obj53;
void* __right_value255 = (void*)0;
char* __dec_obj54;
void* __right_value256 = (void*)0;
char* __dec_obj55;
void* __right_value263 = (void*)0;
struct list$1voidph* __dec_obj59;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __dec_obj63;
void* __right_value272 = (void*)0;
struct list$1voidph* __dec_obj64;
void* __right_value279 = (void*)0;
struct list$1charph* __dec_obj68;
void* __right_value280 = (void*)0;
struct sType* __dec_obj69;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj70;
void* __right_value282 = (void*)0;
struct sType* __dec_obj71;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value284 = (void*)0;
char* __dec_obj73;
void* __right_value285 = (void*)0;
char* __dec_obj74;
void* __right_value286 = (void*)0;
char* __dec_obj75;
void* __right_value287 = (void*)0;
char* __dec_obj76;
struct sType* __result243__;
    if(    self==(void*)0) {
        __result229__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_325=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_325->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj51=result_325->mNoSolvedGenericsType;
        result_325->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj52=result_325->mOriginalLoadVarType;
        result_325->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj53=result_325->mAnyOriginalType;
        result_325->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj54=result_325->mInterfaceName;
        result_325->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj55=result_325->mGenericsName;
        result_325->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj59=result_325->mGenericsTypes;
        result_325->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj59,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj63=result_325->mArrayNum;
        result_325->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj63,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj64=result_325->mParamTypes;
        result_325->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj64,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj68=result_325->mParamNames;
        result_325->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj68,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj69=result_325->mResultType;
        result_325->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj70=result_325->mAlignas;
        result_325->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj71=result_325->mChannelType;
        result_325->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_325->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_325->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_325->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_325->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_325->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_325->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_325->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_325->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_325->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_325->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_325->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_325->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_325->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_325->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_325->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_325->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_325->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_325->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_325->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_325->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_325->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_325->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_325->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj72=result_325->mSizeNum;
        result_325->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_325->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj73=result_325->mOriginalTypeName;
        result_325->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_325->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_325->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_325->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_325->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_325->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_325->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_325->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj74=result_325->mAsmName;
        result_325->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_325->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_325->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_325->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_325->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_325->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj75=result_325->mTupleName;
        result_325->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj76=result_325->mAttribute;
        result_325->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_325->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_325->mGenerate=self->mGenerate;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_325;
    come_call_finalizer3(result_325,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj32;
struct sType* __dec_obj33;
struct sType* __dec_obj34;
char* __dec_obj35;
char* __dec_obj36;
struct list$1voidph* __dec_obj37;
struct list$1sNodeph* __dec_obj39;
struct list$1voidph* __dec_obj41;
struct list$1charph* __dec_obj42;
struct sType* __dec_obj43;
struct sNode* __dec_obj44;
struct sType* __dec_obj45;
struct sNode* __dec_obj46;
char* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj32=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj33=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj34=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj35=self->mInterfaceName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj36=self->mGenericsName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj37=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj37,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj39=self->mArrayNum;
            come_call_finalizer3(__dec_obj39,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj41=self->mParamTypes;
            come_call_finalizer3(__dec_obj41,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj42=self->mParamNames;
            come_call_finalizer3(__dec_obj42,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj43=self->mResultType;
            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj44=self->mAlignas;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj45=self->mChannelType;
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj46=self->mSizeNum;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj47=self->mOriginalTypeName;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj48=self->mAsmName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj49=self->mTupleName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj50=self->mAttribute;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
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
void* __dec_obj38;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj38=self->item;
            come_call_finalizer3(__dec_obj38,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
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
struct sNode* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
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

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_318;
    result_318=0;
    result_318+=int_get_hash_key(((int)self->mClass));
    result_318+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_318+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_318+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_318+=int_get_hash_key(((int)self->mAnyClass));
    result_318+=int_get_hash_key(((int)self->mInterfaceName));
    result_318+=int_get_hash_key(((int)self->mGenericsName));
    result_318+=int_get_hash_key(((int)self->mGenericsTypes));
    result_318+=int_get_hash_key(((int)self->mArrayNum));
    result_318+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_318+=int_get_hash_key(((int)self->mParamTypes));
    result_318+=int_get_hash_key(((int)self->mParamNames));
    result_318+=int_get_hash_key(((int)self->mResultType));
    result_318+=int_get_hash_key(((int)self->mVarArgs));
    result_318+=int_get_hash_key(((int)self->mAlignas));
    result_318+=int_get_hash_key(((int)self->mChannelType));
    result_318+=int_get_hash_key(((int)self->mUnsigned));
    result_318+=int_get_hash_key(((int)self->mShort));
    result_318+=int_get_hash_key(((int)self->mLong));
    result_318+=int_get_hash_key(((int)self->mLongLong));
    result_318+=int_get_hash_key(((int)self->mConstant));
    result_318+=int_get_hash_key(((int)self->mAtomic));
    result_318+=int_get_hash_key(((int)self->mRegister));
    result_318+=int_get_hash_key(((int)self->mVolatile));
    result_318+=int_get_hash_key(((int)self->mStatic));
    result_318+=int_get_hash_key(((int)self->mUniq));
    result_318+=int_get_hash_key(((int)self->mRecord));
    result_318+=int_get_hash_key(((int)self->mExtern));
    result_318+=int_get_hash_key(((int)self->mRestrict));
    result_318+=int_get_hash_key(((int)self->mImmutable));
    result_318+=int_get_hash_key(((int)self->mHeap));
    result_318+=int_get_hash_key(((int)self->mChannel));
    result_318+=int_get_hash_key(((int)self->mNoHeap));
    result_318+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_318+=int_get_hash_key(((int)self->mException));
    result_318+=int_get_hash_key(((int)self->mPointerNum));
    result_318+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_318+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_318+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_318+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_318+=int_get_hash_key(((int)self->mSizeNum));
    result_318+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_318+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_318+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_318+=int_get_hash_key(((int)self->mFunctionParam));
    result_318+=int_get_hash_key(((int)self->mAllocaValue));
    result_318+=int_get_hash_key(((int)self->mGenericsStruct));
    result_318+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_318+=int_get_hash_key(((int)self->mInline));
    result_318+=int_get_hash_key(((int)self->mNullValue));
    result_318+=int_get_hash_key(((int)self->mGuardValue));
    result_318+=int_get_hash_key(((int)self->mAsmName));
    result_318+=int_get_hash_key(((int)self->mArrayPointerType));
    result_318+=int_get_hash_key(((int)self->mLambdaArray));
    result_318+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_318+=int_get_hash_key(((int)self->mTypedef));
    result_318+=int_get_hash_key(((int)self->mMultipleTypes));
    result_318+=int_get_hash_key(((int)self->mOriginIsArray));
    result_318+=int_get_hash_key(((int)self->mTupleName));
    result_318+=int_get_hash_key(((int)self->mAttribute));
    result_318+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_318+=int_get_hash_key(((int)self->mGenerate));
    return result_318;
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
struct list_item$1voidph* it_319;
struct list_item$1voidph* it2_320;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_319=left->head;
    it2_320=right->head;
    while(it_319!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_319->item)) {
            return (_Bool)0;
        }
        it_319=it_319->next;
        it2_320=it2_320->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_321;
struct list_item$1sNodeph* it2_322;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_321=left->head;
    it2_322=right->head;
    while(it_321!=((void*)0)) {
        if(        !sNode_equals(it_321->item,it2_322->item)) {
            return (_Bool)0;
        }
        it_321=it_321->next;
        it2_322=it2_322->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_323;
struct list_item$1charph* it2_324;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_323=left->head;
    it2_324=right->head;
    while(it_323!=((void*)0)) {
        if(        !string_equals(it_323->item,it2_324->item)) {
            return (_Bool)0;
        }
        it_323=it_323->next;
        it2_324=it2_324->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result230__;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1voidph* result_327;
struct list_item$1voidph* it_328;
void* __right_value262 = (void*)0;
struct list$1voidph* __result233__;
    if(    self==((void*)0)) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_327=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_328=self->head;
    while(it_328!=((void*)0)) {
        list$1voidphp_add(result_327,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_328->item)));
        it_328=it_328->next;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_327;
    come_call_finalizer3(result_327,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_326;
    result_326=0;
    result_326+=int_get_hash_key(((int)self->head));
    result_326+=int_get_hash_key(((int)self->tail));
    result_326+=int_get_hash_key(((int)self->len));
    result_326+=int_get_hash_key(((int)self->it));
    return result_326;
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
void* __right_value259 = (void*)0;
struct list_item$1voidph* litem_329;
void* __dec_obj56;
void* __right_value260 = (void*)0;
struct list_item$1voidph* litem_330;
void* __dec_obj57;
void* __right_value261 = (void*)0;
struct list_item$1voidph* litem_331;
void* __dec_obj58;
struct list$1voidph* __result232__;
    if(    self->len==0) {
        litem_329=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value259=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_329->prev=((void*)0);
        litem_329->next=((void*)0);
        __dec_obj56=litem_329->item;
        litem_329->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_329;
        self->head=litem_329;
    }
    else if(    self->len==1) {
        litem_330=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value260=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_330->prev=self->head;
        litem_330->next=((void*)0);
        __dec_obj57=litem_330->item;
        litem_330->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_330;
        self->head->next=litem_330;
    }
    else {
        litem_331=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value261=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_331->prev=self->tail;
        litem_331->next=((void*)0);
        __dec_obj58=litem_331->item;
        litem_331->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_331;
        self->tail=litem_331;
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
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sNodeph* result_332;
struct list_item$1sNodeph* it_333;
void* __right_value270 = (void*)0;
struct list$1sNodeph* __result239__;
    if(    self==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_332=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_333=self->head;
    while(it_333!=((void*)0)) {
        list$1sNodephp_add(result_332,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_333->item)));
        it_333=it_333->next;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_332;
    come_call_finalizer3(result_332,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value266 = (void*)0;
struct list_item$1sNodeph* litem_334;
struct sNode* __dec_obj60;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_335;
struct sNode* __dec_obj61;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_336;
struct sNode* __dec_obj62;
struct list$1sNodeph* __result236__;
    if(    self->len==0) {
        litem_334=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value266=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_334->prev=((void*)0);
        litem_334->next=((void*)0);
        __dec_obj60=litem_334->item;
        litem_334->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_334;
        self->head=litem_334;
    }
    else if(    self->len==1) {
        litem_335=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_335->prev=self->head;
        litem_335->next=((void*)0);
        __dec_obj61=litem_335->item;
        litem_335->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_335;
        self->head->next=litem_335;
    }
    else {
        litem_336=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_336->prev=self->tail;
        litem_336->next=((void*)0);
        __dec_obj62=litem_336->item;
        litem_336->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_336;
        self->tail=litem_336;
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
void* __right_value269 = (void*)0;
struct sNode* result_337;
struct sNode* __result238__;
    if(    self==(void*)0) {
        __result237__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_337=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_337->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_337->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_337->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_337->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_337->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_337->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_337->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_337->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_337->kind=self->kind;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_337;
    come_call_finalizer2((void*)0, result_337, result_337 ? ((struct sNode*)result_337)->finalize:(void*)0, result_337 ? ((struct sNode*)result_337)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result240__;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1charph* result_338;
struct list_item$1charph* it_339;
void* __right_value278 = (void*)0;
struct list$1charph* __result242__;
    if(    self==((void*)0)) {
        __result240__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_338=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_339=self->head;
    while(it_339!=((void*)0)) {
        list$1charphp_add(result_338,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_339->item)));
        it_339=it_339->next;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_338;
    come_call_finalizer3(result_338,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_340;
char* __dec_obj65;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_341;
char* __dec_obj66;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_342;
char* __dec_obj67;
struct list$1charph* __result241__;
    if(    self->len==0) {
        litem_340=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_340->prev=((void*)0);
        litem_340->next=((void*)0);
        __dec_obj65=litem_340->item;
        litem_340->item=(char*)come_increment_ref_count(item);
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_340;
        self->head=litem_340;
    }
    else if(    self->len==1) {
        litem_341=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=self->head;
        litem_341->next=((void*)0);
        __dec_obj66=litem_341->item;
        litem_341->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_341;
        self->head->next=litem_341;
    }
    else {
        litem_342=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_342->prev=self->tail;
        litem_342->next=((void*)0);
        __dec_obj67=litem_342->item;
        litem_342->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_342;
        self->tail=litem_342;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_343;
struct list_item$1tuple2$2charphsNodephph* prev_it_344;
    it_343=self->head;
    while(it_343!=((void*)0)) {
        prev_it_344=it_343;
        it_343=it_343->next;
        come_call_finalizer3(prev_it_344,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj79;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj79=self->item;
            come_call_finalizer3(__dec_obj79,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj80;
struct sNode* __dec_obj81;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj80=self->v1;
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj81=self->v2;
            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void sNewNode_finalize(struct sNewNode* self){
char* __dec_obj82;
struct sType* __dec_obj83;
struct list$1tuple2$2charphsNodephph* __dec_obj84;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj82=self->sname;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj83=self->type;
            come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj84=self->initializer;
            come_call_finalizer3(__dec_obj84,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_345;
struct list_item$1tuple2$2charphsNodephph* prev_it_346;
    it_345=self->head;
    while(it_345!=((void*)0)) {
        prev_it_346=it_345;
        it_345=it_345->next;
        come_call_finalizer3(prev_it_346,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_352;
struct sNode* __result246__;
struct sNode* __result247__;
struct sNode* result_353;
struct sNode* __result248__;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_352,0,sizeof(struct sNode*));
        __result246__ = gComeFunResultObject = __result_obj__ = result_352;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    self->it=self->head;
    if(    self->it) {
        __result247__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    memset(&result_353,0,sizeof(struct sNode*));
    __result248__ = gComeFunResultObject = __result_obj__ = result_353;
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_355;
struct sNode* __result249__;
struct sNode* __result250__;
struct sNode* result_356;
struct sNode* __result251__;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_355,0,sizeof(struct sNode*));
        __result249__ = gComeFunResultObject = __result_obj__ = result_355;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result250__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    memset(&result_356,0,sizeof(struct sNode*));
    __result251__ = gComeFunResultObject = __result_obj__ = result_356;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj85;
struct sType* __dec_obj86;
char* __dec_obj87;
char* __dec_obj88;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj85=self->c_value;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj86=self->type;
            come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj87=self->c_value_without_right_value_objects;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj88=self->c_value_without_cast_object_value;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_363;
void* __result253__;
void* __result254__;
void* result_364;
void* __result255__;
result_363 = (void*)0;
result_364 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_363,0,sizeof(void*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_363;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->it=self->head;
    if(    self->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_364,0,sizeof(void*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_364;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_366;
void* __result256__;
void* __result257__;
void* result_367;
void* __result258__;
result_366 = (void*)0;
result_367 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_366,0,sizeof(void*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_366;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_367,0,sizeof(void*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_367;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_368;
struct list_item$1sNodeph* prev_it_369;
struct list$1sNodeph* __result259__;
    it_368=self->head;
    while(it_368!=((void*)0)) {
        prev_it_369=it_368;
        it_368=it_368->next;
        come_call_finalizer3(prev_it_369,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_383;
unsigned int hash_384;
unsigned int it_385;
struct sFun* __result260__;
struct sFun* __result261__;
struct sFun* __result262__;
struct sFun* __result263__;
default_value_383 = (void*)0;
    memset(&default_value_383,0,sizeof(struct sFun*));
    hash_384=string_get_hash_key(((char*)key))%self->size;
    it_385=hash_384;
    while((_Bool)1) {
        if(        self->item_existance[it_385]) {
            if(            string_equals(self->keys[it_385],key)) {
                __result260__ = gComeFunResultObject = __result_obj__ = self->items[it_385];
                come_call_finalizer3(default_value_383,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
            it_385++;
            if(            it_385>=self->size) {
                it_385=0;
            }
            else if(            it_385==hash_384) {
                __result261__ = gComeFunResultObject = __result_obj__ = default_value_383;
                come_call_finalizer3(default_value_383,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result261__;
            }
        }
        else {
            __result262__ = gComeFunResultObject = __result_obj__ = default_value_383;
            come_call_finalizer3(default_value_383,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result262__;
        }
    }
    __result263__ = gComeFunResultObject = __result_obj__ = default_value_383;
    come_call_finalizer3(default_value_383,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj91;
struct sType* __dec_obj92;
struct list$1voidph* __dec_obj93;
struct list$1charph* __dec_obj94;
struct list$1charph* __dec_obj95;
struct sType* __dec_obj96;
struct sBlock* __dec_obj97;
struct buffer* __dec_obj100;
struct buffer* __dec_obj101;
struct buffer* __dec_obj102;
struct buffer* __dec_obj103;
char* __dec_obj104;
char* __dec_obj105;
char* __dec_obj106;
char* __dec_obj107;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj91=self->mName;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj92=self->mResultType;
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj93=self->mParamTypes;
            come_call_finalizer3(__dec_obj93,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj94=self->mParamNames;
            come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj95=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj96=self->mLambdaType;
            come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj97=self->mBlock;
            come_call_finalizer3(__dec_obj97,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj100=self->mSource;
            come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj101=self->mSourceHead;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj102=self->mSourceHead2;
            come_call_finalizer3(__dec_obj102,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj103=self->mSourceDefer;
            come_call_finalizer3(__dec_obj103,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj104=self->mComeHeader;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj105=self->mDeclareSName;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj106=self->mAttribute;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj107=self->mFunAttribute;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj98;
struct sVarTable* __dec_obj99;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj98=self->mNodes;
            come_call_finalizer3(__dec_obj98,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj99=self->mVarTable;
            come_call_finalizer3(__dec_obj99,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj108;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj108=self->v2;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_412;
struct tuple2$2charphsNodeph* __result264__;
struct tuple2$2charphsNodeph* __result265__;
struct tuple2$2charphsNodeph* result_413;
struct tuple2$2charphsNodeph* __result266__;
result_412 = (void*)0;
result_413 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_412,0,sizeof(struct tuple2$2charphsNodeph*));
        __result264__ = gComeFunResultObject = __result_obj__ = result_412;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    self->it=self->head;
    if(    self->it) {
        __result265__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    memset(&result_413,0,sizeof(struct tuple2$2charphsNodeph*));
    __result266__ = gComeFunResultObject = __result_obj__ = result_413;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_415;
struct tuple2$2charphsNodeph* __result267__;
struct tuple2$2charphsNodeph* __result268__;
struct tuple2$2charphsNodeph* result_416;
struct tuple2$2charphsNodeph* __result269__;
result_415 = (void*)0;
result_416 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_415,0,sizeof(struct tuple2$2charphsNodeph*));
        __result267__ = gComeFunResultObject = __result_obj__ = result_415;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result268__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    memset(&result_416,0,sizeof(struct tuple2$2charphsNodeph*));
    __result269__ = gComeFunResultObject = __result_obj__ = result_416;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value346 = (void*)0;
struct list_item$1CVALUEph* litem_428;
struct CVALUE* __dec_obj124;
void* __right_value347 = (void*)0;
struct list_item$1CVALUEph* litem_429;
struct CVALUE* __dec_obj125;
void* __right_value348 = (void*)0;
struct list_item$1CVALUEph* litem_430;
struct CVALUE* __dec_obj126;
struct list$1CVALUEph* __result272__;
    if(    self->len==0) {
        litem_428=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value346=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1405, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_428->prev=((void*)0);
        litem_428->next=((void*)0);
        __dec_obj124=litem_428->item;
        litem_428->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_428;
        self->head=litem_428;
    }
    else if(    self->len==1) {
        litem_429=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value347=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1415, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_429->prev=self->head;
        litem_429->next=((void*)0);
        __dec_obj125=litem_429->item;
        litem_429->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_429;
        self->head->next=litem_429;
    }
    else {
        litem_430=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value348=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1425, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_430->prev=self->tail;
        litem_430->next=((void*)0);
        __dec_obj126=litem_430->item;
        litem_430->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_430;
        self->tail=litem_430;
    }
    self->len++;
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sNode* __dec_obj140;
void* __right_value389 = (void*)0;
struct sType* __dec_obj141;
struct sImplementsNode* __result274__;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value387,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj140=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_exp));
    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj141=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
char* __result275__;
    __result275__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value390=__builtin_string("sImplementsNode")));
    __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value391 = (void*)0;
struct sNode* obj_exp_462;
void* __right_value392 = (void*)0;
struct sType* inf_type_463;
_Bool Value_464;
_Bool __result276__;
void* __right_value393 = (void*)0;
struct CVALUE* come_value_465;
void* __right_value394 = (void*)0;
struct sType* type_466;
struct sClass* klass_467;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct CVALUE* come_value2_468;
void* __right_value397 = (void*)0;
struct sType* type2_469;
void* __right_value398 = (void*)0;
char* type_name_470;
void* __right_value399 = (void*)0;
char* type_name2_471;
int inf_num_stack_473;
void* __right_value400 = (void*)0;
char* buf_474;
void* __right_value401 = (void*)0;
char* buf2_475;
void* __right_value402 = (void*)0;
char* c_value_476;
void* __right_value403 = (void*)0;
struct sType* typeX_477;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
int i_478;
void* __right_value406 = (void*)0;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_482=0;
struct sType* field_type_483=0;
void* __right_value407 = (void*)0;
char* method_name_484;
void* __right_value408 = (void*)0;
struct sFun* fun_485;
void* __right_value409 = (void*)0;
struct sType* type2_488;
void* __right_value410 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var16 = (void*)0;
struct sFun* fun2_489=0;
char* real_fun_name_490=0;
char* __dec_obj145;
void* __right_value411 = (void*)0;
struct sType* type2_491;
void* __right_value412 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var17 = (void*)0;
struct sFun* fun2_492=0;
char* real_fun_name_493=0;
char* __dec_obj146;
void* __right_value413 = (void*)0;
struct sClass* klass2_494;
void* __right_value414 = (void*)0;
_Bool _while_condtional1;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
char* __dec_obj152;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
char* __dec_obj153;
void* __right_value419 = (void*)0;
struct sType* type3_498;
void* __right_value420 = (void*)0;
struct sType* __dec_obj154;
_Bool __result287__;
    obj_exp_462=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
    inf_type_463=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->inf_type));
    Value_464=node_compile(obj_exp_462,info);
    if(    !Value_464) {
        __result276__ = (_Bool)0;
        if(obj_exp_462) { obj_exp_462 = come_decrement_ref_count2(obj_exp_462, ((struct sNode*)obj_exp_462)->finalize, ((struct sNode*)obj_exp_462)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(inf_type_463,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result276__;
    }
    else {
    }
    come_value_465=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_466=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_465->type));
    type_466->mPointerNum--;
    type_466->mHeap=(_Bool)0;
    klass_467=inf_type_463->mClass;
    come_value2_468=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 408, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_469=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type_463));
    type_name_470=(char*)come_increment_ref_count(make_type_name_string(inf_type_463,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_471=(char*)come_increment_ref_count(make_type_name_string(type_466,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_472=0;
    ++inf_num_472;
    inf_num_stack_473=inf_num_472;
    buf_474=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_470,inf_num_stack_473));
    add_come_code_at_function_head(info,buf_474);
    buf2_475=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_471,inf_num_stack_473));
    add_come_code_at_function_head(info,buf2_475);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0);\n",inf_num_stack_473,type_name_470,type_name_470,info->sname,info->sline,type_name_470);
    c_value_476=(char*)come_increment_ref_count(increment_ref_count_object(come_value_465->type,come_value_465->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack_473,c_value_476);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack_473,inf_num_stack_473);
    typeX_477=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_466));
    typeX_477->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(__right_value404=create_finalizer_automatically(typeX_477,"finalize",info)));
    come_call_finalizer3(__right_value404,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    ((struct tuple2$2sFunpcharph*)(__right_value405=create_cloner_automatically(typeX_477,"clone",info)));
    come_call_finalizer3(__right_value405,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    i_478=1;    i_478<list$1voidphp_length(klass_467->mFields);    i_478++    ){
        multiple_assign_var15=((struct tuple2$2charphsTypeph*)((void*)(__right_value406=list$1voidphp_operator_load_element(klass_467->mFields,i_478))));
        name_482=(char*)come_increment_ref_count(multiple_assign_var15->v1);
        field_type_483=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
        come_call_finalizer3(__right_value406,(void*)0, 0, 1, 0, 0, (void*)0);
        method_name_484=(char*)come_increment_ref_count(create_method_name(type_466,(_Bool)0,name_482,info,(_Bool)1));
        fun_485=((struct sFun*)(__right_value408=map$2charphsFunphp_at(info->funcs,method_name_484,((void*)0))));
        come_call_finalizer3(__right_value408,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_485==((void*)0)&&string_operator_equals(name_482,"to_string")) {
            type2_488=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_466));
            type2_488->mPointerNum++;
            multiple_assign_var16=((struct tuple2$2sFunpcharph*)(__right_value410=create_to_string_automatically(type2_488,name_482,info)));
            fun2_489=multiple_assign_var16->v1;
            real_fun_name_490=(char*)come_increment_ref_count(multiple_assign_var16->v2);
            come_call_finalizer3(__right_value410,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            fun_485=fun2_489;
            __dec_obj145=method_name_484;
            method_name_484=(char*)come_increment_ref_count(real_fun_name_490);
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(type2_488,sType_finalize, 0, 0, 0, 0, (void*)0);
            real_fun_name_490 = come_decrement_ref_count2(real_fun_name_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        fun_485==((void*)0)&&string_operator_equals(name_482,"equals")) {
            type2_491=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_466));
            type2_491->mPointerNum++;
            multiple_assign_var17=((struct tuple2$2sFunpcharph*)(__right_value412=create_equals_automatically(type2_491,name_482,info)));
            fun2_492=multiple_assign_var17->v1;
            real_fun_name_493=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            come_call_finalizer3(__right_value412,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            fun_485=fun2_492;
            __dec_obj146=method_name_484;
            method_name_484=(char*)come_increment_ref_count(real_fun_name_493);
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(type2_491,sType_finalize, 0, 0, 0, 0, (void*)0);
            real_fun_name_493 = come_decrement_ref_count2(real_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        fun_485==((void*)0)) {
            klass2_494=((struct sClass*)(__right_value413=map$2charphsClassphp_operator_load_element(info->classes,type_466->mClass->mName)));
            come_call_finalizer3(__right_value413,sClass_finalize, 0, 1, 0, 0, (void*)0);
            while((_while_condtional1=(((struct sClass*)(__right_value414=map$2charphsClassphp_operator_load_element(info->classes,klass2_494->mParentClassName))))),            come_call_finalizer3(__right_value414,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass2_494=((struct sClass*)(__right_value415=map$2charphsClassphp_operator_load_element(info->classes,klass2_494->mParentClassName)));
                come_call_finalizer3(__right_value415,sClass_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj152=method_name_484;
                method_name_484=(char*)come_increment_ref_count(create_method_name_using_class(klass2_494,(_Bool)0,name_482,info,(_Bool)1));
                __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_485=((struct sFun*)(__right_value417=map$2charphsFunphp_at(info->funcs,method_name_484,((void*)0))));
                come_call_finalizer3(__right_value417,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_485) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_473,name_482,method_name_484);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_473,name_482,method_name_484);
        }
        name_482 = come_decrement_ref_count2(name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
        method_name_484 = come_decrement_ref_count2(method_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj153=come_value2_468->c_value;
    come_value2_468->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack_473));
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    type3_498=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, inf_type_463));
    type3_498->mPointerNum++;
    type3_498->mHeap=(_Bool)1;
    type2_469->mHeap=(_Bool)1;
    __dec_obj154=come_value2_468->type;
    come_value2_468->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_469));
    come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_468->type->mPointerNum++;
    come_value2_468->var=((void*)0);
    append_object_to_right_values2(come_value2_468,(struct sType*)come_increment_ref_count(type3_498),info,(_Bool)0);
    add_come_last_code(info,"%s",come_value2_468->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_468));
    __result287__ = (_Bool)1;
    if(obj_exp_462) { obj_exp_462 = come_decrement_ref_count2(obj_exp_462, ((struct sNode*)obj_exp_462)->finalize, ((struct sNode*)obj_exp_462)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type_463,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_466,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_469,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_470 = come_decrement_ref_count2(type_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_471 = come_decrement_ref_count2(type_name2_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_474 = come_decrement_ref_count2(buf_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_475 = come_decrement_ref_count2(buf2_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    c_value_476 = come_decrement_ref_count2(c_value_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(typeX_477,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_498,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result287__;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
char* __dec_obj142;
struct sNode* __dec_obj143;
struct sType* __dec_obj144;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj142=self->sname;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(        self->obj_exp==gComeFunResultObject) {
            __dec_obj143=self->obj_exp;
            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        if(        self->inf_type==gComeFunResultObject) {
            __dec_obj144=self->inf_type;
            come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_479;
int i_480;
void* __result277__;
void* default_value_481;
void* __result278__;
default_value_481 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_479=self->head;
    i_480=0;
    while(it_479!=((void*)0)) {
        if(        position==i_480) {
            __result277__ = gComeFunResultObject = __result_obj__ = it_479->item;
            gComeFunResultObject = (void*)0;
            return __result277__;
        }
        it_479=it_479->next;
        i_480++;
    }
    memset(&default_value_481,0,sizeof(void*));
    __result278__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsTypeph*)default_value_481);
    come_call_finalizer3(default_value_481, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_486;
unsigned int it_487;
struct sFun* __result279__;
struct sFun* __result280__;
struct sFun* __result281__;
struct sFun* __result282__;
    hash_486=string_get_hash_key(((char*)key))%self->size;
    it_487=hash_486;
    while((_Bool)1) {
        if(        self->item_existance[it_487]) {
            if(            string_equals(self->keys[it_487],key)) {
                __result279__ = gComeFunResultObject = __result_obj__ = self->items[it_487];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result279__;
            }
            it_487++;
            if(            it_487>=self->size) {
                it_487=0;
            }
            else if(            it_487==hash_486) {
                __result280__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result280__;
            }
        }
        else {
            __result281__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result281__;
        }
    }
    __result282__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_495;
unsigned int hash_496;
unsigned int it_497;
struct sClass* __result283__;
struct sClass* __result284__;
struct sClass* __result285__;
struct sClass* __result286__;
default_value_495 = (void*)0;
    memset(&default_value_495,0,sizeof(struct sClass*));
    hash_496=string_get_hash_key(((char*)key))%self->size;
    it_497=hash_496;
    while((_Bool)1) {
        if(        self->item_existance[it_497]) {
            if(            string_equals(self->keys[it_497],key)) {
                __result283__ = gComeFunResultObject = __result_obj__ = self->items[it_497];
                come_call_finalizer3(default_value_495,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result283__;
            }
            it_497++;
            if(            it_497>=self->size) {
                it_497=0;
            }
            else if(            it_497==hash_496) {
                __result284__ = gComeFunResultObject = __result_obj__ = default_value_495;
                come_call_finalizer3(default_value_495,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result284__;
            }
        }
        else {
            __result285__ = gComeFunResultObject = __result_obj__ = default_value_495;
            come_call_finalizer3(default_value_495,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result285__;
        }
    }
    __result286__ = gComeFunResultObject = __result_obj__ = default_value_495;
    come_call_finalizer3(default_value_495,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj147;
struct list$1voidph* __dec_obj148;
char* __dec_obj149;
char* __dec_obj150;
char* __dec_obj151;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj147=self->mName;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj148=self->mFields;
            come_call_finalizer3(__dec_obj148,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj149=self->mDeclareSName;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj150=self->mParentClassName;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj151=self->mAttribute;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value421 = (void*)0;
struct sTrueNode* __result288__;
    ((struct sNodeBase*)(__right_value421=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value421,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __result_obj__=(void*)0;
void* __right_value422 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value422=__builtin_string("sTrueNode")));
    __right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct CVALUE* come_value_499;
void* __right_value425 = (void*)0;
char* __dec_obj156;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sType* __dec_obj157;
_Bool __result290__;
    come_value_499=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 557, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj156=come_value_499->c_value;
    come_value_499->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj157=come_value_499->type;
    come_value_499->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 560, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_499->var=((void*)0);
    add_come_last_code(info,"%s",come_value_499->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_499));
    __result290__ = (_Bool)1;
    come_call_finalizer3(come_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result290__;
}

static void sTrueNode_finalize(struct sTrueNode* self){
char* __dec_obj155;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj155=self->sname;
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value432 = (void*)0;
struct sNode* __result293__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 573, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value429=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 573, "struct sTrueNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    __result293__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value432=_inf_value1));
    come_call_finalizer3(__right_value429,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value432) { __right_value432 = come_decrement_ref_count2(__right_value432, ((struct sNode*)__right_value432)->finalize, ((struct sNode*)__right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__=(void*)0;
struct sTrueNode* __result291__;
void* __right_value430 = (void*)0;
struct sTrueNode* result_501;
void* __right_value431 = (void*)0;
char* __dec_obj158;
struct sTrueNode* __result292__;
    if(    self==(void*)0) {
        __result291__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    result_501=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode", sTrueNode_finalize, sTrueNode_clone, sTrueNode_get_hash_key, sTrueNode_equals));
    if(    self!=((void*)0)) {
        result_501->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj158=result_501->sname;
        result_501->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_501->sline_real=self->sline_real;
    }
    __result292__ = gComeFunResultObject = __result_obj__ = result_501;
    come_call_finalizer3(result_501,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static unsigned int sTrueNode_get_hash_key(struct sTrueNode* self){
unsigned int result_500;
    result_500=0;
    result_500+=int_get_hash_key(((int)self->sline));
    result_500+=int_get_hash_key(((int)self->sname));
    result_500+=int_get_hash_key(((int)self->sline_real));
    return result_500;
}

static _Bool sTrueNode_equals(struct sTrueNode* left, struct sTrueNode* right){
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

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value433 = (void*)0;
struct sFalseNode* __result294__;
    ((struct sNodeBase*)(__right_value433=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value433,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __result_obj__=(void*)0;
void* __right_value434 = (void*)0;
char* __result295__;
    __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value434=__builtin_string("sFalseNode")));
    __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct CVALUE* come_value_502;
void* __right_value437 = (void*)0;
char* __dec_obj160;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sType* __dec_obj161;
_Bool __result296__;
    come_value_502=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 590, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj160=come_value_502->c_value;
    come_value_502->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj161=come_value_502->type;
    come_value_502->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_502->var=((void*)0);
    add_come_last_code(info,"%s",come_value_502->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_502));
    __result296__ = (_Bool)1;
    come_call_finalizer3(come_value_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result296__;
}

static void sFalseNode_finalize(struct sFalseNode* self){
char* __dec_obj159;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj159=self->sname;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value444 = (void*)0;
struct sNode* __result299__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 606, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value441=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 606, "struct sFalseNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    __result299__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value444=_inf_value2));
    come_call_finalizer3(__right_value441,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value444) { __right_value444 = come_decrement_ref_count2(__right_value444, ((struct sNode*)__right_value444)->finalize, ((struct sNode*)__right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__=(void*)0;
struct sFalseNode* __result297__;
void* __right_value442 = (void*)0;
struct sFalseNode* result_504;
void* __right_value443 = (void*)0;
char* __dec_obj162;
struct sFalseNode* __result298__;
    if(    self==(void*)0) {
        __result297__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    result_504=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode", sFalseNode_finalize, sFalseNode_clone, sFalseNode_get_hash_key, sFalseNode_equals));
    if(    self!=((void*)0)) {
        result_504->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj162=result_504->sname;
        result_504->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_504->sline_real=self->sline_real;
    }
    __result298__ = gComeFunResultObject = __result_obj__ = result_504;
    come_call_finalizer3(result_504,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static unsigned int sFalseNode_get_hash_key(struct sFalseNode* self){
unsigned int result_503;
    result_503=0;
    result_503+=int_get_hash_key(((int)self->sline));
    result_503+=int_get_hash_key(((int)self->sname));
    result_503+=int_get_hash_key(((int)self->sline_real));
    return result_503;
}

static _Bool sFalseNode_equals(struct sFalseNode* left, struct sFalseNode* right){
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

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sType* __dec_obj163;
struct sSizeOfNode* __result300__;
    ((struct sNodeBase*)(__right_value445=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value445,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj163=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value447 = (void*)0;
char* __result301__;
    __result301__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value447=__builtin_string("sSizeOfNode")));
    __right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_505;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct CVALUE* come_value_506;
void* __right_value450 = (void*)0;
struct sType* type2_507;
void* __right_value451 = (void*)0;
char* type_name_508;
void* __right_value452 = (void*)0;
char* __dec_obj166;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sType* __dec_obj167;
_Bool __result302__;
    type_505=self->type;
    come_value_506=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 627, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_507=(struct sType*)come_increment_ref_count(solve_generics(type_505,info->generics_type,info));
    type_name_508=(char*)come_increment_ref_count(make_type_name_string(type2_507,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj166=come_value_506->c_value;
    come_value_506->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_508));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj167=come_value_506->type;
    come_value_506->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 634, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_506->type->mUnsigned=(_Bool)1;
    come_value_506->var=((void*)0);
    add_come_last_code(info,"%s",come_value_506->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_506));
    __result302__ = (_Bool)1;
    come_call_finalizer3(come_value_506,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_507,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_508 = come_decrement_ref_count2(type_name_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result302__;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
char* __dec_obj164;
struct sType* __dec_obj165;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj164=self->sname;
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj165=self->type;
            come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sNode* __dec_obj168;
struct sSizeOfExpNode* __result303__;
struct sSizeOfExpNode* __result304__;
    ((struct sNodeBase*)(__right_value455=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value455,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj168=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); };
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result303__;
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result304__;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value457 = (void*)0;
char* __result305__;
    __result305__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value457=__builtin_string("sSizeOfExpNode")));
    __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_509;
_Bool Value_510;
_Bool __result306__;
void* __right_value458 = (void*)0;
struct CVALUE* come_value_511;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct CVALUE* come_value2_512;
void* __right_value461 = (void*)0;
char* __dec_obj171;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sType* __dec_obj172;
_Bool __result307__;
    exp_509=(struct sNode*)come_increment_ref_count(self->exp);
    Value_510=node_compile(exp_509,info);
    if(    !Value_510) {
        __result306__ = (_Bool)0;
        if(exp_509) { exp_509 = come_decrement_ref_count2(exp_509, ((struct sNode*)exp_509)->finalize, ((struct sNode*)exp_509)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result306__;
    }
    else {
    }
    come_value_511=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_512=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 673, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj171=come_value2_512->c_value;
    come_value2_512->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_511->c_value));
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj172=come_value2_512->type;
    come_value2_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 676, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_512->type->mUnsigned=(_Bool)1;
    come_value2_512->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_512->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_512));
    __result307__ = (_Bool)1;
    if(exp_509) { exp_509 = come_decrement_ref_count2(exp_509, ((struct sNode*)exp_509)->finalize, ((struct sNode*)exp_509)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result307__;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
char* __dec_obj169;
struct sNode* __dec_obj170;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj169=self->sname;
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj170=self->exp;
            if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sType* __dec_obj173;
struct sTypeOfNode* __result308__;
    ((struct sNodeBase*)(__right_value464=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value464,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj173=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value466 = (void*)0;
char* __result309__;
    __result309__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value466=__builtin_string("sTypeOfNode")));
    __right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_513;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct CVALUE* come_value_514;
void* __right_value469 = (void*)0;
struct sType* type2_515;
void* __right_value470 = (void*)0;
char* type_name_516;
void* __right_value471 = (void*)0;
char* __dec_obj176;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sType* __dec_obj177;
_Bool __result310__;
    type_513=self->type;
    come_value_514=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 706, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_515=(struct sType*)come_increment_ref_count(solve_generics(type_513,info->generics_type,info));
    type_name_516=(char*)come_increment_ref_count(make_type_name_string(type2_515,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj176=come_value_514->c_value;
    come_value_514->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_516));
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj177=come_value_514->type;
    come_value_514->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 713, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_514->var=((void*)0);
    add_come_last_code(info,"%s",come_value_514->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_514));
    __result310__ = (_Bool)1;
    come_call_finalizer3(come_value_514,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_515,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_516 = come_decrement_ref_count2(type_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result310__;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
char* __dec_obj174;
struct sType* __dec_obj175;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj174=self->sname;
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj175=self->type;
            come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct sNode* __dec_obj178;
struct sTypeOfExpNode* __result311__;
    ((struct sNodeBase*)(__right_value474=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value474,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj178=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); };
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result311__;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value476 = (void*)0;
char* __result312__;
    __result312__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value476=__builtin_string("sTypeOfExpNode")));
    __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_517;
_Bool Value_518;
_Bool __result313__;
void* __right_value477 = (void*)0;
struct CVALUE* come_value_519;
void* __right_value478 = (void*)0;
struct sType* type_520;
void* __right_value479 = (void*)0;
struct sType* type2_521;
void* __right_value480 = (void*)0;
char* type_name_522;
void* __right_value481 = (void*)0;
char* __dec_obj181;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sType* __dec_obj182;
_Bool __result314__;
    exp_517=(struct sNode*)come_increment_ref_count(self->exp);
    Value_518=node_compile(exp_517,info);
    if(    !Value_518) {
        __result313__ = (_Bool)0;
        if(exp_517) { exp_517 = come_decrement_ref_count2(exp_517, ((struct sNode*)exp_517)->finalize, ((struct sNode*)exp_517)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result313__;
    }
    else {
    }
    come_value_519=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_520=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_519->type));
    type2_521=(struct sType*)come_increment_ref_count(solve_generics(type_520,info->generics_type,info));
    type_name_522=(char*)come_increment_ref_count(make_type_name_string(type2_521,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj181=come_value_519->c_value;
    come_value_519->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_522));
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj182=come_value_519->type;
    come_value_519->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 756, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_519->var=((void*)0);
    add_come_last_code(info,"%s",come_value_519->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_519));
    __result314__ = (_Bool)1;
    if(exp_517) { exp_517 = come_decrement_ref_count2(exp_517, ((struct sNode*)exp_517)->finalize, ((struct sNode*)exp_517)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_519,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_520,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_521,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_522 = come_decrement_ref_count2(type_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result314__;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
char* __dec_obj179;
struct sNode* __dec_obj180;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj179=self->sname;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj180=self->exp;
            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sNode* __dec_obj183;
struct sDynamicTypeOf* __result315__;
    ((struct sNodeBase*)(__right_value484=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value484,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj183=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); };
    __result315__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDynamicTypeOf_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result315__;
}

char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self){
void* __result_obj__=(void*)0;
void* __right_value486 = (void*)0;
char* __result316__;
    __result316__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value486=__builtin_string("sDynamicTypeOf")));
    __right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info){
struct sNode* exp_523;
_Bool Value_524;
_Bool __result317__;
void* __right_value487 = (void*)0;
struct CVALUE* come_value_525;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct CVALUE* come_value2_526;
void* __right_value490 = (void*)0;
char* __dec_obj186;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* __dec_obj187;
_Bool __result318__;
    exp_523=(struct sNode*)come_increment_ref_count(self->exp);
    Value_524=node_compile(exp_523,info);
    if(    !Value_524) {
        __result317__ = (_Bool)0;
        if(exp_523) { exp_523 = come_decrement_ref_count2(exp_523, ((struct sNode*)exp_523)->finalize, ((struct sNode*)exp_523)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result317__;
    }
    else {
    }
    come_value_525=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    come_value_525->type->mPointerNum>0&&come_value_525->type->mHeap) {
        come_value2_526=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 793, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj186=come_value2_526->c_value;
        come_value2_526->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_525->c_value));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj187=come_value2_526->type;
        come_value2_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 796, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_526->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_526->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_526));
        come_call_finalizer3(come_value2_526,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result318__ = (_Bool)1;
    if(exp_523) { exp_523 = come_decrement_ref_count2(exp_523, ((struct sNode*)exp_523)->finalize, ((struct sNode*)exp_523)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_525,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result318__;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self){
char* __dec_obj184;
struct sNode* __dec_obj185;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj184=self->sname;
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj185=self->exp;
            if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sType* __dec_obj188;
struct sAlignOfNode* __result319__;
struct sAlignOfNode* __result320__;
    ((struct sNodeBase*)(__right_value493=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value493,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj188=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value495 = (void*)0;
char* __result321__;
    __result321__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value495=__builtin_string("sAlignOfNode")));
    __right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_527;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct CVALUE* come_value_528;
void* __right_value498 = (void*)0;
struct sType* type2_529;
void* __right_value499 = (void*)0;
char* type_name_530;
void* __right_value500 = (void*)0;
char* __dec_obj191;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __dec_obj192;
_Bool __result322__;
    type_527=self->type;
    come_value_528=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 828, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_529=(struct sType*)come_increment_ref_count(solve_generics(type_527,info->generics_type,info));
    type_name_530=(char*)come_increment_ref_count(make_type_name_string(type2_529,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj191=come_value_528->c_value;
    come_value_528->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_530));
    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj192=come_value_528->type;
    come_value_528->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 835, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_528->type->mUnsigned=(_Bool)1;
    come_value_528->var=((void*)0);
    add_come_last_code(info,"%s",come_value_528->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_528));
    __result322__ = (_Bool)1;
    come_call_finalizer3(come_value_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_529,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_530 = come_decrement_ref_count2(type_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result322__;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
char* __dec_obj189;
struct sType* __dec_obj190;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj189=self->sname;
            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj190=self->type;
            come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sNode* __dec_obj193;
struct sAlignOfExpNode* __result323__;
    ((struct sNodeBase*)(__right_value503=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value503,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj193=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); };
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result323__;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value505 = (void*)0;
char* __result324__;
    __result324__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value505=__builtin_string("sAlignOfExpNode")));
    __right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_531;
_Bool Value_532;
_Bool __result325__;
void* __right_value506 = (void*)0;
struct CVALUE* come_value_533;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct CVALUE* come_value2_534;
void* __right_value509 = (void*)0;
char* __dec_obj196;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj197;
_Bool __result326__;
    exp_531=(struct sNode*)come_increment_ref_count(self->exp);
    Value_532=node_compile(exp_531,info);
    if(    !Value_532) {
        __result325__ = (_Bool)0;
        if(exp_531) { exp_531 = come_decrement_ref_count2(exp_531, ((struct sNode*)exp_531)->finalize, ((struct sNode*)exp_531)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result325__;
    }
    else {
    }
    come_value_533=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_534=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 872, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj196=come_value2_534->c_value;
    come_value2_534->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_533->c_value));
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj197=come_value2_534->type;
    come_value2_534->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 875, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_534->type->mUnsigned=(_Bool)1;
    come_value2_534->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_534->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_534));
    __result326__ = (_Bool)1;
    if(exp_531) { exp_531 = come_decrement_ref_count2(exp_531, ((struct sNode*)exp_531)->finalize, ((struct sNode*)exp_531)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_533,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result326__;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
char* __dec_obj194;
struct sNode* __dec_obj195;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj194=self->sname;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj195=self->exp;
            if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj198;
struct sAlignOfNode2* __result327__;
    ((struct sNodeBase*)(__right_value512=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value512,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj198=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
void* __right_value514 = (void*)0;
char* __result328__;
    __result328__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value514=__builtin_string("sAlignOfNode2")));
    __right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_535;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct CVALUE* come_value_536;
void* __right_value517 = (void*)0;
struct sType* type2_537;
void* __right_value518 = (void*)0;
char* type_name_538;
void* __right_value519 = (void*)0;
char* __dec_obj201;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* __dec_obj202;
_Bool __result329__;
    type_535=self->type;
    come_value_536=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 905, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_537=(struct sType*)come_increment_ref_count(solve_generics(type_535,info->generics_type,info));
    type_name_538=(char*)come_increment_ref_count(make_type_name_string(type2_537,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj201=come_value_536->c_value;
    come_value_536->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_538));
    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj202=come_value_536->type;
    come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 912, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_536->type->mUnsigned=(_Bool)1;
    come_value_536->var=((void*)0);
    add_come_last_code(info,"%s",come_value_536->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_536));
    __result329__ = (_Bool)1;
    come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_537,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_538 = come_decrement_ref_count2(type_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result329__;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
char* __dec_obj199;
struct sType* __dec_obj200;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj199=self->sname;
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj200=self->type;
            come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sNode* __dec_obj203;
struct sAlignOfExpNode2* __result330__;
    ((struct sNodeBase*)(__right_value522=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value522,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj203=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); };
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result330__;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
void* __right_value524 = (void*)0;
char* __result331__;
    __result331__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value524=__builtin_string("sAlignOfExpNode2")));
    __right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_539;
_Bool Value_540;
_Bool __result332__;
void* __right_value525 = (void*)0;
struct CVALUE* come_value_541;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct CVALUE* come_value2_542;
void* __right_value528 = (void*)0;
char* __dec_obj206;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj207;
_Bool __result333__;
    exp_539=(struct sNode*)come_increment_ref_count(self->exp);
    Value_540=node_compile(exp_539,info);
    if(    !Value_540) {
        __result332__ = (_Bool)0;
        if(exp_539) { exp_539 = come_decrement_ref_count2(exp_539, ((struct sNode*)exp_539)->finalize, ((struct sNode*)exp_539)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result332__;
    }
    else {
    }
    come_value_541=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_542=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 949, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj206=come_value2_542->c_value;
    come_value2_542->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_541->c_value));
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj207=come_value2_542->type;
    come_value2_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 952, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_542->type->mUnsigned=(_Bool)1;
    come_value2_542->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_542->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_542));
    __result333__ = (_Bool)1;
    if(exp_539) { exp_539 = come_decrement_ref_count2(exp_539, ((struct sNode*)exp_539)->finalize, ((struct sNode*)exp_539)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result333__;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
char* __dec_obj204;
struct sNode* __dec_obj205;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj204=self->sname;
            __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj205=self->exp;
            if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* __dec_obj208;
struct sAlignAsNode* __result334__;
    ((struct sNodeBase*)(__right_value531=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value531,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj208=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result334__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
void* __right_value533 = (void*)0;
char* __result335__;
    __result335__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value533=__builtin_string("sAlignAsNode")));
    __right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_543;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct CVALUE* come_value_544;
void* __right_value536 = (void*)0;
struct sType* type2_545;
void* __right_value537 = (void*)0;
char* type_name_546;
void* __right_value538 = (void*)0;
char* __dec_obj211;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj212;
_Bool __result336__;
    type_543=self->type;
    come_value_544=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 982, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    type2_545=(struct sType*)come_increment_ref_count(solve_generics(type_543,info->generics_type,info));
    type_name_546=(char*)come_increment_ref_count(make_type_name_string(type2_545,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj211=come_value_544->c_value;
    come_value_544->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_546));
    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj212=come_value_544->type;
    come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 989, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_544->type->mUnsigned=(_Bool)1;
    come_value_544->var=((void*)0);
    add_come_last_code(info,"%s",come_value_544->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_544));
    __result336__ = (_Bool)1;
    come_call_finalizer3(come_value_544,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_545,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_546 = come_decrement_ref_count2(type_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result336__;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
char* __dec_obj209;
struct sType* __dec_obj210;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj209=self->sname;
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj210=self->type;
            come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sNode* __dec_obj213;
struct sAlignAsExpNode* __result337__;
    ((struct sNodeBase*)(__right_value541=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value541,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj213=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, exp));
    if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result337__;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value543 = (void*)0;
char* __result338__;
    __result338__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value543=__builtin_string("sAlignAsExpNode")));
    __right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_547;
_Bool Value_548;
_Bool __result339__;
void* __right_value544 = (void*)0;
struct CVALUE* come_value_549;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct CVALUE* come_value2_550;
void* __right_value547 = (void*)0;
char* __dec_obj216;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sType* __dec_obj217;
_Bool __result340__;
    exp_547=(struct sNode*)come_increment_ref_count(self->exp);
    Value_548=node_compile(exp_547,info);
    if(    !Value_548) {
        __result339__ = (_Bool)0;
        if(exp_547) { exp_547 = come_decrement_ref_count2(exp_547, ((struct sNode*)exp_547)->finalize, ((struct sNode*)exp_547)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result339__;
    }
    else {
    }
    come_value_549=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_550=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1026, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj216=come_value2_550->c_value;
    come_value2_550->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_549->c_value));
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj217=come_value2_550->type;
    come_value2_550->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1029, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_550->type->mUnsigned=(_Bool)1;
    come_value2_550->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_550->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_550));
    __result340__ = (_Bool)1;
    if(exp_547) { exp_547 = come_decrement_ref_count2(exp_547, ((struct sNode*)exp_547)->finalize, ((struct sNode*)exp_547)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_550,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result340__;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
char* __dec_obj214;
struct sNode* __dec_obj215;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj214=self->sname;
            __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj215=self->exp;
            if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sNode* __dec_obj218;
struct sDeleteNode* __result341__;
    ((struct sNodeBase*)(__right_value550=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value550,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj218=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result341__;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
void* __right_value552 = (void*)0;
char* __result342__;
    __result342__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value552=__builtin_string("sDeleteNode")));
    __right_value552 = come_decrement_ref_count2(__right_value552, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_551;
_Bool Value_552;
void* __right_value553 = (void*)0;
struct CVALUE* come_value_553;
_Bool __result343__;
    node_551=self->node;
    Value_552=node_compile(node_551,info);
    if(    !Value_552) {
        return (_Bool)0;
    }
    else {
    }
    come_value_553=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    free_object(come_value_553->type,come_value_553->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __result343__ = (_Bool)1;
    come_call_finalizer3(come_value_553,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result343__;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
char* __dec_obj219;
struct sNode* __dec_obj220;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj219=self->sname;
            __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj220=self->node;
            if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sNode* __dec_obj221;
struct sBorrowNode* __result344__;
struct sBorrowNode* __result345__;
    ((struct sNodeBase*)(__right_value554=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value554,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj221=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result344__;
    __result345__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result345__;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
void* __right_value556 = (void*)0;
char* __result346__;
    __result346__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value556=__builtin_string("sBorrowNode")));
    __right_value556 = come_decrement_ref_count2(__right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_554;
_Bool Value_555;
void* __right_value557 = (void*)0;
struct CVALUE* come_value_556;
struct sRightValueObject* right_value_objects_557;
int right_value_id_558;
_Bool __result347__;
    node_554=self->node;
    Value_555=node_compile(node_554,info);
    if(    !Value_555) {
        return (_Bool)0;
    }
    else {
    }
    come_value_556=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_556->type->mHeap=(_Bool)0;
    right_value_objects_557=come_value_556->right_value_objects;
    if(    right_value_objects_557) {
        right_value_id_558=right_value_objects_557->mID;
        if(        right_value_id_558!=-1) {
            remove_object_from_right_values(right_value_id_558,info);
        }
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_556));
    __result347__ = (_Bool)1;
    come_call_finalizer3(come_value_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result347__;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
char* __dec_obj222;
struct sNode* __dec_obj223;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj222=self->sname;
            __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj223=self->node;
            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sNode* __dec_obj224;
struct sCloneNode* __result348__;
    ((struct sNodeBase*)(__right_value558=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value558,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj224=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); };
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result348__;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __result_obj__=(void*)0;
void* __right_value560 = (void*)0;
char* __result349__;
    __result349__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value560=__builtin_string("sCloneNode")));
    __right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_559;
_Bool Value_560;
void* __right_value561 = (void*)0;
struct CVALUE* left_value_561;
void* __right_value562 = (void*)0;
struct sType* left_type_562;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct CVALUE* come_value_563;
void* __right_value565 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var18 = (void*)0;
struct sType* result_type_564=0;
char* c_value_565=0;
char* __dec_obj229;
void* __right_value566 = (void*)0;
struct sType* __dec_obj230;
_Bool __result350__;
    node_559=self->node;
    Value_560=node_compile(node_559,info);
    if(    !Value_560) {
        return (_Bool)0;
    }
    else {
    }
    left_value_561=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_562=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_561->type));
    if(    left_type_562->mPointerNum==1&&string_operator_equals(left_type_562->mClass->mName,"void")&&left_type_562->mHeap==(_Bool)0) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_561));
    }
    else if(    left_type_562->mPointerNum==0) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_561));
    }
    else if(    left_type_562->mPointerNum>0) {
        come_value_563=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1150, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        multiple_assign_var18=((struct tuple2$2sTypephcharph*)(__right_value565=clone_object(left_type_562,left_value_561->c_value,info)));
        result_type_564=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
        c_value_565=(char*)come_increment_ref_count(multiple_assign_var18->v2);
        come_call_finalizer3(__right_value565,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj229=come_value_563->c_value;
        come_value_563->c_value=(char*)come_increment_ref_count(c_value_565);
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj230=come_value_563->type;
        come_value_563->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_562));
        come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_563->type->mHeap=(_Bool)1;
        come_value_563->var=((void*)0);
        append_object_to_right_values2(come_value_563,(struct sType*)come_increment_ref_count(left_type_562),info,(_Bool)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_563));
        come_call_finalizer3(come_value_563,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
        c_value_565 = come_decrement_ref_count2(c_value_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result350__ = (_Bool)1;
    come_call_finalizer3(left_value_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result350__;
}

static void sCloneNode_finalize(struct sCloneNode* self){
char* __dec_obj225;
struct sNode* __dec_obj226;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj225=self->sname;
            __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj226=self->node;
            if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj227;
char* __dec_obj228;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj227=self->v1;
            come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj228=self->v2;
            __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sNode* __dec_obj231;
struct sDupeNode* __result351__;
    ((struct sNodeBase*)(__right_value567=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value567,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj231=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
    __result351__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result351__;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __result_obj__=(void*)0;
void* __right_value569 = (void*)0;
char* __result352__;
    __result352__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value569=__builtin_string("sDupeNode")));
    __right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_566;
_Bool Value_567;
void* __right_value570 = (void*)0;
struct CVALUE* left_value_568;
void* __right_value571 = (void*)0;
struct sType* left_type_569;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct CVALUE* come_value_570;
void* __right_value574 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var19 = (void*)0;
struct sType* result_type_571=0;
char* c_value_572=0;
char* __dec_obj234;
void* __right_value575 = (void*)0;
struct sType* __dec_obj235;
_Bool __result353__;
    node_566=self->node;
    Value_567=node_compile(node_566,info);
    if(    !Value_567) {
        return (_Bool)0;
    }
    else {
    }
    left_value_568=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_569=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_568->type));
    if(    left_type_569->mPointerNum==0) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_568));
    }
    else if(    left_type_569->mPointerNum>0&&left_type_569->mHeap==(_Bool)0) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_568));
    }
    else if(    left_type_569->mPointerNum>0) {
        come_value_570=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1201, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        multiple_assign_var19=((struct tuple2$2sTypephcharph*)(__right_value574=clone_object(left_type_569,left_value_568->c_value,info)));
        result_type_571=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
        c_value_572=(char*)come_increment_ref_count(multiple_assign_var19->v2);
        come_call_finalizer3(__right_value574,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj234=come_value_570->c_value;
        come_value_570->c_value=(char*)come_increment_ref_count(c_value_572);
        __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj235=come_value_570->type;
        come_value_570->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_569));
        come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_570->type->mHeap=(_Bool)1;
        come_value_570->var=((void*)0);
        append_object_to_right_values2(come_value_570,(struct sType*)come_increment_ref_count(left_type_569),info,(_Bool)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_570));
        come_call_finalizer3(come_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
        c_value_572 = come_decrement_ref_count2(c_value_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result353__ = (_Bool)1;
    come_call_finalizer3(left_value_568,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result353__;
}

static void sDupeNode_finalize(struct sDupeNode* self){
char* __dec_obj232;
struct sNode* __dec_obj233;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj232=self->sname;
            __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj233=self->node;
            if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sNode* __dec_obj236;
struct sDummyHeapNode* __result354__;
    ((struct sNodeBase*)(__right_value576=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value576,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj236=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
    __result354__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result354__;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
void* __right_value578 = (void*)0;
char* __result355__;
    __result355__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value578=__builtin_string("sDummyHeapNode")));
    __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_573;
_Bool Value_574;
void* __right_value579 = (void*)0;
struct CVALUE* come_value_575;
_Bool __result356__;
    node_573=self->node;
    Value_574=node_compile(node_573,info);
    if(    !Value_574) {
        return (_Bool)0;
    }
    else {
    }
    come_value_575=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_575->type->mHeap=(_Bool)1;
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_575));
    __result356__ = (_Bool)1;
    come_call_finalizer3(come_value_575,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result356__;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
char* __dec_obj237;
struct sNode* __dec_obj238;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj237=self->sname;
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj238=self->node;
            if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sNode* __dec_obj239;
struct sGCIncNode* __result357__;
    ((struct sNodeBase*)(__right_value580=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value580,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj239=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); };
    __result357__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result357__;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
void* __right_value582 = (void*)0;
char* __result358__;
    __result358__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value582=__builtin_string("sGCIncNode")));
    __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_576;
_Bool Value_577;
void* __right_value583 = (void*)0;
struct CVALUE* come_value_578;
struct sType* type_579;
void* __right_value584 = (void*)0;
char* type_name_580;
void* __right_value585 = (void*)0;
char* __dec_obj242;
_Bool __result359__;
    node_576=self->node;
    Value_577=node_compile(node_576,info);
    if(    !Value_577) {
        return (_Bool)0;
    }
    else {
    }
    come_value_578=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_579=come_value_578->type;
    if(    come_value_578->type->mHeap) {
        type_name_580=(char*)come_increment_ref_count(make_type_name_string(type_579,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj242=come_value_578->c_value;
        come_value_578->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_578->type,come_value_578->c_value,info));
        __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
        type_name_580 = come_decrement_ref_count2(type_name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_578));
    __result359__ = (_Bool)1;
    come_call_finalizer3(come_value_578,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result359__;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
char* __dec_obj240;
struct sNode* __dec_obj241;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj240=self->sname;
            __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj241=self->node;
            if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sNode* __dec_obj243;
struct sGCDecNode* __result360__;
    ((struct sNodeBase*)(__right_value586=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value586,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj243=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); };
    __result360__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result360__;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
void* __right_value588 = (void*)0;
char* __result361__;
    __result361__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value588=__builtin_string("sGCDecNode")));
    __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_581;
_Bool Value_582;
void* __right_value589 = (void*)0;
struct CVALUE* come_value_583;
struct sType* type_584;
_Bool __result362__;
    node_581=self->node;
    Value_582=node_compile(node_581,info);
    if(    !Value_582) {
        return (_Bool)0;
    }
    else {
    }
    come_value_583=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_584=come_value_583->type;
    decrement_ref_count_object(type_584,come_value_583->c_value,info,(_Bool)0,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_583));
    __result362__ = (_Bool)1;
    come_call_finalizer3(come_value_583,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result362__;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
char* __dec_obj244;
struct sNode* __dec_obj245;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj244=self->sname;
            __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj245=self->node;
            if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sType* __dec_obj246;
struct sIsHeap* __result363__;
    ((struct sNodeBase*)(__right_value590=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value590,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj246=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result363__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __result_obj__=(void*)0;
void* __right_value592 = (void*)0;
char* __result364__;
    __result364__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value592=__builtin_string("sIsHeap")));
    __right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_585;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct CVALUE* come_value_586;
void* __right_value595 = (void*)0;
char* __dec_obj249;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sType* __dec_obj250;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct CVALUE* come_value_587;
void* __right_value600 = (void*)0;
char* __dec_obj251;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sType* __dec_obj252;
    node_585=self->type;
    if(    self->type->mHeap) {
        come_value_586=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1343, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj249=come_value_586->c_value;
        come_value_586->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj250=come_value_586->type;
        come_value_586->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1346, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_586->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_586));
        add_come_last_code(info,"%s",come_value_586->c_value);
        come_call_finalizer3(come_value_586,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_587=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1354, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj251=come_value_587->c_value;
        come_value_587->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj252=come_value_587->type;
        come_value_587->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1357, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_587->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_587));
        add_come_last_code(info,"%s",come_value_587->c_value);
        come_call_finalizer3(come_value_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sIsHeap_finalize(struct sIsHeap* self){
char* __dec_obj247;
struct sType* __dec_obj248;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj247=self->sname;
            __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj248=self->type;
            come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sType* __dec_obj253;
struct sIsPointer* __result365__;
    ((struct sNodeBase*)(__right_value603=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value603,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj253=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result365__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __result_obj__=(void*)0;
void* __right_value605 = (void*)0;
char* __result366__;
    __result366__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value605=__builtin_string("sIsPointer")));
    __right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_588;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct CVALUE* come_value_589;
void* __right_value608 = (void*)0;
char* __dec_obj256;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sType* __dec_obj257;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct CVALUE* come_value_590;
void* __right_value613 = (void*)0;
char* __dec_obj258;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sType* __dec_obj259;
    node_588=self->type;
    if(    self->type->mPointerNum>0) {
        come_value_589=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1389, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj256=come_value_589->c_value;
        come_value_589->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj257=come_value_589->type;
        come_value_589->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1392, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_589->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_589));
        add_come_last_code(info,"%s",come_value_589->c_value);
        come_call_finalizer3(come_value_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_590=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1400, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj258=come_value_590->c_value;
        come_value_590->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj259=come_value_590->type;
        come_value_590->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1403, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_590->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_590));
        add_come_last_code(info,"%s",come_value_590->c_value);
        come_call_finalizer3(come_value_590,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sIsPointer_finalize(struct sIsPointer* self){
char* __dec_obj254;
struct sType* __dec_obj255;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj254=self->sname;
            __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj255=self->type;
            come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sNode* __dec_obj260;
struct sGCDecNoFreeNode* __result367__;
    ((struct sNodeBase*)(__right_value616=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value616,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj260=self->node;
    self->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node));
    if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
    __result367__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result367__;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
void* __right_value618 = (void*)0;
char* __result368__;
    __result368__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value618=__builtin_string("sGCDecNoFreeNode")));
    __right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node_591;
_Bool Value_592;
void* __right_value619 = (void*)0;
struct CVALUE* come_value_593;
struct sType* type_594;
_Bool __result369__;
    node_591=self->node;
    Value_592=node_compile(node_591,info);
    if(    !Value_592) {
        return (_Bool)0;
    }
    else {
    }
    come_value_593=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_594=come_value_593->type;
    decrement_ref_count_object(type_594,come_value_593->c_value,info,(_Bool)0,(_Bool)1);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_593));
    __result369__ = (_Bool)1;
    come_call_finalizer3(come_value_593,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result369__;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
char* __dec_obj261;
struct sNode* __dec_obj262;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj261=self->sname;
            __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj262=self->node;
            if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value620 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var20 = (void*)0;
struct sType* type_595=0;
char* name_596=0;
_Bool err_597=0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* __right_value636 = (void*)0;
struct sNode* obj_598;
void* __right_value637 = (void*)0;
char* fun_name_610;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sNode* __result378__;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_611;
void* __right_value642 = (void*)0;
char* word_612;
_Bool no_comma_613;
void* __right_value643 = (void*)0;
struct sNode* exp_614;
void* __right_value644 = (void*)0;
_Bool _if_conditional17;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sNode* value_node_615;
void* __right_value647 = (void*)0;
struct sNode* __dec_obj275;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct sNode* exp_616;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sNode* __result380__;
struct sNode* __result381__;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
void* __right_value655 = (void*)0;
struct sNode* __result382__;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* __right_value658 = (void*)0;
struct sNode* __result383__;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sNode* _inf_value6;
struct sTrueNode* _inf_obj_value6;
void* __right_value661 = (void*)0;
struct sNode* __result384__;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct sNode* _inf_value7;
struct sFalseNode* _inf_obj_value7;
void* __right_value664 = (void*)0;
struct sNode* __result385__;
void* __right_value665 = (void*)0;
struct sNode* node_617;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sNode* _inf_value8;
struct sDeleteNode* _inf_obj_value8;
void* __right_value671 = (void*)0;
struct sNode* __result388__;
void* __right_value672 = (void*)0;
struct sNode* node_620;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sNode* _inf_value9;
struct sBorrowNode* _inf_obj_value9;
void* __right_value678 = (void*)0;
struct sNode* __result391__;
void* __right_value679 = (void*)0;
struct sNode* node_623;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sNode* _inf_value10;
struct sCloneNode* _inf_obj_value10;
void* __right_value685 = (void*)0;
struct sNode* __result394__;
void* __right_value686 = (void*)0;
struct sNode* node_626;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sNode* _inf_value11;
struct sDupeNode* _inf_obj_value11;
void* __right_value692 = (void*)0;
struct sNode* __result397__;
void* __right_value693 = (void*)0;
struct sNode* node_629;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sNode* _inf_value12;
struct sDummyHeapNode* _inf_obj_value12;
void* __right_value699 = (void*)0;
struct sNode* __result400__;
void* __right_value700 = (void*)0;
struct sNode* node_632;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sNode* _inf_value13;
struct sGCIncNode* _inf_obj_value13;
void* __right_value706 = (void*)0;
struct sNode* __result403__;
void* __right_value707 = (void*)0;
struct sNode* node_635;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct sNode* _inf_value14;
struct sGCDecNode* _inf_obj_value14;
void* __right_value713 = (void*)0;
struct sNode* __result406__;
void* __right_value714 = (void*)0;
struct sNode* node_638;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sNode* _inf_value15;
struct sGCDecNoFreeNode* _inf_obj_value15;
void* __right_value720 = (void*)0;
struct sNode* __result409__;
void* __right_value721 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var21 = (void*)0;
struct sType* param_type_641=0;
char* param_name_642=0;
_Bool err_643=0;
void* __right_value722 = (void*)0;
struct sType* type2_644;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sNode* _inf_value16;
struct sIsHeap* _inf_obj_value16;
void* __right_value728 = (void*)0;
struct sNode* __result412__;
void* __right_value729 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var22 = (void*)0;
struct sType* param_type_647=0;
char* param_name_648=0;
_Bool err_649=0;
void* __right_value730 = (void*)0;
struct sType* type2_650;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sNode* _inf_value17;
struct sIsPointer* _inf_obj_value17;
void* __right_value736 = (void*)0;
struct sNode* __result415__;
void* __right_value737 = (void*)0;
struct sNode* __result416__;
void* __right_value738 = (void*)0;
struct sNode* __result417__;
void* __right_value739 = (void*)0;
struct sNode* __result418__;
void* __right_value740 = (void*)0;
struct sNode* __result419__;
_Bool come_c_653;
void* __right_value741 = (void*)0;
struct sNode* node_654;
struct sNode* __result420__;
void* __right_value742 = (void*)0;
struct sNode* __result421__;
void* __right_value743 = (void*)0;
struct sNode* __result422__;
void* __right_value744 = (void*)0;
struct sNode* __result423__;
void* __right_value745 = (void*)0;
struct sNode* __result424__;
void* __right_value746 = (void*)0;
struct sNode* __result425__;
_Bool paren_655;
_Bool is_type_name_flag_656;
char* p_657;
int sline_658;
void* __right_value747 = (void*)0;
char* word_659;
void* __right_value748 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var23 = (void*)0;
struct sType* type_660=0;
char* name_661=0;
_Bool err_662=0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct sNode* _inf_value18;
struct sSizeOfNode* _inf_obj_value18;
void* __right_value754 = (void*)0;
struct sNode* __result428__;
struct sNode* exp_665;
_Bool no_comma_666;
void* __right_value755 = (void*)0;
struct sNode* __dec_obj300;
void* __right_value756 = (void*)0;
struct sNode* __dec_obj301;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct sNode* _inf_value19;
struct sSizeOfExpNode* _inf_obj_value19;
void* __right_value762 = (void*)0;
struct sNode* __result431__;
_Bool paren_669;
_Bool is_type_name_flag_670;
char* p_671;
int sline_672;
void* __right_value763 = (void*)0;
char* word_673;
void* __right_value764 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var24 = (void*)0;
struct sType* type_674=0;
char* name_675=0;
_Bool err_676=0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct sNode* _inf_value20;
struct sTypeOfNode* _inf_obj_value20;
void* __right_value770 = (void*)0;
struct sNode* __result434__;
struct sNode* exp_679;
_Bool no_comma_680;
void* __right_value771 = (void*)0;
struct sNode* __dec_obj306;
void* __right_value772 = (void*)0;
struct sNode* __dec_obj307;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sNode* _inf_value21;
struct sTypeOfExpNode* _inf_obj_value21;
void* __right_value778 = (void*)0;
struct sNode* __result437__;
_Bool paren_683;
struct sNode* exp_684;
_Bool no_comma_685;
void* __right_value779 = (void*)0;
struct sNode* __dec_obj310;
void* __right_value780 = (void*)0;
struct sNode* __dec_obj311;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sNode* _inf_value22;
struct sDynamicTypeOf* _inf_obj_value22;
void* __right_value786 = (void*)0;
struct sNode* __result440__;
_Bool paren_688;
_Bool is_type_name_flag_689;
char* p_690;
int sline_691;
void* __right_value787 = (void*)0;
char* word_692;
void* __right_value788 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var25 = (void*)0;
struct sType* type_693=0;
char* name_694=0;
_Bool err_695=0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sNode* _inf_value23;
struct sAlignOfNode* _inf_obj_value23;
void* __right_value794 = (void*)0;
struct sNode* __result443__;
struct sNode* exp_698;
_Bool no_comma_699;
void* __right_value795 = (void*)0;
struct sNode* __dec_obj316;
void* __right_value796 = (void*)0;
struct sNode* __dec_obj317;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sNode* _inf_value24;
struct sAlignOfExpNode* _inf_obj_value24;
void* __right_value802 = (void*)0;
struct sNode* __result446__;
_Bool paren_702;
_Bool is_type_name_flag_703;
char* p_704;
int sline_705;
void* __right_value803 = (void*)0;
char* word_706;
void* __right_value804 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var26 = (void*)0;
struct sType* type_707=0;
char* name_708=0;
_Bool err_709=0;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct sNode* _inf_value25;
struct sAlignOfNode2* _inf_obj_value25;
void* __right_value810 = (void*)0;
struct sNode* __result449__;
struct sNode* exp_712;
_Bool no_comma_713;
void* __right_value811 = (void*)0;
struct sNode* __dec_obj322;
void* __right_value812 = (void*)0;
struct sNode* __dec_obj323;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct sNode* _inf_value26;
struct sAlignOfExpNode2* _inf_obj_value26;
void* __right_value818 = (void*)0;
struct sNode* __result452__;
_Bool is_type_name_flag_716;
char* p_717;
int sline_718;
void* __right_value819 = (void*)0;
char* word_719;
void* __right_value820 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var27 = (void*)0;
struct sType* type_720=0;
char* name_721=0;
_Bool err_722=0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct sNode* _inf_value27;
struct sAlignAsNode* _inf_obj_value27;
void* __right_value826 = (void*)0;
struct sNode* __result455__;
void* __right_value827 = (void*)0;
struct sNode* exp_725;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct sNode* _inf_value28;
struct sAlignAsExpNode* _inf_obj_value28;
void* __right_value833 = (void*)0;
struct sNode* __result458__;
void* __right_value834 = (void*)0;
struct sNode* __result459__;
exp_665 = (void*)0;
exp_679 = (void*)0;
exp_684 = (void*)0;
exp_698 = (void*)0;
exp_712 = (void*)0;
    if(    !gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var20=((struct tuple3$3sTypephcharphbool*)(__right_value620=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_595=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
        name_596=(char*)come_increment_ref_count(multiple_assign_var20->v2);
        err_597=multiple_assign_var20->v3;
        come_call_finalizer3(__right_value620,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_597) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(        *info->p==40) {
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1460, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value3=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value622=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1460, "struct sNewNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_595),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            obj_598=(struct sNode*)come_increment_ref_count(_inf_value3);
            come_call_finalizer3(__right_value622,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name_610=(char*)come_increment_ref_count(__builtin_string("initialize"));
            __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value639=parse_method_call_v20((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj_598)),(char*)come_increment_ref_count(fun_name_610),info)));
            if(obj_598) { obj_598 = come_decrement_ref_count2(obj_598, ((struct sNode*)obj_598)->finalize, ((struct sNode*)obj_598)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_610 = come_decrement_ref_count2(fun_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_595,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_596 = come_decrement_ref_count2(name_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value639) { __right_value639 = come_decrement_ref_count2(__right_value639, ((struct sNode*)__right_value639)->finalize, ((struct sNode*)__right_value639)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result378__;
            if(obj_598) { obj_598 = come_decrement_ref_count2(obj_598, ((struct sNode*)obj_598)->finalize, ((struct sNode*)obj_598)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_610 = come_decrement_ref_count2(fun_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer_611=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "21obj.c", 1469, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            while((_Bool)1) {
                word_612=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_613=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_614=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_613;
                    if(                    (_if_conditional17=(string_operator_equals(((char*)(__right_value644=exp_614->kind(exp_614->_protocol_obj))),"sWildCard"))),                    (__right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                    _if_conditional17) {
                        value_node_615=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value645=xsprintf("Value"))),info));
                        come_call_finalizer3(__right_value645,charp_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj275=exp_614;
                        exp_614=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_615),(char*)come_increment_ref_count(word_612),info));
                        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); };
                        if(value_node_615) { value_node_615 = come_decrement_ref_count2(value_node_615, ((struct sNode*)value_node_615)->finalize, ((struct sNode*)value_node_615)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    list$1tuple2$2charphsNodephphp_add(initializer_611,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1488, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(word_612),(struct sNode*)come_increment_ref_count(exp_614))));
                    if(exp_614) { exp_614 = come_decrement_ref_count2(exp_614, ((struct sNode*)exp_614)->finalize, ((struct sNode*)exp_614)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==44) {
                    exp_616=(struct sNode*)come_increment_ref_count(create_load_var(word_612,info));
                    list$1tuple2$2charphsNodephphp_add(initializer_611,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1493, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(word_612),(struct sNode*)come_increment_ref_count(exp_616))));
                    if(exp_616) { exp_616 = come_decrement_ref_count2(exp_616, ((struct sNode*)exp_616)->finalize, ((struct sNode*)exp_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"invalid character(21) %c\n",*info->p);
                    __result380__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    word_612 = come_decrement_ref_count2(word_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(initializer_611,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_595,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_596 = come_decrement_ref_count2(name_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result380__;
                }
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    word_612 = come_decrement_ref_count2(word_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",*info->p);
                    __result381__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    word_612 = come_decrement_ref_count2(word_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(initializer_611,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_595,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_596 = come_decrement_ref_count2(name_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result381__;
                }
                word_612 = come_decrement_ref_count2(word_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1514, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value4=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value654=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1514, "struct sNewNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_595),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_611),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sNewNode_finalize;
            _inf_value4->clone=(void*)sNewNode_clone;
            _inf_value4->compile=(void*)sNewNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sNewNode_kind;
            __result382__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value655=_inf_value4));
            come_call_finalizer3(initializer_611,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_595,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_596 = come_decrement_ref_count2(name_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value654,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value655) { __right_value655 = come_decrement_ref_count2(__right_value655, ((struct sNode*)__right_value655)->finalize, ((struct sNode*)__right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result382__;
            come_call_finalizer3(initializer_611,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1517, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value657=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1517, "struct sNewNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_595),((void*)0),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            __result383__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value658=_inf_value5));
            come_call_finalizer3(type_595,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_596 = come_decrement_ref_count2(name_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value657,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value658) { __right_value658 = come_decrement_ref_count2(__right_value658, ((struct sNode*)__right_value658)->finalize, ((struct sNode*)__right_value658)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result383__;
        }
        come_call_finalizer3(type_595,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_596 = come_decrement_ref_count2(name_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"true")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1521, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value660=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1521, "struct sTrueNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sTrueNode_finalize;
        _inf_value6->clone=(void*)sTrueNode_clone;
        _inf_value6->compile=(void*)sTrueNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sTrueNode_kind;
        __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value661=_inf_value6));
        come_call_finalizer3(__right_value660,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value661) { __right_value661 = come_decrement_ref_count2(__right_value661, ((struct sNode*)__right_value661)->finalize, ((struct sNode*)__right_value661)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"false")) {
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1524, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value663=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1524, "struct sFalseNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFalseNode_finalize;
        _inf_value7->clone=(void*)sFalseNode_clone;
        _inf_value7->compile=(void*)sFalseNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sFalseNode_kind;
        __result385__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value664=_inf_value7));
        come_call_finalizer3(__right_value663,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value664) { __right_value664 = come_decrement_ref_count2(__right_value664, ((struct sNode*)__right_value664)->finalize, ((struct sNode*)__right_value664)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"delete")) {
        node_617=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1529, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value8=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value667=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1529, "struct sDeleteNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_617),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sDeleteNode_finalize;
        _inf_value8->clone=(void*)sDeleteNode_clone;
        _inf_value8->compile=(void*)sDeleteNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sDeleteNode_kind;
        __result388__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value671=_inf_value8));
        if(node_617) { node_617 = come_decrement_ref_count2(node_617, ((struct sNode*)node_617)->finalize, ((struct sNode*)node_617)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value667,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value671) { __right_value671 = come_decrement_ref_count2(__right_value671, ((struct sNode*)__right_value671)->finalize, ((struct sNode*)__right_value671)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result388__;
        if(node_617) { node_617 = come_decrement_ref_count2(node_617, ((struct sNode*)node_617)->finalize, ((struct sNode*)node_617)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"borrow")) {
        node_620=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1534, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value674=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1534, "struct sBorrowNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_620),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sBorrowNode_finalize;
        _inf_value9->clone=(void*)sBorrowNode_clone;
        _inf_value9->compile=(void*)sBorrowNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sBorrowNode_kind;
        __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value678=_inf_value9));
        if(node_620) { node_620 = come_decrement_ref_count2(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value674,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value678) { __right_value678 = come_decrement_ref_count2(__right_value678, ((struct sNode*)__right_value678)->finalize, ((struct sNode*)__right_value678)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result391__;
        if(node_620) { node_620 = come_decrement_ref_count2(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"clone")) {
        node_623=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1539, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value10=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value681=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1539, "struct sCloneNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_623),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sCloneNode_finalize;
        _inf_value10->clone=(void*)sCloneNode_clone;
        _inf_value10->compile=(void*)sCloneNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sCloneNode_kind;
        __result394__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value685=_inf_value10));
        if(node_623) { node_623 = come_decrement_ref_count2(node_623, ((struct sNode*)node_623)->finalize, ((struct sNode*)node_623)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value681,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value685) { __right_value685 = come_decrement_ref_count2(__right_value685, ((struct sNode*)__right_value685)->finalize, ((struct sNode*)__right_value685)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result394__;
        if(node_623) { node_623 = come_decrement_ref_count2(node_623, ((struct sNode*)node_623)->finalize, ((struct sNode*)node_623)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dupe")) {
        node_626=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1544, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value11=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value688=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1544, "struct sDupeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_626),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDupeNode_finalize;
        _inf_value11->clone=(void*)sDupeNode_clone;
        _inf_value11->compile=(void*)sDupeNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDupeNode_kind;
        __result397__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value692=_inf_value11));
        if(node_626) { node_626 = come_decrement_ref_count2(node_626, ((struct sNode*)node_626)->finalize, ((struct sNode*)node_626)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value688,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value692) { __right_value692 = come_decrement_ref_count2(__right_value692, ((struct sNode*)__right_value692)->finalize, ((struct sNode*)__right_value692)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result397__;
        if(node_626) { node_626 = come_decrement_ref_count2(node_626, ((struct sNode*)node_626)->finalize, ((struct sNode*)node_626)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dummy_heap")) {
        node_629=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1549, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value695=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1549, "struct sDummyHeapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_629),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value12->clone=(void*)sDummyHeapNode_clone;
        _inf_value12->compile=(void*)sDummyHeapNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDummyHeapNode_kind;
        __result400__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value699=_inf_value12));
        if(node_629) { node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value695,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value699) { __right_value699 = come_decrement_ref_count2(__right_value699, ((struct sNode*)__right_value699)->finalize, ((struct sNode*)__right_value699)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result400__;
        if(node_629) { node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_632=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1559, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value13=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value702=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1559, "struct sGCIncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_632),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sGCIncNode_finalize;
        _inf_value13->clone=(void*)sGCIncNode_clone;
        _inf_value13->compile=(void*)sGCIncNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sGCIncNode_kind;
        __result403__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value706=_inf_value13));
        if(node_632) { node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value702,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value706) { __right_value706 = come_decrement_ref_count2(__right_value706, ((struct sNode*)__right_value706)->finalize, ((struct sNode*)__right_value706)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result403__;
        if(node_632) { node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_635=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1569, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value14=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value709=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1569, "struct sGCDecNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_635),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sGCDecNode_finalize;
        _inf_value14->clone=(void*)sGCDecNode_clone;
        _inf_value14->compile=(void*)sGCDecNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sGCDecNode_kind;
        __result406__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value713=_inf_value14));
        if(node_635) { node_635 = come_decrement_ref_count2(node_635, ((struct sNode*)node_635)->finalize, ((struct sNode*)node_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value709,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value713) { __right_value713 = come_decrement_ref_count2(__right_value713, ((struct sNode*)__right_value713)->finalize, ((struct sNode*)__right_value713)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result406__;
        if(node_635) { node_635 = come_decrement_ref_count2(node_635, ((struct sNode*)node_635)->finalize, ((struct sNode*)node_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_638=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1579, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value15=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value716=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1579, "struct sGCDecNoFreeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_638),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value15->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value15->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sGCDecNoFreeNode_kind;
        __result409__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value720=_inf_value15));
        if(node_638) { node_638 = come_decrement_ref_count2(node_638, ((struct sNode*)node_638)->finalize, ((struct sNode*)node_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value716,sGCDecNoFreeNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value720) { __right_value720 = come_decrement_ref_count2(__right_value720, ((struct sNode*)__right_value720)->finalize, ((struct sNode*)__right_value720)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result409__;
        if(node_638) { node_638 = come_decrement_ref_count2(node_638, ((struct sNode*)node_638)->finalize, ((struct sNode*)node_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !gComeC&&charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var21=((struct tuple3$3sTypephcharphbool*)(__right_value721=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_641=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
        param_name_642=(char*)come_increment_ref_count(multiple_assign_var21->v2);
        err_643=multiple_assign_var21->v3;
        come_call_finalizer3(__right_value721,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_643) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_644=(struct sType*)come_increment_ref_count(solve_generics(param_type_641,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1595, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value16=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value724=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1595, "struct sIsHeap*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_644),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sIsHeap_finalize;
        _inf_value16->clone=(void*)sIsHeap_clone;
        _inf_value16->compile=(void*)sIsHeap_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sIsHeap_kind;
        __result412__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value728=_inf_value16));
        come_call_finalizer3(param_type_641,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_642 = come_decrement_ref_count2(param_name_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_644,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value724,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value728) { __right_value728 = come_decrement_ref_count2(__right_value728, ((struct sNode*)__right_value728)->finalize, ((struct sNode*)__right_value728)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result412__;
        come_call_finalizer3(param_type_641,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_642 = come_decrement_ref_count2(param_name_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_644,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"ispointer")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var22=((struct tuple3$3sTypephcharphbool*)(__right_value729=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_647=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
        param_name_648=(char*)come_increment_ref_count(multiple_assign_var22->v2);
        err_649=multiple_assign_var22->v3;
        come_call_finalizer3(__right_value729,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_649) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_650=(struct sType*)come_increment_ref_count(solve_generics(param_type_647,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1611, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value17=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value732=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1611, "struct sIsPointer*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type2_650),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sIsPointer_finalize;
        _inf_value17->clone=(void*)sIsPointer_clone;
        _inf_value17->compile=(void*)sIsPointer_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sIsPointer_kind;
        __result415__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value736=_inf_value17));
        come_call_finalizer3(param_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_648 = come_decrement_ref_count2(param_name_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_650,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value732,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value736) { __right_value736 = come_decrement_ref_count2(__right_value736, ((struct sNode*)__right_value736)->finalize, ((struct sNode*)__right_value736)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result415__;
        come_call_finalizer3(param_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
        param_name_648 = come_decrement_ref_count2(param_name_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_650,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __result416__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value737=create_nothing_node(info)));
            if(__right_value737) { __right_value737 = come_decrement_ref_count2(__right_value737, ((struct sNode*)__right_value737)->finalize, ((struct sNode*)__right_value737)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result416__;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result417__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value738=create_nothing_node(info)));
            if(__right_value738) { __right_value738 = come_decrement_ref_count2(__right_value738, ((struct sNode*)__right_value738)->finalize, ((struct sNode*)__right_value738)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result417__;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result418__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value739=create_nothing_node(info)));
            if(__right_value739) { __right_value739 = come_decrement_ref_count2(__right_value739, ((struct sNode*)__right_value739)->finalize, ((struct sNode*)__right_value739)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result418__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result419__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value740=create_nothing_node(info)));
            if(__right_value740) { __right_value740 = come_decrement_ref_count2(__right_value740, ((struct sNode*)__right_value740)->finalize, ((struct sNode*)__right_value740)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result419__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c_653=gComeC;
            gComeC=(_Bool)1;
            if(            *info->p==123) {
                node_654=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info));
                gComeC=come_c_653;
                __result420__ = gComeFunResultObject = __result_obj__ = node_654;
                if(node_654) { node_654 = come_decrement_ref_count2(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0, 1, 0, (void*)0); } 
                gComeFunResultObject = (void*)0;
                return __result420__;
                if(node_654) { node_654 = come_decrement_ref_count2(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                __result421__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value742=create_nothing_node(info)));
                if(__right_value742) { __right_value742 = come_decrement_ref_count2(__right_value742, ((struct sNode*)__right_value742)->finalize, ((struct sNode*)__right_value742)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result421__;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            __result422__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value743=create_nothing_node(info)));
            if(__right_value743) { __right_value743 = come_decrement_ref_count2(__right_value743, ((struct sNode*)__right_value743)->finalize, ((struct sNode*)__right_value743)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result422__;
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            __result423__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value744=create_nothing_node(info)));
            if(__right_value744) { __right_value744 = come_decrement_ref_count2(__right_value744, ((struct sNode*)__right_value744)->finalize, ((struct sNode*)__right_value744)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result423__;
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            __result424__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value745=create_nothing_node(info)));
            if(__right_value745) { __right_value745 = come_decrement_ref_count2(__right_value745, ((struct sNode*)__right_value745)->finalize, ((struct sNode*)__right_value745)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result424__;
        }
        else if(        parsecmp("no-null-check",info)) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
            __result425__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value746=create_nothing_node(info)));
            if(__right_value746) { __right_value746 = come_decrement_ref_count2(__right_value746, ((struct sNode*)__right_value746)->finalize, ((struct sNode*)__right_value746)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result425__;
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(    charp_operator_equals(buf,"sizeof")) {
        paren_655=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_655=(_Bool)1;
        }
        is_type_name_flag_656=(_Bool)0;
        {
            p_657=info->p;
            sline_658=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_659=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_659,info)) {
                    is_type_name_flag_656=(_Bool)1;
                }
                word_659 = come_decrement_ref_count2(word_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_657;
            info->sline=sline_658;
        }
        if(        is_type_name_flag_656) {
            multiple_assign_var23=((struct tuple3$3sTypephcharphbool*)(__right_value748=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_660=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
            name_661=(char*)come_increment_ref_count(multiple_assign_var23->v2);
            err_662=multiple_assign_var23->v3;
            come_call_finalizer3(__right_value748,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_662) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_655&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1735, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value18=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value750=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1735, "struct sSizeOfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_660),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sSizeOfNode_finalize;
            _inf_value18->clone=(void*)sSizeOfNode_clone;
            _inf_value18->compile=(void*)sSizeOfNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sSizeOfNode_kind;
            __result428__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value754=_inf_value18));
            come_call_finalizer3(type_660,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_661 = come_decrement_ref_count2(name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value750,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value754) { __right_value754 = come_decrement_ref_count2(__right_value754, ((struct sNode*)__right_value754)->finalize, ((struct sNode*)__right_value754)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result428__;
            come_call_finalizer3(type_660,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_661 = come_decrement_ref_count2(name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_655) {
                no_comma_666=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj300=exp_665;
                exp_665=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_666;
            }
            else {
                __dec_obj301=exp_665;
                exp_665=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
            }
            if(            paren_655&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1756, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value19=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value758=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1756, "struct sSizeOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_665),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value19->clone=(void*)sSizeOfExpNode_clone;
            _inf_value19->compile=(void*)sSizeOfExpNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sSizeOfExpNode_kind;
            __result431__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value762=_inf_value19));
            if(exp_665) { exp_665 = come_decrement_ref_count2(exp_665, ((struct sNode*)exp_665)->finalize, ((struct sNode*)exp_665)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value758,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value762) { __right_value762 = come_decrement_ref_count2(__right_value762, ((struct sNode*)__right_value762)->finalize, ((struct sNode*)__right_value762)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result431__;
            if(exp_665) { exp_665 = come_decrement_ref_count2(exp_665, ((struct sNode*)exp_665)->finalize, ((struct sNode*)exp_665)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"typeof")) {
        paren_669=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_669=(_Bool)1;
        }
        is_type_name_flag_670=(_Bool)0;
        {
            p_671=info->p;
            sline_672=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_673=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_673,info)) {
                    is_type_name_flag_670=(_Bool)1;
                }
                word_673 = come_decrement_ref_count2(word_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_671;
            info->sline=sline_672;
        }
        if(        is_type_name_flag_670) {
            multiple_assign_var24=((struct tuple3$3sTypephcharphbool*)(__right_value764=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_674=(struct sType*)come_increment_ref_count(multiple_assign_var24->v1);
            name_675=(char*)come_increment_ref_count(multiple_assign_var24->v2);
            err_676=multiple_assign_var24->v3;
            come_call_finalizer3(__right_value764,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_676) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_669&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1801, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value20=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(__right_value766=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1801, "struct sTypeOfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_674),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sTypeOfNode_finalize;
            _inf_value20->clone=(void*)sTypeOfNode_clone;
            _inf_value20->compile=(void*)sTypeOfNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sTypeOfNode_kind;
            __result434__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value770=_inf_value20));
            come_call_finalizer3(type_674,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_675 = come_decrement_ref_count2(name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value766,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value770) { __right_value770 = come_decrement_ref_count2(__right_value770, ((struct sNode*)__right_value770)->finalize, ((struct sNode*)__right_value770)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result434__;
            come_call_finalizer3(type_674,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_675 = come_decrement_ref_count2(name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_669) {
                no_comma_680=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj306=exp_679;
                exp_679=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_680;
            }
            else {
                __dec_obj307=exp_679;
                exp_679=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
            }
            if(            paren_669&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1822, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value21=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value774=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1822, "struct sTypeOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_679),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sTypeOfExpNode_finalize;
            _inf_value21->clone=(void*)sTypeOfExpNode_clone;
            _inf_value21->compile=(void*)sTypeOfExpNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sTypeOfExpNode_kind;
            __result437__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value778=_inf_value21));
            if(exp_679) { exp_679 = come_decrement_ref_count2(exp_679, ((struct sNode*)exp_679)->finalize, ((struct sNode*)exp_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value774,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value778) { __right_value778 = come_decrement_ref_count2(__right_value778, ((struct sNode*)__right_value778)->finalize, ((struct sNode*)__right_value778)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result437__;
            if(exp_679) { exp_679 = come_decrement_ref_count2(exp_679, ((struct sNode*)exp_679)->finalize, ((struct sNode*)exp_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"dynamic_typeof")) {
        paren_683=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_683=(_Bool)1;
        }
        if(        !paren_683) {
            no_comma_685=info->no_comma;
            info->no_comma=(_Bool)1;
            __dec_obj310=exp_684;
            exp_684=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_685;
        }
        else {
            __dec_obj311=exp_684;
            exp_684=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
        }
        if(        paren_683&&*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1853, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value22=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value782=sDynamicTypeOf_initialize((struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc(1, sizeof(struct sDynamicTypeOf)*(1), "21obj.c", 1853, "struct sDynamicTypeOf*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_684),info))));
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value22->clone=(void*)sDynamicTypeOf_clone;
        _inf_value22->compile=(void*)sDynamicTypeOf_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sDynamicTypeOf_kind;
        __result440__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value786=_inf_value22));
        if(exp_684) { exp_684 = come_decrement_ref_count2(exp_684, ((struct sNode*)exp_684)->finalize, ((struct sNode*)exp_684)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value782,sDynamicTypeOf_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value786) { __right_value786 = come_decrement_ref_count2(__right_value786, ((struct sNode*)__right_value786)->finalize, ((struct sNode*)__right_value786)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result440__;
        if(exp_684) { exp_684 = come_decrement_ref_count2(exp_684, ((struct sNode*)exp_684)->finalize, ((struct sNode*)exp_684)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"_Alignof")) {
        paren_688=(_Bool)0;
        if(        *info->p==40) {
            paren_688=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_689=(_Bool)0;
        {
            p_690=info->p;
            sline_691=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_692=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_692,info)) {
                    is_type_name_flag_689=(_Bool)1;
                }
                word_692 = come_decrement_ref_count2(word_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_690;
            info->sline=sline_691;
        }
        if(        is_type_name_flag_689) {
            multiple_assign_var25=((struct tuple3$3sTypephcharphbool*)(__right_value788=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_693=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
            name_694=(char*)come_increment_ref_count(multiple_assign_var25->v2);
            err_695=multiple_assign_var25->v3;
            come_call_finalizer3(__right_value788,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_695) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            if(            paren_688&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1894, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value23=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value790=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1894, "struct sAlignOfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_693),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sAlignOfNode_finalize;
            _inf_value23->clone=(void*)sAlignOfNode_clone;
            _inf_value23->compile=(void*)sAlignOfNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sAlignOfNode_kind;
            __result443__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value794=_inf_value23));
            come_call_finalizer3(type_693,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_694 = come_decrement_ref_count2(name_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value790,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value794) { __right_value794 = come_decrement_ref_count2(__right_value794, ((struct sNode*)__right_value794)->finalize, ((struct sNode*)__right_value794)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result443__;
            come_call_finalizer3(type_693,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_694 = come_decrement_ref_count2(name_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_688) {
                no_comma_699=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj316=exp_698;
                exp_698=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_699;
            }
            else {
                __dec_obj317=exp_698;
                exp_698=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
            }
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1908, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value24=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value798=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1908, "struct sAlignOfExpNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_698),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value24->clone=(void*)sAlignOfExpNode_clone;
            _inf_value24->compile=(void*)sAlignOfExpNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sAlignOfExpNode_kind;
            __result446__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value802=_inf_value24));
            if(exp_698) { exp_698 = come_decrement_ref_count2(exp_698, ((struct sNode*)exp_698)->finalize, ((struct sNode*)exp_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value798,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value802) { __right_value802 = come_decrement_ref_count2(__right_value802, ((struct sNode*)__right_value802)->finalize, ((struct sNode*)__right_value802)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result446__;
            if(exp_698) { exp_698 = come_decrement_ref_count2(exp_698, ((struct sNode*)exp_698)->finalize, ((struct sNode*)exp_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"__alignof__")) {
        paren_702=(_Bool)0;
        if(        *info->p==40) {
            paren_702=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_703=(_Bool)0;
        {
            p_704=info->p;
            sline_705=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_706=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_706,info)) {
                    is_type_name_flag_703=(_Bool)1;
                }
                word_706 = come_decrement_ref_count2(word_706, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_704;
            info->sline=sline_705;
        }
        if(        is_type_name_flag_703) {
            multiple_assign_var26=((struct tuple3$3sTypephcharphbool*)(__right_value804=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_707=(struct sType*)come_increment_ref_count(multiple_assign_var26->v1);
            name_708=(char*)come_increment_ref_count(multiple_assign_var26->v2);
            err_709=multiple_assign_var26->v3;
            come_call_finalizer3(__right_value804,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_709) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_702&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1949, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value25=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value806=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1949, "struct sAlignOfNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_707),info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value25->clone=(void*)sAlignOfNode2_clone;
            _inf_value25->compile=(void*)sAlignOfNode2_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sAlignOfNode2_kind;
            __result449__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value810=_inf_value25));
            come_call_finalizer3(type_707,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_708 = come_decrement_ref_count2(name_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value806,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value810) { __right_value810 = come_decrement_ref_count2(__right_value810, ((struct sNode*)__right_value810)->finalize, ((struct sNode*)__right_value810)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result449__;
            come_call_finalizer3(type_707,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_708 = come_decrement_ref_count2(name_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_702) {
                no_comma_713=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj322=exp_712;
                exp_712=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_713;
            }
            else {
                __dec_obj323=exp_712;
                exp_712=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj323) { __dec_obj323 = come_decrement_ref_count2(__dec_obj323, ((struct sNode*)__dec_obj323)->finalize, ((struct sNode*)__dec_obj323)->_protocol_obj, 0,0,0, (void*)0); };
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1963, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value26=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value814=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1963, "struct sAlignOfExpNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_712),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value26->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value26->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfExpNode2_kind;
            __result452__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value818=_inf_value26));
            if(exp_712) { exp_712 = come_decrement_ref_count2(exp_712, ((struct sNode*)exp_712)->finalize, ((struct sNode*)exp_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value814,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value818) { __right_value818 = come_decrement_ref_count2(__right_value818, ((struct sNode*)__right_value818)->finalize, ((struct sNode*)__right_value818)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result452__;
            if(exp_712) { exp_712 = come_decrement_ref_count2(exp_712, ((struct sNode*)exp_712)->finalize, ((struct sNode*)exp_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"_Alignas")) {
        expected_next_character(40,info);
        is_type_name_flag_716=(_Bool)0;
        {
            p_717=info->p;
            sline_718=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_719=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_719,info)) {
                    is_type_name_flag_716=(_Bool)1;
                }
                word_719 = come_decrement_ref_count2(word_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_717;
            info->sline=sline_718;
        }
        if(        is_type_name_flag_716) {
            multiple_assign_var27=((struct tuple3$3sTypephcharphbool*)(__right_value820=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_720=(struct sType*)come_increment_ref_count(multiple_assign_var27->v1);
            name_721=(char*)come_increment_ref_count(multiple_assign_var27->v2);
            err_722=multiple_assign_var27->v3;
            come_call_finalizer3(__right_value820,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_722) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1996, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value27=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(__right_value822=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1996, "struct sAlignAsNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_720),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignAsNode_finalize;
            _inf_value27->clone=(void*)sAlignAsNode_clone;
            _inf_value27->compile=(void*)sAlignAsNode_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignAsNode_kind;
            __result455__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value826=_inf_value27));
            come_call_finalizer3(type_720,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_721 = come_decrement_ref_count2(name_721, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value822,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value826) { __right_value826 = come_decrement_ref_count2(__right_value826, ((struct sNode*)__right_value826)->finalize, ((struct sNode*)__right_value826)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result455__;
            come_call_finalizer3(type_720,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_721 = come_decrement_ref_count2(name_721, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            exp_725=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2003, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value28=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value829=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 2003, "struct sAlignAsExpNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_725),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignAsExpNode_finalize;
            _inf_value28->clone=(void*)sAlignAsExpNode_clone;
            _inf_value28->compile=(void*)sAlignAsExpNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignAsExpNode_kind;
            __result458__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value833=_inf_value28));
            if(exp_725) { exp_725 = come_decrement_ref_count2(exp_725, ((struct sNode*)exp_725)->finalize, ((struct sNode*)exp_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value829,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value833) { __right_value833 = come_decrement_ref_count2(__right_value833, ((struct sNode*)__right_value833)->finalize, ((struct sNode*)__right_value833)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result458__;
            if(exp_725) { exp_725 = come_decrement_ref_count2(exp_725, ((struct sNode*)exp_725)->finalize, ((struct sNode*)exp_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result459__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value834=string_node_v20(buf,head,head_sline,info)));
    if(__right_value834) { __right_value834 = come_decrement_ref_count2(__right_value834, ((struct sNode*)__right_value834)->finalize, ((struct sNode*)__right_value834)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result459__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj263;
char* __dec_obj264;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj263=self->v1;
            come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj264=self->v2;
            __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__=(void*)0;
struct sNewNode* __result370__;
void* __right_value623 = (void*)0;
struct sNewNode* result_602;
void* __right_value624 = (void*)0;
char* __dec_obj265;
void* __right_value625 = (void*)0;
struct sType* __dec_obj266;
void* __right_value635 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj274;
struct sNewNode* __result377__;
    if(    self==(void*)0) {
        __result370__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_602=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode", sNewNode_finalize, sNewNode_clone, sNewNode_get_hash_key, sNewNode_equals));
    if(    self!=((void*)0)) {
        result_602->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj265=result_602->sname;
        result_602->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_602->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj266=result_602->type;
        result_602->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj274=result_602->initializer;
        result_602->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->initializer));
        come_call_finalizer3(__dec_obj274,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result377__ = gComeFunResultObject = __result_obj__ = result_602;
    come_call_finalizer3(result_602,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static unsigned int sNewNode_get_hash_key(struct sNewNode* self){
unsigned int result_599;
    result_599=0;
    result_599+=int_get_hash_key(((int)self->sline));
    result_599+=int_get_hash_key(((int)self->sname));
    result_599+=int_get_hash_key(((int)self->sline_real));
    result_599+=int_get_hash_key(((int)self->type));
    result_599+=int_get_hash_key(((int)self->initializer));
    return result_599;
}

static _Bool sNewNode_equals(struct sNewNode* left, struct sNewNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2charphsNodephphp_equals(left->initializer,right->initializer)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsNodephphp_equals(struct list$1tuple2$2charphsNodephph* left, struct list$1tuple2$2charphsNodephph* right){
struct list_item$1tuple2$2charphsNodephph* it_600;
struct list_item$1tuple2$2charphsNodephph* it2_601;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_600=left->head;
    it2_601=right->head;
    while(it_600!=((void*)0)) {
        if(        !tuple2$2charphsNodephp_equals(it_600->item,it2_601->item)) {
            return (_Bool)0;
        }
        it_600=it_600->next;
        it2_601=it2_601->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsNodephp_equals(struct tuple2$2charphsNodeph* self, struct tuple2$2charphsNodeph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result371__;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_603;
struct list_item$1tuple2$2charphsNodephph* it_604;
void* __right_value634 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result376__;
    if(    self==((void*)0)) {
        __result371__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_603=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1321, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_604=self->head;
    while(it_604!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_603,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_604->item)));
        it_604=it_604->next;
    }
    __result376__ = gComeFunResultObject = __result_obj__ = result_603;
    come_call_finalizer3(result_603,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result372__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result372__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value628 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_605;
struct tuple2$2charphsNodeph* __dec_obj267;
void* __right_value629 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_606;
struct tuple2$2charphsNodeph* __dec_obj268;
void* __right_value630 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_607;
struct tuple2$2charphsNodeph* __dec_obj269;
struct list$1tuple2$2charphsNodephph* __result373__;
    if(    self->len==0) {
        litem_605=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value628=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1335, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_605->prev=((void*)0);
        litem_605->next=((void*)0);
        __dec_obj267=litem_605->item;
        litem_605->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj267,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_605;
        self->head=litem_605;
    }
    else if(    self->len==1) {
        litem_606=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value629=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1345, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_606->prev=self->head;
        litem_606->next=((void*)0);
        __dec_obj268=litem_606->item;
        litem_606->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj268,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_606;
        self->head->next=litem_606;
    }
    else {
        litem_607=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value630=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1355, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_607->prev=self->tail;
        litem_607->next=((void*)0);
        __dec_obj269=litem_607->item;
        litem_607->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj269,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_607;
        self->tail=litem_607;
    }
    self->len++;
    __result373__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result374__;
void* __right_value631 = (void*)0;
struct tuple2$2charphsNodeph* result_609;
void* __right_value632 = (void*)0;
char* __dec_obj272;
void* __right_value633 = (void*)0;
struct sNode* __dec_obj273;
struct tuple2$2charphsNodeph* __result375__;
    if(    self==(void*)0) {
        __result374__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    result_609=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj272=result_609->v1;
        result_609->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj273=result_609->v2;
        result_609->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result375__ = gComeFunResultObject = __result_obj__ = result_609;
    come_call_finalizer3(result_609,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj270;
struct sNode* __dec_obj271;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj270=self->v1;
            __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj271=self->v2;
            if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_608;
    result_608=0;
    result_608+=int_get_hash_key(((int)self->v1));
    result_608+=int_get_hash_key(((int)self->v2));
    return result_608;
}

static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj276;
struct sNode* __dec_obj277;
struct tuple2$2charphsNodeph* __result379__;
    __dec_obj276=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj277=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count2(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0,0, (void*)0); };
    __result379__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
struct sDeleteNode* __result386__;
void* __right_value668 = (void*)0;
struct sDeleteNode* result_619;
void* __right_value669 = (void*)0;
char* __dec_obj278;
void* __right_value670 = (void*)0;
struct sNode* __dec_obj279;
struct sDeleteNode* __result387__;
    if(    self==(void*)0) {
        __result386__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    result_619=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode", sDeleteNode_finalize, sDeleteNode_clone, sDeleteNode_get_hash_key, sDeleteNode_equals));
    if(    self!=((void*)0)) {
        result_619->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj278=result_619->sname;
        result_619->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_619->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj279=result_619->node;
        result_619->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result387__ = gComeFunResultObject = __result_obj__ = result_619;
    come_call_finalizer3(result_619,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static unsigned int sDeleteNode_get_hash_key(struct sDeleteNode* self){
unsigned int result_618;
    result_618=0;
    result_618+=int_get_hash_key(((int)self->sline));
    result_618+=int_get_hash_key(((int)self->sname));
    result_618+=int_get_hash_key(((int)self->sline_real));
    result_618+=int_get_hash_key(((int)self->node));
    return result_618;
}

static _Bool sDeleteNode_equals(struct sDeleteNode* left, struct sDeleteNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->node,right->node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
struct sBorrowNode* __result389__;
void* __right_value675 = (void*)0;
struct sBorrowNode* result_622;
void* __right_value676 = (void*)0;
char* __dec_obj280;
void* __right_value677 = (void*)0;
struct sNode* __dec_obj281;
struct sBorrowNode* __result390__;
    if(    self==(void*)0) {
        __result389__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result389__;
    }
    result_622=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode", sBorrowNode_finalize, sBorrowNode_clone, sBorrowNode_get_hash_key, sBorrowNode_equals));
    if(    self!=((void*)0)) {
        result_622->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj280=result_622->sname;
        result_622->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_622->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj281=result_622->node;
        result_622->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result390__ = gComeFunResultObject = __result_obj__ = result_622;
    come_call_finalizer3(result_622,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static unsigned int sBorrowNode_get_hash_key(struct sBorrowNode* self){
unsigned int result_621;
    result_621=0;
    result_621+=int_get_hash_key(((int)self->sline));
    result_621+=int_get_hash_key(((int)self->sname));
    result_621+=int_get_hash_key(((int)self->sline_real));
    result_621+=int_get_hash_key(((int)self->node));
    return result_621;
}

static _Bool sBorrowNode_equals(struct sBorrowNode* left, struct sBorrowNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->node,right->node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__=(void*)0;
struct sCloneNode* __result392__;
void* __right_value682 = (void*)0;
struct sCloneNode* result_625;
void* __right_value683 = (void*)0;
char* __dec_obj282;
void* __right_value684 = (void*)0;
struct sNode* __dec_obj283;
struct sCloneNode* __result393__;
    if(    self==(void*)0) {
        __result392__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result392__;
    }
    result_625=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode", sCloneNode_finalize, sCloneNode_clone, sCloneNode_get_hash_key, sCloneNode_equals));
    if(    self!=((void*)0)) {
        result_625->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj282=result_625->sname;
        result_625->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_625->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj283=result_625->node;
        result_625->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result393__ = gComeFunResultObject = __result_obj__ = result_625;
    come_call_finalizer3(result_625,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

static unsigned int sCloneNode_get_hash_key(struct sCloneNode* self){
unsigned int result_624;
    result_624=0;
    result_624+=int_get_hash_key(((int)self->sline));
    result_624+=int_get_hash_key(((int)self->sname));
    result_624+=int_get_hash_key(((int)self->sline_real));
    result_624+=int_get_hash_key(((int)self->node));
    return result_624;
}

static _Bool sCloneNode_equals(struct sCloneNode* left, struct sCloneNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->node,right->node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__=(void*)0;
struct sDupeNode* __result395__;
void* __right_value689 = (void*)0;
struct sDupeNode* result_628;
void* __right_value690 = (void*)0;
char* __dec_obj284;
void* __right_value691 = (void*)0;
struct sNode* __dec_obj285;
struct sDupeNode* __result396__;
    if(    self==(void*)0) {
        __result395__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result395__;
    }
    result_628=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode", sDupeNode_finalize, sDupeNode_clone, sDupeNode_get_hash_key, sDupeNode_equals));
    if(    self!=((void*)0)) {
        result_628->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj284=result_628->sname;
        result_628->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_628->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj285=result_628->node;
        result_628->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result396__ = gComeFunResultObject = __result_obj__ = result_628;
    come_call_finalizer3(result_628,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result396__;
}

static unsigned int sDupeNode_get_hash_key(struct sDupeNode* self){
unsigned int result_627;
    result_627=0;
    result_627+=int_get_hash_key(((int)self->sline));
    result_627+=int_get_hash_key(((int)self->sname));
    result_627+=int_get_hash_key(((int)self->sline_real));
    result_627+=int_get_hash_key(((int)self->node));
    return result_627;
}

static _Bool sDupeNode_equals(struct sDupeNode* left, struct sDupeNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->node,right->node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
struct sDummyHeapNode* __result398__;
void* __right_value696 = (void*)0;
struct sDummyHeapNode* result_631;
void* __right_value697 = (void*)0;
char* __dec_obj286;
void* __right_value698 = (void*)0;
struct sNode* __dec_obj287;
struct sDummyHeapNode* __result399__;
    if(    self==(void*)0) {
        __result398__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result398__;
    }
    result_631=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode", sDummyHeapNode_finalize, sDummyHeapNode_clone, sDummyHeapNode_get_hash_key, sDummyHeapNode_equals));
    if(    self!=((void*)0)) {
        result_631->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj286=result_631->sname;
        result_631->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_631->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj287=result_631->node;
        result_631->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result399__ = gComeFunResultObject = __result_obj__ = result_631;
    come_call_finalizer3(result_631,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result399__;
}

static unsigned int sDummyHeapNode_get_hash_key(struct sDummyHeapNode* self){
unsigned int result_630;
    result_630=0;
    result_630+=int_get_hash_key(((int)self->sline));
    result_630+=int_get_hash_key(((int)self->sname));
    result_630+=int_get_hash_key(((int)self->sline_real));
    result_630+=int_get_hash_key(((int)self->node));
    return result_630;
}

static _Bool sDummyHeapNode_equals(struct sDummyHeapNode* left, struct sDummyHeapNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->node,right->node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
struct sGCIncNode* __result401__;
void* __right_value703 = (void*)0;
struct sGCIncNode* result_634;
void* __right_value704 = (void*)0;
char* __dec_obj288;
void* __right_value705 = (void*)0;
struct sNode* __dec_obj289;
struct sGCIncNode* __result402__;
    if(    self==(void*)0) {
        __result401__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result401__;
    }
    result_634=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode", sGCIncNode_finalize, sGCIncNode_clone, sGCIncNode_get_hash_key, sGCIncNode_equals));
    if(    self!=((void*)0)) {
        result_634->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj288=result_634->sname;
        result_634->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_634->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj289=result_634->node;
        result_634->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result402__ = gComeFunResultObject = __result_obj__ = result_634;
    come_call_finalizer3(result_634,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

static unsigned int sGCIncNode_get_hash_key(struct sGCIncNode* self){
unsigned int result_633;
    result_633=0;
    result_633+=int_get_hash_key(((int)self->sline));
    result_633+=int_get_hash_key(((int)self->sname));
    result_633+=int_get_hash_key(((int)self->sline_real));
    result_633+=int_get_hash_key(((int)self->node));
    return result_633;
}

static _Bool sGCIncNode_equals(struct sGCIncNode* left, struct sGCIncNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->node,right->node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNode* __result404__;
void* __right_value710 = (void*)0;
struct sGCDecNode* result_637;
void* __right_value711 = (void*)0;
char* __dec_obj290;
void* __right_value712 = (void*)0;
struct sNode* __dec_obj291;
struct sGCDecNode* __result405__;
    if(    self==(void*)0) {
        __result404__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result404__;
    }
    result_637=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode", sGCDecNode_finalize, sGCDecNode_clone, sGCDecNode_get_hash_key, sGCDecNode_equals));
    if(    self!=((void*)0)) {
        result_637->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj290=result_637->sname;
        result_637->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_637->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj291=result_637->node;
        result_637->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result405__ = gComeFunResultObject = __result_obj__ = result_637;
    come_call_finalizer3(result_637,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static unsigned int sGCDecNode_get_hash_key(struct sGCDecNode* self){
unsigned int result_636;
    result_636=0;
    result_636+=int_get_hash_key(((int)self->sline));
    result_636+=int_get_hash_key(((int)self->sname));
    result_636+=int_get_hash_key(((int)self->sline_real));
    result_636+=int_get_hash_key(((int)self->node));
    return result_636;
}

static _Bool sGCDecNode_equals(struct sGCDecNode* left, struct sGCDecNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->node,right->node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNoFreeNode* __result407__;
void* __right_value717 = (void*)0;
struct sGCDecNoFreeNode* result_640;
void* __right_value718 = (void*)0;
char* __dec_obj292;
void* __right_value719 = (void*)0;
struct sNode* __dec_obj293;
struct sGCDecNoFreeNode* __result408__;
    if(    self==(void*)0) {
        __result407__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result407__;
    }
    result_640=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "struct sGCDecNoFreeNode", sGCDecNoFreeNode_finalize, sGCDecNoFreeNode_clone, sGCDecNoFreeNode_get_hash_key, sGCDecNoFreeNode_equals));
    if(    self!=((void*)0)) {
        result_640->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj292=result_640->sname;
        result_640->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj293=result_640->node;
        result_640->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result408__ = gComeFunResultObject = __result_obj__ = result_640;
    come_call_finalizer3(result_640,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result408__;
}

static unsigned int sGCDecNoFreeNode_get_hash_key(struct sGCDecNoFreeNode* self){
unsigned int result_639;
    result_639=0;
    result_639+=int_get_hash_key(((int)self->sline));
    result_639+=int_get_hash_key(((int)self->sname));
    result_639+=int_get_hash_key(((int)self->sline_real));
    result_639+=int_get_hash_key(((int)self->node));
    return result_639;
}

static _Bool sGCDecNoFreeNode_equals(struct sGCDecNoFreeNode* left, struct sGCDecNoFreeNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->node,right->node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__=(void*)0;
struct sIsHeap* __result410__;
void* __right_value725 = (void*)0;
struct sIsHeap* result_646;
void* __right_value726 = (void*)0;
char* __dec_obj294;
void* __right_value727 = (void*)0;
struct sType* __dec_obj295;
struct sIsHeap* __result411__;
    if(    self==(void*)0) {
        __result410__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result410__;
    }
    result_646=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap", sIsHeap_finalize, sIsHeap_clone, sIsHeap_get_hash_key, sIsHeap_equals));
    if(    self!=((void*)0)) {
        result_646->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj294=result_646->sname;
        result_646->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_646->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj295=result_646->type;
        result_646->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj295,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result411__ = gComeFunResultObject = __result_obj__ = result_646;
    come_call_finalizer3(result_646,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

static unsigned int sIsHeap_get_hash_key(struct sIsHeap* self){
unsigned int result_645;
    result_645=0;
    result_645+=int_get_hash_key(((int)self->sline));
    result_645+=int_get_hash_key(((int)self->sname));
    result_645+=int_get_hash_key(((int)self->sline_real));
    result_645+=int_get_hash_key(((int)self->type));
    return result_645;
}

static _Bool sIsHeap_equals(struct sIsHeap* left, struct sIsHeap* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__=(void*)0;
struct sIsPointer* __result413__;
void* __right_value733 = (void*)0;
struct sIsPointer* result_652;
void* __right_value734 = (void*)0;
char* __dec_obj296;
void* __right_value735 = (void*)0;
struct sType* __dec_obj297;
struct sIsPointer* __result414__;
    if(    self==(void*)0) {
        __result413__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result413__;
    }
    result_652=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "struct sIsPointer", sIsPointer_finalize, sIsPointer_clone, sIsPointer_get_hash_key, sIsPointer_equals));
    if(    self!=((void*)0)) {
        result_652->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj296=result_652->sname;
        result_652->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_652->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj297=result_652->type;
        result_652->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj297,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result414__ = gComeFunResultObject = __result_obj__ = result_652;
    come_call_finalizer3(result_652,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result414__;
}

static unsigned int sIsPointer_get_hash_key(struct sIsPointer* self){
unsigned int result_651;
    result_651=0;
    result_651+=int_get_hash_key(((int)self->sline));
    result_651+=int_get_hash_key(((int)self->sname));
    result_651+=int_get_hash_key(((int)self->sline_real));
    result_651+=int_get_hash_key(((int)self->type));
    return result_651;
}

static _Bool sIsPointer_equals(struct sIsPointer* left, struct sIsPointer* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfNode* __result426__;
void* __right_value751 = (void*)0;
struct sSizeOfNode* result_664;
void* __right_value752 = (void*)0;
char* __dec_obj298;
void* __right_value753 = (void*)0;
struct sType* __dec_obj299;
struct sSizeOfNode* __result427__;
    if(    self==(void*)0) {
        __result426__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result426__;
    }
    result_664=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode", sSizeOfNode_finalize, sSizeOfNode_clone, sSizeOfNode_get_hash_key, sSizeOfNode_equals));
    if(    self!=((void*)0)) {
        result_664->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj298=result_664->sname;
        result_664->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_664->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj299=result_664->type;
        result_664->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj299,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result427__ = gComeFunResultObject = __result_obj__ = result_664;
    come_call_finalizer3(result_664,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result427__;
}

static unsigned int sSizeOfNode_get_hash_key(struct sSizeOfNode* self){
unsigned int result_663;
    result_663=0;
    result_663+=int_get_hash_key(((int)self->sline));
    result_663+=int_get_hash_key(((int)self->sname));
    result_663+=int_get_hash_key(((int)self->sline_real));
    result_663+=int_get_hash_key(((int)self->type));
    return result_663;
}

static _Bool sSizeOfNode_equals(struct sSizeOfNode* left, struct sSizeOfNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfExpNode* __result429__;
void* __right_value759 = (void*)0;
struct sSizeOfExpNode* result_668;
void* __right_value760 = (void*)0;
char* __dec_obj302;
void* __right_value761 = (void*)0;
struct sNode* __dec_obj303;
struct sSizeOfExpNode* __result430__;
    if(    self==(void*)0) {
        __result429__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result429__;
    }
    result_668=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode", sSizeOfExpNode_finalize, sSizeOfExpNode_clone, sSizeOfExpNode_get_hash_key, sSizeOfExpNode_equals));
    if(    self!=((void*)0)) {
        result_668->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj302=result_668->sname;
        result_668->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_668->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj303=result_668->exp;
        result_668->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result430__ = gComeFunResultObject = __result_obj__ = result_668;
    come_call_finalizer3(result_668,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result430__;
}

static unsigned int sSizeOfExpNode_get_hash_key(struct sSizeOfExpNode* self){
unsigned int result_667;
    result_667=0;
    result_667+=int_get_hash_key(((int)self->sline));
    result_667+=int_get_hash_key(((int)self->sname));
    result_667+=int_get_hash_key(((int)self->sline_real));
    result_667+=int_get_hash_key(((int)self->exp));
    return result_667;
}

static _Bool sSizeOfExpNode_equals(struct sSizeOfExpNode* left, struct sSizeOfExpNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->exp,right->exp)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfNode* __result432__;
void* __right_value767 = (void*)0;
struct sTypeOfNode* result_678;
void* __right_value768 = (void*)0;
char* __dec_obj304;
void* __right_value769 = (void*)0;
struct sType* __dec_obj305;
struct sTypeOfNode* __result433__;
    if(    self==(void*)0) {
        __result432__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result432__;
    }
    result_678=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "struct sTypeOfNode", sTypeOfNode_finalize, sTypeOfNode_clone, sTypeOfNode_get_hash_key, sTypeOfNode_equals));
    if(    self!=((void*)0)) {
        result_678->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj304=result_678->sname;
        result_678->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_678->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj305=result_678->type;
        result_678->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj305,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result433__ = gComeFunResultObject = __result_obj__ = result_678;
    come_call_finalizer3(result_678,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result433__;
}

static unsigned int sTypeOfNode_get_hash_key(struct sTypeOfNode* self){
unsigned int result_677;
    result_677=0;
    result_677+=int_get_hash_key(((int)self->sline));
    result_677+=int_get_hash_key(((int)self->sname));
    result_677+=int_get_hash_key(((int)self->sline_real));
    result_677+=int_get_hash_key(((int)self->type));
    return result_677;
}

static _Bool sTypeOfNode_equals(struct sTypeOfNode* left, struct sTypeOfNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfExpNode* __result435__;
void* __right_value775 = (void*)0;
struct sTypeOfExpNode* result_682;
void* __right_value776 = (void*)0;
char* __dec_obj308;
void* __right_value777 = (void*)0;
struct sNode* __dec_obj309;
struct sTypeOfExpNode* __result436__;
    if(    self==(void*)0) {
        __result435__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result435__;
    }
    result_682=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "struct sTypeOfExpNode", sTypeOfExpNode_finalize, sTypeOfExpNode_clone, sTypeOfExpNode_get_hash_key, sTypeOfExpNode_equals));
    if(    self!=((void*)0)) {
        result_682->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj308=result_682->sname;
        result_682->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_682->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj309=result_682->exp;
        result_682->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj309) { __dec_obj309 = come_decrement_ref_count2(__dec_obj309, ((struct sNode*)__dec_obj309)->finalize, ((struct sNode*)__dec_obj309)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result436__ = gComeFunResultObject = __result_obj__ = result_682;
    come_call_finalizer3(result_682,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result436__;
}

static unsigned int sTypeOfExpNode_get_hash_key(struct sTypeOfExpNode* self){
unsigned int result_681;
    result_681=0;
    result_681+=int_get_hash_key(((int)self->sline));
    result_681+=int_get_hash_key(((int)self->sname));
    result_681+=int_get_hash_key(((int)self->sline_real));
    result_681+=int_get_hash_key(((int)self->exp));
    return result_681;
}

static _Bool sTypeOfExpNode_equals(struct sTypeOfExpNode* left, struct sTypeOfExpNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->exp,right->exp)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self){
void* __result_obj__=(void*)0;
struct sDynamicTypeOf* __result438__;
void* __right_value783 = (void*)0;
struct sDynamicTypeOf* result_687;
void* __right_value784 = (void*)0;
char* __dec_obj312;
void* __right_value785 = (void*)0;
struct sNode* __dec_obj313;
struct sDynamicTypeOf* __result439__;
    if(    self==(void*)0) {
        __result438__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result438__;
    }
    result_687=(struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc(1, sizeof(struct sDynamicTypeOf)*(1), "sDynamicTypeOf_clone", 3, "struct sDynamicTypeOf", sDynamicTypeOf_finalize, sDynamicTypeOf_clone, sDynamicTypeOf_get_hash_key, sDynamicTypeOf_equals));
    if(    self!=((void*)0)) {
        result_687->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj312=result_687->sname;
        result_687->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_687->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj313=result_687->exp;
        result_687->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result439__ = gComeFunResultObject = __result_obj__ = result_687;
    come_call_finalizer3(result_687,sDynamicTypeOf_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result439__;
}

static unsigned int sDynamicTypeOf_get_hash_key(struct sDynamicTypeOf* self){
unsigned int result_686;
    result_686=0;
    result_686+=int_get_hash_key(((int)self->sline));
    result_686+=int_get_hash_key(((int)self->sname));
    result_686+=int_get_hash_key(((int)self->sline_real));
    result_686+=int_get_hash_key(((int)self->exp));
    return result_686;
}

static _Bool sDynamicTypeOf_equals(struct sDynamicTypeOf* left, struct sDynamicTypeOf* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->exp,right->exp)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode* __result441__;
void* __right_value791 = (void*)0;
struct sAlignOfNode* result_697;
void* __right_value792 = (void*)0;
char* __dec_obj314;
void* __right_value793 = (void*)0;
struct sType* __dec_obj315;
struct sAlignOfNode* __result442__;
    if(    self==(void*)0) {
        __result441__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result441__;
    }
    result_697=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode", sAlignOfNode_finalize, sAlignOfNode_clone, sAlignOfNode_get_hash_key, sAlignOfNode_equals));
    if(    self!=((void*)0)) {
        result_697->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj314=result_697->sname;
        result_697->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_697->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj315=result_697->type;
        result_697->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj315,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result442__ = gComeFunResultObject = __result_obj__ = result_697;
    come_call_finalizer3(result_697,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result442__;
}

static unsigned int sAlignOfNode_get_hash_key(struct sAlignOfNode* self){
unsigned int result_696;
    result_696=0;
    result_696+=int_get_hash_key(((int)self->sline));
    result_696+=int_get_hash_key(((int)self->sname));
    result_696+=int_get_hash_key(((int)self->sline_real));
    result_696+=int_get_hash_key(((int)self->type));
    return result_696;
}

static _Bool sAlignOfNode_equals(struct sAlignOfNode* left, struct sAlignOfNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode* __result444__;
void* __right_value799 = (void*)0;
struct sAlignOfExpNode* result_701;
void* __right_value800 = (void*)0;
char* __dec_obj318;
void* __right_value801 = (void*)0;
struct sNode* __dec_obj319;
struct sAlignOfExpNode* __result445__;
    if(    self==(void*)0) {
        __result444__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result444__;
    }
    result_701=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode", sAlignOfExpNode_finalize, sAlignOfExpNode_clone, sAlignOfExpNode_get_hash_key, sAlignOfExpNode_equals));
    if(    self!=((void*)0)) {
        result_701->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj318=result_701->sname;
        result_701->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_701->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj319=result_701->exp;
        result_701->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result445__ = gComeFunResultObject = __result_obj__ = result_701;
    come_call_finalizer3(result_701,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result445__;
}

static unsigned int sAlignOfExpNode_get_hash_key(struct sAlignOfExpNode* self){
unsigned int result_700;
    result_700=0;
    result_700+=int_get_hash_key(((int)self->sline));
    result_700+=int_get_hash_key(((int)self->sname));
    result_700+=int_get_hash_key(((int)self->sline_real));
    result_700+=int_get_hash_key(((int)self->exp));
    return result_700;
}

static _Bool sAlignOfExpNode_equals(struct sAlignOfExpNode* left, struct sAlignOfExpNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->exp,right->exp)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode2* __result447__;
void* __right_value807 = (void*)0;
struct sAlignOfNode2* result_711;
void* __right_value808 = (void*)0;
char* __dec_obj320;
void* __right_value809 = (void*)0;
struct sType* __dec_obj321;
struct sAlignOfNode2* __result448__;
    if(    self==(void*)0) {
        __result447__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result447__;
    }
    result_711=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2", sAlignOfNode2_finalize, sAlignOfNode2_clone, sAlignOfNode2_get_hash_key, sAlignOfNode2_equals));
    if(    self!=((void*)0)) {
        result_711->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj320=result_711->sname;
        result_711->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_711->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj321=result_711->type;
        result_711->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj321,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result448__ = gComeFunResultObject = __result_obj__ = result_711;
    come_call_finalizer3(result_711,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result448__;
}

static unsigned int sAlignOfNode2_get_hash_key(struct sAlignOfNode2* self){
unsigned int result_710;
    result_710=0;
    result_710+=int_get_hash_key(((int)self->sline));
    result_710+=int_get_hash_key(((int)self->sname));
    result_710+=int_get_hash_key(((int)self->sline_real));
    result_710+=int_get_hash_key(((int)self->type));
    return result_710;
}

static _Bool sAlignOfNode2_equals(struct sAlignOfNode2* left, struct sAlignOfNode2* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode2* __result450__;
void* __right_value815 = (void*)0;
struct sAlignOfExpNode2* result_715;
void* __right_value816 = (void*)0;
char* __dec_obj324;
void* __right_value817 = (void*)0;
struct sNode* __dec_obj325;
struct sAlignOfExpNode2* __result451__;
    if(    self==(void*)0) {
        __result450__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result450__;
    }
    result_715=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2", sAlignOfExpNode2_finalize, sAlignOfExpNode2_clone, sAlignOfExpNode2_get_hash_key, sAlignOfExpNode2_equals));
    if(    self!=((void*)0)) {
        result_715->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj324=result_715->sname;
        result_715->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_715->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj325=result_715->exp;
        result_715->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj325) { __dec_obj325 = come_decrement_ref_count2(__dec_obj325, ((struct sNode*)__dec_obj325)->finalize, ((struct sNode*)__dec_obj325)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result451__ = gComeFunResultObject = __result_obj__ = result_715;
    come_call_finalizer3(result_715,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result451__;
}

static unsigned int sAlignOfExpNode2_get_hash_key(struct sAlignOfExpNode2* self){
unsigned int result_714;
    result_714=0;
    result_714+=int_get_hash_key(((int)self->sline));
    result_714+=int_get_hash_key(((int)self->sname));
    result_714+=int_get_hash_key(((int)self->sline_real));
    result_714+=int_get_hash_key(((int)self->exp));
    return result_714;
}

static _Bool sAlignOfExpNode2_equals(struct sAlignOfExpNode2* left, struct sAlignOfExpNode2* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->exp,right->exp)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsNode* __result453__;
void* __right_value823 = (void*)0;
struct sAlignAsNode* result_724;
void* __right_value824 = (void*)0;
char* __dec_obj326;
void* __right_value825 = (void*)0;
struct sType* __dec_obj327;
struct sAlignAsNode* __result454__;
    if(    self==(void*)0) {
        __result453__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result453__;
    }
    result_724=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode", sAlignAsNode_finalize, sAlignAsNode_clone, sAlignAsNode_get_hash_key, sAlignAsNode_equals));
    if(    self!=((void*)0)) {
        result_724->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj326=result_724->sname;
        result_724->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_724->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj327=result_724->type;
        result_724->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj327,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result454__ = gComeFunResultObject = __result_obj__ = result_724;
    come_call_finalizer3(result_724,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result454__;
}

static unsigned int sAlignAsNode_get_hash_key(struct sAlignAsNode* self){
unsigned int result_723;
    result_723=0;
    result_723+=int_get_hash_key(((int)self->sline));
    result_723+=int_get_hash_key(((int)self->sname));
    result_723+=int_get_hash_key(((int)self->sline_real));
    result_723+=int_get_hash_key(((int)self->type));
    return result_723;
}

static _Bool sAlignAsNode_equals(struct sAlignAsNode* left, struct sAlignAsNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsExpNode* __result456__;
void* __right_value830 = (void*)0;
struct sAlignAsExpNode* result_727;
void* __right_value831 = (void*)0;
char* __dec_obj328;
void* __right_value832 = (void*)0;
struct sNode* __dec_obj329;
struct sAlignAsExpNode* __result457__;
    if(    self==(void*)0) {
        __result456__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result456__;
    }
    result_727=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode", sAlignAsExpNode_finalize, sAlignAsExpNode_clone, sAlignAsExpNode_get_hash_key, sAlignAsExpNode_equals));
    if(    self!=((void*)0)) {
        result_727->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj328=result_727->sname;
        result_727->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_727->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj329=result_727->exp;
        result_727->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj329) { __dec_obj329 = come_decrement_ref_count2(__dec_obj329, ((struct sNode*)__dec_obj329)->finalize, ((struct sNode*)__dec_obj329)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result457__ = gComeFunResultObject = __result_obj__ = result_727;
    come_call_finalizer3(result_727,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result457__;
}

static unsigned int sAlignAsExpNode_get_hash_key(struct sAlignAsExpNode* self){
unsigned int result_726;
    result_726=0;
    result_726+=int_get_hash_key(((int)self->sline));
    result_726+=int_get_hash_key(((int)self->sname));
    result_726+=int_get_hash_key(((int)self->sline_real));
    result_726+=int_get_hash_key(((int)self->exp));
    return result_726;
}

static _Bool sAlignAsExpNode_equals(struct sAlignAsExpNode* left, struct sAlignAsExpNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->exp,right->exp)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value835 = (void*)0;
struct sNode* __result460__;
void* __right_value836 = (void*)0;
struct sNode* __result461__;
void* __right_value837 = (void*)0;
struct sNode* __result462__;
_Bool come_c_728;
void* __right_value838 = (void*)0;
struct sNode* __result463__;
void* __right_value839 = (void*)0;
struct sNode* __result464__;
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
            __result460__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value835=create_nothing_node(info)));
            if(__right_value835) { __right_value835 = come_decrement_ref_count2(__right_value835, ((struct sNode*)__right_value835)->finalize, ((struct sNode*)__right_value835)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result460__;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result461__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value836=create_nothing_node(info)));
            if(__right_value836) { __right_value836 = come_decrement_ref_count2(__right_value836, ((struct sNode*)__right_value836)->finalize, ((struct sNode*)__right_value836)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result461__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result462__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value837=create_nothing_node(info)));
            if(__right_value837) { __right_value837 = come_decrement_ref_count2(__right_value837, ((struct sNode*)__right_value837)->finalize, ((struct sNode*)__right_value837)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result462__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(            *info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c_728=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c_728;
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
        __result463__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value838=create_nothing_node(info)));
        if(__right_value838) { __right_value838 = come_decrement_ref_count2(__right_value838, ((struct sNode*)__right_value838)->finalize, ((struct sNode*)__right_value838)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result463__;
    }
    __result464__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value839=top_level_v93(buf,head,head_sline,info)));
    if(__right_value839) { __right_value839 = come_decrement_ref_count2(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result464__;
}

struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct sNode* _inf_value29;
struct sImplementsNode* _inf_obj_value29;
void* __right_value846 = (void*)0;
struct sNode* __result467__;
    _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2087, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value29=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value841=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2087, "struct sImplementsNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
    _inf_value29->_protocol_obj=_inf_obj_value29;
    _inf_value29->finalize=(void*)sImplementsNode_finalize;
    _inf_value29->clone=(void*)sImplementsNode_clone;
    _inf_value29->compile=(void*)sImplementsNode_compile;
    _inf_value29->sline=(void*)sNodeBase_sline;
    _inf_value29->sline_real=(void*)sNodeBase_sline_real;
    _inf_value29->sname=(void*)sNodeBase_sname;
    _inf_value29->terminated=(void*)sNodeBase_terminated;
    _inf_value29->kind=(void*)sImplementsNode_kind;
    __result467__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value846=_inf_value29));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value841,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value846) { __right_value846 = come_decrement_ref_count2(__right_value846, ((struct sNode*)__right_value846)->finalize, ((struct sNode*)__right_value846)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result467__;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
struct sImplementsNode* __result465__;
void* __right_value842 = (void*)0;
struct sImplementsNode* result_730;
void* __right_value843 = (void*)0;
char* __dec_obj330;
void* __right_value844 = (void*)0;
struct sNode* __dec_obj331;
void* __right_value845 = (void*)0;
struct sType* __dec_obj332;
struct sImplementsNode* __result466__;
    if(    self==(void*)0) {
        __result465__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result465__;
    }
    result_730=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode", sImplementsNode_finalize, sImplementsNode_clone, sImplementsNode_get_hash_key, sImplementsNode_equals));
    if(    self!=((void*)0)) {
        result_730->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj330=result_730->sname;
        result_730->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_730->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj331=result_730->obj_exp;
        result_730->obj_exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj_exp));
        if(__dec_obj331) { __dec_obj331 = come_decrement_ref_count2(__dec_obj331, ((struct sNode*)__dec_obj331)->finalize, ((struct sNode*)__dec_obj331)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj332=result_730->inf_type;
        result_730->inf_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->inf_type));
        come_call_finalizer3(__dec_obj332,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result466__ = gComeFunResultObject = __result_obj__ = result_730;
    come_call_finalizer3(result_730,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result466__;
}

static unsigned int sImplementsNode_get_hash_key(struct sImplementsNode* self){
unsigned int result_729;
    result_729=0;
    result_729+=int_get_hash_key(((int)self->sline));
    result_729+=int_get_hash_key(((int)self->sname));
    result_729+=int_get_hash_key(((int)self->sline_real));
    result_729+=int_get_hash_key(((int)self->obj_exp));
    result_729+=int_get_hash_key(((int)self->inf_type));
    return result_729;
}

static _Bool sImplementsNode_equals(struct sImplementsNode* left, struct sImplementsNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->obj_exp,right->obj_exp)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->inf_type,right->inf_type)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value847 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var28 = (void*)0;
struct sType* type3_731=0;
char* name2_732=0;
_Bool err_733=0;
void* __right_value848 = (void*)0;
struct sType* inf_type_734;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct sNode* _inf_value30;
struct sImplementsNode* _inf_obj_value30;
void* __right_value851 = (void*)0;
struct sNode* __result468__;
void* __right_value852 = (void*)0;
struct sNode* __result469__;
    if(    !gComeC&&parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var28=((struct tuple3$3sTypephcharphbool*)(__right_value847=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_731=(struct sType*)come_increment_ref_count(multiple_assign_var28->v1);
        name2_732=(char*)come_increment_ref_count(multiple_assign_var28->v2);
        err_733=multiple_assign_var28->v3;
        come_call_finalizer3(__right_value847,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_733) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_734=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type3_731));
        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2104, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value30=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value850=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2104, "struct sImplementsNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_734),info))));
        _inf_value30->_protocol_obj=_inf_obj_value30;
        _inf_value30->finalize=(void*)sImplementsNode_finalize;
        _inf_value30->clone=(void*)sImplementsNode_clone;
        _inf_value30->compile=(void*)sImplementsNode_compile;
        _inf_value30->sline=(void*)sNodeBase_sline;
        _inf_value30->sline_real=(void*)sNodeBase_sline_real;
        _inf_value30->sname=(void*)sNodeBase_sname;
        _inf_value30->terminated=(void*)sNodeBase_terminated;
        _inf_value30->kind=(void*)sImplementsNode_kind;
        __result468__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value851=_inf_value30));
        come_call_finalizer3(type3_731,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_732 = come_decrement_ref_count2(name2_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_734,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value850,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value851) { __right_value851 = come_decrement_ref_count2(__right_value851, ((struct sNode*)__right_value851)->finalize, ((struct sNode*)__right_value851)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result468__;
        come_call_finalizer3(type3_731,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_732 = come_decrement_ref_count2(name2_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_734,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==64) {
        info->p++;
        while(xisalnum(*info->p)||*info->p==95) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result469__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value852=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value852) { __right_value852 = come_decrement_ref_count2(__right_value852, ((struct sNode*)__right_value852)->finalize, ((struct sNode*)__right_value852)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result469__;
}

