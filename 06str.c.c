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

struct sStrNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
    struct list$1sNode$ph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    int* value;
};

struct sRegexNode
{
    int sline;
    char* sname;
    int sline_real;
    char* str;
    _Bool global;
    _Bool ignore_case;
};

struct sListNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
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
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
static void sWStringNode_finalize(struct sWStringNode* self);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
// uniq global variable
// inline function

// body function
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
char* __dec_obj1;
struct sStrNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj1=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__1 = (struct sStrNode*)come_increment_ref_count(self);
    come_call_finalizer(sStrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sStrNode_finalize, __result_obj__1, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__1;
}

char* sStrNode_kind(struct sStrNode* self){
void* __right_value2 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string("sStrNode"))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__2;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct CVALUE* come_value;
void* __right_value5 = (void*)0;
char* __dec_obj2;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
void* __right_value8 = (void*)0;
struct sType* __dec_obj3;
_Bool __result_obj__4;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*"))));
    __dec_obj2=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj3=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__4 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__4;
}

static void sNodeBase_finalize(struct sNodeBase* self){
_Bool _condtional_value_X1;
    if(({    (_condtional_value_X1=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X1;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sStrNode_finalize(struct sStrNode* self){
_Bool _condtional_value_X2;
_Bool _condtional_value_X3;
    if(({    (_condtional_value_X2=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X2;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X3=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X3;    })) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sType_finalize(struct sType* self){
_Bool _condtional_value_X4;
_Bool _condtional_value_X5;
_Bool _condtional_value_X6;
_Bool _condtional_value_X9;
_Bool _condtional_value_X10;
_Bool _condtional_value_X11;
_Bool _condtional_value_X12;
_Bool _condtional_value_X13;
_Bool _condtional_value_X14;
_Bool _condtional_value_X15;
_Bool _condtional_value_X16;
_Bool _condtional_value_X19;
_Bool _condtional_value_X20;
_Bool _condtional_value_X21;
_Bool _condtional_value_X24;
_Bool _condtional_value_X25;
    if(({    (_condtional_value_X4=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X4;    })) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X5=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X5;    })) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X6=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X6;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X9=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X9;    })) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X10=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X10;    })) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X11=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X11;    })) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X12=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X12;    })) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X13=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X13;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X14=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X14;    })) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X15=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X15;    })) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X16=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X16;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X19=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X19;    })) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X20=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X20;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X21=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X21;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X24=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X24;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X25=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X25;    })) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X7;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X7=(it!=((void*)0)));    _condtional_value_X7;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
_Bool _condtional_value_X8;
    if(({    (_condtional_value_X8=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X8;    })) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X17;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X17=(it!=((void*)0)));    _condtional_value_X17;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
_Bool _condtional_value_X18;
    if(({    (_condtional_value_X18=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X18;    })) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X22;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X22=(it!=((void*)0)));    _condtional_value_X22;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
_Bool _condtional_value_X23;
    if(({    (_condtional_value_X23=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X23;    })) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
_Bool _condtional_value_X26;
void* __right_value9 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj4;
_Bool _condtional_value_X31;
void* __right_value10 = (void*)0;
struct list_item$1CVALUE$ph* litem_0;
struct CVALUE* __dec_obj5;
void* __right_value11 = (void*)0;
struct list_item$1CVALUE$ph* litem_1;
struct CVALUE* __dec_obj6;
struct list$1CVALUE$ph* __result_obj__3;
    if(({    (_condtional_value_X26=(self->len==0));    _condtional_value_X26;    })) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value9=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X31=(self->len==1));    _condtional_value_X31;    })) {
        litem_0=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value10=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1CVALUE$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value11=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1CVALUE$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__3 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__3;
}

static void CVALUE_finalize(struct CVALUE* self){
_Bool _condtional_value_X27;
_Bool _condtional_value_X28;
_Bool _condtional_value_X29;
_Bool _condtional_value_X30;
    if(({    (_condtional_value_X27=(self!=((void*)0)&&self->c_value!=((void*)0)));    _condtional_value_X27;    })) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X28=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X28;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X29=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _condtional_value_X29;    })) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X30=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _condtional_value_X30;    })) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __right_value12 = (void*)0;
struct buffer* __dec_obj7;
struct sBufferNode* __result_obj__5;
    ((struct sNodeBase*)(__right_value12=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value12, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj7=self->value,
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer(buffer_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->size=size;
    __result_obj__5 = (struct sBufferNode*)come_increment_ref_count(self);
    come_call_finalizer(sBufferNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBufferNode_finalize, __result_obj__5, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__5;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __right_value13 = (void*)0;
char* __result_obj__6;
    __result_obj__6 = (char*)come_increment_ref_count(((char*)(__right_value13=__builtin_string("sBufferNode"))));
    (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__6 = come_decrement_ref_count(__result_obj__6, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__6;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value;
unsigned long  int size;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
struct CVALUE* come_value;
void* __right_value16 = (void*)0;
void* __right_value17 = (void*)0;
struct buffer* buf;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
struct sType* type2;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
struct sType* any_type;
void* __right_value24 = (void*)0;
_Bool _condtional_value_X68;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
struct sType* type2_2;
void* __right_value30 = (void*)0;
char* __dec_obj8;
void* __right_value70 = (void*)0;
struct sType* __dec_obj34;
_Bool __result_obj__31;
    value=(struct buffer*)come_increment_ref_count(self->value);
    size=self->size;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*"))));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer*"))));
    type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    type2->mPointerNum++;
    any_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info));
    any_type->mPointerNum=1;
    any_type->mHeap=(_Bool)1;
    if(({    (_condtional_value_X68=(((struct sFun*)(__right_value24=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));    come_call_finalizer(sFun_finalize, __right_value24, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X68;    })) {
        buffer_append_format(buf,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc_v2(1, sizeof(struct buffer), \"%s\", %d, \"buffer\")), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value25=buffer_to_string(value))),size);
        (__right_value25 = come_decrement_ref_count(__right_value25, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        buffer_append_format(buf,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\")), \"%s\", %ld)",info->sname,info->sline,((char*)(__right_value26=buffer_to_string(value))),size);
        (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type2_2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 72, "struct sType*")),(char*)come_increment_ref_count(xsprintf("buffer*")),(_Bool)0,info));
    type2_2->mHeap=(_Bool)1;
    __dec_obj8=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj34=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2_2));
    come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    append_object_to_right_values(come_value,(struct sType*)come_increment_ref_count(type2_2),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__31 = (_Bool)1;
    come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__31;
}

static void sBufferNode_finalize(struct sBufferNode* self){
_Bool _condtional_value_X32;
_Bool _condtional_value_X33;
    if(({    (_condtional_value_X32=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X32;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X33=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X33;    })) {
        come_call_finalizer(buffer_finalize, self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X34;
_Bool _condtional_value_X35;
_Bool _condtional_value_X36;
struct sFun* __result_obj__7;
_Bool _condtional_value_X61;
_Bool _condtional_value_X62;
struct sFun* __result_obj__8;
struct sFun* __result_obj__9;
struct sFun* __result_obj__10;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X34=((_Bool)1));    _condtional_value_X34;    })) {
        if(({        (_condtional_value_X35=(self->item_existance[it]));        _condtional_value_X35;        })) {
            if(({            (_condtional_value_X36=(string_equals(self->keys[it],key)));            _condtional_value_X36;            })) {
                __result_obj__7 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__7, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__7;
            }
            it++;
            if(({            (_condtional_value_X61=(it>=self->size));            _condtional_value_X61;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X62=(it==hash));            _condtional_value_X62;            })) {
                __result_obj__8 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__8, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__8;
            }
        }
        else {
            __result_obj__9 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__9, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__9;
        }
    }
    __result_obj__10 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__10, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__10;
}

static void sFun_finalize(struct sFun* self){
_Bool _condtional_value_X37;
_Bool _condtional_value_X38;
_Bool _condtional_value_X39;
_Bool _condtional_value_X40;
_Bool _condtional_value_X41;
_Bool _condtional_value_X42;
_Bool _condtional_value_X43;
_Bool _condtional_value_X50;
_Bool _condtional_value_X53;
_Bool _condtional_value_X54;
_Bool _condtional_value_X55;
_Bool _condtional_value_X56;
_Bool _condtional_value_X57;
_Bool _condtional_value_X58;
_Bool _condtional_value_X59;
_Bool _condtional_value_X60;
    if(({    (_condtional_value_X37=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X37;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X38=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X38;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X39=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X39;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X40=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X40;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X41=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _condtional_value_X41;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X42=(self!=((void*)0)&&self->mLambdaType!=((void*)0)));    _condtional_value_X42;    })) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X43=(self!=((void*)0)&&self->mAllVar!=((void*)0)));    _condtional_value_X43;    })) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X50=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X50;    })) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X53=(self!=((void*)0)&&self->mTextBlock!=((void*)0)));    _condtional_value_X53;    })) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X54=(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)));    _condtional_value_X54;    })) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X55=(self!=((void*)0)&&self->mSource!=((void*)0)));    _condtional_value_X55;    })) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X56=(self!=((void*)0)&&self->mSourceHead!=((void*)0)));    _condtional_value_X56;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X57=(self!=((void*)0)&&self->mSourceHead2!=((void*)0)));    _condtional_value_X57;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X58=(self!=((void*)0)&&self->mSourceDefer!=((void*)0)));    _condtional_value_X58;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X59=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X59;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X60=(self!=((void*)0)&&self->mFunAttribute!=((void*)0)));    _condtional_value_X60;    })) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
_Bool _condtional_value_X44;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X44=(it!=((void*)0)));    _condtional_value_X44;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
_Bool _condtional_value_X45;
    if(({    (_condtional_value_X45=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X45;    })) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
_Bool _condtional_value_X46;
_Bool _condtional_value_X47;
_Bool _condtional_value_X48;
_Bool _condtional_value_X49;
    if(({    (_condtional_value_X46=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X46;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X47=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _condtional_value_X47;    })) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X48=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X48;    })) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X49=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X49;    })) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
_Bool _condtional_value_X51;
_Bool _condtional_value_X52;
    if(({    (_condtional_value_X51=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _condtional_value_X51;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X52=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _condtional_value_X52;    })) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X63;
_Bool _condtional_value_X64;
_Bool _condtional_value_X65;
struct sFun* __result_obj__11;
_Bool _condtional_value_X66;
_Bool _condtional_value_X67;
struct sFun* __result_obj__12;
struct sFun* __result_obj__13;
struct sFun* __result_obj__14;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X63=((_Bool)1));    _condtional_value_X63;    })) {
        if(({        (_condtional_value_X64=(self->item_existance[it]));        _condtional_value_X64;        })) {
            if(({            (_condtional_value_X65=(string_equals(self->keys[it],key)));            _condtional_value_X65;            })) {
                __result_obj__11 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__11, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__11;
            }
            it++;
            if(({            (_condtional_value_X66=(it>=self->size));            _condtional_value_X66;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X67=(it==hash));            _condtional_value_X67;            })) {
                __result_obj__12 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__12, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__12;
            }
        }
        else {
            __result_obj__13 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__13, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__13;
        }
    }
    __result_obj__14 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__14, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__14;
}

static struct sType* sType_clone(struct sType* self){
_Bool _condtional_value_X69;
struct sType* __result_obj__15;
void* __right_value31 = (void*)0;
struct sType* result;
_Bool _condtional_value_X70;
_Bool _condtional_value_X71;
void* __right_value32 = (void*)0;
struct sType* __dec_obj9;
_Bool _condtional_value_X72;
void* __right_value33 = (void*)0;
struct sType* __dec_obj10;
_Bool _condtional_value_X73;
void* __right_value41 = (void*)0;
struct list$1sType$ph* __dec_obj14;
_Bool _condtional_value_X80;
void* __right_value42 = (void*)0;
struct sType* __dec_obj15;
_Bool _condtional_value_X81;
void* __right_value44 = (void*)0;
struct sNode* __dec_obj16;
_Bool _condtional_value_X93;
void* __right_value45 = (void*)0;
struct sNode* __dec_obj17;
_Bool _condtional_value_X94;
void* __right_value46 = (void*)0;
char* __dec_obj18;
_Bool _condtional_value_X95;
void* __right_value47 = (void*)0;
char* __dec_obj19;
_Bool _condtional_value_X96;
void* __right_value48 = (void*)0;
char* __dec_obj20;
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
_Bool _condtional_value_X108;
_Bool _condtional_value_X109;
_Bool _condtional_value_X110;
_Bool _condtional_value_X111;
_Bool _condtional_value_X112;
_Bool _condtional_value_X113;
_Bool _condtional_value_X114;
_Bool _condtional_value_X115;
_Bool _condtional_value_X116;
_Bool _condtional_value_X117;
_Bool _condtional_value_X118;
_Bool _condtional_value_X119;
_Bool _condtional_value_X120;
_Bool _condtional_value_X121;
_Bool _condtional_value_X122;
void* __right_value49 = (void*)0;
char* __dec_obj21;
_Bool _condtional_value_X123;
_Bool _condtional_value_X124;
_Bool _condtional_value_X125;
_Bool _condtional_value_X126;
void* __right_value57 = (void*)0;
struct list$1sNode$ph* __dec_obj25;
_Bool _condtional_value_X133;
_Bool _condtional_value_X134;
_Bool _condtional_value_X135;
_Bool _condtional_value_X136;
_Bool _condtional_value_X137;
_Bool _condtional_value_X138;
_Bool _condtional_value_X139;
void* __right_value58 = (void*)0;
char* __dec_obj26;
_Bool _condtional_value_X140;
_Bool _condtional_value_X141;
_Bool _condtional_value_X142;
void* __right_value59 = (void*)0;
struct list$1sType$ph* __dec_obj27;
_Bool _condtional_value_X143;
void* __right_value67 = (void*)0;
struct list$1char$ph* __dec_obj31;
_Bool _condtional_value_X150;
void* __right_value68 = (void*)0;
struct sType* __dec_obj32;
_Bool _condtional_value_X151;
_Bool _condtional_value_X152;
_Bool _condtional_value_X153;
void* __right_value69 = (void*)0;
struct sNode* __dec_obj33;
struct sType* __result_obj__30;
    if(({    (_condtional_value_X69=(self==(void*)0));    _condtional_value_X69;    })) {
        __result_obj__15 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__15, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__15;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_condtional_value_X70=(self!=((void*)0)));    _condtional_value_X70;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_condtional_value_X71=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X71;    })) {
        __dec_obj9=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X72=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X72;    })) {
        __dec_obj10=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X73=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X73;    })) {
        __dec_obj14=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X80=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X80;    })) {
        __dec_obj15=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X81=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X81;    })) {
        __dec_obj16=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X93=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X93;    })) {
        __dec_obj17=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X94=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X94;    })) {
        __dec_obj18=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X95=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X95;    })) {
        __dec_obj19=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X96=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X96;    })) {
        __dec_obj20=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X97=(self!=((void*)0)));    _condtional_value_X97;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_condtional_value_X98=(self!=((void*)0)));    _condtional_value_X98;    })) {
        result->mUnsigned=self->mUnsigned;
    }
    if(({    (_condtional_value_X99=(self!=((void*)0)));    _condtional_value_X99;    })) {
        result->mShort=self->mShort;
    }
    if(({    (_condtional_value_X100=(self!=((void*)0)));    _condtional_value_X100;    })) {
        result->mLong=self->mLong;
    }
    if(({    (_condtional_value_X101=(self!=((void*)0)));    _condtional_value_X101;    })) {
        result->mLongLong=self->mLongLong;
    }
    if(({    (_condtional_value_X102=(self!=((void*)0)));    _condtional_value_X102;    })) {
        result->mConstant=self->mConstant;
    }
    if(({    (_condtional_value_X103=(self!=((void*)0)));    _condtional_value_X103;    })) {
        result->mAtomic=self->mAtomic;
    }
    if(({    (_condtional_value_X104=(self!=((void*)0)));    _condtional_value_X104;    })) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(({    (_condtional_value_X105=(self!=((void*)0)));    _condtional_value_X105;    })) {
        result->mRegister=self->mRegister;
    }
    if(({    (_condtional_value_X106=(self!=((void*)0)));    _condtional_value_X106;    })) {
        result->mVolatile=self->mVolatile;
    }
    if(({    (_condtional_value_X107=(self!=((void*)0)));    _condtional_value_X107;    })) {
        result->mStatic=self->mStatic;
    }
    if(({    (_condtional_value_X108=(self!=((void*)0)));    _condtional_value_X108;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_condtional_value_X109=(self!=((void*)0)));    _condtional_value_X109;    })) {
        result->mRecord=self->mRecord;
    }
    if(({    (_condtional_value_X110=(self!=((void*)0)));    _condtional_value_X110;    })) {
        result->mExtern=self->mExtern;
    }
    if(({    (_condtional_value_X111=(self!=((void*)0)));    _condtional_value_X111;    })) {
        result->mRestrict=self->mRestrict;
    }
    if(({    (_condtional_value_X112=(self!=((void*)0)));    _condtional_value_X112;    })) {
        result->mImmutable=self->mImmutable;
    }
    if(({    (_condtional_value_X113=(self!=((void*)0)));    _condtional_value_X113;    })) {
        result->mTask=self->mTask;
    }
    if(({    (_condtional_value_X114=(self!=((void*)0)));    _condtional_value_X114;    })) {
        result->mHeap=self->mHeap;
    }
    if(({    (_condtional_value_X115=(self!=((void*)0)));    _condtional_value_X115;    })) {
        result->mChannel=self->mChannel;
    }
    if(({    (_condtional_value_X116=(self!=((void*)0)));    _condtional_value_X116;    })) {
        result->mNoHeap=self->mNoHeap;
    }
    if(({    (_condtional_value_X117=(self!=((void*)0)));    _condtional_value_X117;    })) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(({    (_condtional_value_X118=(self!=((void*)0)));    _condtional_value_X118;    })) {
        result->mException=self->mException;
    }
    if(({    (_condtional_value_X119=(self!=((void*)0)));    _condtional_value_X119;    })) {
        result->mInline=self->mInline;
    }
    if(({    (_condtional_value_X120=(self!=((void*)0)));    _condtional_value_X120;    })) {
        result->mNullValue=self->mNullValue;
    }
    if(({    (_condtional_value_X121=(self!=((void*)0)));    _condtional_value_X121;    })) {
        result->mGuardValue=self->mGuardValue;
    }
    if(({    (_condtional_value_X122=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X122;    })) {
        __dec_obj21=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X123=(self!=((void*)0)));    _condtional_value_X123;    })) {
        result->mTypedef=self->mTypedef;
    }
    if(({    (_condtional_value_X124=(self!=((void*)0)));    _condtional_value_X124;    })) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(({    (_condtional_value_X125=(self!=((void*)0)));    _condtional_value_X125;    })) {
        result->mOriginIsArray=self->mOriginIsArray;
    }
    if(({    (_condtional_value_X126=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X126;    })) {
        __dec_obj25=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X133=(self!=((void*)0)));    _condtional_value_X133;    })) {
        result->mPointerNum=self->mPointerNum;
    }
    if(({    (_condtional_value_X134=(self!=((void*)0)));    _condtional_value_X134;    })) {
        result->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(({    (_condtional_value_X135=(self!=((void*)0)));    _condtional_value_X135;    })) {
        result->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(({    (_condtional_value_X136=(self!=((void*)0)));    _condtional_value_X136;    })) {
        result->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(({    (_condtional_value_X137=(self!=((void*)0)));    _condtional_value_X137;    })) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(({    (_condtional_value_X138=(self!=((void*)0)));    _condtional_value_X138;    })) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(({    (_condtional_value_X139=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X139;    })) {
        __dec_obj26=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X140=(self!=((void*)0)));    _condtional_value_X140;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_condtional_value_X141=(self!=((void*)0)));    _condtional_value_X141;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_condtional_value_X142=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X142;    })) {
        __dec_obj27=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X143=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X143;    })) {
        __dec_obj31=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X150=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X150;    })) {
        __dec_obj32=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X151=(self!=((void*)0)));    _condtional_value_X151;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_condtional_value_X152=(self!=((void*)0)));    _condtional_value_X152;    })) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(({    (_condtional_value_X153=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X153;    })) {
        __dec_obj33=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__30 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__30, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__30;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
_Bool _condtional_value_X74;
struct list$1sType$ph* __result_obj__16;
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _condtional_value_X75;
_Bool _condtional_value_X76;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct list$1sType$ph* __result_obj__19;
    if(({    (_condtional_value_X74=(self==((void*)0)));    _condtional_value_X74;    })) {
        __result_obj__16 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__16, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__16;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1sType$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X75=(it!=((void*)0)));    _condtional_value_X75;    })) {
        if(({        (_condtional_value_X76=(1));        _condtional_value_X76;        })) {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__19 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__19;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__17;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X77;
void* __right_value36 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj11;
_Bool _condtional_value_X78;
void* __right_value37 = (void*)0;
struct list_item$1sType$ph* litem_3;
struct sType* __dec_obj12;
void* __right_value38 = (void*)0;
struct list_item$1sType$ph* litem_4;
struct sType* __dec_obj13;
struct list$1sType$ph* __result_obj__18;
    if(({    (_condtional_value_X77=(self->len==0));    _condtional_value_X77;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value36=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj11=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X78=(self->len==1));    _condtional_value_X78;    })) {
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value37=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sType$ph*"))));
        litem_3->prev=self->head;
        litem_3->next=((void*)0);
        __dec_obj12=litem_3->item,
        litem_3->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_3;
        self->head->next=litem_3;
    }
    else {
        litem_4=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value38=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sType$ph*"))));
        litem_4->prev=self->tail;
        litem_4->next=((void*)0);
        __dec_obj13=litem_4->item,
        litem_4->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_4;
        self->tail=litem_4;
    }
    self->len++;
    __result_obj__18 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__18;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X79;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X79=(it!=((void*)0)));    _condtional_value_X79;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
_Bool _condtional_value_X82;
struct sNode* __result_obj__20;
void* __right_value43 = (void*)0;
struct sNode* result;
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
struct sNode* __result_obj__21;
    if(({    (_condtional_value_X82=(self==(void*)0));    _condtional_value_X82;    })) {
        __result_obj__20 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__20) ? __result_obj__20 = come_decrement_ref_count(__result_obj__20, ((struct sNode*)__result_obj__20)->finalize, ((struct sNode*)__result_obj__20)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__20;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(({    (_condtional_value_X83=(self!=((void*)0)&&self->clone!=((void*)0)));    _condtional_value_X83;    })) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(({    (_condtional_value_X84=(self!=((void*)0)));    _condtional_value_X84;    })) {
        result->finalize=self->finalize;
    }
    if(({    (_condtional_value_X85=(self!=((void*)0)));    _condtional_value_X85;    })) {
        result->clone=self->clone;
    }
    if(({    (_condtional_value_X86=(self!=((void*)0)));    _condtional_value_X86;    })) {
        result->compile=self->compile;
    }
    if(({    (_condtional_value_X87=(self!=((void*)0)));    _condtional_value_X87;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X88=(self!=((void*)0)));    _condtional_value_X88;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X89=(self!=((void*)0)));    _condtional_value_X89;    })) {
        result->sname=self->sname;
    }
    if(({    (_condtional_value_X90=(self!=((void*)0)));    _condtional_value_X90;    })) {
        result->terminated=self->terminated;
    }
    if(({    (_condtional_value_X91=(self!=((void*)0)));    _condtional_value_X91;    })) {
        result->kind=self->kind;
    }
    if(({    (_condtional_value_X92=(self!=((void*)0)));    _condtional_value_X92;    })) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__21 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__21) ? __result_obj__21 = come_decrement_ref_count(__result_obj__21, ((struct sNode*)__result_obj__21)->finalize, ((struct sNode*)__result_obj__21)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__21;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
_Bool _condtional_value_X127;
struct list$1sNode$ph* __result_obj__22;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X128;
_Bool _condtional_value_X129;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct list$1sNode$ph* __result_obj__25;
    if(({    (_condtional_value_X127=(self==((void*)0)));    _condtional_value_X127;    })) {
        __result_obj__22 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__22, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__22;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1sNode$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X128=(it!=((void*)0)));    _condtional_value_X128;    })) {
        if(({        (_condtional_value_X129=(1));        _condtional_value_X129;        })) {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__25 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__25, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__25;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__23;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__23 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__23, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__23;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
_Bool _condtional_value_X130;
void* __right_value52 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj22;
_Bool _condtional_value_X131;
void* __right_value53 = (void*)0;
struct list_item$1sNode$ph* litem_5;
struct sNode* __dec_obj23;
void* __right_value54 = (void*)0;
struct list_item$1sNode$ph* litem_6;
struct sNode* __dec_obj24;
struct list$1sNode$ph* __result_obj__24;
    if(({    (_condtional_value_X130=(self->len==0));    _condtional_value_X130;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value52=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj22=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X131=(self->len==1));    _condtional_value_X131;    })) {
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value53=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sNode$ph*"))));
        litem_5->prev=self->head;
        litem_5->next=((void*)0);
        __dec_obj23=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj23 ? __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_5;
        self->head->next=litem_5;
    }
    else {
        litem_6=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value54=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sNode$ph*"))));
        litem_6->prev=self->tail;
        litem_6->next=((void*)0);
        __dec_obj24=litem_6->item,
        litem_6->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj24 ? __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_6;
        self->tail=litem_6;
    }
    self->len++;
    __result_obj__24 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__24;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X132;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X132=(it!=((void*)0)));    _condtional_value_X132;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
_Bool _condtional_value_X144;
struct list$1char$ph* __result_obj__26;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _condtional_value_X145;
_Bool _condtional_value_X146;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1char$ph* __result_obj__29;
    if(({    (_condtional_value_X144=(self==((void*)0)));    _condtional_value_X144;    })) {
        __result_obj__26 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__26, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__26;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1char$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X145=(it!=((void*)0)));    _condtional_value_X145;    })) {
        if(({        (_condtional_value_X146=(1));        _condtional_value_X146;        })) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1022, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1025, "char*")));
        }
        it=it->next;
    }
    __result_obj__29 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__29, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__29;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__27;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__27 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__27, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__27;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X147;
void* __right_value62 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj28;
_Bool _condtional_value_X148;
void* __right_value63 = (void*)0;
struct list_item$1char$ph* litem_7;
char* __dec_obj29;
void* __right_value64 = (void*)0;
struct list_item$1char$ph* litem_8;
char* __dec_obj30;
struct list$1char$ph* __result_obj__28;
    if(({    (_condtional_value_X147=(self->len==0));    _condtional_value_X147;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value62=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X148=(self->len==1));    _condtional_value_X148;    })) {
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value63=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1char$ph*"))));
        litem_7->prev=self->head;
        litem_7->next=((void*)0);
        __dec_obj29=litem_7->item,
        litem_7->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_7;
        self->head->next=litem_7;
    }
    else {
        litem_8=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value64=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1char$ph*"))));
        litem_8->prev=self->tail;
        litem_8->next=((void*)0);
        __dec_obj30=litem_8->item,
        litem_8->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_8;
        self->tail=litem_8;
    }
    self->len++;
    __result_obj__28 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__28;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X149;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X149=(it!=((void*)0)));    _condtional_value_X149;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info){
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
char* __dec_obj35;
void* __right_value73 = (void*)0;
struct list$1sNode$ph* __dec_obj36;
struct sSStringNode* __result_obj__32;
    ((struct sNodeBase*)(__right_value71=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value71, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj35=self->value,
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj36=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(exps));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__32 = (struct sSStringNode*)come_increment_ref_count(self);
    come_call_finalizer(sSStringNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sSStringNode_finalize, __result_obj__32, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__32;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __right_value74 = (void*)0;
char* __result_obj__33;
    __result_obj__33 = (char*)come_increment_ref_count(((char*)(__right_value74=__builtin_string("sSStringNode"))));
    (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__33 = come_decrement_ref_count(__result_obj__33, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__33;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct CVALUE* come_value;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf;
_Bool _condtional_value_X158;
struct list$1sNode$ph* o2_saved;
struct sNode* it;
_Bool _condtional_value_X161;
_Bool _condtional_value_X162;
_Bool _condtional_value_X165;
void* __right_value79 = (void*)0;
struct sNode* obj;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X172;
_Bool __result_obj__43;
void* __right_value90 = (void*)0;
struct CVALUE* come_value_13;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct sType* type2;
void* __right_value94 = (void*)0;
char* __dec_obj42;
void* __right_value95 = (void*)0;
struct sType* __dec_obj43;
_Bool __result_obj__44;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 106, "struct CVALUE*"))));
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 108, "struct buffer*"))));
    buffer_append_str(buf,"xsprintf(\"");
    buffer_append_str(buf,self->value);
    buffer_append_str(buf,"\"");
    if(({    (_condtional_value_X158=(list$1sNode$ph_length(self->exps)>0));    _condtional_value_X158;    })) {
        for(        ({        (_condtional_value_X161=(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(self->exps),it=list$1sNode$ph_begin(o2_saved)));        _condtional_value_X161;        });        ({        (_condtional_value_X162=(!list$1sNode$ph_end(o2_saved)));        _condtional_value_X162;        });        ({        (_condtional_value_X165=(it=list$1sNode$ph_next(o2_saved)));        _condtional_value_X165;        })        ){
            obj=(struct sNode*)come_increment_ref_count(sNode_clone(it));
            params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 118, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 119, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(sNode_clone(it)))));
            node=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),((void*)0),0,((void*)0),info,(_Bool)0));
            Value=node_compile(node,info);
            if(({            (_condtional_value_X172=(!Value));            _condtional_value_X172;            })) {
                __result_obj__43 = (_Bool)0;
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__43;
            }
            else {
            }
            come_value_13=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf,",");
            buffer_append_str(buf,come_value_13->c_value);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_13, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf,")");
    type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 136, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    type2->mHeap=(_Bool)1;
    __dec_obj42=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj43=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    append_object_to_right_values(come_value,(struct sType*)come_increment_ref_count(type2),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__44 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__44;
}

static void sSStringNode_finalize(struct sSStringNode* self){
_Bool _condtional_value_X154;
_Bool _condtional_value_X155;
_Bool _condtional_value_X156;
    if(({    (_condtional_value_X154=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X154;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X155=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X155;    })) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X156=(self!=((void*)0)&&self->exps!=((void*)0)));    _condtional_value_X156;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
_Bool _condtional_value_X157;
    if(({    (_condtional_value_X157=(self==((void*)0)));    _condtional_value_X157;    })) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
_Bool _condtional_value_X159;
struct sNode* result;
struct sNode* __result_obj__34;
_Bool _condtional_value_X160;
struct sNode* __result_obj__35;
struct sNode* result_9;
struct sNode* __result_obj__36;
result = (void*)0;
result_9 = (void*)0;
    if(({    (_condtional_value_X159=(self==((void*)0)));    _condtional_value_X159;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__34 = result;
        return __result_obj__34;
    }
    self->it=self->head;
    if(({    (_condtional_value_X160=(self->it));    _condtional_value_X160;    })) {
        __result_obj__35 = self->it->item;
        return __result_obj__35;
    }
    memset(&result_9,0,sizeof(struct sNode*));
    __result_obj__36 = result_9;
    return __result_obj__36;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
_Bool _condtional_value_X163;
struct sNode* result;
struct sNode* __result_obj__37;
_Bool _condtional_value_X164;
struct sNode* __result_obj__38;
struct sNode* result_10;
struct sNode* __result_obj__39;
result = (void*)0;
result_10 = (void*)0;
    if(({    (_condtional_value_X163=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X163;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__37 = result;
        return __result_obj__37;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X164=(self->it));    _condtional_value_X164;    })) {
        __result_obj__38 = self->it->item;
        return __result_obj__38;
    }
    memset(&result_10,0,sizeof(struct sNode*));
    __result_obj__39 = result_10;
    return __result_obj__39;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__40;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__40 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__40, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__40;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _condtional_value_X166;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X166=(it!=((void*)0)));    _condtional_value_X166;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X167;
    if(({    (_condtional_value_X167=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X167;    })) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
_Bool _condtional_value_X168;
_Bool _condtional_value_X169;
    if(({    (_condtional_value_X168=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X168;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X169=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X169;    })) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
_Bool _condtional_value_X170;
void* __right_value82 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj37;
_Bool _condtional_value_X171;
void* __right_value83 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_11;
struct tuple2$2char$phsNode$ph* __dec_obj38;
void* __right_value84 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_12;
struct tuple2$2char$phsNode$ph* __dec_obj39;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__41;
    if(({    (_condtional_value_X170=(self->len==0));    _condtional_value_X170;    })) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value82=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj37=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X171=(self->len==1));    _condtional_value_X171;    })) {
        litem_11=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value83=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_11->prev=self->head;
        litem_11->next=((void*)0);
        __dec_obj38=litem_11->item,
        litem_11->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_11;
        self->head->next=litem_11;
    }
    else {
        litem_12=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value84=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_12->prev=self->tail;
        litem_12->next=((void*)0);
        __dec_obj39=litem_12->item,
        litem_12->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_12;
        self->tail=litem_12;
    }
    self->len++;
    __result_obj__41 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__41;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj40;
struct sNode* __dec_obj41;
struct tuple2$2char$phsNode$ph* __result_obj__42;
    __dec_obj40=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj41=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__42 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__42, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__42;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __right_value96 = (void*)0;
struct sCharNode* __result_obj__45;
    ((struct sNodeBase*)(__right_value96=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value96, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    self->value=value;
    __result_obj__45 = (struct sCharNode*)come_increment_ref_count(self);
    come_call_finalizer(sCharNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sCharNode_finalize, __result_obj__45, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__45;
}

char* sCharNode_kind(struct sCharNode* self){
void* __right_value97 = (void*)0;
char* __result_obj__46;
    __result_obj__46 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string("sCharNode"))));
    (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__46 = come_decrement_ref_count(__result_obj__46, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__46;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct CVALUE* come_value;
void* __right_value100 = (void*)0;
char* __dec_obj44;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
struct sType* __dec_obj45;
_Bool __result_obj__47;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 169, "struct CVALUE*"))));
    __dec_obj44=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj45=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 172, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__47 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__47;
}

static void sCharNode_finalize(struct sCharNode* self){
_Bool _condtional_value_X173;
    if(({    (_condtional_value_X173=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X173;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info){
void* __right_value104 = (void*)0;
struct sWCharNode* __result_obj__48;
    ((struct sNodeBase*)(__right_value104=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value104, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    self->value=value;
    self->quote=quote;
    __result_obj__48 = (struct sWCharNode*)come_increment_ref_count(self);
    come_call_finalizer(sWCharNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sWCharNode_finalize, __result_obj__48, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__48;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __right_value105 = (void*)0;
char* __result_obj__49;
    __result_obj__49 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string("sWCharNode"))));
    (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__49;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
struct CVALUE* come_value;
_Bool _condtional_value_X175;
void* __right_value108 = (void*)0;
char* __dec_obj46;
void* __right_value109 = (void*)0;
char* __dec_obj47;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__50;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 200, "struct CVALUE*"))));
    if(({    (_condtional_value_X175=(self->quote));    _condtional_value_X175;    })) {
        __dec_obj46=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj47=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __dec_obj48=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 208, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__50 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__50;
}

static void sWCharNode_finalize(struct sWCharNode* self){
_Bool _condtional_value_X174;
    if(({    (_condtional_value_X174=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X174;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info){
void* __right_value113 = (void*)0;
int* __dec_obj49;
struct sWStringNode* __result_obj__51;
    ((struct sNodeBase*)(__right_value113=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value113, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj49=self->value,
    self->value=(int*)come_increment_ref_count(value);
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__51 = (struct sWStringNode*)come_increment_ref_count(self);
    come_call_finalizer(sWStringNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sWStringNode_finalize, __result_obj__51, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__51;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __right_value114 = (void*)0;
char* __result_obj__52;
    __result_obj__52 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string("sWStringNode"))));
    (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__52;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
struct CVALUE* come_value;
void* __right_value117 = (void*)0;
char* __dec_obj50;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct sType* __dec_obj51;
_Bool __result_obj__53;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 235, "struct CVALUE*"))));
    __dec_obj50=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj51=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 238, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",come_value->c_value);
    __result_obj__53 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__53;
}

static void sWStringNode_finalize(struct sWStringNode* self){
_Bool _condtional_value_X176;
_Bool _condtional_value_X177;
    if(({    (_condtional_value_X176=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X176;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X177=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X177;    })) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
char* __dec_obj52;
struct sRegexNode* __result_obj__54;
    ((struct sNodeBase*)(__right_value121=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value121, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj52=self->str,
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result_obj__54 = (struct sRegexNode*)come_increment_ref_count(self);
    come_call_finalizer(sRegexNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sRegexNode_finalize, __result_obj__54, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__54;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __right_value123 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string("sRegexNode"))));
    (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__55;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value129 = (void*)0;
struct sNode* obj_node;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X185;
_Bool __result_obj__58;
_Bool __result_obj__59;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 267, "struct sNode");
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value125=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 267, "struct sStrNode*")),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    obj_node=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer(sStrNode_finalize, __right_value125, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 269, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 271, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node))));
    node=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),((void*)0),info->sline,((void*)0),info,(_Bool)0));
    Value=node_compile(node,info);
    if(({    (_condtional_value_X185=(!Value));    _condtional_value_X185;    })) {
        __result_obj__58 = (_Bool)0;
        ((obj_node) ? obj_node = come_decrement_ref_count(obj_node, ((struct sNode*)obj_node)->finalize, ((struct sNode*)obj_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__58;
    }
    else {
    }
    __result_obj__59 = (_Bool)1;
    ((obj_node) ? obj_node = come_decrement_ref_count(obj_node, ((struct sNode*)obj_node)->finalize, ((struct sNode*)obj_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__59;
}

static void sRegexNode_finalize(struct sRegexNode* self){
_Bool _condtional_value_X178;
_Bool _condtional_value_X179;
    if(({    (_condtional_value_X178=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X178;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X179=(self!=((void*)0)&&self->str!=((void*)0)));    _condtional_value_X179;    })) {
        (self->str = come_decrement_ref_count(self->str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
_Bool _condtional_value_X180;
struct sStrNode* __result_obj__56;
void* __right_value126 = (void*)0;
struct sStrNode* result;
_Bool _condtional_value_X181;
_Bool _condtional_value_X182;
void* __right_value127 = (void*)0;
char* __dec_obj53;
_Bool _condtional_value_X183;
_Bool _condtional_value_X184;
void* __right_value128 = (void*)0;
char* __dec_obj54;
struct sStrNode* __result_obj__57;
    if(({    (_condtional_value_X180=(self==(void*)0));    _condtional_value_X180;    })) {
        __result_obj__56 = (void*)0;
        return __result_obj__56;
    }
    result=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*"));
    if(({    (_condtional_value_X181=(self!=((void*)0)));    _condtional_value_X181;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X182=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X182;    })) {
        __dec_obj53=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStrNode_clone", 5, "char*"));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X183=(self!=((void*)0)));    _condtional_value_X183;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X184=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X184;    })) {
        __dec_obj54=result->value,
        result->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sStrNode_clone", 7, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__57 = result;
    come_call_finalizer(sStrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__57;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info){
void* __right_value136 = (void*)0;
struct list$1sNode$ph* __dec_obj55;
struct sListNode* __result_obj__60;
    ((struct sNodeBase*)(__right_value136=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value136, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj55=self->list_elements,
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__60 = (struct sListNode*)come_increment_ref_count(self);
    come_call_finalizer(sListNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sListNode_finalize, __result_obj__60, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__60;
}

char* sListNode_kind(struct sListNode* self){
void* __right_value137 = (void*)0;
char* __result_obj__61;
    __result_obj__61 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string("sListNode"))));
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__61;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNode$ph* list_elements;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct list$1CVALUE$ph* params;
struct sType* list_element_type;
int n;
struct list$1sNode$ph* o2_saved;
struct sNode* it;
_Bool _condtional_value_X190;
_Bool _condtional_value_X191;
_Bool _condtional_value_X192;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
_Bool _condtional_value_X193;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct sNode* value_node;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_14;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct sNode* exp;
_Bool Value;
_Bool _condtional_value_X194;
_Bool __result_obj__63;
_Bool Value_15;
_Bool _condtional_value_X195;
_Bool __result_obj__64;
void* __right_value156 = (void*)0;
struct CVALUE* come_value;
_Bool _condtional_value_X196;
void* __right_value157 = (void*)0;
_Bool _condtional_value_X197;
_Bool _condtional_value_X198;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct sType* __dec_obj56;
void* __right_value160 = (void*)0;
struct sType* type_values;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
char* var_name;
void* __right_value167 = (void*)0;
struct sVar* var_;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct buffer* source;
int i;
struct list$1CVALUE$ph* o2_saved_18;
struct CVALUE* it_20;
_Bool _condtional_value_X204;
_Bool _condtional_value_X205;
_Bool _condtional_value_X208;
_Bool _condtional_value_X209;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct sType* list_type;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct sType* obj_type;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var1 = (void*)0;
char* name=0;
struct sGenericsFun* generics_fun=0;
char* generics_fun_name;
void* __right_value183 = (void*)0;
struct sFun* fun;
_Bool _condtional_value_X224;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
char* __dec_obj63;
void* __right_value186 = (void*)0;
_Bool _condtional_value_X225;
_Bool __result_obj__81;
void* __right_value187 = (void*)0;
struct sType* result_type;
struct sType* type;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct CVALUE* obj_value;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct buffer* num_string;
void* __right_value192 = (void*)0;
struct sType* type2;
void* __right_value193 = (void*)0;
char* type_name;
struct sType* any_type;
void* __right_value194 = (void*)0;
_Bool _condtional_value_X226;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
char* __dec_obj64;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
char* __dec_obj65;
void* __right_value199 = (void*)0;
struct sType* type3;
void* __right_value200 = (void*)0;
struct sType* __dec_obj66;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct list$1CVALUE$ph* come_params;
void* __right_value203 = (void*)0;
_Bool _condtional_value_X233;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct CVALUE* come_value2;
void* __right_value207 = (void*)0;
char* __dec_obj67;
struct sType* __dec_obj68;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct CVALUE* come_value3;
void* __right_value210 = (void*)0;
char* __dec_obj69;
struct sType* __dec_obj70;
int j;
struct list$1CVALUE$ph* o2_saved_24;
struct CVALUE* it_25;
_Bool _condtional_value_X234;
_Bool _condtional_value_X235;
_Bool _condtional_value_X236;
_Bool _condtional_value_X237;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct CVALUE* come_value4;
void* __right_value213 = (void*)0;
char* __dec_obj71;
void* __right_value214 = (void*)0;
struct sType* __dec_obj72;
_Bool _condtional_value_X238;
_Bool __result_obj__86;
    list_elements=self->list_elements;
    params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 303, "struct list$1CVALUE$ph*"))));
    list_element_type=((void*)0);
    n=0;
    for(    ({    (_condtional_value_X190=(o2_saved=list_elements,it=list$1sNode$ph_begin(o2_saved)));    _condtional_value_X190;    });    ({    (_condtional_value_X191=(!list$1sNode$ph_end(o2_saved)));    _condtional_value_X191;    });    ({    (_condtional_value_X192=(it=list$1sNode$ph_next(o2_saved)));    _condtional_value_X192;    })    ){
        if(({        (_condtional_value_X193=(string_operator_equals(((char*)(__right_value141=it->kind(it->_protocol_obj))),"sWildCard")));        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1, 0, (void*)0));
        _condtional_value_X193;        })) {
            value_node=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value142=xsprintf("Value"))),info));
            (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1, 0, (void*)0));
            params_14=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 311, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_14,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 312, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node))));
            list$1tuple2$2char$phsNode$ph$ph_add(params_14,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 313, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(n)),info)))));
            exp=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value154=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_14),((void*)0),0,((void*)0),info,(_Bool)0));
            (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1, 0, (void*)0));
            Value=node_compile(exp,info);
            if(({            (_condtional_value_X194=(!Value));            _condtional_value_X194;            })) {
                __result_obj__63 = (_Bool)0;
                ((value_node) ? value_node = come_decrement_ref_count(value_node, ((struct sNode*)value_node)->finalize, ((struct sNode*)value_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_14, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__63;
            }
            else {
            }
            ((value_node) ? value_node = come_decrement_ref_count(value_node, ((struct sNode*)value_node)->finalize, ((struct sNode*)value_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_14, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            Value_15=node_compile(it,info);
            if(({            (_condtional_value_X195=(!Value_15));            _condtional_value_X195;            })) {
                __result_obj__64 = (_Bool)0;
                come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__64;
            }
            else {
            }
        }
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(({        (_condtional_value_X196=(list_element_type));        _condtional_value_X196;        })) {
            check_assign_type(((char*)(__right_value157=xsprintf("invalid list element type"))),list_element_type,come_value->type,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        list$1CVALUE$ph_push_back(params,(struct CVALUE*)come_increment_ref_count(come_value));
        if(({        (_condtional_value_X197=(list_element_type));        _condtional_value_X197;        })) {
            if(({            (_condtional_value_X198=(list_element_type->mHeap!=come_value->type->mHeap));            _condtional_value_X198;            })) {
                err_msg(info,"List element type");
                exit(2);
            }
            else {
                check_assign_type(((char*)(__right_value158=xsprintf("List element type"))),list_element_type,come_value->type,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        __dec_obj56=list_element_type,
        list_element_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
        come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    type_values=(struct sType*)come_increment_ref_count(sType_clone(list_element_type));
    list$1sNode$ph_push_back(type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(params))),info)));
    type_values->mHeap=(_Bool)0;
    static int list_value_num=0;
    var_name=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num));
    add_variable_to_table(var_name,(struct sType*)come_increment_ref_count(sType_clone(type_values)),info,(_Bool)0,(_Bool)0);
    var_=get_variable_from_table(info->lv_table,var_name);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value168=make_define_var(type_values,var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1, 0, (void*)0));
    source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 361, "struct buffer*"))));
    buffer_append_str(source,"(");
    i=0;
    for(    ({    (_condtional_value_X204=(o2_saved_18=(struct list$1CVALUE$ph*)come_increment_ref_count(params),it_20=list$1CVALUE$ph_begin(o2_saved_18)));    _condtional_value_X204;    });    ({    (_condtional_value_X205=(!list$1CVALUE$ph_end(o2_saved_18)));    _condtional_value_X205;    });    ({    (_condtional_value_X208=(it_20=list$1CVALUE$ph_next(o2_saved_18)));    _condtional_value_X208;    })    ){
        if(({        (_condtional_value_X209=(list_element_type->mHeap));        _condtional_value_X209;        })) {
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i,((struct CVALUE*)(__right_value171=list$1CVALUE$ph_operator_load_element(params,i)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value171, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else {
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i,((struct CVALUE*)(__right_value172=list$1CVALUE$ph_operator_load_element(params,i)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value172, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        i++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    list_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 381, "struct sType*")),(char*)come_increment_ref_count(xsprintf("list")),(_Bool)0,info));
    list$1sType$ph_push_back(list_type->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value179=sType_clone(list_element_type))))));
    come_call_finalizer(sType_finalize, __right_value179, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    obj_type=(struct sType*)come_increment_ref_count(sType_clone(list_type));
    char* fun_name="initialize_with_values";
    multiple_assign_var1=((struct tuple2$2char$phsGenericsFun$p*)(__right_value182=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)1)));
    name=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    generics_fun=multiple_assign_var1->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value182, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_fun_name=(char*)come_increment_ref_count(name);
    fun=((struct sFun*)(__right_value183=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value183, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(({    (_condtional_value_X224=(fun==((void*)0)));    _condtional_value_X224;    })) {
        __dec_obj63=generics_fun_name,
        generics_fun_name=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char*)(__right_value184=__builtin_string(fun_name))),info,(_Bool)1));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1, 0, (void*)0));
        fun=((struct sFun*)(__right_value186=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
        come_call_finalizer(sFun_finalize, __right_value186, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_condtional_value_X225=(fun==((void*)0)));        _condtional_value_X225;        })) {
            err_msg(info,"function not found(%s) at method(%s)(1)",generics_fun_name,info->come_fun->mName);
            __result_obj__81 = (_Bool)1;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__81;
        }
    }
    result_type=(struct sType*)come_increment_ref_count(sType_clone(fun->mResultType));
    result_type->mStatic=(_Bool)0;
    type=(struct sType*)come_increment_ref_count(list_type);
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 408, "struct CVALUE*"))));
    num_string=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 410, "struct buffer*"))));
    buffer_append_str(num_string,"1");
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
    any_type=(struct sType*)come_increment_ref_count(type2);
    any_type->mPointerNum=1;
    any_type->mHeap=(_Bool)1;
    if(({    (_condtional_value_X226=(((struct sFun*)(__right_value194=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));    come_call_finalizer(sFun_finalize, __right_value194, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X226;    })) {
        __dec_obj64=obj_value->c_value,
        obj_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value195=buffer_to_string(num_string))),info->sname,info->sline,type_name));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        __dec_obj65=obj_value->c_value,
        obj_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value197=buffer_to_string(num_string))),info->sname,info->sline,type_name));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    type3=(struct sType*)come_increment_ref_count(sType_clone(type2));
    type3->mPointerNum++;
    type3->mHeap=(_Bool)1;
    type2->mHeap=(_Bool)1;
    __dec_obj66=obj_value->type,
    obj_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    obj_value->type->mPointerNum++;
    obj_value->var=((void*)0);
    append_object_to_right_values(obj_value,(struct sType*)come_increment_ref_count(type3),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 439, "struct list$1CVALUE$ph*"))));
    if(({    (_condtional_value_X233=(((struct sType*)(__right_value203=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value203, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X233;    })) {
        std_move(((struct sType*)(__right_value204=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info,(_Bool)1);
        come_call_finalizer(sType_finalize, __right_value204, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(obj_value));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 446, "struct CVALUE*"))));
    __dec_obj67=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(params)));
    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj68=come_value2->type,
    come_value2->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2));
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 454, "struct CVALUE*"))));
    __dec_obj69=come_value3->c_value,
    come_value3->c_value=(char*)come_increment_ref_count(xsprintf("%s",var_->mCValueName));
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj70=come_value3->type,
    come_value3->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value3->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value3));
    buffer_append_str(source,generics_fun_name);
    buffer_append_str(source,"(");
    j=0;
    for(    ({    (_condtional_value_X234=(o2_saved_24=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it_25=list$1CVALUE$ph_begin(o2_saved_24)));    _condtional_value_X234;    });    ({    (_condtional_value_X235=(!list$1CVALUE$ph_end(o2_saved_24)));    _condtional_value_X235;    });    ({    (_condtional_value_X236=(it_25=list$1CVALUE$ph_next(o2_saved_24)));    _condtional_value_X236;    })    ){
        buffer_append_str(source,it_25->c_value);
        if(({        (_condtional_value_X237=(j!=list$1CVALUE$ph_length(come_params)-1));        _condtional_value_X237;        })) {
            buffer_append_str(source,",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_24, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(source,")");
    buffer_append_str(source,")");
    come_value4=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 480, "struct CVALUE*"))));
    __dec_obj71=come_value4->c_value,
    come_value4->c_value=(char*)come_increment_ref_count(buffer_to_string(source));
    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj72=come_value4->type,
    come_value4->type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value4->type->mStatic=(_Bool)0;
    come_value4->var=((void*)0);
    if(({    (_condtional_value_X238=(result_type->mHeap));    _condtional_value_X238;    })) {
        append_object_to_right_values(come_value4,(struct sType*)come_increment_ref_count(result_type),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4));
    add_come_last_code(info,"%s",come_value4->c_value);
    __result_obj__86 = (_Bool)1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__86;
}

static void sListNode_finalize(struct sListNode* self){
_Bool _condtional_value_X186;
_Bool _condtional_value_X187;
    if(({    (_condtional_value_X186=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X186;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X187=(self!=((void*)0)&&self->list_elements!=((void*)0)));    _condtional_value_X187;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__62;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__62 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__62, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__62;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it;
_Bool _condtional_value_X188;
struct list_item$1CVALUE$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X188=(it!=((void*)0)));    _condtional_value_X188;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
_Bool _condtional_value_X189;
    if(({    (_condtional_value_X189=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X189;    })) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
_Bool _condtional_value_X199;
void* __right_value161 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj57;
_Bool _condtional_value_X200;
void* __right_value162 = (void*)0;
struct list_item$1sNode$ph* litem_16;
struct sNode* __dec_obj58;
void* __right_value163 = (void*)0;
struct list_item$1sNode$ph* litem_17;
struct sNode* __dec_obj59;
struct list$1sNode$ph* __result_obj__65;
    if(({    (_condtional_value_X199=(self->len==0));    _condtional_value_X199;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value161=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj57=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X200=(self->len==1));    _condtional_value_X200;    })) {
        litem_16=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value162=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1sNode$ph*"))));
        litem_16->prev=self->head;
        litem_16->next=((void*)0);
        __dec_obj58=litem_16->item,
        litem_16->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_16;
        self->head->next=litem_16;
    }
    else {
        litem_17=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value163=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1sNode$ph*"))));
        litem_17->prev=self->tail;
        litem_17->next=((void*)0);
        __dec_obj59=litem_17->item,
        litem_17->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_17;
        self->tail=litem_17;
    }
    self->len++;
    __result_obj__65 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__65;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
_Bool _condtional_value_X201;
    if(({    (_condtional_value_X201=(self==((void*)0)));    _condtional_value_X201;    })) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
_Bool _condtional_value_X202;
struct CVALUE* result;
struct CVALUE* __result_obj__66;
_Bool _condtional_value_X203;
struct CVALUE* __result_obj__67;
struct CVALUE* result_19;
struct CVALUE* __result_obj__68;
result = (void*)0;
result_19 = (void*)0;
    if(({    (_condtional_value_X202=(self==((void*)0)));    _condtional_value_X202;    })) {
        memset(&result,0,sizeof(struct CVALUE*));
        __result_obj__66 = result;
        return __result_obj__66;
    }
    self->it=self->head;
    if(({    (_condtional_value_X203=(self->it));    _condtional_value_X203;    })) {
        __result_obj__67 = self->it->item;
        return __result_obj__67;
    }
    memset(&result_19,0,sizeof(struct CVALUE*));
    __result_obj__68 = result_19;
    return __result_obj__68;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
_Bool _condtional_value_X206;
struct CVALUE* result;
struct CVALUE* __result_obj__69;
_Bool _condtional_value_X207;
struct CVALUE* __result_obj__70;
struct CVALUE* result_21;
struct CVALUE* __result_obj__71;
result = (void*)0;
result_21 = (void*)0;
    if(({    (_condtional_value_X206=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X206;    })) {
        memset(&result,0,sizeof(struct CVALUE*));
        __result_obj__69 = result;
        return __result_obj__69;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X207=(self->it));    _condtional_value_X207;    })) {
        __result_obj__70 = self->it->item;
        return __result_obj__70;
    }
    memset(&result_21,0,sizeof(struct CVALUE*));
    __result_obj__71 = result_21;
    return __result_obj__71;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
_Bool _condtional_value_X210;
struct list_item$1CVALUE$ph* it;
int i;
_Bool _condtional_value_X211;
_Bool _condtional_value_X212;
struct CVALUE* __result_obj__72;
struct CVALUE* default_value;
struct CVALUE* __result_obj__73;
default_value = (void*)0;
    if(({    (_condtional_value_X210=(position<0));    _condtional_value_X210;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X211=(it!=((void*)0)));    _condtional_value_X211;    })) {
        if(({        (_condtional_value_X212=(position==i));        _condtional_value_X212;        })) {
            __result_obj__72 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__72, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__72;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct CVALUE*));
    __result_obj__73 = (struct CVALUE*)come_increment_ref_count(default_value);
    come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__73, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__73;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
_Bool _condtional_value_X213;
struct list_item$1CVALUE$ph* it;
int i;
_Bool _condtional_value_X214;
_Bool _condtional_value_X215;
struct CVALUE* __result_obj__74;
struct CVALUE* default_value;
struct CVALUE* __result_obj__75;
default_value = (void*)0;
    if(({    (_condtional_value_X213=(position<0));    _condtional_value_X213;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X214=(it!=((void*)0)));    _condtional_value_X214;    })) {
        if(({        (_condtional_value_X215=(position==i));        _condtional_value_X215;        })) {
            __result_obj__74 = (struct CVALUE*)come_increment_ref_count(it->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__74, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__74;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct CVALUE*));
    __result_obj__75 = (struct CVALUE*)come_increment_ref_count(default_value);
    come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__75, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__75;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X216;
void* __right_value176 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj60;
_Bool _condtional_value_X217;
void* __right_value177 = (void*)0;
struct list_item$1sType$ph* litem_22;
struct sType* __dec_obj61;
void* __right_value178 = (void*)0;
struct list_item$1sType$ph* litem_23;
struct sType* __dec_obj62;
struct list$1sType$ph* __result_obj__76;
    if(({    (_condtional_value_X216=(self->len==0));    _condtional_value_X216;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value176=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj60=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X217=(self->len==1));    _condtional_value_X217;    })) {
        litem_22=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value177=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1sType$ph*"))));
        litem_22->prev=self->head;
        litem_22->next=((void*)0);
        __dec_obj61=litem_22->item,
        litem_22->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_22;
        self->head->next=litem_22;
    }
    else {
        litem_23=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value178=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1sType$ph*"))));
        litem_23->prev=self->tail;
        litem_23->next=((void*)0);
        __dec_obj62=litem_23->item,
        litem_23->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_23;
        self->tail=litem_23;
    }
    self->len++;
    __result_obj__76 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__76;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
_Bool _condtional_value_X218;
    if(({    (_condtional_value_X218=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X218;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X219;
_Bool _condtional_value_X220;
_Bool _condtional_value_X221;
struct sFun* __result_obj__77;
_Bool _condtional_value_X222;
_Bool _condtional_value_X223;
struct sFun* __result_obj__78;
struct sFun* __result_obj__79;
struct sFun* __result_obj__80;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X219=((_Bool)1));    _condtional_value_X219;    })) {
        if(({        (_condtional_value_X220=(self->item_existance[it]));        _condtional_value_X220;        })) {
            if(({            (_condtional_value_X221=(string_equals(self->keys[it],key)));            _condtional_value_X221;            })) {
                __result_obj__77 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__77, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__77;
            }
            it++;
            if(({            (_condtional_value_X222=(it>=self->size));            _condtional_value_X222;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X223=(it==hash));            _condtional_value_X223;            })) {
                __result_obj__78 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__78, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__78;
            }
        }
        else {
            __result_obj__79 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__79, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__79;
        }
    }
    __result_obj__80 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__80, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__80;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _condtional_value_X227;
struct list_item$1sType$ph* it;
int i;
_Bool _condtional_value_X228;
_Bool _condtional_value_X229;
struct sType* __result_obj__82;
struct sType* default_value;
struct sType* __result_obj__83;
default_value = (void*)0;
    if(({    (_condtional_value_X227=(position<0));    _condtional_value_X227;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X228=(it!=((void*)0)));    _condtional_value_X228;    })) {
        if(({        (_condtional_value_X229=(position==i));        _condtional_value_X229;        })) {
            __result_obj__82 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__82, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__82;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__83 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__83, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__83;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _condtional_value_X230;
struct list_item$1sType$ph* it;
int i;
_Bool _condtional_value_X231;
_Bool _condtional_value_X232;
struct sType* __result_obj__84;
struct sType* default_value;
struct sType* __result_obj__85;
default_value = (void*)0;
    if(({    (_condtional_value_X230=(position<0));    _condtional_value_X230;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X231=(it!=((void*)0)));    _condtional_value_X231;    })) {
        if(({        (_condtional_value_X232=(position==i));        _condtional_value_X232;        })) {
            __result_obj__84 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__84, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__84;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__85 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__85, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__85;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info){
void* __right_value215 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj73;
struct sTupleNode* __result_obj__87;
    ((struct sNodeBase*)(__right_value215=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value215, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj73=self->tuple_elements,
    self->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__87 = (struct sTupleNode*)come_increment_ref_count(self);
    come_call_finalizer(sTupleNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sTupleNode_finalize, __result_obj__87, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__87;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __right_value216 = (void*)0;
char* __result_obj__88;
    __result_obj__88 = (char*)come_increment_ref_count(((char*)(__right_value216=__builtin_string("sTupleNode"))));
    (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__88 = come_decrement_ref_count(__result_obj__88, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__88;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct list$1sType$ph* tuple_types;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct list$1CVALUE$ph* tuple_values;
int n;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved;
struct tuple2$2char$phsNode$ph* it;
_Bool _condtional_value_X244;
_Bool _condtional_value_X245;
_Bool _condtional_value_X248;
struct tuple2$2char$phsNode$ph* multiple_assign_var2 = (void*)0;
char* name=0;
struct sNode* node=0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
_Bool _condtional_value_X249;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct sNode* value_node;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sNode* exp;
_Bool Value;
_Bool _condtional_value_X250;
_Bool __result_obj__95;
_Bool Value_28;
_Bool _condtional_value_X251;
_Bool __result_obj__96;
void* __right_value227 = (void*)0;
struct CVALUE* come_value;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct sType* type;
char* __dec_obj78;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct sType* type_29;
struct list$1sType$ph* o2_saved_30;
struct sType* it_32;
_Bool _condtional_value_X262;
_Bool _condtional_value_X263;
_Bool _condtional_value_X266;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct CVALUE* obj_value;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct buffer* num_string;
void* __right_value243 = (void*)0;
struct sType* type2;
void* __right_value244 = (void*)0;
char* type_name;
struct sType* any_type;
void* __right_value245 = (void*)0;
_Bool _condtional_value_X267;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
char* __dec_obj79;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
char* __dec_obj80;
void* __right_value250 = (void*)0;
struct sType* type3;
void* __right_value251 = (void*)0;
struct sType* __dec_obj81;
void* __right_value252 = (void*)0;
struct sType* obj_type;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3 = (void*)0;
char* name_34=0;
struct sGenericsFun* generics_fun=0;
char* generics_fun_name;
void* __right_value255 = (void*)0;
struct sFun* fun;
_Bool _condtional_value_X268;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
char* __dec_obj82;
void* __right_value258 = (void*)0;
_Bool _condtional_value_X269;
_Bool __result_obj__105;
void* __right_value259 = (void*)0;
struct sType* result_type;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct list$1CVALUE$ph* come_params;
void* __right_value262 = (void*)0;
_Bool _condtional_value_X270;
void* __right_value263 = (void*)0;
int i;
struct list$1CVALUE$ph* o2_saved_35;
struct CVALUE* it_36;
_Bool _condtional_value_X271;
_Bool _condtional_value_X272;
_Bool _condtional_value_X273;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_37;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
_Bool _condtional_value_X274;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct buffer* buf;
int j;
struct list$1CVALUE$ph* o2_saved_38;
struct CVALUE* it_39;
_Bool _condtional_value_X275;
_Bool _condtional_value_X276;
_Bool _condtional_value_X277;
_Bool _condtional_value_X278;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct CVALUE* come_value2;
void* __right_value272 = (void*)0;
char* __dec_obj83;
void* __right_value273 = (void*)0;
struct sType* __dec_obj84;
_Bool _condtional_value_X279;
_Bool __result_obj__106;
    tuple_elements=self->tuple_elements;
    tuple_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 517, "struct list$1sType$ph*"))));
    tuple_values=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 518, "struct list$1CVALUE$ph*"))));
    n=0;
    for(    ({    (_condtional_value_X244=(o2_saved=tuple_elements,it=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved)));    _condtional_value_X244;    });    ({    (_condtional_value_X245=(!list$1tuple2$2char$phsNode$ph$ph_end(o2_saved)));    _condtional_value_X245;    });    ({    (_condtional_value_X248=(it=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved)));    _condtional_value_X248;    })    ){
        multiple_assign_var2=it;
        name=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        node=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        if(({        (_condtional_value_X249=(string_operator_equals(((char*)(__right_value222=node->kind(node->_protocol_obj))),"sWildCard")));        (__right_value221 = come_decrement_ref_count(__right_value221, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value222 = come_decrement_ref_count(__right_value222, (void*)0, (void*)0, 1, 0, (void*)0));
        _condtional_value_X249;        })) {
            value_node=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value223=xsprintf("Value"))),info));
            (__right_value223 = come_decrement_ref_count(__right_value223, (void*)0, (void*)0, 1, 0, (void*)0));
            exp=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node),(char*)come_increment_ref_count(xsprintf("v%d",n+1)),info));
            Value=node_compile(exp,info);
            if(({            (_condtional_value_X250=(!Value));            _condtional_value_X250;            })) {
                __result_obj__95 = (_Bool)0;
                ((value_node) ? value_node = come_decrement_ref_count(value_node, ((struct sNode*)value_node)->finalize, ((struct sNode*)value_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__95;
            }
            else {
            }
            ((value_node) ? value_node = come_decrement_ref_count(value_node, ((struct sNode*)value_node)->finalize, ((struct sNode*)value_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            Value_28=node_compile(node,info);
            if(({            (_condtional_value_X251=(!Value_28));            _condtional_value_X251;            })) {
                __result_obj__96 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__96;
            }
            else {
            }
        }
        come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(tuple_values,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value)));
        type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
        __dec_obj78=type->mTupleName,
        type->mTupleName=(char*)come_increment_ref_count(name);
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
        list$1sType$ph_push_back(tuple_types,(struct sType*)come_increment_ref_count(type));
        n++;
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    type_29=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 547, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types))),(_Bool)0,info));
    for(    ({    (_condtional_value_X262=(o2_saved_30=(struct list$1sType$ph*)come_increment_ref_count(tuple_types),it_32=list$1sType$ph_begin(o2_saved_30)));    _condtional_value_X262;    });    ({    (_condtional_value_X263=(!list$1sType$ph_end(o2_saved_30)));    _condtional_value_X263;    });    ({    (_condtional_value_X266=(it_32=list$1sType$ph_next(o2_saved_30)));    _condtional_value_X266;    })    ){
        list$1sType$ph_push_back(type_29->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value238=sType_clone(it_32))))));
        come_call_finalizer(sType_finalize, __right_value238, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 553, "struct CVALUE*"))));
    num_string=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 555, "struct buffer*"))));
    buffer_append_str(num_string,"1");
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_29),(struct sType*)come_increment_ref_count(type_29),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
    any_type=(struct sType*)come_increment_ref_count(type2);
    any_type->mPointerNum=1;
    any_type->mHeap=(_Bool)1;
    if(({    (_condtional_value_X267=(((struct sFun*)(__right_value245=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));    come_call_finalizer(sFun_finalize, __right_value245, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X267;    })) {
        __dec_obj79=obj_value->c_value,
        obj_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value246=buffer_to_string(num_string))),info->sname,info->sline,type_name));
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        __dec_obj80=obj_value->c_value,
        obj_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value248=buffer_to_string(num_string))),info->sname,info->sline,type_name));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value248 = come_decrement_ref_count(__right_value248, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    type3=(struct sType*)come_increment_ref_count(sType_clone(type2));
    type3->mPointerNum++;
    type3->mHeap=(_Bool)1;
    type2->mHeap=(_Bool)1;
    __dec_obj81=obj_value->type,
    obj_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    obj_value->var=((void*)0);
    append_object_to_right_values(obj_value,(struct sType*)come_increment_ref_count(type3),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    obj_type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    char* fun_name="initialize";
    multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value254=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)1)));
    name_34=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    generics_fun=multiple_assign_var3->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value254, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_fun_name=(char*)come_increment_ref_count(name_34);
    fun=((struct sFun*)(__right_value255=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value255, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(({    (_condtional_value_X268=(fun==((void*)0)));    _condtional_value_X268;    })) {
        __dec_obj82=generics_fun_name,
        generics_fun_name=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char*)(__right_value256=__builtin_string(fun_name))),info,(_Bool)1));
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1, 0, (void*)0));
        fun=((struct sFun*)(__right_value258=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
        come_call_finalizer(sFun_finalize, __right_value258, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_condtional_value_X269=(fun==((void*)0)));        _condtional_value_X269;        })) {
            err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name,info->come_fun->mName);
            __result_obj__105 = (_Bool)1;
            come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_34 = come_decrement_ref_count(name_34, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__105;
        }
    }
    result_type=(struct sType*)come_increment_ref_count(sType_clone(fun->mResultType));
    result_type->mStatic=(_Bool)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 606, "struct list$1CVALUE$ph*"))));
    if(({    (_condtional_value_X270=(((struct sType*)(__right_value262=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value262, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X270;    })) {
        std_move(((struct sType*)(__right_value263=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info,(_Bool)1);
        come_call_finalizer(sType_finalize, __right_value263, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(obj_value));
    i=1;
    for(    ({    (_condtional_value_X271=(o2_saved_35=(struct list$1CVALUE$ph*)come_increment_ref_count(tuple_values),it_36=list$1CVALUE$ph_begin(o2_saved_35)));    _condtional_value_X271;    });    ({    (_condtional_value_X272=(!list$1CVALUE$ph_end(o2_saved_35)));    _condtional_value_X272;    });    ({    (_condtional_value_X273=(it_36=list$1CVALUE$ph_next(o2_saved_35)));    _condtional_value_X273;    })    ){
        come_value_37=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_36));
        if(({        (_condtional_value_X274=(((struct sType*)(__right_value265=list$1sType$ph_operator_load_element(fun->mParamTypes,i)))&&((struct sType*)(__right_value266=list$1sType$ph_operator_load_element(fun->mParamTypes,i)))->mHeap&&come_value_37->type->mHeap));        come_call_finalizer(sType_finalize, __right_value265, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value266, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _condtional_value_X274;        })) {
            std_move(((struct sType*)(__right_value267=list$1sType$ph_operator_load_element(fun->mParamTypes,i))),come_value_37->type,come_value_37,info,(_Bool)1);
            come_call_finalizer(sType_finalize, __right_value267, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_37));
        i++;
        come_call_finalizer(CVALUE_finalize, come_value_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 625, "struct buffer*"))));
    buffer_append_str(buf,generics_fun_name);
    buffer_append_str(buf,"(");
    j=0;
    for(    ({    (_condtional_value_X275=(o2_saved_38=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it_39=list$1CVALUE$ph_begin(o2_saved_38)));    _condtional_value_X275;    });    ({    (_condtional_value_X276=(!list$1CVALUE$ph_end(o2_saved_38)));    _condtional_value_X276;    });    ({    (_condtional_value_X277=(it_39=list$1CVALUE$ph_next(o2_saved_38)));    _condtional_value_X277;    })    ){
        buffer_append_str(buf,it_39->c_value);
        if(({        (_condtional_value_X278=(j!=list$1CVALUE$ph_length(come_params)-1));        _condtional_value_X278;        })) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(buf,")");
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 642, "struct CVALUE*"))));
    __dec_obj83=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj84=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mStatic=(_Bool)0;
    come_value2->var=((void*)0);
    if(({    (_condtional_value_X279=(result_type->mHeap));    _condtional_value_X279;    })) {
        append_object_to_right_values(come_value2,(struct sType*)come_increment_ref_count(result_type),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__106 = (_Bool)1;
    come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name_34 = come_decrement_ref_count(name_34, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__106;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _condtional_value_X239;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X239=(it!=((void*)0)));    _condtional_value_X239;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
_Bool _condtional_value_X240;
_Bool _condtional_value_X241;
    if(({    (_condtional_value_X240=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X240;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X241=(self!=((void*)0)&&self->tuple_elements!=((void*)0)));    _condtional_value_X241;    })) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X242;
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__89;
_Bool _condtional_value_X243;
struct tuple2$2char$phsNode$ph* __result_obj__90;
struct tuple2$2char$phsNode$ph* result_26;
struct tuple2$2char$phsNode$ph* __result_obj__91;
result = (void*)0;
result_26 = (void*)0;
    if(({    (_condtional_value_X242=(self==((void*)0)));    _condtional_value_X242;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__89 = result;
        return __result_obj__89;
    }
    self->it=self->head;
    if(({    (_condtional_value_X243=(self->it));    _condtional_value_X243;    })) {
        __result_obj__90 = self->it->item;
        return __result_obj__90;
    }
    memset(&result_26,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__91 = result_26;
    return __result_obj__91;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X246;
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__92;
_Bool _condtional_value_X247;
struct tuple2$2char$phsNode$ph* __result_obj__93;
struct tuple2$2char$phsNode$ph* result_27;
struct tuple2$2char$phsNode$ph* __result_obj__94;
result = (void*)0;
result_27 = (void*)0;
    if(({    (_condtional_value_X246=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X246;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__92 = result;
        return __result_obj__92;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X247=(self->it));    _condtional_value_X247;    })) {
        __result_obj__93 = self->it->item;
        return __result_obj__93;
    }
    memset(&result_27,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__94 = result_27;
    return __result_obj__94;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
_Bool _condtional_value_X252;
struct CVALUE* __result_obj__97;
void* __right_value228 = (void*)0;
struct CVALUE* result;
_Bool _condtional_value_X253;
void* __right_value229 = (void*)0;
char* __dec_obj74;
_Bool _condtional_value_X254;
void* __right_value230 = (void*)0;
struct sType* __dec_obj75;
_Bool _condtional_value_X255;
_Bool _condtional_value_X256;
_Bool _condtional_value_X257;
void* __right_value231 = (void*)0;
char* __dec_obj76;
_Bool _condtional_value_X258;
void* __right_value232 = (void*)0;
char* __dec_obj77;
struct CVALUE* __result_obj__98;
    if(({    (_condtional_value_X252=(self==(void*)0));    _condtional_value_X252;    })) {
        __result_obj__97 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__97, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__97;
    }
    result=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(({    (_condtional_value_X253=(self!=((void*)0)&&self->c_value!=((void*)0)));    _condtional_value_X253;    })) {
        __dec_obj74=result->c_value,
        result->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X254=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X254;    })) {
        __dec_obj75=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X255=(self!=((void*)0)));    _condtional_value_X255;    })) {
        result->var=self->var;
    }
    if(({    (_condtional_value_X256=(self!=((void*)0)));    _condtional_value_X256;    })) {
        result->right_value_objects=self->right_value_objects;
    }
    if(({    (_condtional_value_X257=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _condtional_value_X257;    })) {
        __dec_obj76=result->c_value_without_right_value_objects,
        result->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X258=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _condtional_value_X258;    })) {
        __dec_obj77=result->c_value_without_cast_object_value,
        result->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__98 = (struct CVALUE*)come_increment_ref_count(result);
    come_call_finalizer(CVALUE_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__98, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__98;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
_Bool _condtional_value_X259;
    if(({    (_condtional_value_X259=(self==((void*)0)));    _condtional_value_X259;    })) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
_Bool _condtional_value_X260;
struct sType* result;
struct sType* __result_obj__99;
_Bool _condtional_value_X261;
struct sType* __result_obj__100;
struct sType* result_31;
struct sType* __result_obj__101;
result = (void*)0;
result_31 = (void*)0;
    if(({    (_condtional_value_X260=(self==((void*)0)));    _condtional_value_X260;    })) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__99 = result;
        return __result_obj__99;
    }
    self->it=self->head;
    if(({    (_condtional_value_X261=(self->it));    _condtional_value_X261;    })) {
        __result_obj__100 = self->it->item;
        return __result_obj__100;
    }
    memset(&result_31,0,sizeof(struct sType*));
    __result_obj__101 = result_31;
    return __result_obj__101;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
_Bool _condtional_value_X264;
struct sType* result;
struct sType* __result_obj__102;
_Bool _condtional_value_X265;
struct sType* __result_obj__103;
struct sType* result_33;
struct sType* __result_obj__104;
result = (void*)0;
result_33 = (void*)0;
    if(({    (_condtional_value_X264=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X264;    })) {
        memset(&result,0,sizeof(struct sType*));
        __result_obj__102 = result;
        return __result_obj__102;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X265=(self->it));    _condtional_value_X265;    })) {
        __result_obj__103 = self->it->item;
        return __result_obj__103;
    }
    memset(&result_33,0,sizeof(struct sType*));
    __result_obj__104 = result_33;
    return __result_obj__104;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info){
void* __right_value274 = (void*)0;
struct list$1sNode$ph* __dec_obj85;
struct list$1sNode$ph* __dec_obj86;
struct sMapNode* __result_obj__107;
    ((struct sNodeBase*)(__right_value274=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value274, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj85=self->map_key_elements,
    self->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj86=self->map_elements,
    self->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__107 = (struct sMapNode*)come_increment_ref_count(self);
    come_call_finalizer(sMapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sMapNode_finalize, __result_obj__107, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__107;
}

char* sMapNode_kind(struct sMapNode* self){
void* __right_value275 = (void*)0;
char* __result_obj__108;
    __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value275=__builtin_string("sMapNode"))));
    (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__108;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNode$ph* map_key_elements;
struct list$1sNode$ph* map_elements;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1CVALUE$ph* key_params;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1CVALUE$ph* element_params;
struct sType* map_key_type;
struct sType* map_element_type;
int i;
_Bool _condtional_value_X283;
_Bool _condtional_value_X284;
_Bool _condtional_value_X285;
void* __right_value280 = (void*)0;
struct sNode* key_elements;
void* __right_value281 = (void*)0;
struct sNode* elements;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
_Bool _condtional_value_X292;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct sNode* value_node;
struct sNode* exp;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sNode* __dec_obj87;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_40;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sNode* __dec_obj88;
_Bool Value;
_Bool _condtional_value_X293;
_Bool __result_obj__113;
void* __right_value305 = (void*)0;
struct CVALUE* come_value;
_Bool _condtional_value_X294;
_Bool _condtional_value_X295;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __dec_obj89;
_Bool Value_41;
_Bool _condtional_value_X296;
_Bool __result_obj__114;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_42;
_Bool _condtional_value_X297;
_Bool _condtional_value_X298;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* __dec_obj90;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
_Bool _condtional_value_X299;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sNode* value_node_43;
struct sNode* exp2;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_44;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sNode* __dec_obj91;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_45;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sNode* __dec_obj92;
_Bool Value_46;
_Bool _condtional_value_X300;
_Bool __result_obj__115;
void* __right_value334 = (void*)0;
struct CVALUE* come_value2;
_Bool _condtional_value_X301;
_Bool _condtional_value_X302;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sType* __dec_obj93;
_Bool Value_47;
_Bool _condtional_value_X303;
_Bool __result_obj__116;
void* __right_value337 = (void*)0;
struct CVALUE* come_value2_48;
_Bool _condtional_value_X304;
_Bool _condtional_value_X305;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sType* __dec_obj94;
void* __right_value340 = (void*)0;
struct sType* key_type_values;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
char* var_name;
void* __right_value344 = (void*)0;
struct sVar* var_;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sType* element_type_values;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
char* var_name2;
void* __right_value350 = (void*)0;
struct sVar* var2_;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct buffer* source;
int i_49;
_Bool _condtional_value_X306;
_Bool _condtional_value_X307;
_Bool _condtional_value_X308;
void* __right_value354 = (void*)0;
struct CVALUE* key_param;
void* __right_value355 = (void*)0;
struct CVALUE* element_param;
_Bool _condtional_value_X309;
_Bool _condtional_value_X310;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sType* map_type;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sType* obj_type;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name=0;
struct sGenericsFun* generics_fun=0;
char* generics_fun_name;
void* __right_value364 = (void*)0;
struct sFun* fun;
_Bool _condtional_value_X311;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
char* __dec_obj95;
void* __right_value367 = (void*)0;
_Bool _condtional_value_X312;
_Bool __result_obj__117;
void* __right_value368 = (void*)0;
struct sType* result_type;
struct sType* type;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct CVALUE* obj_value;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct buffer* num_string;
void* __right_value373 = (void*)0;
struct sType* type2;
void* __right_value374 = (void*)0;
char* type_name;
struct sType* any_type;
void* __right_value375 = (void*)0;
_Bool _condtional_value_X313;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
char* __dec_obj96;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
char* __dec_obj97;
void* __right_value380 = (void*)0;
struct sType* type3;
void* __right_value381 = (void*)0;
struct sType* __dec_obj98;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct list$1CVALUE$ph* come_params;
void* __right_value384 = (void*)0;
_Bool _condtional_value_X314;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct CVALUE* come_value2_50;
void* __right_value388 = (void*)0;
char* __dec_obj99;
struct sType* __dec_obj100;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct CVALUE* come_value3;
void* __right_value391 = (void*)0;
char* __dec_obj101;
struct sType* __dec_obj102;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct CVALUE* come_value4;
void* __right_value394 = (void*)0;
char* __dec_obj103;
struct sType* __dec_obj104;
int j;
struct list$1CVALUE$ph* o2_saved;
struct CVALUE* it;
_Bool _condtional_value_X315;
_Bool _condtional_value_X316;
_Bool _condtional_value_X317;
_Bool _condtional_value_X318;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct CVALUE* come_value5;
void* __right_value397 = (void*)0;
char* __dec_obj105;
void* __right_value398 = (void*)0;
struct sType* __dec_obj106;
_Bool _condtional_value_X319;
_Bool __result_obj__118;
exp = (void*)0;
exp2 = (void*)0;
    map_key_elements=self->map_key_elements;
    map_elements=self->map_elements;
    key_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 682, "struct list$1CVALUE$ph*"))));
    element_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 683, "struct list$1CVALUE$ph*"))));
    map_key_type=((void*)0);
    map_element_type=((void*)0);
    for(    ({    (_condtional_value_X283=(i=0));    _condtional_value_X283;    });    ({    (_condtional_value_X284=(i<list$1sNode$ph_length(map_key_elements)));    _condtional_value_X284;    });    ({    (_condtional_value_X285=(i++));    _condtional_value_X285;    })    ){
        key_elements=((struct sNode*)(__right_value280=list$1sNode$ph_operator_load_element(map_key_elements,i)));
        ((__right_value280) ? __right_value280 = come_decrement_ref_count(__right_value280, ((struct sNode*)__right_value280)->finalize, ((struct sNode*)__right_value280)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        elements=((struct sNode*)(__right_value281=list$1sNode$ph_operator_load_element(map_elements,i)));
        ((__right_value281) ? __right_value281 = come_decrement_ref_count(__right_value281, ((struct sNode*)__right_value281)->finalize, ((struct sNode*)__right_value281)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        if(({        (_condtional_value_X292=(string_operator_equals(((char*)(__right_value283=key_elements->kind(key_elements->_protocol_obj))),"sWildCard")));        (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1, 0, (void*)0));
        _condtional_value_X292;        })) {
            value_node=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value284=xsprintf("Value"))),info));
            (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1, 0, (void*)0));
            {
                params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 696, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 697, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node))));
                __dec_obj87=exp,
                exp=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value291=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),((void*)0),0,((void*)0),info,(_Bool)0));
                (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0, (void*)0) :0);
                (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            {
                params_40=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 702, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 703, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 704, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(i)),info)))));
                __dec_obj88=exp,
                exp=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value303=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_40),((void*)0),0,((void*)0),info,(_Bool)0));
                (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0, (void*)0) :0);
                (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            Value=node_compile(exp,info);
            if(({            (_condtional_value_X293=(!Value));            _condtional_value_X293;            })) {
                __result_obj__113 = (_Bool)0;
                ((value_node) ? value_node = come_decrement_ref_count(value_node, ((struct sNode*)value_node)->finalize, ((struct sNode*)value_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__113;
            }
            else {
            }
            come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(({            (_condtional_value_X294=(map_key_type));            _condtional_value_X294;            })) {
                if(({                (_condtional_value_X295=(map_key_type->mHeap!=come_value->type->mHeap));                _condtional_value_X295;                })) {
                    err_msg(info,"Map Key type");
                    exit(2);
                }
                else {
                    check_assign_type(((char*)(__right_value306=xsprintf("Map key type"))),map_key_type,come_value->type,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            list$1CVALUE$ph_push_back(key_params,(struct CVALUE*)come_increment_ref_count(come_value));
            __dec_obj89=map_key_type,
            map_key_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
            come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((value_node) ? value_node = come_decrement_ref_count(value_node, ((struct sNode*)value_node)->finalize, ((struct sNode*)value_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            Value_41=node_compile(key_elements,info);
            if(({            (_condtional_value_X296=(!Value_41));            _condtional_value_X296;            })) {
                __result_obj__114 = (_Bool)0;
                come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__114;
            }
            else {
            }
            come_value_42=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(({            (_condtional_value_X297=(map_key_type));            _condtional_value_X297;            })) {
                if(({                (_condtional_value_X298=(map_key_type->mHeap!=come_value_42->type->mHeap));                _condtional_value_X298;                })) {
                    err_msg(info,"Map key type");
                    exit(2);
                }
                else {
                    check_assign_type(((char*)(__right_value309=xsprintf("Map key type"))),map_key_type,come_value_42->type,come_value_42,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value309 = come_decrement_ref_count(__right_value309, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            list$1CVALUE$ph_push_back(key_params,(struct CVALUE*)come_increment_ref_count(come_value_42));
            __dec_obj90=map_key_type,
            map_key_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_42->type));
            come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(({        (_condtional_value_X299=(string_operator_equals(((char*)(__right_value312=elements->kind(elements->_protocol_obj))),"sWildCard")));        (__right_value311 = come_decrement_ref_count(__right_value311, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1, 0, (void*)0));
        _condtional_value_X299;        })) {
            value_node_43=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value313=xsprintf("Value"))),info));
            (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1, 0, (void*)0));
            {
                params_44=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 753, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_44,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 754, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_43))));
                __dec_obj91=exp2,
                exp2=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value320=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_43),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_44),((void*)0),0,((void*)0),info,(_Bool)0));
                (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0, (void*)0) :0);
                (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_44, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            {
                params_45=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 759, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_45,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 760, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2))));
                list$1tuple2$2char$phsNode$ph$ph_add(params_45,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 761, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(i)),info)))));
                __dec_obj92=exp2,
                exp2=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value332=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_45),((void*)0),0,((void*)0),info,(_Bool)0));
                (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0, (void*)0) :0);
                (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            Value_46=node_compile(exp2,info);
            if(({            (_condtional_value_X300=(!Value_46));            _condtional_value_X300;            })) {
                __result_obj__115 = (_Bool)0;
                ((value_node_43) ? value_node_43 = come_decrement_ref_count(value_node_43, ((struct sNode*)value_node_43)->finalize, ((struct sNode*)value_node_43)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__115;
            }
            else {
            }
            come_value2=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(({            (_condtional_value_X301=(map_element_type));            _condtional_value_X301;            })) {
                if(({                (_condtional_value_X302=(map_element_type->mHeap!=come_value2->type->mHeap));                _condtional_value_X302;                })) {
                    err_msg(info,"Map element type");
                    exit(2);
                }
                else {
                    check_assign_type(((char*)(__right_value335=xsprintf("Map element type"))),map_element_type,come_value2->type,come_value2,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            list$1CVALUE$ph_push_back(element_params,(struct CVALUE*)come_increment_ref_count(come_value2));
            __dec_obj93=map_element_type,
            map_element_type=(struct sType*)come_increment_ref_count(sType_clone(come_value2->type));
            come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((value_node_43) ? value_node_43 = come_decrement_ref_count(value_node_43, ((struct sNode*)value_node_43)->finalize, ((struct sNode*)value_node_43)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            Value_47=node_compile(elements,info);
            if(({            (_condtional_value_X303=(!Value_47));            _condtional_value_X303;            })) {
                __result_obj__116 = (_Bool)0;
                come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__116;
            }
            else {
            }
            come_value2_48=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(({            (_condtional_value_X304=(map_element_type));            _condtional_value_X304;            })) {
                if(({                (_condtional_value_X305=(map_element_type->mHeap!=come_value2_48->type->mHeap));                _condtional_value_X305;                })) {
                    err_msg(info,"Map element type");
                    exit(2);
                }
                else {
                    check_assign_type(((char*)(__right_value338=xsprintf("Map element type"))),map_element_type,come_value2_48->type,come_value2_48,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value338 = come_decrement_ref_count(__right_value338, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            list$1CVALUE$ph_push_back(element_params,(struct CVALUE*)come_increment_ref_count(come_value2_48));
            __dec_obj94=map_element_type,
            map_element_type=(struct sType*)come_increment_ref_count(sType_clone(come_value2_48->type));
            come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value2_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num=0;
    key_type_values=(struct sType*)come_increment_ref_count(sType_clone(map_key_type));
    list$1sNode$ph_push_back(key_type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(key_params))),info)));
    key_type_values->mHeap=(_Bool)0;
    var_name=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num));
    add_variable_to_table(var_name,(struct sType*)come_increment_ref_count(sType_clone(key_type_values)),info,(_Bool)0,(_Bool)0);
    var_=get_variable_from_table(info->lv_table,var_name);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value345=make_define_var(key_type_values,var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0))));
    (__right_value345 = come_decrement_ref_count(__right_value345, (void*)0, (void*)0, 1, 0, (void*)0));
    element_type_values=(struct sType*)come_increment_ref_count(sType_clone(map_element_type));
    list$1sNode$ph_push_back(element_type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(element_params))),info)));
    element_type_values->mHeap=(_Bool)0;
    var_name2=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num));
    add_variable_to_table(var_name2,(struct sType*)come_increment_ref_count(sType_clone(element_type_values)),info,(_Bool)0,(_Bool)0);
    var2_=get_variable_from_table(info->lv_table,var_name2);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value351=make_define_var(element_type_values,var2_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0))));
    (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1, 0, (void*)0));
    source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 831, "struct buffer*"))));
    buffer_append_str(source,"(");
    for(    ({    (_condtional_value_X306=(i_49=0));    _condtional_value_X306;    });    ({    (_condtional_value_X307=(i_49<list$1CVALUE$ph_length(key_params)));    _condtional_value_X307;    });    ({    (_condtional_value_X308=(i_49++));    _condtional_value_X308;    })    ){
        key_param=((struct CVALUE*)(__right_value354=list$1CVALUE$ph_operator_load_element(key_params,i_49)));
        come_call_finalizer(CVALUE_finalize, __right_value354, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        element_param=((struct CVALUE*)(__right_value355=list$1CVALUE$ph_operator_load_element(element_params,i_49)));
        come_call_finalizer(CVALUE_finalize, __right_value355, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_condtional_value_X309=(map_key_type->mHeap));        _condtional_value_X309;        })) {
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i_49,key_param->c_value);
        }
        else {
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i_49,key_param->c_value);
        }
        if(({        (_condtional_value_X310=(map_element_type->mHeap));        _condtional_value_X310;        })) {
            buffer_append_format(source,"%s[%d]=%s,\n",var2_->mCValueName,i_49,element_param->c_value);
        }
        else {
            buffer_append_format(source,"%s[%d]=%s,\n",var2_->mCValueName,i_49,element_param->c_value);
        }
    }
    map_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "06str.c", 856, "struct sType*")),(char*)come_increment_ref_count(xsprintf("map")),(_Bool)0,info));
    list$1sType$ph_push_back(map_type->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value359=sType_clone(map_key_type))))));
    come_call_finalizer(sType_finalize, __right_value359, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list$1sType$ph_push_back(map_type->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value360=sType_clone(map_element_type))))));
    come_call_finalizer(sType_finalize, __right_value360, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    obj_type=(struct sType*)come_increment_ref_count(sType_clone(map_type));
    char* fun_name="initialize_with_values";
    multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value363=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)1)));
    name=(char*)come_increment_ref_count(multiple_assign_var4->v1);
    generics_fun=multiple_assign_var4->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value363, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_fun_name=(char*)come_increment_ref_count(name);
    fun=((struct sFun*)(__right_value364=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value364, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(({    (_condtional_value_X311=(fun==((void*)0)));    _condtional_value_X311;    })) {
        __dec_obj95=generics_fun_name,
        generics_fun_name=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char*)(__right_value365=__builtin_string(fun_name))),info,(_Bool)1));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1, 0, (void*)0));
        fun=((struct sFun*)(__right_value367=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0))));
        come_call_finalizer(sFun_finalize, __right_value367, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_condtional_value_X312=(fun==((void*)0)));        _condtional_value_X312;        })) {
            err_msg(info,"function not found(%s) at method(%s)(3)",generics_fun_name,info->come_fun->mName);
            __result_obj__117 = (_Bool)1;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, key_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, element_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__117;
        }
    }
    result_type=(struct sType*)come_increment_ref_count(sType_clone(fun->mResultType));
    result_type->mStatic=(_Bool)0;
    type=(struct sType*)come_increment_ref_count(map_type);
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 884, "struct CVALUE*"))));
    num_string=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 886, "struct buffer*"))));
    buffer_append_str(num_string,"1");
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
    any_type=(struct sType*)come_increment_ref_count(type2);
    any_type->mPointerNum=1;
    any_type->mHeap=(_Bool)1;
    if(({    (_condtional_value_X313=(((struct sFun*)(__right_value375=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));    come_call_finalizer(sFun_finalize, __right_value375, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X313;    })) {
        __dec_obj96=obj_value->c_value,
        obj_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value376=buffer_to_string(num_string))),info->sname,info->sline,type_name));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value376 = come_decrement_ref_count(__right_value376, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        __dec_obj97=obj_value->c_value,
        obj_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value378=buffer_to_string(num_string))),info->sname,info->sline,type_name));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    type3=(struct sType*)come_increment_ref_count(sType_clone(type2));
    type3->mPointerNum++;
    type3->mHeap=(_Bool)1;
    type2->mHeap=(_Bool)1;
    __dec_obj98=obj_value->type,
    obj_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    obj_value->type->mPointerNum++;
    obj_value->var=((void*)0);
    append_object_to_right_values(obj_value,(struct sType*)come_increment_ref_count(type3),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 915, "struct list$1CVALUE$ph*"))));
    if(({    (_condtional_value_X314=(((struct sType*)(__right_value384=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value384, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X314;    })) {
        std_move(((struct sType*)(__right_value385=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info,(_Bool)1);
        come_call_finalizer(sType_finalize, __right_value385, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(obj_value));
    come_value2_50=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 922, "struct CVALUE*"))));
    __dec_obj99=come_value2_50->c_value,
    come_value2_50->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(key_params)));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj100=come_value2_50->type,
    come_value2_50->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2_50->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_50));
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 930, "struct CVALUE*"))));
    __dec_obj101=come_value3->c_value,
    come_value3->c_value=(char*)come_increment_ref_count(xsprintf("%s",var_->mCValueName));
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj102=come_value3->type,
    come_value3->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value3->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value3));
    come_value4=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 938, "struct CVALUE*"))));
    __dec_obj103=come_value4->c_value,
    come_value4->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2_->mCValueName));
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj104=come_value4->type,
    come_value4->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value4->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value4));
    buffer_append_str(source,generics_fun_name);
    buffer_append_str(source,"(");
    j=0;
    for(    ({    (_condtional_value_X315=(o2_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it=list$1CVALUE$ph_begin(o2_saved)));    _condtional_value_X315;    });    ({    (_condtional_value_X316=(!list$1CVALUE$ph_end(o2_saved)));    _condtional_value_X316;    });    ({    (_condtional_value_X317=(it=list$1CVALUE$ph_next(o2_saved)));    _condtional_value_X317;    })    ){
        buffer_append_str(source,it->c_value);
        if(({        (_condtional_value_X318=(j!=list$1CVALUE$ph_length(come_params)-1));        _condtional_value_X318;        })) {
            buffer_append_str(source,",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(source,")");
    buffer_append_str(source,")");
    come_value5=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "06str.c", 964, "struct CVALUE*"))));
    __dec_obj105=come_value5->c_value,
    come_value5->c_value=(char*)come_increment_ref_count(buffer_to_string(source));
    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj106=come_value5->type,
    come_value5->type=(struct sType*)come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value5->type->mStatic=(_Bool)0;
    come_value5->var=((void*)0);
    if(({    (_condtional_value_X319=(result_type->mHeap));    _condtional_value_X319;    })) {
        append_object_to_right_values(come_value5,(struct sType*)come_increment_ref_count(result_type),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value5->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5));
    __result_obj__118 = (_Bool)1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, key_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, element_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, map_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__118;
}

static void sMapNode_finalize(struct sMapNode* self){
_Bool _condtional_value_X280;
_Bool _condtional_value_X281;
_Bool _condtional_value_X282;
    if(({    (_condtional_value_X280=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X280;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X281=(self!=((void*)0)&&self->map_key_elements!=((void*)0)));    _condtional_value_X281;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X282=(self!=((void*)0)&&self->map_elements!=((void*)0)));    _condtional_value_X282;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
_Bool _condtional_value_X286;
struct list_item$1sNode$ph* it;
int i;
_Bool _condtional_value_X287;
_Bool _condtional_value_X288;
struct sNode* __result_obj__109;
struct sNode* default_value;
struct sNode* __result_obj__110;
default_value = (void*)0;
    if(({    (_condtional_value_X286=(position<0));    _condtional_value_X286;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X287=(it!=((void*)0)));    _condtional_value_X287;    })) {
        if(({        (_condtional_value_X288=(position==i));        _condtional_value_X288;        })) {
            __result_obj__109 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__109) ? __result_obj__109 = come_decrement_ref_count(__result_obj__109, ((struct sNode*)__result_obj__109)->finalize, ((struct sNode*)__result_obj__109)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__109;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sNode*));
    __result_obj__110 = (struct sNode*)come_increment_ref_count(default_value);
    ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__110) ? __result_obj__110 = come_decrement_ref_count(__result_obj__110, ((struct sNode*)__result_obj__110)->finalize, ((struct sNode*)__result_obj__110)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__110;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
_Bool _condtional_value_X289;
struct list_item$1sNode$ph* it;
int i;
_Bool _condtional_value_X290;
_Bool _condtional_value_X291;
struct sNode* __result_obj__111;
struct sNode* default_value;
struct sNode* __result_obj__112;
default_value = (void*)0;
    if(({    (_condtional_value_X289=(position<0));    _condtional_value_X289;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X290=(it!=((void*)0)));    _condtional_value_X290;    })) {
        if(({        (_condtional_value_X291=(position==i));        _condtional_value_X291;        })) {
            __result_obj__111 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__111) ? __result_obj__111 = come_decrement_ref_count(__result_obj__111, ((struct sNode*)__result_obj__111)->finalize, ((struct sNode*)__result_obj__111)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__111;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sNode*));
    __result_obj__112 = (struct sNode*)come_increment_ref_count(default_value);
    ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__112) ? __result_obj__112 = come_decrement_ref_count(__result_obj__112, ((struct sNode*)__result_obj__112)->finalize, ((struct sNode*)__result_obj__112)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__112;
}

struct sNode* expression_node_v96(struct sInfo* info){
_Bool _condtional_value_X320;
int sline_real;
int sline;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct list$1sNode$ph* exps;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct buffer* value;
char* head_of_last_line;
_Bool _condtional_value_X321;
_Bool _condtional_value_X322;
_Bool _condtional_value_X323;
_Bool _condtional_value_X324;
_Bool _condtional_value_X325;
_Bool _condtional_value_X326;
_Bool _condtional_value_X327;
int len;
_Bool _condtional_value_X328;
_Bool _condtional_value_X329;
_Bool _condtional_value_X330;
_Bool _condtional_value_X331;
void* __right_value403 = (void*)0;
struct sNode* exp;
_Bool _condtional_value_X332;
_Bool _condtional_value_X333;
int sline2;
_Bool _condtional_value_X334;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct sNode* _inf_value2;
struct sSStringNode* _inf_obj_value2;
void* __right_value411 = (void*)0;
struct sNode* __result_obj__121;
_Bool _condtional_value_X341;
int sline_real_51;
int sline_52;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct buffer* value_53;
_Bool _condtional_value_X342;
_Bool _condtional_value_X343;
char* p;
int sline_54;
_Bool _condtional_value_X344;
_Bool _condtional_value_X345;
_Bool _condtional_value_X346;
_Bool _condtional_value_X347;
int sline2_55;
_Bool _condtional_value_X348;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sNode* _inf_value3;
struct sStrNode* _inf_obj_value3;
void* __right_value417 = (void*)0;
struct sNode* __result_obj__122;
_Bool _condtional_value_X349;
int sline_real_56;
int sline_57;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct buffer* value_58;
unsigned long  int size;
_Bool _condtional_value_X350;
_Bool _condtional_value_X351;
char* p_59;
int sline_60;
_Bool _condtional_value_X352;
_Bool _condtional_value_X353;
_Bool _condtional_value_X354;
int len_61;
_Bool _condtional_value_X355;
_Bool _condtional_value_X356;
_Bool _condtional_value_X357;
_Bool _condtional_value_X358;
int sline2_62;
_Bool _condtional_value_X359;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sNode* _inf_value4;
struct sBufferNode* _inf_obj_value4;
void* __right_value425 = (void*)0;
struct sNode* __result_obj__125;
_Bool _condtional_value_X366;
int sline_real_63;
int sline_64;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct buffer* buf;
_Bool _condtional_value_X367;
_Bool _condtional_value_X368;
_Bool _condtional_value_X369;
_Bool _condtional_value_X370;
_Bool global;
_Bool ignore_case;
_Bool _condtional_value_X371;
_Bool _condtional_value_X372;
_Bool _condtional_value_X373;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct sNode* _inf_value5;
struct sStrNode* _inf_obj_value5;
void* __right_value431 = (void*)0;
struct sNode* obj;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct buffer* method_block;
int method_block_sline;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct list$1sType$ph* method_generics_types;
void* __right_value483 = (void*)0;
struct sNode* node;
struct sNode* __result_obj__126;
_Bool _condtional_value_X374;
int sline_real_65;
int sline_66;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct buffer* value_67;
_Bool _condtional_value_X375;
_Bool _condtional_value_X376;
char* p_68;
int sline_69;
_Bool _condtional_value_X377;
_Bool _condtional_value_X378;
_Bool _condtional_value_X379;
int len_70;
_Bool _condtional_value_X380;
_Bool _condtional_value_X381;
_Bool _condtional_value_X382;
_Bool _condtional_value_X383;
int sline2_71;
_Bool _condtional_value_X384;
_Bool global_72;
_Bool ignore_case_73;
_Bool _condtional_value_X385;
_Bool _condtional_value_X386;
_Bool _condtional_value_X387;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value489 = (void*)0;
struct sNode* obj_74;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_75;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct buffer* method_block_76;
int method_block_sline_77;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct list$1sType$ph* method_generics_types_78;
void* __right_value541 = (void*)0;
struct sNode* node_79;
struct sNode* __result_obj__127;
_Bool _condtional_value_X388;
int sline_real_80;
int c;
_Bool _condtional_value_X389;
_Bool _condtional_value_X390;
int n;
_Bool _condtional_value_X391;
_Bool _condtional_value_X392;
int n_81;
_Bool _condtional_value_X393;
_Bool _condtional_value_X394;
unsigned long long int n_83;
_Bool _condtional_value_X395;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sNode* _inf_value7;
struct sCharNode* _inf_obj_value7;
void* __right_value546 = (void*)0;
struct sNode* __result_obj__130;
_Bool _condtional_value_X401;
int sline_real_84;
int c_85;
_Bool quote;
_Bool _condtional_value_X402;
_Bool _condtional_value_X403;
int n_86;
_Bool _condtional_value_X404;
_Bool _condtional_value_X405;
int n_87;
_Bool _condtional_value_X406;
_Bool _condtional_value_X407;
unsigned long long int n_90;
unsigned char p2;
_Bool _condtional_value_X408;
int size_91;
_Bool _condtional_value_X409;
_Bool _condtional_value_X410;
_Bool _condtional_value_X411;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sNode* _inf_value8;
struct sWCharNode* _inf_obj_value8;
void* __right_value551 = (void*)0;
struct sNode* __result_obj__133;
_Bool _condtional_value_X418;
int sline_real_92;
int sline_93;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct buffer* value_94;
_Bool _condtional_value_X419;
_Bool _condtional_value_X420;
char* p_95;
int sline_96;
_Bool _condtional_value_X421;
_Bool _condtional_value_X422;
_Bool _condtional_value_X423;
_Bool _condtional_value_X424;
int sline2_97;
_Bool _condtional_value_X425;
int len_98;
void* __right_value554 = (void*)0;
int* wstr;
char* str_99;
_Bool _condtional_value_X426;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sNode* _inf_value9;
struct sWStringNode* _inf_obj_value9;
void* __right_value560 = (void*)0;
struct sNode* __result_obj__136;
_Bool _condtional_value_X432;
int sline_real_100;
int sline_101;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1sNode$ph* exps_102;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct buffer* value_103;
_Bool _condtional_value_X433;
_Bool _condtional_value_X434;
char* p_104;
int sline_105;
_Bool _condtional_value_X435;
_Bool _condtional_value_X436;
_Bool _condtional_value_X437;
_Bool _condtional_value_X438;
int len_106;
_Bool _condtional_value_X439;
_Bool _condtional_value_X440;
_Bool _condtional_value_X441;
_Bool _condtional_value_X442;
void* __right_value565 = (void*)0;
struct sNode* exp_107;
_Bool _condtional_value_X443;
_Bool _condtional_value_X444;
int sline2_108;
_Bool _condtional_value_X445;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sNode* _inf_value10;
struct sSStringNode* _inf_obj_value10;
void* __right_value569 = (void*)0;
struct sNode* __result_obj__137;
_Bool _condtional_value_X446;
int sline_real_109;
char* p_110;
_Bool no_comma;
void* __right_value570 = (void*)0;
struct sNode* node_111;
char* p2_112;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct buffer* first_element_source;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1sNode$ph* list_elements;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct list$1sNode$ph* map_keys;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct list$1sNode$ph* map_elements;
_Bool _condtional_value_X447;
_Bool no_comma_113;
void* __right_value579 = (void*)0;
struct sNode* node2;
_Bool _condtional_value_X448;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sNode* _inf_value11;
struct sMapNode* _inf_obj_value11;
void* __right_value586 = (void*)0;
struct sNode* __result_obj__140;
_Bool _condtional_value_X455;
_Bool no_comma_114;
void* __right_value587 = (void*)0;
struct sNode* node2_115;
void* __right_value588 = (void*)0;
struct sNode* node3;
_Bool _condtional_value_X456;
_Bool _condtional_value_X457;
_Bool _condtional_value_X458;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sNode* _inf_value12;
struct sMapNode* _inf_obj_value12;
void* __right_value591 = (void*)0;
struct sNode* __result_obj__141;
_Bool _condtional_value_X459;
_Bool _condtional_value_X460;
_Bool _condtional_value_X461;
_Bool no_comma_116;
void* __right_value592 = (void*)0;
struct sNode* node2_117;
_Bool _condtional_value_X462;
_Bool _condtional_value_X463;
_Bool _condtional_value_X464;
_Bool _condtional_value_X465;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sNode* _inf_value13;
struct sListNode* _inf_obj_value13;
void* __right_value598 = (void*)0;
struct sNode* __result_obj__144;
void* __right_value599 = (void*)0;
struct sNode* node_118;
struct sNode* __result_obj__145;
struct sNode* __result_obj__146;
memset(&c, 0, sizeof(int));
memset(&c_85, 0, sizeof(int));
memset(&quote, 0, sizeof(_Bool));
memset(&size_91, 0, sizeof(int));
    if(({    (_condtional_value_X320=(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10));    _condtional_value_X320;    })) {
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline=info->sline;
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 994, "struct list$1sNode$ph*"))));
        value=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 995, "struct buffer*"))));
        head_of_last_line=((void*)0);
        while(({        (_condtional_value_X321=(1));        _condtional_value_X321;        })) {
            if(({            (_condtional_value_X322=(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34));            _condtional_value_X322;            })) {
                if(({                (_condtional_value_X323=(head_of_last_line));                _condtional_value_X323;                })) {
                    buffer_trim(value,info->p-head_of_last_line);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(({            (_condtional_value_X324=(*info->p==37));            _condtional_value_X324;            })) {
                buffer_append_char(value,37);
                buffer_append_char(value,37);
                info->p++;
            }
            else if(({            (_condtional_value_X325=(*info->p==34));            _condtional_value_X325;            })) {
                buffer_append_char(value,92);
                buffer_append_char(value,34);
                info->p++;
            }
            else if(({            (_condtional_value_X326=(*info->p==92));            _condtional_value_X326;            })) {
                buffer_append_char(value,92);
                info->p++;
                if(({                (_condtional_value_X327=(xisdigit(*info->p)));                _condtional_value_X327;                })) {
                    len=0;
                    while(({                    (_condtional_value_X328=(xisdigit(*info->p)&&len<3));                    _condtional_value_X328;                    })) {
                        buffer_append_char(value,*info->p);
                        info->p++;
                        len++;
                    }
                }
                else if(({                (_condtional_value_X329=(*info->p==120||*info->p==88));                _condtional_value_X329;                })) {
                    buffer_append_char(value,*info->p);
                    info->p++;
                    while(({                    (_condtional_value_X330=(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70));                    _condtional_value_X330;                    })) {
                        buffer_append_char(value,*info->p);
                        info->p++;
                    }
                }
                else if(({                (_condtional_value_X331=(*info->p==123));                _condtional_value_X331;                })) {
                    info->p++;
                    exp=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(exp));
                    if(({                    (_condtional_value_X332=(*info->p==125));                    _condtional_value_X332;                    })) {
                        info->p++;
                    }
                    buffer_append_str(value,"%s");
                    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(({            (_condtional_value_X333=(*info->p==0));            _condtional_value_X333;            })) {
                sline2=info->sline;
                info->sline=sline;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(({                (_condtional_value_X334=(*info->p==10));                _condtional_value_X334;                })) {
                    buffer_append_char(value,92);
                    buffer_append_char(value,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line=info->p;
                }
                else {
                    buffer_append_char(value,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real;
        _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1134, "struct sNode");
        _inf_obj_value2=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value406=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "06str.c", 1134, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value)),(struct list$1sNode$ph*)come_increment_ref_count(exps),sline,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sSStringNode_finalize;
        _inf_value2->clone=(void*)sSStringNode_clone;
        _inf_value2->compile=(void*)sSStringNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sNodeBase_terminated;
        _inf_value2->kind=(void*)sSStringNode_kind;
        _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__121 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value411=_inf_value2)));
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sSStringNode_finalize, __right_value406, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value411) ? __right_value411 = come_decrement_ref_count(__right_value411, ((struct sNode*)__right_value411)->finalize, ((struct sNode*)__right_value411)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__121) ? __result_obj__121 = come_decrement_ref_count(__result_obj__121, ((struct sNode*)__result_obj__121)->finalize, ((struct sNode*)__result_obj__121)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__121;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_condtional_value_X341=(*info->p==34));    _condtional_value_X341;    })) {
        sline_real_51=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_52=info->sline;
        value_53=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1144, "struct buffer*"))));
        while(({        (_condtional_value_X342=(1));        _condtional_value_X342;        })) {
            if(({            (_condtional_value_X343=(*info->p==34));            _condtional_value_X343;            })) {
                info->p++;
                p=info->p;
                sline_54=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(({                (_condtional_value_X344=(*info->p==34));                _condtional_value_X344;                })) {
                    info->p++;
                }
                else {
                    info->p=p;
                    info->sline=sline_54;
                    break;
                }
            }
            else if(({            (_condtional_value_X345=(*info->p==92));            _condtional_value_X345;            })) {
                buffer_append_char(value_53,92);
                info->p++;
                if(({                (_condtional_value_X346=(*info->p==34));                _condtional_value_X346;                })) {
                    buffer_append_char(value_53,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_53,*info->p);
                    info->p++;
                }
            }
            else if(({            (_condtional_value_X347=(*info->p==0));            _condtional_value_X347;            })) {
                sline2_55=info->sline;
                info->sline=sline_52;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_55;
                exit(2);
            }
            else {
                if(({                (_condtional_value_X348=(*info->p==10));                _condtional_value_X348;                })) {
                    info->sline++;
                }
                buffer_append_char(value_53,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_51;
        _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1197, "struct sNode");
        _inf_obj_value3=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value416=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1197, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_53)),sline_52,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sStrNode_finalize;
        _inf_value3->clone=(void*)sStrNode_clone;
        _inf_value3->compile=(void*)sStrNode_compile;
        _inf_value3->sline=(void*)sNodeBase_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sNodeBase_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sStrNode_kind;
        _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__122 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value417=_inf_value3)));
        come_call_finalizer(buffer_finalize, value_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sStrNode_finalize, __right_value416, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value417) ? __right_value417 = come_decrement_ref_count(__right_value417, ((struct sNode*)__right_value417)->finalize, ((struct sNode*)__right_value417)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__122) ? __result_obj__122 = come_decrement_ref_count(__result_obj__122, ((struct sNode*)__result_obj__122)->finalize, ((struct sNode*)__result_obj__122)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__122;
        come_call_finalizer(buffer_finalize, value_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_condtional_value_X349=((*info->p==98||*info->p==66)&&*(info->p+1)==34));    _condtional_value_X349;    })) {
        sline_real_56=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_57=info->sline;
        value_58=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1207, "struct buffer*"))));
        size=0;
        while(({        (_condtional_value_X350=(1));        _condtional_value_X350;        })) {
            if(({            (_condtional_value_X351=(*info->p==34));            _condtional_value_X351;            })) {
                info->p++;
                p_59=info->p;
                sline_60=info->sline;
                skip_spaces_and_lf(info);
                if(({                (_condtional_value_X352=(*info->p==34));                _condtional_value_X352;                })) {
                    info->p++;
                }
                else {
                    info->p=p_59;
                    info->sline=sline_60;
                    break;
                }
            }
            else if(({            (_condtional_value_X353=(*info->p==92));            _condtional_value_X353;            })) {
                buffer_append_char(value_58,92);
                info->p++;
                if(({                (_condtional_value_X354=(xisdigit(*info->p)));                _condtional_value_X354;                })) {
                    len_61=0;
                    while(({                    (_condtional_value_X355=(xisdigit(*info->p)&&len_61<3));                    _condtional_value_X355;                    })) {
                        buffer_append_char(value_58,*info->p);
                        info->p++;
                        len_61++;
                    }
                    size++;
                }
                else if(({                (_condtional_value_X356=(*info->p==120||*info->p==88));                _condtional_value_X356;                })) {
                    buffer_append_char(value_58,*info->p);
                    info->p++;
                    while(({                    (_condtional_value_X357=(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70));                    _condtional_value_X357;                    })) {
                        buffer_append_char(value_58,*info->p);
                        info->p++;
                    }
                    size++;
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_58,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 110:
                        buffer_append_char(value_58,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 116:
                        buffer_append_char(value_58,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 114:
                        buffer_append_char(value_58,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 118:
                        buffer_append_char(value_58,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 102:
                        buffer_append_char(value_58,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 97:
                        buffer_append_char(value_58,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 98:
                        buffer_append_char(value_58,*info->p);
                        info->p++;
                        size++;
                        break;
                        case 92:
                        buffer_append_char(value_58,*info->p);
                        info->p++;
                        size++;
                        break;
                        default:
                        buffer_append_char(value_58,*info->p);
                        info->p++;
                        size++;
                        break;
                    }
                }
            }
            else if(({            (_condtional_value_X358=(*info->p==0));            _condtional_value_X358;            })) {
                sline2_62=info->sline;
                info->sline=sline_57;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(({                (_condtional_value_X359=(*info->p==10));                _condtional_value_X359;                })) {
                    info->sline++;
                }
                buffer_append_char(value_58,*info->p);
                info->p++;
                size++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_56;
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1334, "struct sNode");
        _inf_obj_value4=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value421=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc_v2(1, sizeof(struct sBufferNode)*(1), "06str.c", 1334, "struct sBufferNode*")),(struct buffer*)come_increment_ref_count(value_58),size,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sBufferNode_finalize;
        _inf_value4->clone=(void*)sBufferNode_clone;
        _inf_value4->compile=(void*)sBufferNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sBufferNode_kind;
        _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__125 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value425=_inf_value4)));
        come_call_finalizer(buffer_finalize, value_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBufferNode_finalize, __right_value421, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value425) ? __right_value425 = come_decrement_ref_count(__right_value425, ((struct sNode*)__right_value425)->finalize, ((struct sNode*)__right_value425)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__125) ? __result_obj__125 = come_decrement_ref_count(__result_obj__125, ((struct sNode*)__result_obj__125)->finalize, ((struct sNode*)__result_obj__125)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__125;
        come_call_finalizer(buffer_finalize, value_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_condtional_value_X366=(*info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42));    _condtional_value_X366;    })) {
        sline_real_63=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_64=info->sline;
        buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1343, "struct buffer*"))));
        while(({        (_condtional_value_X367=((_Bool)1));        _condtional_value_X367;        })) {
            if(({            (_condtional_value_X368=(*info->p==92&&*(info->p+1)==47));            _condtional_value_X368;            })) {
                info->p++;
                buffer_append_char(buf,*info->p);
                info->p++;
            }
            else if(({            (_condtional_value_X369=(*info->p==47));            _condtional_value_X369;            })) {
                info->p++;
                break;
            }
            else if(({            (_condtional_value_X370=(*info->p==0));            _condtional_value_X370;            })) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf,*info->p);
                info->p++;
            }
        }
        global=(_Bool)0;
        ignore_case=(_Bool)0;
        while(({        (_condtional_value_X371=(*info->p==103||*info->p==105));        _condtional_value_X371;        })) {
            if(({            (_condtional_value_X372=(*info->p==103));            _condtional_value_X372;            })) {
                info->p++;
                global=(_Bool)1;
            }
            else if(({            (_condtional_value_X373=(*info->p==105));            _condtional_value_X373;            })) {
                info->p++;
                ignore_case=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1382, "struct sNode");
        _inf_obj_value5=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value430=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1382, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(buf)),sline_64,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sStrNode_finalize;
        _inf_value5->clone=(void*)sStrNode_clone;
        _inf_value5->compile=(void*)sStrNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sStrNode_kind;
        _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
        obj=(struct sNode*)come_increment_ref_count(_inf_value5);
        come_call_finalizer(sStrNode_finalize, __right_value430, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1384, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1386, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1387, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case)?(((struct sNode*)(__right_value439=create_int_node((char*)come_increment_ref_count(int_to_string(1)),info)))):(((struct sNode*)(__right_value441=create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))))))));
        ((__right_value439) ? __right_value439 = come_decrement_ref_count(__right_value439, ((struct sNode*)__right_value439)->finalize, ((struct sNode*)__right_value439)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__right_value441) ? __right_value441 = come_decrement_ref_count(__right_value441, ((struct sNode*)__right_value441)->finalize, ((struct sNode*)__right_value441)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1388, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1389, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global)?(((struct sNode*)(__right_value451=create_int_node((char*)come_increment_ref_count(int_to_string(1)),info)))):(((struct sNode*)(__right_value453=create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))))))));
        ((__right_value451) ? __right_value451 = come_decrement_ref_count(__right_value451, ((struct sNode*)__right_value451)->finalize, ((struct sNode*)__right_value451)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__right_value453) ? __right_value453 = come_decrement_ref_count(__right_value453, ((struct sNode*)__right_value453)->finalize, ((struct sNode*)__right_value453)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1390, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1391, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1392, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1393, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1394, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        method_block=((void*)0);
        method_block_sline=info->sline;
        method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1400, "struct list$1sType$ph*"))));
        node=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,info,(_Bool)0));
        info->sline_real=sline_real_63;
        __result_obj__126 = (struct sNode*)come_increment_ref_count(node);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__126) ? __result_obj__126 = come_decrement_ref_count(__result_obj__126, ((struct sNode*)__result_obj__126)->finalize, ((struct sNode*)__result_obj__126)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__126;
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X374=((*info->p==82||*info->p==114)&&*(info->p+1)==34));    _condtional_value_X374;    })) {
        sline_real_65=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_66=info->sline;
        value_67=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1414, "struct buffer*"))));
        while(({        (_condtional_value_X375=(1));        _condtional_value_X375;        })) {
            if(({            (_condtional_value_X376=(*info->p==34));            _condtional_value_X376;            })) {
                info->p++;
                p_68=info->p;
                sline_69=info->sline;
                skip_spaces_and_lf(info);
                if(({                (_condtional_value_X377=(*info->p==34));                _condtional_value_X377;                })) {
                    info->p++;
                }
                else {
                    info->p=p_68;
                    info->sline=sline_69;
                    break;
                }
            }
            else if(({            (_condtional_value_X378=(*info->p==92));            _condtional_value_X378;            })) {
                buffer_append_char(value_67,92);
                info->p++;
                if(({                (_condtional_value_X379=(xisdigit(*info->p)));                _condtional_value_X379;                })) {
                    len_70=0;
                    while(({                    (_condtional_value_X380=(xisdigit(*info->p)&&len_70<3));                    _condtional_value_X380;                    })) {
                        buffer_append_char(value_67,*info->p);
                        info->p++;
                        len_70++;
                    }
                }
                else if(({                (_condtional_value_X381=(*info->p==120||*info->p==88));                _condtional_value_X381;                })) {
                    buffer_append_char(value_67,*info->p);
                    info->p++;
                    while(({                    (_condtional_value_X382=(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70));                    _condtional_value_X382;                    })) {
                        buffer_append_char(value_67,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_67,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_67,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_67,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_67,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_67,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_67,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_67,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_67,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_67,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_67,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(({            (_condtional_value_X383=(*info->p==0));            _condtional_value_X383;            })) {
                sline2_71=info->sline;
                info->sline=sline_66;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(({                (_condtional_value_X384=(*info->p==10));                _condtional_value_X384;                })) {
                    info->sline++;
                }
                buffer_append_char(value_67,*info->p);
                info->p++;
            }
        }
        global_72=(_Bool)0;
        ignore_case_73=(_Bool)0;
        while(({        (_condtional_value_X385=(*info->p==103||*info->p==105));        _condtional_value_X385;        })) {
            if(({            (_condtional_value_X386=(*info->p==103));            _condtional_value_X386;            })) {
                info->p++;
                global_72=(_Bool)1;
            }
            else if(({            (_condtional_value_X387=(*info->p==105));            _condtional_value_X387;            })) {
                info->p++;
                ignore_case_73=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1540, "struct sNode");
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value488=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc_v2(1, sizeof(struct sStrNode)*(1), "06str.c", 1540, "struct sStrNode*")),(char*)come_increment_ref_count(buffer_to_string(value_67)),sline_66,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
        obj_74=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer(sStrNode_finalize, __right_value488, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        params_75=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1542, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_75,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1544, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_74))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_75,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1545, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_73)?(((struct sNode*)(__right_value497=create_int_node((char*)come_increment_ref_count(int_to_string(1)),info)))):(((struct sNode*)(__right_value499=create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))))))));
        ((__right_value497) ? __right_value497 = come_decrement_ref_count(__right_value497, ((struct sNode*)__right_value497)->finalize, ((struct sNode*)__right_value497)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__right_value499) ? __right_value499 = come_decrement_ref_count(__right_value499, ((struct sNode*)__right_value499)->finalize, ((struct sNode*)__right_value499)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_75,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1546, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_75,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1547, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_72)?(((struct sNode*)(__right_value509=create_int_node((char*)come_increment_ref_count(int_to_string(1)),info)))):(((struct sNode*)(__right_value511=create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))))))));
        ((__right_value509) ? __right_value509 = come_decrement_ref_count(__right_value509, ((struct sNode*)__right_value509)->finalize, ((struct sNode*)__right_value509)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__right_value511) ? __right_value511 = come_decrement_ref_count(__right_value511, ((struct sNode*)__right_value511)->finalize, ((struct sNode*)__right_value511)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(params_75,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1548, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_75,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1549, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_75,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1550, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_75,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1551, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_75,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1552, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)))));
        method_block_76=((void*)0);
        method_block_sline_77=info->sline;
        method_generics_types_78=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "06str.c", 1558, "struct list$1sType$ph*"))));
        node_79=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_74),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_75),method_block_76,method_block_sline_77,method_generics_types_78,info,(_Bool)0));
        info->sline_real=sline_real_65;
        __result_obj__127 = (struct sNode*)come_increment_ref_count(node_79);
        come_call_finalizer(buffer_finalize, value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj_74) ? obj_74 = come_decrement_ref_count(obj_74, ((struct sNode*)obj_74)->finalize, ((struct sNode*)obj_74)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node_79) ? node_79 = come_decrement_ref_count(node_79, ((struct sNode*)node_79)->finalize, ((struct sNode*)node_79)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__127) ? __result_obj__127 = come_decrement_ref_count(__result_obj__127, ((struct sNode*)__result_obj__127)->finalize, ((struct sNode*)__result_obj__127)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__127;
        come_call_finalizer(buffer_finalize, value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj_74) ? obj_74 = come_decrement_ref_count(obj_74, ((struct sNode*)obj_74)->finalize, ((struct sNode*)obj_74)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node_79) ? node_79 = come_decrement_ref_count(node_79, ((struct sNode*)node_79)->finalize, ((struct sNode*)node_79)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X388=(*info->p==39));    _condtional_value_X388;    })) {
        sline_real_80=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(({        (_condtional_value_X389=(*info->p==92));        _condtional_value_X389;        })) {
            info->p++;
            if(({            (_condtional_value_X390=(xisdigit(*info->p)));            _condtional_value_X390;            })) {
                n=0;
                while(({                (_condtional_value_X391=(xisdigit(*info->p)));                _condtional_value_X391;                })) {
                    n=n*8+*info->p-48;
                    info->p++;
                }
                c=n;
            }
            else {
                switch (                *info->p) {
                    case 110:
                    c=10;
                    info->p++;
                    break;
                    case 116:
                    c=9;
                    info->p++;
                    break;
                    case 114:
                    c=13;
                    info->p++;
                    break;
                    case 97:
                    c=7;
                    info->p++;
                    break;
                    case 102:
                    c=12;
                    info->p++;
                    break;
                    case 118:
                    c=11;
                    info->p++;
                    break;
                    case 98:
                    c=8;
                    info->p++;
                    break;
                    case 92:
                    c=92;
                    info->p++;
                    break;
                    case 48:
                    c=0;
                    info->p++;
                    if(({                    (_condtional_value_X392=(xisdigit(*info->p)));                    _condtional_value_X392;                    })) {
                        n_81=0;
                        while(({                        (_condtional_value_X393=(xisdigit(*info->p)));                        _condtional_value_X393;                        })) {
                            n_81=n_81*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c=n_81;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_82[128];
                        memset(&buf_82, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_82,"0x",128);
                        while(({                        (_condtional_value_X394=(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70));                        _condtional_value_X394;                        })) {
                            char buf2[2];
                            memset(&buf2, 0, sizeof(char)                            *(2)                            );
                            buf2[0]=*info->p;
                            buf2[1]=0;
                            info->p++;
                            strncat(buf_82,buf2,128);
                        }
                        n_83=strtoll(buf_82,((void*)0),0);
                        c=n_83;
                    }
                    break;
                    default:
                    c=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c=*info->p;
            info->p++;
        }
        if(({        (_condtional_value_X395=(*info->p!=39));        _condtional_value_X395;        })) {
            err_msg(info,"close \' to make character value");
            exit(1);
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_80;
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1684, "struct sNode");
            _inf_obj_value7=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value543=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc_v2(1, sizeof(struct sCharNode)*(1), "06str.c", 1684, "struct sCharNode*")),c,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sCharNode_finalize;
            _inf_value7->clone=(void*)sCharNode_clone;
            _inf_value7->compile=(void*)sCharNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sCharNode_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__130 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value546=_inf_value7)));
            come_call_finalizer(sCharNode_finalize, __right_value543, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value546) ? __right_value546 = come_decrement_ref_count(__right_value546, ((struct sNode*)__right_value546)->finalize, ((struct sNode*)__right_value546)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__130) ? __result_obj__130 = come_decrement_ref_count(__result_obj__130, ((struct sNode*)__result_obj__130)->finalize, ((struct sNode*)__result_obj__130)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__130;
        }
    }
    else if(({    (_condtional_value_X401=(*info->p==76&&*(info->p+1)==39));    _condtional_value_X401;    })) {
        sline_real_84=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(({        (_condtional_value_X402=(*info->p==92));        _condtional_value_X402;        })) {
            quote=(_Bool)1;
            info->p++;
            if(({            (_condtional_value_X403=(xisdigit(*info->p)));            _condtional_value_X403;            })) {
                n_86=0;
                while(({                (_condtional_value_X404=(xisdigit(*info->p)));                _condtional_value_X404;                })) {
                    n_86=n_86*8+*info->p-48;
                    info->p++;
                }
                c_85=n_86;
            }
            else {
                switch (                *info->p) {
                    case 110:
                    c_85=10;
                    info->p++;
                    break;
                    case 116:
                    c_85=9;
                    info->p++;
                    break;
                    case 114:
                    c_85=13;
                    info->p++;
                    break;
                    case 97:
                    c_85=7;
                    info->p++;
                    break;
                    case 92:
                    c_85=92;
                    info->p++;
                    break;
                    case 48:
                    c_85=0;
                    info->p++;
                    if(({                    (_condtional_value_X405=(xisdigit(*info->p)));                    _condtional_value_X405;                    })) {
                        n_87=0;
                        while(({                        (_condtional_value_X406=(xisdigit(*info->p)));                        _condtional_value_X406;                        })) {
                            n_87=n_87*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_85=n_87;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_88[128];
                        memset(&buf_88, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_88,"0x",128);
                        while(({                        (_condtional_value_X407=(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70));                        _condtional_value_X407;                        })) {
                            char buf2_89[2];
                            memset(&buf2_89, 0, sizeof(char)                            *(2)                            );
                            buf2_89[0]=*info->p;
                            buf2_89[1]=0;
                            info->p++;
                            strncat(buf_88,buf2_89,128);
                        }
                        n_90=strtoll(buf_88,((void*)0),0);
                        c_85=n_90;
                    }
                    break;
                    default:
                    c_85=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote=(_Bool)0;
            p2=*(unsigned char*)info->p;
            if(({            (_condtional_value_X408=(p2>127));            _condtional_value_X408;            })) {
                char str[6+1];
                memset(&str, 0, sizeof(char)                *(6+1)                );
                size_91=((p2&0x80)>>7)+((p2&0x40)>>6)+((p2&0x20)>>5)+((p2&0x10)>>4);
                if(({                (_condtional_value_X409=(size_91>6));                _condtional_value_X409;                })) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                    exit(2);
                }
                else {
                    memcpy(str,info->p,size_91);
                    str[size_91]=0;
                    if(({                    (_condtional_value_X410=(mbtowc(&c_85,str,size_91)<0));                    _condtional_value_X410;                    })) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                        exit(2);
                    }
                    else {
                        info->p+=size_91;
                    }
                }
            }
            else {
                c_85=*info->p;
                info->p++;
            }
        }
        if(({        (_condtional_value_X411=(*info->p!=39));        _condtional_value_X411;        })) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
            exit(2);
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_84;
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1830, "struct sNode");
            _inf_obj_value8=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value548=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc_v2(1, sizeof(struct sWCharNode)*(1), "06str.c", 1830, "struct sWCharNode*")),c_85,quote,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sWCharNode_finalize;
            _inf_value8->clone=(void*)sWCharNode_clone;
            _inf_value8->compile=(void*)sWCharNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sWCharNode_kind;
            _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__133 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value551=_inf_value8)));
            come_call_finalizer(sWCharNode_finalize, __right_value548, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value551) ? __right_value551 = come_decrement_ref_count(__right_value551, ((struct sNode*)__right_value551)->finalize, ((struct sNode*)__right_value551)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__133) ? __result_obj__133 = come_decrement_ref_count(__result_obj__133, ((struct sNode*)__result_obj__133)->finalize, ((struct sNode*)__result_obj__133)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__133;
        }
    }
    else if(({    (_condtional_value_X418=(*info->p==76&&*(info->p+1)==34));    _condtional_value_X418;    })) {
        sline_real_92=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_93=info->sline;
        value_94=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1841, "struct buffer*"))));
        while(({        (_condtional_value_X419=(1));        _condtional_value_X419;        })) {
            if(({            (_condtional_value_X420=(*info->p==34));            _condtional_value_X420;            })) {
                info->p++;
                p_95=info->p;
                sline_96=info->sline;
                skip_spaces_and_lf(info);
                if(({                (_condtional_value_X421=(*info->p==34));                _condtional_value_X421;                })) {
                    info->p++;
                }
                else {
                    info->p=p_95;
                    info->sline=sline_96;
                    break;
                }
            }
            else if(({            (_condtional_value_X422=(*info->p==92));            _condtional_value_X422;            })) {
                buffer_append_char(value_94,92);
                info->p++;
                if(({                (_condtional_value_X423=(*info->p==34));                _condtional_value_X423;                })) {
                    buffer_append_char(value_94,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_94,*info->p);
                    info->p++;
                }
            }
            else if(({            (_condtional_value_X424=(*info->p==0));            _condtional_value_X424;            })) {
                sline2_97=info->sline;
                info->sline=sline_93;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(({                (_condtional_value_X425=(*info->p==10));                _condtional_value_X425;                })) {
                    info->sline++;
                }
                buffer_append_char(value_94,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_98=value_94->len;
        wstr=(int*)come_increment_ref_count((int*)come_calloc_v2(1, sizeof(int)*(1*(len_98+1)), "06str.c", 1892, "int*"));
        str_99=value_94->buf;
        if(({        (_condtional_value_X426=(mbstowcs(wstr,str_99,len_98+1)<0));        _condtional_value_X426;        })) {
            perror("mbstowcs");
            exit(1);
        }
        wstr[len_98]=0;
        info->sline_real=sline_real_92;
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 1904, "struct sNode");
        _inf_obj_value9=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value556=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc_v2(1, sizeof(struct sWStringNode)*(1), "06str.c", 1904, "struct sWStringNode*")),(int*)come_increment_ref_count(wstr),sline_93,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sWStringNode_finalize;
        _inf_value9->clone=(void*)sWStringNode_clone;
        _inf_value9->compile=(void*)sWStringNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sWStringNode_kind;
        _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__136 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value560=_inf_value9)));
        come_call_finalizer(buffer_finalize, value_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sWStringNode_finalize, __right_value556, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value560) ? __right_value560 = come_decrement_ref_count(__right_value560, ((struct sNode*)__right_value560)->finalize, ((struct sNode*)__right_value560)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__136) ? __result_obj__136 = come_decrement_ref_count(__result_obj__136, ((struct sNode*)__result_obj__136)->finalize, ((struct sNode*)__result_obj__136)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__136;
        come_call_finalizer(buffer_finalize, value_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(({    (_condtional_value_X432=((*info->p==115||*info->p==83)&&*(info->p+1)==34));    _condtional_value_X432;    })) {
        sline_real_100=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_101=info->sline;
        exps_102=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1915, "struct list$1sNode$ph*"))));
        value_103=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 1916, "struct buffer*"))));
        while(({        (_condtional_value_X433=(1));        _condtional_value_X433;        })) {
            if(({            (_condtional_value_X434=(*info->p==34));            _condtional_value_X434;            })) {
                info->p++;
                p_104=info->p;
                sline_105=info->sline;
                skip_spaces_and_lf(info);
                if(({                (_condtional_value_X435=(*info->p==34));                _condtional_value_X435;                })) {
                    info->p++;
                }
                else {
                    info->p=p_104;
                    info->sline=sline_105;
                    break;
                }
            }
            else if(({            (_condtional_value_X436=(*info->p==37));            _condtional_value_X436;            })) {
                buffer_append_char(value_103,37);
                buffer_append_char(value_103,37);
                info->p++;
            }
            else if(({            (_condtional_value_X437=(*info->p==92));            _condtional_value_X437;            })) {
                buffer_append_char(value_103,92);
                info->p++;
                if(({                (_condtional_value_X438=(xisdigit(*info->p)));                _condtional_value_X438;                })) {
                    len_106=0;
                    while(({                    (_condtional_value_X439=(xisdigit(*info->p)&&len_106<3));                    _condtional_value_X439;                    })) {
                        buffer_append_char(value_103,*info->p);
                        info->p++;
                        len_106++;
                    }
                }
                else if(({                (_condtional_value_X440=(*info->p==120||*info->p==88));                _condtional_value_X440;                })) {
                    buffer_append_char(value_103,*info->p);
                    info->p++;
                    while(({                    (_condtional_value_X441=(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70));                    _condtional_value_X441;                    })) {
                        buffer_append_char(value_103,*info->p);
                        info->p++;
                    }
                }
                else if(({                (_condtional_value_X442=(*info->p==123));                _condtional_value_X442;                })) {
                    info->p++;
                    exp_107=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_102,(struct sNode*)come_increment_ref_count(exp_107));
                    if(({                    (_condtional_value_X443=(*info->p==125));                    _condtional_value_X443;                    })) {
                        info->p++;
                    }
                    buffer_append_str(value_103,"%s");
                    ((exp_107) ? exp_107 = come_decrement_ref_count(exp_107, ((struct sNode*)exp_107)->finalize, ((struct sNode*)exp_107)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    switch (                    *info->p) {
                        case 48:
                        buffer_append_char(value_103,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_103,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_103,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_103,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_103,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_103,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_103,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_103,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_103,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_103,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(({            (_condtional_value_X444=(*info->p==0));            _condtional_value_X444;            })) {
                sline2_108=info->sline;
                info->sline=sline_101;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(({                (_condtional_value_X445=(*info->p==10));                _condtional_value_X445;                })) {
                    info->sline++;
                }
                buffer_append_char(value_103,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_100;
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2064, "struct sNode");
        _inf_obj_value10=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value568=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "06str.c", 2064, "struct sSStringNode*")),(char*)come_increment_ref_count(buffer_to_string(value_103)),(struct list$1sNode$ph*)come_increment_ref_count(exps_102),sline_101,info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sSStringNode_finalize;
        _inf_value10->clone=(void*)sSStringNode_clone;
        _inf_value10->compile=(void*)sSStringNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sSStringNode_kind;
        _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__137 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value569=_inf_value10)));
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, value_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sSStringNode_finalize, __right_value568, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value569) ? __right_value569 = come_decrement_ref_count(__right_value569, ((struct sNode*)__right_value569)->finalize, ((struct sNode*)__right_value569)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__137) ? __result_obj__137 = come_decrement_ref_count(__result_obj__137, ((struct sNode*)__result_obj__137)->finalize, ((struct sNode*)__result_obj__137)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__137;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, value_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_condtional_value_X446=(*info->p==91));    _condtional_value_X446;    })) {
        sline_real_109=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_110=info->p;
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        node_111=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma;
        p2_112=info->p;
        first_element_source=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "06str.c", 2083, "struct buffer*"))));
        buffer_append(first_element_source,p_110,p2_112-p_110);
        buffer_append_char(first_element_source,0);
        list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2088, "struct list$1sNode$ph*"))));
        map_keys=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2090, "struct list$1sNode$ph*"))));
        map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2091, "struct list$1sNode$ph*"))));
        if(({        (_condtional_value_X447=(*info->p==58));        _condtional_value_X447;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(map_keys,(struct sNode*)come_increment_ref_count(node_111));
            no_comma_113=info->no_comma;
            info->no_comma=(_Bool)1;
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_113;
            list$1sNode$ph_push_back(map_elements,(struct sNode*)come_increment_ref_count(node2));
            if(({            (_condtional_value_X448=(*info->p==93));            _condtional_value_X448;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2114, "struct sNode");
                _inf_obj_value11=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value581=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "06str.c", 2114, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys),(struct list$1sNode$ph*)come_increment_ref_count(map_elements),info))));
                _inf_value11->_protocol_obj=_inf_obj_value11;
                _inf_value11->finalize=(void*)sMapNode_finalize;
                _inf_value11->clone=(void*)sMapNode_clone;
                _inf_value11->compile=(void*)sMapNode_compile;
                _inf_value11->sline=(void*)sNodeBase_sline;
                _inf_value11->sline_real=(void*)sNodeBase_sline_real;
                _inf_value11->sname=(void*)sNodeBase_sname;
                _inf_value11->terminated=(void*)sNodeBase_terminated;
                _inf_value11->kind=(void*)sMapNode_kind;
                _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
                __result_obj__140 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value586=_inf_value11)));
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sMapNode_finalize, __right_value581, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value586) ? __right_value586 = come_decrement_ref_count(__right_value586, ((struct sNode*)__right_value586)->finalize, ((struct sNode*)__right_value586)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                ((__result_obj__140) ? __result_obj__140 = come_decrement_ref_count(__result_obj__140, ((struct sNode*)__result_obj__140)->finalize, ((struct sNode*)__result_obj__140)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__140;
            }
            else {
                expected_next_character(44,info);
                while(({                (_condtional_value_X455=((_Bool)1));                _condtional_value_X455;                })) {
                    no_comma_114=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_115=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_114;
                    list$1sNode$ph_push_back(map_keys,(struct sNode*)come_increment_ref_count(node2_115));
                    expected_next_character(58,info);
                    no_comma_114=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_114;
                    list$1sNode$ph_push_back(map_elements,(struct sNode*)come_increment_ref_count(node3));
                    if(({                    (_condtional_value_X456=(*info->p==0));                    _condtional_value_X456;                    })) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(({                    (_condtional_value_X457=(*info->p==44));                    _condtional_value_X457;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(({                    (_condtional_value_X458=(*info->p==93));                    _condtional_value_X458;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_115) ? node2_115 = come_decrement_ref_count(node2_115, ((struct sNode*)node2_115)->finalize, ((struct sNode*)node2_115)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    ((node2_115) ? node2_115 = come_decrement_ref_count(node2_115, ((struct sNode*)node2_115)->finalize, ((struct sNode*)node2_115)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2159, "struct sNode");
                _inf_obj_value12=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value590=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "06str.c", 2159, "struct sMapNode*")),(struct list$1sNode$ph*)come_increment_ref_count(map_keys),(struct list$1sNode$ph*)come_increment_ref_count(map_elements),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sMapNode_finalize;
                _inf_value12->clone=(void*)sMapNode_clone;
                _inf_value12->compile=(void*)sMapNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sNodeBase_terminated;
                _inf_value12->kind=(void*)sMapNode_kind;
                _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
                __result_obj__141 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value591=_inf_value12)));
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sMapNode_finalize, __right_value590, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value591) ? __right_value591 = come_decrement_ref_count(__right_value591, ((struct sNode*)__right_value591)->finalize, ((struct sNode*)__right_value591)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                ((__result_obj__141) ? __result_obj__141 = come_decrement_ref_count(__result_obj__141, ((struct sNode*)__result_obj__141)->finalize, ((struct sNode*)__result_obj__141)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__141;
            }
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(({        (_condtional_value_X459=(*info->p==93));        _condtional_value_X459;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node_111));
        }
        else if(({        (_condtional_value_X460=(*info->p==44));        _condtional_value_X460;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node_111));
            while(({            (_condtional_value_X461=((_Bool)1));            _condtional_value_X461;            })) {
                no_comma_116=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_117=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_116;
                list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node2_117));
                if(({                (_condtional_value_X462=(*info->p==0));                _condtional_value_X462;                })) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(({                (_condtional_value_X463=(*info->p==44));                _condtional_value_X463;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(({                (_condtional_value_X464=(*info->p==93));                _condtional_value_X464;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_117) ? node2_117 = come_decrement_ref_count(node2_117, ((struct sNode*)node2_117)->finalize, ((struct sNode*)node2_117)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                ((node2_117) ? node2_117 = come_decrement_ref_count(node2_117, ((struct sNode*)node2_117)->finalize, ((struct sNode*)node2_117)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(({        (_condtional_value_X465=(list$1sNode$ph_length(list_elements)>0));        _condtional_value_X465;        })) {
            info->sline_real=sline_real_109;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2211, "struct sNode");
            _inf_obj_value13=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value594=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc_v2(1, sizeof(struct sListNode)*(1), "06str.c", 2211, "struct sListNode*")),(struct list$1sNode$ph*)come_increment_ref_count(list_elements),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sListNode_finalize;
            _inf_value13->clone=(void*)sListNode_clone;
            _inf_value13->compile=(void*)sListNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sListNode_kind;
            _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__144 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value598=_inf_value13)));
            ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sListNode_finalize, __right_value594, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value598) ? __right_value598 = come_decrement_ref_count(__right_value598, ((struct sNode*)__right_value598)->finalize, ((struct sNode*)__right_value598)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__144) ? __result_obj__144 = come_decrement_ref_count(__result_obj__144, ((struct sNode*)__result_obj__144)->finalize, ((struct sNode*)__result_obj__144)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__144;
        }
        else {
        }
        ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_118=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result_obj__145 = (struct sNode*)come_increment_ref_count(node_118);
        ((node_118) ? node_118 = come_decrement_ref_count(node_118, ((struct sNode*)node_118)->finalize, ((struct sNode*)node_118)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__145) ? __result_obj__145 = come_decrement_ref_count(__result_obj__145, ((struct sNode*)__result_obj__145)->finalize, ((struct sNode*)__result_obj__145)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__145;
        ((node_118) ? node_118 = come_decrement_ref_count(node_118, ((struct sNode*)node_118)->finalize, ((struct sNode*)node_118)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __result_obj__146 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__146) ? __result_obj__146 = come_decrement_ref_count(__result_obj__146, ((struct sNode*)__result_obj__146)->finalize, ((struct sNode*)__result_obj__146)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__146;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
_Bool _condtional_value_X335;
struct sSStringNode* __result_obj__119;
void* __right_value407 = (void*)0;
struct sSStringNode* result;
_Bool _condtional_value_X336;
_Bool _condtional_value_X337;
void* __right_value408 = (void*)0;
char* __dec_obj107;
_Bool _condtional_value_X338;
_Bool _condtional_value_X339;
void* __right_value409 = (void*)0;
char* __dec_obj108;
_Bool _condtional_value_X340;
void* __right_value410 = (void*)0;
struct list$1sNode$ph* __dec_obj109;
struct sSStringNode* __result_obj__120;
    if(({    (_condtional_value_X335=(self==(void*)0));    _condtional_value_X335;    })) {
        __result_obj__119 = (void*)0;
        return __result_obj__119;
    }
    result=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc_v2(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*"));
    if(({    (_condtional_value_X336=(self!=((void*)0)));    _condtional_value_X336;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X337=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X337;    })) {
        __dec_obj107=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSStringNode_clone", 5, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X338=(self!=((void*)0)));    _condtional_value_X338;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X339=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X339;    })) {
        __dec_obj108=result->value,
        result->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sSStringNode_clone", 7, "char*"));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X340=(self!=((void*)0)&&self->exps!=((void*)0)));    _condtional_value_X340;    })) {
        __dec_obj109=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__120 = result;
    come_call_finalizer(sSStringNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__120;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
_Bool _condtional_value_X360;
struct sBufferNode* __result_obj__123;
void* __right_value422 = (void*)0;
struct sBufferNode* result;
_Bool _condtional_value_X361;
_Bool _condtional_value_X362;
void* __right_value423 = (void*)0;
char* __dec_obj110;
_Bool _condtional_value_X363;
_Bool _condtional_value_X364;
void* __right_value424 = (void*)0;
struct buffer* __dec_obj111;
_Bool _condtional_value_X365;
struct sBufferNode* __result_obj__124;
    if(({    (_condtional_value_X360=(self==(void*)0));    _condtional_value_X360;    })) {
        __result_obj__123 = (void*)0;
        return __result_obj__123;
    }
    result=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc_v2(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*"));
    if(({    (_condtional_value_X361=(self!=((void*)0)));    _condtional_value_X361;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X362=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X362;    })) {
        __dec_obj110=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBufferNode_clone", 5, "char*"));
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X363=(self!=((void*)0)));    _condtional_value_X363;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X364=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X364;    })) {
        __dec_obj111=result->value,
        result->value=(struct buffer*)come_increment_ref_count(buffer_clone(self->value));
        come_call_finalizer(buffer_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X365=(self!=((void*)0)));    _condtional_value_X365;    })) {
        result->size=self->size;
    }
    __result_obj__124 = result;
    come_call_finalizer(sBufferNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__124;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
_Bool _condtional_value_X396;
struct sCharNode* __result_obj__128;
void* __right_value544 = (void*)0;
struct sCharNode* result;
_Bool _condtional_value_X397;
_Bool _condtional_value_X398;
void* __right_value545 = (void*)0;
char* __dec_obj112;
_Bool _condtional_value_X399;
_Bool _condtional_value_X400;
struct sCharNode* __result_obj__129;
    if(({    (_condtional_value_X396=(self==(void*)0));    _condtional_value_X396;    })) {
        __result_obj__128 = (void*)0;
        return __result_obj__128;
    }
    result=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc_v2(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*"));
    if(({    (_condtional_value_X397=(self!=((void*)0)));    _condtional_value_X397;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X398=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X398;    })) {
        __dec_obj112=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCharNode_clone", 5, "char*"));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X399=(self!=((void*)0)));    _condtional_value_X399;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X400=(self!=((void*)0)));    _condtional_value_X400;    })) {
        result->value=self->value;
    }
    __result_obj__129 = result;
    come_call_finalizer(sCharNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__129;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
_Bool _condtional_value_X412;
struct sWCharNode* __result_obj__131;
void* __right_value549 = (void*)0;
struct sWCharNode* result;
_Bool _condtional_value_X413;
_Bool _condtional_value_X414;
void* __right_value550 = (void*)0;
char* __dec_obj113;
_Bool _condtional_value_X415;
_Bool _condtional_value_X416;
_Bool _condtional_value_X417;
struct sWCharNode* __result_obj__132;
    if(({    (_condtional_value_X412=(self==(void*)0));    _condtional_value_X412;    })) {
        __result_obj__131 = (void*)0;
        return __result_obj__131;
    }
    result=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc_v2(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*"));
    if(({    (_condtional_value_X413=(self!=((void*)0)));    _condtional_value_X413;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X414=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X414;    })) {
        __dec_obj113=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWCharNode_clone", 5, "char*"));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X415=(self!=((void*)0)));    _condtional_value_X415;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X416=(self!=((void*)0)));    _condtional_value_X416;    })) {
        result->value=self->value;
    }
    if(({    (_condtional_value_X417=(self!=((void*)0)));    _condtional_value_X417;    })) {
        result->quote=self->quote;
    }
    __result_obj__132 = result;
    come_call_finalizer(sWCharNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__132;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
_Bool _condtional_value_X427;
struct sWStringNode* __result_obj__134;
void* __right_value557 = (void*)0;
struct sWStringNode* result;
_Bool _condtional_value_X428;
_Bool _condtional_value_X429;
void* __right_value558 = (void*)0;
char* __dec_obj114;
_Bool _condtional_value_X430;
_Bool _condtional_value_X431;
void* __right_value559 = (void*)0;
int* __dec_obj115;
struct sWStringNode* __result_obj__135;
    if(({    (_condtional_value_X427=(self==(void*)0));    _condtional_value_X427;    })) {
        __result_obj__134 = (void*)0;
        return __result_obj__134;
    }
    result=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc_v2(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*"));
    if(({    (_condtional_value_X428=(self!=((void*)0)));    _condtional_value_X428;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X429=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X429;    })) {
        __dec_obj114=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWStringNode_clone", 5, "char*"));
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X430=(self!=((void*)0)));    _condtional_value_X430;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X431=(self!=((void*)0)&&self->value!=((void*)0)));    _condtional_value_X431;    })) {
        __dec_obj115=result->value,
        result->value=(int*)come_increment_ref_count((int*)come_memdup(self->value, "sWStringNode_clone", 7, "int*"));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__135 = result;
    come_call_finalizer(sWStringNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__135;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
_Bool _condtional_value_X449;
struct sMapNode* __result_obj__138;
void* __right_value582 = (void*)0;
struct sMapNode* result;
_Bool _condtional_value_X450;
_Bool _condtional_value_X451;
void* __right_value583 = (void*)0;
char* __dec_obj116;
_Bool _condtional_value_X452;
_Bool _condtional_value_X453;
void* __right_value584 = (void*)0;
struct list$1sNode$ph* __dec_obj117;
_Bool _condtional_value_X454;
void* __right_value585 = (void*)0;
struct list$1sNode$ph* __dec_obj118;
struct sMapNode* __result_obj__139;
    if(({    (_condtional_value_X449=(self==(void*)0));    _condtional_value_X449;    })) {
        __result_obj__138 = (void*)0;
        return __result_obj__138;
    }
    result=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc_v2(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*"));
    if(({    (_condtional_value_X450=(self!=((void*)0)));    _condtional_value_X450;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X451=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X451;    })) {
        __dec_obj116=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMapNode_clone", 5, "char*"));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X452=(self!=((void*)0)));    _condtional_value_X452;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X453=(self!=((void*)0)&&self->map_key_elements!=((void*)0)));    _condtional_value_X453;    })) {
        __dec_obj117=result->map_key_elements,
        result->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_key_elements));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X454=(self!=((void*)0)&&self->map_elements!=((void*)0)));    _condtional_value_X454;    })) {
        __dec_obj118=result->map_elements,
        result->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_elements));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__139 = result;
    come_call_finalizer(sMapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__139;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
_Bool _condtional_value_X466;
struct sListNode* __result_obj__142;
void* __right_value595 = (void*)0;
struct sListNode* result;
_Bool _condtional_value_X467;
_Bool _condtional_value_X468;
void* __right_value596 = (void*)0;
char* __dec_obj119;
_Bool _condtional_value_X469;
_Bool _condtional_value_X470;
void* __right_value597 = (void*)0;
struct list$1sNode$ph* __dec_obj120;
struct sListNode* __result_obj__143;
    if(({    (_condtional_value_X466=(self==(void*)0));    _condtional_value_X466;    })) {
        __result_obj__142 = (void*)0;
        return __result_obj__142;
    }
    result=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc_v2(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*"));
    if(({    (_condtional_value_X467=(self!=((void*)0)));    _condtional_value_X467;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X468=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X468;    })) {
        __dec_obj119=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sListNode_clone", 5, "char*"));
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X469=(self!=((void*)0)));    _condtional_value_X469;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X470=(self!=((void*)0)&&self->list_elements!=((void*)0)));    _condtional_value_X470;    })) {
        __dec_obj120=result->list_elements,
        result->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->list_elements));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__143 = result;
    come_call_finalizer(sListNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__143;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
_Bool _condtional_value_X471;
char* p;
char* name;
_Bool _condtional_value_X472;
void* __right_value602 = (void*)0;
char* __dec_obj121;
_Bool no_comma;
void* __right_value603 = (void*)0;
struct sNode* node;
void* __right_value604 = (void*)0;
struct sNode* __dec_obj122;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
_Bool _condtional_value_X475;
_Bool _condtional_value_X476;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sNode* _inf_value14;
struct sTupleNode* _inf_obj_value14;
void* __right_value623 = (void*)0;
struct sNode* __result_obj__154;
name = (void*)0;
    tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 2226, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    while(({    (_condtional_value_X471=((_Bool)1));    _condtional_value_X471;    })) {
        p=info->p;
        if(({        (_condtional_value_X472=(named_tuple));        _condtional_value_X472;        })) {
            __dec_obj121=name,
            name=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj122=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node),info));
        (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0, (void*)0) :0);
        info->no_comma=no_comma;
        list$1tuple2$2char$phsNode$ph$ph_push_back(tuple_elements,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2245, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)come_memdup(name, "06str.c", 2245, "char*")),(struct sNode*)come_increment_ref_count(node))));
        if(({        (_condtional_value_X475=(*info->p==44));        _condtional_value_X475;        })) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(({        (_condtional_value_X476=(*info->p==41));        _condtional_value_X476;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "06str.c", 2262, "struct sNode");
    _inf_obj_value14=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value612=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc_v2(1, sizeof(struct sTupleNode)*(1), "06str.c", 2262, "struct sTupleNode*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements),info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sTupleNode_finalize;
    _inf_value14->clone=(void*)sTupleNode_clone;
    _inf_value14->compile=(void*)sTupleNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sNodeBase_terminated;
    _inf_value14->kind=(void*)sTupleNode_kind;
    _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__154 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value623=_inf_value14)));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sTupleNode_finalize, __right_value612, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value623) ? __right_value623 = come_decrement_ref_count(__right_value623, ((struct sNode*)__right_value623)->finalize, ((struct sNode*)__right_value623)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__154) ? __result_obj__154 = come_decrement_ref_count(__result_obj__154, ((struct sNode*)__result_obj__154)->finalize, ((struct sNode*)__result_obj__154)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__154;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
_Bool _condtional_value_X473;
void* __right_value605 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj123;
_Bool _condtional_value_X474;
void* __right_value606 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_119;
struct tuple2$2char$phsNode$ph* __dec_obj124;
void* __right_value607 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_120;
struct tuple2$2char$phsNode$ph* __dec_obj125;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__147;
    if(({    (_condtional_value_X473=(self->len==0));    _condtional_value_X473;    })) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value605=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj123=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X474=(self->len==1));    _condtional_value_X474;    })) {
        litem_119=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value606=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_119->prev=self->head;
        litem_119->next=((void*)0);
        __dec_obj124=litem_119->item,
        litem_119->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_119;
        self->head->next=litem_119;
    }
    else {
        litem_120=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value607=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_120->prev=self->tail;
        litem_120->next=((void*)0);
        __dec_obj125=litem_120->item,
        litem_120->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_120;
        self->tail=litem_120;
    }
    self->len++;
    __result_obj__147 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__147;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
_Bool _condtional_value_X477;
struct sTupleNode* __result_obj__148;
void* __right_value613 = (void*)0;
struct sTupleNode* result;
_Bool _condtional_value_X478;
_Bool _condtional_value_X479;
void* __right_value614 = (void*)0;
char* __dec_obj126;
_Bool _condtional_value_X480;
_Bool _condtional_value_X481;
void* __right_value622 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj129;
struct sTupleNode* __result_obj__153;
    if(({    (_condtional_value_X477=(self==(void*)0));    _condtional_value_X477;    })) {
        __result_obj__148 = (void*)0;
        return __result_obj__148;
    }
    result=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc_v2(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*"));
    if(({    (_condtional_value_X478=(self!=((void*)0)));    _condtional_value_X478;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X479=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X479;    })) {
        __dec_obj126=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTupleNode_clone", 5, "char*"));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X480=(self!=((void*)0)));    _condtional_value_X480;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X481=(self!=((void*)0)&&self->tuple_elements!=((void*)0)));    _condtional_value_X481;    })) {
        __dec_obj129=result->tuple_elements,
        result->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->tuple_elements));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__153 = result;
    come_call_finalizer(sTupleNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__153;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X482;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__149;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result;
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _condtional_value_X483;
_Bool _condtional_value_X484;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__152;
    if(({    (_condtional_value_X482=(self==((void*)0)));    _condtional_value_X482;    })) {
        __result_obj__149 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__149, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__149;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X483=(it!=((void*)0)));    _condtional_value_X483;    })) {
        if(({        (_condtional_value_X484=(1));        _condtional_value_X484;        })) {
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__152 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__152, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__152;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
_Bool _condtional_value_X485;
struct tuple2$2char$phsNode$ph* __result_obj__150;
void* __right_value617 = (void*)0;
struct tuple2$2char$phsNode$ph* result;
_Bool _condtional_value_X486;
void* __right_value618 = (void*)0;
char* __dec_obj127;
_Bool _condtional_value_X487;
void* __right_value619 = (void*)0;
struct sNode* __dec_obj128;
struct tuple2$2char$phsNode$ph* __result_obj__151;
    if(({    (_condtional_value_X485=(self==(void*)0));    _condtional_value_X485;    })) {
        __result_obj__150 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__150, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__150;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(({    (_condtional_value_X486=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X486;    })) {
        __dec_obj127=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X487=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X487;    })) {
        __dec_obj128=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__151 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__151, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__151;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
_Bool _condtional_value_X488;
_Bool _condtional_value_X489;
    if(({    (_condtional_value_X488=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X488;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X489=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X489;    })) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

