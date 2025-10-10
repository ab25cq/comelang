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

struct sInterfaceNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    struct sClass* klass;
    _Bool mOutput;
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
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type);
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
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
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
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sNode* new_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* new_output_node(char* contents, struct sInfo* info);
struct sNode* new_inline_assembler_node(char* source, int num_exps, struct sNode** exps, struct sInfo* info);
struct sNode* new_line_node(struct sInfo* info);
struct sNode* new_sname_node(struct sInfo* info);
struct sNode* new_func_node(struct sInfo* info);
struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);
char* sInterfaceNode_kind(struct sInterfaceNode* self);
_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sInterfaceNode_finalize(struct sInterfaceNode* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item);
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
struct tuple2$2sType$phchar$ph* parse_interface_function(struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct list$1sType$ph* list$1sType$ph_insert(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct list$1char$ph* list$1char$ph_insert(struct list$1char$ph* self, int position, char* item);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self);
// uniq global variable
// inline function

// body function
struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
char* __dec_obj1;
void* __right_value56 = (void*)0;
struct sClass* __dec_obj36;
struct sInterfaceNode* __result_obj__25;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj1=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj36=self->klass,
    self->klass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer(sClass_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mOutput=output;
    __result_obj__25 = (struct sInterfaceNode*)come_increment_ref_count(self);
    come_call_finalizer(sInterfaceNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sInterfaceNode_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__25;
}

char* sInterfaceNode_kind(struct sInterfaceNode* self){
void* __right_value57 = (void*)0;
char* __result_obj__26;
    __result_obj__26 = (char*)come_increment_ref_count(((char*)(__right_value57=__builtin_string("sInterfaceNode"))));
    (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__26 = come_decrement_ref_count(__result_obj__26, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__26;
}

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info){
void* __right_value58 = (void*)0;
char* name;
struct sClass* klass;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct buffer* buf;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X149;
_Bool _condtional_value_X150;
_Bool _condtional_value_X153;
struct tuple2$2char$phsType$ph* multiple_assign_var1 = (void*)0;
char* name_10=0;
struct sType* type=0;
void* __right_value61 = (void*)0;
_Bool _condtional_value_X154;
void* __right_value70 = (void*)0;
void* __right_value76 = (void*)0;
_Bool __result_obj__66;
    name=(char*)come_increment_ref_count(__builtin_string(self->name));
    klass=(struct sClass*)come_increment_ref_count(self->klass);
    klass->mProtocol=(_Bool)1;
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "23interface.c", 26, "struct buffer*"))));
    buffer_append_format(buf,"struct %s\n{\n",klass->mName);
    for(    ({    (_condtional_value_X149=(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved)));    _condtional_value_X149;    });    ({    (_condtional_value_X150=(!list$1tuple2$2char$phsType$ph$ph_end(o2_saved)));    _condtional_value_X150;    });    ({    (_condtional_value_X153=(it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)));    _condtional_value_X153;    })    ){
        multiple_assign_var1=it;
        name_10=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        buffer_append_str(buf,"    ");
        buffer_append_str(buf,((char*)(__right_value61=make_define_var(type,name_10,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value61 = come_decrement_ref_count(__right_value61, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        buffer_append_str(buf,";\n");
        (name_10 = come_decrement_ref_count(name_10, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf,"};\n");
    if(({    (_condtional_value_X154=(self->mOutput));    _condtional_value_X154;    })) {
        map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name)),(struct buffer*)come_increment_ref_count(buf));
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(name)),(struct sClass*)come_increment_ref_count(klass));
    }
    __result_obj__66 = (_Bool)1;
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__66;
}

static void sNodeBase_finalize(struct sNodeBase* self){
_Bool _condtional_value_X1;
    if(({    (_condtional_value_X1=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X1;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sClass* sClass_clone(struct sClass* self){
_Bool _condtional_value_X2;
struct sClass* __result_obj__1;
void* __right_value2 = (void*)0;
struct sClass* result;
_Bool _condtional_value_X33;
_Bool _condtional_value_X34;
_Bool _condtional_value_X35;
_Bool _condtional_value_X36;
_Bool _condtional_value_X37;
_Bool _condtional_value_X38;
_Bool _condtional_value_X39;
_Bool _condtional_value_X40;
_Bool _condtional_value_X41;
_Bool _condtional_value_X42;
void* __right_value3 = (void*)0;
char* __dec_obj2;
_Bool _condtional_value_X43;
_Bool _condtional_value_X44;
_Bool _condtional_value_X45;
void* __right_value53 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj33;
_Bool _condtional_value_X142;
void* __right_value54 = (void*)0;
char* __dec_obj34;
_Bool _condtional_value_X143;
void* __right_value55 = (void*)0;
char* __dec_obj35;
struct sClass* __result_obj__24;
    if(({    (_condtional_value_X2=(self==(void*)0));    _condtional_value_X2;    })) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sClass_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__1;
    }
    result=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass*"));
    if(({    (_condtional_value_X33=(self!=((void*)0)));    _condtional_value_X33;    })) {
        result->mStruct=self->mStruct;
    }
    if(({    (_condtional_value_X34=(self!=((void*)0)));    _condtional_value_X34;    })) {
        result->mFloat=self->mFloat;
    }
    if(({    (_condtional_value_X35=(self!=((void*)0)));    _condtional_value_X35;    })) {
        result->mUnion=self->mUnion;
    }
    if(({    (_condtional_value_X36=(self!=((void*)0)));    _condtional_value_X36;    })) {
        result->mGenerics=self->mGenerics;
    }
    if(({    (_condtional_value_X37=(self!=((void*)0)));    _condtional_value_X37;    })) {
        result->mMethodGenerics=self->mMethodGenerics;
    }
    if(({    (_condtional_value_X38=(self!=((void*)0)));    _condtional_value_X38;    })) {
        result->mEnum=self->mEnum;
    }
    if(({    (_condtional_value_X39=(self!=((void*)0)));    _condtional_value_X39;    })) {
        result->mProtocol=self->mProtocol;
    }
    if(({    (_condtional_value_X40=(self!=((void*)0)));    _condtional_value_X40;    })) {
        result->mNumber=self->mNumber;
    }
    if(({    (_condtional_value_X41=(self!=((void*)0)));    _condtional_value_X41;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_condtional_value_X42=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X42;    })) {
        __dec_obj2=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sClass_clone", 13, "char*"));
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X43=(self!=((void*)0)));    _condtional_value_X43;    })) {
        result->mGenericsNum=self->mGenericsNum;
    }
    if(({    (_condtional_value_X44=(self!=((void*)0)));    _condtional_value_X44;    })) {
        result->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(({    (_condtional_value_X45=(self!=((void*)0)&&self->mFields!=((void*)0)));    _condtional_value_X45;    })) {
        __dec_obj33=result->mFields,
        result->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_clone(self->mFields));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X142=(self!=((void*)0)&&self->mParentClassName!=((void*)0)));    _condtional_value_X142;    })) {
        __dec_obj34=result->mParentClassName,
        result->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(self->mParentClassName, "sClass_clone", 17, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X143=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X143;    })) {
        __dec_obj35=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sClass_clone", 18, "char*"));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__24 = (struct sClass*)come_increment_ref_count(result);
    come_call_finalizer(sClass_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__24;
}

static void sClass_finalize(struct sClass* self){
_Bool _condtional_value_X3;
_Bool _condtional_value_X4;
_Bool _condtional_value_X31;
_Bool _condtional_value_X32;
    if(({    (_condtional_value_X3=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X3;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X4=(self!=((void*)0)&&self->mFields!=((void*)0)));    _condtional_value_X4;    })) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X31=(self!=((void*)0)&&self->mParentClassName!=((void*)0)));    _condtional_value_X31;    })) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X32=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X32;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _condtional_value_X5;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X5=(it!=((void*)0)));    _condtional_value_X5;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X6;
    if(({    (_condtional_value_X6=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X6;    })) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X7;
_Bool _condtional_value_X8;
    if(({    (_condtional_value_X7=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X7;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X8=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X8;    })) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sType_finalize(struct sType* self){
_Bool _condtional_value_X9;
_Bool _condtional_value_X10;
_Bool _condtional_value_X11;
_Bool _condtional_value_X14;
_Bool _condtional_value_X15;
_Bool _condtional_value_X16;
_Bool _condtional_value_X17;
_Bool _condtional_value_X18;
_Bool _condtional_value_X19;
_Bool _condtional_value_X20;
_Bool _condtional_value_X21;
_Bool _condtional_value_X24;
_Bool _condtional_value_X25;
_Bool _condtional_value_X26;
_Bool _condtional_value_X29;
_Bool _condtional_value_X30;
    if(({    (_condtional_value_X9=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X9;    })) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X10=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X10;    })) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X11=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X11;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X14=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X14;    })) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X15=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X15;    })) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X16=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X16;    })) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X17=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X17;    })) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X18=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X18;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X19=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X19;    })) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X20=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X20;    })) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X21=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X21;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X24=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X24;    })) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X25=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X25;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X26=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X26;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X29=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X29;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X30=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X30;    })) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X12;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X12=(it!=((void*)0)));    _condtional_value_X12;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
_Bool _condtional_value_X13;
    if(({    (_condtional_value_X13=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X13;    })) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X22;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X22=(it!=((void*)0)));    _condtional_value_X22;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
_Bool _condtional_value_X23;
    if(({    (_condtional_value_X23=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X23;    })) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X27;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X27=(it!=((void*)0)));    _condtional_value_X27;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
_Bool _condtional_value_X28;
    if(({    (_condtional_value_X28=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X28;    })) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X46;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__2;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* result;
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _condtional_value_X47;
_Bool _condtional_value_X48;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__23;
    if(({    (_condtional_value_X46=(self==((void*)0)));    _condtional_value_X46;    })) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__2;
    }
    result=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1007, "struct list$1tuple2$2char$phsType$ph$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X47=(it!=((void*)0)));    _condtional_value_X47;    })) {
        if(({        (_condtional_value_X48=(1));        _condtional_value_X48;        })) {
            list$1tuple2$2char$phsType$ph$ph_add(result,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it->item)));
        }
        else {
            list$1tuple2$2char$phsType$ph$ph_add(result,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__23 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__23;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__3;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__3 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__3;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
_Bool _condtional_value_X49;
void* __right_value6 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem;
struct tuple2$2char$phsType$ph* __dec_obj3;
_Bool _condtional_value_X50;
void* __right_value7 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_0;
struct tuple2$2char$phsType$ph* __dec_obj4;
void* __right_value8 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_1;
struct tuple2$2char$phsType$ph* __dec_obj5;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__4;
    if(({    (_condtional_value_X49=(self->len==0));    _condtional_value_X49;    })) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value6=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1026, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X50=(self->len==1));    _condtional_value_X50;    })) {
        litem_0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value7=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj4=litem_0->item,
        litem_0->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value8=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj5=litem_1->item,
        litem_1->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__4 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__4;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X51;
struct tuple2$2char$phsType$ph* __result_obj__5;
void* __right_value9 = (void*)0;
struct tuple2$2char$phsType$ph* result;
_Bool _condtional_value_X52;
void* __right_value10 = (void*)0;
char* __dec_obj6;
_Bool _condtional_value_X53;
void* __right_value50 = (void*)0;
struct sType* __dec_obj32;
struct tuple2$2char$phsType$ph* __result_obj__22;
    if(({    (_condtional_value_X51=(self==(void*)0));    _condtional_value_X51;    })) {
        __result_obj__5 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__5;
    }
    result=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(({    (_condtional_value_X52=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X52;    })) {
        __dec_obj6=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X53=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X53;    })) {
        __dec_obj32=result->v2,
        result->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__22 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsType$ph_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__22;
}

static struct sType* sType_clone(struct sType* self){
_Bool _condtional_value_X54;
struct sType* __result_obj__6;
void* __right_value11 = (void*)0;
struct sType* result;
_Bool _condtional_value_X55;
_Bool _condtional_value_X56;
void* __right_value12 = (void*)0;
struct sType* __dec_obj7;
_Bool _condtional_value_X57;
void* __right_value13 = (void*)0;
struct sType* __dec_obj8;
_Bool _condtional_value_X58;
void* __right_value21 = (void*)0;
struct list$1sType$ph* __dec_obj12;
_Bool _condtional_value_X65;
void* __right_value22 = (void*)0;
struct sType* __dec_obj13;
_Bool _condtional_value_X66;
void* __right_value24 = (void*)0;
struct sNode* __dec_obj14;
_Bool _condtional_value_X78;
void* __right_value25 = (void*)0;
struct sNode* __dec_obj15;
_Bool _condtional_value_X79;
void* __right_value26 = (void*)0;
char* __dec_obj16;
_Bool _condtional_value_X80;
void* __right_value27 = (void*)0;
char* __dec_obj17;
_Bool _condtional_value_X81;
void* __right_value28 = (void*)0;
char* __dec_obj18;
_Bool _condtional_value_X82;
_Bool _condtional_value_X83;
_Bool _condtional_value_X84;
_Bool _condtional_value_X85;
_Bool _condtional_value_X86;
_Bool _condtional_value_X87;
_Bool _condtional_value_X88;
_Bool _condtional_value_X89;
_Bool _condtional_value_X90;
_Bool _condtional_value_X91;
_Bool _condtional_value_X92;
_Bool _condtional_value_X93;
_Bool _condtional_value_X94;
_Bool _condtional_value_X95;
_Bool _condtional_value_X96;
_Bool _condtional_value_X97;
_Bool _condtional_value_X98;
_Bool _condtional_value_X99;
_Bool _condtional_value_X100;
_Bool _condtional_value_X101;
_Bool _condtional_value_X102;
_Bool _condtional_value_X103;
_Bool _condtional_value_X104;
_Bool _condtional_value_X105;
_Bool _condtional_value_X106;
_Bool _condtional_value_X107;
void* __right_value29 = (void*)0;
char* __dec_obj19;
_Bool _condtional_value_X108;
_Bool _condtional_value_X109;
_Bool _condtional_value_X110;
_Bool _condtional_value_X111;
void* __right_value37 = (void*)0;
struct list$1sNode$ph* __dec_obj23;
_Bool _condtional_value_X118;
_Bool _condtional_value_X119;
_Bool _condtional_value_X120;
_Bool _condtional_value_X121;
_Bool _condtional_value_X122;
_Bool _condtional_value_X123;
_Bool _condtional_value_X124;
void* __right_value38 = (void*)0;
char* __dec_obj24;
_Bool _condtional_value_X125;
_Bool _condtional_value_X126;
_Bool _condtional_value_X127;
void* __right_value39 = (void*)0;
struct list$1sType$ph* __dec_obj25;
_Bool _condtional_value_X128;
void* __right_value47 = (void*)0;
struct list$1char$ph* __dec_obj29;
_Bool _condtional_value_X135;
void* __right_value48 = (void*)0;
struct sType* __dec_obj30;
_Bool _condtional_value_X136;
_Bool _condtional_value_X137;
_Bool _condtional_value_X138;
void* __right_value49 = (void*)0;
struct sNode* __dec_obj31;
struct sType* __result_obj__21;
    if(({    (_condtional_value_X54=(self==(void*)0));    _condtional_value_X54;    })) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__6;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_condtional_value_X55=(self!=((void*)0)));    _condtional_value_X55;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_condtional_value_X56=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X56;    })) {
        __dec_obj7=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X57=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X57;    })) {
        __dec_obj8=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X58=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X58;    })) {
        __dec_obj12=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj12,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X65=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X65;    })) {
        __dec_obj13=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X66=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X66;    })) {
        __dec_obj14=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(({    (_condtional_value_X78=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X78;    })) {
        __dec_obj15=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(({    (_condtional_value_X79=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X79;    })) {
        __dec_obj16=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X80=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X80;    })) {
        __dec_obj17=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X81=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X81;    })) {
        __dec_obj18=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X82=(self!=((void*)0)));    _condtional_value_X82;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_condtional_value_X83=(self!=((void*)0)));    _condtional_value_X83;    })) {
        result->mUnsigned=self->mUnsigned;
    }
    if(({    (_condtional_value_X84=(self!=((void*)0)));    _condtional_value_X84;    })) {
        result->mShort=self->mShort;
    }
    if(({    (_condtional_value_X85=(self!=((void*)0)));    _condtional_value_X85;    })) {
        result->mLong=self->mLong;
    }
    if(({    (_condtional_value_X86=(self!=((void*)0)));    _condtional_value_X86;    })) {
        result->mLongLong=self->mLongLong;
    }
    if(({    (_condtional_value_X87=(self!=((void*)0)));    _condtional_value_X87;    })) {
        result->mConstant=self->mConstant;
    }
    if(({    (_condtional_value_X88=(self!=((void*)0)));    _condtional_value_X88;    })) {
        result->mAtomic=self->mAtomic;
    }
    if(({    (_condtional_value_X89=(self!=((void*)0)));    _condtional_value_X89;    })) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(({    (_condtional_value_X90=(self!=((void*)0)));    _condtional_value_X90;    })) {
        result->mRegister=self->mRegister;
    }
    if(({    (_condtional_value_X91=(self!=((void*)0)));    _condtional_value_X91;    })) {
        result->mVolatile=self->mVolatile;
    }
    if(({    (_condtional_value_X92=(self!=((void*)0)));    _condtional_value_X92;    })) {
        result->mStatic=self->mStatic;
    }
    if(({    (_condtional_value_X93=(self!=((void*)0)));    _condtional_value_X93;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_condtional_value_X94=(self!=((void*)0)));    _condtional_value_X94;    })) {
        result->mRecord=self->mRecord;
    }
    if(({    (_condtional_value_X95=(self!=((void*)0)));    _condtional_value_X95;    })) {
        result->mExtern=self->mExtern;
    }
    if(({    (_condtional_value_X96=(self!=((void*)0)));    _condtional_value_X96;    })) {
        result->mRestrict=self->mRestrict;
    }
    if(({    (_condtional_value_X97=(self!=((void*)0)));    _condtional_value_X97;    })) {
        result->mImmutable=self->mImmutable;
    }
    if(({    (_condtional_value_X98=(self!=((void*)0)));    _condtional_value_X98;    })) {
        result->mTask=self->mTask;
    }
    if(({    (_condtional_value_X99=(self!=((void*)0)));    _condtional_value_X99;    })) {
        result->mHeap=self->mHeap;
    }
    if(({    (_condtional_value_X100=(self!=((void*)0)));    _condtional_value_X100;    })) {
        result->mChannel=self->mChannel;
    }
    if(({    (_condtional_value_X101=(self!=((void*)0)));    _condtional_value_X101;    })) {
        result->mNoHeap=self->mNoHeap;
    }
    if(({    (_condtional_value_X102=(self!=((void*)0)));    _condtional_value_X102;    })) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(({    (_condtional_value_X103=(self!=((void*)0)));    _condtional_value_X103;    })) {
        result->mException=self->mException;
    }
    if(({    (_condtional_value_X104=(self!=((void*)0)));    _condtional_value_X104;    })) {
        result->mInline=self->mInline;
    }
    if(({    (_condtional_value_X105=(self!=((void*)0)));    _condtional_value_X105;    })) {
        result->mNullValue=self->mNullValue;
    }
    if(({    (_condtional_value_X106=(self!=((void*)0)));    _condtional_value_X106;    })) {
        result->mGuardValue=self->mGuardValue;
    }
    if(({    (_condtional_value_X107=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X107;    })) {
        __dec_obj19=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X108=(self!=((void*)0)));    _condtional_value_X108;    })) {
        result->mTypedef=self->mTypedef;
    }
    if(({    (_condtional_value_X109=(self!=((void*)0)));    _condtional_value_X109;    })) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(({    (_condtional_value_X110=(self!=((void*)0)));    _condtional_value_X110;    })) {
        result->mOriginIsArray=self->mOriginIsArray;
    }
    if(({    (_condtional_value_X111=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X111;    })) {
        __dec_obj23=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X118=(self!=((void*)0)));    _condtional_value_X118;    })) {
        result->mPointerNum=self->mPointerNum;
    }
    if(({    (_condtional_value_X119=(self!=((void*)0)));    _condtional_value_X119;    })) {
        result->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(({    (_condtional_value_X120=(self!=((void*)0)));    _condtional_value_X120;    })) {
        result->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(({    (_condtional_value_X121=(self!=((void*)0)));    _condtional_value_X121;    })) {
        result->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(({    (_condtional_value_X122=(self!=((void*)0)));    _condtional_value_X122;    })) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(({    (_condtional_value_X123=(self!=((void*)0)));    _condtional_value_X123;    })) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(({    (_condtional_value_X124=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X124;    })) {
        __dec_obj24=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X125=(self!=((void*)0)));    _condtional_value_X125;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_condtional_value_X126=(self!=((void*)0)));    _condtional_value_X126;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_condtional_value_X127=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X127;    })) {
        __dec_obj25=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X128=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X128;    })) {
        __dec_obj29=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X135=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X135;    })) {
        __dec_obj30=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X136=(self!=((void*)0)));    _condtional_value_X136;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_condtional_value_X137=(self!=((void*)0)));    _condtional_value_X137;    })) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(({    (_condtional_value_X138=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X138;    })) {
        __dec_obj31=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__21 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
_Bool _condtional_value_X59;
struct list$1sType$ph* __result_obj__7;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _condtional_value_X60;
_Bool _condtional_value_X61;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
struct list$1sType$ph* __result_obj__10;
    if(({    (_condtional_value_X59=(self==((void*)0)));    _condtional_value_X59;    })) {
        __result_obj__7 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__7;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1007, "struct list$1sType$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X60=(it!=((void*)0)));    _condtional_value_X60;    })) {
        if(({        (_condtional_value_X61=(1));        _condtional_value_X61;        })) {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__10 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__10;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__8;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__8 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__8;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X62;
void* __right_value16 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj9;
_Bool _condtional_value_X63;
void* __right_value17 = (void*)0;
struct list_item$1sType$ph* litem_2;
struct sType* __dec_obj10;
void* __right_value18 = (void*)0;
struct list_item$1sType$ph* litem_3;
struct sType* __dec_obj11;
struct list$1sType$ph* __result_obj__9;
    if(({    (_condtional_value_X62=(self->len==0));    _condtional_value_X62;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value16=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1026, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj9=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X63=(self->len==1));    _condtional_value_X63;    })) {
        litem_2=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value17=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sType$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj10=litem_2->item,
        litem_2->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value18=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sType$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj11=litem_3->item,
        litem_3->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__9 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__9;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X64;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X64=(it!=((void*)0)));    _condtional_value_X64;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
_Bool _condtional_value_X67;
struct sNode* __result_obj__11;
void* __right_value23 = (void*)0;
struct sNode* result;
_Bool _condtional_value_X68;
_Bool _condtional_value_X69;
_Bool _condtional_value_X70;
_Bool _condtional_value_X71;
_Bool _condtional_value_X72;
_Bool _condtional_value_X73;
_Bool _condtional_value_X74;
_Bool _condtional_value_X75;
_Bool _condtional_value_X76;
_Bool _condtional_value_X77;
struct sNode* __result_obj__12;
    if(({    (_condtional_value_X67=(self==(void*)0));    _condtional_value_X67;    })) {
        __result_obj__11 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__11) ? __result_obj__11 = come_decrement_ref_count(__result_obj__11, ((struct sNode*)__result_obj__11)->finalize, ((struct sNode*)__result_obj__11)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__11;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(({    (_condtional_value_X68=(self!=((void*)0)&&self->clone!=((void*)0)));    _condtional_value_X68;    })) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(({    (_condtional_value_X69=(self!=((void*)0)));    _condtional_value_X69;    })) {
        result->finalize=self->finalize;
    }
    if(({    (_condtional_value_X70=(self!=((void*)0)));    _condtional_value_X70;    })) {
        result->clone=self->clone;
    }
    if(({    (_condtional_value_X71=(self!=((void*)0)));    _condtional_value_X71;    })) {
        result->compile=self->compile;
    }
    if(({    (_condtional_value_X72=(self!=((void*)0)));    _condtional_value_X72;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X73=(self!=((void*)0)));    _condtional_value_X73;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X74=(self!=((void*)0)));    _condtional_value_X74;    })) {
        result->sname=self->sname;
    }
    if(({    (_condtional_value_X75=(self!=((void*)0)));    _condtional_value_X75;    })) {
        result->terminated=self->terminated;
    }
    if(({    (_condtional_value_X76=(self!=((void*)0)));    _condtional_value_X76;    })) {
        result->kind=self->kind;
    }
    if(({    (_condtional_value_X77=(self!=((void*)0)));    _condtional_value_X77;    })) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__12 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__12) ? __result_obj__12 = come_decrement_ref_count(__result_obj__12, ((struct sNode*)__result_obj__12)->finalize, ((struct sNode*)__result_obj__12)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__12;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
_Bool _condtional_value_X112;
struct list$1sNode$ph* __result_obj__13;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X113;
_Bool _condtional_value_X114;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1sNode$ph* __result_obj__16;
    if(({    (_condtional_value_X112=(self==((void*)0)));    _condtional_value_X112;    })) {
        __result_obj__13 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__13;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1007, "struct list$1sNode$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X113=(it!=((void*)0)));    _condtional_value_X113;    })) {
        if(({        (_condtional_value_X114=(1));        _condtional_value_X114;        })) {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__16 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__16;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__14;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__14 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__14;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
_Bool _condtional_value_X115;
void* __right_value32 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj20;
_Bool _condtional_value_X116;
void* __right_value33 = (void*)0;
struct list_item$1sNode$ph* litem_4;
struct sNode* __dec_obj21;
void* __right_value34 = (void*)0;
struct list_item$1sNode$ph* litem_5;
struct sNode* __dec_obj22;
struct list$1sNode$ph* __result_obj__15;
    if(({    (_condtional_value_X115=(self->len==0));    _condtional_value_X115;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value32=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1026, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj20=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X116=(self->len==1));    _condtional_value_X116;    })) {
        litem_4=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value33=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sNode$ph*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj21=litem_4->item,
        litem_4->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value34=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sNode$ph*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj22=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__15 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__15;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X117;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X117=(it!=((void*)0)));    _condtional_value_X117;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
_Bool _condtional_value_X129;
struct list$1char$ph* __result_obj__17;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _condtional_value_X130;
_Bool _condtional_value_X131;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct list$1char$ph* __result_obj__20;
    if(({    (_condtional_value_X129=(self==((void*)0)));    _condtional_value_X129;    })) {
        __result_obj__17 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__17;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1007, "struct list$1char$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X130=(it!=((void*)0)));    _condtional_value_X130;    })) {
        if(({        (_condtional_value_X131=(1));        _condtional_value_X131;        })) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1012, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1015, "char*")));
        }
        it=it->next;
    }
    __result_obj__20 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__20;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__18;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__18 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__18;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X132;
void* __right_value42 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj26;
_Bool _condtional_value_X133;
void* __right_value43 = (void*)0;
struct list_item$1char$ph* litem_6;
char* __dec_obj27;
void* __right_value44 = (void*)0;
struct list_item$1char$ph* litem_7;
char* __dec_obj28;
struct list$1char$ph* __result_obj__19;
    if(({    (_condtional_value_X132=(self->len==0));    _condtional_value_X132;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value42=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1026, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj26=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X133=(self->len==1));    _condtional_value_X133;    })) {
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value43=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1char$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj27=litem_6->item,
        litem_6->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value44=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1char$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj28=litem_7->item,
        litem_7->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__19 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__19;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X134;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X134=(it!=((void*)0)));    _condtional_value_X134;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X139;
_Bool _condtional_value_X140;
    if(({    (_condtional_value_X139=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X139;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X140=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X140;    })) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _condtional_value_X141;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X141=(it!=((void*)0)));    _condtional_value_X141;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sInterfaceNode_finalize(struct sInterfaceNode* self){
_Bool _condtional_value_X144;
_Bool _condtional_value_X145;
_Bool _condtional_value_X146;
    if(({    (_condtional_value_X144=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X144;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X145=(self!=((void*)0)&&self->name!=((void*)0)));    _condtional_value_X145;    })) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(({    (_condtional_value_X146=(self!=((void*)0)&&self->klass!=((void*)0)));    _condtional_value_X146;    })) {
        come_call_finalizer(sClass_finalize, self->klass, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X147;
struct tuple2$2char$phsType$ph* result;
struct tuple2$2char$phsType$ph* __result_obj__27;
_Bool _condtional_value_X148;
struct tuple2$2char$phsType$ph* __result_obj__28;
struct tuple2$2char$phsType$ph* result_8;
struct tuple2$2char$phsType$ph* __result_obj__29;
result = (void*)0;
result_8 = (void*)0;
    if(({    (_condtional_value_X147=(self==((void*)0)));    _condtional_value_X147;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__27 = result;
        return __result_obj__27;
    }
    self->it=self->head;
    if(({    (_condtional_value_X148=(self->it));    _condtional_value_X148;    })) {
        __result_obj__28 = self->it->item;
        return __result_obj__28;
    }
    memset(&result_8,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__29 = result_8;
    return __result_obj__29;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X151;
struct tuple2$2char$phsType$ph* result;
struct tuple2$2char$phsType$ph* __result_obj__30;
_Bool _condtional_value_X152;
struct tuple2$2char$phsType$ph* __result_obj__31;
struct tuple2$2char$phsType$ph* result_9;
struct tuple2$2char$phsType$ph* __result_obj__32;
result = (void*)0;
result_9 = (void*)0;
    if(({    (_condtional_value_X151=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X151;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__30 = result;
        return __result_obj__30;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X152=(self->it));    _condtional_value_X152;    })) {
        __result_obj__31 = self->it->item;
        return __result_obj__31;
    }
    memset(&result_9,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__32 = result_9;
    return __result_obj__32;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item){
_Bool _condtional_value_X155;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X172;
_Bool _condtional_value_X173;
_Bool _condtional_value_X174;
_Bool _condtional_value_X175;
_Bool _condtional_value_X200;
_Bool _condtional_value_X201;
_Bool _condtional_value_X202;
_Bool _condtional_value_X203;
_Bool _condtional_value_X204;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X207;
_Bool _condtional_value_X208;
_Bool _condtional_value_X211;
_Bool _condtional_value_X212;
_Bool _condtional_value_X213;
struct map$2char$phbuffer$ph* __result_obj__54;
    if(({    (_condtional_value_X155=(self->len*10>=self->size));    _condtional_value_X155;    })) {
        map$2char$phbuffer$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X172=((_Bool)1));    _condtional_value_X172;    })) {
        if(({        (_condtional_value_X173=(self->item_existance[it]));        _condtional_value_X173;        })) {
            if(({            (_condtional_value_X174=(string_equals(self->keys[it],key)));            _condtional_value_X174;            })) {
                if(({                (_condtional_value_X175=(1));                _condtional_value_X175;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X200=(1));                _condtional_value_X200;                })) {
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X201=(it>=self->size));            _condtional_value_X201;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X202=(it==hash));            _condtional_value_X202;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X203=(1));            _condtional_value_X203;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X204=(1));            _condtional_value_X204;            })) {
                self->items[it]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X207=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X207;    });    ({    (_condtional_value_X208=(!list$1char$ph_end(self->key_list)));    _condtional_value_X208;    });    ({    (_condtional_value_X211=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X211;    })    ){
        if(({        (_condtional_value_X212=(string_equals(it2,key)));        _condtional_value_X212;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X213=(!same_key_exist));    _condtional_value_X213;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__54 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__54;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self){
int size;
void* __right_value62 = (void*)0;
char** keys;
void* __right_value63 = (void*)0;
struct buffer** items;
void* __right_value64 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X158;
_Bool _condtional_value_X159;
_Bool _condtional_value_X162;
struct buffer* default_value;
void* __right_value65 = (void*)0;
struct buffer* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X168;
_Bool _condtional_value_X169;
_Bool _condtional_value_X170;
_Bool _condtional_value_X171;
struct buffer* default_value_13;
void* __right_value66 = (void*)0;
default_value = (void*)0;
default_value_13 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value62=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2211, "char**"))));
    items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value63=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(size)), "/usr/local/include/comelang.h", 2212, "struct buffer**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value64=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2213, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X158=(it=map$2char$phbuffer$ph_begin(self)));    _condtional_value_X158;    });    ({    (_condtional_value_X159=(!map$2char$phbuffer$ph_end(self)));    _condtional_value_X159;    });    ({    (_condtional_value_X162=(it=map$2char$phbuffer$ph_next(self)));    _condtional_value_X162;    })    ){
        memset(&default_value,0,sizeof(struct buffer*));
        it2=((struct buffer*)(__right_value65=map$2char$phbuffer$ph_at(self,it,(struct buffer*)come_increment_ref_count(default_value))));
        come_call_finalizer(buffer_finalize, __right_value65, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X168=((_Bool)1));        _condtional_value_X168;        })) {
            if(({            (_condtional_value_X169=(item_existance[n]));            _condtional_value_X169;            })) {
                n++;
                if(({                (_condtional_value_X170=(n>=size));                _condtional_value_X170;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X171=(n==hash));                _condtional_value_X171;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct buffer*)(__right_value66=map$2char$phbuffer$ph_at(self,it,(struct buffer*)come_increment_ref_count(default_value_13))));
                come_call_finalizer(buffer_finalize, __right_value66, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len++;
                come_call_finalizer(buffer_finalize, default_value_13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(buffer_finalize, default_value_13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
_Bool _condtional_value_X156;
char* result;
char* __result_obj__33;
_Bool _condtional_value_X157;
char* __result_obj__34;
char* result_11;
char* __result_obj__35;
result = (void*)0;
result_11 = (void*)0;
    if(({    (_condtional_value_X156=(self==((void*)0)));    _condtional_value_X156;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__33 = result;
        return __result_obj__33;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X157=(self->key_list->it));    _condtional_value_X157;    })) {
        __result_obj__34 = self->key_list->it->item;
        return __result_obj__34;
    }
    memset(&result_11,0,sizeof(char*));
    __result_obj__35 = result_11;
    return __result_obj__35;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
_Bool _condtional_value_X160;
char* result;
char* __result_obj__36;
_Bool _condtional_value_X161;
char* __result_obj__37;
char* result_12;
char* __result_obj__38;
result = (void*)0;
result_12 = (void*)0;
    if(({    (_condtional_value_X160=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X160;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__36 = result;
        return __result_obj__36;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X161=(self->key_list->it));    _condtional_value_X161;    })) {
        __result_obj__37 = self->key_list->it->item;
        return __result_obj__37;
    }
    memset(&result_12,0,sizeof(char*));
    __result_obj__38 = result_12;
    return __result_obj__38;
}

static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X163;
_Bool _condtional_value_X164;
_Bool _condtional_value_X165;
struct buffer* __result_obj__39;
_Bool _condtional_value_X166;
_Bool _condtional_value_X167;
struct buffer* __result_obj__40;
struct buffer* __result_obj__41;
struct buffer* __result_obj__42;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X163=((_Bool)1));    _condtional_value_X163;    })) {
        if(({        (_condtional_value_X164=(self->item_existance[it]));        _condtional_value_X164;        })) {
            if(({            (_condtional_value_X165=(string_equals(self->keys[it],key)));            _condtional_value_X165;            })) {
                __result_obj__39 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__39;
            }
            it++;
            if(({            (_condtional_value_X166=(it>=self->size));            _condtional_value_X166;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X167=(it==hash));            _condtional_value_X167;            })) {
                __result_obj__40 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__40;
            }
        }
        else {
            __result_obj__41 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__41;
        }
    }
    __result_obj__42 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__42;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
_Bool _condtional_value_X176;
_Bool _condtional_value_X177;
struct list$1char$ph* __result_obj__46;
    it2=0;
    it=self->head;
    while(({    (_condtional_value_X176=(it!=((void*)0)));    _condtional_value_X176;    })) {
        if(({        (_condtional_value_X177=(string_equals(it->item,item)));        _condtional_value_X177;        })) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__46 = self;
    return __result_obj__46;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
_Bool _condtional_value_X178;
_Bool _condtional_value_X179;
_Bool _condtional_value_X180;
int tmp;
_Bool _condtional_value_X181;
_Bool _condtional_value_X182;
_Bool _condtional_value_X183;
struct list$1char$ph* __result_obj__43;
_Bool _condtional_value_X184;
_Bool _condtional_value_X186;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X187;
_Bool _condtional_value_X188;
struct list_item$1char$ph* prev_it;
_Bool _condtional_value_X189;
_Bool _condtional_value_X190;
struct list_item$1char$ph* it_14;
int i_15;
_Bool _condtional_value_X191;
_Bool _condtional_value_X192;
_Bool _condtional_value_X193;
struct list_item$1char$ph* prev_it_16;
struct list_item$1char$ph* it_17;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_18;
_Bool _condtional_value_X194;
_Bool _condtional_value_X195;
_Bool _condtional_value_X196;
_Bool _condtional_value_X197;
struct list_item$1char$ph* prev_it_19;
_Bool _condtional_value_X198;
_Bool _condtional_value_X199;
struct list$1char$ph* __result_obj__45;
    if(({    (_condtional_value_X178=(head<0));    _condtional_value_X178;    })) {
        head+=self->len;
    }
    if(({    (_condtional_value_X179=(tail<0));    _condtional_value_X179;    })) {
        tail+=self->len+1;
    }
    if(({    (_condtional_value_X180=(head>tail));    _condtional_value_X180;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_condtional_value_X181=(head<0));    _condtional_value_X181;    })) {
        head=0;
    }
    if(({    (_condtional_value_X182=(tail>self->len));    _condtional_value_X182;    })) {
        tail=self->len;
    }
    if(({    (_condtional_value_X183=(head==tail));    _condtional_value_X183;    })) {
        __result_obj__43 = self;
        return __result_obj__43;
    }
    if(({    (_condtional_value_X184=(head==0&&tail==self->len));    _condtional_value_X184;    })) {
        list$1char$ph_reset(self);
    }
    else if(({    (_condtional_value_X186=(head==0));    _condtional_value_X186;    })) {
        it=self->head;
        i=0;
        while(({        (_condtional_value_X187=(it!=((void*)0)));        _condtional_value_X187;        })) {
            if(({            (_condtional_value_X188=(i<tail));            _condtional_value_X188;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(({            (_condtional_value_X189=(i==tail));            _condtional_value_X189;            })) {
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
    else if(({    (_condtional_value_X190=(tail==self->len));    _condtional_value_X190;    })) {
        it_14=self->head;
        i_15=0;
        while(({        (_condtional_value_X191=(it_14!=((void*)0)));        _condtional_value_X191;        })) {
            if(({            (_condtional_value_X192=(i_15==head));            _condtional_value_X192;            })) {
                self->tail=it_14->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_condtional_value_X193=(i_15>=head));            _condtional_value_X193;            })) {
                prev_it_16=it_14;
                it_14=it_14->next;
                i_15++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_14=it_14->next;
                i_15++;
            }
        }
    }
    else {
        it_17=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_18=0;
        while(({        (_condtional_value_X194=(it_17!=((void*)0)));        _condtional_value_X194;        })) {
            if(({            (_condtional_value_X195=(i_18==head));            _condtional_value_X195;            })) {
                head_prev_it=it_17->prev;
            }
            if(({            (_condtional_value_X196=(i_18==tail));            _condtional_value_X196;            })) {
                tail_it=it_17;
            }
            if(({            (_condtional_value_X197=(i_18>=head&&i_18<tail));            _condtional_value_X197;            })) {
                prev_it_19=it_17;
                it_17=it_17->next;
                i_18++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_17=it_17->next;
                i_18++;
            }
        }
        if(({        (_condtional_value_X198=(head_prev_it!=((void*)0)));        _condtional_value_X198;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_condtional_value_X199=(tail_it!=((void*)0)));        _condtional_value_X199;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__45 = self;
    return __result_obj__45;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X185;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__44;
    it=self->head;
    while(({    (_condtional_value_X185=(it!=((void*)0)));    _condtional_value_X185;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__44 = self;
    return __result_obj__44;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
_Bool _condtional_value_X205;
char* result;
char* __result_obj__47;
_Bool _condtional_value_X206;
char* __result_obj__48;
char* result_20;
char* __result_obj__49;
result = (void*)0;
result_20 = (void*)0;
    if(({    (_condtional_value_X205=(self==((void*)0)));    _condtional_value_X205;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__47 = result;
        return __result_obj__47;
    }
    self->it=self->head;
    if(({    (_condtional_value_X206=(self->it));    _condtional_value_X206;    })) {
        __result_obj__48 = self->it->item;
        return __result_obj__48;
    }
    memset(&result_20,0,sizeof(char*));
    __result_obj__49 = result_20;
    return __result_obj__49;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
_Bool _condtional_value_X209;
char* result;
char* __result_obj__50;
_Bool _condtional_value_X210;
char* __result_obj__51;
char* result_21;
char* __result_obj__52;
result = (void*)0;
result_21 = (void*)0;
    if(({    (_condtional_value_X209=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X209;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__50 = result;
        return __result_obj__50;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X210=(self->it));    _condtional_value_X210;    })) {
        __result_obj__51 = self->it->item;
        return __result_obj__51;
    }
    memset(&result_21,0,sizeof(char*));
    __result_obj__52 = result_21;
    return __result_obj__52;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X214;
void* __right_value67 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj37;
_Bool _condtional_value_X215;
void* __right_value68 = (void*)0;
struct list_item$1char$ph* litem_22;
char* __dec_obj38;
void* __right_value69 = (void*)0;
struct list_item$1char$ph* litem_23;
char* __dec_obj39;
struct list$1char$ph* __result_obj__53;
    if(({    (_condtional_value_X214=(self->len==0));    _condtional_value_X214;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value67=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1104, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj37=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X215=(self->len==1));    _condtional_value_X215;    })) {
        litem_22=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value68=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1char$ph*"))));
        litem_22->prev=self->head;
        litem_22->next=((void*)0);
        __dec_obj38=litem_22->item,
        litem_22->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_22;
        self->head->next=litem_22;
    }
    else {
        litem_23=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value69=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1char$ph*"))));
        litem_23->prev=self->tail;
        litem_23->next=((void*)0);
        __dec_obj39=litem_23->item,
        litem_23->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_23;
        self->tail=litem_23;
    }
    self->len++;
    __result_obj__53 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__53;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
_Bool _condtional_value_X216;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X233;
_Bool _condtional_value_X234;
_Bool _condtional_value_X235;
_Bool _condtional_value_X236;
_Bool _condtional_value_X237;
_Bool _condtional_value_X238;
_Bool _condtional_value_X239;
_Bool _condtional_value_X240;
_Bool _condtional_value_X241;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X242;
_Bool _condtional_value_X243;
_Bool _condtional_value_X244;
_Bool _condtional_value_X245;
_Bool _condtional_value_X246;
struct map$2char$phsClass$ph* __result_obj__65;
    if(({    (_condtional_value_X216=(self->len*10>=self->size));    _condtional_value_X216;    })) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X233=((_Bool)1));    _condtional_value_X233;    })) {
        if(({        (_condtional_value_X234=(self->item_existance[it]));        _condtional_value_X234;        })) {
            if(({            (_condtional_value_X235=(string_equals(self->keys[it],key)));            _condtional_value_X235;            })) {
                if(({                (_condtional_value_X236=(1));                _condtional_value_X236;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X237=(1));                _condtional_value_X237;                })) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X238=(it>=self->size));            _condtional_value_X238;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X239=(it==hash));            _condtional_value_X239;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X240=(1));            _condtional_value_X240;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X241=(1));            _condtional_value_X241;            })) {
                self->items[it]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X242=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X242;    });    ({    (_condtional_value_X243=(!list$1char$ph_end(self->key_list)));    _condtional_value_X243;    });    ({    (_condtional_value_X244=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X244;    })    ){
        if(({        (_condtional_value_X245=(string_equals(it2,key)));        _condtional_value_X245;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X246=(!same_key_exist));    _condtional_value_X246;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__65 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__65;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size;
void* __right_value71 = (void*)0;
char** keys;
void* __right_value72 = (void*)0;
struct sClass** items;
void* __right_value73 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X219;
_Bool _condtional_value_X220;
_Bool _condtional_value_X223;
struct sClass* default_value;
void* __right_value74 = (void*)0;
struct sClass* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X229;
_Bool _condtional_value_X230;
_Bool _condtional_value_X231;
_Bool _condtional_value_X232;
struct sClass* default_value_26;
void* __right_value75 = (void*)0;
default_value = (void*)0;
default_value_26 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value71=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2211, "char**"))));
    items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value72=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size)), "/usr/local/include/comelang.h", 2212, "struct sClass**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value73=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2213, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X219=(it=map$2char$phsClass$ph_begin(self)));    _condtional_value_X219;    });    ({    (_condtional_value_X220=(!map$2char$phsClass$ph_end(self)));    _condtional_value_X220;    });    ({    (_condtional_value_X223=(it=map$2char$phsClass$ph_next(self)));    _condtional_value_X223;    })    ){
        memset(&default_value,0,sizeof(struct sClass*));
        it2=((struct sClass*)(__right_value74=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value))));
        come_call_finalizer(sClass_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X229=((_Bool)1));        _condtional_value_X229;        })) {
            if(({            (_condtional_value_X230=(item_existance[n]));            _condtional_value_X230;            })) {
                n++;
                if(({                (_condtional_value_X231=(n>=size));                _condtional_value_X231;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X232=(n==hash));                _condtional_value_X232;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sClass*)(__right_value75=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value_26))));
                come_call_finalizer(sClass_finalize, __right_value75, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len++;
                come_call_finalizer(sClass_finalize, default_value_26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
_Bool _condtional_value_X217;
char* result;
char* __result_obj__55;
_Bool _condtional_value_X218;
char* __result_obj__56;
char* result_24;
char* __result_obj__57;
result = (void*)0;
result_24 = (void*)0;
    if(({    (_condtional_value_X217=(self==((void*)0)));    _condtional_value_X217;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__55 = result;
        return __result_obj__55;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X218=(self->key_list->it));    _condtional_value_X218;    })) {
        __result_obj__56 = self->key_list->it->item;
        return __result_obj__56;
    }
    memset(&result_24,0,sizeof(char*));
    __result_obj__57 = result_24;
    return __result_obj__57;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
_Bool _condtional_value_X221;
char* result;
char* __result_obj__58;
_Bool _condtional_value_X222;
char* __result_obj__59;
char* result_25;
char* __result_obj__60;
result = (void*)0;
result_25 = (void*)0;
    if(({    (_condtional_value_X221=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X221;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__58 = result;
        return __result_obj__58;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X222=(self->key_list->it));    _condtional_value_X222;    })) {
        __result_obj__59 = self->key_list->it->item;
        return __result_obj__59;
    }
    memset(&result_25,0,sizeof(char*));
    __result_obj__60 = result_25;
    return __result_obj__60;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X224;
_Bool _condtional_value_X225;
_Bool _condtional_value_X226;
struct sClass* __result_obj__61;
_Bool _condtional_value_X227;
_Bool _condtional_value_X228;
struct sClass* __result_obj__62;
struct sClass* __result_obj__63;
struct sClass* __result_obj__64;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X224=((_Bool)1));    _condtional_value_X224;    })) {
        if(({        (_condtional_value_X225=(self->item_existance[it]));        _condtional_value_X225;        })) {
            if(({            (_condtional_value_X226=(string_equals(self->keys[it],key)));            _condtional_value_X226;            })) {
                __result_obj__61 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__61;
            }
            it++;
            if(({            (_condtional_value_X227=(it>=self->size));            _condtional_value_X227;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X228=(it==hash));            _condtional_value_X228;            })) {
                __result_obj__62 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__62;
            }
        }
        else {
            __result_obj__63 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__63;
        }
    }
    __result_obj__64 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__64;
}

struct tuple2$2sType$phchar$ph* parse_interface_function(struct sInfo* info){
void* __right_value77 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* result_type=0;
char* var_name=0;
_Bool err=0;
_Bool _condtional_value_X249;
void* __right_value78 = (void*)0;
char* fun_name;
void* __right_value79 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var3 = (void*)0;
struct list$1sType$ph* param_types=0;
struct list$1char$ph* param_names=0;
struct list$1char$ph* param_default_parametors=0;
_Bool var_args=0;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct sType* type;
void* __right_value100 = (void*)0;
struct list$1sType$ph* __dec_obj49;
void* __right_value105 = (void*)0;
struct list$1char$ph* __dec_obj50;
void* __right_value106 = (void*)0;
struct sType* __dec_obj51;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__77;
    multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value77=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    result_type=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    var_name=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err=multiple_assign_var2->v3;
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value77, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(({    (_condtional_value_X249=(!err));    _condtional_value_X249;    })) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    fun_name=(char*)come_increment_ref_count(parse_word(info));
    multiple_assign_var3=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value79=parse_params(info,(_Bool)0)));
    param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var3->v1);
    param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var3->v2);
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var3->v3);
    var_args=multiple_assign_var3->v4;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value79, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    list$1sType$ph_insert(param_types,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "23interface.c", 61, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info)));
    list$1char$ph_insert(param_names,0,(char*)come_increment_ref_count(__builtin_string("self")));
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "23interface.c", 64, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
    __dec_obj49=type->mParamTypes,
    type->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj50=type->mParamNames,
    type->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(param_names));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    type->mVarArgs=var_args;
    __dec_obj51=type->mResultType,
    type->mResultType=(struct sType*)come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__77 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value108=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "23interface.c", 71, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(type),(char*)come_increment_ref_count(fun_name)))));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value108, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
_Bool _condtional_value_X247;
_Bool _condtional_value_X248;
    if(({    (_condtional_value_X247=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X247;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X248=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X248;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
_Bool _condtional_value_X250;
_Bool _condtional_value_X251;
_Bool _condtional_value_X252;
    if(({    (_condtional_value_X250=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X250;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X251=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X251;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X252=(self!=((void*)0)&&self->v3!=((void*)0)));    _condtional_value_X252;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph_insert(struct list$1sType$ph* self, int position, struct sType* item){
_Bool _condtional_value_X253;
_Bool _condtional_value_X254;
_Bool _condtional_value_X255;
int len;
int i;
_Bool _condtional_value_X256;
_Bool _condtional_value_X257;
_Bool _condtional_value_X258;
struct sType* default_value;
struct list$1sType$ph* __result_obj__68;
_Bool _condtional_value_X261;
void* __right_value83 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj43;
_Bool _condtional_value_X262;
void* __right_value84 = (void*)0;
struct list_item$1sType$ph* litem_29;
struct sType* __dec_obj44;
struct list_item$1sType$ph* it;
int i_30;
_Bool _condtional_value_X263;
_Bool _condtional_value_X264;
void* __right_value85 = (void*)0;
struct list_item$1sType$ph* litem_31;
struct sType* __dec_obj45;
struct list$1sType$ph* __result_obj__69;
default_value = (void*)0;
    if(({    (_condtional_value_X253=(position<0));    _condtional_value_X253;    })) {
        position+=self->len+1;
    }
    if(({    (_condtional_value_X254=(position<0));    _condtional_value_X254;    })) {
        position=0;
    }
    if(({    (_condtional_value_X255=(self->len==0||position>=self->len));    _condtional_value_X255;    })) {
        len=self->len;
        for(        ({        (_condtional_value_X256=(i=0));        _condtional_value_X256;        });        ({        (_condtional_value_X257=(i<position-len));        _condtional_value_X257;        });        ({        (_condtional_value_X258=(i++));        _condtional_value_X258;        })        ){
            memset(&default_value,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value));
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__68 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__68;
    }
    if(({    (_condtional_value_X261=(position==0));    _condtional_value_X261;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value83=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1264, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=self->head;
        __dec_obj43=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->head->prev=litem;
        self->head=litem;
        self->len++;
    }
    else if(({    (_condtional_value_X262=(self->len==1));    _condtional_value_X262;    })) {
        litem_29=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value84=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1276, "struct list_item$1sType$ph*"))));
        litem_29->prev=self->head;
        litem_29->next=self->tail;
        __dec_obj44=litem_29->item,
        litem_29->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->prev=litem_29;
        self->head->next=litem_29;
        self->len++;
    }
    else {
        it=self->head;
        i_30=0;
        while(({        (_condtional_value_X263=(it!=((void*)0)));        _condtional_value_X263;        })) {
            if(({            (_condtional_value_X264=(position==i_30));            _condtional_value_X264;            })) {
                litem_31=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value85=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1292, "struct list_item$1sType$ph*"))));
                litem_31->prev=it->prev;
                litem_31->next=it;
                __dec_obj45=litem_31->item,
                litem_31->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                it->prev->next=litem_31;
                it->prev=litem_31;
                self->len++;
            }
            it=it->next;
            i_30++;
        }
    }
    __result_obj__69 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__69;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X259;
void* __right_value80 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj40;
_Bool _condtional_value_X260;
void* __right_value81 = (void*)0;
struct list_item$1sType$ph* litem_27;
struct sType* __dec_obj41;
void* __right_value82 = (void*)0;
struct list_item$1sType$ph* litem_28;
struct sType* __dec_obj42;
struct list$1sType$ph* __result_obj__67;
    if(({    (_condtional_value_X259=(self->len==0));    _condtional_value_X259;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value80=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1104, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj40=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X260=(self->len==1));    _condtional_value_X260;    })) {
        litem_27=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value81=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1sType$ph*"))));
        litem_27->prev=self->head;
        litem_27->next=((void*)0);
        __dec_obj41=litem_27->item,
        litem_27->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_27;
        self->head->next=litem_27;
    }
    else {
        litem_28=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value82=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1sType$ph*"))));
        litem_28->prev=self->tail;
        litem_28->next=((void*)0);
        __dec_obj42=litem_28->item,
        litem_28->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_28;
        self->tail=litem_28;
    }
    self->len++;
    __result_obj__67 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__67;
}

static struct list$1char$ph* list$1char$ph_insert(struct list$1char$ph* self, int position, char* item){
_Bool _condtional_value_X265;
_Bool _condtional_value_X266;
_Bool _condtional_value_X267;
int len;
int i;
_Bool _condtional_value_X268;
_Bool _condtional_value_X269;
_Bool _condtional_value_X270;
char* default_value;
struct list$1char$ph* __result_obj__70;
_Bool _condtional_value_X271;
void* __right_value89 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj46;
_Bool _condtional_value_X272;
void* __right_value90 = (void*)0;
struct list_item$1char$ph* litem_32;
char* __dec_obj47;
struct list_item$1char$ph* it;
int i_33;
_Bool _condtional_value_X273;
_Bool _condtional_value_X274;
void* __right_value91 = (void*)0;
struct list_item$1char$ph* litem_34;
char* __dec_obj48;
struct list$1char$ph* __result_obj__71;
default_value = (void*)0;
    if(({    (_condtional_value_X265=(position<0));    _condtional_value_X265;    })) {
        position+=self->len+1;
    }
    if(({    (_condtional_value_X266=(position<0));    _condtional_value_X266;    })) {
        position=0;
    }
    if(({    (_condtional_value_X267=(self->len==0||position>=self->len));    _condtional_value_X267;    })) {
        len=self->len;
        for(        ({        (_condtional_value_X268=(i=0));        _condtional_value_X268;        });        ({        (_condtional_value_X269=(i<position-len));        _condtional_value_X269;        });        ({        (_condtional_value_X270=(i++));        _condtional_value_X270;        })        ){
            memset(&default_value,0,sizeof(char*));
            list$1char$ph_push_back(self,(char*)come_increment_ref_count(default_value));
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(item));
        __result_obj__70 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__70;
    }
    if(({    (_condtional_value_X271=(position==0));    _condtional_value_X271;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value89=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1264, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=self->head;
        __dec_obj46=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->head->prev=litem;
        self->head=litem;
        self->len++;
    }
    else if(({    (_condtional_value_X272=(self->len==1));    _condtional_value_X272;    })) {
        litem_32=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value90=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1276, "struct list_item$1char$ph*"))));
        litem_32->prev=self->head;
        litem_32->next=self->tail;
        __dec_obj47=litem_32->item,
        litem_32->item=(char*)come_increment_ref_count(item);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->prev=litem_32;
        self->head->next=litem_32;
        self->len++;
    }
    else {
        it=self->head;
        i_33=0;
        while(({        (_condtional_value_X273=(it!=((void*)0)));        _condtional_value_X273;        })) {
            if(({            (_condtional_value_X274=(position==i_33));            _condtional_value_X274;            })) {
                litem_34=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value91=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1292, "struct list_item$1char$ph*"))));
                litem_34->prev=it->prev;
                litem_34->next=it;
                __dec_obj48=litem_34->item,
                litem_34->item=(char*)come_increment_ref_count(item);
                __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                it->prev->next=litem_34;
                it->prev=litem_34;
                self->len++;
            }
            it=it->next;
            i_33++;
        }
    }
    __result_obj__71 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__71;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
_Bool _condtional_value_X275;
struct list$1sType$ph* __result_obj__72;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _condtional_value_X276;
_Bool _condtional_value_X277;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct list$1sType$ph* __result_obj__73;
    if(({    (_condtional_value_X275=(self==((void*)0)));    _condtional_value_X275;    })) {
        __result_obj__72 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__72;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1007, "struct list$1sType$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X276=(it!=((void*)0)));    _condtional_value_X276;    })) {
        if(({        (_condtional_value_X277=(1));        _condtional_value_X277;        })) {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__73 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
_Bool _condtional_value_X278;
struct list$1char$ph* __result_obj__74;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _condtional_value_X279;
_Bool _condtional_value_X280;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct list$1char$ph* __result_obj__75;
    if(({    (_condtional_value_X278=(self==((void*)0)));    _condtional_value_X278;    })) {
        __result_obj__74 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__74;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1007, "struct list$1char$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X279=(it!=((void*)0)));    _condtional_value_X279;    })) {
        if(({        (_condtional_value_X280=(1));        _condtional_value_X280;        })) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1012, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1015, "char*")));
        }
        it=it->next;
    }
    __result_obj__75 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj52;
char* __dec_obj53;
struct tuple2$2sType$phchar$ph* __result_obj__76;
    __dec_obj52=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj53=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__76 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
_Bool _condtional_value_X281;
_Bool _condtional_value_X282;
    if(({    (_condtional_value_X281=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X281;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X282=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X282;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool _condtional_value_X283;
char* source_head;
_Bool output;
void* __right_value109 = (void*)0;
char* type_name;
struct sClass* klass;
void* __right_value110 = (void*)0;
_Bool _condtional_value_X284;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct sClass* __dec_obj54;
void* __right_value114 = (void*)0;
struct sClass* __dec_obj55;
_Bool _condtional_value_X286;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct sType* voidp;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct sType* finalizer;
void* __right_value127 = (void*)0;
struct sType* __list_values1__[1];
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct list$1sType$ph* __dec_obj61;
void* __right_value130 = (void*)0;
char* __list_values2__[1];
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1char$ph* __dec_obj62;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct sType* __dec_obj63;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct sType* cloner;
void* __right_value142 = (void*)0;
struct sType* __list_values3__[1];
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
struct list$1sType$ph* __dec_obj64;
void* __right_value145 = (void*)0;
char* __list_values4__[1];
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct list$1char$ph* __dec_obj65;
void* __right_value148 = (void*)0;
struct sType* __dec_obj66;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
_Bool _condtional_value_X295;
_Bool _condtional_value_X296;
void* __right_value152 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var4 = (void*)0;
struct sType* type2=0;
char* name=0;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
_Bool _condtional_value_X297;
char* source_tail;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct buffer* header;
void* __right_value157 = (void*)0;
char* id;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct sNode* _inf_value1;
struct sInterfaceNode* _inf_obj_value1;
void* __right_value166 = (void*)0;
struct sNode* __result_obj__84;
void* __right_value167 = (void*)0;
struct sNode* __result_obj__85;
klass = (void*)0;
    if(({    (_condtional_value_X283=(!gComeC&&(charp_operator_equals(buf,"interface")||charp_operator_equals(buf,"protocol"))));    _condtional_value_X283;    })) {
        source_head=info->p;
        output=(_Bool)1;
        type_name=(char*)come_increment_ref_count(parse_word(info));
        if(({        (_condtional_value_X284=(((struct sClass*)(__right_value110=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))))==((void*)0)));        come_call_finalizer(sClass_finalize, __right_value110, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        _condtional_value_X284;        })) {
            __dec_obj54=klass,
            klass=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "23interface.c", 85, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
            come_call_finalizer(sClass_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else {
            __dec_obj55=klass,
            klass=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name,((void*)0)));
            come_call_finalizer(sClass_finalize, __dec_obj55,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            if(({            (_condtional_value_X286=(list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)>0));            _condtional_value_X286;            })) {
                output=(_Bool)0;
            }
        }
        expected_next_character(123,info);
        voidp=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "23interface.c", 97, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        voidp->mPointerNum++;
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "23interface.c", 100, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("_protocol_obj")),(struct sType*)come_increment_ref_count(voidp))));
        finalizer=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "23interface.c", 102, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        __dec_obj61=finalizer->mParamTypes,
        finalizer->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count((__list_values1__[0]=(((struct sType*)(__right_value127=sType_clone(voidp)))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "23interface.c", 104, "struct list$1sType$ph")),1,__list_values1__)));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value127, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj62=finalizer->mParamNames,
        finalizer->mParamNames=(struct list$1char$ph*)come_increment_ref_count((__list_values2__[0]=((char*)(__right_value130=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "23interface.c", 105, "struct list$1char$ph")),1,__list_values2__)));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        finalizer->mVarArgs=(_Bool)0;
        __dec_obj63=finalizer->mResultType,
        finalizer->mResultType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "23interface.c", 107, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "23interface.c", 109, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("finalize")),(struct sType*)come_increment_ref_count(finalizer))));
        cloner=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "23interface.c", 111, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        __dec_obj64=cloner->mParamTypes,
        cloner->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count((__list_values3__[0]=(((struct sType*)(__right_value142=sType_clone(voidp)))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "23interface.c", 113, "struct list$1sType$ph")),1,__list_values3__)));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value142, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj65=cloner->mParamNames,
        cloner->mParamNames=(struct list$1char$ph*)come_increment_ref_count((__list_values4__[0]=((char*)(__right_value145=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "23interface.c", 114, "struct list$1char$ph")),1,__list_values4__)));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj65,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        cloner->mVarArgs=(_Bool)0;
        __dec_obj66=cloner->mResultType,
        cloner->mResultType=(struct sType*)come_increment_ref_count(sType_clone(voidp));
        come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "23interface.c", 118, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string("clone")),(struct sType*)come_increment_ref_count(cloner))));
        while(({        (_condtional_value_X295=((_Bool)1));        _condtional_value_X295;        })) {
            if(({            (_condtional_value_X296=(*info->p==125));            _condtional_value_X296;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            parse_sharp_v5(info);
            multiple_assign_var4=((struct tuple2$2sType$phchar$ph*)(__right_value152=parse_interface_function(info)));
            type2=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value152, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            expected_next_character(59,info);
            list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "23interface.c", 131, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name),(struct sType*)come_increment_ref_count(type2))));
            parse_sharp_v5(info);
            if(({            (_condtional_value_X297=(*info->p==125));            _condtional_value_X297;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            parse_sharp_v5(info);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        source_tail=info->p;
        header=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "23interface.c", 145, "struct buffer*"))));
        buffer_append_str(header,"interface ");
        buffer_append(header,source_head,source_tail-source_head);
        id=(char*)come_increment_ref_count(__builtin_string(type_name));
        add_come_code_at_come_struct_header(info,id,"%s\n",((char*)(__right_value158=buffer_to_string(header))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "23interface.c", 152, "struct sNode");
        _inf_obj_value1=(struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(__right_value161=sInterfaceNode_initialize((struct sInterfaceNode*)come_increment_ref_count((struct sInterfaceNode*)come_calloc_v2(1, sizeof(struct sInterfaceNode)*(1), "23interface.c", 152, "struct sInterfaceNode*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass),output,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sInterfaceNode_finalize;
        _inf_value1->clone=(void*)sInterfaceNode_clone;
        _inf_value1->compile=(void*)sInterfaceNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sInterfaceNode_kind;
        _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__84 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value166=_inf_value1)));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, voidp, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, finalizer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, cloner, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sInterfaceNode_finalize, __right_value161, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value166) ? __right_value166 = come_decrement_ref_count(__right_value166, ((struct sNode*)__right_value166)->finalize, ((struct sNode*)__right_value166)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__84) ? __result_obj__84 = come_decrement_ref_count(__result_obj__84, ((struct sNode*)__result_obj__84)->finalize, ((struct sNode*)__result_obj__84)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__84;
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, voidp, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, finalizer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, cloner, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__85 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value167=top_level_v91(buf,head,head_sline,info))));
    ((__right_value167) ? __right_value167 = come_decrement_ref_count(__right_value167, ((struct sNode*)__right_value167)->finalize, ((struct sNode*)__right_value167)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__85) ? __result_obj__85 = come_decrement_ref_count(__result_obj__85, ((struct sNode*)__result_obj__85)->finalize, ((struct sNode*)__result_obj__85)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__85;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X285;
    if(({    (_condtional_value_X285=(self==((void*)0)));    _condtional_value_X285;    })) {
        return 0;
    }
    return self->len;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
_Bool _condtional_value_X287;
void* __right_value118 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem;
struct tuple2$2char$phsType$ph* __dec_obj56;
_Bool _condtional_value_X288;
void* __right_value119 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_35;
struct tuple2$2char$phsType$ph* __dec_obj57;
void* __right_value120 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_36;
struct tuple2$2char$phsType$ph* __dec_obj58;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__78;
    if(({    (_condtional_value_X287=(self->len==0));    _condtional_value_X287;    })) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value118=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1104, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj56=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph_finalize, __dec_obj56,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X288=(self->len==1));    _condtional_value_X288;    })) {
        litem_35=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value119=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        __dec_obj57=litem_35->item,
        litem_35->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value120=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        __dec_obj58=litem_36->item,
        litem_36->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result_obj__78 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__78;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj59;
struct sType* __dec_obj60;
struct tuple2$2char$phsType$ph* __result_obj__79;
    __dec_obj59=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj60=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__79 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i;
_Bool _condtional_value_X289;
_Bool _condtional_value_X290;
_Bool _condtional_value_X291;
struct list$1sType$ph* __result_obj__80;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_condtional_value_X289=(i=0));    _condtional_value_X289;    });    ({    (_condtional_value_X290=(i<num_value));    _condtional_value_X290;    });    ({    (_condtional_value_X291=(i++));    _condtional_value_X291;    })    ){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i]));
    }
    __result_obj__80 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i;
_Bool _condtional_value_X292;
_Bool _condtional_value_X293;
_Bool _condtional_value_X294;
struct list$1char$ph* __result_obj__81;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_condtional_value_X292=(i=0));    _condtional_value_X292;    });    ({    (_condtional_value_X293=(i<num_value));    _condtional_value_X293;    });    ({    (_condtional_value_X294=(i++));    _condtional_value_X294;    })    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i]));
    }
    __result_obj__81 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self){
_Bool _condtional_value_X298;
struct sInterfaceNode* __result_obj__82;
void* __right_value162 = (void*)0;
struct sInterfaceNode* result;
_Bool _condtional_value_X299;
_Bool _condtional_value_X300;
void* __right_value163 = (void*)0;
char* __dec_obj67;
_Bool _condtional_value_X301;
_Bool _condtional_value_X302;
void* __right_value164 = (void*)0;
char* __dec_obj68;
_Bool _condtional_value_X303;
void* __right_value165 = (void*)0;
struct sClass* __dec_obj69;
_Bool _condtional_value_X304;
struct sInterfaceNode* __result_obj__83;
    if(({    (_condtional_value_X298=(self==(void*)0));    _condtional_value_X298;    })) {
        __result_obj__82 = (void*)0;
        return __result_obj__82;
    }
    result=(struct sInterfaceNode*)come_increment_ref_count((struct sInterfaceNode*)come_calloc_v2(1, sizeof(struct sInterfaceNode)*(1), "sInterfaceNode_clone", 3, "struct sInterfaceNode*"));
    if(({    (_condtional_value_X299=(self!=((void*)0)));    _condtional_value_X299;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X300=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X300;    })) {
        __dec_obj67=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInterfaceNode_clone", 5, "char*"));
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X301=(self!=((void*)0)));    _condtional_value_X301;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X302=(self!=((void*)0)&&self->name!=((void*)0)));    _condtional_value_X302;    })) {
        __dec_obj68=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sInterfaceNode_clone", 7, "char*"));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X303=(self!=((void*)0)&&self->klass!=((void*)0)));    _condtional_value_X303;    })) {
        __dec_obj69=result->klass,
        result->klass=(struct sClass*)come_increment_ref_count(sClass_clone(self->klass));
        come_call_finalizer(sClass_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(({    (_condtional_value_X304=(self!=((void*)0)));    _condtional_value_X304;    })) {
        result->mOutput=self->mOutput;
    }
    __result_obj__83 = result;
    come_call_finalizer(sInterfaceNode_finalize, result, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

