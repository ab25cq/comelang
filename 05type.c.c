/// previous struct definition ///
struct __sFILEX;

struct _xlocale;

struct re_program;

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

typedef struct re_program* re_t;

struct re_capture
{
    int start;
    int length;
};

typedef struct re_capture re_capture;

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
,GROUP
};

typedef struct regex_t regex_t;

struct anonymous_typeX12
{
    struct regex_t* first;
    int id;
};

union anonymous_typeZ11
{
unsigned char ch;
unsigned char* ccl;
struct anonymous_typeX12 group;
};

struct anonymous_typeX14
{
    struct regex_t* first;
    int id;
};

union anonymous_typeZ13
{
unsigned char ch;
unsigned char* ccl;
struct anonymous_typeX14 group;
};

struct regex_t
{
    unsigned char type;
    union anonymous_typeZ13 u;
    struct regex_t* next;
};

struct re_program
{
    struct regex_t* start;
    int group_count;
};

typedef struct re_program regex_program_t;

struct anonymous_typeX15
{
    struct regex_t* pool;
    int pool_capacity;
    int pool_size;
    unsigned char* ccl_buf;
    int ccl_capacity;
    int ccl_idx;
    int group_count;
};

typedef struct anonymous_typeX15 compiler_state;

struct anonymous_typeX16
{
    const char* base;
    struct re_capture* captures;
    int capture_capacity;
    int total_groups;
};

typedef struct anonymous_typeX16 match_context;

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
enum anonymous_typeY16 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

typedef enum anonymous_typeY16 clockid_t;

typedef unsigned int wctype_t;

typedef int* wstring;

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
    _Bool in_offsetof;
    int right_value_num;
    int right_value_max;
    _Bool in_conditional;
    int num_conditional;
    int max_conditional;
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
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
int assert_v2(int exp);
void int_times(int self, void* parent, void (*block)(void*,int));
int re_matchp(struct re_program* pattern, const char* text, int* matchlength, struct re_capture* captures, int max_captures);
int re_match(const char* pattern, const char* text, int* matchlength);
struct re_program* re_compile(const char* pattern);
void re_print(struct re_program* pattern);
void clear_captures(struct anonymous_typeX16* ctx);
void snapshot_captures(const struct anonymous_typeX16* ctx, struct re_capture* buffer_);
void restore_captures(struct anonymous_typeX16* ctx, const struct re_capture* buffer_);
struct regex_t* new_token(struct anonymous_typeX15* st);
int append_token(struct regex_t** head, struct regex_t** tail, struct regex_t* token);
struct regex_t* compile_sequence(struct anonymous_typeX15* st, const char* pattern, int* pos, int in_group);
const char* matchpattern(struct regex_t* pattern, const char* text, struct anonymous_typeX16* ctx);
const char* matchstar(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx);
const char* matchplus(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx);
const char* matchquestion(struct regex_t* token, struct regex_t* rest, const char* text, struct anonymous_typeX16* ctx);
const char* matchtoken(struct regex_t* token, const char* text, struct anonymous_typeX16* ctx);
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str);
void re_print_internal(struct regex_t* pattern, int depth);
int re_get_group_count(struct re_program* pattern);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int charp_index_regex(char* self, char* reg, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, char* reg, int default_value);
char* charp_strip(char* self);
int charp_index(char* str, char* search_str, int default_value);
char* string_chomp(char* str);
char* xrealpath(char* path);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
struct list$1char$ph* charp_split_str(char* self, char* str);
int string_rindex(char* str, char* search_str, int default_value);
int string_rindex_regex(char* self, char* reg, int default_value);
char* string_strip(char* self);
int string_index(char* str, char* search_str, int default_value);
int string_index_regex(char* self, char* reg, int default_value);
char* string_replace(char* self, int index, char c);
char* string_multiply(char* str, int n);
_Bool charp_match(char* self, char* reg);
struct list$1char$ph* charp_scan(char* self, char* reg);
struct list$1char$ph* charp_split(char* self, char* reg);
char* string_sub(char* self, char* reg, char* replace);
struct list$1char$ph* string_split_str(char* self, char* str);
struct list$1char$ph* string_scan(char* self, char* reg);
struct list$1char$ph* string_split(char* self, char* reg);
_Bool string_match(char* self, char* reg);
char* charp_sub(char* self, char* reg, char* replace);
char* charp_sub_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char* string_sub_block(char* self, char* reg, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char* asctime(const struct tm* anonymous_var_nameX407);
unsigned long  int clock();
char* ctime(const long* anonymous_var_nameX408);
double difftime(long anonymous_var_nameX409, long anonymous_var_nameX410);
struct tm* getdate(const char* anonymous_var_nameX411);
struct tm* gmtime(const long* anonymous_var_nameX412);
struct tm* localtime(const long* anonymous_var_nameX413);
long mktime(struct tm* anonymous_var_nameX414);
unsigned long  int strftime(char* anonymous_var_nameX415, unsigned long  int __maxsize, const char* anonymous_var_nameX416, const struct tm* anonymous_var_nameX417);
char* strptime(const char* anonymous_var_nameX418, const char* anonymous_var_nameX419, struct tm* anonymous_var_nameX420);
long time(long* anonymous_var_nameX421);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX422, char* anonymous_var_nameX423);
char* ctime_r(const long* anonymous_var_nameX424, char* anonymous_var_nameX425);
struct tm* gmtime_r(const long* anonymous_var_nameX426, struct tm* anonymous_var_nameX427);
struct tm* localtime_r(const long* anonymous_var_nameX428, struct tm* anonymous_var_nameX429);
long posix2time(long anonymous_var_nameX430);
void tzsetwall();
long time2posix(long anonymous_var_nameX431);
long timelocal(struct tm* anonymous_var_nameX432);
long timegm(struct tm* anonymous_var_nameX433);
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
int clock_getres(enum anonymous_typeY16 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY16 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY16 __clock_id);
int clock_settime(enum anonymous_typeY16 __clock_id, const struct timespec* __tp);
int timespec_get(struct timespec* ts, int base);
int iswalnum(int anonymous_var_nameX434);
int iswalpha(int anonymous_var_nameX435);
int iswcntrl(int anonymous_var_nameX436);
int iswctype(int anonymous_var_nameX437, unsigned int anonymous_var_nameX438);
int iswdigit(int anonymous_var_nameX439);
int iswgraph(int anonymous_var_nameX440);
int iswlower(int anonymous_var_nameX441);
int iswprint(int anonymous_var_nameX442);
int iswpunct(int anonymous_var_nameX443);
int iswspace(int anonymous_var_nameX444);
int iswupper(int anonymous_var_nameX445);
int iswxdigit(int anonymous_var_nameX446);
int towlower(int anonymous_var_nameX447);
int towupper(int anonymous_var_nameX448);
unsigned int wctype(const char* anonymous_var_nameX449);
int btowc(int anonymous_var_nameX450);
int fgetwc(struct __sFILE* anonymous_var_nameX451);
int* fgetws(int* anonymous_var_nameX452, int __n, struct __sFILE* anonymous_var_nameX453);
int fputwc(int anonymous_var_nameX454, struct __sFILE* anonymous_var_nameX455);
int fputws(const int* anonymous_var_nameX456, struct __sFILE* anonymous_var_nameX457);
int fwide(struct __sFILE* anonymous_var_nameX458, int anonymous_var_nameX459);
int fwprintf(struct __sFILE* anonymous_var_nameX460, const int* anonymous_var_nameX461, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX462, const int* anonymous_var_nameX463, ...);
int getwc(struct __sFILE* anonymous_var_nameX464);
int getwchar();
unsigned long  int mbrlen(const char* anonymous_var_nameX465, unsigned long  int __n, union anonymous_typeZ1* anonymous_var_nameX466);
unsigned long  int mbrtowc(int* anonymous_var_nameX467, const char* anonymous_var_nameX468, unsigned long  int __n, union anonymous_typeZ1* anonymous_var_nameX469);
int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX470);
unsigned long  int mbsrtowcs(int* anonymous_var_nameX471, const char** anonymous_var_nameX472, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX473);
int putwc(int anonymous_var_nameX474, struct __sFILE* anonymous_var_nameX475);
int putwchar(int anonymous_var_nameX476);
int swprintf(int* anonymous_var_nameX477, unsigned long  int __maxlen, const int* anonymous_var_nameX478, ...);
int swscanf(const int* anonymous_var_nameX479, const int* anonymous_var_nameX480, ...);
int ungetwc(int anonymous_var_nameX481, struct __sFILE* anonymous_var_nameX482);
int vfwprintf(struct __sFILE* anonymous_var_nameX483, const int* anonymous_var_nameX484, __darwin_va_list anonymous_var_nameX485);
int vswprintf(int* anonymous_var_nameX486, unsigned long  int __maxlen, const int* anonymous_var_nameX487, __darwin_va_list anonymous_var_nameX488);
int vwprintf(const int* anonymous_var_nameX489, __darwin_va_list anonymous_var_nameX490);
unsigned long  int wcrtomb(char* anonymous_var_nameX491, int anonymous_var_nameX492, union anonymous_typeZ1* anonymous_var_nameX493);
int* wcscat(int* anonymous_var_nameX494, const int* anonymous_var_nameX495);
int* wcschr(const int* anonymous_var_nameX496, int anonymous_var_nameX497);
int wcscmp(const int* anonymous_var_nameX498, const int* anonymous_var_nameX499);
int wcscoll(const int* anonymous_var_nameX500, const int* anonymous_var_nameX501);
int* wcscpy(int* anonymous_var_nameX502, const int* anonymous_var_nameX503);
unsigned long  int wcscspn(const int* anonymous_var_nameX504, const int* anonymous_var_nameX505);
unsigned long  int wcsftime(int* anonymous_var_nameX506, unsigned long  int __maxlen, const int* anonymous_var_nameX507, const struct tm* anonymous_var_nameX508);
unsigned long  int wcslen(const int* anonymous_var_nameX509);
int* wcsncat(int* anonymous_var_nameX510, const int* anonymous_var_nameX511, unsigned long  int __n);
int wcsncmp(const int* anonymous_var_nameX512, const int* anonymous_var_nameX513, unsigned long  int anonymous_var_nameX514);
int* wcsncpy(int* anonymous_var_nameX515, const int* anonymous_var_nameX516, unsigned long  int __n);
int* wcspbrk(const int* anonymous_var_nameX517, const int* anonymous_var_nameX518);
int* wcsrchr(const int* anonymous_var_nameX519, int anonymous_var_nameX520);
unsigned long  int wcsrtombs(char* anonymous_var_nameX521, const int** anonymous_var_nameX522, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX523);
unsigned long  int wcsspn(const int* anonymous_var_nameX524, const int* anonymous_var_nameX525);
int* wcsstr(const int* anonymous_var_nameX526, const int* anonymous_var_nameX527);
unsigned long  int wcsxfrm(int* anonymous_var_nameX528, const int* anonymous_var_nameX529, unsigned long  int __n);
int wctob(int anonymous_var_nameX530);
double wcstod(const int* anonymous_var_nameX531, int** anonymous_var_nameX532);
int* wcstok(int* anonymous_var_nameX533, const int* anonymous_var_nameX534, int** anonymous_var_nameX535);
long wcstol(const int* anonymous_var_nameX536, int** anonymous_var_nameX537, int anonymous_var_nameX538);
unsigned long  int wcstoul(const int* anonymous_var_nameX539, int** anonymous_var_nameX540, int anonymous_var_nameX541);
int* wmemchr(const int* anonymous_var_nameX542, int anonymous_var_nameX543, unsigned long  int __n);
int wmemcmp(const int* anonymous_var_nameX544, const int* anonymous_var_nameX545, unsigned long  int __n);
int* wmemcpy(int* anonymous_var_nameX546, const int* anonymous_var_nameX547, unsigned long  int __n);
int* wmemmove(int* anonymous_var_nameX548, const int* anonymous_var_nameX549, unsigned long  int __n);
int* wmemset(int* anonymous_var_nameX550, int anonymous_var_nameX551, unsigned long  int __n);
int wprintf(const int* anonymous_var_nameX552, ...);
int wscanf(const int* anonymous_var_nameX553, ...);
int wcswidth(const int* anonymous_var_nameX554, unsigned long  int __n);
int wcwidth(int anonymous_var_nameX555);
int vfwscanf(struct __sFILE* anonymous_var_nameX556, const int* anonymous_var_nameX557, __darwin_va_list anonymous_var_nameX558);
int vswscanf(const int* anonymous_var_nameX559, const int* anonymous_var_nameX560, __darwin_va_list anonymous_var_nameX561);
int vwscanf(const int* anonymous_var_nameX562, __darwin_va_list anonymous_var_nameX563);
float wcstof(const int* anonymous_var_nameX564, int** anonymous_var_nameX565);
long  double wcstold(const int* anonymous_var_nameX566, int** anonymous_var_nameX567);
long long wcstoll(const int* anonymous_var_nameX568, int** anonymous_var_nameX569, int anonymous_var_nameX570);
unsigned long  long wcstoull(const int* anonymous_var_nameX571, int** anonymous_var_nameX572, int anonymous_var_nameX573);
unsigned long  int mbsnrtowcs(int* anonymous_var_nameX574, const char** anonymous_var_nameX575, unsigned long  int anonymous_var_nameX576, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX577);
int* wcpcpy(int* anonymous_var_nameX578, const int* anonymous_var_nameX579);
int* wcpncpy(int* anonymous_var_nameX580, const int* anonymous_var_nameX581, unsigned long  int __n);
int* wcsdup(const int* anonymous_var_nameX582);
int wcscasecmp(const int* anonymous_var_nameX583, const int* anonymous_var_nameX584);
int wcsncasecmp(const int* anonymous_var_nameX585, const int* anonymous_var_nameX586, unsigned long  int n);
unsigned long  int wcsnlen(const int* anonymous_var_nameX587, unsigned long  int __n);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX588, const int** anonymous_var_nameX589, unsigned long  int anonymous_var_nameX590, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX591);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep);
int* fgetwln(struct __sFILE* anonymous_var_nameX592, unsigned long  int* __len);
unsigned long  int wcslcat(int* anonymous_var_nameX593, const int* anonymous_var_nameX594, unsigned long  int __len);
unsigned long  int wcslcpy(int* anonymous_var_nameX595, const int* anonymous_var_nameX596, unsigned long  int __len);
char* basename(char* anonymous_var_nameX597);
char* dirname(char* anonymous_var_nameX598);
char* basename_r(const char* anonymous_var_nameX599, char* anonymous_var_nameX600);
char* dirname_r(const char* anonymous_var_nameX601, char* anonymous_var_nameX602);
char* charp_chomp(char* str);
int* __builtin_wstring(char* str);
int wchar_tp_length(int* str);
int wstring_length(int* str);
int* wchar_tp_substring(int* str, int head, int tail);
int* charp_to_wstring(char* str);
int* wchar_tp_delete(int* str, int head, int tail);
int wchar_tp_index(int* str, int* search_str, int default_value);
int wchar_tp_rindex(int* str, int* search_str, int default_value);
int* wchar_tp_reverse(int* str);
int* wchar_tp_multiply(int* str, int n);
int* wchar_tp_printable(int* str);
unsigned long  int xwcslen(int* wstr);
int* wstring_substring(int* str, int head, int tail);
char* wchar_tp_to_string(int* wstr);
int wchar_tp_compare(int* left, int* right);
int wstring_compare(int* left, int* right);
int* wchar_tp_operator_mult(int* str, int n);
int* wstring_operator_mult(int* str, int n);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wstring_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
_Bool wstring_operator_not_equals(int* left, int* right);
int* wchar_tp_operator_add(int* left, int* right);
int* wstring_operator_add(int* left, int* right);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wstring_equals(int* left, int* right);
char* wstring_to_string(int* wstr);
int* int_to_wstring(int self);
int* wstring_delete(int* str, int head, int tail);
int wstring_index(int* str, int* search_str, int default_value);
int wstring_rindex(int* str, int* search_str, int default_value);
int* wstring_reverse(int* str);
int* wstring_multiply(int* str, int n);
int* wstring_printable(int* str);
unsigned int wstring_get_hash_key(int* value);
int* string_to_wstring(char* str);
char* xdirname(char* path);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xiswascii(int c);
_Bool wchar_t_equals(int left, int right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
char* wchar_t_to_string(int wc);
char* FILE_read(struct __sFILE* f);
int FILE_write(struct __sFILE* f, char* str);
int FILE_fclose(struct __sFILE* f);
struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct __sFILE* f);
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
_Bool node_conditional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static, _Bool cast_type, _Bool no_alignas);
char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name, _Bool no_static);
char* make_come_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool no_static);
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
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool no_static);
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
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(char* value, struct sInfo* info);
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
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
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
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
char* parse_struct_attribute(struct sInfo* info);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1char$ph_length(struct list$1char$ph* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
// uniq global variable
// inline function

// body function
_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sClass* klass;
struct sType* type;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sClass* generics_class;
_Bool generics_type_name;
_Bool mgenerics_type_name;
_Bool _conditional_value_X0;
    klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,buf)));
    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    type=((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,buf)));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    generics_class=((struct sClass*)(__right_value2=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value1=__builtin_string(buf))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sClass_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    generics_type_name=list$1char$ph_contained(info->generics_type_names,((char*)(__right_value0=__builtin_string(buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    __right_value0 = (void*)0;
    mgenerics_type_name=list$1char$ph_contained(info->method_generics_type_names,((char*)(__right_value0=__builtin_string(buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    if(({    (_conditional_value_X0=(gComeC));    _conditional_value_X0;    })) {
        return (type&&type->mTypedef)||(klass&&klass->mNumber)||(klass&&klass->mFloat)||charp_operator_equals(buf,"_Thread_local")||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"restrict")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class||generics_type_name||mgenerics_type_name||klass||type||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Thread_local")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||charp_operator_equals(buf,"restrict")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"mutable"))||charp_operator_equals(buf,"_task")||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sClass* __result_obj__1;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sClass* __result_obj__2;
struct sClass* __result_obj__3;
struct sClass* __result_obj__4;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                __result_obj__1 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__1, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__1;
            }
            it++;
            if(({            (_conditional_value_X3=(it>=self->size));            _conditional_value_X3;            })) {
                it=0;
            }
            else if(({            (_conditional_value_X4=(it==hash));            _conditional_value_X4;            })) {
                __result_obj__2 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__2, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__2;
            }
        }
        else {
            __result_obj__3 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__3, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__3;
        }
    }
    __result_obj__4 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__4, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__4;
}

static void sClass_finalize(struct sClass* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mName!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mFields!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mParentClassName!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _conditional_value_X0;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->item!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v1!=((void*)0)));    _conditional_value_X0;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v2!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sType_finalize(struct sType* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _conditional_value_X0;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->item!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _conditional_value_X0;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->item!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _conditional_value_X0;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->item!=((void*)0)));    _conditional_value_X0;    })) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sClass* __result_obj__5;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sClass* __result_obj__6;
struct sClass* __result_obj__7;
struct sClass* __result_obj__8;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                __result_obj__5 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__5, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__5;
            }
            it++;
            if(({            (_conditional_value_X3=(it>=self->size));            _conditional_value_X3;            })) {
                it=0;
            }
            else if(({            (_conditional_value_X4=(it==hash));            _conditional_value_X4;            })) {
                __result_obj__6 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__6, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__6;
            }
        }
        else {
            __result_obj__7 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__7, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__7;
        }
    }
    __result_obj__8 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__8, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__8;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value;
unsigned int hash;
unsigned int it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sType* __result_obj__9;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sType* __result_obj__10;
struct sType* __result_obj__11;
struct sType* __result_obj__12;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sType*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                __result_obj__9 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__9, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__9;
            }
            it++;
            if(({            (_conditional_value_X3=(it>=self->size));            _conditional_value_X3;            })) {
                it=0;
            }
            else if(({            (_conditional_value_X4=(it==hash));            _conditional_value_X4;            })) {
                __result_obj__10 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__10, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__10;
            }
        }
        else {
            __result_obj__11 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__11, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__11;
        }
    }
    __result_obj__12 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__12, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__12;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value;
unsigned int hash;
unsigned int it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sType* __result_obj__13;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sType* __result_obj__14;
struct sType* __result_obj__15;
struct sType* __result_obj__16;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sType*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                __result_obj__13 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__13, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__13;
            }
            it++;
            if(({            (_conditional_value_X3=(it>=self->size));            _conditional_value_X3;            })) {
                it=0;
            }
            else if(({            (_conditional_value_X4=(it==hash));            _conditional_value_X4;            })) {
                __result_obj__14 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__14, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__14;
            }
        }
        else {
            __result_obj__15 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__15, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__15;
        }
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__16, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__16;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item){
char* it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
    for(    ({    (_conditional_value_X0=(it=list$1char$ph_begin(self)));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(!list$1char$ph_end(self)));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(it=list$1char$ph_next(self)));    _conditional_value_X2;    })    ){
        if(({        (_conditional_value_X3=(string_equals(it,item)));        _conditional_value_X3;        })) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
_Bool _conditional_value_X0;
char* result;
char* __result_obj__17;
char* __result_obj__18;
char* result_0;
char* __result_obj__19;
result = (void*)0;
result_0 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__17 = result;
        return __result_obj__17;
    }
    self->it=self->head;
    if(({    (_conditional_value_X0=(self->it));    _conditional_value_X0;    })) {
        __result_obj__18 = self->it->item;
        return __result_obj__18;
    }
    memset(&result_0,0,sizeof(char*));
    __result_obj__19 = result_0;
    return __result_obj__19;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
_Bool _conditional_value_X0;
char* result;
char* __result_obj__20;
char* __result_obj__21;
char* result_1;
char* __result_obj__22;
result = (void*)0;
result_1 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)||self->it==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__20 = result;
        return __result_obj__20;
    }
    self->it=self->it->next;
    if(({    (_conditional_value_X0=(self->it));    _conditional_value_X0;    })) {
        __result_obj__21 = self->it->item;
        return __result_obj__21;
    }
    memset(&result_1,0,sizeof(char*));
    __result_obj__22 = result_1;
    return __result_obj__22;
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct sType* type2;
_Bool _conditional_value_X0;
struct sType* __dec_obj1;
void* __right_value0 = (void*)0;
struct sType* __dec_obj27;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
_Bool __result_obj__45;
_Bool __result_obj__46;
_Bool __result_obj__47;
_Bool __result_obj__48;
type2 = (void*)0;
    if(({    (_conditional_value_X0=(type->mNoSolvedGenericsType));    _conditional_value_X0;    })) {
        __dec_obj1=type2,
        type2=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj27=type2,
        type2=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    ({    (_conditional_value_X0=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(type2->mGenericsTypes),it=list$1sType$ph_begin(o2_saved)));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(!list$1sType$ph_end(o2_saved)));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(it=list$1sType$ph_next(o2_saved)));    _conditional_value_X2;    })    ){
        if(({        (_conditional_value_X3=(is_contained_generics_class(it,info)));        _conditional_value_X3;        })) {
            __result_obj__45 = (_Bool)1;
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__45;
        }
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(({    (_conditional_value_X0=(type2->mClass->mGenerics));    _conditional_value_X0;    })) {
        __result_obj__46 = (_Bool)1;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__46;
    }
    if(({    (_conditional_value_X0=(type2->mClass->mMethodGenerics));    _conditional_value_X0;    })) {
        __result_obj__47 = (_Bool)1;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__47;
    }
    __result_obj__48 = (_Bool)0;
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__48;
}

static struct sType* sType_clone(struct sType* self){
_Bool _conditional_value_X0;
struct sType* __result_obj__23;
void* __right_value0 = (void*)0;
struct sType* result;
struct sType* __dec_obj2;
struct sType* __dec_obj3;
struct list$1sType$ph* __dec_obj7;
struct sType* __dec_obj8;
struct sNode* __dec_obj9;
struct sNode* __dec_obj10;
char* __dec_obj11;
char* __dec_obj12;
char* __dec_obj13;
char* __dec_obj14;
struct list$1sNode$ph* __dec_obj18;
char* __dec_obj19;
struct list$1sType$ph* __dec_obj20;
struct list$1char$ph* __dec_obj24;
struct sType* __dec_obj25;
struct sNode* __dec_obj26;
struct sType* __result_obj__38;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__23 = (void*)0;
        return __result_obj__23;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mUnsigned=self->mUnsigned;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mShort=self->mShort;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mLong=self->mLong;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mLongLong=self->mLongLong;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mConstant=self->mConstant;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mAtomic=self->mAtomic;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mRegister=self->mRegister;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mVolatile=self->mVolatile;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mStatic=self->mStatic;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mRecord=self->mRecord;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mExtern=self->mExtern;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mRestrict=self->mRestrict;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mImmutable=self->mImmutable;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mTask=self->mTask;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mHeap=self->mHeap;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mChannel=self->mChannel;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mNoHeap=self->mNoHeap;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mException=self->mException;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mInline=self->mInline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mNullValue=self->mNullValue;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mGuardValue=self->mGuardValue;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mTypedef=self->mTypedef;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mOriginIsArray=self->mOriginIsArray;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mPointerNum=self->mPointerNum;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj19=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__38 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__38;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
_Bool _conditional_value_X0;
struct list$1sType$ph* __result_obj__24;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _conditional_value_X1;
struct list$1sType$ph* __result_obj__27;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__24 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__24, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__24;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 6364, "struct list$1sType$ph*"))));
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(1));        _conditional_value_X1;        })) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__27 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__27, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__27;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__25;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__25 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__25, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__25;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj4;
_Bool _conditional_value_X1;
struct list_item$1sType$ph* litem_2;
struct sType* __dec_obj5;
struct list_item$1sType$ph* litem_3;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__26;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 6383, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 6393, "struct list_item$1sType$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj5=litem_2->item,
        litem_2->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 6403, "struct list_item$1sType$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj6=litem_3->item,
        litem_3->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__26 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__26;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _conditional_value_X0;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
_Bool _conditional_value_X0;
struct sNode* __result_obj__28;
void* __right_value0 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__29;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__28 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__28) ? __result_obj__28 = come_decrement_ref_count(__result_obj__28, ((struct sNode*)__result_obj__28)->finalize, ((struct sNode*)__result_obj__28)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__28;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->clone!=((void*)0)));    _conditional_value_X0;    })) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->finalize=self->finalize;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->clone=self->clone;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->compile=self->compile;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sname=self->sname;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->terminated=self->terminated;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->kind=self->kind;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__29 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__29) ? __result_obj__29 = come_decrement_ref_count(__result_obj__29, ((struct sNode*)__result_obj__29)->finalize, ((struct sNode*)__result_obj__29)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__29;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
_Bool _conditional_value_X0;
struct list$1sNode$ph* __result_obj__30;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _conditional_value_X1;
struct list$1sNode$ph* __result_obj__33;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__30 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__30, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__30;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6364, "struct list$1sNode$ph*"))));
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(1));        _conditional_value_X1;        })) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__33 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__33, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__33;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__31;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__31 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__31, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__31;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj15;
_Bool _conditional_value_X1;
struct list_item$1sNode$ph* litem_4;
struct sNode* __dec_obj16;
struct list_item$1sNode$ph* litem_5;
struct sNode* __dec_obj17;
struct list$1sNode$ph* __result_obj__32;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6383, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj15=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6393, "struct list_item$1sNode$ph*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj16=litem_4->item,
        litem_4->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6403, "struct list_item$1sNode$ph*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj17=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
    __result_obj__32 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__32;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _conditional_value_X0;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
_Bool _conditional_value_X0;
struct list$1char$ph* __result_obj__34;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _conditional_value_X1;
struct list$1char$ph* __result_obj__37;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__34 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__34, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__34;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 6364, "struct list$1char$ph*"))));
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(1));        _conditional_value_X1;        })) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 6369, "char*")));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 6372, "char*")));
        }
        it=it->next;
    }
    __result_obj__37 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__37, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__37;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__35;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__35 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__35, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__35;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj21;
_Bool _conditional_value_X1;
struct list_item$1char$ph* litem_6;
char* __dec_obj22;
struct list_item$1char$ph* litem_7;
char* __dec_obj23;
struct list$1char$ph* __result_obj__36;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6383, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj21=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6393, "struct list_item$1char$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj22=litem_6->item,
        litem_6->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6403, "struct list_item$1char$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj23=litem_7->item,
        litem_7->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__36 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__36;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _conditional_value_X0;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
_Bool _conditional_value_X0;
struct sType* result;
struct sType* __result_obj__39;
struct sType* __result_obj__40;
struct sType* result_8;
struct sType* __result_obj__41;
result = (void*)0;
result_8 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__39 = result;
        return __result_obj__39;
    }
    self->it=self->head;
    if(({    (_conditional_value_X0=(self->it));    _conditional_value_X0;    })) {
        __result_obj__40 = self->it->item;
        return __result_obj__40;
    }
    memset(&result_8,0,sizeof(struct sType*));
    __result_obj__41 = result_8;
    return __result_obj__41;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
_Bool _conditional_value_X0;
struct sType* result;
struct sType* __result_obj__42;
struct sType* __result_obj__43;
struct sType* result_9;
struct sType* __result_obj__44;
result = (void*)0;
result_9 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)||self->it==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__42 = result;
        return __result_obj__42;
    }
    self->it=self->it->next;
    if(({    (_conditional_value_X0=(self->it));    _conditional_value_X0;    })) {
        __result_obj__43 = self->it->item;
        return __result_obj__43;
    }
    memset(&result_9,0,sizeof(struct sType*));
    __result_obj__44 = result_9;
    return __result_obj__44;
}

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* param_types;
struct list$1char$ph* param_names;
struct list$1char$ph* param_default_parametors;
_Bool var_args;
_Bool _conditional_value_X0;
struct sType* type_;
_Bool _conditional_value_X1;
_Bool void_param;
char* p;
int sline;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* param_type=0;
char* param_name=0;
_Bool err=0;
_Bool _conditional_value_X5;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__50;
struct sType* param_type2;
_Bool _conditional_value_X6;
char* p_14;
_Bool no_comma;
struct sNode* node;
char* p2;
_Bool _conditional_value_X7;
_Bool _conditional_value_X8;
_Bool _conditional_value_X9;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__53;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 85, "struct list$1sType$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05type.c", 86, "struct list$1char$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05type.c", 87, "struct list$1char$ph*"))));
    var_args=(_Bool)0;
    if(({    (_conditional_value_X0=(in_constructor_));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        list$1char$ph_add(param_names,(char*)come_increment_ref_count(xsprintf("self")));
        __right_value0 = (void*)0;
        type_=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        type_->mHeap=(_Bool)1;
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(type_));
        list$1char$ph_add(param_default_parametors,((void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_conditional_value_X1=(info->in_class));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        list$1char$ph_add(param_names,(char*)come_increment_ref_count(xsprintf("self")));
        __right_value0 = (void*)0;
        list$1sType$ph_add(param_types,(struct sType*)come_increment_ref_count(sType_clone(info->class_type)));
        list$1char$ph_add(param_default_parametors,((void*)0));
    }
    expected_next_character(40,info);
    void_param=(_Bool)0;
    {
        p=info->p;
        sline=info->sline;
        if(({        (_conditional_value_X0=(parsecmp("void",info)));        _conditional_value_X0;        })) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(({            (_conditional_value_X1=(*info->p==41));            _conditional_value_X1;            })) {
                void_param=(_Bool)1;
            }
        }
        info->p=p;
        info->sline=sline;
    }
    if(({    (_conditional_value_X0=(void_param));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(parsecmp("void",info)));        _conditional_value_X1;        })) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(({            (_conditional_value_X2=(*info->p==41));            _conditional_value_X2;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(({        (_conditional_value_X3=((_Bool)1));        _conditional_value_X3;        })) {
            if(({            (_conditional_value_X4=(*info->p==41));            _conditional_value_X4;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_conditional_value_X5=(!err));            _conditional_value_X5;            })) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__50 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value1=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 149, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$")),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(_Bool)0))));
                come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __result_obj__50, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__50;
            }
            __right_value0 = (void*)0;
            param_type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            __right_value0 = (void*)0;
            list$1sType$ph_push_back(param_types,(struct sType*)come_increment_ref_count(sType_clone(param_type2)));
            __right_value0 = (void*)0;
            list$1char$ph_push_back(param_names,(char*)come_increment_ref_count((char*)come_memdup(param_name, "05type.c", 155, "char*")));
            if(({            (_conditional_value_X6=(*info->p==61&&*(info->p+1)!=62));            _conditional_value_X6;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_14=info->p;
                no_comma=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                node=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma;
                p2=info->p;
                char buf[p2-p_14+1];
                memset(&buf, 0, sizeof(char)                *(p2-p_14+1)                );
                memcpy(buf,p_14,p2-p_14);
                buf[p2-p_14]=0;
                __right_value0 = (void*)0;
                list$1char$ph_push_back(param_default_parametors,(char*)come_increment_ref_count(__builtin_string(buf)));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                list$1char$ph_push_back(param_default_parametors,((void*)0));
            }
            parse_sharp_v5(info);
            if(({            (_conditional_value_X7=(*info->p==44));            _conditional_value_X7;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                if(({                (_conditional_value_X8=(parsecmp("...",info)));                _conditional_value_X8;                })) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(({            (_conditional_value_X9=(*info->p==41));            _conditional_value_X9;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__53 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value1=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 207, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$")),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),var_args))));
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __result_obj__53, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__53;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v1!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v2!=((void*)0)));    _conditional_value_X0;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4){
struct list$1sType$ph* __dec_obj28;
struct list$1char$ph* __dec_obj29;
struct list$1char$ph* __dec_obj30;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__49;
    __dec_obj28=self->v1,
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj29=self->v2,
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj30=self->v3,
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result_obj__49 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __result_obj__49, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__49;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v1!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v2!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v3!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj31;
_Bool _conditional_value_X1;
struct list_item$1sType$ph* litem_10;
struct sType* __dec_obj32;
struct list_item$1sType$ph* litem_11;
struct sType* __dec_obj33;
struct list$1sType$ph* __result_obj__51;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 6461, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj31=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 6471, "struct list_item$1sType$ph*"))));
        litem_10->prev=self->head;
        litem_10->next=((void*)0);
        __dec_obj32=litem_10->item,
        litem_10->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_10;
        self->head->next=litem_10;
    }
    else {
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 6481, "struct list_item$1sType$ph*"))));
        litem_11->prev=self->tail;
        litem_11->next=((void*)0);
        __dec_obj33=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_11;
        self->tail=litem_11;
    }
    self->len++;
    __result_obj__51 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__51;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj34;
_Bool _conditional_value_X1;
struct list_item$1char$ph* litem_12;
char* __dec_obj35;
struct list_item$1char$ph* litem_13;
char* __dec_obj36;
struct list$1char$ph* __result_obj__52;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6461, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj34=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6471, "struct list_item$1char$ph*"))));
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj35=litem_12->item,
        litem_12->item=(char*)come_increment_ref_count(item);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6481, "struct list_item$1char$ph*"))));
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj36=litem_13->item,
        litem_13->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
    __result_obj__52 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__52;
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct sType* left_type2;
struct sType* right_type2;
struct sType* left_no_solved_generics_type;
struct sType* right_no_solved_generics_type;
struct sClass* left_class;
struct sClass* right_class;
_Bool parent_class;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
_Bool __result_obj__54;
_Bool _conditional_value_X5;
_Bool _conditional_value_X6;
_Bool _conditional_value_X7;
_Bool _conditional_value_X8;
_Bool __result_obj__55;
_Bool _conditional_value_X9;
struct sClass* klass;
_Bool flag_;
_Bool _conditional_value_X10;
_Bool _conditional_value_X11;
_Bool _conditional_value_X12;
_Bool _conditional_value_X13;
_Bool _conditional_value_X14;
_Bool _conditional_value_X15;
_Bool _conditional_value_X16;
_Bool _conditional_value_X17;
_Bool _conditional_value_X18;
_Bool _conditional_value_X19;
_Bool __result_obj__56;
_Bool __result_obj__57;
_Bool __result_obj__58;
char* left_type3;
char* __dec_obj37;
struct sType* __dec_obj38;
struct sType* __dec_obj39;
_Bool __result_obj__59;
char* left_type3_15;
char* __dec_obj40;
struct sType* __dec_obj41;
struct sType* __dec_obj42;
_Bool __result_obj__60;
_Bool __result_obj__61;
_Bool __result_obj__62;
int i;
void* __right_value1 = (void*)0;
_Bool _conditional_value_X20;
_Bool _conditional_value_X21;
_Bool _conditional_value_X22;
_Bool __result_obj__67;
_Bool _conditional_value_X23;
_Bool _conditional_value_X24;
_Bool _conditional_value_X25;
_Bool __result_obj__68;
char* left_type3_16;
char* __dec_obj43;
struct sType* __dec_obj44;
struct sType* __dec_obj45;
_Bool _conditional_value_X26;
_Bool _conditional_value_X27;
_Bool _conditional_value_X28;
_Bool __result_obj__69;
char* left_type3_17;
char* __dec_obj46;
struct sType* __dec_obj47;
struct sType* __dec_obj48;
_Bool _conditional_value_X29;
_Bool __result_obj__70;
_Bool _conditional_value_X30;
char* __dec_obj49;
struct sType* __dec_obj50;
struct sType* __dec_obj51;
_Bool _conditional_value_X31;
_Bool _conditional_value_X32;
_Bool _conditional_value_X33;
_Bool __result_obj__71;
char* left_type3_18;
char* __dec_obj52;
struct sType* __dec_obj53;
struct sType* __dec_obj54;
_Bool _conditional_value_X34;
_Bool _conditional_value_X35;
_Bool _conditional_value_X36;
_Bool __result_obj__72;
char* left_type3_19;
char* __dec_obj55;
struct sType* __dec_obj56;
struct sType* __dec_obj57;
_Bool _conditional_value_X37;
_Bool _conditional_value_X38;
_Bool __result_obj__73;
_Bool _conditional_value_X39;
_Bool _conditional_value_X40;
_Bool _conditional_value_X41;
_Bool _conditional_value_X42;
_Bool _conditional_value_X43;
_Bool _conditional_value_X44;
_Bool _conditional_value_X45;
_Bool __result_obj__74;
_Bool __result_obj__75;
_Bool _conditional_value_X46;
_Bool _conditional_value_X47;
_Bool __result_obj__76;
_Bool __result_obj__77;
_Bool _conditional_value_X48;
_Bool _conditional_value_X49;
_Bool __result_obj__78;
_Bool __result_obj__79;
_Bool _conditional_value_X50;
_Bool _conditional_value_X51;
_Bool _conditional_value_X52;
_Bool __result_obj__80;
_Bool __result_obj__81;
_Bool _conditional_value_X53;
_Bool _conditional_value_X54;
_Bool _conditional_value_X55;
_Bool _conditional_value_X56;
_Bool _conditional_value_X57;
_Bool _conditional_value_X58;
_Bool __result_obj__82;
_Bool __result_obj__83;
_Bool _conditional_value_X59;
_Bool _conditional_value_X60;
_Bool _conditional_value_X61;
_Bool __result_obj__84;
_Bool __result_obj__85;
_Bool _conditional_value_X62;
_Bool _conditional_value_X63;
_Bool __result_obj__86;
_Bool __result_obj__87;
_Bool _conditional_value_X64;
_Bool _conditional_value_X65;
_Bool _conditional_value_X66;
_Bool _conditional_value_X67;
_Bool _conditional_value_X68;
_Bool _conditional_value_X69;
_Bool _conditional_value_X70;
_Bool _conditional_value_X71;
_Bool __result_obj__88;
_Bool __result_obj__89;
_Bool _conditional_value_X72;
_Bool _conditional_value_X73;
_Bool _conditional_value_X74;
_Bool __result_obj__90;
char* tmp;
char* __dec_obj58;
struct sType* __dec_obj59;
struct sType* __dec_obj60;
_Bool _conditional_value_X75;
_Bool _conditional_value_X76;
_Bool _conditional_value_X77;
_Bool _conditional_value_X78;
_Bool _conditional_value_X79;
_Bool _conditional_value_X80;
_Bool __result_obj__91;
_Bool __result_obj__92;
_Bool _conditional_value_X81;
_Bool _conditional_value_X82;
_Bool _conditional_value_X83;
_Bool _conditional_value_X84;
_Bool _conditional_value_X85;
_Bool _conditional_value_X86;
_Bool _conditional_value_X87;
_Bool _conditional_value_X88;
_Bool __result_obj__93;
_Bool __result_obj__94;
_Bool _conditional_value_X89;
char* tmp_20;
char* __dec_obj61;
struct sType* __dec_obj62;
_Bool __result_obj__95;
_Bool _conditional_value_X90;
_Bool _conditional_value_X91;
_Bool __result_obj__96;
int i_21;
_Bool _conditional_value_X92;
_Bool _conditional_value_X93;
_Bool _conditional_value_X94;
_Bool __result_obj__97;
    if(({    (_conditional_value_X0=(info->no_output_come_code));    _conditional_value_X0;    })) {
        return (_Bool)1;
    }
    left_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type));
    __right_value0 = (void*)0;
    right_type2=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type=((void*)0);
    if(({    (_conditional_value_X0=(left_type2->mNoSolvedGenericsType));    _conditional_value_X0;    })) {
        left_no_solved_generics_type=left_type2->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type=((void*)0);
    if(({    (_conditional_value_X0=(right_type2->mNoSolvedGenericsType));    _conditional_value_X0;    })) {
        right_no_solved_generics_type=right_type2->mNoSolvedGenericsType;
    }
    left_class=left_type2->mClass;
    right_class=right_type2->mClass;
    parent_class=(_Bool)0;
    if(({    (_conditional_value_X0=(string_operator_not_equals(left_class->mName,right_class->mName)));    _conditional_value_X0;    })) {
        while(({        (_conditional_value_X1=(left_class&&right_class));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_operator_equals(left_class->mName,right_class->mName)));            _conditional_value_X2;            })) {
                parent_class=(_Bool)1;
            }
            if(({            (_conditional_value_X3=(right_class->mParentClassName));            _conditional_value_X3;            })) {
                __right_value0 = (void*)0;
                right_class=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,right_class->mParentClassName)));
                come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            else {
                right_class=((void*)0);
            }
        }
    }
    if(({    (_conditional_value_X0=(pointer_massive));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(left_type2->mPointerNum>0&&right_type->mPointerNum==0));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_operator_equals(left_type2->mClass->mName,"lambda")));            _conditional_value_X2;            })) {
            }
            else if(({            (_conditional_value_X3=(list$1sNode$ph_length(right_type->mArrayNum)>0));            _conditional_value_X3;            })) {
            }
            else if(({            (_conditional_value_X4=(print_err_msg));            _conditional_value_X4;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__54 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__54;
            }
        }
        else if(({        (_conditional_value_X5=(left_type2->mPointerNum==0&&right_type->mPointerNum>0));        _conditional_value_X5;        })) {
            if(({            (_conditional_value_X6=(list$1sNode$ph_length(left_type2->mArrayNum)>0));            _conditional_value_X6;            })) {
            }
            else if(({            (_conditional_value_X7=(string_operator_equals(left_type2->mClass->mName,"lambda")||string_operator_equals(right_type->mClass->mName,"void")));            _conditional_value_X7;            })) {
            }
            else if(({            (_conditional_value_X8=(print_err_msg));            _conditional_value_X8;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__55 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__55;
            }
        }
        else if(({        (_conditional_value_X9=(left_type2->mPointerNum>0&&right_type->mPointerNum>0));        _conditional_value_X9;        })) {
            klass=right_type->mClass;
            flag_=(_Bool)0;
            while(({            (_conditional_value_X10=(klass));            _conditional_value_X10;            })) {
                if(({                (_conditional_value_X11=(string_operator_equals(klass->mName,left_type2->mClass->mName)));                _conditional_value_X11;                })) {
                    flag_=(_Bool)1;
                }
                if(({                (_conditional_value_X12=(klass->mParentClassName));                _conditional_value_X12;                })) {
                    __right_value0 = (void*)0;
                    klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mParentClassName)));
                    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                else {
                    klass=((void*)0);
                }
            }
            if(({            (_conditional_value_X13=(string_operator_equals(left_type2->mClass->mName,"void")));            _conditional_value_X13;            })) {
            }
            else if(({            (_conditional_value_X14=(string_operator_equals(left_type2->mClass->mName,"lambda")));            _conditional_value_X14;            })) {
            }
            else if(({            (_conditional_value_X15=(left_no_solved_generics_type&&right_no_solved_generics_type&&(list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes)>0||list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes)>0)));            _conditional_value_X15;            })) {
            }
            else if(({            (_conditional_value_X16=(strlen(left_type2->mClass->mName)>=strlen("tuple")&&memcmp(left_type2->mClass->mName,"tuple",strlen("tuple"))==0&&(strlen(right_type->mClass->mName)>=strlen("tuple"))));            _conditional_value_X16;            })) {
            }
            else if(({            (_conditional_value_X17=(string_operator_equals(right_type->mClass->mName,"void")));            _conditional_value_X17;            })) {
            }
            else if(({            (_conditional_value_X18=(string_operator_not_equals(left_type2->mClass->mName,right_type->mClass->mName)&&!flag_));            _conditional_value_X18;            })) {
                if(({                (_conditional_value_X19=(print_err_msg));                _conditional_value_X19;                })) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                    info->err_num++;
                    __result_obj__56 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__56;
                }
            }
        }
    }
    if(({    (_conditional_value_X0=(left_no_solved_generics_type&&right_no_solved_generics_type));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(strlen(left_type2->mClass->mName)>=strlen("tuple")&&memcmp(left_type2->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(print_err_msg));            _conditional_value_X2;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is tuple, right type is none tuple\n");
                info->err_num++;
                __result_obj__57 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__57;
            }
        }
        else if(({        (_conditional_value_X3=(right_type->mPointerNum==0&&left_type2->mPointerNum>0));        _conditional_value_X3;        })) {
        }
        else if(({        (_conditional_value_X4=(right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2->mClass->mNumber&&left_type2->mPointerNum==0));        _conditional_value_X4;        })) {
            if(({            (_conditional_value_X5=(pointer_massive));            _conditional_value_X5;            })) {
                if(({                (_conditional_value_X6=(print_err_msg));                _conditional_value_X6;                })) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes),left_no_solved_generics_type->mClass->mName,left_type2->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes),right_no_solved_generics_type->mClass->mName,right_type2->mClass->mName);
                    info->err_num++;
                    __result_obj__58 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__58;
                }
            }
            else {
                __right_value0 = (void*)0;
                left_type3=(char*)come_increment_ref_count(make_type_name_string(left_type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
                __right_value0 = (void*)0;
                __dec_obj37=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3,come_value->c_value));
                __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0);
                __right_value0 = (void*)0;
                __dec_obj38=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
                come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __right_value0 = (void*)0;
                __dec_obj39=right_type2,
                right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
                come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                (left_type3 = come_decrement_ref_count(left_type3, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else if(({        (_conditional_value_X7=(right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2->mClass->mFloat&&left_type2->mPointerNum==0));        _conditional_value_X7;        })) {
            if(({            (_conditional_value_X8=(pointer_massive));            _conditional_value_X8;            })) {
                if(({                (_conditional_value_X9=(print_err_msg));                _conditional_value_X9;                })) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes),left_no_solved_generics_type->mClass->mName,left_type2->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes),right_no_solved_generics_type->mClass->mName,right_type2->mClass->mName);
                    info->err_num++;
                    __result_obj__59 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__59;
                }
            }
            else {
                __right_value0 = (void*)0;
                left_type3_15=(char*)come_increment_ref_count(make_type_name_string(left_type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
                __right_value0 = (void*)0;
                __dec_obj40=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_15,come_value->c_value));
                __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
                __right_value0 = (void*)0;
                __dec_obj41=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
                come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __right_value0 = (void*)0;
                __dec_obj42=right_type2,
                right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
                come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                (left_type3_15 = come_decrement_ref_count(left_type3_15, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else if(({        (_conditional_value_X10=(string_operator_equals(left_type2->mClass->mName,right_type2->mClass->mName)&&left_type2->mPointerNum==right_type2->mPointerNum));        _conditional_value_X10;        })) {
        }
        else if(({        (_conditional_value_X11=(string_operator_equals(left_type2->mClass->mName,"void")&&left_type2->mPointerNum>0&&string_operator_equals(left_type2->mClass->mName,right_type2->mClass->mName)&&(left_type2->mPointerNum!=right_type2->mPointerNum||left_type2->mHeap!=right_type2->mHeap)));        _conditional_value_X11;        })) {
        }
        else if(({        (_conditional_value_X12=(string_operator_equals(left_type2->mClass->mName,right_type2->mClass->mName)&&(left_type2->mPointerNum!=right_type2->mPointerNum||left_type2->mHeap!=right_type2->mHeap)));        _conditional_value_X12;        })) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type class_name %s\n",left_type2->mClass->mName);
            printf("right type class_name %s\n",right_type2->mClass->mName);
            printf("left type pointernum %d\n",left_type2->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type2->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes),left_no_solved_generics_type->mClass->mName,left_type2->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes),right_no_solved_generics_type->mClass->mName,right_type2->mClass->mName);
            info->err_num++;
            __result_obj__60 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__60;
        }
        else if(({        (_conditional_value_X13=(list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes)>0));        _conditional_value_X13;        })) {
            if(({            (_conditional_value_X14=((string_operator_equals(left_no_solved_generics_type->mClass->mName,"void")&&left_no_solved_generics_type->mPointerNum>0&&right_no_solved_generics_type->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type->mClass->mName,"void")&&right_no_solved_generics_type->mPointerNum>0&&left_no_solved_generics_type->mPointerNum>0)));            _conditional_value_X14;            })) {
            }
            else {
                if(({                (_conditional_value_X15=(list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes)!=list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes)));                _conditional_value_X15;                })) {
                    if(({                    (_conditional_value_X16=(print_err_msg));                    _conditional_value_X16;                    })) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes),left_no_solved_generics_type->mClass->mName,left_type2->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes),right_no_solved_generics_type->mClass->mName,right_type2->mClass->mName);
                        info->err_num++;
                        __result_obj__61 = (_Bool)0;
                        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__61;
                    }
                    __result_obj__62 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__62;
                }
                for(                ({                (_conditional_value_X17=(i=0));                _conditional_value_X17;                });                ({                (_conditional_value_X18=(i<list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes)));                _conditional_value_X18;                });                ({                (_conditional_value_X19=(i++));                _conditional_value_X19;                })                ){
                    __right_value0 = (void*)0;
                    check_assign_type(msg,((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(left_no_solved_generics_type->mGenericsTypes,i))),((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(right_no_solved_generics_type->mGenericsTypes,i))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                check_assign_type(msg,left_no_solved_generics_type,right_no_solved_generics_type,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
            }
        }
    }
    else if(({    (_conditional_value_X20=(left_type2->mPointerNum>0&&right_type->mPointerNum==0));    _conditional_value_X20;    })) {
    }
    else if(({    (_conditional_value_X21=(strlen(left_type2->mClass->mName)>=strlen("tuple")&&memcmp(left_type2->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)));    _conditional_value_X21;    })) {
        if(({        (_conditional_value_X22=(print_err_msg));        _conditional_value_X22;        })) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is tuple, right type is none tuple\n");
            info->err_num++;
            __result_obj__67 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__67;
        }
    }
    else if(({    (_conditional_value_X23=(right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2->mClass->mNumber&&left_type2->mPointerNum==0));    _conditional_value_X23;    })) {
        if(({        (_conditional_value_X24=(pointer_massive));        _conditional_value_X24;        })) {
            if(({            (_conditional_value_X25=(print_err_msg));            _conditional_value_X25;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes),left_no_solved_generics_type->mClass->mName,left_type2->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes),right_no_solved_generics_type->mClass->mName,right_type2->mClass->mName);
                info->err_num++;
                __result_obj__68 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__68;
            }
        }
        else {
            __right_value0 = (void*)0;
            left_type3_16=(char*)come_increment_ref_count(make_type_name_string(left_type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
            __right_value0 = (void*)0;
            __dec_obj43=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_16,come_value->c_value));
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj44=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __right_value0 = (void*)0;
            __dec_obj45=right_type2,
            right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (left_type3_16 = come_decrement_ref_count(left_type3_16, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else if(({    (_conditional_value_X26=(right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2->mClass->mFloat&&left_type2->mPointerNum==0));    _conditional_value_X26;    })) {
        if(({        (_conditional_value_X27=(pointer_massive));        _conditional_value_X27;        })) {
            if(({            (_conditional_value_X28=(print_err_msg));            _conditional_value_X28;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type->mGenericsTypes),left_no_solved_generics_type->mClass->mName,left_type2->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type->mGenericsTypes),right_no_solved_generics_type->mClass->mName,right_type2->mClass->mName);
                info->err_num++;
                __result_obj__69 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__69;
            }
        }
        else {
            __right_value0 = (void*)0;
            left_type3_17=(char*)come_increment_ref_count(make_type_name_string(left_type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
            __right_value0 = (void*)0;
            __dec_obj46=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_17,come_value->c_value));
            __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj47=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __right_value0 = (void*)0;
            __dec_obj48=right_type2,
            right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (left_type3_17 = come_decrement_ref_count(left_type3_17, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else if(({    (_conditional_value_X29=(left_type2->mHeap&&!right_type2->mHeap&&left_type2->mPointerNum>0&&right_type2->mPointerNum>0&&string_operator_not_equals(right_type2->mClass->mName,"void")&&!info->in_generics_fun&&!left_type2->mMultipleTypes&&!right_type->mMultipleTypes));    _conditional_value_X29;    })) {
        printf("%s %d %s\n",info->sname,info->sline,msg);
        printf("left type is %s pointer num %d heap %d\n",left_type2->mClass->mName,left_type2->mPointerNum,left_type2->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2->mClass->mName,right_type2->mPointerNum,right_type2->mHeap);
        info->err_num++;
        __result_obj__70 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__70;
    }
    else if(({    (_conditional_value_X30=(parent_class&&left_type2->mPointerNum==1&&right_type->mPointerNum==1));    _conditional_value_X30;    })) {
        __right_value0 = (void*)0;
        __dec_obj49=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type2->mClass->mName,come_value->c_value));
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj50=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __right_value0 = (void*)0;
        __dec_obj51=right_type2,
        right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_conditional_value_X31=(right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2->mClass->mNumber&&left_type2->mPointerNum==0));    _conditional_value_X31;    })) {
        if(({        (_conditional_value_X32=(pointer_massive));        _conditional_value_X32;        })) {
            if(({            (_conditional_value_X33=(print_err_msg));            _conditional_value_X33;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__71 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__71;
            }
        }
        else {
            __right_value0 = (void*)0;
            left_type3_18=(char*)come_increment_ref_count(make_type_name_string(left_type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
            __right_value0 = (void*)0;
            __dec_obj52=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_18,come_value->c_value));
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj53=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __right_value0 = (void*)0;
            __dec_obj54=right_type2,
            right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (left_type3_18 = come_decrement_ref_count(left_type3_18, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else if(({    (_conditional_value_X34=(right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2->mClass->mFloat&&left_type2->mPointerNum==0));    _conditional_value_X34;    })) {
        if(({        (_conditional_value_X35=(pointer_massive));        _conditional_value_X35;        })) {
            if(({            (_conditional_value_X36=(print_err_msg));            _conditional_value_X36;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__72 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__72;
            }
        }
        else {
            __right_value0 = (void*)0;
            left_type3_19=(char*)come_increment_ref_count(make_type_name_string(left_type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
            __right_value0 = (void*)0;
            __dec_obj55=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_19,come_value->c_value));
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj56=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __right_value0 = (void*)0;
            __dec_obj57=right_type2,
            right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (left_type3_19 = come_decrement_ref_count(left_type3_19, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else if(({    (_conditional_value_X37=(string_operator_equals(left_type2->mClass->mName,right_type2->mClass->mName)&&left_type2->mPointerNum>0&&right_type2->mPointerNum>0&&!right_type2->mAllocaValue));    _conditional_value_X37;    })) {
        if(({        (_conditional_value_X38=(left_type2->mHeap&&!right_type2->mHeap));        _conditional_value_X38;        })) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is %s pointer num %d heap %d\n",left_type2->mClass->mName,left_type2->mPointerNum,left_type2->mHeap);
            printf("right type is %s pointer num %d heap %d\n",right_type2->mClass->mName,right_type2->mPointerNum,right_type2->mHeap);
            info->err_num++;
            __result_obj__73 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__73;
        }
    }
    else if(({    (_conditional_value_X39=(check_no_pointer));    _conditional_value_X39;    })) {
        if(({        (_conditional_value_X40=(left_type2->mPointerNum>0));        _conditional_value_X40;        })) {
            if(({            (_conditional_value_X41=(right_type2->mPointerNum>0));            _conditional_value_X41;            })) {
                if(({                (_conditional_value_X42=(string_operator_equals(left_type2->mClass->mName,"void")||string_operator_equals(right_type2->mClass->mName,"void")));                _conditional_value_X42;                })) {
                }
                else if(({                (_conditional_value_X43=(string_operator_equals(left_type2->mClass->mName,"va_list")||string_operator_equals(right_type2->mClass->mName,"va_list")));                _conditional_value_X43;                })) {
                }
                else if(({                (_conditional_value_X44=(string_operator_not_equals(left_type2->mClass->mName,right_type2->mClass->mName)));                _conditional_value_X44;                })) {
                    if(({                    (_conditional_value_X45=(print_err_msg));                    _conditional_value_X45;                    })) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                        info->err_num++;
                        __result_obj__74 = (_Bool)0;
                        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__74;
                    }
                    __result_obj__75 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__75;
                }
            }
            else if(({            (_conditional_value_X46=(right_type->mPointerNum==0));            _conditional_value_X46;            })) {
            }
            else {
                if(({                (_conditional_value_X47=(print_err_msg));                _conditional_value_X47;                })) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                    info->err_num++;
                    __result_obj__76 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__76;
                }
                __result_obj__77 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__77;
            }
        }
        else if(({        (_conditional_value_X48=(left_type2->mPointerNum==0&&right_type2->mPointerNum>0));        _conditional_value_X48;        })) {
            if(({            (_conditional_value_X49=(print_err_msg));            _conditional_value_X49;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__78 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__78;
            }
            __result_obj__79 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__79;
        }
        else if(({        (_conditional_value_X50=(left_type2->mPointerNum>0&&right_type2->mPointerNum==0&&string_operator_equals(right_type2->mClass->mName,"lambda")&&string_operator_equals(left_type2->mClass->mName,"lambda")));        _conditional_value_X50;        })) {
        }
        else if(({        (_conditional_value_X51=(string_operator_not_equals(left_type2->mClass->mName,right_type2->mClass->mName)));        _conditional_value_X51;        })) {
            if(({            (_conditional_value_X52=(print_err_msg));            _conditional_value_X52;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__80 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__80;
            }
            __result_obj__81 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__81;
        }
    }
    else if(({    (_conditional_value_X53=(string_operator_equals(left_type2->mClass->mName,"char")&&left_type2->mPointerNum==1));    _conditional_value_X53;    })) {
        if(({        (_conditional_value_X54=(string_operator_equals(right_type2->mClass->mName,"char")&&right_type2->mPointerNum==1));        _conditional_value_X54;        })) {
        }
        else if(({        (_conditional_value_X55=(string_operator_equals(left_type2->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2->mClass->mName,"__builtin_va_list")));        _conditional_value_X55;        })) {
        }
        else if(({        (_conditional_value_X56=(string_operator_equals(left_type2->mClass->mName,"va_list")||string_operator_equals(right_type2->mClass->mName,"va_list")));        _conditional_value_X56;        })) {
        }
        else if(({        (_conditional_value_X57=(string_operator_equals(right_type2->mClass->mName,"lambda")));        _conditional_value_X57;        })) {
            if(({            (_conditional_value_X58=(print_err_msg));            _conditional_value_X58;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__82 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__82;
            }
            __result_obj__83 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__83;
        }
        else if(({        (_conditional_value_X59=(string_operator_equals(right_type2->mClass->mName,"void")&&right_type2->mPointerNum>0));        _conditional_value_X59;        })) {
        }
        else if(({        (_conditional_value_X60=(string_operator_equals(right_type2->mClass->mName,"void")));        _conditional_value_X60;        })) {
            if(({            (_conditional_value_X61=(print_err_msg));            _conditional_value_X61;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__84 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__84;
            }
            __result_obj__85 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__85;
        }
        else if(({        (_conditional_value_X62=(string_operator_not_equals(left_type2->mClass->mName,right_type2->mClass->mName)&&!(left_type2->mPointerNum>0&&right_type2->mPointerNum==0)));        _conditional_value_X62;        })) {
            if(({            (_conditional_value_X63=(print_err_msg));            _conditional_value_X63;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__86 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__86;
            }
            __result_obj__87 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__87;
        }
    }
    else if(({    (_conditional_value_X64=(string_operator_equals(left_type2->mClass->mName,"void")&&left_type2->mPointerNum==1));    _conditional_value_X64;    })) {
        if(({        (_conditional_value_X65=(string_operator_equals(right_type2->mClass->mName,"void")&&right_type2->mPointerNum==1));        _conditional_value_X65;        })) {
        }
        else if(({        (_conditional_value_X66=(string_operator_equals(left_type2->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2->mClass->mName,"__builtin_va_list")));        _conditional_value_X66;        })) {
        }
        else if(({        (_conditional_value_X67=(string_operator_equals(left_type2->mClass->mName,"va_list")||string_operator_equals(right_type2->mClass->mName,"va_list")));        _conditional_value_X67;        })) {
        }
        else if(({        (_conditional_value_X68=(string_operator_equals(right_type2->mClass->mName,"lambda")));        _conditional_value_X68;        })) {
        }
        else if(({        (_conditional_value_X69=(string_operator_equals(right_type2->mClass->mName,"void")&&right_type2->mPointerNum>0));        _conditional_value_X69;        })) {
        }
        else if(({        (_conditional_value_X70=(string_operator_equals(right_type2->mClass->mName,"void")));        _conditional_value_X70;        })) {
            if(({            (_conditional_value_X71=(print_err_msg));            _conditional_value_X71;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__88 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__88;
            }
            __result_obj__89 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__89;
        }
        else if(({        (_conditional_value_X72=(right_type2->mPointerNum==0));        _conditional_value_X72;        })) {
            if(({            (_conditional_value_X73=(pointer_massive));            _conditional_value_X73;            })) {
                if(({                (_conditional_value_X74=(print_err_msg));                _conditional_value_X74;                })) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                    info->err_num++;
                    __result_obj__90 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__90;
                }
            }
            else {
                __right_value0 = (void*)0;
                tmp=(char*)come_increment_ref_count(xsprintf("(void*)%s",come_value->c_value));
                __right_value0 = (void*)0;
                __dec_obj58=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp, "05type.c", 690, "char*"));
                __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
                __right_value0 = (void*)0;
                __dec_obj59=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
                come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __right_value0 = (void*)0;
                __dec_obj60=right_type2,
                right_type2=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
                come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                (tmp = come_decrement_ref_count(tmp, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    else if(({    (_conditional_value_X75=(left_type2->mPointerNum>0||(left_type2->mPointerNum==0&&left_type2->mClass->mStruct)));    _conditional_value_X75;    })) {
        if(({        (_conditional_value_X76=(right_type2->mPointerNum>0||(right_type2->mPointerNum==0&&right_type2->mClass->mStruct)));        _conditional_value_X76;        })) {
            if(({            (_conditional_value_X77=(string_operator_equals(left_type2->mClass->mName,"void")||string_operator_equals(right_type2->mClass->mName,"void")));            _conditional_value_X77;            })) {
            }
            else if(({            (_conditional_value_X78=(string_operator_equals(left_type2->mClass->mName,"va_list")||string_operator_equals(right_type2->mClass->mName,"va_list")));            _conditional_value_X78;            })) {
            }
            else if(({            (_conditional_value_X79=(string_operator_not_equals(left_type2->mClass->mName,right_type2->mClass->mName)));            _conditional_value_X79;            })) {
                if(({                (_conditional_value_X80=(print_err_msg));                _conditional_value_X80;                })) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                    info->err_num++;
                    __result_obj__91 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__91;
                }
                __result_obj__92 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__92;
            }
            else if(({            (_conditional_value_X81=(int_operator_not_equals(left_type2->mPointerNum,right_type2->mPointerNum)));            _conditional_value_X81;            })) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
            }
            else if(({            (_conditional_value_X82=(list$1sNode$ph_length(right_type2->mArrayNum)>0));            _conditional_value_X82;            })) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type2->mClass->mName,left_type2->mPointerNum,list$1sNode$ph_length(left_type2->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2->mClass->mName,right_type2->mPointerNum,list$1sNode$ph_length(right_type2->mArrayNum));
            }
        }
        else if(({        (_conditional_value_X83=(string_operator_equals(left_type2->mClass->mName,"void")||string_operator_equals(right_type2->mClass->mName,"void")));        _conditional_value_X83;        })) {
        }
        else if(({        (_conditional_value_X84=(string_operator_equals(left_type2->mClass->mName,"va_list")||string_operator_equals(right_type2->mClass->mName,"va_list")));        _conditional_value_X84;        })) {
        }
        else if(({        (_conditional_value_X85=(string_operator_equals(left_type2->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2->mClass->mName,"__builtin_va_list")));        _conditional_value_X85;        })) {
        }
        else if(({        (_conditional_value_X86=(string_operator_equals(left_type2->mClass->mName,"lambda")&&string_operator_equals(right_type2->mClass->mName,"lambda")));        _conditional_value_X86;        })) {
        }
        else if(({        (_conditional_value_X87=(left_type2->mPointerNum>0&&right_type2->mPointerNum==0&&string_operator_equals(right_type2->mClass->mName,"lambda")&&string_operator_equals(left_type2->mClass->mName,"lambda")));        _conditional_value_X87;        })) {
            if(({            (_conditional_value_X88=(print_err_msg));            _conditional_value_X88;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__93 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__93;
            }
            __result_obj__94 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__94;
        }
        else if(({        (_conditional_value_X89=(left_type2->mPointerNum>0&&!(string_operator_equals(right_type2->mClass->mName,"lambda")&&string_operator_equals(left_type2->mClass->mName,"lambda"))&&right_type2->mPointerNum==0));        _conditional_value_X89;        })) {
            __right_value0 = (void*)0;
            tmp_20=(char*)come_increment_ref_count(xsprintf("(void*)%s",come_value->c_value));
            __right_value0 = (void*)0;
            __dec_obj61=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp_20, "05type.c", 746, "char*"));
            __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj62=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2));
            come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result_obj__95 = (_Bool)1;
            (tmp_20 = come_decrement_ref_count(tmp_20, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__95;
            (tmp_20 = come_decrement_ref_count(tmp_20, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(({        (_conditional_value_X90=(list$1sType$ph_length(left_type2->mGenericsTypes)>0));        _conditional_value_X90;        })) {
            if(({            (_conditional_value_X91=(list$1sType$ph_length(left_type2->mGenericsTypes)!=list$1sType$ph_length(right_type2->mGenericsTypes)));            _conditional_value_X91;            })) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2->mClass->mName,left_type2->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2->mClass->mName,right_type2->mPointerNum);
                info->err_num++;
                __result_obj__96 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__96;
            }
            for(            ({            (_conditional_value_X92=(i_21=0));            _conditional_value_X92;            });            ({            (_conditional_value_X93=(i_21<list$1sType$ph_length(left_type2->mGenericsTypes)));            _conditional_value_X93;            });            ({            (_conditional_value_X94=(i_21++));            _conditional_value_X94;            })            ){
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                check_assign_type(msg,((struct sType*)(__right_value0=list$1sType$ph_operator_load_element(left_type2->mGenericsTypes,i_21))),((struct sType*)(__right_value1=list$1sType$ph_operator_load_element(right_type2->mGenericsTypes,i_21))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
        }
    }
    __result_obj__97 = (_Bool)1;
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__97;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        return 0;
    }
    return self->len;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _conditional_value_X0;
struct list_item$1sType$ph* it;
int i;
_Bool _conditional_value_X1;
struct sType* __result_obj__63;
struct sType* default_value;
struct sType* __result_obj__64;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(position<0));    _conditional_value_X0;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(position==i));        _conditional_value_X1;        })) {
            __result_obj__63 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__63, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__63;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__64 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__64, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__64;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _conditional_value_X0;
struct list_item$1sType$ph* it;
int i;
_Bool _conditional_value_X1;
struct sType* __result_obj__65;
struct sType* default_value;
struct sType* __result_obj__66;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(position<0));    _conditional_value_X0;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(position==i));        _conditional_value_X1;        })) {
            __result_obj__65 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__65, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__65;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__66 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__66, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__66;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* asm_fun_name;
char* attribute;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
_Bool _conditional_value_X5;
int nest;
_Bool _conditional_value_X6;
_Bool _conditional_value_X7;
_Bool _conditional_value_X8;
_Bool _conditional_value_X9;
_Bool _conditional_value_X10;
_Bool _conditional_value_X11;
_Bool _conditional_value_X12;
int nest_22;
_Bool _conditional_value_X13;
_Bool _conditional_value_X14;
_Bool _conditional_value_X15;
_Bool _conditional_value_X16;
_Bool _conditional_value_X17;
_Bool _conditional_value_X18;
_Bool _conditional_value_X19;
int nest_23;
_Bool _conditional_value_X20;
_Bool _conditional_value_X21;
_Bool _conditional_value_X22;
_Bool _conditional_value_X23;
_Bool _conditional_value_X24;
_Bool _conditional_value_X25;
_Bool _conditional_value_X26;
int nest_24;
_Bool _conditional_value_X27;
_Bool _conditional_value_X28;
_Bool _conditional_value_X29;
_Bool _conditional_value_X30;
_Bool _conditional_value_X31;
_Bool _conditional_value_X32;
_Bool _conditional_value_X33;
int nest_25;
_Bool _conditional_value_X34;
_Bool _conditional_value_X35;
_Bool _conditional_value_X36;
_Bool _conditional_value_X37;
_Bool _conditional_value_X38;
_Bool _conditional_value_X39;
_Bool _conditional_value_X40;
_Bool _conditional_value_X41;
_Bool _conditional_value_X42;
_Bool _conditional_value_X43;
_Bool _conditional_value_X44;
_Bool _conditional_value_X45;
char* __dec_obj63;
_Bool _conditional_value_X46;
_Bool _conditional_value_X47;
int len;
_Bool _conditional_value_X48;
_Bool in_dquort;
int brace_num;
_Bool _conditional_value_X49;
_Bool _conditional_value_X50;
_Bool _conditional_value_X51;
_Bool _conditional_value_X52;
_Bool _conditional_value_X53;
_Bool _conditional_value_X54;
_Bool _conditional_value_X55;
_Bool _conditional_value_X56;
int brace_num_26;
_Bool _conditional_value_X57;
_Bool _conditional_value_X58;
_Bool _conditional_value_X59;
_Bool _conditional_value_X60;
void* __right_value2 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__99;
    asm_fun_name=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05type.c", 775, "struct buffer*"))));
    __right_value0 = (void*)0;
    attribute=(char*)come_increment_ref_count(xsprintf(""));
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(parsecmp("__attribute_pure__",info)));        _conditional_value_X1;        })) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(({        (_conditional_value_X2=(parsecmp("__malloc_like",info)));        _conditional_value_X2;        })) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(({        (_conditional_value_X3=(parsecmp("__result_use_check",info)));        _conditional_value_X3;        })) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(({        (_conditional_value_X4=(parsecmp("__alloc_size2",info)));        _conditional_value_X4;        })) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(({            (_conditional_value_X5=(*info->p==40));            _conditional_value_X5;            })) {
                nest=0;
                while(({                (_conditional_value_X6=(1));                _conditional_value_X6;                })) {
                    if(({                    (_conditional_value_X7=(*info->p==40));                    _conditional_value_X7;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest++;
                    }
                    else if(({                    (_conditional_value_X8=(*info->p==41));                    _conditional_value_X8;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest--;
                        if(({                        (_conditional_value_X9=(nest==0));                        _conditional_value_X9;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_conditional_value_X10=(*info->p==0));                    _conditional_value_X10;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(({        (_conditional_value_X11=(parsecmp("__alloc_size",info)));        _conditional_value_X11;        })) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(({            (_conditional_value_X12=(*info->p==40));            _conditional_value_X12;            })) {
                nest_22=0;
                while(({                (_conditional_value_X13=(1));                _conditional_value_X13;                })) {
                    if(({                    (_conditional_value_X14=(*info->p==40));                    _conditional_value_X14;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_22++;
                    }
                    else if(({                    (_conditional_value_X15=(*info->p==41));                    _conditional_value_X15;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_22--;
                        if(({                        (_conditional_value_X16=(nest_22==0));                        _conditional_value_X16;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_conditional_value_X17=(*info->p==0));                    _conditional_value_X17;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(({        (_conditional_value_X18=(parsecmp("__nonnull",info)));        _conditional_value_X18;        })) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(({            (_conditional_value_X19=(*info->p==40));            _conditional_value_X19;            })) {
                nest_23=0;
                while(({                (_conditional_value_X20=(1));                _conditional_value_X20;                })) {
                    if(({                    (_conditional_value_X21=(*info->p==40));                    _conditional_value_X21;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_23++;
                    }
                    else if(({                    (_conditional_value_X22=(*info->p==41));                    _conditional_value_X22;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_23--;
                        if(({                        (_conditional_value_X23=(nest_23==0));                        _conditional_value_X23;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_conditional_value_X24=(*info->p==0));                    _conditional_value_X24;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(({        (_conditional_value_X25=(parsecmp("_Nonnull",info)));        _conditional_value_X25;        })) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(({            (_conditional_value_X26=(*info->p==40));            _conditional_value_X26;            })) {
                nest_24=0;
                while(({                (_conditional_value_X27=(1));                _conditional_value_X27;                })) {
                    if(({                    (_conditional_value_X28=(*info->p==40));                    _conditional_value_X28;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_24++;
                    }
                    else if(({                    (_conditional_value_X29=(*info->p==41));                    _conditional_value_X29;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_24--;
                        if(({                        (_conditional_value_X30=(nest_24==0));                        _conditional_value_X30;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_conditional_value_X31=(*info->p==0));                    _conditional_value_X31;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(({        (_conditional_value_X32=(parsecmp("__alloc_align",info)));        _conditional_value_X32;        })) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(({            (_conditional_value_X33=(*info->p==40));            _conditional_value_X33;            })) {
                nest_25=0;
                while(({                (_conditional_value_X34=(1));                _conditional_value_X34;                })) {
                    if(({                    (_conditional_value_X35=(*info->p==40));                    _conditional_value_X35;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_25++;
                    }
                    else if(({                    (_conditional_value_X36=(*info->p==41));                    _conditional_value_X36;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_25--;
                        if(({                        (_conditional_value_X37=(nest_25==0));                        _conditional_value_X37;                        })) {
                            break;
                        }
                    }
                    else if(({                    (_conditional_value_X38=(*info->p==0));                    _conditional_value_X38;                    })) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(({        (_conditional_value_X39=(parsecmp("__attribute_malloc__",info)));        _conditional_value_X39;        })) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(({        (_conditional_value_X40=(parsecmp("__attr_dealloc_fclose",info)));        _conditional_value_X40;        })) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(({        (_conditional_value_X41=(parsecmp("__wur",info)));        _conditional_value_X41;        })) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(({        (_conditional_value_X42=(parsecmp("__pure2",info)));        _conditional_value_X42;        })) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(({        (_conditional_value_X43=(parsecmp("__pure",info)));        _conditional_value_X43;        })) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(({        (_conditional_value_X44=(parsecmp("__noreturn",info)));        _conditional_value_X44;        })) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(({        (_conditional_value_X45=(parsecmp("__attribute__",info)));        _conditional_value_X45;        })) {
            __right_value0 = (void*)0;
            __dec_obj63=attribute,
            attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X46=(parsecmp("__asm__",info)));        _conditional_value_X46;        })) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(({            (_conditional_value_X47=(memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0));            _conditional_value_X47;            })) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len=0;
            if(({            (_conditional_value_X48=(*info->p==40));            _conditional_value_X48;            })) {
                in_dquort=(_Bool)0;
                brace_num=0;
                while(({                (_conditional_value_X49=(*info->p));                _conditional_value_X49;                })) {
                    if(({                    (_conditional_value_X50=(*info->p==34));                    _conditional_value_X50;                    })) {
                        info->p++;
                        in_dquort=!in_dquort;
                    }
                    else if(({                    (_conditional_value_X51=(in_dquort));                    _conditional_value_X51;                    })) {
                        buffer_append_char(asm_fun_name,*info->p);
                        info->p++;
                    }
                    else if(({                    (_conditional_value_X52=(*info->p==40));                    _conditional_value_X52;                    })) {
                        info->p++;
                        brace_num++;
                    }
                    else if(({                    (_conditional_value_X53=(*info->p==41));                    _conditional_value_X53;                    })) {
                        info->p++;
                        brace_num--;
                        if(({                        (_conditional_value_X54=(brace_num==0));                        _conditional_value_X54;                        })) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(({        (_conditional_value_X55=(parsecmp("__asm",info)));        _conditional_value_X55;        })) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(({            (_conditional_value_X56=(*info->p==40));            _conditional_value_X56;            })) {
                brace_num_26=0;
                while(({                (_conditional_value_X57=(*info->p));                _conditional_value_X57;                })) {
                    if(({                    (_conditional_value_X58=(*info->p==40));                    _conditional_value_X58;                    })) {
                        info->p++;
                        brace_num_26++;
                    }
                    else if(({                    (_conditional_value_X59=(*info->p==41));                    _conditional_value_X59;                    })) {
                        info->p++;
                        brace_num_26--;
                        if(({                        (_conditional_value_X60=(brace_num_26==0));                        _conditional_value_X60;                        })) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__99 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value2=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05type.c", 1044, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name)),(char*)come_increment_ref_count(attribute)))));
    come_call_finalizer(buffer_finalize, asm_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__99, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__99;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj64;
char* __dec_obj65;
struct tuple2$2char$phchar$ph* __result_obj__98;
    __dec_obj64=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj65=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__98 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__98, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__98;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v1!=((void*)0)));    _conditional_value_X0;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v2!=((void*)0)));    _conditional_value_X0;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

char* parse_struct_attribute(struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
char* p;
int sline;
char* buf;
_Bool _conditional_value_X2;
char* head;
char* tail;
_Bool _conditional_value_X3;
char* head_27;
char* tail_28;
char* __result_obj__100;
    parse_sharp_v5(info);
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05type.c", 1050, "struct buffer*"))));
    while(({    (_conditional_value_X0=(1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(xisalnum(*info->p)||*info->p==95));        _conditional_value_X1;        })) {
        }
        else {
            break;
        }
        p=info->p;
        sline=info->sline;
        __right_value0 = (void*)0;
        buf=(char*)come_increment_ref_count(parse_word(info));
        info->p=p;
        info->sline=sline;
        if(({        (_conditional_value_X2=(memcmp(info->p,"__attribute__",strlen("__attribute__"))==0));        _conditional_value_X2;        })) {
            head=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail=info->p;
            buffer_append(result,head,tail-head);
        }
        else if(({        (_conditional_value_X3=(string_operator_equals(buf,"asm")));        _conditional_value_X3;        })) {
            head_27=info->p;
            info->p+=strlen("asm");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_28=info->p;
            buffer_append(result,head_27,tail_28-head_27);
        }
        else {
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    parse_sharp_v5(info);
    __right_value0 = (void*)0;
    __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value0=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__100;
}

struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* result_type;
_Bool _conditional_value_X0;
char* var_name;
char* p;
int sline;
char* word;
_Bool _conditional_value_X1;
_Bool between_brace;
char* p_29;
int sline_30;
char* word_31;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
_Bool lambda_;
char* p_32;
int sline_33;
char* word_34;
_Bool _conditional_value_X5;
_Bool _conditional_value_X6;
char* __dec_obj66;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sType* result_type2;
struct sNode* node;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var2 = (void*)0;
struct list$1sType$ph* param_types=0;
struct list$1char$ph* param_names=0;
struct list$1char$ph* param_default_parametors=0;
_Bool var_args=0;
struct sType* __dec_obj67;
struct list$1sType$ph* __dec_obj68;
struct list$1char$ph* __dec_obj69;
struct sType* __dec_obj70;
char* __dec_obj71;
char* __dec_obj72;
_Bool no_comma;
struct sNode* node_35;
struct sNode* __dec_obj73;
char* p_36;
int sline_37;
char* word_38;
struct sNode* node_39;
char* attribute;
char* __dec_obj77;
char* __dec_obj78;
struct tuple2$2sType$phchar$ph* __result_obj__103;
    result_type=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(({    (_conditional_value_X0=(!first));    _conditional_value_X0;    })) {
        result_type->mPointerNum=result_type->mTypedefOriginalPointerNum;
    }
    var_name=((void*)0);
    {
        p=info->p;
        sline=info->sline;
        if(({        (_conditional_value_X0=(xisalpha(*info->p)||*info->p==95));        _conditional_value_X0;        })) {
            __right_value0 = (void*)0;
            word=(char*)come_increment_ref_count(parse_word(info));
            if(({            (_conditional_value_X1=(string_operator_equals(word,"const")||string_operator_equals(word,"__restrict")||string_operator_equals(word,"restrict")||string_operator_equals(word,"__user")||string_operator_equals(word,"volatile")||string_operator_equals(word,"_Nonnull")||string_operator_equals(word,"_Nullable")||string_operator_equals(word,"_Null_unspecified")||string_operator_equals(word,"__user")||string_operator_equals(word,"_Addr")));            _conditional_value_X1;            })) {
            }
            else {
                info->p=p;
                info->sline=sline;
            }
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            info->p=p;
            info->sline=sline;
        }
    }
    between_brace=(_Bool)0;
    {
        p_29=info->p;
        sline_30=info->sline;
        if(({        (_conditional_value_X0=(*info->p==40));        _conditional_value_X0;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            if(({            (_conditional_value_X1=(xisalpha(*info->p)||*info->p==95));            _conditional_value_X1;            })) {
                __right_value0 = (void*)0;
                word_31=(char*)come_increment_ref_count(parse_word(info));
                if(({                (_conditional_value_X2=(is_type_name(word_31,info)));                _conditional_value_X2;                })) {
                }
                else if(({                (_conditional_value_X3=(*info->p==41));                _conditional_value_X3;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(({                    (_conditional_value_X4=(*info->p!=40));                    _conditional_value_X4;                    })) {
                        between_brace=(_Bool)1;
                    }
                }
                (word_31 = come_decrement_ref_count(word_31, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=p_29;
        info->sline=sline_30;
    }
    lambda_=(_Bool)0;
    {
        p_32=info->p;
        sline_33=info->sline;
        if(({        (_conditional_value_X0=(*info->p==40));        _conditional_value_X0;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            if(({            (_conditional_value_X1=(*info->p==42));            _conditional_value_X1;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                if(({                (_conditional_value_X2=(xisalpha(*info->p)||*info->p==95));                _conditional_value_X2;                })) {
                    __right_value0 = (void*)0;
                    word_34=(char*)come_increment_ref_count(parse_word(info));
                    if(({                    (_conditional_value_X3=(is_type_name(word_34,info)));                    _conditional_value_X3;                    })) {
                    }
                    else if(({                    (_conditional_value_X4=(*info->p==91));                    _conditional_value_X4;                    })) {
                        lambda_=(_Bool)1;
                    }
                    else if(({                    (_conditional_value_X5=(*info->p==41));                    _conditional_value_X5;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(({                        (_conditional_value_X6=(*info->p==40));                        _conditional_value_X6;                        })) {
                            lambda_=(_Bool)1;
                        }
                    }
                    (word_34 = come_decrement_ref_count(word_34, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
        }
        info->p=p_32;
        info->sline=sline_33;
    }
    parse_sharp_v5(info);
    while(({    (_conditional_value_X0=(*info->p==42));    _conditional_value_X0;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(({    (_conditional_value_X0=(between_brace&&*info->p==40));    _conditional_value_X0;    })) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(({    (_conditional_value_X0=(lambda_));    _conditional_value_X0;    })) {
        expected_next_character(40,info);
        expected_next_character(42,info);
        __right_value0 = (void*)0;
        __dec_obj66=var_name,
        var_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        result_type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1212, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        if(({        (_conditional_value_X1=(*info->p==91));        _conditional_value_X1;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_add(result_type2->mArrayNum,(struct sNode*)come_increment_ref_count(node));
            expected_next_character(93,info);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        multiple_assign_var2=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var2->v1);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var2->v2);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var2->v3);
        var_args=multiple_assign_var2->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj67=result_type2->mResultType,
        result_type2->mResultType=(struct sType*)come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj68=result_type2->mParamTypes,
        result_type2->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj69=result_type2->mParamNames,
        result_type2->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        result_type2->mVarArgs=var_args;
        __dec_obj70=result_type,
        result_type=(struct sType*)come_increment_ref_count(result_type2);
        come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_conditional_value_X2=(xisalnum(*info->p)||*info->p==95));    _conditional_value_X2;    })) {
        __right_value0 = (void*)0;
        __dec_obj71=var_name,
        var_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name=0;
        num_anonymous_var_name++;
        __right_value0 = (void*)0;
        __dec_obj72=var_name,
        var_name=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(between_brace&&*info->p==41));    _conditional_value_X0;    })) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(({    (_conditional_value_X0=(*info->p==58));    _conditional_value_X0;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        node_35=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma;
        __dec_obj73=result_type->mSizeNum,
        result_type->mSizeNum=(struct sNode*)come_increment_ref_count(node_35);
        (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0, (void*)0) :0);
        ((node_35) ? node_35 = come_decrement_ref_count(node_35, ((struct sNode*)node_35)->finalize, ((struct sNode*)node_35)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    while(({    (_conditional_value_X0=(*info->p==91));    _conditional_value_X0;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_36=info->p;
            sline_37=info->sline;
            if(({            (_conditional_value_X1=(xisalpha(*info->p)||*info->p==95));            _conditional_value_X1;            })) {
                __right_value0 = (void*)0;
                word_38=(char*)come_increment_ref_count(parse_word(info));
                if(({                (_conditional_value_X2=(string_operator_equals(word_38,"const")||string_operator_equals(word_38,"__restrict")||string_operator_equals(word_38,"restrict")||string_operator_equals(word_38,"__user")||string_operator_equals(word_38,"volatile")||string_operator_equals(word_38,"_Nonnull")||string_operator_equals(word_38,"_Nullable")||string_operator_equals(word_38,"_Null_unspecified")||string_operator_equals(word_38,"__user")||string_operator_equals(word_38,"_Addr")));                _conditional_value_X2;                })) {
                }
                else {
                    info->p=p_36;
                    info->sline=sline_37;
                }
                (word_38 = come_decrement_ref_count(word_38, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                info->p=p_36;
                info->sline=sline_37;
            }
        }
        if(({        (_conditional_value_X3=(*info->p==93));        _conditional_value_X3;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type->mArrayPointerType=(_Bool)1;
            result_type->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        node_39=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph_push_back(result_type->mArrayNum,(struct sNode*)come_increment_ref_count(node_39));
        parse_sharp_v5(info);
        result_type->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        ((node_39) ? node_39 = come_decrement_ref_count(node_39, ((struct sNode*)node_39)->finalize, ((struct sNode*)node_39)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __right_value0 = (void*)0;
    attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(({    (_conditional_value_X0=(string_operator_not_equals(attribute,"")));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(result_type->mAttribute));        _conditional_value_X1;        })) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj77=result_type->mAttribute,
            result_type->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(result_type->mAttribute," "))),attribute));
            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj78=result_type->mAttribute,
            result_type->mAttribute=(char*)come_increment_ref_count(attribute);
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
        }
    }
    __right_value0 = (void*)0;
    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__103 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value1=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "05type.c", 1318, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(result_type),(char*)come_increment_ref_count(var_name)))));
    come_call_finalizer(sType_finalize, base_type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__103, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__103;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj74;
_Bool _conditional_value_X1;
struct list_item$1sNode$ph* litem_40;
struct sNode* __dec_obj75;
struct list_item$1sNode$ph* litem_41;
struct sNode* __dec_obj76;
struct list$1sNode$ph* __result_obj__101;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6461, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj74=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj74 ? __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_40=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6471, "struct list_item$1sNode$ph*"))));
        litem_40->prev=self->head;
        litem_40->next=((void*)0);
        __dec_obj75=litem_40->item,
        litem_40->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_40;
        self->head->next=litem_40;
    }
    else {
        __right_value0 = (void*)0;
        litem_41=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6481, "struct list_item$1sNode$ph*"))));
        litem_41->prev=self->tail;
        litem_41->next=((void*)0);
        __dec_obj76=litem_41->item,
        litem_41->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_41;
        self->tail=litem_41;
    }
    self->len++;
    __result_obj__101 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__101;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj79;
char* __dec_obj80;
struct tuple2$2sType$phchar$ph* __result_obj__102;
    __dec_obj79=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj80=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__102 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__102, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__102;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v1!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v2!=((void*)0)));    _conditional_value_X0;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p;
int sline;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
char* word;
_Bool _conditional_value_X1;
int nest;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
_Bool _conditional_value_X5;
_Bool _conditional_value_X6;
_Bool _conditional_value_X7;
    p=info->p;
    sline=info->sline;
    if(({    (_conditional_value_X0=(xisalpha(*info->p)||*info->p==95));    _conditional_value_X0;    })) {
        word=(char*)come_increment_ref_count(parse_word(info));
        if(({        (_conditional_value_X1=((string_operator_equals(word,"__attribute")||string_operator_equals(word,"__attribute__"))&&*info->p==40));        _conditional_value_X1;        })) {
            nest=0;
            while(({            (_conditional_value_X2=(1));            _conditional_value_X2;            })) {
                if(({                (_conditional_value_X3=(*info->p==40));                _conditional_value_X3;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest++;
                }
                else if(({                (_conditional_value_X4=(*info->p==41));                _conditional_value_X4;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest--;
                    if(({                    (_conditional_value_X5=(nest==0));                    _conditional_value_X5;                    })) {
                        break;
                    }
                }
                else if(({                (_conditional_value_X6=(*info->p==0));                _conditional_value_X6;                })) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(({        (_conditional_value_X7=(string_operator_equals(word,"const")||string_operator_equals(word,"__restrict")||string_operator_equals(word,"restrict")||string_operator_equals(word,"__user")||string_operator_equals(word,"volatile")||string_operator_equals(word,"_Nonnull")||string_operator_equals(word,"_Nullable")||string_operator_equals(word,"__nonnull")||string_operator_equals(word,"_Null_unspecified")||string_operator_equals(word,"__user")||string_operator_equals(word,"_Addr")||string_operator_equals(word,"__noreturn")||string_operator_equals(word,"_noreturn")||string_operator_equals(word,"_Noreturn")));        _conditional_value_X7;        })) {
        }
        else {
            info->p=p;
            info->sline=sline;
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        info->p=p;
        info->sline=sline;
    }
}

struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
_Bool no_output_err;
void* __right_value0 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* type=0;
char* name=0;
_Bool err=0;
void* __right_value1 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__105;
    no_output_err=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
    name=(char*)come_increment_ref_count(multiple_assign_var3->v2);
    err=multiple_assign_var3->v3;
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err;
    __right_value0 = (void*)0;
    __result_obj__105 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1375, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type),(char*)come_increment_ref_count(name),err))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__105;
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3){
struct sType* __dec_obj81;
char* __dec_obj82;
struct tuple3$3sType$phchar$phbool$* __result_obj__104;
    __dec_obj81=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj82=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
    self->v3=v3;
    __result_obj__104 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__104, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__104;
}

struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
char* head;
int head_sline;
void* __right_value0 = (void*)0;
char* type_name;
_Bool record_;
_Bool constant;
_Bool static_;
_Bool volatile_;
_Bool register_;
_Bool unsigned_;
_Bool long_;
_Bool long_long;
_Bool short_;
_Bool restrict_;
_Bool struct_;
_Bool union_;
_Bool enum_;
_Bool no_heap;
_Bool extern_;
_Bool inline_;
_Bool uniq_;
_Bool tuple_;
_Bool immutable_;
_Bool task_;
_Bool original_var_name;
struct sNode* alignas_;
_Bool anonymous_type;
_Bool anonymous_name;
_Bool atomic_;
_Bool object_interface;
_Bool thread_local;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
char* __dec_obj83;
_Bool _conditional_value_X2;
char* __dec_obj84;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
char* __dec_obj85;
_Bool _conditional_value_X5;
char* __dec_obj86;
_Bool _conditional_value_X6;
_Bool _conditional_value_X7;
int brace_num;
_Bool _conditional_value_X8;
_Bool _conditional_value_X9;
_Bool _conditional_value_X10;
_Bool _conditional_value_X11;
char* __dec_obj87;
_Bool _conditional_value_X12;
_Bool _conditional_value_X13;
int brace_num_42;
_Bool _conditional_value_X14;
_Bool _conditional_value_X15;
_Bool _conditional_value_X16;
_Bool _conditional_value_X17;
char* __dec_obj88;
_Bool _conditional_value_X18;
char* __dec_obj89;
_Bool _conditional_value_X19;
char* __dec_obj90;
_Bool _conditional_value_X20;
char* __dec_obj91;
_Bool _conditional_value_X21;
char* __dec_obj92;
_Bool _conditional_value_X22;
struct sNode* exp;
struct sNode* __dec_obj93;
char* __dec_obj94;
_Bool _conditional_value_X23;
char* __dec_obj95;
_Bool _conditional_value_X24;
char* __dec_obj96;
_Bool _conditional_value_X25;
char* __dec_obj97;
_Bool _conditional_value_X26;
char* __dec_obj98;
_Bool _conditional_value_X27;
char* __dec_obj99;
_Bool _conditional_value_X28;
char* __dec_obj100;
_Bool _conditional_value_X29;
char* __dec_obj101;
_Bool _conditional_value_X30;
char* __dec_obj102;
_Bool _conditional_value_X31;
char* __dec_obj103;
_Bool _conditional_value_X32;
_Bool _conditional_value_X33;
char* p;
int sline;
_Bool _conditional_value_X34;
char* __dec_obj104;
char* __dec_obj105;
_Bool _conditional_value_X35;
char* __dec_obj106;
_Bool _conditional_value_X36;
char* p_43;
int sline_44;
_Bool _conditional_value_X37;
_Bool _conditional_value_X38;
_Bool _conditional_value_X39;
_Bool _conditional_value_X40;
void* __right_value1 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__106;
_Bool _conditional_value_X41;
char* p_45;
int sline_46;
_Bool _conditional_value_X42;
struct tuple3$3sType$phchar$phbool$* __result_obj__107;
struct sNode* node;
_Bool Value;
_Bool _conditional_value_X43;
struct tuple3$3sType$phchar$phbool$* __result_obj__108;
_Bool _conditional_value_X44;
_Bool _conditional_value_X45;
char* p_47;
int sline_48;
_Bool _conditional_value_X46;
_Bool _conditional_value_X47;
char* __dec_obj107;
char* __dec_obj108;
char* __dec_obj109;
_Bool _conditional_value_X48;
char* p_49;
int sline_50;
_Bool _conditional_value_X49;
struct tuple3$3sType$phchar$phbool$* __result_obj__109;
_Bool _conditional_value_X50;
_Bool _conditional_value_X51;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* type=0;
char* name=0;
_Bool err=0;
_Bool _conditional_value_X52;
char* p_51;
int sline_52;
_Bool _conditional_value_X53;
_Bool _conditional_value_X54;
struct tuple3$3sType$phchar$phbool$* __result_obj__110;
char* __dec_obj110;
char* __dec_obj111;
_Bool _conditional_value_X55;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* type_53=0;
char* name_54=0;
_Bool err_55=0;
_Bool _conditional_value_X56;
char* p_56;
int sline_57;
_Bool _conditional_value_X57;
struct tuple3$3sType$phchar$phbool$* __result_obj__111;
_Bool _conditional_value_X58;
char* p_58;
int sline_59;
_Bool _conditional_value_X59;
char* __dec_obj112;
char* __dec_obj113;
_Bool _conditional_value_X60;
char* __dec_obj114;
_Bool _conditional_value_X61;
_Bool _conditional_value_X62;
char* __dec_obj115;
_Bool _conditional_value_X63;
_Bool _conditional_value_X64;
_Bool _conditional_value_X65;
char* __dec_obj116;
_Bool _conditional_value_X66;
_Bool _conditional_value_X67;
char* __dec_obj117;
_Bool _conditional_value_X68;
_Bool _conditional_value_X69;
char* __dec_obj118;
_Bool _conditional_value_X70;
_Bool _conditional_value_X71;
char* p_60;
int sline_61;
char* __dec_obj119;
_Bool _conditional_value_X72;
_Bool _conditional_value_X73;
char* p_62;
int sline_63;
char* __dec_obj120;
_Bool _conditional_value_X74;
char* __dec_obj121;
char* __dec_obj122;
_Bool _conditional_value_X75;
_Bool _conditional_value_X76;
char* p_64;
int sline_65;
char* __dec_obj123;
_Bool _conditional_value_X77;
char* __dec_obj124;
char* __dec_obj125;
_Bool _conditional_value_X78;
char* __dec_obj126;
char* __dec_obj127;
_Bool _conditional_value_X79;
char* __dec_obj128;
_Bool _conditional_value_X80;
char* __dec_obj129;
_Bool _conditional_value_X81;
char* __dec_obj130;
_Bool _conditional_value_X82;
char* __dec_obj131;
_Bool _conditional_value_X83;
char* __dec_obj132;
_Bool _conditional_value_X84;
_Bool _conditional_value_X85;
char* __dec_obj133;
_Bool _conditional_value_X86;
_Bool _conditional_value_X87;
_Bool _conditional_value_X88;
char* p_66;
int sline_67;
char* __dec_obj134;
_Bool _conditional_value_X89;
_Bool _conditional_value_X90;
_Bool _conditional_value_X91;
char* __dec_obj135;
struct sNode* exp_68;
void* __right_value2 = (void*)0;
struct sType* type_69;
struct sNode* __dec_obj136;
char* var_name;
char* attribute;
char* __dec_obj137;
char* __dec_obj138;
char* __dec_obj139;
_Bool no_comma;
struct sNode* node_70;
struct sNode* __dec_obj140;
char* attribute2;
char* __dec_obj141;
char* __dec_obj142;
struct tuple3$3sType$phchar$phbool$* __result_obj__112;
char* attribute_71;
int pointer_num;
_Bool heap;
_Bool refference;
_Bool no_refference;
_Bool channel;
_Bool any_class;
_Bool vtable;
char* tuple_name;
char* __dec_obj143;
_Bool lambda_flag;
char* pX;
int slineX;
struct sType* type_72;
char* var_name_73;
_Bool function_pointer_flag;
_Bool pointer_to_array_flag;
char* p_74;
int sline_75;
char* word;
char* word_76;
_Bool var_name_between_brace;
char* p_77;
int sline_78;
char* word_79;
char* __dec_obj144;
struct sNode* node_80;
_Bool Value_81;
struct tuple3$3sType$phchar$phbool$* __result_obj__113;
int pointer_num_82;
struct sType* __dec_obj145;
char* __dec_obj146;
char* __dec_obj147;
struct sNode* node_83;
_Bool Value_84;
struct tuple3$3sType$phchar$phbool$* __result_obj__114;
struct sType* __dec_obj148;
char* __dec_obj149;
struct sNode* node_85;
_Bool Value_86;
struct tuple3$3sType$phchar$phbool$* __result_obj__115;
int pointer_num_87;
struct sType* __dec_obj150;
struct tuple3$3sType$phchar$phbool$* __result_obj__116;
char* attribute_88;
char* __dec_obj151;
char* __dec_obj152;
char* __dec_obj153;
char* __dec_obj154;
char* __dec_obj155;
_Bool no_comma_91;
struct sNode* node_92;
struct sNode* __dec_obj156;
char* attribute2_93;
char* __dec_obj157;
char* __dec_obj158;
struct sType* result_type;
struct sType* __dec_obj159;
int i;
struct sType* __dec_obj160;
int i_94;
struct sType* __dec_obj161;
struct sType* __dec_obj162;
struct sNode* __dec_obj163;
char* __dec_obj164;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var6 = (void*)0;
struct list$1sType$ph* param_types=0;
struct list$1char$ph* param_names=0;
struct list$1char$ph* param_default_parametors=0;
_Bool var_args=0;
struct sType* __dec_obj165;
struct sType* __dec_obj166;
struct list$1sType$ph* __dec_obj167;
struct list$1char$ph* __dec_obj168;
int array_pointer_num;
struct sType* __dec_obj169;
struct sNode* __dec_obj170;
char* __dec_obj171;
char* __dec_obj172;
struct sNode* node_95;
int function_pointer_num;
struct sType* result_type_96;
struct sType* __dec_obj173;
int i_97;
struct sType* __dec_obj174;
int i_98;
struct sType* __dec_obj175;
struct sType* __dec_obj176;
struct sNode* __dec_obj177;
char* __dec_obj178;
struct tuple3$3sType$phchar$phbool$* __result_obj__121;
char* __dec_obj179;
struct sType* __dec_obj180;
struct sNode* node_100;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var7 = (void*)0;
struct list$1sType$ph* param_types_101=0;
struct list$1char$ph* param_names_102=0;
struct list$1char$ph* param_default_parametors_103=0;
_Bool var_args_104=0;
struct sType* __dec_obj181;
struct list$1sType$ph* __dec_obj182;
struct list$1char$ph* __dec_obj183;
struct sType* __dec_obj184;
char* __dec_obj185;
struct sNode* __dec_obj186;
char* __dec_obj187;
int i_105;
struct sType* __dec_obj188;
struct sNode* __dec_obj189;
char* __dec_obj190;
int i_106;
struct sType* __dec_obj191;
struct sNode* __dec_obj192;
char* __dec_obj193;
struct tuple3$3sType$phchar$phbool$* __result_obj__122;
struct sType* __dec_obj194;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* generics_type=0;
char* var_name_107=0;
_Bool err_108=0;
struct tuple3$3sType$phchar$phbool$* __result_obj__123;
struct tuple3$3sType$phchar$phbool$* __result_obj__124;
struct sType* __dec_obj195;
char* new_name;
struct sNode* __dec_obj196;
char* __dec_obj197;
char* __dec_obj198;
struct sClass* klass;
void* __right_value3 = (void*)0;
struct sClass* klass_118;
struct sType* __dec_obj199;
struct sNode* __dec_obj200;
char* __dec_obj201;
_Bool _conditional_value_X92;
_Bool _conditional_value_X93;
_Bool _conditional_value_X94;
_Bool _conditional_value_X95;
_Bool _conditional_value_X96;
_Bool _conditional_value_X97;
struct list$1sType$ph* types;
_Bool _conditional_value_X98;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var9 = (void*)0;
struct sType* type2=0;
char* name_119=0;
_Bool err_120=0;
_Bool _conditional_value_X99;
struct tuple3$3sType$phchar$phbool$* __result_obj__140;
_Bool _conditional_value_X100;
int num_tuples;
struct sType* __dec_obj202;
struct list$1sType$ph* o2_saved;
struct sType* it;
_Bool _conditional_value_X101;
_Bool _conditional_value_X102;
_Bool _conditional_value_X103;
_Bool _conditional_value_X104;
_Bool _conditional_value_X105;
_Bool _conditional_value_X106;
_Bool _conditional_value_X107;
_Bool _conditional_value_X108;
_Bool _conditional_value_X109;
_Bool _conditional_value_X110;
_Bool _conditional_value_X111;
struct sType* __dec_obj203;
_Bool _conditional_value_X112;
char* new_name_121;
char* __dec_obj204;
char* attribute_122;
_Bool _conditional_value_X113;
char* __dec_obj205;
_Bool _conditional_value_X114;
_Bool _conditional_value_X115;
_Bool _conditional_value_X116;
char* __dec_obj206;
_Bool _conditional_value_X117;
char* __dec_obj207;
_Bool _conditional_value_X118;
char* __dec_obj208;
char* __dec_obj209;
_Bool _conditional_value_X119;
_Bool _conditional_value_X120;
_Bool no_comma_125;
struct sNode* node_126;
struct sNode* __dec_obj210;
char* attribute2_127;
_Bool _conditional_value_X121;
char* __dec_obj211;
char* __dec_obj212;
_Bool _conditional_value_X122;
char* __dec_obj213;
struct sNode* node_128;
struct tuple2$2char$phchar$ph* multiple_assign_var10 = (void*)0;
char* asm_name=0;
char* attribute2_129=0;
char* __dec_obj214;
char* __dec_obj215;
struct sType* type_before;
struct sType* __dec_obj216;
struct sNode* __list_values1__[1];
struct list$1sNode$ph* __dec_obj217;
struct sType* __dec_obj218;
char* __dec_obj219;
struct tuple3$3sType$phchar$phbool$* __result_obj__142;
type_72 = (void*)0;
var_name_73 = (void*)0;
result_type = (void*)0;
result_type_96 = (void*)0;
    head=info->p;
    head_sline=info->sline;
    info->define_struct=(_Bool)0;
    type_name=(char*)come_increment_ref_count(parse_word(info));
    record_=(_Bool)0;
    constant=(_Bool)0;
    static_=(_Bool)0;
    volatile_=(_Bool)0;
    register_=(_Bool)0;
    unsigned_=(_Bool)0;
    long_=(_Bool)0;
    long_long=(_Bool)0;
    short_=(_Bool)0;
    restrict_=(_Bool)0;
    struct_=(_Bool)0;
    union_=(_Bool)0;
    enum_=(_Bool)0;
    no_heap=(_Bool)0;
    extern_=(_Bool)0;
    inline_=(_Bool)0;
    uniq_=(_Bool)0;
    tuple_=(_Bool)0;
    immutable_=(_Bool)0;
    task_=(_Bool)0;
    original_var_name=(_Bool)0;
    alignas_=((void*)0);
    anonymous_type=(_Bool)0;
    anonymous_name=(_Bool)0;
    atomic_=(_Bool)0;
    object_interface=(_Bool)0;
    thread_local=(_Bool)0;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(string_operator_equals(type_name,"object")&&*info->p==58));        _conditional_value_X1;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj83=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X2=(string_operator_equals(type_name,"_Thread_local")));        _conditional_value_X2;        })) {
            __right_value0 = (void*)0;
            __dec_obj84=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0);
            thread_local=(_Bool)1;
        }
        else if(({        (_conditional_value_X3=(string_operator_equals(type_name,"_Atomic")));        _conditional_value_X3;        })) {
            if(({            (_conditional_value_X4=(*info->p==40));            _conditional_value_X4;            })) {
                expected_next_character(40,info);
            }
            __right_value0 = (void*)0;
            __dec_obj85=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
            atomic_=(_Bool)1;
        }
        else if(({        (_conditional_value_X5=(string_operator_equals(type_name,"__extension__")));        _conditional_value_X5;        })) {
            __right_value0 = (void*)0;
            __dec_obj86=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X6=(string_operator_equals(type_name,"__attribute__")));        _conditional_value_X6;        })) {
            if(({            (_conditional_value_X7=(*info->p==40));            _conditional_value_X7;            })) {
                brace_num=0;
                while(({                (_conditional_value_X8=(*info->p));                _conditional_value_X8;                })) {
                    if(({                    (_conditional_value_X9=(*info->p==40));                    _conditional_value_X9;                    })) {
                        info->p++;
                        brace_num++;
                    }
                    else if(({                    (_conditional_value_X10=(*info->p==41));                    _conditional_value_X10;                    })) {
                        info->p++;
                        brace_num--;
                        if(({                        (_conditional_value_X11=(brace_num==0));                        _conditional_value_X11;                        })) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj87=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X12=(string_operator_equals(type_name,"__declspec")));        _conditional_value_X12;        })) {
            if(({            (_conditional_value_X13=(*info->p==40));            _conditional_value_X13;            })) {
                brace_num_42=0;
                while(({                (_conditional_value_X14=(*info->p));                _conditional_value_X14;                })) {
                    if(({                    (_conditional_value_X15=(*info->p==40));                    _conditional_value_X15;                    })) {
                        info->p++;
                        brace_num_42++;
                    }
                    else if(({                    (_conditional_value_X16=(*info->p==41));                    _conditional_value_X16;                    })) {
                        info->p++;
                        brace_num_42--;
                        if(({                        (_conditional_value_X17=(brace_num_42==0));                        _conditional_value_X17;                        })) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj88=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X18=(string_operator_equals(type_name,"_Noreturn")));        _conditional_value_X18;        })) {
            __right_value0 = (void*)0;
            __dec_obj89=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X19=(string_operator_equals(type_name,"__noreturn")));        _conditional_value_X19;        })) {
            __right_value0 = (void*)0;
            __dec_obj90=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X20=(string_operator_equals(type_name,"_Nullable")));        _conditional_value_X20;        })) {
            __right_value0 = (void*)0;
            __dec_obj91=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X21=(string_operator_equals(type_name,"_noreturn")));        _conditional_value_X21;        })) {
            __right_value0 = (void*)0;
            __dec_obj92=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X22=(string_operator_equals(type_name,"_Alignas")));        _conditional_value_X22;        })) {
            expected_next_character(40,info);
            __right_value0 = (void*)0;
            exp=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj93=alignas_,
            alignas_=(struct sNode*)come_increment_ref_count(exp);
            (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0, (void*)0) :0);
            expected_next_character(41,info);
            __right_value0 = (void*)0;
            __dec_obj94=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0);
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(({        (_conditional_value_X23=(string_operator_equals(type_name,"const")));        _conditional_value_X23;        })) {
            constant=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj95=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X24=(string_operator_equals(type_name,"immutable")));        _conditional_value_X24;        })) {
            immutable_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj96=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X25=(string_operator_equals(type_name,"_task")));        _conditional_value_X25;        })) {
            task_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj97=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X26=(string_operator_equals(type_name,"static")));        _conditional_value_X26;        })) {
            static_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj98=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X27=(string_operator_equals(type_name,"uniq")));        _conditional_value_X27;        })) {
            uniq_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj99=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X28=(string_operator_equals(type_name,"record")));        _conditional_value_X28;        })) {
            record_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj100=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X29=(string_operator_equals(type_name,"extern")));        _conditional_value_X29;        })) {
            extern_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj101=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X30=(string_operator_equals(type_name,"inline")||string_operator_equals(type_name,"__inline")||string_operator_equals(type_name,"__inline__")||string_operator_equals(type_name,"__always_inline")||string_operator_equals(type_name,"__forceinline")));        _conditional_value_X30;        })) {
            inline_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj102=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X31=(string_operator_equals(type_name,"volatile")));        _conditional_value_X31;        })) {
            volatile_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj103=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X32=(string_operator_equals(type_name,"struct")));        _conditional_value_X32;        })) {
            struct_=(_Bool)1;
            if(({            (_conditional_value_X33=(*info->p==123));            _conditional_value_X33;            })) {
                p=info->p;
                sline=info->sline;
                __right_value0 = (void*)0;
                ((char*)(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(({                (_conditional_value_X34=(*info->p==59));                _conditional_value_X34;                })) {
                    anonymous_name=(_Bool)1;
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj104=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p;
                    info->sline=sline;
                    break;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj105=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p;
                    info->sline=sline;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(({            (_conditional_value_X35=(*info->p!=62));            _conditional_value_X35;            })) {
                __right_value0 = (void*)0;
                (void)((char*)(__right_value0=parse_struct_attribute(info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                __right_value0 = (void*)0;
                __dec_obj106=type_name,
                type_name=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
                parse_sharp_v5(info);
                if(({                (_conditional_value_X36=(*info->p==60));                _conditional_value_X36;                })) {
                    p_43=info->p;
                    sline_44=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(({                    (_conditional_value_X37=((_Bool)1));                    _conditional_value_X37;                    })) {
                        if(({                        (_conditional_value_X38=(*info->p==62));                        _conditional_value_X38;                        })) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(({                            (_conditional_value_X39=(*info->p==123));                            _conditional_value_X39;                            })) {
                            }
                            else {
                                info->p=p_43;
                                info->sline=sline_44;
                            }
                            break;
                        }
                        else if(({                        (_conditional_value_X40=(*info->p==0));                        _conditional_value_X40;                        })) {
                            err_msg(info,"invalid struct definition");
                            __right_value0 = (void*)0;
                            __result_obj__106 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1619, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                            return __result_obj__106;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(({                (_conditional_value_X41=(*info->p==123));                _conditional_value_X41;                })) {
                    p_45=info->p;
                    sline_46=info->sline;
                    __right_value0 = (void*)0;
                    ((char*)(__right_value0=skip_block(info,(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    __right_value0 = (void*)0;
                    (void)((char*)(__right_value0=parse_struct_attribute(info)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    if(({                    (_conditional_value_X42=(*info->p==59));                    _conditional_value_X42;                    })) {
                        info->p=head;
                        info->sline=head_sline;
                        info->define_struct=(_Bool)1;
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __result_obj__107 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1639, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__107, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                        return __result_obj__107;
                    }
                    else {
                        info->p=p_45;
                        info->sline=sline_46;
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        node=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value=node_compile(node,info);
                        if(({                        (_conditional_value_X43=(!Value));                        _conditional_value_X43;                        })) {
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__108 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1651, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                            return __result_obj__108;
                        }
                        else {
                        }
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        break;
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                }
            }
        }
        else if(({        (_conditional_value_X44=(string_operator_equals(type_name,"union")));        _conditional_value_X44;        })) {
            union_=(_Bool)1;
            if(({            (_conditional_value_X45=(*info->p==123));            _conditional_value_X45;            })) {
                p_47=info->p;
                sline_48=info->sline;
                __right_value0 = (void*)0;
                ((char*)(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(({                (_conditional_value_X46=(strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0));                _conditional_value_X46;                })) {
                    __right_value0 = (void*)0;
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(({                (_conditional_value_X47=(*info->p==59));                _conditional_value_X47;                })) {
                    info->p=head;
                    info->sline=head_sline;
                    info->define_struct=(_Bool)0;
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj107=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_47;
                    info->sline=sline_48;
                    break;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj108=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_47;
                    info->sline=sline_48;
                    break;
                }
            }
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            __dec_obj109=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0);
            parse_sharp_v5(info);
            if(({            (_conditional_value_X48=(*info->p==123));            _conditional_value_X48;            })) {
                p_49=info->p;
                sline_50=info->sline;
                __right_value0 = (void*)0;
                ((char*)(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(({                (_conditional_value_X49=(*info->p==59));                _conditional_value_X49;                })) {
                    info->p=head;
                    info->sline=head_sline;
                    info->define_struct=(_Bool)1;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__109 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1708, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__109, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__109;
                }
                else {
                    anonymous_type=(_Bool)1;
                    info->p=p_49;
                    info->sline=sline_50;
                    break;
                }
            }
        }
        else if(({        (_conditional_value_X50=(string_operator_equals(type_name,"enum")));        _conditional_value_X50;        })) {
            enum_=(_Bool)1;
            parse_sharp_v5(info);
            if(({            (_conditional_value_X51=(*info->p==58));            _conditional_value_X51;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err=multiple_assign_var4->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            parse_sharp_v5(info);
            if(({            (_conditional_value_X52=(*info->p==123));            _conditional_value_X52;            })) {
                p_51=info->p;
                sline_52=info->sline;
                __right_value0 = (void*)0;
                ((char*)(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(({                (_conditional_value_X53=(strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0));                _conditional_value_X53;                })) {
                    __right_value0 = (void*)0;
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(({                (_conditional_value_X54=(*info->p==59));                _conditional_value_X54;                })) {
                    info->p=head;
                    info->sline=head_sline;
                    info->define_struct=(_Bool)1;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__110 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1746, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__110, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__110;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj110=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_51;
                    info->sline=sline_52;
                    break;
                }
            }
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            __dec_obj111=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
            parse_sharp_v5(info);
            if(({            (_conditional_value_X55=(*info->p==58));            _conditional_value_X55;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_53=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_54=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                err_55=multiple_assign_var5->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_54 = come_decrement_ref_count(name_54, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            parse_sharp_v5(info);
            if(({            (_conditional_value_X56=(*info->p==123));            _conditional_value_X56;            })) {
                p_56=info->p;
                sline_57=info->sline;
                __right_value0 = (void*)0;
                ((char*)(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(({                (_conditional_value_X57=(*info->p==59));                _conditional_value_X57;                })) {
                    info->p=head;
                    info->sline=head_sline;
                    info->define_struct=(_Bool)1;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__111 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1782, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__111;
                }
                else {
                    anonymous_type=(_Bool)1;
                    info->p=p_56;
                    info->sline=sline_57;
                    break;
                }
            }
        }
        else if(({        (_conditional_value_X58=(string_operator_equals(type_name,"long")));        _conditional_value_X58;        })) {
            {
                p_58=info->p;
                sline_59=info->sline;
                if(({                (_conditional_value_X59=(!(xisalpha(*info->p)||*info->p==95)));                _conditional_value_X59;                })) {
                    info->p=p_58;
                    info->sline=sline_59;
                    __right_value0 = (void*)0;
                    __dec_obj112=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
                    break;
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj113=type_name,
                    type_name=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
                    if(({                    (_conditional_value_X60=(string_operator_equals(type_name,"unsigned")));                    _conditional_value_X60;                    })) {
                        __right_value0 = (void*)0;
                        __dec_obj114=type_name,
                        type_name=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0);
                        if(({                        (_conditional_value_X61=(string_operator_equals(type_name,"int")));                        _conditional_value_X61;                        })) {
                            long_=(_Bool)1;
                            unsigned_=(_Bool)1;
                            break;
                        }
                    }
                    else if(({                    (_conditional_value_X62=(string_operator_equals(type_name,"signed")));                    _conditional_value_X62;                    })) {
                        __right_value0 = (void*)0;
                        __dec_obj115=type_name,
                        type_name=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
                        if(({                        (_conditional_value_X63=(string_operator_equals(type_name,"int")));                        _conditional_value_X63;                        })) {
                            long_=(_Bool)1;
                            unsigned_=(_Bool)0;
                            break;
                        }
                    }
                    else if(({                    (_conditional_value_X64=(string_operator_equals(type_name,"long")));                    _conditional_value_X64;                    })) {
                        p_58=info->p;
                        sline_59=info->sline;
                        if(({                        (_conditional_value_X65=(xisalpha(*info->p)||*info->p==95));                        _conditional_value_X65;                        })) {
                            long_long=(_Bool)1;
                            __right_value0 = (void*)0;
                            __dec_obj116=type_name,
                            type_name=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                        else {
                            long_=(_Bool)1;
                            break;
                        }
                        if(({                        (_conditional_value_X66=(string_operator_equals(type_name,"int")));                        _conditional_value_X66;                        })) {
                            long_long=(_Bool)1;
                            break;
                        }
                        else if(({                        (_conditional_value_X67=(!is_type_name(type_name,info)));                        _conditional_value_X67;                        })) {
                            __right_value0 = (void*)0;
                            __dec_obj117=type_name,
                            type_name=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
                            long_long=(_Bool)1;
                            info->p=p_58;
                            info->sline=sline_59;
                            break;
                        }
                    }
                    else if(({                    (_conditional_value_X68=(is_type_name(type_name,info)));                    _conditional_value_X68;                    })) {
                        if(({                        (_conditional_value_X69=(long_));                        _conditional_value_X69;                        })) {
                            long_long=(_Bool)1;
                            long_=(_Bool)0;
                        }
                        else {
                            long_=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_58;
                        info->sline=sline_59;
                        __right_value0 = (void*)0;
                        __dec_obj118=type_name,
                        type_name=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(({        (_conditional_value_X70=(string_operator_equals(type_name,"unsigned")));        _conditional_value_X70;        })) {
            unsigned_=(_Bool)1;
            if(({            (_conditional_value_X71=(xisalpha(*info->p)||*info->p==95));            _conditional_value_X71;            })) {
                p_60=info->p;
                sline_61=info->sline;
                __right_value0 = (void*)0;
                __dec_obj119=type_name,
                type_name=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0);
                if(({                (_conditional_value_X72=(string_operator_equals(type_name,"short")));                _conditional_value_X72;                })) {
                    if(({                    (_conditional_value_X73=(xisalpha(*info->p)||*info->p==95));                    _conditional_value_X73;                    })) {
                        p_62=info->p;
                        sline_63=info->sline;
                        __right_value0 = (void*)0;
                        __dec_obj120=type_name,
                        type_name=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0);
                        if(({                        (_conditional_value_X74=(is_type_name(type_name,info)));                        _conditional_value_X74;                        })) {
                            short_=(_Bool)1;
                        }
                        else {
                            short_=(_Bool)1;
                            __right_value0 = (void*)0;
                            __dec_obj121=type_name,
                            type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0);
                            info->p=p_62;
                            info->sline=sline_63;
                        }
                    }
                    else {
                        short_=(_Bool)1;
                        __right_value0 = (void*)0;
                        __dec_obj122=type_name,
                        type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
                else if(({                (_conditional_value_X75=(string_operator_equals(type_name,"long")));                _conditional_value_X75;                })) {
                    if(({                    (_conditional_value_X76=(xisalpha(*info->p)||*info->p==95));                    _conditional_value_X76;                    })) {
                        p_64=info->p;
                        sline_65=info->sline;
                        __right_value0 = (void*)0;
                        __dec_obj123=type_name,
                        type_name=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0);
                        if(({                        (_conditional_value_X77=(is_type_name(type_name,info)));                        _conditional_value_X77;                        })) {
                            long_=(_Bool)1;
                        }
                        else {
                            long_=(_Bool)1;
                            __right_value0 = (void*)0;
                            __dec_obj124=type_name,
                            type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0);
                            info->p=p_64;
                            info->sline=sline_65;
                        }
                    }
                    else {
                        long_=(_Bool)1;
                        __right_value0 = (void*)0;
                        __dec_obj125=type_name,
                        type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
                else if(({                (_conditional_value_X78=(!is_type_name(type_name,info)));                _conditional_value_X78;                })) {
                    __right_value0 = (void*)0;
                    __dec_obj126=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_60;
                    info->sline=sline_61;
                    break;
                }
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj127=type_name,
                type_name=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0);
                break;
            }
        }
        else if(({        (_conditional_value_X79=(string_operator_equals(type_name,"signed")||string_operator_equals(type_name,"__signed__")));        _conditional_value_X79;        })) {
            unsigned_=(_Bool)0;
            __right_value0 = (void*)0;
            __dec_obj128=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X80=(string_operator_equals(type_name,"register")));        _conditional_value_X80;        })) {
            register_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj129=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X81=(string_operator_equals(type_name,"restrict")));        _conditional_value_X81;        })) {
            restrict_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj130=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X82=(string_operator_equals(type_name,"_Addr")));        _conditional_value_X82;        })) {
            __right_value0 = (void*)0;
            __dec_obj131=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X83=(string_operator_equals(type_name,"__restrict")));        _conditional_value_X83;        })) {
            restrict_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj132=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X84=(string_operator_equals(type_name,"tup")));        _conditional_value_X84;        })) {
            if(({            (_conditional_value_X85=(*info->p==40));            _conditional_value_X85;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __right_value0 = (void*)0;
            __dec_obj133=type_name,
            type_name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple_=(_Bool)1;
        }
        else if(({        (_conditional_value_X86=(string_operator_equals(type_name,"short")));        _conditional_value_X86;        })) {
            short_=(_Bool)0;
            if(({            (_conditional_value_X87=(*info->p==58));            _conditional_value_X87;            })) {
                break;
            }
            else if(({            (_conditional_value_X88=(xisalnum(*info->p)));            _conditional_value_X88;            })) {
                p_66=info->p;
                sline_67=info->sline;
                __right_value0 = (void*)0;
                __dec_obj134=type_name,
                type_name=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0);
                if(({                (_conditional_value_X89=(string_operator_equals(type_name,"int")));                _conditional_value_X89;                })) {
                    short_=(_Bool)1;
                    break;
                }
                else if(({                (_conditional_value_X90=(string_operator_equals(type_name,"short")));                _conditional_value_X90;                })) {
                    short_=(_Bool)1;
                    break;
                }
                else if(({                (_conditional_value_X91=(is_type_name(type_name,info)));                _conditional_value_X91;                })) {
                    info->p=p_66;
                    info->sline=sline_67;
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj135=type_name,
                    type_name=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0);
                    info->p=p_66;
                    info->sline=sline_67;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    if(({    (_conditional_value_X0=(string_operator_equals(type_name,"__typeof__")&&*info->p==40));    _conditional_value_X0;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        exp_68=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2023, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        __dec_obj136=type_69->mTypeOfNode,
        type_69->mTypeOfNode=(struct sNode*)come_increment_ref_count(exp_68);
        (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0, (void*)0) :0);
        var_name=((void*)0);
        while(({        (_conditional_value_X1=(1));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(*info->p==42));            _conditional_value_X2;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_69->mPointerNum++;
            }
            else if(({            (_conditional_value_X3=(*info->p==37));            _conditional_value_X3;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                type_69->mHeap=(_Bool)1;
            }
            else {
                break;
            }
        }
        attribute=((void*)0);
        if(({        (_conditional_value_X4=(parse_variable_name));        _conditional_value_X4;        })) {
            if(({            (_conditional_value_X5=(*info->p==58));            _conditional_value_X5;            })) {
                __right_value0 = (void*)0;
                __dec_obj137=var_name,
                var_name=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(({            (_conditional_value_X6=(xisalnum(*info->p)||*info->p==95));            _conditional_value_X6;            })) {
                __right_value0 = (void*)0;
                __dec_obj138=var_name,
                var_name=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name=0;
                num_anonymous_var_name++;
                __right_value0 = (void*)0;
                __dec_obj139=var_name,
                var_name=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name));
                __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0);
            }
            if(({            (_conditional_value_X7=(*info->p==58));            _conditional_value_X7;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                node_70=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma;
                __dec_obj140=type_69->mSizeNum,
                type_69->mSizeNum=(struct sNode*)come_increment_ref_count(node_70);
                (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0, (void*)0) :0);
                ((node_70) ? node_70 = come_decrement_ref_count(node_70, ((struct sNode*)node_70)->finalize, ((struct sNode*)node_70)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            __right_value0 = (void*)0;
            attribute2=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(({            (_conditional_value_X8=(string_operator_not_equals(attribute,"")&&string_operator_not_equals(attribute2,"")));            _conditional_value_X8;            })) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj141=type_69->mAttribute,
                type_69->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(attribute," "))),attribute2));
                __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else if(({            (_conditional_value_X9=(string_operator_not_equals(attribute2,"")));            _conditional_value_X9;            })) {
                __dec_obj142=type_69->mAttribute,
                type_69->mAttribute=(char*)come_increment_ref_count(attribute2);
                __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
            }
            (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__112 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2084, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type_69),(char*)come_increment_ref_count(var_name),(_Bool)1))));
        ((exp_68) ? exp_68 = come_decrement_ref_count(exp_68, ((struct sNode*)exp_68)->finalize, ((struct sNode*)exp_68)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__112;
        ((exp_68) ? exp_68 = come_decrement_ref_count(exp_68, ((struct sNode*)exp_68)->finalize, ((struct sNode*)exp_68)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __right_value0 = (void*)0;
    attribute_71=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num=0;
    heap=(_Bool)0;
    refference=(_Bool)0;
    no_refference=(_Bool)0;
    channel=(_Bool)0;
    any_class=(_Bool)0;
    vtable=(_Bool)0;
    while(({    (_conditional_value_X0=(1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(*info->p==42));        _conditional_value_X1;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num++;
        }
        else if(({        (_conditional_value_X2=(*info->p==37));        _conditional_value_X2;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            heap=(_Bool)1;
        }
        else if(({        (_conditional_value_X3=(gComePthread&&*info->p==64));        _conditional_value_X3;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            channel=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name=((void*)0);
    if(({    (_conditional_value_X0=(*info->p==58&&*(info->p+1)!=58&&tuple_));    _conditional_value_X0;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __dec_obj143=tuple_name,
        tuple_name=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(atomic_&&*info->p==41));    _conditional_value_X0;    })) {
        expected_next_character(41,info);
    }
    lambda_flag=(_Bool)0;
    {
        pX=info->p;
        slineX=info->sline;
        if(({        (_conditional_value_X0=(xisalpha(*info->p)||*info->p==95));        _conditional_value_X0;        })) {
            __right_value0 = (void*)0;
            (void)((char*)(__right_value0=parse_word(info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(({            (_conditional_value_X1=(*info->p==40&&info->in_typedef));            _conditional_value_X1;            })) {
                lambda_flag=(_Bool)1;
            }
        }
        info->p=pX;
        info->sline=slineX;
    }
    function_pointer_flag=(_Bool)0;
    pointer_to_array_flag=(_Bool)0;
    {
        p_74=info->p;
        sline_75=info->sline;
        if(({        (_conditional_value_X0=(*info->p==40));        _conditional_value_X0;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(({            (_conditional_value_X1=(*info->p==42||*info->p==94));            _conditional_value_X1;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_flag=(_Bool)1;
                if(({                (_conditional_value_X2=(xisalpha(*info->p)||*info->p==95));                _conditional_value_X2;                })) {
                    __right_value0 = (void*)0;
                    word=(char*)come_increment_ref_count(parse_word(info));
                    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                if(({                (_conditional_value_X3=(*info->p==41));                _conditional_value_X3;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(({                    (_conditional_value_X4=(*info->p==91));                    _conditional_value_X4;                    })) {
                        pointer_to_array_flag=(_Bool)1;
                    }
                    else if(({                    (_conditional_value_X5=(*info->p==40));                    _conditional_value_X5;                    })) {
                        function_pointer_flag=(_Bool)1;
                    }
                }
            }
            else if(({            (_conditional_value_X6=(xisalpha(*info->p)||*info->p==95));            _conditional_value_X6;            })) {
                __right_value0 = (void*)0;
                word_76=(char*)come_increment_ref_count(parse_word(info));
                if(({                (_conditional_value_X7=(*info->p==41));                _conditional_value_X7;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(({                    (_conditional_value_X8=(*info->p==40));                    _conditional_value_X8;                    })) {
                        function_pointer_flag=(_Bool)1;
                    }
                }
                (word_76 = come_decrement_ref_count(word_76, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=p_74;
        info->sline=sline_75;
    }
    var_name_between_brace=(_Bool)0;
    {
        p_77=info->p;
        sline_78=info->sline;
        if(({        (_conditional_value_X0=(*info->p==40));        _conditional_value_X0;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(({            (_conditional_value_X1=(xisalpha(*info->p)||*info->p==95));            _conditional_value_X1;            })) {
                __right_value0 = (void*)0;
                word_79=(char*)come_increment_ref_count(parse_word(info));
                if(({                (_conditional_value_X2=(is_type_name(word_79,info)));                _conditional_value_X2;                })) {
                }
                else if(({                (_conditional_value_X3=(*info->p==41));                _conditional_value_X3;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(({                    (_conditional_value_X4=(*info->p!=40));                    _conditional_value_X4;                    })) {
                        var_name_between_brace=(_Bool)1;
                    }
                }
                (word_79 = come_decrement_ref_count(word_79, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=p_77;
        info->sline=sline_78;
    }
    if(({    (_conditional_value_X0=(anonymous_type&&*info->p==123));    _conditional_value_X0;    })) {
        static int anonymous_num=0;
        if(({        (_conditional_value_X1=(struct_));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_operator_equals(type_name,"")));            _conditional_value_X2;            })) {
                __right_value0 = (void*)0;
                __dec_obj144=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num));
                __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            node_80=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_81=node_compile(node_80,info);
            if(({            (_conditional_value_X3=(!Value_81));            _conditional_value_X3;            })) {
                err_msg(info,"parse_struct is failed");
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__113 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2272, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (attribute_71 = come_decrement_ref_count(attribute_71, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_73 = come_decrement_ref_count(var_name_73, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__113, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__113;
            }
            else {
            }
            pointer_num_82=0;
            while(({            (_conditional_value_X4=(*info->p==42));            _conditional_value_X4;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_82++;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj145=type_72,
            type_72=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2285, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_72->mPointerNum=pointer_num_82;
            ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(({        (_conditional_value_X5=(enum_));        _conditional_value_X5;        })) {
            if(({            (_conditional_value_X6=(string_operator_equals(type_name,"")));            _conditional_value_X6;            })) {
                if(({                (_conditional_value_X7=(!info->no_output_err));                _conditional_value_X7;                })) {
                    __right_value0 = (void*)0;
                    __dec_obj146=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",anonymous_num));
                    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj147=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num));
                    __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            __right_value0 = (void*)0;
            node_83=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name),info));
            if(({            (_conditional_value_X8=(!info->no_output_err));            _conditional_value_X8;            })) {
                Value_84=node_compile(node_83,info);
                if(({                (_conditional_value_X9=(!Value_84));                _conditional_value_X9;                })) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__114 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2304, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    ((node_83) ? node_83 = come_decrement_ref_count(node_83, ((struct sNode*)node_83)->finalize, ((struct sNode*)node_83)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (attribute_71 = come_decrement_ref_count(attribute_71, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_73 = come_decrement_ref_count(var_name_73, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__114, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__114;
                }
                else {
                }
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj148=type_72,
            type_72=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2308, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_83) ? node_83 = come_decrement_ref_count(node_83, ((struct sNode*)node_83)->finalize, ((struct sNode*)node_83)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(({        (_conditional_value_X10=(union_));        _conditional_value_X10;        })) {
            if(({            (_conditional_value_X11=(string_operator_equals(type_name,"")));            _conditional_value_X11;            })) {
                __right_value0 = (void*)0;
                __dec_obj149=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num));
                __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0);
            }
            __right_value0 = (void*)0;
            node_85=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name),info));
            Value_86=node_compile(node_85,info);
            if(({            (_conditional_value_X12=(!Value_86));            _conditional_value_X12;            })) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__115 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2320, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_85) ? node_85 = come_decrement_ref_count(node_85, ((struct sNode*)node_85)->finalize, ((struct sNode*)node_85)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (attribute_71 = come_decrement_ref_count(attribute_71, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_73 = come_decrement_ref_count(var_name_73, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__115, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__115;
            }
            else {
            }
            pointer_num_87=0;
            while(({            (_conditional_value_X13=(*info->p==42));            _conditional_value_X13;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_87++;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj150=type_72,
            type_72=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2334, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj150,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_72->mPointerNum=pointer_num_87;
            ((node_85) ? node_85 = come_decrement_ref_count(node_85, ((struct sNode*)node_85)->finalize, ((struct sNode*)node_85)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            err_msg(info,"unexpected { character");
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__116 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2340, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (attribute_71 = come_decrement_ref_count(attribute_71, (void*)0, (void*)0, 0, 0, (void*)0));
            (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name_73 = come_decrement_ref_count(var_name_73, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__116, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__116;
        }
        __right_value0 = (void*)0;
        attribute_88=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(({        (_conditional_value_X14=(string_operator_not_equals(attribute_88,"")));        _conditional_value_X14;        })) {
            __dec_obj151=type_72->mAttribute,
            type_72->mAttribute=(char*)come_increment_ref_count(attribute_88);
            __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(({        (_conditional_value_X15=(parse_variable_name));        _conditional_value_X15;        })) {
            if(({            (_conditional_value_X16=(var_name_between_brace&&*info->p==40));            _conditional_value_X16;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(({            (_conditional_value_X17=(*info->p==58));            _conditional_value_X17;            })) {
                __right_value0 = (void*)0;
                __dec_obj152=var_name_73,
                var_name_73=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(({            (_conditional_value_X18=(anonymous_name));            _conditional_value_X18;            })) {
                static int num_anonymous_var_name_89=0;
                num_anonymous_var_name_89++;
                __right_value0 = (void*)0;
                __dec_obj153=var_name_73,
                var_name_73=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_89));
                __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(({            (_conditional_value_X19=(xisalnum(*info->p)||*info->p==95));            _conditional_value_X19;            })) {
                __right_value0 = (void*)0;
                __dec_obj154=var_name_73,
                var_name_73=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_90=0;
                num_anonymous_var_name_90++;
                __right_value0 = (void*)0;
                __dec_obj155=var_name_73,
                var_name_73=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_90));
                __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0);
            }
            if(({            (_conditional_value_X20=(var_name_between_brace&&*info->p==41));            _conditional_value_X20;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(({            (_conditional_value_X21=(*info->p==58));            _conditional_value_X21;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_91=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                node_92=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_91;
                __dec_obj156=type_72->mSizeNum,
                type_72->mSizeNum=(struct sNode*)come_increment_ref_count(node_92);
                (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0) :0);
                ((node_92) ? node_92 = come_decrement_ref_count(node_92, ((struct sNode*)node_92)->finalize, ((struct sNode*)node_92)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            __right_value0 = (void*)0;
            attribute2_93=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(({            (_conditional_value_X22=(string_operator_not_equals(attribute_88,"")&&string_operator_not_equals(attribute2_93,"")));            _conditional_value_X22;            })) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj157=type_72->mAttribute,
                type_72->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value1=string_operator_add(attribute_88," "))),attribute2_93));
                __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else if(({            (_conditional_value_X23=(string_operator_not_equals(attribute2_93,"")));            _conditional_value_X23;            })) {
                __dec_obj158=type_72->mAttribute,
                type_72->mAttribute=(char*)come_increment_ref_count(attribute2_93);
                __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0, (void*)0);
            }
            (attribute2_93 = come_decrement_ref_count(attribute2_93, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (attribute_88 = come_decrement_ref_count(attribute_88, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(({    (_conditional_value_X24=(lambda_flag));    _conditional_value_X24;    })) {
        if(({        __right_value0 = (void*)0,         (_conditional_value_X25=(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X25;        })) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj159=result_type,
            result_type=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj159,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            result_type->mClass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,result_type->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(({        (_conditional_value_X26=(list$1char$ph_contained(info->generics_type_names,type_name)));        _conditional_value_X26;        })) {
            for(            ({            (_conditional_value_X27=(i=0));            _conditional_value_X27;            });            ({            (_conditional_value_X28=(i<list$1char$ph_length(info->generics_type_names)));            _conditional_value_X28;            });            ({            (_conditional_value_X29=(i++));            _conditional_value_X29;            })            ){
                if(({                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 (_conditional_value_X30=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i))),type_name)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                _conditional_value_X30;                })) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj160=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2423, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj160,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else if(({        (_conditional_value_X31=(list$1char$ph_contained(info->method_generics_type_names,type_name)));        _conditional_value_X31;        })) {
            for(            ({            (_conditional_value_X32=(i_94=0));            _conditional_value_X32;            });            ({            (_conditional_value_X33=(i_94<list$1char$ph_length(info->method_generics_type_names)));            _conditional_value_X33;            });            ({            (_conditional_value_X34=(i_94++));            _conditional_value_X34;            })            ){
                if(({                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 (_conditional_value_X35=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_94))),type_name)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                _conditional_value_X35;                })) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj161=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2430, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_94)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj162=result_type,
            result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2435, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj162,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        result_type->mAtomic=result_type->mAtomic||atomic_;
        result_type->mThreadLocal=result_type->mThreadLocal||thread_local;
        result_type->mConstant=result_type->mConstant||constant;
        result_type->mImmutable=result_type->mImmutable||immutable_;
        result_type->mTask=result_type->mTask||task_;
        __dec_obj163=result_type->mAlignas,
        result_type->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0) :0);
        result_type->mRegister=register_;
        result_type->mUnsigned=result_type->mUnsigned||unsigned_;
        result_type->mVolatile=volatile_;
        result_type->mRecord=result_type->mRecord||record_;
        result_type->mUniq=result_type->mUniq||uniq_;
        result_type->mStatic=(result_type->mStatic||static_)&&!result_type->mUniq;
        result_type->mExtern=result_type->mExtern||extern_;
        result_type->mInline=result_type->mInline||inline_;
        result_type->mRestrict=result_type->mRestrict||restrict_;
        result_type->mLongLong=result_type->mLongLong||long_long;
        result_type->mLong=result_type->mLong||long_;
        result_type->mShort=result_type->mShort||short_;
        result_type->mPointerNum=pointer_num;
        result_type->mHeap=result_type->mHeap||heap;
        result_type->mChannel=result_type->mChannel||channel;
        __right_value0 = (void*)0;
        __dec_obj164=var_name_73,
        var_name_73=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        multiple_assign_var6=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args=multiple_assign_var6->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj165=type_72,
        type_72=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2464, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj165,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj166=type_72->mResultType,
        type_72->mResultType=(struct sType*)come_increment_ref_count(result_type);
        come_call_finalizer(sType_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj167=type_72->mParamTypes,
        type_72->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj167,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj168=type_72->mParamNames,
        type_72->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj168,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_72->mVarArgs=var_args;
        type_72->mExtern=extern_;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_conditional_value_X36=(pointer_to_array_flag));    _conditional_value_X36;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        array_pointer_num=0;
        while(({        (_conditional_value_X37=(*info->p==42||*info->p==94));        _conditional_value_X37;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            array_pointer_num++;
        }
        skip_pointer_attribute(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj169=type_72,
        type_72=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2488, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj169,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_72->mConstant=type_72->mConstant||constant;
        type_72->mImmutable=type_72->mImmutable||immutable_;
        type_72->mTask=type_72->mTask||task_;
        type_72->mAtomic=type_72->mAtomic||atomic_;
        type_72->mThreadLocal=type_72->mThreadLocal||thread_local;
        __dec_obj170=type_72->mAlignas,
        type_72->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0, (void*)0) :0);
        type_72->mRegister=register_;
        type_72->mUnsigned=type_72->mUnsigned||unsigned_;
        type_72->mVolatile=volatile_;
        type_72->mUniq=type_72->mUniq||uniq_;
        type_72->mStatic=(type_72->mStatic||static_)&&!type_72->mUniq;
        type_72->mRecord=type_72->mRecord||record_;
        type_72->mExtern=type_72->mExtern||extern_;
        type_72->mInline=type_72->mInline||inline_;
        type_72->mRestrict=type_72->mRestrict||restrict_;
        type_72->mLongLong=type_72->mLongLong||long_long;
        type_72->mLong=type_72->mLong||long_;
        type_72->mShort=type_72->mShort||short_;
        type_72->mPointerNum+=pointer_num;
        type_72->mHeap=type_72->mHeap||heap;
        type_72->mChannel=type_72->mChannel||channel;
        __dec_obj171=type_72->mTupleName,
        type_72->mTupleName=(char*)come_increment_ref_count(tuple_name);
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj172=var_name_73,
        var_name_73=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0, (void*)0);
        expected_next_character(41,info);
        while(({        (_conditional_value_X38=(*info->p==91));        _conditional_value_X38;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node_95=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_add(type_72->mArrayNum,(struct sNode*)come_increment_ref_count(node_95));
            if(({            (_conditional_value_X39=(*info->p==93));            _conditional_value_X39;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            ((node_95) ? node_95 = come_decrement_ref_count(node_95, ((struct sNode*)node_95)->finalize, ((struct sNode*)node_95)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        type_72->mArrayPointerNum=array_pointer_num;
    }
    else if(({    (_conditional_value_X40=(function_pointer_flag));    _conditional_value_X40;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num=0;
        while(({        (_conditional_value_X41=(*info->p==42||*info->p==94));        _conditional_value_X41;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num++;
        }
        skip_pointer_attribute(info);
        if(({        __right_value0 = (void*)0,         (_conditional_value_X42=(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X42;        })) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj173=result_type_96,
            result_type_96=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj173,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            result_type_96->mClass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_96->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else if(({        (_conditional_value_X43=(list$1char$ph_contained(info->generics_type_names,type_name)));        _conditional_value_X43;        })) {
            for(            ({            (_conditional_value_X44=(i_97=0));            _conditional_value_X44;            });            ({            (_conditional_value_X45=(i_97<list$1char$ph_length(info->generics_type_names)));            _conditional_value_X45;            });            ({            (_conditional_value_X46=(i_97++));            _conditional_value_X46;            })            ){
                if(({                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 (_conditional_value_X47=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i_97))),type_name)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                _conditional_value_X47;                })) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj174=result_type_96,
                    result_type_96=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2560, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_97)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj174,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else if(({        (_conditional_value_X48=(list$1char$ph_contained(info->method_generics_type_names,type_name)));        _conditional_value_X48;        })) {
            for(            ({            (_conditional_value_X49=(i_98=0));            _conditional_value_X49;            });            ({            (_conditional_value_X50=(i_98<list$1char$ph_length(info->method_generics_type_names)));            _conditional_value_X50;            });            ({            (_conditional_value_X51=(i_98++));            _conditional_value_X51;            })            ){
                if(({                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 (_conditional_value_X52=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_98))),type_name)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                _conditional_value_X52;                })) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj175=result_type_96,
                    result_type_96=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2567, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_98)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj175,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj176=result_type_96,
            result_type_96=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2572, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj176,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        result_type_96->mConstant=result_type_96->mConstant||constant;
        result_type_96->mImmutable=result_type_96->mImmutable||immutable_;
        result_type_96->mTask=result_type_96->mTask||task_;
        result_type_96->mAtomic=result_type_96->mAtomic||atomic_;
        result_type_96->mThreadLocal=result_type_96->mThreadLocal||thread_local;
        __dec_obj177=result_type_96->mAlignas,
        result_type_96->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0, (void*)0) :0);
        result_type_96->mRegister=register_;
        result_type_96->mUnsigned=result_type_96->mUnsigned||unsigned_;
        result_type_96->mVolatile=volatile_;
        result_type_96->mUniq=result_type_96->mUniq||uniq_;
        result_type_96->mStatic=(result_type_96->mStatic||static_)&&!result_type_96->mUniq;
        result_type_96->mRecord=result_type_96->mRecord||record_;
        result_type_96->mExtern=result_type_96->mExtern||extern_;
        result_type_96->mInline=result_type_96->mInline||inline_;
        result_type_96->mRestrict=result_type_96->mRestrict||restrict_;
        result_type_96->mLongLong=result_type_96->mLongLong||long_long;
        result_type_96->mLong=result_type_96->mLong||long_;
        result_type_96->mShort=result_type_96->mShort||short_;
        result_type_96->mPointerNum+=pointer_num;
        result_type_96->mHeap=result_type_96->mHeap||heap;
        result_type_96->mChannel=result_type_96->mChannel||channel;
        if(({        (_conditional_value_X53=(xisalnum(*info->p)||*info->p==95));        _conditional_value_X53;        })) {
            __right_value0 = (void*)0;
            __dec_obj178=var_name_73,
            var_name_73=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0, (void*)0);
            if(({            (_conditional_value_X54=(*info->p==40));            _conditional_value_X54;            })) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__121 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2600, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(result_type_96),(char*)come_increment_ref_count(var_name_73),(_Bool)0))));
                come_call_finalizer(sType_finalize, result_type_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (attribute_71 = come_decrement_ref_count(attribute_71, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_73 = come_decrement_ref_count(var_name_73, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__121, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__121;
            }
        }
        else {
            static int num_anonymous_var_name_99=0;
            num_anonymous_var_name_99++;
            __right_value0 = (void*)0;
            __dec_obj179=var_name_73,
            var_name_73=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_99));
            __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj180=type_72,
        type_72=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2609, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj180,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        while(({        (_conditional_value_X55=(*info->p==91));        _conditional_value_X55;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node_100=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_add(type_72->mArrayNum,(struct sNode*)come_increment_ref_count(node_100));
            if(({            (_conditional_value_X56=(*info->p==93));            _conditional_value_X56;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            ((node_100) ? node_100 = come_decrement_ref_count(node_100, ((struct sNode*)node_100)->finalize, ((struct sNode*)node_100)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        multiple_assign_var7=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types_101=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var7->v1);
        param_names_102=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var7->v2);
        param_default_parametors_103=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var7->v3);
        var_args_104=multiple_assign_var7->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj181=type_72->mResultType,
        type_72->mResultType=(struct sType*)come_increment_ref_count(sType_clone(result_type_96));
        come_call_finalizer(sType_finalize, __dec_obj181,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj182=type_72->mParamTypes,
        type_72->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_101);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj182,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj183=type_72->mParamNames,
        type_72->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_102);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj183,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_72->mVarArgs=var_args_104;
        type_72->mExtern=extern_;
        type_72->mFunctionPointerNum=function_pointer_num;
        come_call_finalizer(sType_finalize, result_type_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(({        __right_value0 = (void*)0,         (_conditional_value_X57=(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X57;        })) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj184=type_72,
            type_72=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj184,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            type_72->mTypedefOriginalPointerNum=type_72->mPointerNum;
            __right_value0 = (void*)0;
            type_72->mClass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_72->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            __dec_obj185=type_72->mOriginalTypeName,
            type_72->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name));
            __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0,0, (void*)0);
            type_72->mOriginalTypeNamePointerNum=pointer_num;
            type_72->mOriginalTypeNameHeap=heap;
            type_72->mConstant=type_72->mConstant||constant;
            type_72->mImmutable=type_72->mImmutable||immutable_;
            type_72->mTask=type_72->mTask||task_;
            type_72->mAtomic=type_72->mAtomic||atomic_;
            type_72->mThreadLocal=type_72->mThreadLocal||thread_local;
            __dec_obj186=type_72->mAlignas,
            type_72->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0) :0);
            type_72->mRegister=register_;
            type_72->mUnsigned=type_72->mUnsigned||unsigned_;
            type_72->mVolatile=volatile_;
            type_72->mUniq=type_72->mUniq||uniq_;
            type_72->mStatic=(type_72->mStatic||static_)&&!type_72->mUniq;
            type_72->mRecord=type_72->mRecord||record_;
            type_72->mExtern=type_72->mExtern||extern_;
            type_72->mInline=type_72->mInline||inline_;
            type_72->mRestrict=type_72->mRestrict||restrict_;
            type_72->mLongLong=type_72->mLongLong||long_long;
            type_72->mLong=type_72->mLong||long_;
            type_72->mShort=type_72->mShort||short_;
            type_72->mPointerNum+=pointer_num;
            type_72->mHeap=type_72->mHeap||heap;
            type_72->mChannel=type_72->mChannel||channel;
            __dec_obj187=type_72->mTupleName,
            type_72->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X58=(list$1char$ph_contained(info->generics_type_names,type_name)));        _conditional_value_X58;        })) {
            for(            ({            (_conditional_value_X59=(i_105=0));            _conditional_value_X59;            });            ({            (_conditional_value_X60=(i_105<list$1char$ph_length(info->generics_type_names)));            _conditional_value_X60;            });            ({            (_conditional_value_X61=(i_105++));            _conditional_value_X61;            })            ){
                if(({                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 (_conditional_value_X62=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i_105))),type_name)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                _conditional_value_X62;                })) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj188=type_72,
                    type_72=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2746, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_105)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj188,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_72->mConstant=type_72->mConstant||constant;
            type_72->mImmutable=type_72->mImmutable||immutable_;
            type_72->mTask=type_72->mTask||task_;
            type_72->mAtomic=type_72->mAtomic||atomic_;
            type_72->mThreadLocal=type_72->mThreadLocal||thread_local;
            __dec_obj189=type_72->mAlignas,
            type_72->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0, (void*)0) :0);
            type_72->mRegister=register_;
            type_72->mUnsigned=type_72->mUnsigned||unsigned_;
            type_72->mVolatile=volatile_;
            type_72->mUniq=type_72->mUniq||uniq_;
            type_72->mStatic=(type_72->mStatic||static_)&&!type_72->mUniq;
            type_72->mRecord=type_72->mRecord||record_;
            type_72->mExtern=type_72->mExtern||extern_;
            type_72->mInline=type_72->mInline||inline_;
            type_72->mRestrict=type_72->mRestrict||restrict_;
            type_72->mLongLong=type_72->mLongLong||long_long;
            type_72->mLong=type_72->mLong||long_;
            type_72->mShort=type_72->mShort||short_;
            type_72->mPointerNum+=pointer_num;
            type_72->mHeap=type_72->mHeap||heap;
            type_72->mChannel=type_72->mChannel||channel;
            __dec_obj190=type_72->mTupleName,
            type_72->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X63=(list$1char$ph_contained(info->method_generics_type_names,type_name)));        _conditional_value_X63;        })) {
            for(            ({            (_conditional_value_X64=(i_106=0));            _conditional_value_X64;            });            ({            (_conditional_value_X65=(i_106<list$1char$ph_length(info->method_generics_type_names)));            _conditional_value_X65;            });            ({            (_conditional_value_X66=(i_106++));            _conditional_value_X66;            })            ){
                if(({                __right_value0 = (void*)0,                 __right_value1 = (void*)0,                 (_conditional_value_X67=(string_operator_equals(((char*)(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_106))),type_name)));                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                _conditional_value_X67;                })) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj191=type_72,
                    type_72=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2776, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_106)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_72->mConstant=type_72->mConstant||constant;
            type_72->mImmutable=type_72->mImmutable||immutable_;
            type_72->mTask=type_72->mTask||task_;
            type_72->mAtomic=type_72->mAtomic||atomic_;
            type_72->mThreadLocal=type_72->mThreadLocal||thread_local;
            __dec_obj192=type_72->mAlignas,
            type_72->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0, (void*)0) :0);
            type_72->mRegister=register_;
            type_72->mUnsigned=type_72->mUnsigned||unsigned_;
            type_72->mVolatile=volatile_;
            type_72->mUniq=type_72->mUniq||uniq_;
            type_72->mStatic=(type_72->mStatic||static_)&&!type_72->mUniq;
            type_72->mRecord=type_72->mRecord||record_;
            type_72->mExtern=type_72->mExtern||extern_;
            type_72->mInline=type_72->mInline||inline_;
            type_72->mRestrict=type_72->mRestrict||restrict_;
            type_72->mLongLong=type_72->mLongLong||long_long;
            type_72->mLong=type_72->mLong||long_;
            type_72->mShort=type_72->mShort||short_;
            type_72->mPointerNum+=pointer_num;
            type_72->mHeap=type_72->mHeap||heap;
            type_72->mChannel=type_72->mChannel||channel;
            __dec_obj193=type_72->mTupleName,
            type_72->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(({        (_conditional_value_X68=(*info->p==60));        _conditional_value_X68;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            if(({            __right_value0 = (void*)0,             __right_value1 = (void*)0,             __right_value2 = (void*)0,             (_conditional_value_X69=(((struct sClass*)(__right_value2=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value1=__builtin_string(type_name))))))==((void*)0)));            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sClass_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X69;            })) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__122 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2809, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (attribute_71 = come_decrement_ref_count(attribute_71, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_73 = come_decrement_ref_count(var_name_73, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__122, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__122;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj194=type_72,
            type_72=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2812, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj194,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            while(({            (_conditional_value_X70=((_Bool)1));            _conditional_value_X70;            })) {
                __right_value0 = (void*)0;
                multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                var_name_107=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_108=multiple_assign_var8->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(({                (_conditional_value_X71=(!err_108));                _conditional_value_X71;                })) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__123 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2818, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_107 = come_decrement_ref_count(var_name_107, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (attribute_71 = come_decrement_ref_count(attribute_71, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_73 = come_decrement_ref_count(var_name_73, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__123, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__123;
                }
                list$1sType$ph_push_back(type_72->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type));
                if(({                (_conditional_value_X72=(*info->p==44));                _conditional_value_X72;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(({                (_conditional_value_X73=(*info->p==62));                _conditional_value_X73;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_107 = come_decrement_ref_count(var_name_107, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)",*info->p,*(info->p+1),*(info->p+2));
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__124 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2835, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_107 = come_decrement_ref_count(var_name_107, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (attribute_71 = come_decrement_ref_count(attribute_71, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_73 = come_decrement_ref_count(var_name_73, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__124, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__124;
                }
                come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_107 = come_decrement_ref_count(var_name_107, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(({            (_conditional_value_X74=(is_contained_generics_class(type_72,info)));            _conditional_value_X74;            })) {
                __right_value0 = (void*)0;
                __dec_obj195=type_72,
                type_72=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_72),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj195,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(({                (_conditional_value_X75=(!output_generics_struct((struct sType*)come_increment_ref_count(type_72),(struct sType*)come_increment_ref_count(type_72),info)));                _conditional_value_X75;                })) {
                    __right_value0 = (void*)0;
                    new_name=(char*)come_increment_ref_count(create_generics_name(type_72,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name);
                    exit(7);
                    (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            type_72->mConstant=type_72->mConstant||constant;
            type_72->mImmutable=type_72->mImmutable||immutable_;
            type_72->mTask=type_72->mTask||task_;
            type_72->mAtomic=type_72->mAtomic||atomic_;
            type_72->mThreadLocal=type_72->mThreadLocal||thread_local;
            __dec_obj196=type_72->mAlignas,
            type_72->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0, (void*)0) :0);
            type_72->mRegister=register_;
            type_72->mUnsigned=type_72->mUnsigned||unsigned_;
            type_72->mVolatile=volatile_;
            type_72->mUniq=type_72->mUniq||uniq_;
            type_72->mStatic=(type_72->mStatic||static_)&&!type_72->mUniq;
            type_72->mRecord=type_72->mRecord||record_;
            type_72->mExtern=type_72->mExtern||extern_;
            type_72->mInline=type_72->mInline||inline_;
            type_72->mRestrict=type_72->mRestrict||restrict_;
            type_72->mLongLong=type_72->mLongLong||long_long;
            type_72->mLong=type_72->mLong||long_;
            type_72->mShort=type_72->mShort||short_;
            type_72->mPointerNum+=pointer_num;
            type_72->mHeap=type_72->mHeap||heap;
            type_72->mChannel=type_72->mChannel||channel;
            __dec_obj197=type_72->mTupleName,
            type_72->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj198=type_name,
            type_name=(char*)come_increment_ref_count(type_72->mClass->mName);
            __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            if(({            (_conditional_value_X76=(struct_));            _conditional_value_X76;            })) {
                __right_value0 = (void*)0;
                klass=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_name)));
                come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(({                (_conditional_value_X77=(klass==((void*)0)&&*info->p!=60));                _conditional_value_X77;                })) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "05type.c", 2881, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
                }
            }
            if(({            (_conditional_value_X78=(union_));            _conditional_value_X78;            })) {
                __right_value0 = (void*)0;
                klass_118=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_name)));
                come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(({                (_conditional_value_X79=(klass_118==((void*)0)&&*info->p!=60));                _conditional_value_X79;                })) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "05type.c", 2888, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
                }
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj199=type_72,
            type_72=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2892, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_72->mConstant=type_72->mConstant||constant;
            type_72->mImmutable=type_72->mImmutable||immutable_;
            type_72->mTask=type_72->mTask||task_;
            type_72->mAtomic=type_72->mAtomic||atomic_;
            type_72->mThreadLocal=type_72->mThreadLocal||thread_local;
            __dec_obj200=type_72->mAlignas,
            type_72->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj200 ? __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0, (void*)0) :0);
            type_72->mRegister=register_;
            type_72->mUnsigned=type_72->mUnsigned||unsigned_;
            type_72->mVolatile=volatile_;
            type_72->mUniq=type_72->mUniq||uniq_;
            type_72->mStatic=(type_72->mStatic||static_)&&!type_72->mUniq;
            type_72->mRecord=type_72->mRecord||record_;
            type_72->mExtern=type_72->mExtern||extern_;
            type_72->mInline=type_72->mInline||inline_;
            type_72->mRestrict=type_72->mRestrict||restrict_;
            type_72->mLongLong=type_72->mLongLong||long_long;
            type_72->mLong=type_72->mLong||long_;
            type_72->mShort=type_72->mShort||short_;
            type_72->mPointerNum+=pointer_num;
            type_72->mHeap=type_72->mHeap||heap;
            type_72->mChannel=type_72->mChannel||channel;
            __dec_obj201=type_72->mTupleName,
            type_72->mTupleName=(char*)come_increment_ref_count(tuple_name);
            __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(({        (_conditional_value_X80=(1));        _conditional_value_X80;        })) {
            if(({            (_conditional_value_X81=(*info->p==42));            _conditional_value_X81;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_72->mPointerNum++;
                if(({                (_conditional_value_X82=(type_72->mNoSolvedGenericsType));                _conditional_value_X82;                })) {
                    type_72->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(({            (_conditional_value_X83=(*info->p==37));            _conditional_value_X83;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                type_72->mHeap=(_Bool)1;
                if(({                (_conditional_value_X84=(type_72->mNoSolvedGenericsType));                _conditional_value_X84;                })) {
                    type_72->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(({            (_conditional_value_X85=(*info->p==38));            _conditional_value_X85;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                type_72->mNoHeap=(_Bool)1;
                if(({                (_conditional_value_X86=(type_72->mNoSolvedGenericsType));                _conditional_value_X86;                })) {
                    type_72->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(({            (_conditional_value_X87=(*info->p==63));            _conditional_value_X87;            })) {
                info->p++;
                if(({                (_conditional_value_X88=(*info->p==63));                _conditional_value_X88;                })) {
                    info->p++;
                    type_72->mGuardValue=(_Bool)1;
                }
                else {
                    type_72->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(({            (_conditional_value_X89=(*info->p==96));            _conditional_value_X89;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                type_72->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(({        (_conditional_value_X90=(1));        _conditional_value_X90;        })) {
            if(({            (_conditional_value_X91=(*info->p==42));            _conditional_value_X91;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_72->mPointerNum++;
                if(({                (_conditional_value_X92=(type_72->mNoSolvedGenericsType));                _conditional_value_X92;                })) {
                    type_72->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(({            (_conditional_value_X93=(*info->p==37));            _conditional_value_X93;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                type_72->mHeap=(_Bool)1;
                if(({                (_conditional_value_X94=(type_72->mNoSolvedGenericsType));                _conditional_value_X94;                })) {
                    type_72->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(({            (_conditional_value_X95=(gComePthread&&*info->p==64));            _conditional_value_X95;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                type_72->mChannel=(_Bool)1;
                if(({                (_conditional_value_X96=(type_72->mNoSolvedGenericsType));                _conditional_value_X96;                })) {
                    type_72->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(({        (_conditional_value_X97=(parse_multiple_type&&*info->p==44&&!info->in_offsetof));        _conditional_value_X97;        })) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 3014, "struct list$1sType$ph*"))));
            __right_value0 = (void*)0;
            list$1sType$ph_push_back(types,(struct sType*)come_increment_ref_count(sType_clone(type_72)));
            while(({            (_conditional_value_X98=(*info->p==44));            _conditional_value_X98;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var9=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_119=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_120=multiple_assign_var9->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(({                (_conditional_value_X99=(!err_120));                _conditional_value_X99;                })) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__140 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 3025, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_119 = come_decrement_ref_count(name_119, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (attribute_71 = come_decrement_ref_count(attribute_71, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_73 = come_decrement_ref_count(var_name_73, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__140, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__140;
                }
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(types,(struct sType*)come_increment_ref_count(sType_clone(type2)));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_119 = come_decrement_ref_count(name_119, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(({            (_conditional_value_X100=(*info->p==41));            _conditional_value_X100;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples=list$1sType$ph_length(types);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj202=type_72,
            type_72=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 3038, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",num_tuples)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj202,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_72->mPointerNum++;
            type_72->mHeap=(_Bool)1;
            for(            ({            (_conditional_value_X101=(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(types),it=list$1sType$ph_begin(o2_saved)));            _conditional_value_X101;            });            ({            (_conditional_value_X102=(!list$1sType$ph_end(o2_saved)));            _conditional_value_X102;            });            ({            (_conditional_value_X103=(it=list$1sType$ph_next(o2_saved)));            _conditional_value_X103;            })            ){
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(type_72->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value0=sType_clone(it))))));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            while(({            (_conditional_value_X104=(1));            _conditional_value_X104;            })) {
                if(({                (_conditional_value_X105=(*info->p==42));                _conditional_value_X105;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_72->mPointerNum++;
                    if(({                    (_conditional_value_X106=(type_72->mNoSolvedGenericsType));                    _conditional_value_X106;                    })) {
                        type_72->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(({                (_conditional_value_X107=(*info->p==37));                _conditional_value_X107;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_72->mHeap=(_Bool)1;
                    if(({                    (_conditional_value_X108=(type_72->mNoSolvedGenericsType));                    _conditional_value_X108;                    })) {
                        type_72->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(({                (_conditional_value_X109=(gComePthread&&*info->p==64));                _conditional_value_X109;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_72->mChannel=(_Bool)1;
                    if(({                    (_conditional_value_X110=(type_72->mNoSolvedGenericsType));                    _conditional_value_X110;                    })) {
                        type_72->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(({            (_conditional_value_X111=(is_contained_generics_class(type_72,info)));            _conditional_value_X111;            })) {
                __right_value0 = (void*)0;
                __dec_obj203=type_72,
                type_72=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_72),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj203,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(({                (_conditional_value_X112=(!output_generics_struct((struct sType*)come_increment_ref_count(type_72),(struct sType*)come_increment_ref_count(type_72),info)));                _conditional_value_X112;                })) {
                    __right_value0 = (void*)0;
                    new_name_121=(char*)come_increment_ref_count(create_generics_name(type_72,info));
                    printf("output generics is failed(%s)\n",new_name_121);
                    exit(9);
                    (new_name_121 = come_decrement_ref_count(new_name_121, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            type_72->mMultipleTypes=(_Bool)1;
            __dec_obj204=type_name,
            type_name=(char*)come_increment_ref_count(type_72->mClass->mName);
            __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __right_value0 = (void*)0;
        attribute_122=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(({        (_conditional_value_X113=(string_operator_not_equals(attribute_122,"")));        _conditional_value_X113;        })) {
            __dec_obj205=type_72->mAttribute,
            type_72->mAttribute=(char*)come_increment_ref_count(attribute_122);
            __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(({        (_conditional_value_X114=(parse_variable_name));        _conditional_value_X114;        })) {
            if(({            (_conditional_value_X115=(var_name_between_brace&&*info->p==40));            _conditional_value_X115;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(({            (_conditional_value_X116=(*info->p==58));            _conditional_value_X116;            })) {
                __right_value0 = (void*)0;
                __dec_obj206=var_name_73,
                var_name_73=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(({            (_conditional_value_X117=(anonymous_name));            _conditional_value_X117;            })) {
                static int num_anonymous_var_name_123=0;
                num_anonymous_var_name_123++;
                __right_value0 = (void*)0;
                __dec_obj207=var_name_73,
                var_name_73=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_123));
                __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(({            (_conditional_value_X118=(xisalnum(*info->p)||*info->p==95));            _conditional_value_X118;            })) {
                __right_value0 = (void*)0;
                __dec_obj208=var_name_73,
                var_name_73=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_124=0;
                num_anonymous_var_name_124++;
                __right_value0 = (void*)0;
                __dec_obj209=var_name_73,
                var_name_73=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_124));
                __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0,0, (void*)0);
            }
            if(({            (_conditional_value_X119=(var_name_between_brace&&*info->p==41));            _conditional_value_X119;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(({            (_conditional_value_X120=(*info->p==58));            _conditional_value_X120;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_125=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                node_126=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_125;
                __dec_obj210=type_72->mSizeNum,
                type_72->mSizeNum=(struct sNode*)come_increment_ref_count(node_126);
                (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0, (void*)0) :0);
                ((node_126) ? node_126 = come_decrement_ref_count(node_126, ((struct sNode*)node_126)->finalize, ((struct sNode*)node_126)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            __right_value0 = (void*)0;
            attribute2_127=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(({            (_conditional_value_X121=(string_operator_not_equals(attribute_122,"")&&string_operator_not_equals(attribute2_127,"")));            _conditional_value_X121;            })) {
                __dec_obj211=type_72->mAttribute,
                type_72->mAttribute=(char*)come_increment_ref_count(attribute_122);
                __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj212=type_72->mVarAttribute,
                type_72->mVarAttribute=(char*)come_increment_ref_count(attribute2_127);
                __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(({            (_conditional_value_X122=(string_operator_not_equals(attribute2_127,"")));            _conditional_value_X122;            })) {
                __dec_obj213=type_72->mVarAttribute,
                type_72->mVarAttribute=(char*)come_increment_ref_count(attribute2_127);
                __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0,0, (void*)0);
            }
            (attribute2_127 = come_decrement_ref_count(attribute2_127, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (attribute_122 = come_decrement_ref_count(attribute_122, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    parse_sharp_v5(info);
    while(({    (_conditional_value_X0=(*info->p==91));    _conditional_value_X0;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(({        (_conditional_value_X1=(*info->p==93));        _conditional_value_X1;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            type_72->mArrayPointerType=(_Bool)1;
            type_72->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        node_128=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph_push_back(type_72->mArrayNum,(struct sNode*)come_increment_ref_count(node_128));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        ((node_128) ? node_128 = come_decrement_ref_count(node_128, ((struct sNode*)node_128)->finalize, ((struct sNode*)node_128)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __right_value0 = (void*)0;
    multiple_assign_var10=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    asm_name=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    attribute2_129=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(({    (_conditional_value_X0=(string_operator_not_equals(attribute2_129,"")));    _conditional_value_X0;    })) {
        __dec_obj214=type_72->mAttribute,
        type_72->mAttribute=(char*)come_increment_ref_count(attribute2_129);
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __dec_obj215=type_72->mAsmName,
    type_72->mAsmName=(char*)come_increment_ref_count(asm_name);
    __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0,0, (void*)0);
    parse_sharp_v5(info);
    if(({    (_conditional_value_X0=(type_72->mChannel));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        type_before=(struct sType*)come_increment_ref_count(sType_clone(type_72));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj216=type_72,
        type_72=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 3192, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj216,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __dec_obj217=type_72->mArrayNum,
        type_72->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1__[0]=((struct sNode*)(__right_value1=create_int_node((char*)come_increment_ref_count(xsprintf("2")),info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05type.c", 3193, "struct list$1sNode$ph")),1,__list_values1__)));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj217,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        __dec_obj218=type_72->mChannelType,
        type_72->mChannelType=(struct sType*)come_increment_ref_count(type_before);
        come_call_finalizer(sType_finalize, __dec_obj218,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_72->mChannel=(_Bool)1;
        come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(string_operator_not_equals(attribute_71,"")));    _conditional_value_X0;    })) {
        __dec_obj219=type_72->mAttribute,
        type_72->mAttribute=(char*)come_increment_ref_count(attribute_71);
        __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__142 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value1=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 3202, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type_72),(char*)come_increment_ref_count(var_name_73),(_Bool)1))));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (attribute_71 = come_decrement_ref_count(attribute_71, (void*)0, (void*)0, 0, 0, (void*)0));
    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name_73 = come_decrement_ref_count(var_name_73, (void*)0, (void*)0, 0, 0, (void*)0));
    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute2_129 = come_decrement_ref_count(attribute2_129, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__142, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__142;
}

static int list$1char$ph_length(struct list$1char$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        return 0;
    }
    return self->len;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
_Bool _conditional_value_X0;
struct list_item$1char$ph* it;
int i;
_Bool _conditional_value_X1;
char* __result_obj__117;
char* default_value;
char* __result_obj__118;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(position<0));    _conditional_value_X0;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(position==i));        _conditional_value_X1;        })) {
            __result_obj__117 = (char*)come_increment_ref_count(it->item);
            (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__117;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__118 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__118;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
_Bool _conditional_value_X0;
struct list_item$1char$ph* it;
int i;
_Bool _conditional_value_X1;
char* __result_obj__119;
char* default_value;
char* __result_obj__120;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(position<0));    _conditional_value_X0;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(position==i));        _conditional_value_X1;        })) {
            __result_obj__119 = (char*)come_increment_ref_count(it->item);
            (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__119;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__120 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__120;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
_Bool _conditional_value_X0;
unsigned int hash;
unsigned int it;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
_Bool _conditional_value_X5;
_Bool _conditional_value_X6;
_Bool _conditional_value_X7;
_Bool _conditional_value_X8;
_Bool same_key_exist;
char* it2;
struct map$2char$phsClass$ph* __result_obj__139;
    if(({    (_conditional_value_X0=(self->len*10>=self->size));    _conditional_value_X0;    })) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                if(({                (_conditional_value_X3=(1));                _conditional_value_X3;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_conditional_value_X4=(1));                _conditional_value_X4;                })) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_conditional_value_X5=(it>=self->size));            _conditional_value_X5;            })) {
                it=0;
            }
            else if(({            (_conditional_value_X6=(it==hash));            _conditional_value_X6;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_conditional_value_X7=(1));            _conditional_value_X7;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_conditional_value_X8=(1));            _conditional_value_X8;            })) {
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
    for(    ({    (_conditional_value_X0=(it2=list$1char$ph_begin(self->key_list)));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(!list$1char$ph_end(self->key_list)));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(it2=list$1char$ph_next(self->key_list)));    _conditional_value_X2;    })    ){
        if(({        (_conditional_value_X3=(string_equals(it2,key)));        _conditional_value_X3;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_conditional_value_X0=(!same_key_exist));    _conditional_value_X0;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__139 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__139;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size;
void* __right_value0 = (void*)0;
char** keys;
struct sClass** items;
_Bool* item_existance;
int len;
char* it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sClass* default_value;
struct sClass* it2;
unsigned int hash;
int n;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
_Bool _conditional_value_X5;
_Bool _conditional_value_X6;
struct sClass* default_value_111;
default_value = (void*)0;
default_value_111 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 7568, "char**"))));
    __right_value0 = (void*)0;
    items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value0=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size)), "/usr/local/include/comelang.h", 7569, "struct sClass**"))));
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 7570, "_Bool*"))));
    len=0;
    for(    ({    (_conditional_value_X0=(it=map$2char$phsClass$ph_begin(self)));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(!map$2char$phsClass$ph_end(self)));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(it=map$2char$phsClass$ph_next(self)));    _conditional_value_X2;    })    ){
        memset(&default_value,0,sizeof(struct sClass*));
        __right_value0 = (void*)0;
        it2=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value))));
        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_conditional_value_X3=((_Bool)1));        _conditional_value_X3;        })) {
            if(({            (_conditional_value_X4=(item_existance[n]));            _conditional_value_X4;            })) {
                n++;
                if(({                (_conditional_value_X5=(n>=size));                _conditional_value_X5;                })) {
                    n=0;
                }
                else if(({                (_conditional_value_X6=(n==hash));                _conditional_value_X6;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                __right_value0 = (void*)0;
                items[n]=((struct sClass*)(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value_111))));
                come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sClass_finalize, default_value_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
_Bool _conditional_value_X0;
char* result;
char* __result_obj__125;
char* __result_obj__126;
char* result_109;
char* __result_obj__127;
result = (void*)0;
result_109 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__125 = result;
        return __result_obj__125;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_conditional_value_X0=(self->key_list->it));    _conditional_value_X0;    })) {
        __result_obj__126 = self->key_list->it->item;
        return __result_obj__126;
    }
    memset(&result_109,0,sizeof(char*));
    __result_obj__127 = result_109;
    return __result_obj__127;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
_Bool _conditional_value_X0;
char* result;
char* __result_obj__128;
char* __result_obj__129;
char* result_110;
char* __result_obj__130;
result = (void*)0;
result_110 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)||self->key_list->it==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__128 = result;
        return __result_obj__128;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_conditional_value_X0=(self->key_list->it));    _conditional_value_X0;    })) {
        __result_obj__129 = self->key_list->it->item;
        return __result_obj__129;
    }
    memset(&result_110,0,sizeof(char*));
    __result_obj__130 = result_110;
    return __result_obj__130;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash;
unsigned int it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sClass* __result_obj__131;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sClass* __result_obj__132;
struct sClass* __result_obj__133;
struct sClass* __result_obj__134;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                __result_obj__131 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__131, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__131;
            }
            it++;
            if(({            (_conditional_value_X3=(it>=self->size));            _conditional_value_X3;            })) {
                it=0;
            }
            else if(({            (_conditional_value_X4=(it==hash));            _conditional_value_X4;            })) {
                __result_obj__132 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__132, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__132;
            }
        }
        else {
            __result_obj__133 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__133, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__133;
        }
    }
    __result_obj__134 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__134, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__134;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
struct list$1char$ph* __result_obj__138;
    it2=0;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(string_equals(it->item,item)));        _conditional_value_X1;        })) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__138 = self;
    return __result_obj__138;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
_Bool _conditional_value_X0;
int tmp;
struct list$1char$ph* __result_obj__135;
_Bool _conditional_value_X1;
struct list_item$1char$ph* it;
int i;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
struct list_item$1char$ph* prev_it;
_Bool _conditional_value_X4;
_Bool _conditional_value_X5;
struct list_item$1char$ph* it_112;
int i_113;
_Bool _conditional_value_X6;
_Bool _conditional_value_X7;
_Bool _conditional_value_X8;
struct list_item$1char$ph* prev_it_114;
struct list_item$1char$ph* it_115;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_116;
_Bool _conditional_value_X9;
_Bool _conditional_value_X10;
_Bool _conditional_value_X11;
_Bool _conditional_value_X12;
struct list_item$1char$ph* prev_it_117;
_Bool _conditional_value_X13;
_Bool _conditional_value_X14;
struct list$1char$ph* __result_obj__137;
    if(({    (_conditional_value_X0=(head<0));    _conditional_value_X0;    })) {
        head+=self->len;
    }
    if(({    (_conditional_value_X0=(tail<0));    _conditional_value_X0;    })) {
        tail+=self->len+1;
    }
    if(({    (_conditional_value_X0=(head>tail));    _conditional_value_X0;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_conditional_value_X0=(head<0));    _conditional_value_X0;    })) {
        head=0;
    }
    if(({    (_conditional_value_X0=(tail>self->len));    _conditional_value_X0;    })) {
        tail=self->len;
    }
    if(({    (_conditional_value_X0=(head==tail));    _conditional_value_X0;    })) {
        __result_obj__135 = self;
        return __result_obj__135;
    }
    if(({    (_conditional_value_X0=(head==0&&tail==self->len));    _conditional_value_X0;    })) {
        list$1char$ph_reset(self);
    }
    else if(({    (_conditional_value_X1=(head==0));    _conditional_value_X1;    })) {
        it=self->head;
        i=0;
        while(({        (_conditional_value_X2=(it!=((void*)0)));        _conditional_value_X2;        })) {
            if(({            (_conditional_value_X3=(i<tail));            _conditional_value_X3;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(({            (_conditional_value_X4=(i==tail));            _conditional_value_X4;            })) {
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
    else if(({    (_conditional_value_X5=(tail==self->len));    _conditional_value_X5;    })) {
        it_112=self->head;
        i_113=0;
        while(({        (_conditional_value_X6=(it_112!=((void*)0)));        _conditional_value_X6;        })) {
            if(({            (_conditional_value_X7=(i_113==head));            _conditional_value_X7;            })) {
                self->tail=it_112->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_conditional_value_X8=(i_113>=head));            _conditional_value_X8;            })) {
                prev_it_114=it_112;
                it_112=it_112->next;
                i_113++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_112=it_112->next;
                i_113++;
            }
        }
    }
    else {
        it_115=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_116=0;
        while(({        (_conditional_value_X9=(it_115!=((void*)0)));        _conditional_value_X9;        })) {
            if(({            (_conditional_value_X10=(i_116==head));            _conditional_value_X10;            })) {
                head_prev_it=it_115->prev;
            }
            if(({            (_conditional_value_X11=(i_116==tail));            _conditional_value_X11;            })) {
                tail_it=it_115;
            }
            if(({            (_conditional_value_X12=(i_116>=head&&i_116<tail));            _conditional_value_X12;            })) {
                prev_it_117=it_115;
                it_115=it_115->next;
                i_116++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_115=it_115->next;
                i_116++;
            }
        }
        if(({        (_conditional_value_X13=(head_prev_it!=((void*)0)));        _conditional_value_X13;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_conditional_value_X14=(tail_it!=((void*)0)));        _conditional_value_X14;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__137 = self;
    return __result_obj__137;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _conditional_value_X0;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__136;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__136 = self;
    return __result_obj__136;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values){
int i;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct list$1sNode$ph* __result_obj__141;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_conditional_value_X0=(i=0));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(i<num_value));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(i++));    _conditional_value_X2;    })    ){
        list$1sNode$ph_push_back(self,(struct sNode*)come_increment_ref_count(values[i]));
    }
    __result_obj__141 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__141, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__141;
}

