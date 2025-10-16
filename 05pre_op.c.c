/// previous struct definition ///
struct __sFILEX;

struct _xlocale;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sVarTable;

struct sBlock;

/// struct definition ///
typedef char* string;

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

extern struct __sFILE* __stdinp __attribute__((__swift_attr__("nonisolated(unsafe)")));
extern struct __sFILE* __stdoutp __attribute__((__swift_attr__("nonisolated(unsafe)")));
extern struct __sFILE* __stderrp __attribute__((__swift_attr__("nonisolated(unsafe)")));
typedef long long off_t;

typedef long ssize_t;

extern const int sys_nerr;
extern const char* sys_errlist[];
enum anonymous_typeY1 { P_ALL
,P_PID
,P_PGID
};

typedef enum anonymous_typeY1 idtype_t;

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

struct __darwin_arm_sme_state
{
    unsigned long  long __svcr;
    unsigned long  long __tpidr2_el0;
    unsigned short int __svl_b;
};

struct __darwin_arm_sve_z_state
{
    char __z[16][256];
} __attribute__((aligned(4)));

struct __darwin_arm_sve_p_state
{
    char __p[16][256/8];
} __attribute__((aligned(4)));

struct __darwin_arm_sme_za_state
{
    char __za[4096];
} __attribute__((aligned(4)));

struct __darwin_arm_sme2_state
{
    char __zt0[64];
} __attribute__((aligned(4)));

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

struct anonymous_typeX2
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};

struct anonymous_typeX3
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};

union wait
{
int w_status;
struct anonymous_typeX2 w_T;
struct anonymous_typeX3 w_S;
};

typedef int ct_rune_t;

typedef int rune_t;

typedef int wchar_t;

struct anonymous_typeX4
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX4 div_t;

struct anonymous_typeX5
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX5 ldiv_t;

struct anonymous_typeX6
{
    long long quot;
    long long rem;
};

typedef struct anonymous_typeX6 lldiv_t;

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

typedef struct _xlocale* locale_t;

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

struct anonymous_typeX7
{
    int __min;
    int __max;
    int __map;
    unsigned int* __types;
};

typedef struct anonymous_typeX7 _RuneEntry;

struct anonymous_typeX8
{
    int __nranges;
    struct anonymous_typeX7* __ranges;
};

typedef struct anonymous_typeX8 _RuneRange;

struct anonymous_typeX9
{
    char __name[14];
    unsigned int __mask;
};

typedef struct anonymous_typeX9 _RuneCharClass;

struct anonymous_typeX10
{
    char __magic[8];
    char __encoding[32];
    int (*__sgetrune)(const char*,unsigned long  int,char**);
    int (*__sputrune)(int,char*,unsigned long  int,char**);
    int __invalid_rune;
    unsigned int __runetype[(1<<8)];
    int __maplower[(1<<8)];
    int __mapupper[(1<<8)];
    struct anonymous_typeX8 __runetype_ext;
    struct anonymous_typeX8 __maplower_ext;
    struct anonymous_typeX8 __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct anonymous_typeX9* __charclasses;
};

typedef struct anonymous_typeX10 _RuneLocale;

extern struct anonymous_typeX10 _DefaultRuneLocale;
extern struct anonymous_typeX10* _CurrentRuneLocale;
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

extern int gComeDebugLib;

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
extern _Bool gComeBareMetal;
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
    _Bool (*no_mutex)(void*);
};

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
    _Bool mUniq;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char* mParentClassName;
    char* mAttribute;
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
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    char* mTupleName;
    char* mAttribute;
    char* mVarAttribute;
    _Bool mAllocaValue;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mAtomic;
    _Bool mThreadLocal;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mTask;
    _Bool mHeap;
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
    int mArrayPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mArrayPointerType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    _Bool mDefferRightValue;
    struct sNode* mTypeOfNode;
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

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct list$1sVar$ph* mAllVar;
    struct sBlock* mBlock;
    char* mTextBlock;
    char* mTextBlockSName;
    int mTextBlockSline;
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
    _Bool mGenericsFun;
    _Bool mImmutable;
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

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
    char* c_value_without_cast_object_value;
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
    struct sVar* mObjVar;
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

struct sInfo
{
    char* p;
    char* head;
    struct buffer* source;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
    char* clang_option;
    char* cpp_option;
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool no_output_come_code2;
    _Bool undefined_array_num_var;
    struct sFun* come_fun;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsFun$ph* uniq_funcs;
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
    _Bool in_offsetof;
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
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

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
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

struct sArrayInitializer
{
    int sline;
    char* sname;
    int sline_real;
    char* initializer;
    struct sType* type_;
};

// source head

// header function
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);
int printf(const char* anonymous_var_nameX15, ...);
void clearerr(struct __sFILE* anonymous_var_nameX32);
int fclose(struct __sFILE* anonymous_var_nameX33);
int feof(struct __sFILE* anonymous_var_nameX34);
int ferror(struct __sFILE* anonymous_var_nameX35);
int fflush(struct __sFILE* anonymous_var_nameX36);
int fgetc(struct __sFILE* anonymous_var_nameX37);
int fgetpos(struct __sFILE* anonymous_var_nameX38, long long* anonymous_var_nameX39);
char* fgets(char* anonymous_var_nameX40, int __size, struct __sFILE* anonymous_var_nameX41);
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* anonymous_var_nameX42, const char* anonymous_var_nameX43, ...);
int fputc(int anonymous_var_nameX44, struct __sFILE* anonymous_var_nameX45);
int fputs(const char* anonymous_var_nameX46, struct __sFILE* anonymous_var_nameX47);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX48, const char* anonymous_var_nameX49, struct __sFILE* anonymous_var_nameX50);
int fscanf(struct __sFILE* anonymous_var_nameX51, const char* anonymous_var_nameX52, ...);
int fseek(struct __sFILE* anonymous_var_nameX53, long anonymous_var_nameX54, int anonymous_var_nameX55);
int fsetpos(struct __sFILE* anonymous_var_nameX56, const long long* anonymous_var_nameX57);
long ftell(struct __sFILE* anonymous_var_nameX58);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* anonymous_var_nameX59);
int getchar();
char* gets(char* anonymous_var_nameX60);
void perror(const char* anonymous_var_nameX61);
int putc(int anonymous_var_nameX62, struct __sFILE* anonymous_var_nameX63);
int putchar(int anonymous_var_nameX64);
int puts(const char* anonymous_var_nameX65);
int remove(const char* anonymous_var_nameX66);
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* anonymous_var_nameX67);
int scanf(const char* anonymous_var_nameX68, ...);
void setbuf(struct __sFILE* anonymous_var_nameX69, char* anonymous_var_nameX70);
int setvbuf(struct __sFILE* anonymous_var_nameX71, char* anonymous_var_nameX72, int anonymous_var_nameX73, unsigned long  int __size);
int sprintf(char* anonymous_var_nameX74, const char* anonymous_var_nameX75, ...);
int sscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, ...);
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX78);
int ungetc(int anonymous_var_nameX79, struct __sFILE* anonymous_var_nameX80);
int vfprintf(struct __sFILE* anonymous_var_nameX81, const char* anonymous_var_nameX82, va_list anonymous_var_nameX83);
int vprintf(const char* anonymous_var_nameX84, va_list anonymous_var_nameX85);
int vsprintf(char* anonymous_var_nameX86, const char* anonymous_var_nameX87, va_list anonymous_var_nameX88);
char* ctermid(char* anonymous_var_nameX89);
struct __sFILE* fdopen(int anonymous_var_nameX90, const char* anonymous_var_nameX91);
int fileno(struct __sFILE* anonymous_var_nameX92);
int pclose(struct __sFILE* anonymous_var_nameX93);
struct __sFILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);
int __srget(struct __sFILE* anonymous_var_nameX96);
int __svfscanf(struct __sFILE* anonymous_var_nameX97, const char* anonymous_var_nameX98, va_list anonymous_var_nameX99);
int __swbuf(int anonymous_var_nameX100, struct __sFILE* anonymous_var_nameX101);
void flockfile(struct __sFILE* anonymous_var_nameX102);
int ftrylockfile(struct __sFILE* anonymous_var_nameX103);
void funlockfile(struct __sFILE* anonymous_var_nameX104);
int getc_unlocked(struct __sFILE* anonymous_var_nameX105);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX106, struct __sFILE* anonymous_var_nameX107);
int putchar_unlocked(int anonymous_var_nameX108);
int getw(struct __sFILE* anonymous_var_nameX109);
int putw(int anonymous_var_nameX110, struct __sFILE* anonymous_var_nameX111);
char* tempnam(const char* __dir, const char* __prefix);
int fseeko(struct __sFILE* __stream, long long __offset, int __whence);
long long ftello(struct __sFILE* __stream);
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...);
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX112);
int vscanf(const char* __format, va_list anonymous_var_nameX113);
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX114);
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX115);
int dprintf(int anonymous_var_nameX116, const char* anonymous_var_nameX117, ...);
int vdprintf(int anonymous_var_nameX118, const char* anonymous_var_nameX119, va_list anonymous_var_nameX120);
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream);
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep);
int asprintf(char** anonymous_var_nameX121, const char* anonymous_var_nameX122, ...);
char* ctermid_r(char* anonymous_var_nameX123);
char* fgetln(struct __sFILE* anonymous_var_nameX124, unsigned long  int* __len);
const char* fmtcheck(const char* anonymous_var_nameX125, const char* anonymous_var_nameX126);
int fpurge(struct __sFILE* anonymous_var_nameX127);
void setbuffer(struct __sFILE* anonymous_var_nameX128, char* anonymous_var_nameX129, int __size);
int setlinebuf(struct __sFILE* anonymous_var_nameX130);
int vasprintf(char** anonymous_var_nameX131, const char* anonymous_var_nameX132, va_list anonymous_var_nameX133);
struct __sFILE* funopen(const void* anonymous_var_nameX134, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int anonymous_var_nameX163, unsigned int anonymous_var_nameX164);
int getiopolicy_np(int anonymous_var_nameX165, int anonymous_var_nameX166);
int getrlimit(int anonymous_var_nameX167, struct rlimit* anonymous_var_nameX168);
int getrusage(int anonymous_var_nameX169, struct rusage* anonymous_var_nameX170);
int setpriority(int anonymous_var_nameX171, unsigned int anonymous_var_nameX172, int anonymous_var_nameX173);
int setiopolicy_np(int anonymous_var_nameX174, int anonymous_var_nameX175, int anonymous_var_nameX176);
int setrlimit(int anonymous_var_nameX177, const struct rlimit* anonymous_var_nameX178);
int wait(int* anonymous_var_nameX179);
int waitpid(int anonymous_var_nameX180, int* anonymous_var_nameX181, int anonymous_var_nameX182);
int waitid(enum anonymous_typeY1 anonymous_var_nameX183, unsigned int anonymous_var_nameX184, struct __siginfo* anonymous_var_nameX185, int anonymous_var_nameX186);
int wait3(int* anonymous_var_nameX187, int anonymous_var_nameX188, struct rusage* anonymous_var_nameX189);
int wait4(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192, struct rusage* anonymous_var_nameX193);
void* alloca(unsigned long  int __size);
void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id);
void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
void malloc_type_free(void* ptr, unsigned long  long type_id);
void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id);
void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __count, unsigned long  int __size);
void free(void* anonymous_var_nameX194);
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
void* valloc(unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void abort();
int abs(int anonymous_var_nameX195);
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX196);
int atoi(const char* anonymous_var_nameX197);
long atol(const char* anonymous_var_nameX198);
long long atoll(const char* anonymous_var_nameX199);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX4 div(int anonymous_var_nameX202, int anonymous_var_nameX203);
void exit(int anonymous_var_nameX204);
char* getenv(const char* anonymous_var_nameX205);
long labs(long anonymous_var_nameX206);
struct anonymous_typeX5 ldiv(long anonymous_var_nameX207, long anonymous_var_nameX208);
long long llabs(long  long anonymous_var_nameX209);
struct anonymous_typeX6 lldiv(long  long anonymous_var_nameX210, long  long anonymous_var_nameX211);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX212, const char* anonymous_var_nameX213, unsigned long  int __n);
int mbtowc(int* anonymous_var_nameX214, const char* anonymous_var_nameX215, unsigned long  int __n);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX218);
int rand();
void srand(unsigned int anonymous_var_nameX219);
double strtod(const char* anonymous_var_nameX220, char** anonymous_var_nameX221);
float strtof(const char* anonymous_var_nameX222, char** anonymous_var_nameX223);
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX224, char** anonymous_var_nameX225);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* anonymous_var_nameX226);
unsigned long  int wcstombs(char* anonymous_var_nameX227, const int* anonymous_var_nameX228, unsigned long  int __n);
int wctomb(char* anonymous_var_nameX229, int anonymous_var_nameX230);
void _Exit(int anonymous_var_nameX231);
long a64l(const char* anonymous_var_nameX232);
double drand48();
char* ecvt(double anonymous_var_nameX233, int anonymous_var_nameX234, int* anonymous_var_nameX235, int* anonymous_var_nameX236);
double erand48(unsigned short int anonymous_var_nameX237[3]);
char* fcvt(double anonymous_var_nameX238, int anonymous_var_nameX239, int* anonymous_var_nameX240, int* anonymous_var_nameX241);
char* gcvt(double anonymous_var_nameX242, int anonymous_var_nameX243, char* anonymous_var_nameX244);
int getsubopt(char** anonymous_var_nameX245, char** anonymous_var_nameX246, char** anonymous_var_nameX247);
int grantpt(int anonymous_var_nameX248);
char* initstate(unsigned int anonymous_var_nameX249, char* anonymous_var_nameX250, unsigned long  int __size);
long jrand48(unsigned short int anonymous_var_nameX251[3]);
char* l64a(long anonymous_var_nameX252);
void lcong48(unsigned short int anonymous_var_nameX253[7]);
long lrand48();
char* mktemp(char* anonymous_var_nameX254);
int mkstemp(char* anonymous_var_nameX255);
long mrand48();
long nrand48(unsigned short int anonymous_var_nameX256[3]);
int posix_openpt(int anonymous_var_nameX257);
char* ptsname(int anonymous_var_nameX258);
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen);
int putenv(char* anonymous_var_nameX259);
long random();
int rand_r(unsigned int* anonymous_var_nameX260);
char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);
unsigned short int* seed48(unsigned short int anonymous_var_nameX263[3]);
int setenv(const char* __name, const char* __value, int __overwrite);
void setkey(const char* anonymous_var_nameX264);
char* setstate(const char* anonymous_var_nameX265);
void srand48(long anonymous_var_nameX266);
void srandom(unsigned int anonymous_var_nameX267);
int unlockpt(int anonymous_var_nameX268);
int unsetenv(const char* anonymous_var_nameX269);
unsigned int arc4random();
void arc4random_addrandom(unsigned char* anonymous_var_nameX270, int __datlen);
void arc4random_buf(void* __buf, unsigned long  int __nbytes);
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound);
int atexit_b(void (*anonymous_lambda_var_nameZ8)());
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
char* cgetcap(char* anonymous_var_nameX273, const char* anonymous_var_nameX274, int anonymous_var_nameX275);
int cgetclose();
int cgetent(char** anonymous_var_nameX276, char** anonymous_var_nameX277, const char* anonymous_var_nameX278);
int cgetfirst(char** anonymous_var_nameX279, char** anonymous_var_nameX280);
int cgetmatch(const char* anonymous_var_nameX281, const char* anonymous_var_nameX282);
int cgetnext(char** anonymous_var_nameX283, char** anonymous_var_nameX284);
int cgetnum(char* anonymous_var_nameX285, const char* anonymous_var_nameX286, long* anonymous_var_nameX287);
int cgetset(const char* anonymous_var_nameX288);
int cgetstr(char* anonymous_var_nameX289, const char* anonymous_var_nameX290, char** anonymous_var_nameX291);
int cgetustr(char* anonymous_var_nameX292, const char* anonymous_var_nameX293, char** anonymous_var_nameX294);
int daemon(int anonymous_var_nameX295, int anonymous_var_nameX296);
char* devname(int anonymous_var_nameX297, unsigned short int anonymous_var_nameX298);
char* devname_r(int anonymous_var_nameX299, unsigned short int anonymous_var_nameX300, char* buf, int len);
char* getbsize(int* anonymous_var_nameX301, long* anonymous_var_nameX302);
int getloadavg(double anonymous_var_nameX303[], int __nelem);
const char* getprogname();
void setprogname(const char* anonymous_var_nameX304);
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX317, int (*__compar)(void*,const void*,const void*));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX323, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX327);
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
char* strchrnul(const char* __s, int __c);
char* strnstr(const char* __big, const char* __little, unsigned long  int __len);
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size);
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* anonymous_var_nameX328, void* anonymous_var_nameX329, long __len);
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* anonymous_var_nameX330, const void* anonymous_var_nameX331, unsigned long  int __n);
void bcopy(const void* anonymous_var_nameX332, void* anonymous_var_nameX333, unsigned long  int __n);
void bzero(void* anonymous_var_nameX334, unsigned long  int __n);
char* index(const char* anonymous_var_nameX335, int anonymous_var_nameX336);
char* rindex(const char* anonymous_var_nameX337, int anonymous_var_nameX338);
int ffs(int anonymous_var_nameX339);
int strcasecmp(const char* anonymous_var_nameX340, const char* anonymous_var_nameX341);
int strncasecmp(const char* anonymous_var_nameX342, const char* anonymous_var_nameX343, unsigned long  int anonymous_var_nameX344);
int ffsl(long anonymous_var_nameX345);
int ffsll(long  long anonymous_var_nameX346);
int fls(int anonymous_var_nameX347);
int flsl(long anonymous_var_nameX348);
int flsll(long  long anonymous_var_nameX349);
struct _xlocale* duplocale(struct _xlocale* anonymous_var_nameX350);
int freelocale(struct _xlocale* anonymous_var_nameX351);
struct _xlocale* newlocale(int anonymous_var_nameX352, const char* anonymous_var_nameX353, struct _xlocale* anonymous_var_nameX354);
struct _xlocale* uselocale(struct _xlocale* anonymous_var_nameX355);
struct lconv* localeconv();
char* setlocale(int anonymous_var_nameX356, const char* anonymous_var_nameX357);
int* __error();
int isalnum(int anonymous_var_nameX364);
int isalpha(int anonymous_var_nameX365);
int isblank(int anonymous_var_nameX366);
int iscntrl(int anonymous_var_nameX367);
int isdigit(int anonymous_var_nameX368);
int isgraph(int anonymous_var_nameX369);
int islower(int anonymous_var_nameX370);
int isprint(int anonymous_var_nameX371);
int ispunct(int anonymous_var_nameX372);
int isspace(int anonymous_var_nameX373);
int isupper(int anonymous_var_nameX374);
int isxdigit(int anonymous_var_nameX375);
int tolower(int anonymous_var_nameX376);
int toupper(int anonymous_var_nameX377);
int isascii(int anonymous_var_nameX378);
int toascii(int anonymous_var_nameX379);
int _tolower(int anonymous_var_nameX380);
int _toupper(int anonymous_var_nameX381);
int digittoint(int anonymous_var_nameX382);
int ishexnumber(int anonymous_var_nameX383);
int isideogram(int anonymous_var_nameX384);
int isnumber(int anonymous_var_nameX385);
int isphonogram(int anonymous_var_nameX386);
int isrune(int anonymous_var_nameX387);
int isspecial(int anonymous_var_nameX388);
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
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_print_heap_info(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
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
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
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
_Bool xiswascii(int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1char$ph* charp_split_char(char* self, char c);
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
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
char* wchar_t_to_string(int wc);
void int_times(int self, void* parent, void (*block)(void*,int));
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
_Bool sNodeBase_no_mutex(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
void transpile_conditional_with_free_right_object_value(struct CVALUE* condtional_value, struct sInfo* info);
int err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static, _Bool cast_type, _Bool no_alignas);
char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name);
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
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type, _Bool no_static);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
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
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
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
struct sNode* create_int_node(char* value, struct sInfo* info);
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
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
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
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo* info);
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
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err);
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
struct sNode* new_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* new_output_node(char* contents, struct sInfo* info);
struct sNode* new_inline_assembler_node(char* source, int num_exps, struct sNode** exps, struct sInfo* info);
struct sNode* new_line_node(struct sInfo* info);
struct sNode* new_sname_node(struct sInfo* info);
struct sNode* new_func_node(struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
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
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
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
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sBlock_finalize(struct sBlock* self);
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
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct sType* type_, char* initializer, struct sInfo* info);
char* sArrayInitializer_kind(struct sArrayInitializer* self);
_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
struct sNode* pre_position_operator(struct sInfo* info);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
struct sNode* expression_node_v98(struct sInfo* info);
// uniq global variable
// inline function

// body function
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info){
void* __right_value39 = (void*)0;
struct sType* generics_type;
_Bool _condtional_value_X108;
struct sType* __dec_obj26;
_Bool _condtional_value_X109;
struct sType* __dec_obj27;
struct sClass* klass;
char* class_name;
void* __right_value40 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var1 = (void*)0;
char* fun_name2=0;
struct sFun* operator_fun=0;
struct sGenericsFun* generics_fun=0;
_Bool result;
_Bool _condtional_value_X111;
struct sNode* obj;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct sNode* node_8;
_Bool Value;
_Bool _condtional_value_X119;
_Bool __result_obj__20;
    generics_type=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(({    (_condtional_value_X108=(generics_type->mNoSolvedGenericsType));    _condtional_value_X108;    })) {
        __dec_obj26=generics_type,
        generics_type=(struct sType*)come_increment_ref_count(generics_type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X109=(type->mNoSolvedGenericsType));    _condtional_value_X109;    })) {
        __dec_obj27=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    klass=type->mClass;
    class_name=klass->mName;
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value40=get_method(fun_name,(struct sType*)come_increment_ref_count(type),info)));
    fun_name2=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    operator_fun=multiple_assign_var1->v2;
    generics_fun=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value40, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    result=(_Bool)0;
    if(({    (_condtional_value_X111=(operator_fun));    _condtional_value_X111;    })) {
        obj=(struct sNode*)come_increment_ref_count(node);
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05pre_op.c", 22, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "05pre_op.c", 24, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(obj))));
        node_8=(struct sNode*)come_increment_ref_count(create_method_call(fun_name2,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),((void*)0),0,((void*)0),info,(_Bool)0));
        Value=node_compile(node_8,info);
        if(({        (_condtional_value_X119=(Value));        _condtional_value_X119;        })) {
            result=(_Bool)1;
        }
        else {
        }
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node_8) ? node_8 = come_decrement_ref_count(node_8, ((struct sNode*)node_8)->finalize, ((struct sNode*)node_8)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __result_obj__20 = result;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__20;
}

static struct sType* sType_clone(struct sType* self){
_Bool _condtional_value_X1;
struct sType* __result_obj__1;
void* __right_value0 = (void*)0;
struct sType* result;
_Bool _condtional_value_X24;
_Bool _condtional_value_X25;
void* __right_value1 = (void*)0;
struct sType* __dec_obj1;
_Bool _condtional_value_X26;
void* __right_value2 = (void*)0;
struct sType* __dec_obj2;
_Bool _condtional_value_X27;
void* __right_value10 = (void*)0;
struct list$1sType$ph* __dec_obj6;
_Bool _condtional_value_X34;
void* __right_value11 = (void*)0;
struct sType* __dec_obj7;
_Bool _condtional_value_X35;
void* __right_value13 = (void*)0;
struct sNode* __dec_obj8;
_Bool _condtional_value_X47;
void* __right_value14 = (void*)0;
struct sNode* __dec_obj9;
_Bool _condtional_value_X48;
void* __right_value15 = (void*)0;
char* __dec_obj10;
_Bool _condtional_value_X49;
void* __right_value16 = (void*)0;
char* __dec_obj11;
_Bool _condtional_value_X50;
void* __right_value17 = (void*)0;
char* __dec_obj12;
_Bool _condtional_value_X51;
_Bool _condtional_value_X52;
_Bool _condtional_value_X53;
_Bool _condtional_value_X54;
_Bool _condtional_value_X55;
_Bool _condtional_value_X56;
_Bool _condtional_value_X57;
_Bool _condtional_value_X58;
_Bool _condtional_value_X59;
_Bool _condtional_value_X60;
_Bool _condtional_value_X61;
_Bool _condtional_value_X62;
_Bool _condtional_value_X63;
_Bool _condtional_value_X64;
_Bool _condtional_value_X65;
_Bool _condtional_value_X66;
_Bool _condtional_value_X67;
_Bool _condtional_value_X68;
_Bool _condtional_value_X69;
_Bool _condtional_value_X70;
_Bool _condtional_value_X71;
_Bool _condtional_value_X72;
_Bool _condtional_value_X73;
_Bool _condtional_value_X74;
_Bool _condtional_value_X75;
_Bool _condtional_value_X76;
void* __right_value18 = (void*)0;
char* __dec_obj13;
_Bool _condtional_value_X77;
_Bool _condtional_value_X78;
_Bool _condtional_value_X79;
_Bool _condtional_value_X80;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* __dec_obj17;
_Bool _condtional_value_X87;
_Bool _condtional_value_X88;
_Bool _condtional_value_X89;
_Bool _condtional_value_X90;
_Bool _condtional_value_X91;
_Bool _condtional_value_X92;
_Bool _condtional_value_X93;
void* __right_value27 = (void*)0;
char* __dec_obj18;
_Bool _condtional_value_X94;
_Bool _condtional_value_X95;
_Bool _condtional_value_X96;
void* __right_value28 = (void*)0;
struct list$1sType$ph* __dec_obj19;
_Bool _condtional_value_X97;
void* __right_value36 = (void*)0;
struct list$1char$ph* __dec_obj23;
_Bool _condtional_value_X104;
void* __right_value37 = (void*)0;
struct sType* __dec_obj24;
_Bool _condtional_value_X105;
_Bool _condtional_value_X106;
_Bool _condtional_value_X107;
void* __right_value38 = (void*)0;
struct sNode* __dec_obj25;
struct sType* __result_obj__16;
    if(({    (_condtional_value_X1=(self==(void*)0));    _condtional_value_X1;    })) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__1, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__1;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_condtional_value_X24=(self!=((void*)0)));    _condtional_value_X24;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_condtional_value_X25=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X25;    })) {
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X26=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X26;    })) {
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X27=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X27;    })) {
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X34=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X34;    })) {
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X35=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X35;    })) {
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X47=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X47;    })) {
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X48=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X48;    })) {
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X49=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X49;    })) {
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X50=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X50;    })) {
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X51=(self!=((void*)0)));    _condtional_value_X51;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_condtional_value_X52=(self!=((void*)0)));    _condtional_value_X52;    })) {
        result->mUnsigned=self->mUnsigned;
    }
    if(({    (_condtional_value_X53=(self!=((void*)0)));    _condtional_value_X53;    })) {
        result->mShort=self->mShort;
    }
    if(({    (_condtional_value_X54=(self!=((void*)0)));    _condtional_value_X54;    })) {
        result->mLong=self->mLong;
    }
    if(({    (_condtional_value_X55=(self!=((void*)0)));    _condtional_value_X55;    })) {
        result->mLongLong=self->mLongLong;
    }
    if(({    (_condtional_value_X56=(self!=((void*)0)));    _condtional_value_X56;    })) {
        result->mConstant=self->mConstant;
    }
    if(({    (_condtional_value_X57=(self!=((void*)0)));    _condtional_value_X57;    })) {
        result->mAtomic=self->mAtomic;
    }
    if(({    (_condtional_value_X58=(self!=((void*)0)));    _condtional_value_X58;    })) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(({    (_condtional_value_X59=(self!=((void*)0)));    _condtional_value_X59;    })) {
        result->mRegister=self->mRegister;
    }
    if(({    (_condtional_value_X60=(self!=((void*)0)));    _condtional_value_X60;    })) {
        result->mVolatile=self->mVolatile;
    }
    if(({    (_condtional_value_X61=(self!=((void*)0)));    _condtional_value_X61;    })) {
        result->mStatic=self->mStatic;
    }
    if(({    (_condtional_value_X62=(self!=((void*)0)));    _condtional_value_X62;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_condtional_value_X63=(self!=((void*)0)));    _condtional_value_X63;    })) {
        result->mRecord=self->mRecord;
    }
    if(({    (_condtional_value_X64=(self!=((void*)0)));    _condtional_value_X64;    })) {
        result->mExtern=self->mExtern;
    }
    if(({    (_condtional_value_X65=(self!=((void*)0)));    _condtional_value_X65;    })) {
        result->mRestrict=self->mRestrict;
    }
    if(({    (_condtional_value_X66=(self!=((void*)0)));    _condtional_value_X66;    })) {
        result->mImmutable=self->mImmutable;
    }
    if(({    (_condtional_value_X67=(self!=((void*)0)));    _condtional_value_X67;    })) {
        result->mTask=self->mTask;
    }
    if(({    (_condtional_value_X68=(self!=((void*)0)));    _condtional_value_X68;    })) {
        result->mHeap=self->mHeap;
    }
    if(({    (_condtional_value_X69=(self!=((void*)0)));    _condtional_value_X69;    })) {
        result->mChannel=self->mChannel;
    }
    if(({    (_condtional_value_X70=(self!=((void*)0)));    _condtional_value_X70;    })) {
        result->mNoHeap=self->mNoHeap;
    }
    if(({    (_condtional_value_X71=(self!=((void*)0)));    _condtional_value_X71;    })) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(({    (_condtional_value_X72=(self!=((void*)0)));    _condtional_value_X72;    })) {
        result->mException=self->mException;
    }
    if(({    (_condtional_value_X73=(self!=((void*)0)));    _condtional_value_X73;    })) {
        result->mInline=self->mInline;
    }
    if(({    (_condtional_value_X74=(self!=((void*)0)));    _condtional_value_X74;    })) {
        result->mNullValue=self->mNullValue;
    }
    if(({    (_condtional_value_X75=(self!=((void*)0)));    _condtional_value_X75;    })) {
        result->mGuardValue=self->mGuardValue;
    }
    if(({    (_condtional_value_X76=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X76;    })) {
        __dec_obj13=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X77=(self!=((void*)0)));    _condtional_value_X77;    })) {
        result->mTypedef=self->mTypedef;
    }
    if(({    (_condtional_value_X78=(self!=((void*)0)));    _condtional_value_X78;    })) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(({    (_condtional_value_X79=(self!=((void*)0)));    _condtional_value_X79;    })) {
        result->mOriginIsArray=self->mOriginIsArray;
    }
    if(({    (_condtional_value_X80=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X80;    })) {
        __dec_obj17=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X87=(self!=((void*)0)));    _condtional_value_X87;    })) {
        result->mPointerNum=self->mPointerNum;
    }
    if(({    (_condtional_value_X88=(self!=((void*)0)));    _condtional_value_X88;    })) {
        result->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(({    (_condtional_value_X89=(self!=((void*)0)));    _condtional_value_X89;    })) {
        result->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(({    (_condtional_value_X90=(self!=((void*)0)));    _condtional_value_X90;    })) {
        result->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(({    (_condtional_value_X91=(self!=((void*)0)));    _condtional_value_X91;    })) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(({    (_condtional_value_X92=(self!=((void*)0)));    _condtional_value_X92;    })) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(({    (_condtional_value_X93=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X93;    })) {
        __dec_obj18=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X94=(self!=((void*)0)));    _condtional_value_X94;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_condtional_value_X95=(self!=((void*)0)));    _condtional_value_X95;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_condtional_value_X96=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X96;    })) {
        __dec_obj19=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X97=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X97;    })) {
        __dec_obj23=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X104=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X104;    })) {
        __dec_obj24=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X105=(self!=((void*)0)));    _condtional_value_X105;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_condtional_value_X106=(self!=((void*)0)));    _condtional_value_X106;    })) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(({    (_condtional_value_X107=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X107;    })) {
        __dec_obj25=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__16, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__16;
}

static void sType_finalize(struct sType* self){
_Bool _condtional_value_X2;
_Bool _condtional_value_X3;
_Bool _condtional_value_X4;
_Bool _condtional_value_X7;
_Bool _condtional_value_X8;
_Bool _condtional_value_X9;
_Bool _condtional_value_X10;
_Bool _condtional_value_X11;
_Bool _condtional_value_X12;
_Bool _condtional_value_X13;
_Bool _condtional_value_X14;
_Bool _condtional_value_X17;
_Bool _condtional_value_X18;
_Bool _condtional_value_X19;
_Bool _condtional_value_X22;
_Bool _condtional_value_X23;
    if(({    (_condtional_value_X2=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X2;    })) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X3=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X3;    })) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X4=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X4;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X7=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X7;    })) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X8=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X8;    })) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X9=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X9;    })) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X10=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X10;    })) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X11=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X11;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X12=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X12;    })) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X13=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X13;    })) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X14=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X14;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X17=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X17;    })) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X18=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X18;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X19=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X19;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X22=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X22;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X23=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X23;    })) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X5;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X5=(it!=((void*)0)));    _condtional_value_X5;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
_Bool _condtional_value_X6;
    if(({    (_condtional_value_X6=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X6;    })) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X15;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X15=(it!=((void*)0)));    _condtional_value_X15;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
_Bool _condtional_value_X16;
    if(({    (_condtional_value_X16=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X16;    })) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X20;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X20=(it!=((void*)0)));    _condtional_value_X20;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
_Bool _condtional_value_X21;
    if(({    (_condtional_value_X21=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X21;    })) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
_Bool _condtional_value_X28;
struct list$1sType$ph* __result_obj__2;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _condtional_value_X29;
_Bool _condtional_value_X30;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(({    (_condtional_value_X28=(self==((void*)0)));    _condtional_value_X28;    })) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__2;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1sType$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X29=(it!=((void*)0)));    _condtional_value_X29;    })) {
        if(({        (_condtional_value_X30=(1));        _condtional_value_X30;        })) {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__3;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__3 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__3, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__3;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X31;
void* __right_value5 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj3;
_Bool _condtional_value_X32;
void* __right_value6 = (void*)0;
struct list_item$1sType$ph* litem_0;
struct sType* __dec_obj4;
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_1;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__4;
    if(({    (_condtional_value_X31=(self->len==0));    _condtional_value_X31;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value5=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X32=(self->len==1));    _condtional_value_X32;    })) {
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value6=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj4=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sType$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj5=litem_1->item,
        litem_1->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__4 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__4;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X33;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X33=(it!=((void*)0)));    _condtional_value_X33;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
_Bool _condtional_value_X36;
struct sNode* __result_obj__6;
void* __right_value12 = (void*)0;
struct sNode* result;
_Bool _condtional_value_X37;
_Bool _condtional_value_X38;
_Bool _condtional_value_X39;
_Bool _condtional_value_X40;
_Bool _condtional_value_X41;
_Bool _condtional_value_X42;
_Bool _condtional_value_X43;
_Bool _condtional_value_X44;
_Bool _condtional_value_X45;
_Bool _condtional_value_X46;
struct sNode* __result_obj__7;
    if(({    (_condtional_value_X36=(self==(void*)0));    _condtional_value_X36;    })) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__6;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(({    (_condtional_value_X37=(self!=((void*)0)&&self->clone!=((void*)0)));    _condtional_value_X37;    })) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(({    (_condtional_value_X38=(self!=((void*)0)));    _condtional_value_X38;    })) {
        result->finalize=self->finalize;
    }
    if(({    (_condtional_value_X39=(self!=((void*)0)));    _condtional_value_X39;    })) {
        result->clone=self->clone;
    }
    if(({    (_condtional_value_X40=(self!=((void*)0)));    _condtional_value_X40;    })) {
        result->compile=self->compile;
    }
    if(({    (_condtional_value_X41=(self!=((void*)0)));    _condtional_value_X41;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X42=(self!=((void*)0)));    _condtional_value_X42;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X43=(self!=((void*)0)));    _condtional_value_X43;    })) {
        result->sname=self->sname;
    }
    if(({    (_condtional_value_X44=(self!=((void*)0)));    _condtional_value_X44;    })) {
        result->terminated=self->terminated;
    }
    if(({    (_condtional_value_X45=(self!=((void*)0)));    _condtional_value_X45;    })) {
        result->kind=self->kind;
    }
    if(({    (_condtional_value_X46=(self!=((void*)0)));    _condtional_value_X46;    })) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
_Bool _condtional_value_X81;
struct list$1sNode$ph* __result_obj__8;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X82;
_Bool _condtional_value_X83;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(({    (_condtional_value_X81=(self==((void*)0)));    _condtional_value_X81;    })) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__8;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1sNode$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X82=(it!=((void*)0)));    _condtional_value_X82;    })) {
        if(({        (_condtional_value_X83=(1));        _condtional_value_X83;        })) {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__9;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__9 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
_Bool _condtional_value_X84;
void* __right_value21 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj14;
_Bool _condtional_value_X85;
void* __right_value22 = (void*)0;
struct list_item$1sNode$ph* litem_2;
struct sNode* __dec_obj15;
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_3;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__10;
    if(({    (_condtional_value_X84=(self->len==0));    _condtional_value_X84;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value21=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj14=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X85=(self->len==1));    _condtional_value_X85;    })) {
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value22=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj15=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sNode$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj16=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__10 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__10;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X86;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X86=(it!=((void*)0)));    _condtional_value_X86;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
_Bool _condtional_value_X98;
struct list$1char$ph* __result_obj__12;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _condtional_value_X99;
_Bool _condtional_value_X100;
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(({    (_condtional_value_X98=(self==((void*)0)));    _condtional_value_X98;    })) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__12;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1char$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X99=(it!=((void*)0)));    _condtional_value_X99;    })) {
        if(({        (_condtional_value_X100=(1));        _condtional_value_X100;        })) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1022, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1025, "char*")));
        }
        it=it->next;
    }
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__15;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__13;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X101;
void* __right_value31 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj20;
_Bool _condtional_value_X102;
void* __right_value32 = (void*)0;
struct list_item$1char$ph* litem_4;
char* __dec_obj21;
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_5;
char* __dec_obj22;
struct list$1char$ph* __result_obj__14;
    if(({    (_condtional_value_X101=(self->len==0));    _condtional_value_X101;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value31=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj20=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X102=(self->len==1));    _condtional_value_X102;    })) {
        litem_4=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value32=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1char$ph*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj21=litem_4->item,
        litem_4->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1char$ph*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj22=litem_5->item,
        litem_5->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__14 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__14;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X103;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X103=(it!=((void*)0)));    _condtional_value_X103;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
_Bool _condtional_value_X110;
    if(({    (_condtional_value_X110=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X110;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__17;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _condtional_value_X112;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X112=(it!=((void*)0)));    _condtional_value_X112;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X113;
    if(({    (_condtional_value_X113=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X113;    })) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
_Bool _condtional_value_X114;
_Bool _condtional_value_X115;
    if(({    (_condtional_value_X114=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X114;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X115=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X115;    })) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
_Bool _condtional_value_X116;
void* __right_value43 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj28;
_Bool _condtional_value_X117;
void* __right_value44 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_6;
struct tuple2$2char$phsNode$ph* __dec_obj29;
void* __right_value45 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_7;
struct tuple2$2char$phsNode$ph* __dec_obj30;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__18;
    if(({    (_condtional_value_X116=(self->len==0));    _condtional_value_X116;    })) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value43=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X117=(self->len==1));    _condtional_value_X117;    })) {
        litem_6=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value44=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj29=litem_6->item,
        litem_6->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value45=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj30=litem_7->item,
        litem_7->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__18 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__18;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj31;
struct tuple2$2void$psNode$ph* __result_obj__19;
    self->v1=v1;
    __dec_obj31=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__19 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__19;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
_Bool _condtional_value_X118;
    if(({    (_condtional_value_X118=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X118;    })) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __right_value49 = (void*)0;
struct sNode* __dec_obj32;
struct sRefferenceNode* __result_obj__21;
    ((struct sNodeBase*)(__right_value49=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value49, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj32=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__21 = (struct sRefferenceNode*)come_increment_ref_count(self);
    come_call_finalizer(sRefferenceNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sRefferenceNode_finalize, __result_obj__21, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__21;
}

char* sRefferenceNode_kind(struct sRefferenceNode* self){
void* __right_value50 = (void*)0;
char* __result_obj__22;
    __result_obj__22 = (char*)come_increment_ref_count(((char*)(__right_value50=__builtin_string("sRefferenceNode"))));
    (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__22 = come_decrement_ref_count(__result_obj__22, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__22;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
struct sNode* value;
_Bool _condtional_value_X123;
void* __right_value51 = (void*)0;
struct CVALUE* left_value;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct CVALUE* come_value;
_Bool _condtional_value_X124;
void* __right_value54 = (void*)0;
char* __dec_obj33;
void* __right_value55 = (void*)0;
char* __dec_obj34;
void* __right_value56 = (void*)0;
struct sType* __dec_obj35;
_Bool __result_obj__24;
    value=self->value;
    if(({    (_condtional_value_X123=(!node_compile(value,info)));    _condtional_value_X123;    })) {
        return (_Bool)0;
    }
    left_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 60, "struct CVALUE*"))));
    if(({    (_condtional_value_X124=(left_value->c_value_without_cast_object_value));    _condtional_value_X124;    })) {
        __dec_obj33=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("&%s",left_value->c_value_without_cast_object_value));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj34=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("&%s",left_value->c_value));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __dec_obj35=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_value->type));
    come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mPointerNum++;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__24 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__24;
}

static void sNodeBase_finalize(struct sNodeBase* self){
_Bool _condtional_value_X120;
    if(({    (_condtional_value_X120=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X120;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
_Bool _condtional_value_X121;
_Bool _condtional_value_X122;
    if(({    (_condtional_value_X121=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X121;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X122=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X122;    })) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
_Bool _condtional_value_X125;
void* __right_value57 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj36;
_Bool _condtional_value_X130;
void* __right_value58 = (void*)0;
struct list_item$1CVALUE$ph* litem_9;
struct CVALUE* __dec_obj37;
void* __right_value59 = (void*)0;
struct list_item$1CVALUE$ph* litem_10;
struct CVALUE* __dec_obj38;
struct list$1CVALUE$ph* __result_obj__23;
    if(({    (_condtional_value_X125=(self->len==0));    _condtional_value_X125;    })) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value57=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj36=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X130=(self->len==1));    _condtional_value_X130;    })) {
        litem_9=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value58=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1CVALUE$ph*"))));
        litem_9->prev=self->head;
        litem_9->next=((void*)0);
        __dec_obj37=litem_9->item,
        litem_9->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_9;
        self->head->next=litem_9;
    }
    else {
        litem_10=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value59=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1CVALUE$ph*"))));
        litem_10->prev=self->tail;
        litem_10->next=((void*)0);
        __dec_obj38=litem_10->item,
        litem_10->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_10;
        self->tail=litem_10;
    }
    self->len++;
    __result_obj__23 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__23;
}

static void CVALUE_finalize(struct CVALUE* self){
_Bool _condtional_value_X126;
_Bool _condtional_value_X127;
_Bool _condtional_value_X128;
_Bool _condtional_value_X129;
    if(({    (_condtional_value_X126=(self!=((void*)0)&&self->c_value!=((void*)0)));    _condtional_value_X126;    })) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X127=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X127;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X128=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _condtional_value_X128;    })) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X129=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _condtional_value_X129;    })) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNode$ph* paren_block, struct sInfo* info){
void* __right_value60 = (void*)0;
struct list$1sNode$ph* __dec_obj39;
struct sParenBlockNode* __result_obj__25;
    ((struct sNodeBase*)(__right_value60=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value60, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj39=self->paren_block,
    self->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(paren_block);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__25 = (struct sParenBlockNode*)come_increment_ref_count(self);
    come_call_finalizer(sParenBlockNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sParenBlockNode_finalize, __result_obj__25, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__25;
}

char* sParenBlockNode_kind(struct sParenBlockNode* self){
void* __right_value61 = (void*)0;
char* __result_obj__26;
    __result_obj__26 = (char*)come_increment_ref_count(((char*)(__right_value61=__builtin_string("sParenBlockNode"))));
    (__right_value61 = come_decrement_ref_count(__right_value61, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__26 = come_decrement_ref_count(__result_obj__26, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__26;
}

_Bool sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo* info){
struct list$1sNode$ph* paren_block;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
struct buffer* buf;
struct sType* come_type;
struct list$1sNode$ph* o2_saved;
struct sNode* it;
_Bool _condtional_value_X135;
_Bool _condtional_value_X136;
_Bool _condtional_value_X139;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
_Bool _condtional_value_X140;
void* __right_value73 = (void*)0;
struct buffer* __dec_obj40;
_Bool _condtional_value_X141;
_Bool __result_obj__33;
_Bool _condtional_value_X143;
void* __right_value74 = (void*)0;
struct CVALUE* come_value;
_Bool _condtional_value_X144;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
struct sType* __dec_obj41;
_Bool _condtional_value_X145;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
_Bool _condtional_value_X146;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
struct CVALUE* come_value_13;
void* __right_value82 = (void*)0;
char* __dec_obj42;
struct sType* __dec_obj43;
_Bool __result_obj__34;
    paren_block=(struct list$1sNode$ph*)come_increment_ref_count(self->paren_block);
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05pre_op.c", 99, "struct buffer*"))));
    buffer_append_str(buf,"({");
    come_type=((void*)0);
    for(    ({    (_condtional_value_X135=(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(paren_block),it=list$1sNode$ph_begin(o2_saved)));    _condtional_value_X135;    });    ({    (_condtional_value_X136=(!list$1sNode$ph_end(o2_saved)));    _condtional_value_X136;    });    ({    (_condtional_value_X139=(it=list$1sNode$ph_next(o2_saved)));    _condtional_value_X139;    })    ){
        if(({        (_condtional_value_X140=(string_operator_equals(((char*)(__right_value65=it->kind(it->_protocol_obj))),"sIfNode")||string_operator_equals(((char*)(__right_value67=it->kind(it->_protocol_obj))),"sWhileNode")||string_operator_equals(((char*)(__right_value69=it->kind(it->_protocol_obj))),"sDoWhileNode")||string_operator_equals(((char*)(__right_value71=it->kind(it->_protocol_obj))),"sForNode")||((char*)(__right_value72=it->kind(it->_protocol_obj)))=="sSwitchNode"));        (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value67 = come_decrement_ref_count(__right_value67, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value71 = come_decrement_ref_count(__right_value71, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value72 = come_decrement_ref_count(__right_value72, (void*)0, (void*)0, 1, 0, (void*)0));
        _condtional_value_X140;        })) {
            add_come_code(info,((char*)(__right_value73=buffer_to_string(buf))));
            (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1, 0, (void*)0));
            __dec_obj40=buf,
            buf=((void*)0);
            come_call_finalizer(buffer_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(({        (_condtional_value_X141=(!node_compile(it,info)));        _condtional_value_X141;        })) {
            __result_obj__33 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, come_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__33;
        }
        if(({        (_condtional_value_X143=(list$1CVALUE$ph_length(info->stack)>0));        _condtional_value_X143;        })) {
            come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(({            (_condtional_value_X144=(buf));            _condtional_value_X144;            })) {
                buffer_append_str(buf,((char*)(__right_value75=string_operator_add(come_value->c_value,"; "))));
                (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                add_come_code(info,((char*)(__right_value76=string_operator_add(come_value->c_value,"; "))));
                (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            __dec_obj41=come_type,
            come_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
            come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(({            (_condtional_value_X145=(buf));            _condtional_value_X145;            })) {
                buffer_append_str(buf,((char*)(__right_value78=string_operator_add(info->module->mLastCode,"; "))));
                (__right_value78 = come_decrement_ref_count(__right_value78, (void*)0, (void*)0, 1, 0, (void*)0));
                buffer_append_str(buf,((char*)(__right_value79=string_operator_add(info->module->mLastCode2,"; "))));
                (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1, 0, (void*)0));
                transpiler_clear_last_code(info);
            }
            else {
                add_last_code_to_source(info);
            }
        }
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(({    (_condtional_value_X146=(buf));    _condtional_value_X146;    })) {
        buffer_append_str(buf,"})");
        come_value_13=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 144, "struct CVALUE*"))));
        __dec_obj42=come_value_13->c_value,
        come_value_13->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj43=come_value_13->type,
        come_value_13->type=(struct sType*)come_increment_ref_count(come_type);
        come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_13->var=((void*)0);
        add_come_last_code(info,"%s",come_value_13->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_13));
        come_call_finalizer(CVALUE_finalize, come_value_13, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        add_come_code(info,"});");
    }
    __result_obj__34 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, come_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__34;
}

static void sParenBlockNode_finalize(struct sParenBlockNode* self){
_Bool _condtional_value_X131;
_Bool _condtional_value_X132;
    if(({    (_condtional_value_X131=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X131;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X132=(self!=((void*)0)&&self->paren_block!=((void*)0)));    _condtional_value_X132;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
_Bool _condtional_value_X133;
struct sNode* result;
struct sNode* __result_obj__27;
_Bool _condtional_value_X134;
struct sNode* __result_obj__28;
struct sNode* result_11;
struct sNode* __result_obj__29;
result = (void*)0;
result_11 = (void*)0;
    if(({    (_condtional_value_X133=(self==((void*)0)));    _condtional_value_X133;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__27 = result;
        return __result_obj__27;
    }
    self->it=self->head;
    if(({    (_condtional_value_X134=(self->it));    _condtional_value_X134;    })) {
        __result_obj__28 = self->it->item;
        return __result_obj__28;
    }
    memset(&result_11,0,sizeof(struct sNode*));
    __result_obj__29 = result_11;
    return __result_obj__29;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
_Bool _condtional_value_X137;
struct sNode* result;
struct sNode* __result_obj__30;
_Bool _condtional_value_X138;
struct sNode* __result_obj__31;
struct sNode* result_12;
struct sNode* __result_obj__32;
result = (void*)0;
result_12 = (void*)0;
    if(({    (_condtional_value_X137=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X137;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__30 = result;
        return __result_obj__30;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X138=(self->it));    _condtional_value_X138;    })) {
        __result_obj__31 = self->it->item;
        return __result_obj__31;
    }
    memset(&result_12,0,sizeof(struct sNode*));
    __result_obj__32 = result_12;
    return __result_obj__32;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
_Bool _condtional_value_X142;
    if(({    (_condtional_value_X142=(self==((void*)0)));    _condtional_value_X142;    })) {
        return 0;
    }
    return self->len;
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __right_value83 = (void*)0;
struct sNode* __dec_obj44;
struct sDerefferenceNode* __result_obj__35;
    ((struct sNodeBase*)(__right_value83=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value83, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj44=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__35 = (struct sDerefferenceNode*)come_increment_ref_count(self);
    come_call_finalizer(sDerefferenceNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sDerefferenceNode_finalize, __result_obj__35, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__35;
}

char* sDerefferenceNode_kind(struct sDerefferenceNode* self){
void* __right_value84 = (void*)0;
char* __result_obj__36;
    __result_obj__36 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string("sDerefferenceNode"))));
    (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__36 = come_decrement_ref_count(__result_obj__36, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__36;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
struct sNode* value;
_Bool _condtional_value_X149;
_Bool __result_obj__37;
void* __right_value85 = (void*)0;
struct CVALUE* left_value;
struct sType* type;
_Bool calling_fun;
_Bool _condtional_value_X150;
_Bool _condtional_value_X151;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
struct CVALUE* come_value;
void* __right_value88 = (void*)0;
char* __dec_obj45;
void* __right_value89 = (void*)0;
struct sType* __dec_obj46;
_Bool __result_obj__38;
memset(&calling_fun, 0, sizeof(_Bool));
    value=(struct sNode*)come_increment_ref_count(self->value);
    if(({    (_condtional_value_X149=(!node_compile(value,info)));    _condtional_value_X149;    })) {
        __result_obj__37 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__37;
    }
    left_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType*)come_increment_ref_count(left_value->type);
    char* fun_name="operator_derefference";
    if(({    (_condtional_value_X150=(self->mQuote));    _condtional_value_X150;    })) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun_self((struct sType*)come_increment_ref_count(type),fun_name,(struct sNode*)come_increment_ref_count(value),left_value,info);
    }
    if(({    (_condtional_value_X151=(!calling_fun));    _condtional_value_X151;    })) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 201, "struct CVALUE*"))));
        __dec_obj45=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("*%s",left_value->c_value));
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj46=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_value->type));
        come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->type->mPointerNum--;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__38 = (_Bool)1;
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__38;
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
_Bool _condtional_value_X147;
_Bool _condtional_value_X148;
    if(({    (_condtional_value_X147=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X147;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X148=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X148;    })) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __right_value90 = (void*)0;
struct sNode* __dec_obj47;
struct sLogicalDenial* __result_obj__39;
    ((struct sNodeBase*)(__right_value90=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value90, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj47=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj47 ? __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__39 = (struct sLogicalDenial*)come_increment_ref_count(self);
    come_call_finalizer(sLogicalDenial_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sLogicalDenial_finalize, __result_obj__39, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__39;
}

char* sLogicalDenial_kind(struct sLogicalDenial* self){
void* __right_value91 = (void*)0;
char* __result_obj__40;
    __result_obj__40 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string("sLogicalDenial"))));
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__40 = come_decrement_ref_count(__result_obj__40, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__40;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
_Bool _condtional_value_X154;
void* __right_value92 = (void*)0;
struct CVALUE* come_value;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct CVALUE* come_value2;
void* __right_value95 = (void*)0;
char* __dec_obj48;
void* __right_value96 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__41;
    if(({    (_condtional_value_X154=(!node_compile(self->value,info)));    _condtional_value_X154;    })) {
        return (_Bool)0;
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 239, "struct CVALUE*"))));
    __dec_obj48=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("!%s",come_value->c_value));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj49=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    add_come_last_code(info,"%s",come_value2->c_value);
    __result_obj__41 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__41;
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
_Bool _condtional_value_X152;
_Bool _condtional_value_X153;
    if(({    (_condtional_value_X152=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X152;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X153=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X153;    })) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo* info){
void* __right_value97 = (void*)0;
struct sNode* __dec_obj50;
struct sLogicalDenial2* __result_obj__42;
    ((struct sNodeBase*)(__right_value97=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value97, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj50=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__42 = (struct sLogicalDenial2*)come_increment_ref_count(self);
    come_call_finalizer(sLogicalDenial2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sLogicalDenial2_finalize, __result_obj__42, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__42;
}

char* sLogicalDenial2_kind(struct sLogicalDenial2* self){
void* __right_value98 = (void*)0;
char* __result_obj__43;
    __result_obj__43 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string("sLogicalDenial"))));
    (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__43;
}

_Bool sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo* info){
_Bool _condtional_value_X157;
void* __right_value99 = (void*)0;
struct CVALUE* come_value;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct CVALUE* come_value2;
void* __right_value102 = (void*)0;
char* __dec_obj51;
void* __right_value103 = (void*)0;
struct sType* __dec_obj52;
_Bool __result_obj__44;
    if(({    (_condtional_value_X157=(!node_compile(self->value,info)));    _condtional_value_X157;    })) {
        return (_Bool)0;
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 275, "struct CVALUE*"))));
    __dec_obj51=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("!!%s",come_value->c_value));
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj52=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    add_come_last_code(info,"%s",come_value2->c_value);
    __result_obj__44 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__44;
}

static void sLogicalDenial2_finalize(struct sLogicalDenial2* self){
_Bool _condtional_value_X155;
_Bool _condtional_value_X156;
    if(({    (_condtional_value_X155=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X155;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X156=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X156;    })) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __right_value104 = (void*)0;
struct sNode* __dec_obj53;
struct sReverseNode* __result_obj__45;
    ((struct sNodeBase*)(__right_value104=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value104, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj53=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__45 = (struct sReverseNode*)come_increment_ref_count(self);
    come_call_finalizer(sReverseNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sReverseNode_finalize, __result_obj__45, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__45;
}

char* sReverseNode_kind(struct sReverseNode* self){
void* __right_value105 = (void*)0;
char* __result_obj__46;
    __result_obj__46 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string("sReverseNode"))));
    (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__46 = come_decrement_ref_count(__result_obj__46, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__46;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
struct sNode* value;
_Bool _condtional_value_X160;
void* __right_value106 = (void*)0;
struct CVALUE* left_value;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
struct CVALUE* come_value;
void* __right_value109 = (void*)0;
char* __dec_obj54;
void* __right_value110 = (void*)0;
struct sType* __dec_obj55;
_Bool __result_obj__47;
    value=self->value;
    if(({    (_condtional_value_X160=(!node_compile(value,info)));    _condtional_value_X160;    })) {
        return (_Bool)0;
    }
    left_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 313, "struct CVALUE*"))));
    __dec_obj54=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("!%s",left_value->c_value));
    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj55=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_value->type));
    come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mPointerNum--;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__47 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__47;
}

static void sReverseNode_finalize(struct sReverseNode* self){
_Bool _condtional_value_X158;
_Bool _condtional_value_X159;
    if(({    (_condtional_value_X158=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X158;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X159=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X159;    })) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __right_value111 = (void*)0;
struct sNode* __dec_obj56;
struct sMinusNode2* __result_obj__48;
    ((struct sNodeBase*)(__right_value111=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value111, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj56=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__48 = (struct sMinusNode2*)come_increment_ref_count(self);
    come_call_finalizer(sMinusNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sMinusNode2_finalize, __result_obj__48, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__48;
}

char* sMinusNode2_kind(struct sMinusNode2* self){
void* __right_value112 = (void*)0;
char* __result_obj__49;
    __result_obj__49 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string("sMinusNode2"))));
    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__49;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
_Bool _condtional_value_X163;
void* __right_value113 = (void*)0;
struct CVALUE* come_value;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
struct CVALUE* come_value2;
void* __right_value116 = (void*)0;
char* __dec_obj57;
void* __right_value117 = (void*)0;
struct sType* __dec_obj58;
_Bool __result_obj__50;
    if(({    (_condtional_value_X163=(!node_compile(self->value,info)));    _condtional_value_X163;    })) {
        return (_Bool)0;
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 350, "struct CVALUE*"))));
    __dec_obj57=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("-%s",come_value->c_value));
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj58=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    add_come_last_code(info,"%s",come_value2->c_value);
    __result_obj__50 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__50;
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
_Bool _condtional_value_X161;
_Bool _condtional_value_X162;
    if(({    (_condtional_value_X161=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X161;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X162=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X162;    })) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __right_value118 = (void*)0;
struct sNode* __dec_obj59;
struct sPlusPlusNode2* __result_obj__51;
    ((struct sNodeBase*)(__right_value118=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value118, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj59=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__51 = (struct sPlusPlusNode2*)come_increment_ref_count(self);
    come_call_finalizer(sPlusPlusNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sPlusPlusNode2_finalize, __result_obj__51, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__51;
}

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self){
void* __right_value119 = (void*)0;
char* __result_obj__52;
    __result_obj__52 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string("sPlusPlusNode2"))));
    (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__52;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
_Bool _condtional_value_X166;
void* __right_value120 = (void*)0;
struct CVALUE* come_value;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
struct CVALUE* come_value2;
void* __right_value123 = (void*)0;
char* __dec_obj60;
void* __right_value124 = (void*)0;
struct sType* __dec_obj61;
_Bool __result_obj__53;
    if(({    (_condtional_value_X166=(!node_compile(self->value,info)));    _condtional_value_X166;    })) {
        return (_Bool)0;
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 386, "struct CVALUE*"))));
    __dec_obj60=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("++%s",come_value->c_value));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj61=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    add_come_last_code(info,"%s",come_value2->c_value);
    __result_obj__53 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__53;
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
_Bool _condtional_value_X164;
_Bool _condtional_value_X165;
    if(({    (_condtional_value_X164=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X164;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X165=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X165;    })) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __right_value125 = (void*)0;
struct sNode* __dec_obj62;
struct sMinusMinusNode2* __result_obj__54;
    ((struct sNodeBase*)(__right_value125=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value125, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj62=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__54 = (struct sMinusMinusNode2*)come_increment_ref_count(self);
    come_call_finalizer(sMinusMinusNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sMinusMinusNode2_finalize, __result_obj__54, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__54;
}

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self){
void* __right_value126 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value126=__builtin_string("sMinusMinusNode2"))));
    (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__55;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
_Bool _condtional_value_X169;
void* __right_value127 = (void*)0;
struct CVALUE* come_value;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct CVALUE* come_value2;
void* __right_value130 = (void*)0;
char* __dec_obj63;
void* __right_value131 = (void*)0;
struct sType* __dec_obj64;
_Bool __result_obj__56;
    if(({    (_condtional_value_X169=(!node_compile(self->value,info)));    _condtional_value_X169;    })) {
        return (_Bool)0;
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 422, "struct CVALUE*"))));
    __dec_obj63=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("--%s",come_value->c_value));
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj64=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    add_come_last_code(info,"%s",come_value2->c_value);
    __result_obj__56 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__56;
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
_Bool _condtional_value_X167;
_Bool _condtional_value_X168;
    if(({    (_condtional_value_X167=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X167;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X168=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X168;    })) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, _Bool clang, _Bool comma, struct sInfo* info, _Bool if_result){
void* __right_value132 = (void*)0;
void* __right_value167 = (void*)0;
struct sBlock* __dec_obj77;
struct sNormalBlock* __result_obj__89;
    ((struct sNodeBase*)(__right_value132=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value132, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj77=self->mBlock,
    self->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(block));
    come_call_finalizer(sBlock_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->clang=clang;
    self->comma=comma;
    __result_obj__89 = (struct sNormalBlock*)come_increment_ref_count(self);
    come_call_finalizer(sNormalBlock_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sNormalBlock_finalize, __result_obj__89, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__89;
}

_Bool sNormalBlock_terminated(struct sNormalBlock* self){
    return (_Bool)1;
}

char* sNormalBlock_kind(struct sNormalBlock* self){
void* __right_value168 = (void*)0;
char* __result_obj__90;
    __result_obj__90 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string("sNormalBlock"))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__90;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
struct sBlock* block;
_Bool _condtional_value_X287;
_Bool come_c;
_Bool _condtional_value_X288;
_Bool _condtional_value_X289;
    block=self->mBlock;
    if(({    (_condtional_value_X287=(!self->comma));    _condtional_value_X287;    })) {
        add_come_code(info,"{\n");
    }
    come_c=gComeC;
    if(({    (_condtional_value_X288=(self->clang));    _condtional_value_X288;    })) {
        gComeC=(_Bool)1;
    }
    transpile_block(block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,self->comma,(_Bool)0);
    if(({    (_condtional_value_X289=(!self->comma));    _condtional_value_X289;    })) {
        add_come_code(info,"}\n");
    }
    gComeC=come_c;
    transpiler_clear_last_code(info);
    return (_Bool)1;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
_Bool _condtional_value_X170;
struct sBlock* __result_obj__57;
void* __right_value133 = (void*)0;
struct sBlock* result;
_Bool _condtional_value_X171;
void* __right_value134 = (void*)0;
struct list$1sNode$ph* __dec_obj65;
_Bool _condtional_value_X172;
void* __right_value166 = (void*)0;
struct sVarTable* __dec_obj76;
_Bool _condtional_value_X282;
struct sBlock* __result_obj__88;
    if(({    (_condtional_value_X170=(self==(void*)0));    _condtional_value_X170;    })) {
        __result_obj__57 = (void*)0;
        return __result_obj__57;
    }
    result=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(({    (_condtional_value_X171=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _condtional_value_X171;    })) {
        __dec_obj65=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X172=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _condtional_value_X172;    })) {
        __dec_obj76=result->mVarTable,
        result->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X282=(self!=((void*)0)));    _condtional_value_X282;    })) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__88 = result;
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__88;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
_Bool _condtional_value_X173;
struct sVarTable* __result_obj__58;
void* __right_value135 = (void*)0;
struct sVarTable* result;
_Bool _condtional_value_X174;
void* __right_value165 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj75;
_Bool _condtional_value_X280;
_Bool _condtional_value_X281;
struct sVarTable* __result_obj__87;
    if(({    (_condtional_value_X173=(self==(void*)0));    _condtional_value_X173;    })) {
        __result_obj__58 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__58, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__58;
    }
    result=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(({    (_condtional_value_X174=(self!=((void*)0)&&self->mVars!=((void*)0)));    _condtional_value_X174;    })) {
        __dec_obj75=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X280=(self!=((void*)0)));    _condtional_value_X280;    })) {
        result->mGlobal=self->mGlobal;
    }
    if(({    (_condtional_value_X281=(self!=((void*)0)));    _condtional_value_X281;    })) {
        result->mParent=self->mParent;
    }
    __result_obj__87 = (struct sVarTable*)come_increment_ref_count(result);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__87, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__87;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X175;
struct map$2char$phsVar$ph* __result_obj__59;
void* __right_value136 = (void*)0;
void* __right_value142 = (void*)0;
struct map$2char$phsVar$ph* result;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
struct list$1char$ph* __dec_obj67;
char* it;
_Bool _condtional_value_X196;
_Bool _condtional_value_X197;
_Bool _condtional_value_X200;
struct sVar* default_value;
void* __right_value145 = (void*)0;
struct sVar* it2;
_Bool _condtional_value_X206;
void* __right_value154 = (void*)0;
void* __right_value160 = (void*)0;
_Bool _condtional_value_X268;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
_Bool _condtional_value_X269;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__86;
default_value = (void*)0;
    if(({    (_condtional_value_X175=(self==((void*)0)));    _condtional_value_X175;    })) {
        __result_obj__59 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__59, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__59;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/comelang.h", 2012, "struct map$2char$phsVar$ph*"))));
    __dec_obj67=result->key_list,
    result->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 2014, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(    ({    (_condtional_value_X196=(it=map$2char$phsVar$ph_begin(self)));    _condtional_value_X196;    });    ({    (_condtional_value_X197=(!map$2char$phsVar$ph_end(self)));    _condtional_value_X197;    });    ({    (_condtional_value_X200=(it=map$2char$phsVar$ph_next(self)));    _condtional_value_X200;    })    ){
        memset(&default_value,0,sizeof(struct sVar*));
        it2=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value)));
        if(({        (_condtional_value_X206=(1&&1));        _condtional_value_X206;        })) {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/comelang.h", 2023, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(({        (_condtional_value_X268=(1));        _condtional_value_X268;        })) {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/comelang.h", 2026, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(({        (_condtional_value_X269=(1));        _condtional_value_X269;        })) {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else {
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__86 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__86, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__86;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i;
_Bool _condtional_value_X176;
_Bool _condtional_value_X177;
_Bool _condtional_value_X178;
_Bool _condtional_value_X179;
_Bool _condtional_value_X180;
int i_14;
_Bool _condtional_value_X185;
_Bool _condtional_value_X186;
_Bool _condtional_value_X187;
_Bool _condtional_value_X188;
_Bool _condtional_value_X189;
    for(    ({    (_condtional_value_X176=(i=0));    _condtional_value_X176;    });    ({    (_condtional_value_X177=(i<self->size));    _condtional_value_X177;    });    ({    (_condtional_value_X178=(i++));    _condtional_value_X178;    })    ){
        if(({        (_condtional_value_X179=(self->item_existance[i]));        _condtional_value_X179;        })) {
            if(({            (_condtional_value_X180=(1));            _condtional_value_X180;            })) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X185=(i_14=0));    _condtional_value_X185;    });    ({    (_condtional_value_X186=(i_14<self->size));    _condtional_value_X186;    });    ({    (_condtional_value_X187=(i_14++));    _condtional_value_X187;    })    ){
        if(({        (_condtional_value_X188=(self->item_existance[i_14]));        _condtional_value_X188;        })) {
            if(({            (_condtional_value_X189=(1));            _condtional_value_X189;            })) {
                (self->keys[i_14] = come_decrement_ref_count(self->keys[i_14], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void sVar_finalize(struct sVar* self){
_Bool _condtional_value_X181;
_Bool _condtional_value_X182;
_Bool _condtional_value_X183;
_Bool _condtional_value_X184;
    if(({    (_condtional_value_X181=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X181;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X182=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _condtional_value_X182;    })) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X183=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X183;    })) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X184=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X184;    })) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
int i;
_Bool _condtional_value_X190;
_Bool _condtional_value_X191;
_Bool _condtional_value_X192;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct list$1char$ph* __dec_obj66;
struct map$2char$phsVar$ph* __result_obj__61;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value137=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1941, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value138=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1942, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value139=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1943, "_Bool*"))));
    for(    ({    (_condtional_value_X190=(i=0));    _condtional_value_X190;    });    ({    (_condtional_value_X191=(i<128));    _condtional_value_X191;    });    ({    (_condtional_value_X192=(i++));    _condtional_value_X192;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj66=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1953, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__61 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__61, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__61;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__60;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__60 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__60, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__60;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it;
_Bool _condtional_value_X193;
struct list_item$1char$p* prev_it;
    it=self->head;
    while(({    (_condtional_value_X193=(it!=((void*)0)));    _condtional_value_X193;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X194;
char* result;
char* __result_obj__62;
_Bool _condtional_value_X195;
char* __result_obj__63;
char* result_15;
char* __result_obj__64;
result = (void*)0;
result_15 = (void*)0;
    if(({    (_condtional_value_X194=(self==((void*)0)));    _condtional_value_X194;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__62 = result;
        return __result_obj__62;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X195=(self->key_list->it));    _condtional_value_X195;    })) {
        __result_obj__63 = self->key_list->it->item;
        return __result_obj__63;
    }
    memset(&result_15,0,sizeof(char*));
    __result_obj__64 = result_15;
    return __result_obj__64;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X198;
char* result;
char* __result_obj__65;
_Bool _condtional_value_X199;
char* __result_obj__66;
char* result_16;
char* __result_obj__67;
result = (void*)0;
result_16 = (void*)0;
    if(({    (_condtional_value_X198=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X198;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__65 = result;
        return __result_obj__65;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X199=(self->key_list->it));    _condtional_value_X199;    })) {
        __result_obj__66 = self->key_list->it->item;
        return __result_obj__66;
    }
    memset(&result_16,0,sizeof(char*));
    __result_obj__67 = result_16;
    return __result_obj__67;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X201;
_Bool _condtional_value_X202;
_Bool _condtional_value_X203;
struct sVar* __result_obj__68;
_Bool _condtional_value_X204;
_Bool _condtional_value_X205;
struct sVar* __result_obj__69;
struct sVar* __result_obj__70;
struct sVar* __result_obj__71;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X201=((_Bool)1));    _condtional_value_X201;    })) {
        if(({        (_condtional_value_X202=(self->item_existance[it]));        _condtional_value_X202;        })) {
            if(({            (_condtional_value_X203=(string_equals(self->keys[it],key)));            _condtional_value_X203;            })) {
                __result_obj__68 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__68, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__68;
            }
            it++;
            if(({            (_condtional_value_X204=(it>=self->size));            _condtional_value_X204;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X205=(it==hash));            _condtional_value_X205;            })) {
                __result_obj__69 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__69, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__69;
            }
        }
        else {
            __result_obj__70 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__70, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__70;
        }
    }
    __result_obj__71 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__71, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__71;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
_Bool _condtional_value_X207;
unsigned int hash;
int it;
_Bool _condtional_value_X215;
_Bool _condtional_value_X216;
_Bool _condtional_value_X217;
_Bool _condtional_value_X218;
_Bool _condtional_value_X243;
_Bool _condtional_value_X244;
_Bool _condtional_value_X245;
_Bool _condtional_value_X246;
_Bool _condtional_value_X247;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X250;
_Bool _condtional_value_X251;
_Bool _condtional_value_X254;
_Bool _condtional_value_X255;
_Bool _condtional_value_X256;
struct map$2char$phsVar$ph* __result_obj__83;
    if(({    (_condtional_value_X207=(self->len*2>=self->size));    _condtional_value_X207;    })) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X215=((_Bool)1));    _condtional_value_X215;    })) {
        if(({        (_condtional_value_X216=(self->item_existance[it]));        _condtional_value_X216;        })) {
            if(({            (_condtional_value_X217=(string_equals(self->keys[it],key)));            _condtional_value_X217;            })) {
                if(({                (_condtional_value_X218=(1));                _condtional_value_X218;                })) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X243=(1));                _condtional_value_X243;                })) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X244=(it>=self->size));            _condtional_value_X244;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X245=(it==hash));            _condtional_value_X245;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X246=(1));            _condtional_value_X246;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X247=(1));            _condtional_value_X247;            })) {
                self->items[it]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X250=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X250;    });    ({    (_condtional_value_X251=(!list$1char$ph_end(self->key_list)));    _condtional_value_X251;    });    ({    (_condtional_value_X254=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X254;    })    ){
        if(({        (_condtional_value_X255=(string_equals(it2,key)));        _condtional_value_X255;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X256=(!same_key_exist));    _condtional_value_X256;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__83 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__83;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size;
void* __right_value146 = (void*)0;
char** keys;
void* __right_value147 = (void*)0;
struct sVar** items;
void* __right_value148 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X208;
_Bool _condtional_value_X209;
_Bool _condtional_value_X210;
struct sVar* default_value;
void* __right_value149 = (void*)0;
struct sVar* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X211;
_Bool _condtional_value_X212;
_Bool _condtional_value_X213;
_Bool _condtional_value_X214;
struct sVar* default_value_17;
void* __right_value150 = (void*)0;
default_value = (void*)0;
default_value_17 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value146=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2221, "char**"))));
    items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value147=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size)), "/usr/local/include/comelang.h", 2222, "struct sVar**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value148=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2223, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X208=(it=map$2char$phsVar$ph_begin(self)));    _condtional_value_X208;    });    ({    (_condtional_value_X209=(!map$2char$phsVar$ph_end(self)));    _condtional_value_X209;    });    ({    (_condtional_value_X210=(it=map$2char$phsVar$ph_next(self)));    _condtional_value_X210;    })    ){
        memset(&default_value,0,sizeof(struct sVar*));
        it2=((struct sVar*)(__right_value149=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value))));
        come_call_finalizer(sVar_finalize, __right_value149, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X211=((_Bool)1));        _condtional_value_X211;        })) {
            if(({            (_condtional_value_X212=(item_existance[n]));            _condtional_value_X212;            })) {
                n++;
                if(({                (_condtional_value_X213=(n>=size));                _condtional_value_X213;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X214=(n==hash));                _condtional_value_X214;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sVar*)(__right_value150=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value_17))));
                come_call_finalizer(sVar_finalize, __right_value150, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sVar_finalize, default_value_17, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_17, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
_Bool _condtional_value_X219;
_Bool _condtional_value_X220;
struct list$1char$ph* __result_obj__75;
    it2=0;
    it=self->head;
    while(({    (_condtional_value_X219=(it!=((void*)0)));    _condtional_value_X219;    })) {
        if(({        (_condtional_value_X220=(string_equals(it->item,item)));        _condtional_value_X220;        })) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__75 = self;
    return __result_obj__75;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
_Bool _condtional_value_X221;
_Bool _condtional_value_X222;
_Bool _condtional_value_X223;
int tmp;
_Bool _condtional_value_X224;
_Bool _condtional_value_X225;
_Bool _condtional_value_X226;
struct list$1char$ph* __result_obj__72;
_Bool _condtional_value_X227;
_Bool _condtional_value_X229;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X230;
_Bool _condtional_value_X231;
struct list_item$1char$ph* prev_it;
_Bool _condtional_value_X232;
_Bool _condtional_value_X233;
struct list_item$1char$ph* it_18;
int i_19;
_Bool _condtional_value_X234;
_Bool _condtional_value_X235;
_Bool _condtional_value_X236;
struct list_item$1char$ph* prev_it_20;
struct list_item$1char$ph* it_21;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_22;
_Bool _condtional_value_X237;
_Bool _condtional_value_X238;
_Bool _condtional_value_X239;
_Bool _condtional_value_X240;
struct list_item$1char$ph* prev_it_23;
_Bool _condtional_value_X241;
_Bool _condtional_value_X242;
struct list$1char$ph* __result_obj__74;
    if(({    (_condtional_value_X221=(head<0));    _condtional_value_X221;    })) {
        head+=self->len;
    }
    if(({    (_condtional_value_X222=(tail<0));    _condtional_value_X222;    })) {
        tail+=self->len+1;
    }
    if(({    (_condtional_value_X223=(head>tail));    _condtional_value_X223;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_condtional_value_X224=(head<0));    _condtional_value_X224;    })) {
        head=0;
    }
    if(({    (_condtional_value_X225=(tail>self->len));    _condtional_value_X225;    })) {
        tail=self->len;
    }
    if(({    (_condtional_value_X226=(head==tail));    _condtional_value_X226;    })) {
        __result_obj__72 = self;
        return __result_obj__72;
    }
    if(({    (_condtional_value_X227=(head==0&&tail==self->len));    _condtional_value_X227;    })) {
        list$1char$ph_reset(self);
    }
    else if(({    (_condtional_value_X229=(head==0));    _condtional_value_X229;    })) {
        it=self->head;
        i=0;
        while(({        (_condtional_value_X230=(it!=((void*)0)));        _condtional_value_X230;        })) {
            if(({            (_condtional_value_X231=(i<tail));            _condtional_value_X231;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(({            (_condtional_value_X232=(i==tail));            _condtional_value_X232;            })) {
                self->head=it;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it=it->next;
                i++;
            }
        }
    }
    else if(({    (_condtional_value_X233=(tail==self->len));    _condtional_value_X233;    })) {
        it_18=self->head;
        i_19=0;
        while(({        (_condtional_value_X234=(it_18!=((void*)0)));        _condtional_value_X234;        })) {
            if(({            (_condtional_value_X235=(i_19==head));            _condtional_value_X235;            })) {
                self->tail=it_18->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_condtional_value_X236=(i_19>=head));            _condtional_value_X236;            })) {
                prev_it_20=it_18;
                it_18=it_18->next;
                i_19++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_18=it_18->next;
                i_19++;
            }
        }
    }
    else {
        it_21=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_22=0;
        while(({        (_condtional_value_X237=(it_21!=((void*)0)));        _condtional_value_X237;        })) {
            if(({            (_condtional_value_X238=(i_22==head));            _condtional_value_X238;            })) {
                head_prev_it=it_21->prev;
            }
            if(({            (_condtional_value_X239=(i_22==tail));            _condtional_value_X239;            })) {
                tail_it=it_21;
            }
            if(({            (_condtional_value_X240=(i_22>=head&&i_22<tail));            _condtional_value_X240;            })) {
                prev_it_23=it_21;
                it_21=it_21->next;
                i_22++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_23, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_21=it_21->next;
                i_22++;
            }
        }
        if(({        (_condtional_value_X241=(head_prev_it!=((void*)0)));        _condtional_value_X241;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_condtional_value_X242=(tail_it!=((void*)0)));        _condtional_value_X242;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__74 = self;
    return __result_obj__74;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X228;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__73;
    it=self->head;
    while(({    (_condtional_value_X228=(it!=((void*)0)));    _condtional_value_X228;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__73 = self;
    return __result_obj__73;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
_Bool _condtional_value_X248;
char* result;
char* __result_obj__76;
_Bool _condtional_value_X249;
char* __result_obj__77;
char* result_24;
char* __result_obj__78;
result = (void*)0;
result_24 = (void*)0;
    if(({    (_condtional_value_X248=(self==((void*)0)));    _condtional_value_X248;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__76 = result;
        return __result_obj__76;
    }
    self->it=self->head;
    if(({    (_condtional_value_X249=(self->it));    _condtional_value_X249;    })) {
        __result_obj__77 = self->it->item;
        return __result_obj__77;
    }
    memset(&result_24,0,sizeof(char*));
    __result_obj__78 = result_24;
    return __result_obj__78;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
_Bool _condtional_value_X252;
char* result;
char* __result_obj__79;
_Bool _condtional_value_X253;
char* __result_obj__80;
char* result_25;
char* __result_obj__81;
result = (void*)0;
result_25 = (void*)0;
    if(({    (_condtional_value_X252=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X252;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__79 = result;
        return __result_obj__79;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X253=(self->it));    _condtional_value_X253;    })) {
        __result_obj__80 = self->it->item;
        return __result_obj__80;
    }
    memset(&result_25,0,sizeof(char*));
    __result_obj__81 = result_25;
    return __result_obj__81;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X257;
void* __right_value151 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj68;
_Bool _condtional_value_X258;
void* __right_value152 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj69;
void* __right_value153 = (void*)0;
struct list_item$1char$ph* litem_27;
char* __dec_obj70;
struct list$1char$ph* __result_obj__82;
    if(({    (_condtional_value_X257=(self->len==0));    _condtional_value_X257;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value151=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj68=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X258=(self->len==1));    _condtional_value_X258;    })) {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value152=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1char$ph*"))));
        litem_26->prev=self->head;
        litem_26->next=((void*)0);
        __dec_obj69=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_26;
        self->head->next=litem_26;
    }
    else {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value153=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1char$ph*"))));
        litem_27->prev=self->tail;
        litem_27->next=((void*)0);
        __dec_obj70=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_27;
        self->tail=litem_27;
    }
    self->len++;
    __result_obj__82 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__82;
}

static struct sVar* sVar_clone(struct sVar* self){
_Bool _condtional_value_X259;
struct sVar* __result_obj__84;
void* __right_value155 = (void*)0;
struct sVar* result;
_Bool _condtional_value_X260;
void* __right_value156 = (void*)0;
char* __dec_obj71;
_Bool _condtional_value_X261;
void* __right_value157 = (void*)0;
char* __dec_obj72;
_Bool _condtional_value_X262;
void* __right_value158 = (void*)0;
struct sType* __dec_obj73;
_Bool _condtional_value_X263;
_Bool _condtional_value_X264;
_Bool _condtional_value_X265;
_Bool _condtional_value_X266;
_Bool _condtional_value_X267;
void* __right_value159 = (void*)0;
char* __dec_obj74;
struct sVar* __result_obj__85;
    if(({    (_condtional_value_X259=(self==(void*)0));    _condtional_value_X259;    })) {
        __result_obj__84 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__84, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__84;
    }
    result=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(({    (_condtional_value_X260=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X260;    })) {
        __dec_obj71=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X261=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _condtional_value_X261;    })) {
        __dec_obj72=result->mCValueName,
        result->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X262=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X262;    })) {
        __dec_obj73=result->mType,
        result->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X263=(self!=((void*)0)));    _condtional_value_X263;    })) {
        result->mGlobal=self->mGlobal;
    }
    if(({    (_condtional_value_X264=(self!=((void*)0)));    _condtional_value_X264;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_condtional_value_X265=(self!=((void*)0)));    _condtional_value_X265;    })) {
        result->mNoFree=self->mNoFree;
    }
    if(({    (_condtional_value_X266=(self!=((void*)0)));    _condtional_value_X266;    })) {
        result->mComma=self->mComma;
    }
    if(({    (_condtional_value_X267=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X267;    })) {
        __dec_obj74=result->mFunName,
        result->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__85 = (struct sVar*)come_increment_ref_count(result);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__85, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__85;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i;
_Bool _condtional_value_X270;
_Bool _condtional_value_X271;
_Bool _condtional_value_X272;
_Bool _condtional_value_X273;
_Bool _condtional_value_X274;
int i_28;
_Bool _condtional_value_X275;
_Bool _condtional_value_X276;
_Bool _condtional_value_X277;
_Bool _condtional_value_X278;
_Bool _condtional_value_X279;
    for(    ({    (_condtional_value_X270=(i=0));    _condtional_value_X270;    });    ({    (_condtional_value_X271=(i<self->size));    _condtional_value_X271;    });    ({    (_condtional_value_X272=(i++));    _condtional_value_X272;    })    ){
        if(({        (_condtional_value_X273=(self->item_existance[i]));        _condtional_value_X273;        })) {
            if(({            (_condtional_value_X274=(1));            _condtional_value_X274;            })) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X275=(i_28=0));    _condtional_value_X275;    });    ({    (_condtional_value_X276=(i_28<self->size));    _condtional_value_X276;    });    ({    (_condtional_value_X277=(i_28++));    _condtional_value_X277;    })    ){
        if(({        (_condtional_value_X278=(self->item_existance[i_28]));        _condtional_value_X278;        })) {
            if(({            (_condtional_value_X279=(1));            _condtional_value_X279;            })) {
                (self->keys[i_28] = come_decrement_ref_count(self->keys[i_28], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void sBlock_finalize(struct sBlock* self){
_Bool _condtional_value_X283;
_Bool _condtional_value_X284;
    if(({    (_condtional_value_X283=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _condtional_value_X283;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X284=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _condtional_value_X284;    })) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
_Bool _condtional_value_X285;
_Bool _condtional_value_X286;
    if(({    (_condtional_value_X285=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X285;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X286=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X286;    })) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __right_value169 = (void*)0;
struct sNode* __dec_obj78;
struct sComplement* __result_obj__91;
    ((struct sNodeBase*)(__right_value169=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value169, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj78=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__91 = (struct sComplement*)come_increment_ref_count(self);
    come_call_finalizer(sComplement_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sComplement_finalize, __result_obj__91, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__91;
}

char* sComplement_kind(struct sComplement* self){
void* __right_value170 = (void*)0;
char* __result_obj__92;
    __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string("sComplement"))));
    (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__92;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
_Bool _condtional_value_X292;
void* __right_value171 = (void*)0;
struct CVALUE* come_value;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct CVALUE* come_value2;
void* __right_value174 = (void*)0;
char* __dec_obj79;
void* __right_value175 = (void*)0;
struct sType* __dec_obj80;
_Bool __result_obj__93;
    if(({    (_condtional_value_X292=(!node_compile(self->value,info)));    _condtional_value_X292;    })) {
        return (_Bool)0;
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 505, "struct CVALUE*"))));
    __dec_obj79=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("~%s",come_value->c_value));
    __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj80=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    add_come_last_code(info,"%s",come_value2->c_value);
    __result_obj__93 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__93;
}

static void sComplement_finalize(struct sComplement* self){
_Bool _condtional_value_X290;
_Bool _condtional_value_X291;
    if(({    (_condtional_value_X290=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X290;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X291=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X291;    })) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct sNode* __dec_obj81;
struct sParenNode* __result_obj__94;
    ((struct sNodeBase*)(__right_value176=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value176, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj81=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__94 = (struct sParenNode*)come_increment_ref_count(self);
    come_call_finalizer(sParenNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sParenNode_finalize, __result_obj__94, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__94;
}

char* sParenNode_kind(struct sParenNode* self){
void* __right_value178 = (void*)0;
char* __result_obj__95;
    __result_obj__95 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string("sParenNode"))));
    (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__95 = come_decrement_ref_count(__result_obj__95, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__95;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
struct sNode* left;
_Bool _condtional_value_X295;
void* __right_value179 = (void*)0;
struct CVALUE* left_value;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct CVALUE* come_value;
void* __right_value182 = (void*)0;
char* __dec_obj82;
void* __right_value183 = (void*)0;
struct sType* __dec_obj83;
_Bool __result_obj__96;
    left=self->mLeft;
    if(({    (_condtional_value_X295=(!node_compile(left,info)));    _condtional_value_X295;    })) {
        return (_Bool)0;
    }
    left_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 543, "struct CVALUE*"))));
    __dec_obj82=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)",left_value->c_value));
    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj83=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_value->type));
    come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__96 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__96;
}

static void sParenNode_finalize(struct sParenNode* self){
_Bool _condtional_value_X293;
_Bool _condtional_value_X294;
    if(({    (_condtional_value_X293=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X293;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X294=(self!=((void*)0)&&self->mLeft!=((void*)0)));    _condtional_value_X294;    })) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct sType* __dec_obj84;
void* __right_value186 = (void*)0;
struct sNode* __dec_obj85;
struct sCastNode* __result_obj__97;
    ((struct sNodeBase*)(__right_value184=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value184, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj84=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj85=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj85 ? __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__97 = (struct sCastNode*)come_increment_ref_count(self);
    come_call_finalizer(sCastNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sCastNode_finalize, __result_obj__97, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__97;
}

char* sCastNode_kind(struct sCastNode* self){
void* __right_value187 = (void*)0;
char* __result_obj__98;
    __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value187=__builtin_string("sCastNode"))));
    (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__98;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
struct sType* type;
struct sNode* left;
_Bool _condtional_value_X299;
void* __right_value188 = (void*)0;
struct CVALUE* left_value;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct sType* type2;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct CVALUE* come_value;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
char* __dec_obj86;
void* __right_value195 = (void*)0;
struct sType* __dec_obj87;
_Bool __result_obj__99;
    type=self->mType;
    left=self->mLeft;
    if(({    (_condtional_value_X299=(!node_compile(left,info)));    _condtional_value_X299;    })) {
        return (_Bool)0;
    }
    left_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(type)),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 585, "struct CVALUE*"))));
    cast_type(type2,left_value->type,left_value,info);
    __dec_obj86=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",((char*)(__right_value193=make_type_name_string(type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)1,(_Bool)0))),left_value->c_value));
    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
    (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1, 0, (void*)0));
    __dec_obj87=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__99 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__99;
}

static void sCastNode_finalize(struct sCastNode* self){
_Bool _condtional_value_X296;
_Bool _condtional_value_X297;
_Bool _condtional_value_X298;
    if(({    (_condtional_value_X296=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X296;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X297=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X297;    })) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X298=(self!=((void*)0)&&self->mLeft!=((void*)0)));    _condtional_value_X298;    })) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result){
int sline_real;
void* __right_value196 = (void*)0;
struct sBlock* block;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct sNode* _inf_value1;
struct sNormalBlock* _inf_obj_value1;
void* __right_value202 = (void*)0;
struct sNode* __result_obj__102;
    sline_real=info->sline_real;
    info->sline_real=info->sline;
    block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    info->sline_real=sline_real;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 609, "struct sNode");
    _inf_obj_value1=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(__right_value198=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count((struct sNormalBlock*)come_calloc_v2(1, sizeof(struct sNormalBlock)*(1), "05pre_op.c", 609, "struct sNormalBlock*")),block,clang,comma,info,if_result))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNormalBlock_finalize;
    _inf_value1->clone=(void*)sNormalBlock_clone;
    _inf_value1->compile=(void*)sNormalBlock_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNormalBlock_terminated;
    _inf_value1->kind=(void*)sNormalBlock_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__102 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value202=_inf_value1)));
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sNormalBlock_finalize, __right_value198, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value202) ? __right_value202 = come_decrement_ref_count(__right_value202, ((struct sNode*)__right_value202)->finalize, ((struct sNode*)__right_value202)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__102) ? __result_obj__102 = come_decrement_ref_count(__result_obj__102, ((struct sNode*)__result_obj__102)->finalize, ((struct sNode*)__result_obj__102)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__102;
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
_Bool _condtional_value_X300;
struct sNormalBlock* __result_obj__100;
void* __right_value199 = (void*)0;
struct sNormalBlock* result;
_Bool _condtional_value_X301;
_Bool _condtional_value_X302;
void* __right_value200 = (void*)0;
char* __dec_obj88;
_Bool _condtional_value_X303;
_Bool _condtional_value_X304;
void* __right_value201 = (void*)0;
struct sBlock* __dec_obj89;
_Bool _condtional_value_X305;
_Bool _condtional_value_X306;
struct sNormalBlock* __result_obj__101;
    if(({    (_condtional_value_X300=(self==(void*)0));    _condtional_value_X300;    })) {
        __result_obj__100 = (void*)0;
        return __result_obj__100;
    }
    result=(struct sNormalBlock*)come_increment_ref_count((struct sNormalBlock*)come_calloc_v2(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "struct sNormalBlock*"));
    if(({    (_condtional_value_X301=(self!=((void*)0)));    _condtional_value_X301;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X302=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X302;    })) {
        __dec_obj88=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNormalBlock_clone", 5, "char*"));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X303=(self!=((void*)0)));    _condtional_value_X303;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X304=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X304;    })) {
        __dec_obj89=result->mBlock,
        result->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X305=(self!=((void*)0)));    _condtional_value_X305;    })) {
        result->clang=self->clang;
    }
    if(({    (_condtional_value_X306=(self!=((void*)0)));    _condtional_value_X306;    })) {
        result->comma=self->comma;
    }
    __result_obj__101 = result;
    come_call_finalizer(sNormalBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__101;
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct sNode* _inf_value2;
struct sLogicalDenial* _inf_obj_value2;
void* __right_value209 = (void*)0;
struct sNode* __result_obj__105;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 614, "struct sNode");
    _inf_obj_value2=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value205=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc_v2(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 614, "struct sLogicalDenial*")),(struct sNode*)come_increment_ref_count(sNode_clone(node)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLogicalDenial_finalize;
    _inf_value2->clone=(void*)sLogicalDenial_clone;
    _inf_value2->compile=(void*)sLogicalDenial_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLogicalDenial_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__105 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value209=_inf_value2)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sLogicalDenial_finalize, __right_value205, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value209) ? __right_value209 = come_decrement_ref_count(__right_value209, ((struct sNode*)__right_value209)->finalize, ((struct sNode*)__right_value209)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__105) ? __result_obj__105 = come_decrement_ref_count(__result_obj__105, ((struct sNode*)__result_obj__105)->finalize, ((struct sNode*)__result_obj__105)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__105;
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
_Bool _condtional_value_X307;
struct sLogicalDenial* __result_obj__103;
void* __right_value206 = (void*)0;
struct sLogicalDenial* result;
_Bool _condtional_value_X308;
_Bool _condtional_value_X309;
void* __right_value207 = (void*)0;
char* __dec_obj90;
_Bool _condtional_value_X310;
_Bool _condtional_value_X311;
void* __right_value208 = (void*)0;
struct sNode* __dec_obj91;
struct sLogicalDenial* __result_obj__104;
    if(({    (_condtional_value_X307=(self==(void*)0));    _condtional_value_X307;    })) {
        __result_obj__103 = (void*)0;
        return __result_obj__103;
    }
    result=(struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc_v2(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "struct sLogicalDenial*"));
    if(({    (_condtional_value_X308=(self!=((void*)0)));    _condtional_value_X308;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X309=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X309;    })) {
        __dec_obj90=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLogicalDenial_clone", 5, "char*"));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X310=(self!=((void*)0)));    _condtional_value_X310;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X311=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X311;    })) {
        __dec_obj91=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__104 = result;
    come_call_finalizer(sLogicalDenial_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__104;
}

struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info){
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct sNode* _inf_value3;
struct sCastNode* _inf_obj_value3;
void* __right_value216 = (void*)0;
struct sNode* __result_obj__108;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 619, "struct sNode");
    _inf_obj_value3=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value211=sCastNode_initialize((struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc_v2(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 619, "struct sCastNode*")),type,node,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCastNode_finalize;
    _inf_value3->clone=(void*)sCastNode_clone;
    _inf_value3->compile=(void*)sCastNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCastNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__108 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value216=_inf_value3)));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sCastNode_finalize, __right_value211, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value216) ? __right_value216 = come_decrement_ref_count(__right_value216, ((struct sNode*)__right_value216)->finalize, ((struct sNode*)__right_value216)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__108) ? __result_obj__108 = come_decrement_ref_count(__result_obj__108, ((struct sNode*)__result_obj__108)->finalize, ((struct sNode*)__result_obj__108)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__108;
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
_Bool _condtional_value_X312;
struct sCastNode* __result_obj__106;
void* __right_value212 = (void*)0;
struct sCastNode* result;
_Bool _condtional_value_X313;
_Bool _condtional_value_X314;
void* __right_value213 = (void*)0;
char* __dec_obj92;
_Bool _condtional_value_X315;
_Bool _condtional_value_X316;
void* __right_value214 = (void*)0;
struct sType* __dec_obj93;
_Bool _condtional_value_X317;
void* __right_value215 = (void*)0;
struct sNode* __dec_obj94;
struct sCastNode* __result_obj__107;
    if(({    (_condtional_value_X312=(self==(void*)0));    _condtional_value_X312;    })) {
        __result_obj__106 = (void*)0;
        return __result_obj__106;
    }
    result=(struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc_v2(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "struct sCastNode*"));
    if(({    (_condtional_value_X313=(self!=((void*)0)));    _condtional_value_X313;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X314=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X314;    })) {
        __dec_obj92=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCastNode_clone", 5, "char*"));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X315=(self!=((void*)0)));    _condtional_value_X315;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X316=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X316;    })) {
        __dec_obj93=result->mType,
        result->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X317=(self!=((void*)0)&&self->mLeft!=((void*)0)));    _condtional_value_X317;    })) {
        __dec_obj94=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__107 = result;
    come_call_finalizer(sCastNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__107;
}

struct sNode* reffence_node(struct sNode* value, struct sInfo* info){
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct sNode* _inf_value4;
struct sRefferenceNode* _inf_obj_value4;
void* __right_value222 = (void*)0;
struct sNode* __result_obj__111;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 624, "struct sNode");
    _inf_obj_value4=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value218=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc_v2(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 624, "struct sRefferenceNode*")),(struct sNode*)come_increment_ref_count(value),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sRefferenceNode_finalize;
    _inf_value4->clone=(void*)sRefferenceNode_clone;
    _inf_value4->compile=(void*)sRefferenceNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sRefferenceNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__111 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value222=_inf_value4)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sRefferenceNode_finalize, __right_value218, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value222) ? __right_value222 = come_decrement_ref_count(__right_value222, ((struct sNode*)__right_value222)->finalize, ((struct sNode*)__right_value222)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__111) ? __result_obj__111 = come_decrement_ref_count(__result_obj__111, ((struct sNode*)__result_obj__111)->finalize, ((struct sNode*)__result_obj__111)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__111;
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
_Bool _condtional_value_X318;
struct sRefferenceNode* __result_obj__109;
void* __right_value219 = (void*)0;
struct sRefferenceNode* result;
_Bool _condtional_value_X319;
_Bool _condtional_value_X320;
void* __right_value220 = (void*)0;
char* __dec_obj95;
_Bool _condtional_value_X321;
_Bool _condtional_value_X322;
void* __right_value221 = (void*)0;
struct sNode* __dec_obj96;
struct sRefferenceNode* __result_obj__110;
    if(({    (_condtional_value_X318=(self==(void*)0));    _condtional_value_X318;    })) {
        __result_obj__109 = (void*)0;
        return __result_obj__109;
    }
    result=(struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc_v2(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "struct sRefferenceNode*"));
    if(({    (_condtional_value_X319=(self!=((void*)0)));    _condtional_value_X319;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X320=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X320;    })) {
        __dec_obj95=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sRefferenceNode_clone", 5, "char*"));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X321=(self!=((void*)0)));    _condtional_value_X321;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X322=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X322;    })) {
        __dec_obj96=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__110 = result;
    come_call_finalizer(sRefferenceNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__110;
}

struct sNode* reverse_node(struct sNode* value, struct sInfo* info){
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct sNode* _inf_value5;
struct sReverseNode* _inf_obj_value5;
void* __right_value228 = (void*)0;
struct sNode* __result_obj__114;
    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 629, "struct sNode");
    _inf_obj_value5=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value224=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc_v2(1, sizeof(struct sReverseNode)*(1), "05pre_op.c", 629, "struct sReverseNode*")),(struct sNode*)come_increment_ref_count(value),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReverseNode_finalize;
    _inf_value5->clone=(void*)sReverseNode_clone;
    _inf_value5->compile=(void*)sReverseNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReverseNode_kind;
    _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__114 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value228=_inf_value5)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sReverseNode_finalize, __right_value224, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value228) ? __right_value228 = come_decrement_ref_count(__right_value228, ((struct sNode*)__right_value228)->finalize, ((struct sNode*)__right_value228)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__114) ? __result_obj__114 = come_decrement_ref_count(__result_obj__114, ((struct sNode*)__result_obj__114)->finalize, ((struct sNode*)__result_obj__114)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__114;
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
_Bool _condtional_value_X323;
struct sReverseNode* __result_obj__112;
void* __right_value225 = (void*)0;
struct sReverseNode* result;
_Bool _condtional_value_X324;
_Bool _condtional_value_X325;
void* __right_value226 = (void*)0;
char* __dec_obj97;
_Bool _condtional_value_X326;
_Bool _condtional_value_X327;
void* __right_value227 = (void*)0;
struct sNode* __dec_obj98;
struct sReverseNode* __result_obj__113;
    if(({    (_condtional_value_X323=(self==(void*)0));    _condtional_value_X323;    })) {
        __result_obj__112 = (void*)0;
        return __result_obj__112;
    }
    result=(struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc_v2(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "struct sReverseNode*"));
    if(({    (_condtional_value_X324=(self!=((void*)0)));    _condtional_value_X324;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X325=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X325;    })) {
        __dec_obj97=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReverseNode_clone", 5, "char*"));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X326=(self!=((void*)0)));    _condtional_value_X326;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X327=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X327;    })) {
        __dec_obj98=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__113 = result;
    come_call_finalizer(sReverseNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__113;
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct sType* type_, char* initializer, struct sInfo* info){
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
char* __dec_obj99;
struct sType* __dec_obj100;
struct sArrayInitializer* __result_obj__115;
    ((struct sNodeBase*)(__right_value229=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value229, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj99=self->initializer,
    self->initializer=(char*)come_increment_ref_count((char*)come_memdup(initializer, "05pre_op.c", 638, "char*"));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj100=self->type_,
    self->type_=(struct sType*)come_increment_ref_count(type_);
    come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__115 = (struct sArrayInitializer*)come_increment_ref_count(self);
    come_call_finalizer(sArrayInitializer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (initializer = come_decrement_ref_count(initializer, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sArrayInitializer_finalize, __result_obj__115, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__115;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __right_value231 = (void*)0;
char* __result_obj__116;
    __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value231=__builtin_string("sArrayInitializer"))));
    (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__116;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct sType* type_;
char* initializer;
_Bool _condtional_value_X331;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct CVALUE* come_value;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
char* __dec_obj101;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct sType* __dec_obj102;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct CVALUE* come_value_29;
char* __dec_obj103;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sType* __dec_obj104;
_Bool __result_obj__117;
    type_=(struct sType*)come_increment_ref_count(self->type_);
    initializer=(char*)come_increment_ref_count(self->initializer);
    if(({    (_condtional_value_X331=(type_));    _condtional_value_X331;    })) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 653, "struct CVALUE*"))));
        __dec_obj101=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",((char*)(__right_value234=make_type_name_string(type_,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)1,(_Bool)0))),initializer));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1, 0, (void*)0));
        __dec_obj102=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05pre_op.c", 656, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->type->mPointerNum++;
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_29=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 663, "struct CVALUE*"))));
        __dec_obj103=come_value_29->c_value,
        come_value_29->c_value=(char*)come_increment_ref_count(initializer);
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj104=come_value_29->type,
        come_value_29->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05pre_op.c", 666, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_29->type->mPointerNum++;
        come_value_29->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_29));
        come_call_finalizer(CVALUE_finalize, come_value_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__117 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (initializer = come_decrement_ref_count(initializer, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__117;
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
_Bool _condtional_value_X328;
_Bool _condtional_value_X329;
_Bool _condtional_value_X330;
    if(({    (_condtional_value_X328=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X328;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X329=(self!=((void*)0)&&self->initializer!=((void*)0)));    _condtional_value_X329;    })) {
        (self->initializer = come_decrement_ref_count(self->initializer, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X330=(self!=((void*)0)&&self->type_!=((void*)0)));    _condtional_value_X330;    })) {
        come_call_finalizer(sType_finalize, self->type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sNode* pre_position_operator(struct sInfo* info){
_Bool refference;
char* p;
int sline;
_Bool _condtional_value_X332;
_Bool _condtional_value_X333;
_Bool _condtional_value_X334;
_Bool _condtional_value_X335;
_Bool _condtional_value_X336;
_Bool _condtional_value_X337;
_Bool _condtional_value_X338;
_Bool _condtional_value_X339;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct buffer* buf;
_Bool squort;
_Bool dquort;
int nest;
_Bool _condtional_value_X340;
_Bool _condtional_value_X341;
_Bool _condtional_value_X342;
_Bool _condtional_value_X343;
_Bool _condtional_value_X344;
_Bool _condtional_value_X345;
_Bool _condtional_value_X346;
_Bool _condtional_value_X347;
_Bool _condtional_value_X348;
_Bool _condtional_value_X349;
_Bool _condtional_value_X350;
_Bool _condtional_value_X351;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sNode* _inf_value6;
struct sArrayInitializer* _inf_obj_value6;
void* __right_value253 = (void*)0;
struct sNode* __result_obj__120;
void* __right_value254 = (void*)0;
struct sNode* __result_obj__121;
_Bool _condtional_value_X358;
void* __right_value255 = (void*)0;
struct sNode* node;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct sNode* _inf_value7;
struct sLogicalDenial* _inf_obj_value7;
void* __right_value258 = (void*)0;
struct sNode* __result_obj__122;
_Bool _condtional_value_X359;
void* __right_value259 = (void*)0;
struct sNode* node_30;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct sNode* _inf_value8;
struct sLogicalDenial2* _inf_obj_value8;
void* __right_value265 = (void*)0;
struct sNode* __result_obj__125;
_Bool _condtional_value_X365;
void* __right_value266 = (void*)0;
struct sNode* node_31;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sNode* _inf_value9;
struct sMinusMinusNode2* _inf_obj_value9;
void* __right_value272 = (void*)0;
struct sNode* __result_obj__128;
_Bool _condtional_value_X371;
void* __right_value273 = (void*)0;
struct sNode* node_32;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct sNode* _inf_value10;
struct sMinusNode2* _inf_obj_value10;
void* __right_value279 = (void*)0;
struct sNode* __result_obj__131;
_Bool _condtional_value_X377;
void* __right_value280 = (void*)0;
struct sNode* node_33;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sNode* _inf_value11;
struct sPlusPlusNode2* _inf_obj_value11;
void* __right_value286 = (void*)0;
struct sNode* __result_obj__134;
_Bool _condtional_value_X383;
void* __right_value287 = (void*)0;
struct sNode* node_34;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sNode* _inf_value12;
struct sComplement* _inf_obj_value12;
void* __right_value293 = (void*)0;
struct sNode* __result_obj__137;
_Bool _condtional_value_X389;
_Bool quote;
_Bool _condtional_value_X390;
_Bool no_assign;
void* __right_value294 = (void*)0;
struct sNode* value;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct sNode* _inf_value13;
struct sDerefferenceNode* _inf_obj_value13;
void* __right_value300 = (void*)0;
struct sNode* __result_obj__140;
_Bool _condtional_value_X397;
void* __right_value301 = (void*)0;
struct sNode* value_35;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sNode* _inf_value14;
struct sRefferenceNode* _inf_obj_value14;
void* __right_value304 = (void*)0;
struct sNode* __result_obj__141;
_Bool _condtional_value_X398;
void* __right_value305 = (void*)0;
struct sNode* value_36;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sNode* _inf_value15;
struct sReverseNode* _inf_obj_value15;
void* __right_value308 = (void*)0;
struct sNode* __result_obj__142;
_Bool _condtional_value_X399;
_Bool cast_expression_flag;
_Bool struct_initializer_flag;
char* p_37;
int sline_38;
char* p2;
int sline2;
void* __right_value309 = (void*)0;
char* word;
_Bool _condtional_value_X400;
void* __right_value310 = (void*)0;
char* __dec_obj120;
_Bool _condtional_value_X401;
void* __right_value311 = (void*)0;
_Bool _condtional_value_X404;
_Bool _condtional_value_X405;
_Bool tuple_expression_flag;
_Bool named_tuple_expression_flag;
_Bool _condtional_value_X406;
char* p_39;
int sline_40;
char* p_41;
int sline_42;
_Bool _condtional_value_X407;
void* __right_value312 = (void*)0;
_Bool _condtional_value_X408;
_Bool no_comma;
_Bool no_output_err;
_Bool no_output_come_code;
void* __right_value313 = (void*)0;
struct sNode* node_43;
struct sNode* node2;
_Bool _condtional_value_X409;
_Bool _condtional_value_X410;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct list$1sNode$ph* paren_block;
_Bool _condtional_value_X411;
void* __right_value316 = (void*)0;
struct sNode* node2_44;
_Bool _condtional_value_X412;
_Bool _condtional_value_X413;
_Bool _condtional_value_X414;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sNode* _inf_value16;
struct sParenBlockNode* _inf_obj_value16;
void* __right_value322 = (void*)0;
struct sNode* node_45;
struct sNode* __result_obj__145;
_Bool _condtional_value_X420;
void* __right_value323 = (void*)0;
struct sNode* node_46;
struct sNode* __result_obj__146;
_Bool _condtional_value_X421;
void* __right_value324 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* type=0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X422;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct buffer* buf_47;
_Bool squort_48;
_Bool dquort_49;
int nest_50;
_Bool _condtional_value_X423;
_Bool _condtional_value_X424;
_Bool _condtional_value_X425;
_Bool _condtional_value_X426;
_Bool _condtional_value_X427;
_Bool _condtional_value_X428;
_Bool _condtional_value_X429;
_Bool _condtional_value_X430;
_Bool _condtional_value_X431;
_Bool _condtional_value_X432;
_Bool _condtional_value_X433;
_Bool _condtional_value_X434;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct sNode* _inf_value17;
struct sArrayInitializer* _inf_obj_value17;
void* __right_value330 = (void*)0;
struct sNode* __result_obj__147;
_Bool _condtional_value_X435;
void* __right_value331 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* type_51=0;
char* name_52=0;
_Bool err_53=0;
_Bool _condtional_value_X436;
void* __right_value332 = (void*)0;
struct sNode* node_54;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sNode* _inf_value18;
struct sCastNode* _inf_obj_value18;
void* __right_value335 = (void*)0;
struct sNode* __result_obj__148;
struct sNode* node_55;
_Bool no_assign_56;
_Bool _condtional_value_X437;
_Bool no_comma_57;
void* __right_value336 = (void*)0;
struct sNode* __dec_obj123;
void* __right_value337 = (void*)0;
struct sNode* __dec_obj124;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sNode* _inf_value19;
struct sParenNode* _inf_obj_value19;
void* __right_value343 = (void*)0;
struct sNode* __dec_obj127;
struct sNode* __result_obj__151;
struct sNode* __result_obj__152;
memset(&quote, 0, sizeof(_Bool));
node_55 = (void*)0;
    skip_spaces_and_lf(info);
    refference=(_Bool)0;
    {
        p=info->p;
        sline=info->sline;
        if(({        (_condtional_value_X332=(*info->p==38&&*(info->p+1)!=38));        _condtional_value_X332;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X333=(*info->p==34));            _condtional_value_X333;            })) {
                refference=(_Bool)1;
            }
            else if(({            (_condtional_value_X334=(xisalpha(*info->p)||*info->p==95));            _condtional_value_X334;            })) {
                refference=(_Bool)1;
            }
            else if(({            (_condtional_value_X335=(*info->p==40||*info->p==42));            _condtional_value_X335;            })) {
                while(({                (_condtional_value_X336=(*info->p==40||*info->p==42));                _condtional_value_X336;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(({                (_condtional_value_X337=(xisalpha(*info->p)||*info->p==95));                _condtional_value_X337;                })) {
                    refference=(_Bool)1;
                }
            }
        }
        info->p=p;
        info->sline=sline;
    }
    parse_sharp_v5(info);
    if(({    (_condtional_value_X338=(*info->p==123));    _condtional_value_X338;    })) {
        if(({        (_condtional_value_X339=(info->array_initializer||info->struct_initializer));        _condtional_value_X339;        })) {
            buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05pre_op.c", 718, "struct buffer*"))));
            buffer_append_char(buf,*info->p);
            info->p++;
            squort=(_Bool)0;
            dquort=(_Bool)0;
            nest=1;
            while(({            (_condtional_value_X340=(1));            _condtional_value_X340;            })) {
                if(({                (_condtional_value_X341=(*info->p==0));                _condtional_value_X341;                })) {
                    err_msg(info,"unexpected source end in array initiailizer");
                    exit(2);
                }
                else if(({                (_condtional_value_X342=(*info->p==92));                _condtional_value_X342;                })) {
                    buffer_append_char(buf,*info->p);
                    info->p++;
                    if(({                    (_condtional_value_X343=(*info->p==10));                    _condtional_value_X343;                    })) {
                        info->sline++;
                    }
                    buffer_append_char(buf,*info->p);
                    info->p++;
                }
                else if(({                (_condtional_value_X344=(!squort&&*info->p==34));                _condtional_value_X344;                })) {
                    buffer_append_char(buf,*info->p);
                    info->p++;
                    dquort=!dquort;
                }
                else if(({                (_condtional_value_X345=(!dquort&&*info->p==39));                _condtional_value_X345;                })) {
                    buffer_append_char(buf,*info->p);
                    info->p++;
                    squort=!squort;
                }
                else if(({                (_condtional_value_X346=(squort||dquort));                _condtional_value_X346;                })) {
                    if(({                    (_condtional_value_X347=(*info->p==10));                    _condtional_value_X347;                    })) {
                        info->sline++;
                    }
                    buffer_append_char(buf,*info->p);
                    info->p++;
                }
                else if(({                (_condtional_value_X348=(*info->p==123));                _condtional_value_X348;                })) {
                    nest++;
                    buffer_append_char(buf,*info->p);
                    info->p++;
                }
                else if(({                (_condtional_value_X349=(*info->p==125));                _condtional_value_X349;                })) {
                    nest--;
                    buffer_append_char(buf,*info->p);
                    info->p++;
                    if(({                    (_condtional_value_X350=(nest==0));                    _condtional_value_X350;                    })) {
                        skip_spaces_and_lf(info);
                        break;
                    }
                }
                else if(({                (_condtional_value_X351=(*info->p==10));                _condtional_value_X351;                })) {
                    info->sline++;
                    buffer_append_char(buf,*info->p);
                    info->p++;
                }
                else {
                    buffer_append_char(buf,*info->p);
                    info->p++;
                }
            }
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 782, "struct sNode");
            _inf_obj_value6=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value248=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc_v2(1, sizeof(struct sArrayInitializer)*(1), "05pre_op.c", 782, "struct sArrayInitializer*")),((void*)0),(char*)come_increment_ref_count(buffer_to_string(buf)),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sArrayInitializer_finalize;
            _inf_value6->clone=(void*)sArrayInitializer_clone;
            _inf_value6->compile=(void*)sArrayInitializer_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sArrayInitializer_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__120 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value253=_inf_value6)));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sArrayInitializer_finalize, __right_value248, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value253) ? __right_value253 = come_decrement_ref_count(__right_value253, ((struct sNode*)__right_value253)->finalize, ((struct sNode*)__right_value253)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__120) ? __result_obj__120 = come_decrement_ref_count(__result_obj__120, ((struct sNode*)__result_obj__120)->finalize, ((struct sNode*)__result_obj__120)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__120;
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __result_obj__121 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value254=parse_normal_block((_Bool)0,(_Bool)0,info,(_Bool)0))));
            ((__right_value254) ? __right_value254 = come_decrement_ref_count(__right_value254, ((struct sNode*)__right_value254)->finalize, ((struct sNode*)__right_value254)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__121) ? __result_obj__121 = come_decrement_ref_count(__result_obj__121, ((struct sNode*)__result_obj__121)->finalize, ((struct sNode*)__result_obj__121)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__121;
        }
    }
    else if(({    (_condtional_value_X358=(*info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123));    _condtional_value_X358;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        node=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 794, "struct sNode");
        _inf_obj_value7=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value257=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc_v2(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 794, "struct sLogicalDenial*")),(struct sNode*)come_increment_ref_count(node),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sLogicalDenial_finalize;
        _inf_value7->clone=(void*)sLogicalDenial_clone;
        _inf_value7->compile=(void*)sLogicalDenial_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sLogicalDenial_kind;
        _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__122 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value258=_inf_value7)));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sLogicalDenial_finalize, __right_value257, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value258) ? __right_value258 = come_decrement_ref_count(__right_value258, ((struct sNode*)__right_value258)->finalize, ((struct sNode*)__right_value258)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__122) ? __result_obj__122 = come_decrement_ref_count(__result_obj__122, ((struct sNode*)__result_obj__122)->finalize, ((struct sNode*)__result_obj__122)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__122;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X359=(*info->p==33&&*(info->p+1)==33));    _condtional_value_X359;    })) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_30=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 802, "struct sNode");
        _inf_obj_value8=(struct sLogicalDenial2*)come_increment_ref_count(((struct sLogicalDenial2*)(__right_value261=sLogicalDenial2_initialize((struct sLogicalDenial2*)come_increment_ref_count((struct sLogicalDenial2*)come_calloc_v2(1, sizeof(struct sLogicalDenial2)*(1), "05pre_op.c", 802, "struct sLogicalDenial2*")),(struct sNode*)come_increment_ref_count(node_30),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sLogicalDenial2_finalize;
        _inf_value8->clone=(void*)sLogicalDenial2_clone;
        _inf_value8->compile=(void*)sLogicalDenial2_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sLogicalDenial2_kind;
        _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__125 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value265=_inf_value8)));
        ((node_30) ? node_30 = come_decrement_ref_count(node_30, ((struct sNode*)node_30)->finalize, ((struct sNode*)node_30)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sLogicalDenial2_finalize, __right_value261, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value265) ? __right_value265 = come_decrement_ref_count(__right_value265, ((struct sNode*)__right_value265)->finalize, ((struct sNode*)__right_value265)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__125) ? __result_obj__125 = come_decrement_ref_count(__result_obj__125, ((struct sNode*)__result_obj__125)->finalize, ((struct sNode*)__result_obj__125)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__125;
        ((node_30) ? node_30 = come_decrement_ref_count(node_30, ((struct sNode*)node_30)->finalize, ((struct sNode*)node_30)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X365=(*info->p==45&&*(info->p+1)==45));    _condtional_value_X365;    })) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_31=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 810, "struct sNode");
        _inf_obj_value9=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(__right_value268=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count((struct sMinusMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusMinusNode2)*(1), "05pre_op.c", 810, "struct sMinusMinusNode2*")),(struct sNode*)come_increment_ref_count(node_31),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sMinusMinusNode2_finalize;
        _inf_value9->clone=(void*)sMinusMinusNode2_clone;
        _inf_value9->compile=(void*)sMinusMinusNode2_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sMinusMinusNode2_kind;
        _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__128 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value272=_inf_value9)));
        ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sMinusMinusNode2_finalize, __right_value268, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value272) ? __right_value272 = come_decrement_ref_count(__right_value272, ((struct sNode*)__right_value272)->finalize, ((struct sNode*)__right_value272)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__128) ? __result_obj__128 = come_decrement_ref_count(__result_obj__128, ((struct sNode*)__result_obj__128)->finalize, ((struct sNode*)__result_obj__128)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__128;
        ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X371=(*info->p==45&&!xisdigit(*(info->p+1))));    _condtional_value_X371;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        node_32=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 818, "struct sNode");
        _inf_obj_value10=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(__right_value275=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count((struct sMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusNode2)*(1), "05pre_op.c", 818, "struct sMinusNode2*")),(struct sNode*)come_increment_ref_count(node_32),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sMinusNode2_finalize;
        _inf_value10->clone=(void*)sMinusNode2_clone;
        _inf_value10->compile=(void*)sMinusNode2_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sMinusNode2_kind;
        _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__131 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value279=_inf_value10)));
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sMinusNode2_finalize, __right_value275, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value279) ? __right_value279 = come_decrement_ref_count(__right_value279, ((struct sNode*)__right_value279)->finalize, ((struct sNode*)__right_value279)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__131) ? __result_obj__131 = come_decrement_ref_count(__result_obj__131, ((struct sNode*)__result_obj__131)->finalize, ((struct sNode*)__result_obj__131)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__131;
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X377=(*info->p==43&&*(info->p+1)==43));    _condtional_value_X377;    })) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_33=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 826, "struct sNode");
        _inf_obj_value11=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(__right_value282=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count((struct sPlusPlusNode2*)come_calloc_v2(1, sizeof(struct sPlusPlusNode2)*(1), "05pre_op.c", 826, "struct sPlusPlusNode2*")),(struct sNode*)come_increment_ref_count(node_33),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sPlusPlusNode2_finalize;
        _inf_value11->clone=(void*)sPlusPlusNode2_clone;
        _inf_value11->compile=(void*)sPlusPlusNode2_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sPlusPlusNode2_kind;
        _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__134 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value286=_inf_value11)));
        ((node_33) ? node_33 = come_decrement_ref_count(node_33, ((struct sNode*)node_33)->finalize, ((struct sNode*)node_33)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sPlusPlusNode2_finalize, __right_value282, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value286) ? __right_value286 = come_decrement_ref_count(__right_value286, ((struct sNode*)__right_value286)->finalize, ((struct sNode*)__right_value286)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__134) ? __result_obj__134 = come_decrement_ref_count(__result_obj__134, ((struct sNode*)__result_obj__134)->finalize, ((struct sNode*)__result_obj__134)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__134;
        ((node_33) ? node_33 = come_decrement_ref_count(node_33, ((struct sNode*)node_33)->finalize, ((struct sNode*)node_33)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X383=(*info->p==126));    _condtional_value_X383;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        node_34=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 834, "struct sNode");
        _inf_obj_value12=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(__right_value289=sComplement_initialize((struct sComplement*)come_increment_ref_count((struct sComplement*)come_calloc_v2(1, sizeof(struct sComplement)*(1), "05pre_op.c", 834, "struct sComplement*")),(struct sNode*)come_increment_ref_count(node_34),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sComplement_finalize;
        _inf_value12->clone=(void*)sComplement_clone;
        _inf_value12->compile=(void*)sComplement_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sComplement_kind;
        _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__137 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value293=_inf_value12)));
        ((node_34) ? node_34 = come_decrement_ref_count(node_34, ((struct sNode*)node_34)->finalize, ((struct sNode*)node_34)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sComplement_finalize, __right_value289, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value293) ? __right_value293 = come_decrement_ref_count(__right_value293, ((struct sNode*)__right_value293)->finalize, ((struct sNode*)__right_value293)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__137) ? __result_obj__137 = come_decrement_ref_count(__result_obj__137, ((struct sNode*)__result_obj__137)->finalize, ((struct sNode*)__result_obj__137)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__137;
        ((node_34) ? node_34 = come_decrement_ref_count(node_34, ((struct sNode*)node_34)->finalize, ((struct sNode*)node_34)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X389=((*info->p==92&&*(info->p+1)==42)||*info->p==42));    _condtional_value_X389;    })) {
        if(({        (_condtional_value_X390=(*info->p==92));        _condtional_value_X390;        })) {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote=(_Bool)1;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            quote=(_Bool)0;
        }
        no_assign=info->no_assign;
        info->no_assign=(_Bool)1;
        value=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        info->no_assign=no_assign;
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 854, "struct sNode");
        _inf_obj_value13=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(__right_value296=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count((struct sDerefferenceNode*)come_calloc_v2(1, sizeof(struct sDerefferenceNode)*(1), "05pre_op.c", 854, "struct sDerefferenceNode*")),(struct sNode*)come_increment_ref_count(value),quote,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sDerefferenceNode_finalize;
        _inf_value13->clone=(void*)sDerefferenceNode_clone;
        _inf_value13->compile=(void*)sDerefferenceNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sDerefferenceNode_kind;
        _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__140 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value300=_inf_value13)));
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDerefferenceNode_finalize, __right_value296, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value300) ? __right_value300 = come_decrement_ref_count(__right_value300, ((struct sNode*)__right_value300)->finalize, ((struct sNode*)__right_value300)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__140) ? __result_obj__140 = come_decrement_ref_count(__result_obj__140, ((struct sNode*)__result_obj__140)->finalize, ((struct sNode*)__result_obj__140)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__140;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X397=(*info->p==38&&refference));    _condtional_value_X397;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        value_35=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 862, "struct sNode");
        _inf_obj_value14=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value303=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc_v2(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 862, "struct sRefferenceNode*")),(struct sNode*)come_increment_ref_count(value_35),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sRefferenceNode_finalize;
        _inf_value14->clone=(void*)sRefferenceNode_clone;
        _inf_value14->compile=(void*)sRefferenceNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sRefferenceNode_kind;
        _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__141 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value304=_inf_value14)));
        ((value_35) ? value_35 = come_decrement_ref_count(value_35, ((struct sNode*)value_35)->finalize, ((struct sNode*)value_35)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sRefferenceNode_finalize, __right_value303, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value304) ? __right_value304 = come_decrement_ref_count(__right_value304, ((struct sNode*)__right_value304)->finalize, ((struct sNode*)__right_value304)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__141) ? __result_obj__141 = come_decrement_ref_count(__result_obj__141, ((struct sNode*)__result_obj__141)->finalize, ((struct sNode*)__result_obj__141)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__141;
        ((value_35) ? value_35 = come_decrement_ref_count(value_35, ((struct sNode*)value_35)->finalize, ((struct sNode*)value_35)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X398=(*info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123));    _condtional_value_X398;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        value_36=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 870, "struct sNode");
        _inf_obj_value15=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value307=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc_v2(1, sizeof(struct sReverseNode)*(1), "05pre_op.c", 870, "struct sReverseNode*")),(struct sNode*)come_increment_ref_count(value_36),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReverseNode_finalize;
        _inf_value15->clone=(void*)sReverseNode_clone;
        _inf_value15->compile=(void*)sReverseNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReverseNode_kind;
        _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__142 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value308=_inf_value15)));
        ((value_36) ? value_36 = come_decrement_ref_count(value_36, ((struct sNode*)value_36)->finalize, ((struct sNode*)value_36)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sReverseNode_finalize, __right_value307, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value308) ? __right_value308 = come_decrement_ref_count(__right_value308, ((struct sNode*)__right_value308)->finalize, ((struct sNode*)__right_value308)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__142) ? __result_obj__142 = come_decrement_ref_count(__result_obj__142, ((struct sNode*)__result_obj__142)->finalize, ((struct sNode*)__result_obj__142)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__142;
        ((value_36) ? value_36 = come_decrement_ref_count(value_36, ((struct sNode*)value_36)->finalize, ((struct sNode*)value_36)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X399=(*info->p==40));    _condtional_value_X399;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        cast_expression_flag=(_Bool)0;
        struct_initializer_flag=(_Bool)0;
        {
            p_37=info->p;
            sline_38=info->sline;
            parse_sharp_v5(info);
            p2=info->p;
            sline2=info->sline;
            word=(char*)come_increment_ref_count(__builtin_string(""));
            if(({            (_condtional_value_X400=(xisalpha(*info->p)||*info->p==95));            _condtional_value_X400;            })) {
                __dec_obj120=word,
                word=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0);
                if(({                (_condtional_value_X401=(is_type_name(word,info)));                _condtional_value_X401;                })) {
                    info->p=p2;
                    info->sline=sline2;
                    ((struct tuple3$3sType$phchar$phbool$*)(__right_value311=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value311, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(({                    (_condtional_value_X404=(*info->p==41));                    _condtional_value_X404;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(({                        (_condtional_value_X405=(*info->p==123));                        _condtional_value_X405;                        })) {
                            struct_initializer_flag=(_Bool)1;
                        }
                        else {
                            cast_expression_flag=(_Bool)1;
                        }
                    }
                }
            }
            parse_sharp_v5(info);
            info->p=p_37;
            info->sline=sline_38;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        tuple_expression_flag=(_Bool)0;
        named_tuple_expression_flag=(_Bool)0;
        if(({        (_condtional_value_X406=(!gComeC));        _condtional_value_X406;        })) {
            p_39=info->p;
            sline_40=info->sline;
            parse_sharp_v5(info);
            {
                p_41=info->p;
                sline_42=info->sline;
                if(({                (_condtional_value_X407=(*info->p==95||xisalpha(*info->p)));                _condtional_value_X407;                })) {
                    ((char*)(__right_value312=parse_word(info)));
                    (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                if(({                (_condtional_value_X408=(*info->p==58));                _condtional_value_X408;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    named_tuple_expression_flag=(_Bool)1;
                }
                else {
                    info->p=p_41;
                    info->sline=sline_42;
                }
            }
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            no_output_err=info->no_output_err;
            info->no_output_err=(_Bool)1;
            no_output_come_code=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            node_43=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node2=(struct sNode*)come_increment_ref_count(node_43);
            parse_sharp_v5(info);
            info->no_comma=no_comma;
            info->no_output_err=no_output_err;
            info->no_output_come_code=no_output_come_code;
            if(({            (_condtional_value_X409=(*info->p==44));            _condtional_value_X409;            })) {
                tuple_expression_flag=(_Bool)1;
            }
            parse_sharp_v5(info);
            info->p=p_39;
            info->sline=sline_40;
            ((node_43) ? node_43 = come_decrement_ref_count(node_43, ((struct sNode*)node_43)->finalize, ((struct sNode*)node_43)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        if(({        (_condtional_value_X410=(*info->p==123));        _condtional_value_X410;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_block=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05pre_op.c", 974, "struct list$1sNode$ph*"))));
            while(({            (_condtional_value_X411=((_Bool)1));            _condtional_value_X411;            })) {
                parse_sharp_v5(info);
                node2_44=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                list$1sNode$ph_add(paren_block,(struct sNode*)come_increment_ref_count(node2_44));
                while(({                (_condtional_value_X412=(*info->p==59));                _condtional_value_X412;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(({                (_condtional_value_X413=(*info->p==125));                _condtional_value_X413;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_44) ? node2_44 = come_decrement_ref_count(node2_44, ((struct sNode*)node2_44)->finalize, ((struct sNode*)node2_44)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    break;
                }
                else if(({                (_condtional_value_X414=(*info->p==0));                _condtional_value_X414;                })) {
                    err_msg(info,"invalid source end in paren block");
                    exit(0);
                }
                ((node2_44) ? node2_44 = come_decrement_ref_count(node2_44, ((struct sNode*)node2_44)->finalize, ((struct sNode*)node2_44)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            expected_next_character(41,info);
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 1003, "struct sNode");
            _inf_obj_value16=(struct sParenBlockNode*)come_increment_ref_count(((struct sParenBlockNode*)(__right_value318=sParenBlockNode_initialize((struct sParenBlockNode*)come_increment_ref_count((struct sParenBlockNode*)come_calloc_v2(1, sizeof(struct sParenBlockNode)*(1), "05pre_op.c", 1003, "struct sParenBlockNode*")),(struct list$1sNode$ph*)come_increment_ref_count(paren_block),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sParenBlockNode_finalize;
            _inf_value16->clone=(void*)sParenBlockNode_clone;
            _inf_value16->compile=(void*)sParenBlockNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sParenBlockNode_kind;
            _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
            node_45=(struct sNode*)come_increment_ref_count(_inf_value16);
            come_call_finalizer(sParenBlockNode_finalize, __right_value318, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            parse_sharp_v5(info);
            __result_obj__145 = (struct sNode*)come_increment_ref_count(node_45);
            come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_45) ? node_45 = come_decrement_ref_count(node_45, ((struct sNode*)node_45)->finalize, ((struct sNode*)node_45)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            ((__result_obj__145) ? __result_obj__145 = come_decrement_ref_count(__result_obj__145, ((struct sNode*)__result_obj__145)->finalize, ((struct sNode*)__result_obj__145)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__145;
            come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_45) ? node_45 = come_decrement_ref_count(node_45, ((struct sNode*)node_45)->finalize, ((struct sNode*)node_45)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X420=(!gComeC&&tuple_expression_flag));        _condtional_value_X420;        })) {
            parse_sharp_v5(info);
            node_46=(struct sNode*)come_increment_ref_count(parse_tuple(info,named_tuple_expression_flag));
            parse_sharp_v5(info);
            __result_obj__146 = (struct sNode*)come_increment_ref_count(node_46);
            ((node_46) ? node_46 = come_decrement_ref_count(node_46, ((struct sNode*)node_46)->finalize, ((struct sNode*)node_46)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            ((__result_obj__146) ? __result_obj__146 = come_decrement_ref_count(__result_obj__146, ((struct sNode*)__result_obj__146)->finalize, ((struct sNode*)__result_obj__146)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__146;
            ((node_46) ? node_46 = come_decrement_ref_count(node_46, ((struct sNode*)node_46)->finalize, ((struct sNode*)node_46)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X421=(struct_initializer_flag));        _condtional_value_X421;        })) {
            parse_sharp_v5(info);
            multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value324=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            name=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value324, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_condtional_value_X422=(!err));            _condtional_value_X422;            })) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            expected_next_character(41,info);
            parse_sharp_v5(info);
            buf_47=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05pre_op.c", 1031, "struct buffer*"))));
            buffer_append_char(buf_47,*info->p);
            info->p++;
            squort_48=(_Bool)0;
            dquort_49=(_Bool)0;
            nest_50=1;
            while(({            (_condtional_value_X423=(1));            _condtional_value_X423;            })) {
                if(({                (_condtional_value_X424=(*info->p==0));                _condtional_value_X424;                })) {
                    err_msg(info,"unexpected source end in array initiailizer");
                    exit(2);
                }
                else if(({                (_condtional_value_X425=(*info->p==92));                _condtional_value_X425;                })) {
                    buffer_append_char(buf_47,*info->p);
                    info->p++;
                    if(({                    (_condtional_value_X426=(*info->p==10));                    _condtional_value_X426;                    })) {
                        info->sline++;
                    }
                    buffer_append_char(buf_47,*info->p);
                    info->p++;
                }
                else if(({                (_condtional_value_X427=(!squort_48&&*info->p==34));                _condtional_value_X427;                })) {
                    buffer_append_char(buf_47,*info->p);
                    info->p++;
                    dquort_49=!dquort_49;
                }
                else if(({                (_condtional_value_X428=(!dquort_49&&*info->p==39));                _condtional_value_X428;                })) {
                    buffer_append_char(buf_47,*info->p);
                    info->p++;
                    squort_48=!squort_48;
                }
                else if(({                (_condtional_value_X429=(squort_48||dquort_49));                _condtional_value_X429;                })) {
                    if(({                    (_condtional_value_X430=(*info->p==10));                    _condtional_value_X430;                    })) {
                        info->sline++;
                    }
                    buffer_append_char(buf_47,*info->p);
                    info->p++;
                }
                else if(({                (_condtional_value_X431=(*info->p==123));                _condtional_value_X431;                })) {
                    nest_50++;
                    buffer_append_char(buf_47,*info->p);
                    info->p++;
                }
                else if(({                (_condtional_value_X432=(*info->p==125));                _condtional_value_X432;                })) {
                    nest_50--;
                    buffer_append_char(buf_47,*info->p);
                    info->p++;
                    if(({                    (_condtional_value_X433=(nest_50==0));                    _condtional_value_X433;                    })) {
                        skip_spaces_and_lf(info);
                        break;
                    }
                }
                else if(({                (_condtional_value_X434=(*info->p==10));                _condtional_value_X434;                })) {
                    info->sline++;
                    buffer_append_char(buf_47,*info->p);
                    info->p++;
                }
                else {
                    buffer_append_char(buf_47,*info->p);
                    info->p++;
                }
            }
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 1095, "struct sNode");
            _inf_obj_value17=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value329=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc_v2(1, sizeof(struct sArrayInitializer)*(1), "05pre_op.c", 1095, "struct sArrayInitializer*")),(struct sType*)come_increment_ref_count(type),(char*)come_increment_ref_count(buffer_to_string(buf_47)),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sArrayInitializer_finalize;
            _inf_value17->clone=(void*)sArrayInitializer_clone;
            _inf_value17->compile=(void*)sArrayInitializer_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sArrayInitializer_kind;
            _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__147 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value330=_inf_value17)));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, buf_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sArrayInitializer_finalize, __right_value329, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value330) ? __right_value330 = come_decrement_ref_count(__right_value330, ((struct sNode*)__right_value330)->finalize, ((struct sNode*)__right_value330)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__147) ? __result_obj__147 = come_decrement_ref_count(__result_obj__147, ((struct sNode*)__result_obj__147)->finalize, ((struct sNode*)__result_obj__147)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__147;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, buf_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(({        (_condtional_value_X435=(cast_expression_flag));        _condtional_value_X435;        })) {
            parse_sharp_v5(info);
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value331=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_51=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name_52=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_53=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value331, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_condtional_value_X436=(!err_53));            _condtional_value_X436;            })) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            expected_next_character(41,info);
            parse_sharp_v5(info);
            node_54=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 1112, "struct sNode");
            _inf_obj_value18=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value334=sCastNode_initialize((struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc_v2(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 1112, "struct sCastNode*")),type_51,node_54,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCastNode_finalize;
            _inf_value18->clone=(void*)sCastNode_clone;
            _inf_value18->compile=(void*)sCastNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCastNode_kind;
            _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__148 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value335=_inf_value18)));
            come_call_finalizer(sType_finalize, type_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_52 = come_decrement_ref_count(name_52, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_54) ? node_54 = come_decrement_ref_count(node_54, ((struct sNode*)node_54)->finalize, ((struct sNode*)node_54)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sCastNode_finalize, __right_value334, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value335) ? __right_value335 = come_decrement_ref_count(__right_value335, ((struct sNode*)__right_value335)->finalize, ((struct sNode*)__right_value335)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__148) ? __result_obj__148 = come_decrement_ref_count(__result_obj__148, ((struct sNode*)__result_obj__148)->finalize, ((struct sNode*)__result_obj__148)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__148;
            come_call_finalizer(sType_finalize, type_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_52 = come_decrement_ref_count(name_52, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_54) ? node_54 = come_decrement_ref_count(node_54, ((struct sNode*)node_54)->finalize, ((struct sNode*)node_54)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            no_assign_56=info->no_assign;
            info->no_assign=(_Bool)0;
            if(({            (_condtional_value_X437=(gComeC&&info->in_fun_param));            _condtional_value_X437;            })) {
                no_comma_57=info->no_comma;
                info->no_comma=(_Bool)0;
                parse_sharp_v5(info);
                __dec_obj123=node_55,
                node_55=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0, (void*)0) :0);
                parse_sharp_v5(info);
                info->no_comma=no_comma_57;
            }
            else {
                parse_sharp_v5(info);
                __dec_obj124=node_55,
                node_55=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0, (void*)0) :0);
                parse_sharp_v5(info);
            }
            info->no_assign=no_assign_56;
            expected_next_character(41,info);
            parse_sharp_v5(info);
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05pre_op.c", 1138, "struct sNode");
            _inf_obj_value19=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(__right_value339=sParenNode_initialize((struct sParenNode*)come_increment_ref_count((struct sParenNode*)come_calloc_v2(1, sizeof(struct sParenNode)*(1), "05pre_op.c", 1138, "struct sParenNode*")),node_55,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sParenNode_finalize;
            _inf_value19->clone=(void*)sParenNode_clone;
            _inf_value19->compile=(void*)sParenNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sParenNode_kind;
            _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj127=node_55,
            node_55=(struct sNode*)come_increment_ref_count(_inf_value19);
            (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sParenNode_finalize, __right_value339, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __result_obj__151 = (struct sNode*)come_increment_ref_count(node_55);
            ((node_55) ? node_55 = come_decrement_ref_count(node_55, ((struct sNode*)node_55)->finalize, ((struct sNode*)node_55)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            ((__result_obj__151) ? __result_obj__151 = come_decrement_ref_count(__result_obj__151, ((struct sNode*)__result_obj__151)->finalize, ((struct sNode*)__result_obj__151)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__151;
            ((node_55) ? node_55 = come_decrement_ref_count(node_55, ((struct sNode*)node_55)->finalize, ((struct sNode*)node_55)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else {
        __result_obj__152 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((__result_obj__152) ? __result_obj__152 = come_decrement_ref_count(__result_obj__152, ((struct sNode*)__result_obj__152)->finalize, ((struct sNode*)__result_obj__152)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__152;
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
_Bool _condtional_value_X352;
struct sArrayInitializer* __result_obj__118;
void* __right_value249 = (void*)0;
struct sArrayInitializer* result;
_Bool _condtional_value_X353;
_Bool _condtional_value_X354;
void* __right_value250 = (void*)0;
char* __dec_obj105;
_Bool _condtional_value_X355;
_Bool _condtional_value_X356;
void* __right_value251 = (void*)0;
char* __dec_obj106;
_Bool _condtional_value_X357;
void* __right_value252 = (void*)0;
struct sType* __dec_obj107;
struct sArrayInitializer* __result_obj__119;
    if(({    (_condtional_value_X352=(self==(void*)0));    _condtional_value_X352;    })) {
        __result_obj__118 = (void*)0;
        return __result_obj__118;
    }
    result=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc_v2(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer*"));
    if(({    (_condtional_value_X353=(self!=((void*)0)));    _condtional_value_X353;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X354=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X354;    })) {
        __dec_obj105=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sArrayInitializer_clone", 5, "char*"));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X355=(self!=((void*)0)));    _condtional_value_X355;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X356=(self!=((void*)0)&&self->initializer!=((void*)0)));    _condtional_value_X356;    })) {
        __dec_obj106=result->initializer,
        result->initializer=(char*)come_increment_ref_count((char*)come_memdup(self->initializer, "sArrayInitializer_clone", 7, "char*"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X357=(self!=((void*)0)&&self->type_!=((void*)0)));    _condtional_value_X357;    })) {
        __dec_obj107=result->type_,
        result->type_=(struct sType*)come_increment_ref_count(sType_clone(self->type_));
        come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__119 = result;
    come_call_finalizer(sArrayInitializer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__119;
}

static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self){
_Bool _condtional_value_X360;
struct sLogicalDenial2* __result_obj__123;
void* __right_value262 = (void*)0;
struct sLogicalDenial2* result;
_Bool _condtional_value_X361;
_Bool _condtional_value_X362;
void* __right_value263 = (void*)0;
char* __dec_obj108;
_Bool _condtional_value_X363;
_Bool _condtional_value_X364;
void* __right_value264 = (void*)0;
struct sNode* __dec_obj109;
struct sLogicalDenial2* __result_obj__124;
    if(({    (_condtional_value_X360=(self==(void*)0));    _condtional_value_X360;    })) {
        __result_obj__123 = (void*)0;
        return __result_obj__123;
    }
    result=(struct sLogicalDenial2*)come_increment_ref_count((struct sLogicalDenial2*)come_calloc_v2(1, sizeof(struct sLogicalDenial2)*(1), "sLogicalDenial2_clone", 3, "struct sLogicalDenial2*"));
    if(({    (_condtional_value_X361=(self!=((void*)0)));    _condtional_value_X361;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X362=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X362;    })) {
        __dec_obj108=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLogicalDenial2_clone", 5, "char*"));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X363=(self!=((void*)0)));    _condtional_value_X363;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X364=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X364;    })) {
        __dec_obj109=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj109 ? __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__124 = result;
    come_call_finalizer(sLogicalDenial2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__124;
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
_Bool _condtional_value_X366;
struct sMinusMinusNode2* __result_obj__126;
void* __right_value269 = (void*)0;
struct sMinusMinusNode2* result;
_Bool _condtional_value_X367;
_Bool _condtional_value_X368;
void* __right_value270 = (void*)0;
char* __dec_obj110;
_Bool _condtional_value_X369;
_Bool _condtional_value_X370;
void* __right_value271 = (void*)0;
struct sNode* __dec_obj111;
struct sMinusMinusNode2* __result_obj__127;
    if(({    (_condtional_value_X366=(self==(void*)0));    _condtional_value_X366;    })) {
        __result_obj__126 = (void*)0;
        return __result_obj__126;
    }
    result=(struct sMinusMinusNode2*)come_increment_ref_count((struct sMinusMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "struct sMinusMinusNode2*"));
    if(({    (_condtional_value_X367=(self!=((void*)0)));    _condtional_value_X367;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X368=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X368;    })) {
        __dec_obj110=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMinusMinusNode2_clone", 5, "char*"));
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X369=(self!=((void*)0)));    _condtional_value_X369;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X370=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X370;    })) {
        __dec_obj111=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__127 = result;
    come_call_finalizer(sMinusMinusNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__127;
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
_Bool _condtional_value_X372;
struct sMinusNode2* __result_obj__129;
void* __right_value276 = (void*)0;
struct sMinusNode2* result;
_Bool _condtional_value_X373;
_Bool _condtional_value_X374;
void* __right_value277 = (void*)0;
char* __dec_obj112;
_Bool _condtional_value_X375;
_Bool _condtional_value_X376;
void* __right_value278 = (void*)0;
struct sNode* __dec_obj113;
struct sMinusNode2* __result_obj__130;
    if(({    (_condtional_value_X372=(self==(void*)0));    _condtional_value_X372;    })) {
        __result_obj__129 = (void*)0;
        return __result_obj__129;
    }
    result=(struct sMinusNode2*)come_increment_ref_count((struct sMinusNode2*)come_calloc_v2(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "struct sMinusNode2*"));
    if(({    (_condtional_value_X373=(self!=((void*)0)));    _condtional_value_X373;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X374=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X374;    })) {
        __dec_obj112=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMinusNode2_clone", 5, "char*"));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X375=(self!=((void*)0)));    _condtional_value_X375;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X376=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X376;    })) {
        __dec_obj113=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj113 ? __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__130 = result;
    come_call_finalizer(sMinusNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__130;
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
_Bool _condtional_value_X378;
struct sPlusPlusNode2* __result_obj__132;
void* __right_value283 = (void*)0;
struct sPlusPlusNode2* result;
_Bool _condtional_value_X379;
_Bool _condtional_value_X380;
void* __right_value284 = (void*)0;
char* __dec_obj114;
_Bool _condtional_value_X381;
_Bool _condtional_value_X382;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj115;
struct sPlusPlusNode2* __result_obj__133;
    if(({    (_condtional_value_X378=(self==(void*)0));    _condtional_value_X378;    })) {
        __result_obj__132 = (void*)0;
        return __result_obj__132;
    }
    result=(struct sPlusPlusNode2*)come_increment_ref_count((struct sPlusPlusNode2*)come_calloc_v2(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "struct sPlusPlusNode2*"));
    if(({    (_condtional_value_X379=(self!=((void*)0)));    _condtional_value_X379;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X380=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X380;    })) {
        __dec_obj114=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sPlusPlusNode2_clone", 5, "char*"));
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X381=(self!=((void*)0)));    _condtional_value_X381;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X382=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X382;    })) {
        __dec_obj115=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__133 = result;
    come_call_finalizer(sPlusPlusNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__133;
}

static struct sComplement* sComplement_clone(struct sComplement* self){
_Bool _condtional_value_X384;
struct sComplement* __result_obj__135;
void* __right_value290 = (void*)0;
struct sComplement* result;
_Bool _condtional_value_X385;
_Bool _condtional_value_X386;
void* __right_value291 = (void*)0;
char* __dec_obj116;
_Bool _condtional_value_X387;
_Bool _condtional_value_X388;
void* __right_value292 = (void*)0;
struct sNode* __dec_obj117;
struct sComplement* __result_obj__136;
    if(({    (_condtional_value_X384=(self==(void*)0));    _condtional_value_X384;    })) {
        __result_obj__135 = (void*)0;
        return __result_obj__135;
    }
    result=(struct sComplement*)come_increment_ref_count((struct sComplement*)come_calloc_v2(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "struct sComplement*"));
    if(({    (_condtional_value_X385=(self!=((void*)0)));    _condtional_value_X385;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X386=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X386;    })) {
        __dec_obj116=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComplement_clone", 5, "char*"));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X387=(self!=((void*)0)));    _condtional_value_X387;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X388=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X388;    })) {
        __dec_obj117=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj117 ? __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__136 = result;
    come_call_finalizer(sComplement_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__136;
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
_Bool _condtional_value_X391;
struct sDerefferenceNode* __result_obj__138;
void* __right_value297 = (void*)0;
struct sDerefferenceNode* result;
_Bool _condtional_value_X392;
_Bool _condtional_value_X393;
void* __right_value298 = (void*)0;
char* __dec_obj118;
_Bool _condtional_value_X394;
_Bool _condtional_value_X395;
void* __right_value299 = (void*)0;
struct sNode* __dec_obj119;
_Bool _condtional_value_X396;
struct sDerefferenceNode* __result_obj__139;
    if(({    (_condtional_value_X391=(self==(void*)0));    _condtional_value_X391;    })) {
        __result_obj__138 = (void*)0;
        return __result_obj__138;
    }
    result=(struct sDerefferenceNode*)come_increment_ref_count((struct sDerefferenceNode*)come_calloc_v2(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "struct sDerefferenceNode*"));
    if(({    (_condtional_value_X392=(self!=((void*)0)));    _condtional_value_X392;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X393=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X393;    })) {
        __dec_obj118=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDerefferenceNode_clone", 5, "char*"));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X394=(self!=((void*)0)));    _condtional_value_X394;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X395=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X395;    })) {
        __dec_obj119=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X396=(self!=((void*)0)));    _condtional_value_X396;    })) {
        result->mQuote=self->mQuote;
    }
    __result_obj__139 = result;
    come_call_finalizer(sDerefferenceNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__139;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
_Bool _condtional_value_X402;
_Bool _condtional_value_X403;
    if(({    (_condtional_value_X402=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X402;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X403=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X403;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self){
_Bool _condtional_value_X415;
struct sParenBlockNode* __result_obj__143;
void* __right_value319 = (void*)0;
struct sParenBlockNode* result;
_Bool _condtional_value_X416;
_Bool _condtional_value_X417;
void* __right_value320 = (void*)0;
char* __dec_obj121;
_Bool _condtional_value_X418;
_Bool _condtional_value_X419;
void* __right_value321 = (void*)0;
struct list$1sNode$ph* __dec_obj122;
struct sParenBlockNode* __result_obj__144;
    if(({    (_condtional_value_X415=(self==(void*)0));    _condtional_value_X415;    })) {
        __result_obj__143 = (void*)0;
        return __result_obj__143;
    }
    result=(struct sParenBlockNode*)come_increment_ref_count((struct sParenBlockNode*)come_calloc_v2(1, sizeof(struct sParenBlockNode)*(1), "sParenBlockNode_clone", 3, "struct sParenBlockNode*"));
    if(({    (_condtional_value_X416=(self!=((void*)0)));    _condtional_value_X416;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X417=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X417;    })) {
        __dec_obj121=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sParenBlockNode_clone", 5, "char*"));
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X418=(self!=((void*)0)));    _condtional_value_X418;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X419=(self!=((void*)0)&&self->paren_block!=((void*)0)));    _condtional_value_X419;    })) {
        __dec_obj122=result->paren_block,
        result->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->paren_block));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__144 = result;
    come_call_finalizer(sParenBlockNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__144;
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
_Bool _condtional_value_X438;
struct sParenNode* __result_obj__149;
void* __right_value340 = (void*)0;
struct sParenNode* result;
_Bool _condtional_value_X439;
_Bool _condtional_value_X440;
void* __right_value341 = (void*)0;
char* __dec_obj125;
_Bool _condtional_value_X441;
_Bool _condtional_value_X442;
void* __right_value342 = (void*)0;
struct sNode* __dec_obj126;
struct sParenNode* __result_obj__150;
    if(({    (_condtional_value_X438=(self==(void*)0));    _condtional_value_X438;    })) {
        __result_obj__149 = (void*)0;
        return __result_obj__149;
    }
    result=(struct sParenNode*)come_increment_ref_count((struct sParenNode*)come_calloc_v2(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "struct sParenNode*"));
    if(({    (_condtional_value_X439=(self!=((void*)0)));    _condtional_value_X439;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X440=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X440;    })) {
        __dec_obj125=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sParenNode_clone", 5, "char*"));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X441=(self!=((void*)0)));    _condtional_value_X441;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X442=(self!=((void*)0)&&self->mLeft!=((void*)0)));    _condtional_value_X442;    })) {
        __dec_obj126=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj126 ? __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__150 = result;
    come_call_finalizer(sParenNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__150;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __right_value344 = (void*)0;
struct sNode* node;
_Bool _condtional_value_X443;
void* __right_value345 = (void*)0;
struct sNode* __result_obj__153;
struct sNode* __result_obj__154;
    node=(struct sNode*)come_increment_ref_count(pre_position_operator(info));
    if(({    (_condtional_value_X443=(node==((void*)0)));    _condtional_value_X443;    })) {
        __result_obj__153 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value345=expression_node_v97(info))));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((__right_value345) ? __right_value345 = come_decrement_ref_count(__right_value345, ((struct sNode*)__right_value345)->finalize, ((struct sNode*)__right_value345)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__153) ? __result_obj__153 = come_decrement_ref_count(__result_obj__153, ((struct sNode*)__result_obj__153)->finalize, ((struct sNode*)__result_obj__153)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__153;
    }
    else {
        __result_obj__154 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__154) ? __result_obj__154 = come_decrement_ref_count(__result_obj__154, ((struct sNode*)__result_obj__154)->finalize, ((struct sNode*)__result_obj__154)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__154;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
}

