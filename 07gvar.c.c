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

struct tuple3$3sType$phchar$phchar$ph
{
    struct sType* v1;
    char* v2;
    char* v3;
};

struct list_item$1tuple3$3sType$phchar$phchar$ph$ph
{
    struct tuple3$3sType$phchar$phchar$ph* item;
    struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* prev;
    struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* next;
};

struct list$1tuple3$3sType$phchar$phchar$ph$ph
{
    struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* head;
    struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* tail;
    int len;
    struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* it;
};

struct sGlobalVariable
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    char* name;
    struct sNode* right_node;
    char* array_initializer;
    struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare;
};

struct sExternalGlobalVariable
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    char* name;
    struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare;
};

struct tuple3$3sType$phchar$phvoid$p
{
    struct sType* v1;
    char* v2;
    void* v3;
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
struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info);
char* sGlobalVariable_kind(struct sGlobalVariable* self);
_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static void list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static void list_item$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* self);
static void tuple3$3sType$phchar$phchar$ph$p_finalize(struct tuple3$3sType$phchar$phchar$ph* self);
static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_add(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self, struct tuple3$3sType$phchar$phchar$ph* item);
static struct tuple3$3sType$phchar$phchar$ph* tuple3$3sType$phchar$phchar$ph_clone(struct tuple3$3sType$phchar$phchar$ph* self);
static void tuple3$3sType$phchar$phchar$ph_finalize(struct tuple3$3sType$phchar$phchar$ph* self);
static void list$1tuple3$3sType$phchar$phchar$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static void sGlobalVariable_finalize(struct sGlobalVariable* self);
static struct tuple3$3sType$phchar$phchar$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_begin(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static _Bool list$1tuple3$3sType$phchar$phchar$ph$ph_end(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
static struct tuple3$3sType$phchar$phchar$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_next(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self);
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
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static void CVALUE_finalize(struct CVALUE* self);
struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare, struct sType* type, char* name, struct sInfo* info);
char* sExternalGlobalVariable_kind(struct sExternalGlobalVariable* self);
_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info);
static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self);
struct sNode* parse_global_variable(struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self, struct tuple3$3sType$phchar$phchar$ph* item);
static struct tuple3$3sType$phchar$phchar$ph* tuple3$3sType$phchar$phchar$ph_initialize(struct tuple3$3sType$phchar$phchar$ph* self, struct sType* v1, char* v2, char* v3);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self);
static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self);
// uniq global variable
// inline function

// body function
struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value40 = (void*)0;
struct sType* __dec_obj26;
void* __right_value41 = (void*)0;
char* __dec_obj27;
struct sNode* __dec_obj28;
char* __dec_obj29;
void* __right_value53 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __dec_obj36;
struct sGlobalVariable* __result_obj__23;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj26=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj27=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj28=self->right_node,
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj29=self->array_initializer,
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj36=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phchar$ph$ph$p_clone(multiple_declare));
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__23 = (struct sGlobalVariable*)come_increment_ref_count(self);
    come_call_finalizer(sGlobalVariable_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sGlobalVariable_finalize, __result_obj__23, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__23;
}

char* sGlobalVariable_kind(struct sGlobalVariable* self){
void* __right_value54 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value54=__builtin_string("sGlobalVariable"))));
    (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__24;
}

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info){
void* __right_value55 = (void*)0;
struct sType* type;
void* __right_value56 = (void*)0;
char* name;
struct sNode* right_node;
void* __right_value57 = (void*)0;
char* array_initializer;
_Bool _condtional_value_X133;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* o2_saved;
struct tuple3$3sType$phchar$phchar$ph* it;
_Bool _condtional_value_X136;
_Bool _condtional_value_X137;
_Bool _condtional_value_X140;
struct tuple3$3sType$phchar$phchar$ph* multiple_assign_var1 = (void*)0;
struct sType* type_10=0;
char* name_11=0;
char* initializer=0;
void* __right_value58 = (void*)0;
_Bool _condtional_value_X141;
_Bool _condtional_value_X142;
void* __right_value59 = (void*)0;
char* id;
void* __right_value60 = (void*)0;
_Bool _condtional_value_X143;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
_Bool _condtional_value_X236;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
_Bool _condtional_value_X237;
_Bool _condtional_value_X238;
_Bool _condtional_value_X239;
void* __right_value90 = (void*)0;
char* id_28;
void* __right_value91 = (void*)0;
_Bool _condtional_value_X240;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
_Bool _condtional_value_X241;
_Bool Value;
_Bool _condtional_value_X242;
_Bool __result_obj__64;
void* __right_value103 = (void*)0;
struct CVALUE* come_value;
_Bool _condtional_value_X243;
_Bool _condtional_value_X244;
void* __right_value104 = (void*)0;
char* id_29;
void* __right_value105 = (void*)0;
_Bool _condtional_value_X245;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
_Bool _condtional_value_X250;
_Bool _condtional_value_X251;
void* __right_value117 = (void*)0;
char* id_30;
void* __right_value118 = (void*)0;
_Bool _condtional_value_X252;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
_Bool __result_obj__65;
    type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
    name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "07gvar.c", 25, "char*"));
    right_node=self->right_node;
    array_initializer=(char*)come_increment_ref_count((char*)come_memdup(self->array_initializer, "07gvar.c", 27, "char*"));
    if(({    (_condtional_value_X133=(self->multiple_declare));    _condtional_value_X133;    })) {
        for(        ({        (_condtional_value_X136=(o2_saved=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(self->multiple_declare),it=list$1tuple3$3sType$phchar$phchar$ph$ph_begin(o2_saved)));        _condtional_value_X136;        });        ({        (_condtional_value_X137=(!list$1tuple3$3sType$phchar$phchar$ph$ph_end(o2_saved)));        _condtional_value_X137;        });        ({        (_condtional_value_X140=(it=list$1tuple3$3sType$phchar$phchar$ph$ph_next(o2_saved)));        _condtional_value_X140;        })        ){
            multiple_assign_var1=it;
            type_10=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            name_11=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            initializer=(char*)come_increment_ref_count(multiple_assign_var1->v3);
            add_variable_to_global_table(name_11,(struct sType*)come_increment_ref_count(sType_clone(type_10)),info);
            if(({            (_condtional_value_X141=(info->output_header_file));            _condtional_value_X141;            })) {
                if(({                (_condtional_value_X142=(!type_10->mStatic));                _condtional_value_X142;                })) {
                    id=(char*)come_increment_ref_count(__builtin_string(name_11));
                    add_come_code_at_come_header(info,id,"extern %s;\n",((char*)(__right_value60=make_define_var(type_10,name_11,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0))));
                    (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1, 0, (void*)0));
                    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            else if(({            (_condtional_value_X143=(type_10->mUniq));            _condtional_value_X143;            })) {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_11)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value71=xsprintf("extern %s;\n",((char*)(__right_value70=make_define_var(type_10,name_11,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0)))))))));
                (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value71 = come_decrement_ref_count(__right_value71, (void*)0, (void*)0, 1, 0, (void*)0));
                map$2char$phchar$ph_insert(info->uniq_definition,(char*)come_increment_ref_count(__builtin_string(name_11)),(char*)come_increment_ref_count(xsprintf("%s;\n",((char*)(__right_value79=make_define_var(type_10,name_11,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0))))));
                (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else if(({            (_condtional_value_X236=(initializer));            _condtional_value_X236;            })) {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_11)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value83=xsprintf("%s=%s;",((char*)(__right_value82=make_define_var(type_10,name_11,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0))),initializer))))));
                (__right_value82 = come_decrement_ref_count(__right_value82, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_11)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value87=xsprintf("%s;",((char*)(__right_value86=make_define_var(type_10,name_11,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0)))))))));
                (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            come_call_finalizer(sType_finalize, type_10, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_11 = come_decrement_ref_count(name_11, (void*)0, (void*)0, 0, 0, (void*)0));
            (initializer = come_decrement_ref_count(initializer, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name,(struct sType*)come_increment_ref_count(sType_clone(type)),info);
        if(({        (_condtional_value_X237=(array_initializer));        _condtional_value_X237;        })) {
            if(({            (_condtional_value_X238=(info->output_header_file));            _condtional_value_X238;            })) {
                if(({                (_condtional_value_X239=(!type->mStatic));                _condtional_value_X239;                })) {
                    id_28=(char*)come_increment_ref_count(__builtin_string(name));
                    add_come_code_at_come_header(info,id_28,"extern %s;\n",((char*)(__right_value91=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0))));
                    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1, 0, (void*)0));
                    (id_28 = come_decrement_ref_count(id_28, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            else if(({            (_condtional_value_X240=(type->mUniq));            _condtional_value_X240;            })) {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value94=xsprintf("extern %s;\n",((char*)(__right_value93=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0)))))))));
                (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1, 0, (void*)0));
                map$2char$phchar$ph_insert(info->uniq_definition,(char*)come_increment_ref_count(__builtin_string(name)),(char*)come_increment_ref_count(xsprintf("%s=%s;\n",((char*)(__right_value97=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0))),array_initializer)));
                (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value101=xsprintf("%s=%s;",((char*)(__right_value100=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0))),array_initializer))))));
                (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        else if(({        (_condtional_value_X241=(right_node));        _condtional_value_X241;        })) {
            Value=node_compile(right_node,info);
            if(({            (_condtional_value_X242=(!Value));            _condtional_value_X242;            })) {
                __result_obj__64 = (_Bool)0;
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                (array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__64;
            }
            else {
            }
            come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(({            (_condtional_value_X243=(info->output_header_file));            _condtional_value_X243;            })) {
                if(({                (_condtional_value_X244=(!type->mStatic));                _condtional_value_X244;                })) {
                    id_29=(char*)come_increment_ref_count(__builtin_string(name));
                    add_come_code_at_come_header(info,id_29,"extern %s;\n",((char*)(__right_value105=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0))));
                    (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1, 0, (void*)0));
                    (id_29 = come_decrement_ref_count(id_29, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            else if(({            (_condtional_value_X245=(type->mUniq));            _condtional_value_X245;            })) {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value108=xsprintf("extern %s;\n",((char*)(__right_value107=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0)))))))));
                (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1, 0, (void*)0));
                map$2char$phchar$ph_insert(info->uniq_definition,(char*)come_increment_ref_count(__builtin_string(name)),(char*)come_increment_ref_count(xsprintf("%s=%s;\n",((char*)(__right_value111=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0))),come_value->c_value)));
                (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value115=xsprintf("%s=%s;",((char*)(__right_value114=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0))),come_value->c_value))))));
                (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(({            (_condtional_value_X250=(info->output_header_file));            _condtional_value_X250;            })) {
                if(({                (_condtional_value_X251=(!type->mStatic));                _condtional_value_X251;                })) {
                    id_30=(char*)come_increment_ref_count(__builtin_string(name));
                    add_come_code_at_come_header(info,id_30,"extern %s;\n",((char*)(__right_value118=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0))));
                    (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1, 0, (void*)0));
                    (id_30 = come_decrement_ref_count(id_30, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            else if(({            (_condtional_value_X252=(type->mUniq));            _condtional_value_X252;            })) {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value121=xsprintf("extern %s;\n",((char*)(__right_value120=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0)))))))));
                (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1, 0, (void*)0));
                map$2char$phchar$ph_insert(info->uniq_definition,(char*)come_increment_ref_count(__builtin_string(name)),(char*)come_increment_ref_count(xsprintf("%s;\n",((char*)(__right_value124=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0))))));
                (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value128=xsprintf("%s;",((char*)(__right_value127=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0)))))))));
                (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
    }
    __result_obj__65 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__65;
}

static void sNodeBase_finalize(struct sNodeBase* self){
_Bool _condtional_value_X1;
    if(({    (_condtional_value_X1=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X1;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
_Bool _condtional_value_X2;
struct sType* __result_obj__1;
void* __right_value1 = (void*)0;
struct sType* result;
_Bool _condtional_value_X3;
_Bool _condtional_value_X4;
void* __right_value2 = (void*)0;
struct sType* __dec_obj1;
_Bool _condtional_value_X27;
void* __right_value3 = (void*)0;
struct sType* __dec_obj2;
_Bool _condtional_value_X28;
void* __right_value11 = (void*)0;
struct list$1sType$ph* __dec_obj6;
_Bool _condtional_value_X35;
void* __right_value12 = (void*)0;
struct sType* __dec_obj7;
_Bool _condtional_value_X36;
void* __right_value14 = (void*)0;
struct sNode* __dec_obj8;
_Bool _condtional_value_X48;
void* __right_value15 = (void*)0;
struct sNode* __dec_obj9;
_Bool _condtional_value_X49;
void* __right_value16 = (void*)0;
char* __dec_obj10;
_Bool _condtional_value_X50;
void* __right_value17 = (void*)0;
char* __dec_obj11;
_Bool _condtional_value_X51;
void* __right_value18 = (void*)0;
char* __dec_obj12;
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
_Bool _condtional_value_X77;
void* __right_value19 = (void*)0;
char* __dec_obj13;
_Bool _condtional_value_X78;
_Bool _condtional_value_X79;
_Bool _condtional_value_X80;
_Bool _condtional_value_X81;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* __dec_obj17;
_Bool _condtional_value_X88;
_Bool _condtional_value_X89;
_Bool _condtional_value_X90;
_Bool _condtional_value_X91;
_Bool _condtional_value_X92;
_Bool _condtional_value_X93;
_Bool _condtional_value_X94;
void* __right_value28 = (void*)0;
char* __dec_obj18;
_Bool _condtional_value_X95;
_Bool _condtional_value_X96;
_Bool _condtional_value_X97;
void* __right_value29 = (void*)0;
struct list$1sType$ph* __dec_obj19;
_Bool _condtional_value_X98;
void* __right_value37 = (void*)0;
struct list$1char$ph* __dec_obj23;
_Bool _condtional_value_X105;
void* __right_value38 = (void*)0;
struct sType* __dec_obj24;
_Bool _condtional_value_X106;
_Bool _condtional_value_X107;
_Bool _condtional_value_X108;
void* __right_value39 = (void*)0;
struct sNode* __dec_obj25;
struct sType* __result_obj__16;
    if(({    (_condtional_value_X2=(self==(void*)0));    _condtional_value_X2;    })) {
        __result_obj__1 = (void*)0;
        return __result_obj__1;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_condtional_value_X3=(self!=((void*)0)));    _condtional_value_X3;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_condtional_value_X4=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X4;    })) {
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X27=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X27;    })) {
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X28=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X28;    })) {
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X35=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X35;    })) {
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X36=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X36;    })) {
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X48=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X48;    })) {
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X49=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X49;    })) {
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X50=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X50;    })) {
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X51=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X51;    })) {
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X52=(self!=((void*)0)));    _condtional_value_X52;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_condtional_value_X53=(self!=((void*)0)));    _condtional_value_X53;    })) {
        result->mUnsigned=self->mUnsigned;
    }
    if(({    (_condtional_value_X54=(self!=((void*)0)));    _condtional_value_X54;    })) {
        result->mShort=self->mShort;
    }
    if(({    (_condtional_value_X55=(self!=((void*)0)));    _condtional_value_X55;    })) {
        result->mLong=self->mLong;
    }
    if(({    (_condtional_value_X56=(self!=((void*)0)));    _condtional_value_X56;    })) {
        result->mLongLong=self->mLongLong;
    }
    if(({    (_condtional_value_X57=(self!=((void*)0)));    _condtional_value_X57;    })) {
        result->mConstant=self->mConstant;
    }
    if(({    (_condtional_value_X58=(self!=((void*)0)));    _condtional_value_X58;    })) {
        result->mAtomic=self->mAtomic;
    }
    if(({    (_condtional_value_X59=(self!=((void*)0)));    _condtional_value_X59;    })) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(({    (_condtional_value_X60=(self!=((void*)0)));    _condtional_value_X60;    })) {
        result->mRegister=self->mRegister;
    }
    if(({    (_condtional_value_X61=(self!=((void*)0)));    _condtional_value_X61;    })) {
        result->mVolatile=self->mVolatile;
    }
    if(({    (_condtional_value_X62=(self!=((void*)0)));    _condtional_value_X62;    })) {
        result->mStatic=self->mStatic;
    }
    if(({    (_condtional_value_X63=(self!=((void*)0)));    _condtional_value_X63;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_condtional_value_X64=(self!=((void*)0)));    _condtional_value_X64;    })) {
        result->mRecord=self->mRecord;
    }
    if(({    (_condtional_value_X65=(self!=((void*)0)));    _condtional_value_X65;    })) {
        result->mExtern=self->mExtern;
    }
    if(({    (_condtional_value_X66=(self!=((void*)0)));    _condtional_value_X66;    })) {
        result->mRestrict=self->mRestrict;
    }
    if(({    (_condtional_value_X67=(self!=((void*)0)));    _condtional_value_X67;    })) {
        result->mImmutable=self->mImmutable;
    }
    if(({    (_condtional_value_X68=(self!=((void*)0)));    _condtional_value_X68;    })) {
        result->mTask=self->mTask;
    }
    if(({    (_condtional_value_X69=(self!=((void*)0)));    _condtional_value_X69;    })) {
        result->mHeap=self->mHeap;
    }
    if(({    (_condtional_value_X70=(self!=((void*)0)));    _condtional_value_X70;    })) {
        result->mChannel=self->mChannel;
    }
    if(({    (_condtional_value_X71=(self!=((void*)0)));    _condtional_value_X71;    })) {
        result->mNoHeap=self->mNoHeap;
    }
    if(({    (_condtional_value_X72=(self!=((void*)0)));    _condtional_value_X72;    })) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(({    (_condtional_value_X73=(self!=((void*)0)));    _condtional_value_X73;    })) {
        result->mException=self->mException;
    }
    if(({    (_condtional_value_X74=(self!=((void*)0)));    _condtional_value_X74;    })) {
        result->mInline=self->mInline;
    }
    if(({    (_condtional_value_X75=(self!=((void*)0)));    _condtional_value_X75;    })) {
        result->mNullValue=self->mNullValue;
    }
    if(({    (_condtional_value_X76=(self!=((void*)0)));    _condtional_value_X76;    })) {
        result->mGuardValue=self->mGuardValue;
    }
    if(({    (_condtional_value_X77=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X77;    })) {
        __dec_obj13=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X78=(self!=((void*)0)));    _condtional_value_X78;    })) {
        result->mTypedef=self->mTypedef;
    }
    if(({    (_condtional_value_X79=(self!=((void*)0)));    _condtional_value_X79;    })) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(({    (_condtional_value_X80=(self!=((void*)0)));    _condtional_value_X80;    })) {
        result->mOriginIsArray=self->mOriginIsArray;
    }
    if(({    (_condtional_value_X81=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X81;    })) {
        __dec_obj17=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X88=(self!=((void*)0)));    _condtional_value_X88;    })) {
        result->mPointerNum=self->mPointerNum;
    }
    if(({    (_condtional_value_X89=(self!=((void*)0)));    _condtional_value_X89;    })) {
        result->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(({    (_condtional_value_X90=(self!=((void*)0)));    _condtional_value_X90;    })) {
        result->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(({    (_condtional_value_X91=(self!=((void*)0)));    _condtional_value_X91;    })) {
        result->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(({    (_condtional_value_X92=(self!=((void*)0)));    _condtional_value_X92;    })) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(({    (_condtional_value_X93=(self!=((void*)0)));    _condtional_value_X93;    })) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(({    (_condtional_value_X94=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X94;    })) {
        __dec_obj18=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X95=(self!=((void*)0)));    _condtional_value_X95;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_condtional_value_X96=(self!=((void*)0)));    _condtional_value_X96;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_condtional_value_X97=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X97;    })) {
        __dec_obj19=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X98=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X98;    })) {
        __dec_obj23=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X105=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X105;    })) {
        __dec_obj24=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X106=(self!=((void*)0)));    _condtional_value_X106;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_condtional_value_X107=(self!=((void*)0)));    _condtional_value_X107;    })) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(({    (_condtional_value_X108=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X108;    })) {
        __dec_obj25=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__16 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__16;
}

static void sType_finalize(struct sType* self){
_Bool _condtional_value_X5;
_Bool _condtional_value_X6;
_Bool _condtional_value_X7;
_Bool _condtional_value_X10;
_Bool _condtional_value_X11;
_Bool _condtional_value_X12;
_Bool _condtional_value_X13;
_Bool _condtional_value_X14;
_Bool _condtional_value_X15;
_Bool _condtional_value_X16;
_Bool _condtional_value_X17;
_Bool _condtional_value_X20;
_Bool _condtional_value_X21;
_Bool _condtional_value_X22;
_Bool _condtional_value_X25;
_Bool _condtional_value_X26;
    if(({    (_condtional_value_X5=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X5;    })) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X6=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X6;    })) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X7=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X7;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X10=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X10;    })) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X11=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X11;    })) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X12=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X12;    })) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X13=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X13;    })) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X14=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X14;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X15=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X15;    })) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X16=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X16;    })) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X17=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X17;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X20=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X20;    })) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X21=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X21;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X22=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X22;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X25=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X25;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X26=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X26;    })) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X8;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X8=(it!=((void*)0)));    _condtional_value_X8;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
_Bool _condtional_value_X9;
    if(({    (_condtional_value_X9=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X9;    })) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X18;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X18=(it!=((void*)0)));    _condtional_value_X18;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
_Bool _condtional_value_X19;
    if(({    (_condtional_value_X19=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X19;    })) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X23;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X23=(it!=((void*)0)));    _condtional_value_X23;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
_Bool _condtional_value_X24;
    if(({    (_condtional_value_X24=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X24;    })) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
_Bool _condtional_value_X29;
struct list$1sType$ph* __result_obj__2;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _condtional_value_X30;
_Bool _condtional_value_X31;
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(({    (_condtional_value_X29=(self==((void*)0)));    _condtional_value_X29;    })) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__2;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1sType$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X30=(it!=((void*)0)));    _condtional_value_X30;    })) {
        if(({        (_condtional_value_X31=(1));        _condtional_value_X31;        })) {
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
_Bool _condtional_value_X32;
void* __right_value6 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj3;
_Bool _condtional_value_X33;
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_0;
struct sType* __dec_obj4;
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_1;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__4;
    if(({    (_condtional_value_X32=(self->len==0));    _condtional_value_X32;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value6=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X33=(self->len==1));    _condtional_value_X33;    })) {
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj4=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sType$ph*"))));
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
_Bool _condtional_value_X34;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X34=(it!=((void*)0)));    _condtional_value_X34;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
_Bool _condtional_value_X37;
struct sNode* __result_obj__6;
void* __right_value13 = (void*)0;
struct sNode* result;
_Bool _condtional_value_X38;
_Bool _condtional_value_X39;
_Bool _condtional_value_X40;
_Bool _condtional_value_X41;
_Bool _condtional_value_X42;
_Bool _condtional_value_X43;
_Bool _condtional_value_X44;
_Bool _condtional_value_X45;
_Bool _condtional_value_X46;
_Bool _condtional_value_X47;
struct sNode* __result_obj__7;
    if(({    (_condtional_value_X37=(self==(void*)0));    _condtional_value_X37;    })) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__6;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(({    (_condtional_value_X38=(self!=((void*)0)&&self->clone!=((void*)0)));    _condtional_value_X38;    })) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(({    (_condtional_value_X39=(self!=((void*)0)));    _condtional_value_X39;    })) {
        result->finalize=self->finalize;
    }
    if(({    (_condtional_value_X40=(self!=((void*)0)));    _condtional_value_X40;    })) {
        result->clone=self->clone;
    }
    if(({    (_condtional_value_X41=(self!=((void*)0)));    _condtional_value_X41;    })) {
        result->compile=self->compile;
    }
    if(({    (_condtional_value_X42=(self!=((void*)0)));    _condtional_value_X42;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X43=(self!=((void*)0)));    _condtional_value_X43;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X44=(self!=((void*)0)));    _condtional_value_X44;    })) {
        result->sname=self->sname;
    }
    if(({    (_condtional_value_X45=(self!=((void*)0)));    _condtional_value_X45;    })) {
        result->terminated=self->terminated;
    }
    if(({    (_condtional_value_X46=(self!=((void*)0)));    _condtional_value_X46;    })) {
        result->kind=self->kind;
    }
    if(({    (_condtional_value_X47=(self!=((void*)0)));    _condtional_value_X47;    })) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
_Bool _condtional_value_X82;
struct list$1sNode$ph* __result_obj__8;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X83;
_Bool _condtional_value_X84;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(({    (_condtional_value_X82=(self==((void*)0)));    _condtional_value_X82;    })) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__8;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1sNode$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X83=(it!=((void*)0)));    _condtional_value_X83;    })) {
        if(({        (_condtional_value_X84=(1));        _condtional_value_X84;        })) {
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
_Bool _condtional_value_X85;
void* __right_value22 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj14;
_Bool _condtional_value_X86;
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_2;
struct sNode* __dec_obj15;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_3;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__10;
    if(({    (_condtional_value_X85=(self->len==0));    _condtional_value_X85;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value22=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj14=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X86=(self->len==1));    _condtional_value_X86;    })) {
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj15=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sNode$ph*"))));
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
_Bool _condtional_value_X87;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X87=(it!=((void*)0)));    _condtional_value_X87;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
_Bool _condtional_value_X99;
struct list$1char$ph* __result_obj__12;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _condtional_value_X100;
_Bool _condtional_value_X101;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(({    (_condtional_value_X99=(self==((void*)0)));    _condtional_value_X99;    })) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__12;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1char$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X100=(it!=((void*)0)));    _condtional_value_X100;    })) {
        if(({        (_condtional_value_X101=(1));        _condtional_value_X101;        })) {
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
_Bool _condtional_value_X102;
void* __right_value32 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj20;
_Bool _condtional_value_X103;
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_4;
char* __dec_obj21;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_5;
char* __dec_obj22;
struct list$1char$ph* __result_obj__14;
    if(({    (_condtional_value_X102=(self->len==0));    _condtional_value_X102;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value32=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj20=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X103=(self->len==1));    _condtional_value_X103;    })) {
        litem_4=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1char$ph*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj21=litem_4->item,
        litem_4->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1char$ph*"))));
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
_Bool _condtional_value_X104;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X104=(it!=((void*)0)));    _condtional_value_X104;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
_Bool _condtional_value_X109;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __result_obj__17;
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* result;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* it;
_Bool _condtional_value_X115;
_Bool _condtional_value_X116;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __result_obj__22;
    if(({    (_condtional_value_X109=(self==((void*)0)));    _condtional_value_X109;    })) {
        __result_obj__17 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__17;
    }
    result=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phchar$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1tuple3$3sType$phchar$phchar$ph$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X115=(it!=((void*)0)));    _condtional_value_X115;    })) {
        if(({        (_condtional_value_X116=(1));        _condtional_value_X116;        })) {
            list$1tuple3$3sType$phchar$phchar$ph$ph_add(result,(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(tuple3$3sType$phchar$phchar$ph_clone(it->item)));
        }
        else {
            list$1tuple3$3sType$phchar$phchar$ph$ph_add(result,(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(tuple3$3sType$phchar$phchar$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__22 = (struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, __result_obj__22, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__22;
}

static void list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* it;
_Bool _condtional_value_X110;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X110=(it!=((void*)0)));    _condtional_value_X110;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* self){
_Bool _condtional_value_X111;
    if(({    (_condtional_value_X111=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X111;    })) {
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple3$3sType$phchar$phchar$ph$p_finalize(struct tuple3$3sType$phchar$phchar$ph* self){
_Bool _condtional_value_X112;
_Bool _condtional_value_X113;
_Bool _condtional_value_X114;
    if(({    (_condtional_value_X112=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X112;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X113=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X113;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X114=(self!=((void*)0)&&self->v3!=((void*)0)));    _condtional_value_X114;    })) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __result_obj__18;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__18 = (struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__18;
}

static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_add(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self, struct tuple3$3sType$phchar$phchar$ph* item){
_Bool _condtional_value_X117;
void* __right_value44 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* litem;
struct tuple3$3sType$phchar$phchar$ph* __dec_obj30;
_Bool _condtional_value_X118;
void* __right_value45 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* litem_6;
struct tuple3$3sType$phchar$phchar$ph* __dec_obj31;
void* __right_value46 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* litem_7;
struct tuple3$3sType$phchar$phchar$ph* __dec_obj32;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __result_obj__19;
    if(({    (_condtional_value_X117=(self->len==0));    _condtional_value_X117;    })) {
        litem=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)(__right_value44=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj30=litem->item,
        litem->item=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X118=(self->len==1));    _condtional_value_X118;    })) {
        litem_6=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)(__right_value45=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj31=litem_6->item,
        litem_6->item=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)(__right_value46=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj32=litem_7->item,
        litem_7->item=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__19 = self;
    come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__19;
}

static struct tuple3$3sType$phchar$phchar$ph* tuple3$3sType$phchar$phchar$ph_clone(struct tuple3$3sType$phchar$phchar$ph* self){
_Bool _condtional_value_X119;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__20;
void* __right_value47 = (void*)0;
struct tuple3$3sType$phchar$phchar$ph* result;
_Bool _condtional_value_X120;
void* __right_value48 = (void*)0;
struct sType* __dec_obj33;
_Bool _condtional_value_X121;
void* __right_value49 = (void*)0;
char* __dec_obj34;
_Bool _condtional_value_X122;
void* __right_value50 = (void*)0;
char* __dec_obj35;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__21;
    if(({    (_condtional_value_X119=(self==(void*)0));    _condtional_value_X119;    })) {
        __result_obj__20 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, __result_obj__20, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__20;
    }
    result=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phchar$ph)*(1), "tuple3$3sType$phchar$phchar$ph_clone", 3, "struct tuple3$3sType$phchar$phchar$ph*"));
    if(({    (_condtional_value_X120=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X120;    })) {
        __dec_obj33=result->v1,
        result->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X121=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X121;    })) {
        __dec_obj34=result->v2,
        result->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phchar$ph_clone", 5, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X122=(self!=((void*)0)&&self->v3!=((void*)0)));    _condtional_value_X122;    })) {
        __dec_obj35=result->v3,
        result->v3=(char*)come_increment_ref_count((char*)come_memdup(self->v3, "tuple3$3sType$phchar$phchar$ph_clone", 6, "char*"));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__21 = (struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple3$3sType$phchar$phchar$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, __result_obj__21, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__21;
}

static void tuple3$3sType$phchar$phchar$ph_finalize(struct tuple3$3sType$phchar$phchar$ph* self){
_Bool _condtional_value_X123;
_Bool _condtional_value_X124;
_Bool _condtional_value_X125;
    if(({    (_condtional_value_X123=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X123;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X124=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X124;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X125=(self!=((void*)0)&&self->v3!=((void*)0)));    _condtional_value_X125;    })) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1tuple3$3sType$phchar$phchar$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* it;
_Bool _condtional_value_X126;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X126=(it!=((void*)0)));    _condtional_value_X126;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sGlobalVariable_finalize(struct sGlobalVariable* self){
_Bool _condtional_value_X127;
_Bool _condtional_value_X128;
_Bool _condtional_value_X129;
_Bool _condtional_value_X130;
_Bool _condtional_value_X131;
_Bool _condtional_value_X132;
    if(({    (_condtional_value_X127=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X127;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X128=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X128;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X129=(self!=((void*)0)&&self->name!=((void*)0)));    _condtional_value_X129;    })) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X130=(self!=((void*)0)&&self->right_node!=((void*)0)));    _condtional_value_X130;    })) {
        ((self->right_node) ? self->right_node = come_decrement_ref_count(self->right_node, ((struct sNode*)self->right_node)->finalize, ((struct sNode*)self->right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X131=(self!=((void*)0)&&self->array_initializer!=((void*)0)));    _condtional_value_X131;    })) {
        (self->array_initializer = come_decrement_ref_count(self->array_initializer, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X132=(self!=((void*)0)&&self->multiple_declare!=((void*)0)));    _condtional_value_X132;    })) {
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct tuple3$3sType$phchar$phchar$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_begin(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
_Bool _condtional_value_X134;
struct tuple3$3sType$phchar$phchar$ph* result;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__25;
_Bool _condtional_value_X135;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__26;
struct tuple3$3sType$phchar$phchar$ph* result_8;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__27;
result = (void*)0;
result_8 = (void*)0;
    if(({    (_condtional_value_X134=(self==((void*)0)));    _condtional_value_X134;    })) {
        memset(&result,0,sizeof(struct tuple3$3sType$phchar$phchar$ph*));
        __result_obj__25 = result;
        return __result_obj__25;
    }
    self->it=self->head;
    if(({    (_condtional_value_X135=(self->it));    _condtional_value_X135;    })) {
        __result_obj__26 = self->it->item;
        return __result_obj__26;
    }
    memset(&result_8,0,sizeof(struct tuple3$3sType$phchar$phchar$ph*));
    __result_obj__27 = result_8;
    return __result_obj__27;
}

static _Bool list$1tuple3$3sType$phchar$phchar$ph$ph_end(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phchar$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_next(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self){
_Bool _condtional_value_X138;
struct tuple3$3sType$phchar$phchar$ph* result;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__28;
_Bool _condtional_value_X139;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__29;
struct tuple3$3sType$phchar$phchar$ph* result_9;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__30;
result = (void*)0;
result_9 = (void*)0;
    if(({    (_condtional_value_X138=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X138;    })) {
        memset(&result,0,sizeof(struct tuple3$3sType$phchar$phchar$ph*));
        __result_obj__28 = result;
        return __result_obj__28;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X139=(self->it));    _condtional_value_X139;    })) {
        __result_obj__29 = self->it->item;
        return __result_obj__29;
    }
    memset(&result_9,0,sizeof(struct tuple3$3sType$phchar$phchar$ph*));
    __result_obj__30 = result_9;
    return __result_obj__30;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item){
_Bool _condtional_value_X144;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X161;
_Bool _condtional_value_X162;
_Bool _condtional_value_X163;
_Bool _condtional_value_X164;
_Bool _condtional_value_X189;
_Bool _condtional_value_X190;
_Bool _condtional_value_X191;
_Bool _condtional_value_X192;
_Bool _condtional_value_X193;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X196;
_Bool _condtional_value_X197;
_Bool _condtional_value_X200;
_Bool _condtional_value_X201;
_Bool _condtional_value_X202;
struct map$2char$phbuffer$ph* __result_obj__52;
    if(({    (_condtional_value_X144=(self->len*10>=self->size));    _condtional_value_X144;    })) {
        map$2char$phbuffer$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X161=((_Bool)1));    _condtional_value_X161;    })) {
        if(({        (_condtional_value_X162=(self->item_existance[it]));        _condtional_value_X162;        })) {
            if(({            (_condtional_value_X163=(string_equals(self->keys[it],key)));            _condtional_value_X163;            })) {
                if(({                (_condtional_value_X164=(1));                _condtional_value_X164;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X189=(1));                _condtional_value_X189;                })) {
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X190=(it>=self->size));            _condtional_value_X190;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X191=(it==hash));            _condtional_value_X191;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X192=(1));            _condtional_value_X192;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X193=(1));            _condtional_value_X193;            })) {
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
    for(    ({    (_condtional_value_X196=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X196;    });    ({    (_condtional_value_X197=(!list$1char$ph_end(self->key_list)));    _condtional_value_X197;    });    ({    (_condtional_value_X200=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X200;    })    ){
        if(({        (_condtional_value_X201=(string_equals(it2,key)));        _condtional_value_X201;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X202=(!same_key_exist));    _condtional_value_X202;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__52 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__52;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self){
int size;
void* __right_value61 = (void*)0;
char** keys;
void* __right_value62 = (void*)0;
struct buffer** items;
void* __right_value63 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X147;
_Bool _condtional_value_X148;
_Bool _condtional_value_X151;
struct buffer* default_value;
void* __right_value64 = (void*)0;
struct buffer* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X157;
_Bool _condtional_value_X158;
_Bool _condtional_value_X159;
_Bool _condtional_value_X160;
struct buffer* default_value_14;
void* __right_value65 = (void*)0;
default_value = (void*)0;
default_value_14 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value61=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2221, "char**"))));
    items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value62=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(size)), "/usr/local/include/comelang.h", 2222, "struct buffer**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value63=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2223, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X147=(it=map$2char$phbuffer$ph_begin(self)));    _condtional_value_X147;    });    ({    (_condtional_value_X148=(!map$2char$phbuffer$ph_end(self)));    _condtional_value_X148;    });    ({    (_condtional_value_X151=(it=map$2char$phbuffer$ph_next(self)));    _condtional_value_X151;    })    ){
        memset(&default_value,0,sizeof(struct buffer*));
        it2=((struct buffer*)(__right_value64=map$2char$phbuffer$ph_at(self,it,(struct buffer*)come_increment_ref_count(default_value))));
        come_call_finalizer(buffer_finalize, __right_value64, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X157=((_Bool)1));        _condtional_value_X157;        })) {
            if(({            (_condtional_value_X158=(item_existance[n]));            _condtional_value_X158;            })) {
                n++;
                if(({                (_condtional_value_X159=(n>=size));                _condtional_value_X159;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X160=(n==hash));                _condtional_value_X160;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct buffer*)(__right_value65=map$2char$phbuffer$ph_at(self,it,(struct buffer*)come_increment_ref_count(default_value_14))));
                come_call_finalizer(buffer_finalize, __right_value65, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(buffer_finalize, default_value_14, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(buffer_finalize, default_value_14, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
_Bool _condtional_value_X145;
char* result;
char* __result_obj__31;
_Bool _condtional_value_X146;
char* __result_obj__32;
char* result_12;
char* __result_obj__33;
result = (void*)0;
result_12 = (void*)0;
    if(({    (_condtional_value_X145=(self==((void*)0)));    _condtional_value_X145;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__31 = result;
        return __result_obj__31;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X146=(self->key_list->it));    _condtional_value_X146;    })) {
        __result_obj__32 = self->key_list->it->item;
        return __result_obj__32;
    }
    memset(&result_12,0,sizeof(char*));
    __result_obj__33 = result_12;
    return __result_obj__33;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
_Bool _condtional_value_X149;
char* result;
char* __result_obj__34;
_Bool _condtional_value_X150;
char* __result_obj__35;
char* result_13;
char* __result_obj__36;
result = (void*)0;
result_13 = (void*)0;
    if(({    (_condtional_value_X149=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X149;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__34 = result;
        return __result_obj__34;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X150=(self->key_list->it));    _condtional_value_X150;    })) {
        __result_obj__35 = self->key_list->it->item;
        return __result_obj__35;
    }
    memset(&result_13,0,sizeof(char*));
    __result_obj__36 = result_13;
    return __result_obj__36;
}

static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X152;
_Bool _condtional_value_X153;
_Bool _condtional_value_X154;
struct buffer* __result_obj__37;
_Bool _condtional_value_X155;
_Bool _condtional_value_X156;
struct buffer* __result_obj__38;
struct buffer* __result_obj__39;
struct buffer* __result_obj__40;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X152=((_Bool)1));    _condtional_value_X152;    })) {
        if(({        (_condtional_value_X153=(self->item_existance[it]));        _condtional_value_X153;        })) {
            if(({            (_condtional_value_X154=(string_equals(self->keys[it],key)));            _condtional_value_X154;            })) {
                __result_obj__37 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__37, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__37;
            }
            it++;
            if(({            (_condtional_value_X155=(it>=self->size));            _condtional_value_X155;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X156=(it==hash));            _condtional_value_X156;            })) {
                __result_obj__38 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__38, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__38;
            }
        }
        else {
            __result_obj__39 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__39, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__39;
        }
    }
    __result_obj__40 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__40, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__40;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
_Bool _condtional_value_X165;
_Bool _condtional_value_X166;
struct list$1char$ph* __result_obj__44;
    it2=0;
    it=self->head;
    while(({    (_condtional_value_X165=(it!=((void*)0)));    _condtional_value_X165;    })) {
        if(({        (_condtional_value_X166=(string_equals(it->item,item)));        _condtional_value_X166;        })) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__44 = self;
    return __result_obj__44;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
_Bool _condtional_value_X167;
_Bool _condtional_value_X168;
_Bool _condtional_value_X169;
int tmp;
_Bool _condtional_value_X170;
_Bool _condtional_value_X171;
_Bool _condtional_value_X172;
struct list$1char$ph* __result_obj__41;
_Bool _condtional_value_X173;
_Bool _condtional_value_X175;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X176;
_Bool _condtional_value_X177;
struct list_item$1char$ph* prev_it;
_Bool _condtional_value_X178;
_Bool _condtional_value_X179;
struct list_item$1char$ph* it_15;
int i_16;
_Bool _condtional_value_X180;
_Bool _condtional_value_X181;
_Bool _condtional_value_X182;
struct list_item$1char$ph* prev_it_17;
struct list_item$1char$ph* it_18;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_19;
_Bool _condtional_value_X183;
_Bool _condtional_value_X184;
_Bool _condtional_value_X185;
_Bool _condtional_value_X186;
struct list_item$1char$ph* prev_it_20;
_Bool _condtional_value_X187;
_Bool _condtional_value_X188;
struct list$1char$ph* __result_obj__43;
    if(({    (_condtional_value_X167=(head<0));    _condtional_value_X167;    })) {
        head+=self->len;
    }
    if(({    (_condtional_value_X168=(tail<0));    _condtional_value_X168;    })) {
        tail+=self->len+1;
    }
    if(({    (_condtional_value_X169=(head>tail));    _condtional_value_X169;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_condtional_value_X170=(head<0));    _condtional_value_X170;    })) {
        head=0;
    }
    if(({    (_condtional_value_X171=(tail>self->len));    _condtional_value_X171;    })) {
        tail=self->len;
    }
    if(({    (_condtional_value_X172=(head==tail));    _condtional_value_X172;    })) {
        __result_obj__41 = self;
        return __result_obj__41;
    }
    if(({    (_condtional_value_X173=(head==0&&tail==self->len));    _condtional_value_X173;    })) {
        list$1char$ph_reset(self);
    }
    else if(({    (_condtional_value_X175=(head==0));    _condtional_value_X175;    })) {
        it=self->head;
        i=0;
        while(({        (_condtional_value_X176=(it!=((void*)0)));        _condtional_value_X176;        })) {
            if(({            (_condtional_value_X177=(i<tail));            _condtional_value_X177;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(({            (_condtional_value_X178=(i==tail));            _condtional_value_X178;            })) {
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
    else if(({    (_condtional_value_X179=(tail==self->len));    _condtional_value_X179;    })) {
        it_15=self->head;
        i_16=0;
        while(({        (_condtional_value_X180=(it_15!=((void*)0)));        _condtional_value_X180;        })) {
            if(({            (_condtional_value_X181=(i_16==head));            _condtional_value_X181;            })) {
                self->tail=it_15->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_condtional_value_X182=(i_16>=head));            _condtional_value_X182;            })) {
                prev_it_17=it_15;
                it_15=it_15->next;
                i_16++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_17, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_15=it_15->next;
                i_16++;
            }
        }
    }
    else {
        it_18=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_19=0;
        while(({        (_condtional_value_X183=(it_18!=((void*)0)));        _condtional_value_X183;        })) {
            if(({            (_condtional_value_X184=(i_19==head));            _condtional_value_X184;            })) {
                head_prev_it=it_18->prev;
            }
            if(({            (_condtional_value_X185=(i_19==tail));            _condtional_value_X185;            })) {
                tail_it=it_18;
            }
            if(({            (_condtional_value_X186=(i_19>=head&&i_19<tail));            _condtional_value_X186;            })) {
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
        if(({        (_condtional_value_X187=(head_prev_it!=((void*)0)));        _condtional_value_X187;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_condtional_value_X188=(tail_it!=((void*)0)));        _condtional_value_X188;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__43 = self;
    return __result_obj__43;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X174;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__42;
    it=self->head;
    while(({    (_condtional_value_X174=(it!=((void*)0)));    _condtional_value_X174;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__42 = self;
    return __result_obj__42;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
_Bool _condtional_value_X194;
char* result;
char* __result_obj__45;
_Bool _condtional_value_X195;
char* __result_obj__46;
char* result_21;
char* __result_obj__47;
result = (void*)0;
result_21 = (void*)0;
    if(({    (_condtional_value_X194=(self==((void*)0)));    _condtional_value_X194;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__45 = result;
        return __result_obj__45;
    }
    self->it=self->head;
    if(({    (_condtional_value_X195=(self->it));    _condtional_value_X195;    })) {
        __result_obj__46 = self->it->item;
        return __result_obj__46;
    }
    memset(&result_21,0,sizeof(char*));
    __result_obj__47 = result_21;
    return __result_obj__47;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
_Bool _condtional_value_X198;
char* result;
char* __result_obj__48;
_Bool _condtional_value_X199;
char* __result_obj__49;
char* result_22;
char* __result_obj__50;
result = (void*)0;
result_22 = (void*)0;
    if(({    (_condtional_value_X198=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X198;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__48 = result;
        return __result_obj__48;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X199=(self->it));    _condtional_value_X199;    })) {
        __result_obj__49 = self->it->item;
        return __result_obj__49;
    }
    memset(&result_22,0,sizeof(char*));
    __result_obj__50 = result_22;
    return __result_obj__50;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X203;
void* __right_value66 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj37;
_Bool _condtional_value_X204;
void* __right_value67 = (void*)0;
struct list_item$1char$ph* litem_23;
char* __dec_obj38;
void* __right_value68 = (void*)0;
struct list_item$1char$ph* litem_24;
char* __dec_obj39;
struct list$1char$ph* __result_obj__51;
    if(({    (_condtional_value_X203=(self->len==0));    _condtional_value_X203;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value66=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj37=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X204=(self->len==1));    _condtional_value_X204;    })) {
        litem_23=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value67=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1char$ph*"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        __dec_obj38=litem_23->item,
        litem_23->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value68=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1char$ph*"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        __dec_obj39=litem_24->item,
        litem_24->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result_obj__51 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__51;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
_Bool _condtional_value_X205;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X222;
_Bool _condtional_value_X223;
_Bool _condtional_value_X224;
_Bool _condtional_value_X225;
_Bool _condtional_value_X226;
_Bool _condtional_value_X227;
_Bool _condtional_value_X228;
_Bool _condtional_value_X229;
_Bool _condtional_value_X230;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X231;
_Bool _condtional_value_X232;
_Bool _condtional_value_X233;
_Bool _condtional_value_X234;
_Bool _condtional_value_X235;
struct map$2char$phchar$ph* __result_obj__63;
    if(({    (_condtional_value_X205=(self->len*10>=self->size));    _condtional_value_X205;    })) {
        map$2char$phchar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X222=((_Bool)1));    _condtional_value_X222;    })) {
        if(({        (_condtional_value_X223=(self->item_existance[it]));        _condtional_value_X223;        })) {
            if(({            (_condtional_value_X224=(string_equals(self->keys[it],key)));            _condtional_value_X224;            })) {
                if(({                (_condtional_value_X225=(1));                _condtional_value_X225;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X226=(1));                _condtional_value_X226;                })) {
                    (self->items[it] = come_decrement_ref_count(self->items[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->items[it]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X227=(it>=self->size));            _condtional_value_X227;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X228=(it==hash));            _condtional_value_X228;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X229=(1));            _condtional_value_X229;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X230=(1));            _condtional_value_X230;            })) {
                self->items[it]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X231=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X231;    });    ({    (_condtional_value_X232=(!list$1char$ph_end(self->key_list)));    _condtional_value_X232;    });    ({    (_condtional_value_X233=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X233;    })    ){
        if(({        (_condtional_value_X234=(string_equals(it2,key)));        _condtional_value_X234;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X235=(!same_key_exist));    _condtional_value_X235;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__63 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__63;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size;
void* __right_value73 = (void*)0;
char** keys;
void* __right_value74 = (void*)0;
char** items;
void* __right_value75 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X208;
_Bool _condtional_value_X209;
_Bool _condtional_value_X212;
char* default_value;
void* __right_value76 = (void*)0;
char* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X218;
_Bool _condtional_value_X219;
_Bool _condtional_value_X220;
_Bool _condtional_value_X221;
char* default_value_27;
void* __right_value77 = (void*)0;
default_value = (void*)0;
default_value_27 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value73=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2221, "char**"))));
    items=(char**)come_increment_ref_count(((char**)(__right_value74=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2222, "char**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value75=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2223, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X208=(it=map$2char$phchar$ph_begin(self)));    _condtional_value_X208;    });    ({    (_condtional_value_X209=(!map$2char$phchar$ph_end(self)));    _condtional_value_X209;    });    ({    (_condtional_value_X212=(it=map$2char$phchar$ph_next(self)));    _condtional_value_X212;    })    ){
        memset(&default_value,0,sizeof(char*));
        it2=((char*)(__right_value76=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value))));
        (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1, 0, (void*)0));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X218=((_Bool)1));        _condtional_value_X218;        })) {
            if(({            (_condtional_value_X219=(item_existance[n]));            _condtional_value_X219;            })) {
                n++;
                if(({                (_condtional_value_X220=(n>=size));                _condtional_value_X220;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X221=(n==hash));                _condtional_value_X221;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((char*)(__right_value77=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value_27))));
                (__right_value77 = come_decrement_ref_count(__right_value77, (void*)0, (void*)0, 1, 0, (void*)0));
                len++;
                (default_value_27 = come_decrement_ref_count(default_value_27, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (default_value_27 = come_decrement_ref_count(default_value_27, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
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

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
_Bool _condtional_value_X206;
char* result;
char* __result_obj__53;
_Bool _condtional_value_X207;
char* __result_obj__54;
char* result_25;
char* __result_obj__55;
result = (void*)0;
result_25 = (void*)0;
    if(({    (_condtional_value_X206=(self==((void*)0)));    _condtional_value_X206;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__53 = result;
        return __result_obj__53;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X207=(self->key_list->it));    _condtional_value_X207;    })) {
        __result_obj__54 = self->key_list->it->item;
        return __result_obj__54;
    }
    memset(&result_25,0,sizeof(char*));
    __result_obj__55 = result_25;
    return __result_obj__55;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
_Bool _condtional_value_X210;
char* result;
char* __result_obj__56;
_Bool _condtional_value_X211;
char* __result_obj__57;
char* result_26;
char* __result_obj__58;
result = (void*)0;
result_26 = (void*)0;
    if(({    (_condtional_value_X210=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X210;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__56 = result;
        return __result_obj__56;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X211=(self->key_list->it));    _condtional_value_X211;    })) {
        __result_obj__57 = self->key_list->it->item;
        return __result_obj__57;
    }
    memset(&result_26,0,sizeof(char*));
    __result_obj__58 = result_26;
    return __result_obj__58;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X213;
_Bool _condtional_value_X214;
_Bool _condtional_value_X215;
char* __result_obj__59;
_Bool _condtional_value_X216;
_Bool _condtional_value_X217;
char* __result_obj__60;
char* __result_obj__61;
char* __result_obj__62;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X213=((_Bool)1));    _condtional_value_X213;    })) {
        if(({        (_condtional_value_X214=(self->item_existance[it]));        _condtional_value_X214;        })) {
            if(({            (_condtional_value_X215=(string_equals(self->keys[it],key)));            _condtional_value_X215;            })) {
                __result_obj__59 = (char*)come_increment_ref_count(self->items[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
                (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__59;
            }
            it++;
            if(({            (_condtional_value_X216=(it>=self->size));            _condtional_value_X216;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X217=(it==hash));            _condtional_value_X217;            })) {
                __result_obj__60 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
                (__result_obj__60 = come_decrement_ref_count(__result_obj__60, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__60;
            }
        }
        else {
            __result_obj__61 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
            (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__61;
        }
    }
    __result_obj__62 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__62;
}

static void CVALUE_finalize(struct CVALUE* self){
_Bool _condtional_value_X246;
_Bool _condtional_value_X247;
_Bool _condtional_value_X248;
_Bool _condtional_value_X249;
    if(({    (_condtional_value_X246=(self!=((void*)0)&&self->c_value!=((void*)0)));    _condtional_value_X246;    })) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X247=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X247;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X248=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _condtional_value_X248;    })) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X249=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _condtional_value_X249;    })) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare, struct sType* type, char* name, struct sInfo* info){
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct sType* __dec_obj40;
void* __right_value132 = (void*)0;
char* __dec_obj41;
void* __right_value133 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __dec_obj42;
struct sExternalGlobalVariable* __result_obj__66;
    ((struct sNodeBase*)(__right_value130=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value130, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj40=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj41=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj42=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phchar$ph$ph$p_clone(multiple_declare));
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__66 = (struct sExternalGlobalVariable*)come_increment_ref_count(self);
    come_call_finalizer(sExternalGlobalVariable_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sExternalGlobalVariable_finalize, __result_obj__66, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__66;
}

char* sExternalGlobalVariable_kind(struct sExternalGlobalVariable* self){
void* __right_value134 = (void*)0;
char* __result_obj__67;
    __result_obj__67 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string("sExternalGlobalVariable"))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__67 = come_decrement_ref_count(__result_obj__67, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__67;
}

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info){
struct sType* type;
char* name;
_Bool _condtional_value_X257;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* o2_saved;
struct tuple3$3sType$phchar$phchar$ph* it;
_Bool _condtional_value_X258;
_Bool _condtional_value_X259;
_Bool _condtional_value_X260;
struct tuple3$3sType$phchar$phchar$ph* multiple_assign_var2 = (void*)0;
struct sType* type_31=0;
char* name_32=0;
char* initializer=0;
void* __right_value135 = (void*)0;
_Bool _condtional_value_X261;
_Bool _condtional_value_X262;
void* __right_value136 = (void*)0;
char* id;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
_Bool _condtional_value_X263;
_Bool _condtional_value_X264;
void* __right_value143 = (void*)0;
char* id_33;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
_Bool __result_obj__68;
    type=self->type;
    name=(char*)come_increment_ref_count(self->name);
    if(({    (_condtional_value_X257=(self->multiple_declare));    _condtional_value_X257;    })) {
        for(        ({        (_condtional_value_X258=(o2_saved=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(self->multiple_declare),it=list$1tuple3$3sType$phchar$phchar$ph$ph_begin(o2_saved)));        _condtional_value_X258;        });        ({        (_condtional_value_X259=(!list$1tuple3$3sType$phchar$phchar$ph$ph_end(o2_saved)));        _condtional_value_X259;        });        ({        (_condtional_value_X260=(it=list$1tuple3$3sType$phchar$phchar$ph$ph_next(o2_saved)));        _condtional_value_X260;        })        ){
            multiple_assign_var2=it;
            type_31=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            name_32=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            initializer=(char*)come_increment_ref_count(multiple_assign_var2->v3);
            add_variable_to_global_table(name_32,(struct sType*)come_increment_ref_count(sType_clone(type_31)),info);
            if(({            (_condtional_value_X261=(info->output_header_file));            _condtional_value_X261;            })) {
                if(({                (_condtional_value_X262=(!type_31->mStatic));                _condtional_value_X262;                })) {
                    id=(char*)come_increment_ref_count(__builtin_string(name_32));
                    add_come_code_at_come_header(info,id,"extern %s;\n",((char*)(__right_value137=make_define_var(type_31,name_32,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0))));
                    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1, 0, (void*)0));
                    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            else {
                map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_32)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value140=xsprintf("extern %s;",((char*)(__right_value139=make_define_var(type_31,name_32,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0)))))))));
                (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            come_call_finalizer(sType_finalize, type_31, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_32 = come_decrement_ref_count(name_32, (void*)0, (void*)0, 0, 0, (void*)0));
            (initializer = come_decrement_ref_count(initializer, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name,(struct sType*)come_increment_ref_count(sType_clone(type)),info);
        if(({        (_condtional_value_X263=(info->output_header_file));        _condtional_value_X263;        })) {
            if(({            (_condtional_value_X264=(!type->mStatic));            _condtional_value_X264;            })) {
                id_33=(char*)come_increment_ref_count(__builtin_string(name));
                add_come_code_at_come_header(info,id_33,"extern %s;\n",((char*)(__right_value144=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0))));
                (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1, 0, (void*)0));
                (id_33 = come_decrement_ref_count(id_33, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else {
            map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value147=xsprintf("extern %s;",((char*)(__right_value146=make_define_var(type,name,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0)))))))));
            (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1, 0, (void*)0));
        }
    }
    __result_obj__68 = (_Bool)1;
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__68;
}

static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self){
_Bool _condtional_value_X253;
_Bool _condtional_value_X254;
_Bool _condtional_value_X255;
_Bool _condtional_value_X256;
    if(({    (_condtional_value_X253=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X253;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X254=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X254;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X255=(self!=((void*)0)&&self->name!=((void*)0)));    _condtional_value_X255;    })) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X256=(self!=((void*)0)&&self->multiple_declare!=((void*)0)));    _condtional_value_X256;    })) {
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sNode* parse_global_variable(struct sInfo* info){
_Bool multiple_declare;
char* p;
int sline;
_Bool _condtional_value_X265;
void* __right_value149 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* type=0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X268;
void* __right_value150 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var4 = (void*)0;
struct sType* type_34=0;
char* name_35=0;
_Bool _condtional_value_X271;
_Bool _condtional_value_X272;
void* __right_value151 = (void*)0;
_Bool no_output_err;
_Bool no_comma;
_Bool no_output_come_code;
void* __right_value152 = (void*)0;
struct sNode* exp;
_Bool _condtional_value_X273;
_Bool _condtional_value_X274;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* multiple_declare_36;
void* __right_value155 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* base_type=0;
char* name_37=0;
_Bool err_38=0;
_Bool _condtional_value_X275;
void* __right_value156 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var6 = (void*)0;
struct sType* type2=0;
char* var_name=0;
_Bool _condtional_value_X276;
char* head;
_Bool _condtional_value_X277;
void* __right_value157 = (void*)0;
_Bool no_output_err_39;
_Bool no_comma_40;
_Bool no_output_come_code_41;
void* __right_value158 = (void*)0;
struct sNode* exp_42;
char* tail;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct buffer* buf;
void* __right_value161 = (void*)0;
char* initializer;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
_Bool _condtional_value_X282;
void* __right_value169 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var7 = (void*)0;
struct sType* type2_45=0;
char* var_name_46=0;
_Bool _condtional_value_X283;
char* head_47;
_Bool _condtional_value_X284;
void* __right_value170 = (void*)0;
_Bool no_output_err_48;
_Bool no_comma_49;
_Bool no_output_come_code_50;
void* __right_value171 = (void*)0;
struct sNode* exp_51;
char* tail_52;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct buffer* buf_53;
void* __right_value174 = (void*)0;
char* initializer_54;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct sNode* right_node;
char* array_initializer;
void* __right_value179 = (void*)0;
char* var_name2;
_Bool _condtional_value_X285;
_Bool _condtional_value_X286;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct sNode* _inf_value1;
struct sExternalGlobalVariable* _inf_obj_value1;
void* __right_value187 = (void*)0;
struct sNode* __result_obj__74;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct sNode* _inf_value2;
struct sGlobalVariable* _inf_obj_value2;
void* __right_value197 = (void*)0;
struct sNode* __result_obj__77;
void* __right_value198 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* result_type=0;
char* var_name_55=0;
_Bool err_56=0;
_Bool _condtional_value_X303;
struct sNode* right_node_57;
char* array_initializer_58;
_Bool _condtional_value_X304;
_Bool _condtional_value_X305;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct buffer* buf_59;
_Bool squort;
_Bool dquort;
int nest;
_Bool _condtional_value_X306;
_Bool _condtional_value_X307;
_Bool _condtional_value_X308;
_Bool _condtional_value_X309;
_Bool _condtional_value_X310;
_Bool _condtional_value_X311;
_Bool _condtional_value_X312;
_Bool _condtional_value_X313;
_Bool _condtional_value_X314;
_Bool _condtional_value_X315;
_Bool _condtional_value_X316;
_Bool _condtional_value_X317;
void* __right_value201 = (void*)0;
char* __dec_obj61;
void* __right_value202 = (void*)0;
struct sNode* __dec_obj62;
_Bool _condtional_value_X318;
_Bool _condtional_value_X319;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct sNode* _inf_value3;
struct sExternalGlobalVariable* _inf_obj_value3;
void* __right_value205 = (void*)0;
struct sNode* __result_obj__78;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct sNode* _inf_value4;
struct sGlobalVariable* _inf_obj_value4;
void* __right_value208 = (void*)0;
struct sNode* __result_obj__79;
struct sNode* __result_obj__80;
    multiple_declare=(_Bool)0;
    {
        p=info->p;
        sline=info->sline;
        if(({        (_condtional_value_X265=(xisalpha(*info->p)||*info->p==95));        _condtional_value_X265;        })) {
            parse_sharp_v5(info);
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value149=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value149, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            parse_sharp_v5(info);
            if(({            (_condtional_value_X268=(err));            _condtional_value_X268;            })) {
                parse_sharp_v5(info);
                multiple_assign_var4=((struct tuple2$2sType$phchar$ph*)(__right_value150=parse_variable_name((struct sType*)come_increment_ref_count(type),(_Bool)1,info)));
                type_34=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_35=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value150, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                parse_sharp_v5(info);
                if(({                (_condtional_value_X271=(*info->p==61&&*(info->p+1)!=62));                _condtional_value_X271;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(({                    (_condtional_value_X272=(*info->p==123));                    _condtional_value_X272;                    })) {
                        ((char*)(__right_value151=skip_block(info,(_Bool)0)));
                        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1, 0, (void*)0));
                    }
                    else {
                        no_output_err=info->no_output_err;
                        no_comma=info->no_comma;
                        no_output_come_code=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma;
                        info->no_output_err=no_output_err;
                        info->no_output_come_code=no_output_come_code;
                        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                }
                if(({                (_condtional_value_X273=(!is_type_name(name_35,info)&&*info->p==44));                _condtional_value_X273;                })) {
                    multiple_declare=(_Bool)1;
                }
                come_call_finalizer(sType_finalize, type_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_35 = come_decrement_ref_count(name_35, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        info->p=p;
        info->sline=sline;
    }
    if(({    (_condtional_value_X274=(multiple_declare));    _condtional_value_X274;    })) {
        multiple_declare_36=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phchar$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "07gvar.c", 295, "struct list$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        parse_sharp_v5(info);
        multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value155=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        name_37=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        err_38=multiple_assign_var5->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value155, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        parse_sharp_v5(info);
        if(({        (_condtional_value_X275=(!err_38));        _condtional_value_X275;        })) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value156=parse_variable_name((struct sType*)come_increment_ref_count(base_type),(_Bool)1,info)));
        type2=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        var_name=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value156, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        parse_sharp_v5(info);
        if(({        (_condtional_value_X276=(*info->p==61));        _condtional_value_X276;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            head=info->p;
            if(({            (_condtional_value_X277=(*info->p==123));            _condtional_value_X277;            })) {
                ((char*)(__right_value157=skip_block(info,(_Bool)0)));
                (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                no_output_err_39=info->no_output_err;
                no_comma_40=info->no_comma;
                no_output_come_code_41=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_42=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_40;
                info->no_output_err=no_output_err_39;
                info->no_output_come_code=no_output_come_code_41;
                ((exp_42) ? exp_42 = come_decrement_ref_count(exp_42, ((struct sNode*)exp_42)->finalize, ((struct sNode*)exp_42)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            tail=info->p;
            buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07gvar.c", 337, "struct buffer*"))));
            buffer_append(buf,head,tail-head);
            initializer=(char*)come_increment_ref_count(buffer_to_string(buf));
            list$1tuple3$3sType$phchar$phchar$ph$ph_push_back(multiple_declare_36,(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(tuple3$3sType$phchar$phchar$ph_initialize((struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phchar$ph)*(1), "07gvar.c", 343, "struct tuple3$3sType$phchar$phchar$ph")),(struct sType*)come_increment_ref_count(type2),(char*)come_increment_ref_count(var_name),(char*)come_increment_ref_count(initializer))));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (initializer = come_decrement_ref_count(initializer, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            list$1tuple3$3sType$phchar$phchar$ph$ph_push_back(multiple_declare_36,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07gvar.c", 346, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2),(char*)come_increment_ref_count(var_name),((void*)0))));
        }
        while(({        (_condtional_value_X282=(*info->p==44));        _condtional_value_X282;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value169=parse_variable_name((struct sType*)come_increment_ref_count(base_type),(_Bool)0,info)));
            type2_45=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            var_name_46=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value169, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_condtional_value_X283=(*info->p==61));            _condtional_value_X283;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                head_47=info->p;
                if(({                (_condtional_value_X284=(*info->p==123));                _condtional_value_X284;                })) {
                    ((char*)(__right_value170=skip_block(info,(_Bool)0)));
                    (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                else {
                    no_output_err_48=info->no_output_err;
                    no_comma_49=info->no_comma;
                    no_output_come_code_50=info->no_output_come_code;
                    info->no_output_err=(_Bool)1;
                    info->no_comma=(_Bool)1;
                    info->no_output_come_code=(_Bool)1;
                    exp_51=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_49;
                    info->no_output_err=no_output_err_48;
                    info->no_output_come_code=no_output_come_code_50;
                    ((exp_51) ? exp_51 = come_decrement_ref_count(exp_51, ((struct sNode*)exp_51)->finalize, ((struct sNode*)exp_51)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                tail_52=info->p;
                buf_53=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07gvar.c", 383, "struct buffer*"))));
                buffer_append(buf_53,head_47,tail_52-head_47);
                initializer_54=(char*)come_increment_ref_count(buffer_to_string(buf_53));
                list$1tuple3$3sType$phchar$phchar$ph$ph_push_back(multiple_declare_36,(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(tuple3$3sType$phchar$phchar$ph_initialize((struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phchar$ph)*(1), "07gvar.c", 389, "struct tuple3$3sType$phchar$phchar$ph")),(struct sType*)come_increment_ref_count(type2_45),(char*)come_increment_ref_count(var_name_46),(char*)come_increment_ref_count(initializer_54))));
                come_call_finalizer(buffer_finalize, buf_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (initializer_54 = come_decrement_ref_count(initializer_54, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                list$1tuple3$3sType$phchar$phchar$ph$ph_push_back(multiple_declare_36,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07gvar.c", 392, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_45),(char*)come_increment_ref_count(var_name_46),((void*)0))));
            }
            come_call_finalizer(sType_finalize, type2_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name_46 = come_decrement_ref_count(var_name_46, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        right_node=((void*)0);
        array_initializer=((void*)0);
        var_name2=(char*)come_increment_ref_count(__builtin_string(""));
        if(({        (_condtional_value_X285=(base_type->mExtern));        _condtional_value_X285;        })) {
            if(({            (_condtional_value_X286=(right_node));            _condtional_value_X286;            })) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07gvar.c", 405, "struct sNode");
            _inf_obj_value1=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(__right_value181=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count((struct sExternalGlobalVariable*)come_calloc_v2(1, sizeof(struct sExternalGlobalVariable)*(1), "07gvar.c", 405, "struct sExternalGlobalVariable*")),(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(multiple_declare_36),base_type,(char*)come_increment_ref_count(var_name2),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value1->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value1->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sExternalGlobalVariable_kind;
            _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__74 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value187=_inf_value1)));
            come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, multiple_declare_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_37 = come_decrement_ref_count(name_37, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 0, (void*)0));
            (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sExternalGlobalVariable_finalize, __right_value181, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value187) ? __right_value187 = come_decrement_ref_count(__right_value187, ((struct sNode*)__right_value187)->finalize, ((struct sNode*)__right_value187)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__74) ? __result_obj__74 = come_decrement_ref_count(__result_obj__74, ((struct sNode*)__result_obj__74)->finalize, ((struct sNode*)__result_obj__74)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__74;
        }
        else {
            _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07gvar.c", 408, "struct sNode");
            _inf_obj_value2=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(__right_value189=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count((struct sGlobalVariable*)come_calloc_v2(1, sizeof(struct sGlobalVariable)*(1), "07gvar.c", 408, "struct sGlobalVariable*")),(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(multiple_declare_36),base_type,(char*)come_increment_ref_count(var_name2),(struct sNode*)come_increment_ref_count(right_node),(char*)come_increment_ref_count(array_initializer),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sGlobalVariable_finalize;
            _inf_value2->clone=(void*)sGlobalVariable_clone;
            _inf_value2->compile=(void*)sGlobalVariable_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sGlobalVariable_kind;
            _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__77 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value197=_inf_value2)));
            come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, multiple_declare_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_37 = come_decrement_ref_count(name_37, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 0, (void*)0));
            (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sGlobalVariable_finalize, __right_value189, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value197) ? __right_value197 = come_decrement_ref_count(__right_value197, ((struct sNode*)__right_value197)->finalize, ((struct sNode*)__right_value197)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__77) ? __result_obj__77 = come_decrement_ref_count(__result_obj__77, ((struct sNode*)__result_obj__77)->finalize, ((struct sNode*)__result_obj__77)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__77;
        }
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph$p_finalize, multiple_declare_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_37 = come_decrement_ref_count(name_37, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 0, (void*)0));
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        parse_sharp_v5(info);
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value198=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        result_type=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name_55=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_56=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value198, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        parse_sharp_v5(info);
        if(({        (_condtional_value_X303=(!err_56));        _condtional_value_X303;        })) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        right_node_57=((void*)0);
        array_initializer_58=((void*)0);
        if(({        (_condtional_value_X304=(*info->p==61));        _condtional_value_X304;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X305=(*info->p==123));            _condtional_value_X305;            })) {
                buf_59=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07gvar.c", 429, "struct buffer*"))));
                buffer_append_char(buf_59,*info->p);
                info->p++;
                squort=(_Bool)0;
                dquort=(_Bool)0;
                nest=1;
                while(({                (_condtional_value_X306=(1));                _condtional_value_X306;                })) {
                    if(({                    (_condtional_value_X307=(*info->p==0));                    _condtional_value_X307;                    })) {
                        err_msg(info,"unexpected source end in array initiailizer");
                        exit(2);
                    }
                    else if(({                    (_condtional_value_X308=(*info->p==92));                    _condtional_value_X308;                    })) {
                        buffer_append_char(buf_59,*info->p);
                        info->p++;
                        if(({                        (_condtional_value_X309=(*info->p==10));                        _condtional_value_X309;                        })) {
                            info->sline++;
                        }
                        buffer_append_char(buf_59,*info->p);
                        info->p++;
                    }
                    else if(({                    (_condtional_value_X310=(!squort&&*info->p==34));                    _condtional_value_X310;                    })) {
                        buffer_append_char(buf_59,*info->p);
                        info->p++;
                        dquort=!dquort;
                    }
                    else if(({                    (_condtional_value_X311=(!dquort&&*info->p==39));                    _condtional_value_X311;                    })) {
                        buffer_append_char(buf_59,*info->p);
                        info->p++;
                        squort=!squort;
                    }
                    else if(({                    (_condtional_value_X312=(squort||dquort));                    _condtional_value_X312;                    })) {
                        if(({                        (_condtional_value_X313=(*info->p==10));                        _condtional_value_X313;                        })) {
                            info->sline++;
                        }
                        buffer_append_char(buf_59,*info->p);
                        info->p++;
                    }
                    else if(({                    (_condtional_value_X314=(*info->p==123));                    _condtional_value_X314;                    })) {
                        nest++;
                        buffer_append_char(buf_59,*info->p);
                        info->p++;
                    }
                    else if(({                    (_condtional_value_X315=(*info->p==125));                    _condtional_value_X315;                    })) {
                        nest--;
                        buffer_append_char(buf_59,*info->p);
                        info->p++;
                        if(({                        (_condtional_value_X316=(nest==0));                        _condtional_value_X316;                        })) {
                            skip_spaces_and_lf(info);
                            break;
                        }
                    }
                    else if(({                    (_condtional_value_X317=(*info->p==10));                    _condtional_value_X317;                    })) {
                        info->sline++;
                        buffer_append_char(buf_59,*info->p);
                        info->p++;
                    }
                    else {
                        buffer_append_char(buf_59,*info->p);
                        info->p++;
                    }
                }
                __dec_obj61=array_initializer_58,
                array_initializer_58=(char*)come_increment_ref_count(buffer_to_string(buf_59));
                __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
                come_call_finalizer(buffer_finalize, buf_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                parse_sharp_v5(info);
                __dec_obj62=right_node_57,
                right_node_57=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0, (void*)0) :0);
                parse_sharp_v5(info);
            }
        }
        if(({        (_condtional_value_X318=(result_type->mExtern));        _condtional_value_X318;        })) {
            if(({            (_condtional_value_X319=(right_node_57));            _condtional_value_X319;            })) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07gvar.c", 507, "struct sNode");
            _inf_obj_value3=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(__right_value204=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count((struct sExternalGlobalVariable*)come_calloc_v2(1, sizeof(struct sExternalGlobalVariable)*(1), "07gvar.c", 507, "struct sExternalGlobalVariable*")),((void*)0),result_type,(char*)come_increment_ref_count(var_name_55),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value3->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value3->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sExternalGlobalVariable_kind;
            _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__78 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value205=_inf_value3)));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name_55 = come_decrement_ref_count(var_name_55, (void*)0, (void*)0, 0, 0, (void*)0));
            ((right_node_57) ? right_node_57 = come_decrement_ref_count(right_node_57, ((struct sNode*)right_node_57)->finalize, ((struct sNode*)right_node_57)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (array_initializer_58 = come_decrement_ref_count(array_initializer_58, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sExternalGlobalVariable_finalize, __right_value204, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value205) ? __right_value205 = come_decrement_ref_count(__right_value205, ((struct sNode*)__right_value205)->finalize, ((struct sNode*)__right_value205)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__78) ? __result_obj__78 = come_decrement_ref_count(__result_obj__78, ((struct sNode*)__result_obj__78)->finalize, ((struct sNode*)__result_obj__78)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__78;
        }
        else {
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07gvar.c", 510, "struct sNode");
            _inf_obj_value4=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(__right_value207=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count((struct sGlobalVariable*)come_calloc_v2(1, sizeof(struct sGlobalVariable)*(1), "07gvar.c", 510, "struct sGlobalVariable*")),((void*)0),result_type,(char*)come_increment_ref_count(var_name_55),(struct sNode*)come_increment_ref_count(right_node_57),(char*)come_increment_ref_count(array_initializer_58),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sGlobalVariable_finalize;
            _inf_value4->clone=(void*)sGlobalVariable_clone;
            _inf_value4->compile=(void*)sGlobalVariable_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sGlobalVariable_kind;
            _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__79 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value208=_inf_value4)));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name_55 = come_decrement_ref_count(var_name_55, (void*)0, (void*)0, 0, 0, (void*)0));
            ((right_node_57) ? right_node_57 = come_decrement_ref_count(right_node_57, ((struct sNode*)right_node_57)->finalize, ((struct sNode*)right_node_57)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (array_initializer_58 = come_decrement_ref_count(array_initializer_58, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sGlobalVariable_finalize, __right_value207, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value208) ? __right_value208 = come_decrement_ref_count(__right_value208, ((struct sNode*)__right_value208)->finalize, ((struct sNode*)__right_value208)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__79) ? __result_obj__79 = come_decrement_ref_count(__result_obj__79, ((struct sNode*)__result_obj__79)->finalize, ((struct sNode*)__result_obj__79)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__79;
        }
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name_55 = come_decrement_ref_count(var_name_55, (void*)0, (void*)0, 0, 0, (void*)0));
        ((right_node_57) ? right_node_57 = come_decrement_ref_count(right_node_57, ((struct sNode*)right_node_57)->finalize, ((struct sNode*)right_node_57)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (array_initializer_58 = come_decrement_ref_count(array_initializer_58, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__80 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__80) ? __result_obj__80 = come_decrement_ref_count(__result_obj__80, ((struct sNode*)__result_obj__80)->finalize, ((struct sNode*)__result_obj__80)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__80;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
_Bool _condtional_value_X266;
_Bool _condtional_value_X267;
    if(({    (_condtional_value_X266=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X266;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X267=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X267;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
_Bool _condtional_value_X269;
_Bool _condtional_value_X270;
    if(({    (_condtional_value_X269=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X269;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X270=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X270;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1tuple3$3sType$phchar$phchar$ph$ph* list$1tuple3$3sType$phchar$phchar$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phchar$ph$ph* self, struct tuple3$3sType$phchar$phchar$ph* item){
_Bool _condtional_value_X278;
void* __right_value162 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* litem;
struct tuple3$3sType$phchar$phchar$ph* __dec_obj43;
_Bool _condtional_value_X279;
void* __right_value163 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* litem_43;
struct tuple3$3sType$phchar$phchar$ph* __dec_obj44;
void* __right_value164 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phchar$ph$ph* litem_44;
struct tuple3$3sType$phchar$phchar$ph* __dec_obj45;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __result_obj__69;
    if(({    (_condtional_value_X278=(self->len==0));    _condtional_value_X278;    })) {
        litem=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)(__right_value162=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj43=litem->item,
        litem->item=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X279=(self->len==1));    _condtional_value_X279;    })) {
        litem_43=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)(__right_value163=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        litem_43->prev=self->head;
        litem_43->next=((void*)0);
        __dec_obj44=litem_43->item,
        litem_43->item=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_43;
        self->head->next=litem_43;
    }
    else {
        litem_44=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)(__right_value164=(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phchar$ph$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1tuple3$3sType$phchar$phchar$ph$ph*"))));
        litem_44->prev=self->tail;
        litem_44->next=((void*)0);
        __dec_obj45=litem_44->item,
        litem_44->item=(struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phchar$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_44;
        self->tail=litem_44;
    }
    self->len++;
    __result_obj__69 = self;
    come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__69;
}

static struct tuple3$3sType$phchar$phchar$ph* tuple3$3sType$phchar$phchar$ph_initialize(struct tuple3$3sType$phchar$phchar$ph* self, struct sType* v1, char* v2, char* v3){
struct sType* __dec_obj46;
char* __dec_obj47;
char* __dec_obj48;
struct tuple3$3sType$phchar$phchar$ph* __result_obj__70;
    __dec_obj46=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj47=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj48=self->v3,
    self->v3=(char*)come_increment_ref_count(v3);
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__70 = (struct tuple3$3sType$phchar$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    (v3 = come_decrement_ref_count(v3, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phchar$ph$p_finalize, __result_obj__70, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__70;
}

static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3){
struct sType* __dec_obj49;
char* __dec_obj50;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__71;
    __dec_obj49=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj50=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
    self->v3=v3;
    __result_obj__71 = (struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phvoid$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phvoid$p$p_finalize, __result_obj__71, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__71;
}

static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
_Bool _condtional_value_X280;
_Bool _condtional_value_X281;
    if(({    (_condtional_value_X280=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X280;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X281=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X281;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self){
_Bool _condtional_value_X287;
struct sExternalGlobalVariable* __result_obj__72;
void* __right_value182 = (void*)0;
struct sExternalGlobalVariable* result;
_Bool _condtional_value_X288;
_Bool _condtional_value_X289;
void* __right_value183 = (void*)0;
char* __dec_obj51;
_Bool _condtional_value_X290;
_Bool _condtional_value_X291;
void* __right_value184 = (void*)0;
struct sType* __dec_obj52;
_Bool _condtional_value_X292;
void* __right_value185 = (void*)0;
char* __dec_obj53;
_Bool _condtional_value_X293;
void* __right_value186 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __dec_obj54;
struct sExternalGlobalVariable* __result_obj__73;
    if(({    (_condtional_value_X287=(self==(void*)0));    _condtional_value_X287;    })) {
        __result_obj__72 = (void*)0;
        return __result_obj__72;
    }
    result=(struct sExternalGlobalVariable*)come_increment_ref_count((struct sExternalGlobalVariable*)come_calloc_v2(1, sizeof(struct sExternalGlobalVariable)*(1), "sExternalGlobalVariable_clone", 3, "struct sExternalGlobalVariable*"));
    if(({    (_condtional_value_X288=(self!=((void*)0)));    _condtional_value_X288;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X289=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X289;    })) {
        __dec_obj51=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sExternalGlobalVariable_clone", 5, "char*"));
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X290=(self!=((void*)0)));    _condtional_value_X290;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X291=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X291;    })) {
        __dec_obj52=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X292=(self!=((void*)0)&&self->name!=((void*)0)));    _condtional_value_X292;    })) {
        __dec_obj53=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sExternalGlobalVariable_clone", 8, "char*"));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X293=(self!=((void*)0)&&self->multiple_declare!=((void*)0)));    _condtional_value_X293;    })) {
        __dec_obj54=result->multiple_declare,
        result->multiple_declare=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phchar$ph$ph$p_clone(self->multiple_declare));
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__73 = result;
    come_call_finalizer(sExternalGlobalVariable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__73;
}

static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self){
_Bool _condtional_value_X294;
struct sGlobalVariable* __result_obj__75;
void* __right_value190 = (void*)0;
struct sGlobalVariable* result;
_Bool _condtional_value_X295;
_Bool _condtional_value_X296;
void* __right_value191 = (void*)0;
char* __dec_obj55;
_Bool _condtional_value_X297;
_Bool _condtional_value_X298;
void* __right_value192 = (void*)0;
struct sType* __dec_obj56;
_Bool _condtional_value_X299;
void* __right_value193 = (void*)0;
char* __dec_obj57;
_Bool _condtional_value_X300;
void* __right_value194 = (void*)0;
struct sNode* __dec_obj58;
_Bool _condtional_value_X301;
void* __right_value195 = (void*)0;
char* __dec_obj59;
_Bool _condtional_value_X302;
void* __right_value196 = (void*)0;
struct list$1tuple3$3sType$phchar$phchar$ph$ph* __dec_obj60;
struct sGlobalVariable* __result_obj__76;
    if(({    (_condtional_value_X294=(self==(void*)0));    _condtional_value_X294;    })) {
        __result_obj__75 = (void*)0;
        return __result_obj__75;
    }
    result=(struct sGlobalVariable*)come_increment_ref_count((struct sGlobalVariable*)come_calloc_v2(1, sizeof(struct sGlobalVariable)*(1), "sGlobalVariable_clone", 3, "struct sGlobalVariable*"));
    if(({    (_condtional_value_X295=(self!=((void*)0)));    _condtional_value_X295;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X296=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X296;    })) {
        __dec_obj55=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGlobalVariable_clone", 5, "char*"));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X297=(self!=((void*)0)));    _condtional_value_X297;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X298=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X298;    })) {
        __dec_obj56=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X299=(self!=((void*)0)&&self->name!=((void*)0)));    _condtional_value_X299;    })) {
        __dec_obj57=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sGlobalVariable_clone", 8, "char*"));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X300=(self!=((void*)0)&&self->right_node!=((void*)0)));    _condtional_value_X300;    })) {
        __dec_obj58=result->right_node,
        result->right_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_node));
        (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X301=(self!=((void*)0)&&self->array_initializer!=((void*)0)));    _condtional_value_X301;    })) {
        __dec_obj59=result->array_initializer,
        result->array_initializer=(char*)come_increment_ref_count((char*)come_memdup(self->array_initializer, "sGlobalVariable_clone", 10, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X302=(self!=((void*)0)&&self->multiple_declare!=((void*)0)));    _condtional_value_X302;    })) {
        __dec_obj60=result->multiple_declare,
        result->multiple_declare=(struct list$1tuple3$3sType$phchar$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phchar$ph$ph$p_clone(self->multiple_declare));
        come_call_finalizer(list$1tuple3$3sType$phchar$phchar$ph$ph_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__76 = result;
    come_call_finalizer(sGlobalVariable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__76;
}

