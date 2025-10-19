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
enum anonymous_typeY10 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

typedef enum anonymous_typeY10 clockid_t;

typedef unsigned int wctype_t;

typedef int* wstring;

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

struct sStoreNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1char$ph* multiple_assign;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare;
    char* attribute;
    _Bool comma;
    _Bool val_;
};

struct sNewChannel
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWriteChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct sNode* right_value;
};

struct sReadChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    _Bool on_load_calling;
};

struct sFunLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct sStructInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
};

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
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
int clock_getres(enum anonymous_typeY10 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY10 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY10 __clock_id);
int clock_settime(enum anonymous_typeY10 __clock_id, const struct timespec* __tp);
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
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute, _Bool comma, _Bool val_);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
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
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self);
static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info);
char* sNewChannel_kind(struct sNewChannel* self);
_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info);
static void sNewChannel_finalize(struct sNewChannel* self);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info);
char* sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info);
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info);
char* sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info);
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize_with_values(struct list$1tuple2$2char$phsNode$ph$ph* self, int num_value, struct tuple2$2char$phsNode$ph** values);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);
char* sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info);
char* sStructInitializer_kind(struct sStructInitializer* self);
_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sStructInitializer_finalize(struct sStructInitializer* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* parse_struct_initializer(struct sInfo* info);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
struct sNode* expression_node_v95(struct sInfo* info);
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
// uniq global variable
// inline function

// body function
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute, _Bool comma, _Bool val_){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
char* __dec_obj1;
void* __right_value41 = (void*)0;
struct sType* __dec_obj27;
struct sNode* __dec_obj28;
void* __right_value42 = (void*)0;
struct list$1char$ph* __dec_obj29;
void* __right_value54 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj36;
char* __dec_obj37;
struct sStoreNode* __result_obj__23;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj1=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj27=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj28=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0, (void*)0) :0);
    ((void*)0);
    __dec_obj29=self->multiple_assign,
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(multiple_assign));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((void*)0);
    __dec_obj36=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(multiple_declare));
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj37=self->attribute,
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0);
    self->comma=comma;
    self->val_=val_;
    __result_obj__23 = (struct sStoreNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sStoreNode_finalize, __result_obj__23, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__23;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __right_value55 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value55=__builtin_string("sStoreNode"))));
    (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__24;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
_Bool _condtional_value_X134;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct sVar* var_;
_Bool _condtional_value_X144;
_Bool _condtional_value_X145;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
_Bool _condtional_value_X177;
void* __right_value60 = (void*)0;
struct sType* type;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* o2_saved;
struct tuple3$3sType$phchar$phsNode$ph* it;
_Bool _condtional_value_X180;
_Bool _condtional_value_X181;
_Bool _condtional_value_X184;
struct tuple3$3sType$phchar$phsNode$ph* multiple_assign_var1 = (void*)0;
struct sType* type_16=0;
char* var_name=0;
struct sNode* right_value=0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
_Bool _condtional_value_X185;
_Bool _condtional_value_X186;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
struct sType* type2;
void* __right_value66 = (void*)0;
_Bool _condtional_value_X187;
_Bool __result_obj__40;
void* __right_value67 = (void*)0;
struct sType* left_type;
_Bool _condtional_value_X188;
_Bool Value;
_Bool _condtional_value_X189;
_Bool __result_obj__41;
void* __right_value68 = (void*)0;
struct CVALUE* come_value;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
_Bool _condtional_value_X224;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
_Bool _condtional_value_X225;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf;
_Bool Value_17;
_Bool _condtional_value_X226;
_Bool __result_obj__50;
void* __right_value75 = (void*)0;
struct CVALUE* right_value_18;
struct sType* right_type;
_Bool _condtional_value_X227;
int i;
struct list$1char$ph* o2_saved_19;
char* it_21;
_Bool _condtional_value_X230;
_Bool _condtional_value_X231;
_Bool _condtional_value_X234;
_Bool _condtional_value_X236;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
struct sVar* var__23;
_Bool _condtional_value_X237;
_Bool _condtional_value_X238;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct sType* right_type2;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
char* multiple_var_name;
void* __right_value83 = (void*)0;
_Bool _condtional_value_X245;
void* __right_value84 = (void*)0;
char* __dec_obj38;
struct list$1char$ph* o2_saved_24;
char* it_25;
_Bool _condtional_value_X246;
_Bool _condtional_value_X247;
_Bool _condtional_value_X248;
_Bool _condtional_value_X249;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct sType* right_type2_26;
struct sVar* var__27;
void* __right_value87 = (void*)0;
struct sType* var_type;
void* __right_value88 = (void*)0;
struct sType* left_type_28;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct CVALUE* right_value2;
void* __right_value91 = (void*)0;
char* __dec_obj39;
void* __right_value92 = (void*)0;
struct sType* __dec_obj40;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct CVALUE* come_value_29;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
_Bool _condtional_value_X250;
void* __right_value97 = (void*)0;
char* __dec_obj41;
void* __right_value98 = (void*)0;
char* __dec_obj42;
void* __right_value99 = (void*)0;
struct sType* __dec_obj43;
void* __right_value100 = (void*)0;
_Bool _condtional_value_X251;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
_Bool _condtional_value_X252;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct CVALUE* come_value_30;
void* __right_value105 = (void*)0;
char* __dec_obj44;
_Bool _condtional_value_X255;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
struct sVar* var__33;
_Bool _condtional_value_X256;
_Bool _condtional_value_X257;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
_Bool _condtional_value_X258;
void* __right_value113 = (void*)0;
struct sType* type_34;
void* __right_value114 = (void*)0;
_Bool _condtional_value_X259;
_Bool _condtional_value_X260;
_Bool __result_obj__62;
void* __right_value115 = (void*)0;
struct sType* left_type_35;
_Bool _condtional_value_X261;
void* __right_value116 = (void*)0;
_Bool _condtional_value_X262;
_Bool _condtional_value_X264;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
_Bool _condtional_value_X265;
void* __right_value119 = (void*)0;
struct list$1sNode$ph* o2_saved_36;
struct sNode* it_38;
_Bool _condtional_value_X268;
_Bool _condtional_value_X269;
_Bool _condtional_value_X272;
_Bool Value_40;
_Bool _condtional_value_X273;
_Bool __result_obj__69;
void* __right_value120 = (void*)0;
struct CVALUE* come_value_41;
void* __right_value121 = (void*)0;
_Bool _condtional_value_X274;
void* __right_value122 = (void*)0;
_Bool _condtional_value_X275;
void* __right_value123 = (void*)0;
_Bool _condtional_value_X276;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct CVALUE* come_value_42;
void* __right_value126 = (void*)0;
char* __dec_obj48;
void* __right_value127 = (void*)0;
struct sType* __dec_obj49;
_Bool _condtional_value_X279;
_Bool _condtional_value_X280;
_Bool _condtional_value_X281;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct sVar* var__45;
_Bool _condtional_value_X282;
_Bool _condtional_value_X283;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
_Bool _condtional_value_X284;
void* __right_value135 = (void*)0;
struct sType* type_46;
void* __right_value136 = (void*)0;
_Bool Value_47;
_Bool _condtional_value_X285;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
_Bool array_initializer;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
_Bool struct_initializer;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
_Bool string_initializer;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
_Bool new_channel;
void* __right_value145 = (void*)0;
struct CVALUE* right_value_48;
struct sType* right_type_49;
_Bool _condtional_value_X286;
_Bool _condtional_value_X287;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct sType* var_type_50;
_Bool _condtional_value_X288;
_Bool _condtional_value_X289;
_Bool _condtional_value_X290;
void* __right_value148 = (void*)0;
_Bool _condtional_value_X291;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct sType* left_type_51;
_Bool _condtional_value_X292;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct sVar* var__52;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct CVALUE* come_value_53;
void* __right_value156 = (void*)0;
char* __dec_obj53;
_Bool _condtional_value_X293;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
struct sVar* var__54;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct CVALUE* come_value_55;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
char* __dec_obj54;
_Bool _condtional_value_X294;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct sVar* var__56;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct CVALUE* come_value_57;
void* __right_value168 = (void*)0;
char* __dec_obj55;
_Bool _condtional_value_X295;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct sVar* var__58;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct CVALUE* come_value_59;
void* __right_value174 = (void*)0;
char* __dec_obj56;
_Bool _condtional_value_X296;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct CVALUE* come_value_60;
void* __right_value180 = (void*)0;
char* __dec_obj57;
_Bool _condtional_value_X297;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct CVALUE* come_value_61;
void* __right_value186 = (void*)0;
char* __dec_obj58;
void* __right_value187 = (void*)0;
struct sType* __dec_obj59;
_Bool _condtional_value_X298;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
_Bool _condtional_value_X299;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct CVALUE* come_value_62;
void* __right_value192 = (void*)0;
char* __dec_obj60;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct sType* __dec_obj61;
_Bool _condtional_value_X300;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct CVALUE* come_value_63;
void* __right_value201 = (void*)0;
char* __dec_obj62;
void* __right_value202 = (void*)0;
struct sType* __dec_obj63;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
_Bool _condtional_value_X301;
_Bool _condtional_value_X302;
_Bool __result_obj__71;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct CVALUE* come_value_64;
void* __right_value208 = (void*)0;
char* __dec_obj64;
void* __right_value209 = (void*)0;
struct sType* __dec_obj65;
_Bool Value_65;
_Bool _condtional_value_X303;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
_Bool new_channel_66;
void* __right_value212 = (void*)0;
struct CVALUE* right_value_67;
struct sType* right_type_68;
struct sClass* current_stack_frame_struct;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
_Bool _condtional_value_X304;
struct sVar* parent_var;
_Bool _condtional_value_X305;
_Bool _condtional_value_X306;
struct sType* left_type_69;
_Bool _condtional_value_X307;
_Bool __result_obj__72;
_Bool _condtional_value_X308;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
char* c_value;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct CVALUE* come_value_70;
_Bool _condtional_value_X309;
void* __right_value220 = (void*)0;
char* __dec_obj66;
void* __right_value221 = (void*)0;
char* __dec_obj67;
void* __right_value222 = (void*)0;
struct sType* __dec_obj68;
_Bool __result_obj__73;
_Bool _condtional_value_X310;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
char* c_value_71;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct CVALUE* come_value_72;
_Bool _condtional_value_X311;
void* __right_value228 = (void*)0;
char* __dec_obj69;
void* __right_value229 = (void*)0;
char* __dec_obj70;
void* __right_value230 = (void*)0;
struct sType* __dec_obj71;
_Bool __result_obj__74;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
_Bool _condtional_value_X312;
_Bool __result_obj__75;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct CVALUE* come_value_73;
_Bool _condtional_value_X313;
void* __right_value235 = (void*)0;
char* __dec_obj72;
void* __right_value236 = (void*)0;
char* __dec_obj73;
void* __right_value237 = (void*)0;
struct sType* __dec_obj74;
_Bool __result_obj__76;
struct sVar* var__74;
_Bool _condtional_value_X314;
_Bool _condtional_value_X315;
_Bool __result_obj__77;
_Bool _condtional_value_X316;
void* __right_value238 = (void*)0;
struct sType* __dec_obj75;
void* __right_value239 = (void*)0;
struct sType* left_type_75;
_Bool _condtional_value_X317;
_Bool __result_obj__78;
_Bool _condtional_value_X318;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct CVALUE* come_value_76;
void* __right_value244 = (void*)0;
char* __dec_obj76;
void* __right_value245 = (void*)0;
struct sType* __dec_obj77;
_Bool _condtional_value_X319;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct CVALUE* come_value_77;
void* __right_value250 = (void*)0;
char* __dec_obj78;
void* __right_value251 = (void*)0;
struct sType* __dec_obj79;
_Bool _condtional_value_X320;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct CVALUE* come_value_78;
void* __right_value256 = (void*)0;
char* __dec_obj80;
void* __right_value257 = (void*)0;
struct sType* __dec_obj81;
_Bool _condtional_value_X321;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct CVALUE* come_value_79;
void* __right_value260 = (void*)0;
char* __dec_obj82;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct sType* __dec_obj83;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
_Bool _condtional_value_X322;
_Bool __result_obj__79;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct CVALUE* come_value_80;
void* __right_value268 = (void*)0;
char* __dec_obj84;
void* __right_value269 = (void*)0;
struct sType* __dec_obj85;
    if(({    (_condtional_value_X134=(self->multiple_declare));    _condtional_value_X134;    })) {
        var_=((struct sVar*)(__right_value57=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value56=__builtin_string(self->name))),((void*)0))));
        (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value57, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_condtional_value_X144=(var_));        _condtional_value_X144;        })) {
            if(({            (_condtional_value_X145=(var_->mType->mHeap));            _condtional_value_X145;            })) {
                free_object((struct sType*)come_increment_ref_count(sType_clone(var_->mType)),var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value59=__builtin_string(self->name))));
            (__right_value59 = come_decrement_ref_count(__right_value59, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(({        (_condtional_value_X177=(self->type==((void*)0)));        _condtional_value_X177;        })) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)1;
        }
        type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(self->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        for(        ({        (_condtional_value_X180=(o2_saved=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self->multiple_declare),it=list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(o2_saved)));        _condtional_value_X180;        });        ({        (_condtional_value_X181=(!list$1tuple3$3sType$phchar$phsNode$ph$ph_end(o2_saved)));        _condtional_value_X181;        });        ({        (_condtional_value_X184=(it=list$1tuple3$3sType$phchar$phsNode$ph$ph_next(o2_saved)));        _condtional_value_X184;        })        ){
            multiple_assign_var1=it;
            type_16=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            var_=((struct sVar*)(__right_value62=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value61=__builtin_string(var_name))),((void*)0))));
            (__right_value61 = come_decrement_ref_count(__right_value61, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value62, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_condtional_value_X185=(var_));            _condtional_value_X185;            })) {
                if(({                (_condtional_value_X186=(var_->mType->mHeap));                _condtional_value_X186;                })) {
                    free_object((struct sType*)come_increment_ref_count(sType_clone(var_->mType)),var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                }
                map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value64=__builtin_string(var_name))));
                (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_16),(struct sType*)come_increment_ref_count(info->generics_type),info));
            add_variable_to_table(var_name,(struct sType*)come_increment_ref_count(sType_clone(type2)),info,(_Bool)0,self->comma);
            var_=get_variable_from_table(info->lv_table,var_name);
            if(({            (_condtional_value_X187=(var_==((void*)0)));            _condtional_value_X187;            })) {
                err_msg(info,"var not found(%s)(ZY) at definition of variable",it);
                __result_obj__40 = (_Bool)1;
                come_call_finalizer(sType_finalize, type_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__40;
            }
            left_type=(struct sType*)come_increment_ref_count(sType_clone(var_->mType));
            if(({            (_condtional_value_X188=(right_value));            _condtional_value_X188;            })) {
                Value=node_compile(right_value,info);
                if(({                (_condtional_value_X189=(!Value));                _condtional_value_X189;                })) {
                    __result_obj__41 = (_Bool)0;
                    come_call_finalizer(sType_finalize, type_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result_obj__41;
                }
                else {
                }
                come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s=%s;\n",((char*)(__right_value69=make_define_var(left_type,var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value->c_value);
                (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(({                (_condtional_value_X224=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type->mNoCallingDestructor&&((struct sFun*)(__right_value70=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));                come_call_finalizer(sFun_finalize, __right_value70, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _condtional_value_X224;                })) {
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_->mCValueName,((char*)(__right_value71=make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)1))));
                    (__right_value71 = come_decrement_ref_count(__right_value71, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value72=make_define_var(left_type,var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
                (__right_value72 = come_decrement_ref_count(__right_value72, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            come_call_finalizer(sType_finalize, type_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_condtional_value_X225=(self->multiple_assign));    _condtional_value_X225;    })) {
        buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 86, "struct buffer*"))));
        Value_17=node_compile(self->right_value,info);
        if(({        (_condtional_value_X226=(!Value_17));        _condtional_value_X226;        })) {
            __result_obj__50 = (_Bool)0;
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__50;
        }
        else {
        }
        right_value_18=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type=right_value_18->type;
        if(({        (_condtional_value_X227=(right_type->mNoSolvedGenericsType));        _condtional_value_X227;        })) {
            right_type=right_type->mNoSolvedGenericsType;
        }
        i=0;
        for(        ({        (_condtional_value_X230=(o2_saved_19=(struct list$1char$ph*)come_increment_ref_count(self->multiple_assign),it_21=list$1char$ph_begin(o2_saved_19)));        _condtional_value_X230;        });        ({        (_condtional_value_X231=(!list$1char$ph_end(o2_saved_19)));        _condtional_value_X231;        });        ({        (_condtional_value_X234=(it_21=list$1char$ph_next(o2_saved_19)));        _condtional_value_X234;        })        ){
            if(({            (_condtional_value_X236=(i<list$1sType$ph_length(right_type->mGenericsTypes)));            _condtional_value_X236;            })) {
                var__23=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value76=__builtin_string(it_21))),((void*)0)));
                (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1, 0, (void*)0));
                if(({                (_condtional_value_X237=(var__23));                _condtional_value_X237;                })) {
                    if(({                    (_condtional_value_X238=(var__23->mType->mHeap));                    _condtional_value_X238;                    })) {
                        free_object((struct sType*)come_increment_ref_count(sType_clone(var__23->mType)),var__23->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                    }
                    map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value79=__builtin_string(it_21))));
                    (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                right_type2=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(right_type->mGenericsTypes,i));
                add_variable_to_table(it_21,(struct sType*)come_increment_ref_count(sType_clone(right_type2)),info,(_Bool)0,self->comma);
                come_call_finalizer(sVar_finalize, var__23, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            i++;
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved_19, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        static int num_multiple_var=0;
        multiple_var_name=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value83=make_define_var(right_value_18->type,multiple_var_name,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1, 0, (void*)0));
        if(({        (_condtional_value_X245=(info->prohibits_output_last_code));        _condtional_value_X245;        })) {
            buffer_append_format(buf,"%s=%s",multiple_var_name,right_value_18->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name,right_value_18->c_value);
        }
        __dec_obj38=right_value_18->c_value,
        right_value_18->c_value=(char*)come_increment_ref_count((char*)come_memdup(multiple_var_name, "07var.c", 131, "char*"));
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0);
        i=0;
        for(        ({        (_condtional_value_X246=(o2_saved_24=(struct list$1char$ph*)come_increment_ref_count(self->multiple_assign),it_25=list$1char$ph_begin(o2_saved_24)));        _condtional_value_X246;        });        ({        (_condtional_value_X247=(!list$1char$ph_end(o2_saved_24)));        _condtional_value_X247;        });        ({        (_condtional_value_X248=(it_25=list$1char$ph_next(o2_saved_24)));        _condtional_value_X248;        })        ){
            if(({            (_condtional_value_X249=(i<list$1sType$ph_length(right_type->mGenericsTypes)));            _condtional_value_X249;            })) {
                right_type2_26=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value85=list$1sType$ph_operator_load_element(right_type->mGenericsTypes,i)))));
                come_call_finalizer(sType_finalize, __right_value85, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                var__27=get_variable_from_table(info->lv_table,it_25);
                var_type=(struct sType*)come_increment_ref_count(sType_clone(var__27->mType));
                var_type->mStatic=(_Bool)0;
                left_type_28=(struct sType*)come_increment_ref_count(sType_clone(var__27->mType));
                right_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 145, "struct CVALUE*"))));
                __dec_obj39=right_value2->c_value,
                right_value2->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_18->c_value,i+1));
                __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj40=right_value2->type,
                right_value2->type=(struct sType*)come_increment_ref_count(sType_clone(right_type2_26));
                come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                right_value2->var=((void*)0);
                come_value_29=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 151, "struct CVALUE*"))));
                check_assign_type(((char*)(__right_value96=xsprintf("\%s is assining to}",((char*)(__right_value95=string_to_string(self->name)))))),left_type_28,right_type2_26,come_value_29,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1, 0, (void*)0));
                if(({                (_condtional_value_X250=(right_type2_26->mHeap&&left_type_28->mHeap&&left_type_28->mPointerNum>0&&right_type2_26->mPointerNum>0));                _condtional_value_X250;                })) {
                    std_move(left_type_28,right_type2_26,right_value2,info,(_Bool)0);
                    __dec_obj41=come_value_29->c_value,
                    come_value_29->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__27->mCValueName,right_value2->c_value));
                    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj42=come_value_29->c_value,
                    come_value_29->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__27->mCValueName,right_value2->c_value));
                    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
                }
                __dec_obj43=come_value_29->type,
                come_value_29->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_28));
                come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value_29->var=var__27;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value100=make_define_var(left_type_28,var__27->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
                (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1, 0, (void*)0));
                if(({                (_condtional_value_X251=(info->prohibits_output_last_code));                _condtional_value_X251;                })) {
                    buffer_append_format(buf,"%s,\n",come_value_29->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_29->c_value);
                }
                come_call_finalizer(sType_finalize, right_type2_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, left_type_28, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, right_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            i++;
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved_24, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(({        (_condtional_value_X252=(string_operator_not_equals(((char*)(__right_value102=buffer_to_string(buf))),"")));        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1, 0, (void*)0));
        _condtional_value_X252;        })) {
            come_value_30=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 180, "struct CVALUE*"))));
            __dec_obj44=come_value_30->c_value,
            come_value_30->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
            __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
            list$1CVALUE$ph_add(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_30));
            come_call_finalizer(CVALUE_finalize, come_value_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (multiple_var_name = come_decrement_ref_count(multiple_var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(({    (_condtional_value_X255=(self->right_value==((void*)0)));    _condtional_value_X255;    })) {
        var__33=((struct sVar*)(__right_value110=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value109=__builtin_string(self->name))),((void*)0))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value110, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_condtional_value_X256=(var__33));        _condtional_value_X256;        })) {
            if(({            (_condtional_value_X257=(var__33->mType->mHeap));            _condtional_value_X257;            })) {
                free_object((struct sType*)come_increment_ref_count(sType_clone(var__33->mType)),var__33->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value112=__builtin_string(self->name))));
            (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(({        (_condtional_value_X258=(self->type==((void*)0)));        _condtional_value_X258;        })) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)1;
        }
        type_34=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(self->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_34)),info,(_Bool)0,self->comma);
        var__33=get_variable_from_table(info->lv_table,self->name);
        if(({        (_condtional_value_X259=(var__33==((void*)0)));        _condtional_value_X259;        })) {
            var__33=get_variable_from_table(info->gv_table,self->name);
            if(({            (_condtional_value_X260=(var__33==((void*)0)));            _condtional_value_X260;            })) {
                err_msg(info,"var not found(%s)(Y) at definition of variable",self->name);
                __result_obj__62 = (_Bool)1;
                come_call_finalizer(sType_finalize, type_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__62;
            }
        }
        left_type_35=(struct sType*)come_increment_ref_count(sType_clone(var__33->mType));
        if(({        (_condtional_value_X261=(left_type_35->mChannel));        _condtional_value_X261;        })) {
            if(({            (_condtional_value_X262=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_35->mNoCallingDestructor&&((struct sFun*)(__right_value116=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));            come_call_finalizer(sFun_finalize, __right_value116, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _condtional_value_X262;            })) {
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__33->mCValueName);
            }
        }
        else if(({        (_condtional_value_X264=(list$1sNode$ph_length(left_type_35->mArrayNum)>0));        _condtional_value_X264;        })) {
            add_come_code(info,"%s;\n",((char*)(__right_value117=make_define_var(left_type_35,var__33->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1, 0, (void*)0));
            if(({            (_condtional_value_X265=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_35->mNoCallingDestructor&&((struct sFun*)(__right_value118=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));            come_call_finalizer(sFun_finalize, __right_value118, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _condtional_value_X265;            })) {
                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__33->mCValueName,((char*)(__right_value119=make_type_name_string(left_type_35,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)1))));
                (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1, 0, (void*)0));
                for(                ({                (_condtional_value_X268=(o2_saved_36=(struct list$1sNode$ph*)come_increment_ref_count(left_type_35->mArrayNum),it_38=list$1sNode$ph_begin(o2_saved_36)));                _condtional_value_X268;                });                ({                (_condtional_value_X269=(!list$1sNode$ph_end(o2_saved_36)));                _condtional_value_X269;                });                ({                (_condtional_value_X272=(it_38=list$1sNode$ph_next(o2_saved_36)));                _condtional_value_X272;                })                ){
                    Value_40=node_compile(it_38,info);
                    if(({                    (_condtional_value_X273=(!Value_40));                    _condtional_value_X273;                    })) {
                        err_msg(info,"invalid array num");
                        __result_obj__69 = (_Bool)1;
                        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(sType_finalize, type_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(sType_finalize, left_type_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__69;
                    }
                    else {
                    }
                    come_value_41=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    add_come_code(info,"*(%s)",come_value_41->c_value);
                    come_call_finalizer(CVALUE_finalize, come_value_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                add_come_code(info,");\n");
            }
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value121=make_define_var(left_type_35,var__33->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1, 0, (void*)0));
            if(({            (_condtional_value_X274=(left_type_35->mPointerNum>0));            _condtional_value_X274;            })) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__33->mCValueName);
            }
            else {
                if(({                (_condtional_value_X275=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_35->mNoCallingDestructor&&((struct sFun*)(__right_value122=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));                come_call_finalizer(sFun_finalize, __right_value122, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _condtional_value_X275;                })) {
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__33->mCValueName,((char*)(__right_value123=make_type_name_string(left_type_35,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)1))));
                    (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
        }
        if(({        (_condtional_value_X276=(!info->m5stack_cpp));        _condtional_value_X276;        })) {
            come_value_42=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 270, "struct CVALUE*"))));
            __dec_obj48=come_value_42->c_value,
            come_value_42->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__33->mCValueName));
            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj49=come_value_42->type,
            come_value_42->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_35));
            come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_42->var=var__33;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_42));
            come_call_finalizer(CVALUE_finalize, come_value_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(({        (_condtional_value_X279=(!left_type_35->mClass->mNumber&&left_type_35->mPointerNum==0));        _condtional_value_X279;        })) {
            var__33->mType->mAllocaValue=(_Bool)1;
            if(({            (_condtional_value_X280=(var__33->mType->mNoSolvedGenericsType));            _condtional_value_X280;            })) {
                var__33->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        come_call_finalizer(sType_finalize, type_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_condtional_value_X281=(self->alloc));    _condtional_value_X281;    })) {
        var__45=((struct sVar*)(__right_value132=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value131=__builtin_string(self->name))),((void*)0))));
        (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value132, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_condtional_value_X282=(var__45));        _condtional_value_X282;        })) {
            if(({            (_condtional_value_X283=(var__45->mType->mHeap));            _condtional_value_X283;            })) {
                free_object((struct sType*)come_increment_ref_count(sType_clone(var__45->mType)),var__45->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value134=__builtin_string(self->name))));
            (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(({        (_condtional_value_X284=(self->type==((void*)0)));        _condtional_value_X284;        })) {
        }
        else {
            type_46=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(self->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_46)),info,(_Bool)0,self->comma);
            come_call_finalizer(sType_finalize, type_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        Value_47=node_compile(self->right_value,info);
        if(({        (_condtional_value_X285=(!Value_47));        _condtional_value_X285;        })) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer=string_operator_equals(((char*)(__right_value138=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1, 0, (void*)0));
        struct_initializer=string_operator_equals(((char*)(__right_value140=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1, 0, (void*)0));
        string_initializer=string_operator_equals(((char*)(__right_value142=self->right_value->kind(self->right_value->_protocol_obj))),"sStrNode");
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1, 0, (void*)0));
        new_channel=string_operator_equals(((char*)(__right_value144=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1, 0, (void*)0));
        right_value_48=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_49=right_value_48->type;
        if(({        (_condtional_value_X286=(self->type==((void*)0)));        _condtional_value_X286;        })) {
            if(({            (_condtional_value_X287=(self->val_));            _condtional_value_X287;            })) {
                right_type_49->mImmutable=(_Bool)1;
            }
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(right_type_49)),info,(_Bool)0,self->comma);
        }
        else {
        }
        var__45=get_variable_from_table(info->lv_table,self->name);
        var_type_50=(struct sType*)come_increment_ref_count(sType_clone(var__45->mType));
        var_type_50->mStatic=(_Bool)0;
        if(({        (_condtional_value_X288=(!array_initializer&&!struct_initializer&&!string_initializer&&!var__45->mType->mStatic&&!var_type_50->mConstant&&list$1sNode$ph_length(var_type_50->mArrayNum)==0&&!var__45->mType->mRegister));        _condtional_value_X288;        })) {
            if(({            (_condtional_value_X289=(var_type_50->mClass->mNumber));            _condtional_value_X289;            })) {
            }
            else if(({            (_condtional_value_X290=((var_type_50->mClass->mStruct||var_type_50->mClass->mUnion||var_type_50->mClass->mEnum)||var_type_50->mPointerNum>0));            _condtional_value_X290;            })) {
            }
            else {
                if(({                (_condtional_value_X291=(string_operator_not_equals(info->come_fun->mName,"memset")&&!var_type_50->mNoCallingDestructor&&((struct sFun*)(__right_value148=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));                come_call_finalizer(sFun_finalize, __right_value148, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _condtional_value_X291;                })) {
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__45->mCValueName,((char*)(__right_value149=make_type_name_string(var_type_50,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)1))));
                    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
        }
        left_type_51=(struct sType*)come_increment_ref_count(sType_clone(var__45->mType));
        if(({        (_condtional_value_X292=(array_initializer||string_initializer));        _condtional_value_X292;        })) {
            var__52=((struct sVar*)(__right_value152=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value151=__builtin_string(self->name))),((void*)0))));
            (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value152, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value153=make_define_var(var__52->mType,var__52->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_48->c_value);
            (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1, 0, (void*)0));
            come_value_53=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 355, "struct CVALUE*"))));
            __dec_obj53=come_value_53->c_value,
            come_value_53->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_53));
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(({        (_condtional_value_X293=(left_type_51->mRegister));        _condtional_value_X293;        })) {
            var__54=((struct sVar*)(__right_value158=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value157=__builtin_string(self->name))),((void*)0))));
            (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value158, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_value_55=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 364, "struct CVALUE*"))));
            __dec_obj54=come_value_55->c_value,
            come_value_55->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s;\n",((char*)(__right_value161=make_define_var(var__54->mType,var__54->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_48->c_value));
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1, 0, (void*)0));
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
            come_call_finalizer(CVALUE_finalize, come_value_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(({        (_condtional_value_X294=(array_initializer||left_type_51->mRegister));        _condtional_value_X294;        })) {
            var__56=((struct sVar*)(__right_value164=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value163=__builtin_string(self->name))),((void*)0))));
            (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value164, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value165=make_define_var(var__56->mType,var__56->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_48->c_value);
            (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1, 0, (void*)0));
            come_value_57=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 379, "struct CVALUE*"))));
            __dec_obj55=come_value_57->c_value,
            come_value_57->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_57));
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(({        (_condtional_value_X295=(struct_initializer));        _condtional_value_X295;        })) {
            var__58=((struct sVar*)(__right_value170=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value169=__builtin_string(self->name))),((void*)0))));
            (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value170, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value171=make_define_var(var__58->mType,var__58->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_48->c_value);
            (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1, 0, (void*)0));
            come_value_59=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 396, "struct CVALUE*"))));
            __dec_obj56=come_value_59->c_value,
            come_value_59->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_59));
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(({        (_condtional_value_X296=(var__45->mType->mStatic||var__45->mType->mConstant));        _condtional_value_X296;        })) {
            check_assign_type(((char*)(__right_value176=xsprintf("\%s is assining to",((char*)(__right_value175=string_to_string(self->name)))))),left_type_51,right_type_49,right_value_48,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1, 0, (void*)0));
            add_come_code(info,"%s=%s;\n",((char*)(__right_value177=make_define_var(left_type_51,var__45->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_48->c_value);
            (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1, 0, (void*)0));
            come_value_60=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 414, "struct CVALUE*"))));
            __dec_obj57=come_value_60->c_value,
            come_value_60->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_60));
            transpiler_clear_last_code(info);
            come_call_finalizer(CVALUE_finalize, come_value_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(({        (_condtional_value_X297=(right_type_49->mHeap&&left_type_51->mHeap&&left_type_51->mPointerNum>0&&right_type_49->mPointerNum>0));        _condtional_value_X297;        })) {
            check_assign_type(((char*)(__right_value182=xsprintf("\%s is assining to",((char*)(__right_value181=string_to_string(self->name)))))),left_type_51,right_type_49,right_value_48,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1, 0, (void*)0));
            std_move(left_type_51,right_type_49,right_value_48,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value183=make_define_var(left_type_51,var__45->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1, 0, (void*)0));
            come_value_61=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 435, "struct CVALUE*"))));
            __dec_obj58=come_value_61->c_value,
            come_value_61->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__45->mCValueName,right_value_48->c_value));
            __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj59=come_value_61->type,
            come_value_61->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_51));
            come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_61->var=var__45;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_61));
            add_come_last_code(info,"%s",come_value_61->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(({        (_condtional_value_X298=(left_type_51->mChannel&&new_channel));        _condtional_value_X298;        })) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value188=make_define_var(left_type_51,var__45->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1, 0, (void*)0));
            if(({            (_condtional_value_X299=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_51->mNoCallingDestructor&&((struct sFun*)(__right_value189=map$2char$phsFun$ph_operator_load_element(info->funcs,"memset")))));            come_call_finalizer(sFun_finalize, __right_value189, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _condtional_value_X299;            })) {
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__45->mCValueName);
            }
            come_value_62=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 451, "struct CVALUE*"))));
            __dec_obj60=come_value_62->c_value,
            come_value_62->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__45->mCValueName));
            __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj61=come_value_62->type,
            come_value_62->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 453, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_62->type->mPointerNum=1;
            come_value_62->var=var__45;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_62));
            add_come_last_code(info,"%s",come_value_62->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(({        (_condtional_value_X300=(left_type_51->mPointerNum>0&&left_type_51->mHeap&&string_operator_equals(right_type_49->mClass->mName,"void")&&right_type_49->mPointerNum>0));        _condtional_value_X300;        })) {
            check_assign_type(((char*)(__right_value197=xsprintf("\%s is assining to",((char*)(__right_value196=string_to_string(self->name)))))),left_type_51,right_type_49,right_value_48,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1, 0, (void*)0));
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value198=make_define_var(left_type_51,var__45->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1, 0, (void*)0));
            come_value_63=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 467, "struct CVALUE*"))));
            __dec_obj62=come_value_63->c_value,
            come_value_63->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__45->mCValueName,right_value_48->c_value));
            __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj63=come_value_63->type,
            come_value_63->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_51));
            come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_63->var=var__45;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_63));
            add_come_last_code(info,"%s",come_value_63->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_63, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value204=xsprintf("\%s is assining to",((char*)(__right_value203=string_to_string(self->name)))))),left_type_51,right_type_49,right_value_48,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1, 0, (void*)0));
            if(({            (_condtional_value_X301=(right_type_49->mHeap&&left_type_51->mHeap&&left_type_51->mPointerNum>0&&right_type_49->mPointerNum>0));            _condtional_value_X301;            })) {
                std_move(left_type_51,right_type_49,right_value_48,info,(_Bool)0);
            }
            if(({            (_condtional_value_X302=(left_type_51->mHeap&&!right_value_48->type->mHeap));            _condtional_value_X302;            })) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result_obj__71 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, var_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, left_type_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__71;
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value205=make_define_var(left_type_51,var__45->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value205 = come_decrement_ref_count(__right_value205, (void*)0, (void*)0, 1, 0, (void*)0));
            come_value_64=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 499, "struct CVALUE*"))));
            __dec_obj64=come_value_64->c_value,
            come_value_64->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__45->mCValueName,right_value_48->c_value));
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj65=come_value_64->type,
            come_value_64->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_51));
            come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_64->var=var__45;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_64));
            add_come_last_code(info,"%s",come_value_64->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(CVALUE_finalize, right_value_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, var_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        Value_65=node_compile(self->right_value,info);
        if(({        (_condtional_value_X303=(!Value_65));        _condtional_value_X303;        })) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_66=string_operator_equals(((char*)(__right_value211=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value210 = come_decrement_ref_count(__right_value210, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1, 0, (void*)0));
        right_value_67=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_68=right_value_67->type;
        current_stack_frame_struct=info->current_stack_frame_struct;
        if(({        (_condtional_value_X304=(current_stack_frame_struct&&((struct sVar*)(__right_value214=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value213=__builtin_string(self->name))),((void*)0))))==((void*)0)));        (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value214, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _condtional_value_X304;        })) {
            parent_var=get_variable_from_table(info->lv_table->mParent,self->name);
            if(({            (_condtional_value_X305=(parent_var!=((void*)0)));            _condtional_value_X305;            })) {
                if(({                (_condtional_value_X306=(string_operator_not_equals(parent_var->mFunName,info->come_fun->mName)));                _condtional_value_X306;                })) {
                    left_type_69=parent_var->mType;
                    if(({                    (_condtional_value_X307=(left_type_69->mImmutable));                    _condtional_value_X307;                    })) {
                        err_msg(info,"Immutable object can't change");
                        __result_obj__72 = (_Bool)1;
                        come_call_finalizer(CVALUE_finalize, right_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__72;
                    }
                    if(({                    (_condtional_value_X308=(left_type_69->mPointerNum>0&&right_type_68->mPointerNum>0&&right_type_68->mHeap&&left_type_69->mHeap));                    _condtional_value_X308;                    })) {
                        check_assign_type(((char*)(__right_value216=xsprintf("\%s is assigning to",((char*)(__right_value215=string_to_string(self->name)))))),left_type_69,right_type_68,right_value_67,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1, 0, (void*)0));
                        c_value=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var->mCValueName));
                        decrement_ref_count_object((struct sType*)come_increment_ref_count(parent_var->mType),c_value,info,(_Bool)0);
                        std_move(left_type_69,right_type_68,right_value_67,info,(_Bool)0);
                        come_value_70=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 542, "struct CVALUE*"))));
                        if(({                        (_condtional_value_X309=(parent_var->mType->mOriginIsArray));                        _condtional_value_X309;                        })) {
                            __dec_obj66=come_value_70->c_value,
                            come_value_70->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var->mCValueName,right_value_67->c_value));
                            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                        else {
                            __dec_obj67=come_value_70->c_value,
                            come_value_70->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var->mCValueName,right_value_67->c_value));
                            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                        __dec_obj68=come_value_70->type,
                        come_value_70->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_69));
                        come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_value_70->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_70->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_70));
                        __result_obj__73 = (_Bool)1;
                        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(CVALUE_finalize, come_value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(CVALUE_finalize, right_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__73;
                        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(CVALUE_finalize, come_value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else if(({                    (_condtional_value_X310=(left_type_69->mPointerNum>0&&right_type_68->mPointerNum>0&&string_operator_equals(right_type_68->mClass->mName,"void")&&left_type_69->mHeap));                    _condtional_value_X310;                    })) {
                        check_assign_type(((char*)(__right_value224=xsprintf("\%s is assigning to",((char*)(__right_value223=string_to_string(self->name)))))),left_type_69,right_type_68,right_value_67,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value223 = come_decrement_ref_count(__right_value223, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1, 0, (void*)0));
                        c_value_71=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var->mCValueName));
                        decrement_ref_count_object((struct sType*)come_increment_ref_count(parent_var->mType),c_value_71,info,(_Bool)0);
                        come_value_72=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 566, "struct CVALUE*"))));
                        if(({                        (_condtional_value_X311=(parent_var->mType->mOriginIsArray));                        _condtional_value_X311;                        })) {
                            __dec_obj69=come_value_72->c_value,
                            come_value_72->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var->mCValueName,right_value_67->c_value));
                            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                        else {
                            __dec_obj70=come_value_72->c_value,
                            come_value_72->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var->mCValueName,right_value_67->c_value));
                            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                        __dec_obj71=come_value_72->type,
                        come_value_72->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_69));
                        come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_value_72->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_72->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_72));
                        __result_obj__74 = (_Bool)1;
                        (c_value_71 = come_decrement_ref_count(c_value_71, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(CVALUE_finalize, come_value_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(CVALUE_finalize, right_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__74;
                        (c_value_71 = come_decrement_ref_count(c_value_71, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(CVALUE_finalize, come_value_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        check_assign_type(((char*)(__right_value232=xsprintf("\%s is assigning to",((char*)(__right_value231=string_to_string(self->name)))))),left_type_69,right_type_68,right_value_67,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1, 0, (void*)0));
                        (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1, 0, (void*)0));
                        if(({                        (_condtional_value_X312=(left_type_69->mHeap&&!right_value_67->type->mHeap));                        _condtional_value_X312;                        })) {
                            err_msg(info,"require right value as heap object(%s)",self->name);
                            __result_obj__75 = (_Bool)1;
                            come_call_finalizer(CVALUE_finalize, right_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result_obj__75;
                        }
                        come_value_73=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 591, "struct CVALUE*"))));
                        if(({                        (_condtional_value_X313=(parent_var->mType->mOriginIsArray));                        _condtional_value_X313;                        })) {
                            __dec_obj72=come_value_73->c_value,
                            come_value_73->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var->mCValueName,right_value_67->c_value));
                            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                        else {
                            __dec_obj73=come_value_73->c_value,
                            come_value_73->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var->mCValueName,right_value_67->c_value));
                            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                        __dec_obj74=come_value_73->type,
                        come_value_73->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_69));
                        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_value_73->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_73->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_73));
                        __result_obj__76 = (_Bool)1;
                        come_call_finalizer(CVALUE_finalize, come_value_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(CVALUE_finalize, right_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result_obj__76;
                        come_call_finalizer(CVALUE_finalize, come_value_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
        var__74=get_variable_from_table(info->lv_table,self->name);
        if(({        (_condtional_value_X314=(var__74==((void*)0)));        _condtional_value_X314;        })) {
            var__74=get_variable_from_table(info->gv_table,self->name);
            if(({            (_condtional_value_X315=(var__74==((void*)0)));            _condtional_value_X315;            })) {
                err_msg(info,"var not found(%s)(X) at storing variable",self->name);
                __result_obj__77 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__77;
            }
        }
        if(({        (_condtional_value_X316=(var__74->mType==((void*)0)));        _condtional_value_X316;        })) {
            __dec_obj75=var__74->mType,
            var__74->mType=(struct sType*)come_increment_ref_count(sType_clone(right_type_68));
            come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        left_type_75=(struct sType*)come_increment_ref_count(sType_clone(var__74->mType));
        if(({        (_condtional_value_X317=(left_type_75->mImmutable));        _condtional_value_X317;        })) {
            err_msg(info,"Immutable object can't change");
            __result_obj__78 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, right_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__78;
        }
        if(({        (_condtional_value_X318=((var__74->mType->mStatic||var__74->mType->mConstant)&&!var__74->mGlobal));        _condtional_value_X318;        })) {
            check_assign_type(((char*)(__right_value241=xsprintf("\%s is assining to",((char*)(__right_value240=string_to_string(self->name)))))),left_type_75,right_type_68,right_value_67,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value240 = come_decrement_ref_count(__right_value240, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value241 = come_decrement_ref_count(__right_value241, (void*)0, (void*)0, 1, 0, (void*)0));
            come_value_76=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 637, "struct CVALUE*"))));
            __dec_obj76=come_value_76->c_value,
            come_value_76->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__74->mCValueName,right_value_67->c_value));
            __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj77=come_value_76->type,
            come_value_76->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_75));
            come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_76->var=var__74;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
            add_come_last_code(info,"%s",come_value_76->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(({        (_condtional_value_X319=(right_type_68->mHeap&&left_type_75->mHeap&&left_type_75->mPointerNum>0&&right_type_68->mPointerNum>0));        _condtional_value_X319;        })) {
            check_assign_type(((char*)(__right_value247=xsprintf("\%s is assining to",((char*)(__right_value246=string_to_string(self->name)))))),left_type_75,right_type_68,right_value_67,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value247 = come_decrement_ref_count(__right_value247, (void*)0, (void*)0, 1, 0, (void*)0));
            decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_75),var__74->mCValueName,info,(_Bool)0);
            std_move(left_type_75,right_type_68,right_value_67,info,(_Bool)0);
            come_value_77=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 654, "struct CVALUE*"))));
            __dec_obj78=come_value_77->c_value,
            come_value_77->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__74->mCValueName,right_value_67->c_value));
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj79=come_value_77->type,
            come_value_77->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_75));
            come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_77->var=var__74;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_77));
            add_come_last_code(info,"%s",come_value_77->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(({        (_condtional_value_X320=(left_type_75->mPointerNum>0&&left_type_75->mHeap&&string_operator_equals(right_type_68->mClass->mName,"void")&&right_type_68->mPointerNum>0));        _condtional_value_X320;        })) {
            check_assign_type(((char*)(__right_value253=xsprintf("\%s is assining to",((char*)(__right_value252=string_to_string(self->name)))))),left_type_75,right_type_68,right_value_67,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1, 0, (void*)0));
            decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_75),var__74->mCValueName,info,(_Bool)0);
            come_value_78=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 670, "struct CVALUE*"))));
            __dec_obj80=come_value_78->c_value,
            come_value_78->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__74->mCValueName,right_value_67->c_value));
            __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj81=come_value_78->type,
            come_value_78->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_75));
            come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_78->var=var__74;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_78));
            add_come_last_code(info,"%s",come_value_78->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(({        (_condtional_value_X321=(left_type_75->mChannel&&new_channel_66));        _condtional_value_X321;        })) {
            come_value_79=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 681, "struct CVALUE*"))));
            __dec_obj82=come_value_79->c_value,
            come_value_79->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__74->mCValueName));
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj83=come_value_79->type,
            come_value_79->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 683, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_79->type->mPointerNum=1;
            come_value_79->var=var__74;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_79));
            add_come_last_code(info,"%s",come_value_79->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value265=xsprintf("\%s is assining to",((char*)(__right_value264=string_to_string(self->name)))))),left_type_75,right_type_68,right_value_67,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value264 = come_decrement_ref_count(__right_value264, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value265 = come_decrement_ref_count(__right_value265, (void*)0, (void*)0, 1, 0, (void*)0));
            if(({            (_condtional_value_X322=(left_type_75->mHeap&&!right_value_67->type->mHeap));            _condtional_value_X322;            })) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result_obj__79 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, left_type_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__79;
            }
            come_value_80=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 699, "struct CVALUE*"))));
            __dec_obj84=come_value_80->c_value,
            come_value_80->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__74->mCValueName,right_value_67->c_value));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj85=come_value_80->type,
            come_value_80->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_75));
            come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_value_80->var=var__74;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_80));
            add_come_last_code(info,"%s",come_value_80->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(CVALUE_finalize, right_value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
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
void* __right_value2 = (void*)0;
struct sType* result;
_Bool _condtional_value_X25;
_Bool _condtional_value_X26;
void* __right_value3 = (void*)0;
struct sType* __dec_obj2;
_Bool _condtional_value_X27;
void* __right_value4 = (void*)0;
struct sType* __dec_obj3;
_Bool _condtional_value_X28;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __dec_obj7;
_Bool _condtional_value_X35;
void* __right_value13 = (void*)0;
struct sType* __dec_obj8;
_Bool _condtional_value_X36;
void* __right_value15 = (void*)0;
struct sNode* __dec_obj9;
_Bool _condtional_value_X48;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj10;
_Bool _condtional_value_X49;
void* __right_value17 = (void*)0;
char* __dec_obj11;
_Bool _condtional_value_X50;
void* __right_value18 = (void*)0;
char* __dec_obj12;
_Bool _condtional_value_X51;
void* __right_value19 = (void*)0;
char* __dec_obj13;
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
void* __right_value20 = (void*)0;
char* __dec_obj14;
_Bool _condtional_value_X78;
_Bool _condtional_value_X79;
_Bool _condtional_value_X80;
_Bool _condtional_value_X81;
void* __right_value28 = (void*)0;
struct list$1sNode$ph* __dec_obj18;
_Bool _condtional_value_X88;
_Bool _condtional_value_X89;
_Bool _condtional_value_X90;
_Bool _condtional_value_X91;
_Bool _condtional_value_X92;
_Bool _condtional_value_X93;
_Bool _condtional_value_X94;
void* __right_value29 = (void*)0;
char* __dec_obj19;
_Bool _condtional_value_X95;
_Bool _condtional_value_X96;
_Bool _condtional_value_X97;
void* __right_value30 = (void*)0;
struct list$1sType$ph* __dec_obj20;
_Bool _condtional_value_X98;
void* __right_value38 = (void*)0;
struct list$1char$ph* __dec_obj24;
_Bool _condtional_value_X105;
void* __right_value39 = (void*)0;
struct sType* __dec_obj25;
_Bool _condtional_value_X106;
_Bool _condtional_value_X107;
_Bool _condtional_value_X108;
void* __right_value40 = (void*)0;
struct sNode* __dec_obj26;
struct sType* __result_obj__16;
    if(({    (_condtional_value_X2=(self==(void*)0));    _condtional_value_X2;    })) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__1, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__1;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_condtional_value_X25=(self!=((void*)0)));    _condtional_value_X25;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_condtional_value_X26=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X26;    })) {
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X27=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X27;    })) {
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X28=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X28;    })) {
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X35=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X35;    })) {
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X36=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X36;    })) {
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X48=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X48;    })) {
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X49=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X49;    })) {
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X50=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X50;    })) {
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X51=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X51;    })) {
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj14=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj18=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj19=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X95=(self!=((void*)0)));    _condtional_value_X95;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_condtional_value_X96=(self!=((void*)0)));    _condtional_value_X96;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_condtional_value_X97=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X97;    })) {
        __dec_obj20=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X98=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X98;    })) {
        __dec_obj24=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X105=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X105;    })) {
        __dec_obj25=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X106=(self!=((void*)0)));    _condtional_value_X106;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_condtional_value_X107=(self!=((void*)0)));    _condtional_value_X107;    })) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(({    (_condtional_value_X108=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X108;    })) {
        __dec_obj26=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__16, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__16;
}

static void sType_finalize(struct sType* self){
_Bool _condtional_value_X3;
_Bool _condtional_value_X4;
_Bool _condtional_value_X5;
_Bool _condtional_value_X8;
_Bool _condtional_value_X9;
_Bool _condtional_value_X10;
_Bool _condtional_value_X11;
_Bool _condtional_value_X12;
_Bool _condtional_value_X13;
_Bool _condtional_value_X14;
_Bool _condtional_value_X15;
_Bool _condtional_value_X18;
_Bool _condtional_value_X19;
_Bool _condtional_value_X20;
_Bool _condtional_value_X23;
_Bool _condtional_value_X24;
    if(({    (_condtional_value_X3=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X3;    })) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X4=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X4;    })) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X5=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X5;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X8=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X8;    })) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X9=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X9;    })) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X10=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X10;    })) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X11=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X11;    })) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X12=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X12;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X13=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X13;    })) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X14=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X14;    })) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X15=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X15;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X18=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X18;    })) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X19=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X19;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X20=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X20;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X23=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X23;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X24=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X24;    })) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X6;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X6=(it!=((void*)0)));    _condtional_value_X6;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
_Bool _condtional_value_X7;
    if(({    (_condtional_value_X7=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X7;    })) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X16;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X16=(it!=((void*)0)));    _condtional_value_X16;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
_Bool _condtional_value_X17;
    if(({    (_condtional_value_X17=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X17;    })) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X21;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X21=(it!=((void*)0)));    _condtional_value_X21;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
_Bool _condtional_value_X22;
    if(({    (_condtional_value_X22=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X22;    })) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
_Bool _condtional_value_X29;
struct list$1sType$ph* __result_obj__2;
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _condtional_value_X30;
_Bool _condtional_value_X31;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
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
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj4;
_Bool _condtional_value_X33;
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_0;
struct sType* __dec_obj5;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_1;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__4;
    if(({    (_condtional_value_X32=(self->len==0));    _condtional_value_X32;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X33=(self->len==1));    _condtional_value_X33;    })) {
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sType$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
void* __right_value14 = (void*)0;
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
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X83;
_Bool _condtional_value_X84;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
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
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj15;
_Bool _condtional_value_X86;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_2;
struct sNode* __dec_obj16;
void* __right_value25 = (void*)0;
struct list_item$1sNode$ph* litem_3;
struct sNode* __dec_obj17;
struct list$1sNode$ph* __result_obj__10;
    if(({    (_condtional_value_X85=(self->len==0));    _condtional_value_X85;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj15=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X86=(self->len==1));    _condtional_value_X86;    })) {
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj16=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sNode$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj17=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
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
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _condtional_value_X100;
_Bool _condtional_value_X101;
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
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
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj21;
_Bool _condtional_value_X103;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_4;
char* __dec_obj22;
void* __right_value35 = (void*)0;
struct list_item$1char$ph* litem_5;
char* __dec_obj23;
struct list$1char$ph* __result_obj__14;
    if(({    (_condtional_value_X102=(self->len==0));    _condtional_value_X102;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj21=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X103=(self->len==1));    _condtional_value_X103;    })) {
        litem_4=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1char$ph*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj22=litem_4->item,
        litem_4->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1char$ph*"))));
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj23=litem_5->item,
        litem_5->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0);
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

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
_Bool _condtional_value_X109;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__17;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* result;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
_Bool _condtional_value_X115;
_Bool _condtional_value_X116;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__22;
    if(({    (_condtional_value_X109=(self==((void*)0)));    _condtional_value_X109;    })) {
        __result_obj__17 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__17;
    }
    result=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X115=(it!=((void*)0)));    _condtional_value_X115;    })) {
        if(({        (_condtional_value_X116=(1));        _condtional_value_X116;        })) {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it->item)));
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__22 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__22, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__22;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
_Bool _condtional_value_X110;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X110=(it!=((void*)0)));    _condtional_value_X110;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self){
_Bool _condtional_value_X111;
    if(({    (_condtional_value_X111=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X111;    })) {
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
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
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__18;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__18 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__18;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
_Bool _condtional_value_X117;
void* __right_value45 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj30;
_Bool _condtional_value_X118;
void* __right_value46 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_6;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj31;
void* __right_value47 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_7;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj32;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__19;
    if(({    (_condtional_value_X117=(self->len==0));    _condtional_value_X117;    })) {
        litem=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value45=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj30=litem->item,
        litem->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X118=(self->len==1));    _condtional_value_X118;    })) {
        litem_6=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value46=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj31=litem_6->item,
        litem_6->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value47=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj32=litem_7->item,
        litem_7->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__19 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__19;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self){
_Bool _condtional_value_X119;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__20;
void* __right_value48 = (void*)0;
struct tuple3$3sType$phchar$phsNode$ph* result;
_Bool _condtional_value_X120;
void* __right_value49 = (void*)0;
struct sType* __dec_obj33;
_Bool _condtional_value_X121;
void* __right_value50 = (void*)0;
char* __dec_obj34;
_Bool _condtional_value_X122;
void* __right_value51 = (void*)0;
struct sNode* __dec_obj35;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__21;
    if(({    (_condtional_value_X119=(self==(void*)0));    _condtional_value_X119;    })) {
        __result_obj__20 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__20, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__20;
    }
    result=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 3, "struct tuple3$3sType$phchar$phsNode$ph*"));
    if(({    (_condtional_value_X120=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X120;    })) {
        __dec_obj33=result->v1,
        result->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X121=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X121;    })) {
        __dec_obj34=result->v2,
        result->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phsNode$ph_clone", 5, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X122=(self!=((void*)0)&&self->v3!=((void*)0)));    _condtional_value_X122;    })) {
        __dec_obj35=result->v3,
        result->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3));
        (__dec_obj35 ? __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__21 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__21, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__21;
}

static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
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
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
_Bool _condtional_value_X126;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X126=(it!=((void*)0)));    _condtional_value_X126;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sStoreNode_finalize(struct sStoreNode* self){
_Bool _condtional_value_X127;
_Bool _condtional_value_X128;
_Bool _condtional_value_X129;
_Bool _condtional_value_X130;
_Bool _condtional_value_X131;
_Bool _condtional_value_X132;
_Bool _condtional_value_X133;
    if(({    (_condtional_value_X127=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X127;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X128=(self!=((void*)0)&&self->name!=((void*)0)));    _condtional_value_X128;    })) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X129=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X129;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X130=(self!=((void*)0)&&self->right_value!=((void*)0)));    _condtional_value_X130;    })) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X131=(self!=((void*)0)&&self->multiple_assign!=((void*)0)));    _condtional_value_X131;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X132=(self!=((void*)0)&&self->multiple_declare!=((void*)0)));    _condtional_value_X132;    })) {
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X133=(self!=((void*)0)&&self->attribute!=((void*)0)));    _condtional_value_X133;    })) {
        (self->attribute = come_decrement_ref_count(self->attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X135;
_Bool _condtional_value_X136;
_Bool _condtional_value_X137;
struct sVar* __result_obj__25;
_Bool _condtional_value_X142;
_Bool _condtional_value_X143;
struct sVar* __result_obj__26;
struct sVar* __result_obj__27;
struct sVar* __result_obj__28;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X135=((_Bool)1));    _condtional_value_X135;    })) {
        if(({        (_condtional_value_X136=(self->item_existance[it]));        _condtional_value_X136;        })) {
            if(({            (_condtional_value_X137=(string_equals(self->keys[it],key)));            _condtional_value_X137;            })) {
                __result_obj__25 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__25, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__25;
            }
            it++;
            if(({            (_condtional_value_X142=(it>=self->size));            _condtional_value_X142;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X143=(it==hash));            _condtional_value_X143;            })) {
                __result_obj__26 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__26, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__26;
            }
        }
        else {
            __result_obj__27 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__27, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__27;
        }
    }
    __result_obj__28 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__28, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__28;
}

static void sVar_finalize(struct sVar* self){
_Bool _condtional_value_X138;
_Bool _condtional_value_X139;
_Bool _condtional_value_X140;
_Bool _condtional_value_X141;
    if(({    (_condtional_value_X138=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X138;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X139=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _condtional_value_X139;    })) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X140=(self!=((void*)0)&&self->mType!=((void*)0)));    _condtional_value_X140;    })) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X141=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _condtional_value_X141;    })) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X146;
_Bool _condtional_value_X147;
_Bool _condtional_value_X148;
_Bool _condtional_value_X173;
_Bool _condtional_value_X174;
_Bool _condtional_value_X175;
_Bool _condtional_value_X176;
struct map$2char$phsVar$ph* __result_obj__33;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X146=((_Bool)1));    _condtional_value_X146;    })) {
        if(({        (_condtional_value_X147=(self->item_existance[it]));        _condtional_value_X147;        })) {
            if(({            (_condtional_value_X148=(string_equals(self->keys[it],key)));            _condtional_value_X148;            })) {
                list$1char$ph_remove(self->key_list,self->keys[it]);
                self->item_existance[it]=(_Bool)0;
                if(({                (_condtional_value_X173=(1));                _condtional_value_X173;                })) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                }
                self->keys[it]=((void*)0);
                if(({                (_condtional_value_X174=(1));                _condtional_value_X174;                })) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(self->items+it,0,sizeof(struct sVar*));
                self->len--;
                break;
            }
            it++;
            if(({            (_condtional_value_X175=(it>=self->size));            _condtional_value_X175;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X176=(it==hash));            _condtional_value_X176;            })) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__33 = self;
    return __result_obj__33;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
_Bool _condtional_value_X149;
_Bool _condtional_value_X150;
struct list$1char$ph* __result_obj__32;
    it2=0;
    it=self->head;
    while(({    (_condtional_value_X149=(it!=((void*)0)));    _condtional_value_X149;    })) {
        if(({        (_condtional_value_X150=(string_equals(it->item,item)));        _condtional_value_X150;        })) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__32 = self;
    return __result_obj__32;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
_Bool _condtional_value_X151;
_Bool _condtional_value_X152;
_Bool _condtional_value_X153;
int tmp;
_Bool _condtional_value_X154;
_Bool _condtional_value_X155;
_Bool _condtional_value_X156;
struct list$1char$ph* __result_obj__29;
_Bool _condtional_value_X157;
_Bool _condtional_value_X159;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X160;
_Bool _condtional_value_X161;
struct list_item$1char$ph* prev_it;
_Bool _condtional_value_X162;
_Bool _condtional_value_X163;
struct list_item$1char$ph* it_8;
int i_9;
_Bool _condtional_value_X164;
_Bool _condtional_value_X165;
_Bool _condtional_value_X166;
struct list_item$1char$ph* prev_it_10;
struct list_item$1char$ph* it_11;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_12;
_Bool _condtional_value_X167;
_Bool _condtional_value_X168;
_Bool _condtional_value_X169;
_Bool _condtional_value_X170;
struct list_item$1char$ph* prev_it_13;
_Bool _condtional_value_X171;
_Bool _condtional_value_X172;
struct list$1char$ph* __result_obj__31;
    if(({    (_condtional_value_X151=(head<0));    _condtional_value_X151;    })) {
        head+=self->len;
    }
    if(({    (_condtional_value_X152=(tail<0));    _condtional_value_X152;    })) {
        tail+=self->len+1;
    }
    if(({    (_condtional_value_X153=(head>tail));    _condtional_value_X153;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_condtional_value_X154=(head<0));    _condtional_value_X154;    })) {
        head=0;
    }
    if(({    (_condtional_value_X155=(tail>self->len));    _condtional_value_X155;    })) {
        tail=self->len;
    }
    if(({    (_condtional_value_X156=(head==tail));    _condtional_value_X156;    })) {
        __result_obj__29 = self;
        return __result_obj__29;
    }
    if(({    (_condtional_value_X157=(head==0&&tail==self->len));    _condtional_value_X157;    })) {
        list$1char$ph_reset(self);
    }
    else if(({    (_condtional_value_X159=(head==0));    _condtional_value_X159;    })) {
        it=self->head;
        i=0;
        while(({        (_condtional_value_X160=(it!=((void*)0)));        _condtional_value_X160;        })) {
            if(({            (_condtional_value_X161=(i<tail));            _condtional_value_X161;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(({            (_condtional_value_X162=(i==tail));            _condtional_value_X162;            })) {
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
    else if(({    (_condtional_value_X163=(tail==self->len));    _condtional_value_X163;    })) {
        it_8=self->head;
        i_9=0;
        while(({        (_condtional_value_X164=(it_8!=((void*)0)));        _condtional_value_X164;        })) {
            if(({            (_condtional_value_X165=(i_9==head));            _condtional_value_X165;            })) {
                self->tail=it_8->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_condtional_value_X166=(i_9>=head));            _condtional_value_X166;            })) {
                prev_it_10=it_8;
                it_8=it_8->next;
                i_9++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_10, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_8=it_8->next;
                i_9++;
            }
        }
    }
    else {
        it_11=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_12=0;
        while(({        (_condtional_value_X167=(it_11!=((void*)0)));        _condtional_value_X167;        })) {
            if(({            (_condtional_value_X168=(i_12==head));            _condtional_value_X168;            })) {
                head_prev_it=it_11->prev;
            }
            if(({            (_condtional_value_X169=(i_12==tail));            _condtional_value_X169;            })) {
                tail_it=it_11;
            }
            if(({            (_condtional_value_X170=(i_12>=head&&i_12<tail));            _condtional_value_X170;            })) {
                prev_it_13=it_11;
                it_11=it_11->next;
                i_12++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_13, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_11=it_11->next;
                i_12++;
            }
        }
        if(({        (_condtional_value_X171=(head_prev_it!=((void*)0)));        _condtional_value_X171;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_condtional_value_X172=(tail_it!=((void*)0)));        _condtional_value_X172;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__31 = self;
    return __result_obj__31;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X158;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__30;
    it=self->head;
    while(({    (_condtional_value_X158=(it!=((void*)0)));    _condtional_value_X158;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__30 = self;
    return __result_obj__30;
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
_Bool _condtional_value_X178;
struct tuple3$3sType$phchar$phsNode$ph* result;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__34;
_Bool _condtional_value_X179;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__35;
struct tuple3$3sType$phchar$phsNode$ph* result_14;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__36;
result = (void*)0;
result_14 = (void*)0;
    if(({    (_condtional_value_X178=(self==((void*)0)));    _condtional_value_X178;    })) {
        memset(&result,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__34 = result;
        return __result_obj__34;
    }
    self->it=self->head;
    if(({    (_condtional_value_X179=(self->it));    _condtional_value_X179;    })) {
        __result_obj__35 = self->it->item;
        return __result_obj__35;
    }
    memset(&result_14,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__36 = result_14;
    return __result_obj__36;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
_Bool _condtional_value_X182;
struct tuple3$3sType$phchar$phsNode$ph* result;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__37;
_Bool _condtional_value_X183;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__38;
struct tuple3$3sType$phchar$phsNode$ph* result_15;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__39;
result = (void*)0;
result_15 = (void*)0;
    if(({    (_condtional_value_X182=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X182;    })) {
        memset(&result,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__37 = result;
        return __result_obj__37;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X183=(self->it));    _condtional_value_X183;    })) {
        __result_obj__38 = self->it->item;
        return __result_obj__38;
    }
    memset(&result_15,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__39 = result_15;
    return __result_obj__39;
}

static void CVALUE_finalize(struct CVALUE* self){
_Bool _condtional_value_X190;
_Bool _condtional_value_X191;
_Bool _condtional_value_X192;
_Bool _condtional_value_X193;
    if(({    (_condtional_value_X190=(self!=((void*)0)&&self->c_value!=((void*)0)));    _condtional_value_X190;    })) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X191=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X191;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X192=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _condtional_value_X192;    })) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X193=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _condtional_value_X193;    })) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X194;
_Bool _condtional_value_X195;
_Bool _condtional_value_X196;
struct sFun* __result_obj__42;
_Bool _condtional_value_X217;
_Bool _condtional_value_X218;
struct sFun* __result_obj__43;
struct sFun* __result_obj__44;
struct sFun* __result_obj__45;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X194=((_Bool)1));    _condtional_value_X194;    })) {
        if(({        (_condtional_value_X195=(self->item_existance[it]));        _condtional_value_X195;        })) {
            if(({            (_condtional_value_X196=(string_equals(self->keys[it],key)));            _condtional_value_X196;            })) {
                __result_obj__42 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__42, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__42;
            }
            it++;
            if(({            (_condtional_value_X217=(it>=self->size));            _condtional_value_X217;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X218=(it==hash));            _condtional_value_X218;            })) {
                __result_obj__43 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__43, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__43;
            }
        }
        else {
            __result_obj__44 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__44, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__44;
        }
    }
    __result_obj__45 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__45, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__45;
}

static void sFun_finalize(struct sFun* self){
_Bool _condtional_value_X197;
_Bool _condtional_value_X198;
_Bool _condtional_value_X199;
_Bool _condtional_value_X200;
_Bool _condtional_value_X201;
_Bool _condtional_value_X202;
_Bool _condtional_value_X203;
_Bool _condtional_value_X206;
_Bool _condtional_value_X209;
_Bool _condtional_value_X210;
_Bool _condtional_value_X211;
_Bool _condtional_value_X212;
_Bool _condtional_value_X213;
_Bool _condtional_value_X214;
_Bool _condtional_value_X215;
_Bool _condtional_value_X216;
    if(({    (_condtional_value_X197=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X197;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X198=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X198;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X199=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X199;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X200=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X200;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X201=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _condtional_value_X201;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X202=(self!=((void*)0)&&self->mLambdaType!=((void*)0)));    _condtional_value_X202;    })) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X203=(self!=((void*)0)&&self->mAllVar!=((void*)0)));    _condtional_value_X203;    })) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X206=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _condtional_value_X206;    })) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X209=(self!=((void*)0)&&self->mTextBlock!=((void*)0)));    _condtional_value_X209;    })) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X210=(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)));    _condtional_value_X210;    })) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X211=(self!=((void*)0)&&self->mSource!=((void*)0)));    _condtional_value_X211;    })) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X212=(self!=((void*)0)&&self->mSourceHead!=((void*)0)));    _condtional_value_X212;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X213=(self!=((void*)0)&&self->mSourceHead2!=((void*)0)));    _condtional_value_X213;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X214=(self!=((void*)0)&&self->mSourceDefer!=((void*)0)));    _condtional_value_X214;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X215=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X215;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X216=(self!=((void*)0)&&self->mFunAttribute!=((void*)0)));    _condtional_value_X216;    })) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
_Bool _condtional_value_X204;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X204=(it!=((void*)0)));    _condtional_value_X204;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
_Bool _condtional_value_X205;
    if(({    (_condtional_value_X205=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X205;    })) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sBlock_finalize(struct sBlock* self){
_Bool _condtional_value_X207;
_Bool _condtional_value_X208;
    if(({    (_condtional_value_X207=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _condtional_value_X207;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X208=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _condtional_value_X208;    })) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X219;
_Bool _condtional_value_X220;
_Bool _condtional_value_X221;
struct sFun* __result_obj__46;
_Bool _condtional_value_X222;
_Bool _condtional_value_X223;
struct sFun* __result_obj__47;
struct sFun* __result_obj__48;
struct sFun* __result_obj__49;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X219=((_Bool)1));    _condtional_value_X219;    })) {
        if(({        (_condtional_value_X220=(self->item_existance[it]));        _condtional_value_X220;        })) {
            if(({            (_condtional_value_X221=(string_equals(self->keys[it],key)));            _condtional_value_X221;            })) {
                __result_obj__46 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__46, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__46;
            }
            it++;
            if(({            (_condtional_value_X222=(it>=self->size));            _condtional_value_X222;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X223=(it==hash));            _condtional_value_X223;            })) {
                __result_obj__47 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__47, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__47;
            }
        }
        else {
            __result_obj__48 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__48, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__48;
        }
    }
    __result_obj__49 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__49, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__49;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
_Bool _condtional_value_X228;
char* result;
char* __result_obj__51;
_Bool _condtional_value_X229;
char* __result_obj__52;
char* result_20;
char* __result_obj__53;
result = (void*)0;
result_20 = (void*)0;
    if(({    (_condtional_value_X228=(self==((void*)0)));    _condtional_value_X228;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__51 = result;
        return __result_obj__51;
    }
    self->it=self->head;
    if(({    (_condtional_value_X229=(self->it));    _condtional_value_X229;    })) {
        __result_obj__52 = self->it->item;
        return __result_obj__52;
    }
    memset(&result_20,0,sizeof(char*));
    __result_obj__53 = result_20;
    return __result_obj__53;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
_Bool _condtional_value_X232;
char* result;
char* __result_obj__54;
_Bool _condtional_value_X233;
char* __result_obj__55;
char* result_22;
char* __result_obj__56;
result = (void*)0;
result_22 = (void*)0;
    if(({    (_condtional_value_X232=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X232;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__54 = result;
        return __result_obj__54;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X233=(self->it));    _condtional_value_X233;    })) {
        __result_obj__55 = self->it->item;
        return __result_obj__55;
    }
    memset(&result_22,0,sizeof(char*));
    __result_obj__56 = result_22;
    return __result_obj__56;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
_Bool _condtional_value_X235;
    if(({    (_condtional_value_X235=(self==((void*)0)));    _condtional_value_X235;    })) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _condtional_value_X239;
struct list_item$1sType$ph* it;
int i;
_Bool _condtional_value_X240;
_Bool _condtional_value_X241;
struct sType* __result_obj__57;
struct sType* default_value;
struct sType* __result_obj__58;
default_value = (void*)0;
    if(({    (_condtional_value_X239=(position<0));    _condtional_value_X239;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X240=(it!=((void*)0)));    _condtional_value_X240;    })) {
        if(({        (_condtional_value_X241=(position==i));        _condtional_value_X241;        })) {
            __result_obj__57 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__57, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__57;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__58 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__58, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__58;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _condtional_value_X242;
struct list_item$1sType$ph* it;
int i;
_Bool _condtional_value_X243;
_Bool _condtional_value_X244;
struct sType* __result_obj__59;
struct sType* default_value;
struct sType* __result_obj__60;
default_value = (void*)0;
    if(({    (_condtional_value_X242=(position<0));    _condtional_value_X242;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X243=(it!=((void*)0)));    _condtional_value_X243;    })) {
        if(({        (_condtional_value_X244=(position==i));        _condtional_value_X244;        })) {
            __result_obj__59 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__59, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__59;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__60 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__60, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__60;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
_Bool _condtional_value_X253;
void* __right_value106 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj45;
_Bool _condtional_value_X254;
void* __right_value107 = (void*)0;
struct list_item$1CVALUE$ph* litem_31;
struct CVALUE* __dec_obj46;
void* __right_value108 = (void*)0;
struct list_item$1CVALUE$ph* litem_32;
struct CVALUE* __dec_obj47;
struct list$1CVALUE$ph* __result_obj__61;
    if(({    (_condtional_value_X253=(self->len==0));    _condtional_value_X253;    })) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value106=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj45=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X254=(self->len==1));    _condtional_value_X254;    })) {
        litem_31=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value107=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1CVALUE$ph*"))));
        litem_31->prev=self->head;
        litem_31->next=((void*)0);
        __dec_obj46=litem_31->item,
        litem_31->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_31;
        self->head->next=litem_31;
    }
    else {
        litem_32=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value108=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1CVALUE$ph*"))));
        litem_32->prev=self->tail;
        litem_32->next=((void*)0);
        __dec_obj47=litem_32->item,
        litem_32->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_32;
        self->tail=litem_32;
    }
    self->len++;
    __result_obj__61 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__61;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
_Bool _condtional_value_X263;
    if(({    (_condtional_value_X263=(self==((void*)0)));    _condtional_value_X263;    })) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
_Bool _condtional_value_X266;
struct sNode* result;
struct sNode* __result_obj__63;
_Bool _condtional_value_X267;
struct sNode* __result_obj__64;
struct sNode* result_37;
struct sNode* __result_obj__65;
result = (void*)0;
result_37 = (void*)0;
    if(({    (_condtional_value_X266=(self==((void*)0)));    _condtional_value_X266;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__63 = result;
        return __result_obj__63;
    }
    self->it=self->head;
    if(({    (_condtional_value_X267=(self->it));    _condtional_value_X267;    })) {
        __result_obj__64 = self->it->item;
        return __result_obj__64;
    }
    memset(&result_37,0,sizeof(struct sNode*));
    __result_obj__65 = result_37;
    return __result_obj__65;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
_Bool _condtional_value_X270;
struct sNode* result;
struct sNode* __result_obj__66;
_Bool _condtional_value_X271;
struct sNode* __result_obj__67;
struct sNode* result_39;
struct sNode* __result_obj__68;
result = (void*)0;
result_39 = (void*)0;
    if(({    (_condtional_value_X270=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X270;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__66 = result;
        return __result_obj__66;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X271=(self->it));    _condtional_value_X271;    })) {
        __result_obj__67 = self->it->item;
        return __result_obj__67;
    }
    memset(&result_39,0,sizeof(struct sNode*));
    __result_obj__68 = result_39;
    return __result_obj__68;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
_Bool _condtional_value_X277;
void* __right_value128 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj50;
_Bool _condtional_value_X278;
void* __right_value129 = (void*)0;
struct list_item$1CVALUE$ph* litem_43;
struct CVALUE* __dec_obj51;
void* __right_value130 = (void*)0;
struct list_item$1CVALUE$ph* litem_44;
struct CVALUE* __dec_obj52;
struct list$1CVALUE$ph* __result_obj__70;
    if(({    (_condtional_value_X277=(self->len==0));    _condtional_value_X277;    })) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value128=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj50=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X278=(self->len==1));    _condtional_value_X278;    })) {
        litem_43=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value129=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1CVALUE$ph*"))));
        litem_43->prev=self->head;
        litem_43->next=((void*)0);
        __dec_obj51=litem_43->item,
        litem_43->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_43;
        self->head->next=litem_43;
    }
    else {
        litem_44=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value130=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1CVALUE$ph*"))));
        litem_44->prev=self->tail;
        litem_44->next=((void*)0);
        __dec_obj52=litem_44->item,
        litem_44->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_44;
        self->tail=litem_44;
    }
    self->len++;
    __result_obj__70 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__70;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __right_value270 = (void*)0;
struct sNewChannel* __result_obj__80;
    ((struct sNodeBase*)(__right_value270=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value270, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__80 = (struct sNewChannel*)come_increment_ref_count(self);
    come_call_finalizer(sNewChannel_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sNewChannel_finalize, __result_obj__80, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__80;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __right_value271 = (void*)0;
char* __result_obj__81;
    __result_obj__81 = (char*)come_increment_ref_count(((char*)(__right_value271=__builtin_string("sNewChannel"))));
    (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__81;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value272 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X324;
_Bool __result_obj__82;
_Bool __result_obj__83;
    node=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value=node_compile(node,info);
    if(({    (_condtional_value_X324=(!Value));    _condtional_value_X324;    })) {
        __result_obj__82 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__82;
    }
    else {
    }
    __result_obj__83 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__83;
}

static void sNewChannel_finalize(struct sNewChannel* self){
_Bool _condtional_value_X323;
    if(({    (_condtional_value_X323=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X323;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __right_value273 = (void*)0;
struct sNode* __dec_obj86;
struct sNode* __dec_obj87;
struct sWriteChannelNode* __result_obj__84;
    ((struct sNodeBase*)(__right_value273=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value273, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj86=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj87=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__84 = (struct sWriteChannelNode*)come_increment_ref_count(self);
    come_call_finalizer(sWriteChannelNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sWriteChannelNode_finalize, __result_obj__84, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__84;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __right_value274 = (void*)0;
char* __result_obj__85;
    __result_obj__85 = (char*)come_increment_ref_count(((char*)(__right_value274=__builtin_string("sWriteChannelNode"))));
    (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__85 = come_decrement_ref_count(__result_obj__85, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__85;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value;
_Bool _condtional_value_X328;
void* __right_value275 = (void*)0;
struct CVALUE* come_value;
_Bool Value_81;
_Bool _condtional_value_X329;
_Bool __result_obj__86;
void* __right_value276 = (void*)0;
struct CVALUE* right_value;
struct sType* right_type;
void* __right_value277 = (void*)0;
struct sType* left_type;
struct sType* channel_type;
_Bool _condtional_value_X330;
_Bool __result_obj__87;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct buffer* buf;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct CVALUE* come_value2;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
char* __dec_obj88;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sType* __dec_obj89;
_Bool __result_obj__88;
    Value=node_compile(self->exp,info);
    if(({    (_condtional_value_X328=(!Value));    _condtional_value_X328;    })) {
        return (_Bool)0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    Value_81=node_compile(self->right_value,info);
    if(({    (_condtional_value_X329=(!Value_81));    _condtional_value_X329;    })) {
        __result_obj__86 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__86;
    }
    else {
    }
    right_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type=right_value->type;
    left_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    channel_type=(struct sType*)come_increment_ref_count(left_type->mChannelType);
    static int var_num=0;
    var_num++;
    if(({    (_condtional_value_X330=(right_value->type->mHeap));    _condtional_value_X330;    })) {
        err_msg(info,"channel can't get heap type");
        __result_obj__87 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__87;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 782, "struct buffer*"))));
    buffer_append_format(buf,"char __channel_buf%d[sizeof(%s)+1];\n",var_num,((char*)(__right_value280=make_type_name_string(channel_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0))));
    (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1, 0, (void*)0));
    buffer_append_format(buf,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value281=make_type_name_string(channel_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0))),var_num,var_num);
    (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1, 0, (void*)0));
    buffer_append_format(buf,"*__channel_p%d = %s;\n",var_num,right_value->c_value);
    add_come_code(info,((char*)(__right_value282=buffer_to_string(buf))));
    (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1, 0, (void*)0));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 790, "struct CVALUE*"))));
    __dec_obj88=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value->c_value,var_num,((char*)(__right_value285=make_type_name_string(channel_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0)))));
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
    (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1, 0, (void*)0));
    __dec_obj89=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 794, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mPointerNum=1;
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    add_come_last_code(info,"%s",come_value2->c_value);
    __result_obj__88 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__88;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
_Bool _condtional_value_X325;
_Bool _condtional_value_X326;
_Bool _condtional_value_X327;
    if(({    (_condtional_value_X325=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X325;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X326=(self!=((void*)0)&&self->exp!=((void*)0)));    _condtional_value_X326;    })) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X327=(self!=((void*)0)&&self->right_value!=((void*)0)));    _condtional_value_X327;    })) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value290 = (void*)0;
struct sNode* __dec_obj90;
struct sReadChannelNode* __result_obj__89;
    ((struct sNodeBase*)(__right_value290=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value290, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj90=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj90 ? __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__89 = (struct sReadChannelNode*)come_increment_ref_count(self);
    come_call_finalizer(sReadChannelNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sReadChannelNode_finalize, __result_obj__89, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__89;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __right_value291 = (void*)0;
char* __result_obj__90;
    __result_obj__90 = (char*)come_increment_ref_count(((char*)(__right_value291=__builtin_string("sReadChannelNode"))));
    (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__90;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp;
_Bool Value;
_Bool _condtional_value_X333;
_Bool __result_obj__91;
void* __right_value292 = (void*)0;
struct CVALUE* come_value;
void* __right_value293 = (void*)0;
struct sType* var_type;
_Bool _condtional_value_X334;
_Bool __result_obj__92;
struct sType* channel_type;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct CVALUE* come_value2;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
char* __dec_obj91;
void* __right_value300 = (void*)0;
struct sType* __dec_obj92;
_Bool __result_obj__93;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(({    (_condtional_value_X333=(!Value));    _condtional_value_X333;    })) {
        __result_obj__91 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__91;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    var_type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    if(({    (_condtional_value_X334=(!var_type->mChannel));    _condtional_value_X334;    })) {
        err_msg(info,"require right type is channel");
        __result_obj__92 = (_Bool)1;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__92;
    }
    channel_type=(struct sType*)come_increment_ref_count(var_type->mChannelType);
    static int var_num=0;
    var_num++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num,((char*)(__right_value294=make_type_name_string(channel_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0))));
    (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1, 0, (void*)0));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 845, "struct CVALUE*"))));
    __dec_obj91=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value->c_value,var_num,((char*)(__right_value297=make_type_name_string(channel_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0))),((char*)(__right_value298=make_type_name_string(channel_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0))),var_num));
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
    (__right_value297 = come_decrement_ref_count(__right_value297, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value298 = come_decrement_ref_count(__right_value298, (void*)0, (void*)0, 1, 0, (void*)0));
    __dec_obj92=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(channel_type));
    come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    add_come_last_code(info,"%s",come_value2->c_value);
    __result_obj__93 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__93;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
_Bool _condtional_value_X331;
_Bool _condtional_value_X332;
    if(({    (_condtional_value_X331=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X331;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X332=(self!=((void*)0)&&self->exp!=((void*)0)));    _condtional_value_X332;    })) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma){
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value312 = (void*)0;
struct sNode* __result_obj__96;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 862, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value303=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 862, "struct sStoreNode*")),(char*)come_increment_ref_count(name),(struct list$1char$ph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf("")),comma,(_Bool)0))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__96 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value312=_inf_value1)));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sStoreNode_finalize, __right_value303, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value312) ? __right_value312 = come_decrement_ref_count(__right_value312, ((struct sNode*)__right_value312)->finalize, ((struct sNode*)__right_value312)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__96) ? __result_obj__96 = come_decrement_ref_count(__result_obj__96, ((struct sNode*)__result_obj__96)->finalize, ((struct sNode*)__result_obj__96)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__96;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
_Bool _condtional_value_X335;
struct sStoreNode* __result_obj__94;
void* __right_value304 = (void*)0;
struct sStoreNode* result;
_Bool _condtional_value_X336;
_Bool _condtional_value_X337;
void* __right_value305 = (void*)0;
char* __dec_obj93;
_Bool _condtional_value_X338;
_Bool _condtional_value_X339;
void* __right_value306 = (void*)0;
char* __dec_obj94;
_Bool _condtional_value_X340;
_Bool _condtional_value_X341;
void* __right_value307 = (void*)0;
struct sType* __dec_obj95;
_Bool _condtional_value_X342;
void* __right_value308 = (void*)0;
struct sNode* __dec_obj96;
_Bool _condtional_value_X343;
void* __right_value309 = (void*)0;
struct list$1char$ph* __dec_obj97;
_Bool _condtional_value_X344;
void* __right_value310 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj98;
_Bool _condtional_value_X345;
void* __right_value311 = (void*)0;
char* __dec_obj99;
_Bool _condtional_value_X346;
_Bool _condtional_value_X347;
struct sStoreNode* __result_obj__95;
    if(({    (_condtional_value_X335=(self==(void*)0));    _condtional_value_X335;    })) {
        __result_obj__94 = (void*)0;
        return __result_obj__94;
    }
    result=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*"));
    if(({    (_condtional_value_X336=(self!=((void*)0)));    _condtional_value_X336;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X337=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X337;    })) {
        __dec_obj93=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreNode_clone", 5, "char*"));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X338=(self!=((void*)0)));    _condtional_value_X338;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X339=(self!=((void*)0)&&self->name!=((void*)0)));    _condtional_value_X339;    })) {
        __dec_obj94=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sStoreNode_clone", 7, "char*"));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X340=(self!=((void*)0)));    _condtional_value_X340;    })) {
        result->alloc=self->alloc;
    }
    if(({    (_condtional_value_X341=(self!=((void*)0)&&self->type!=((void*)0)));    _condtional_value_X341;    })) {
        __dec_obj95=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X342=(self!=((void*)0)&&self->right_value!=((void*)0)));    _condtional_value_X342;    })) {
        __dec_obj96=result->right_value,
        result->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X343=(self!=((void*)0)&&self->multiple_assign!=((void*)0)));    _condtional_value_X343;    })) {
        __dec_obj97=result->multiple_assign,
        result->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->multiple_assign));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X344=(self!=((void*)0)&&self->multiple_declare!=((void*)0)));    _condtional_value_X344;    })) {
        __dec_obj98=result->multiple_declare,
        result->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(self->multiple_declare));
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X345=(self!=((void*)0)&&self->attribute!=((void*)0)));    _condtional_value_X345;    })) {
        __dec_obj99=result->attribute,
        result->attribute=(char*)come_increment_ref_count((char*)come_memdup(self->attribute, "sStoreNode_clone", 13, "char*"));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X346=(self!=((void*)0)));    _condtional_value_X346;    })) {
        result->comma=self->comma;
    }
    if(({    (_condtional_value_X347=(self!=((void*)0)));    _condtional_value_X347;    })) {
        result->val_=self->val_;
    }
    __result_obj__95 = result;
    come_call_finalizer(sStoreNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__95;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
char* __dec_obj100;
struct sLoadNode* __result_obj__97;
    ((struct sNodeBase*)(__right_value313=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value313, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj100=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0);
    self->on_load_calling=(_Bool)0;
    __result_obj__97 = (struct sLoadNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sLoadNode_finalize, __result_obj__97, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__97;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __right_value315 = (void*)0;
char* __result_obj__98;
    __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value315=__builtin_string("sLoadNode"))));
    (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__98;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
_Bool _condtional_value_X350;
struct sVar* parent_var;
_Bool _condtional_value_X351;
_Bool _condtional_value_X352;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct CVALUE* come_value;
struct sType* type;
_Bool _condtional_value_X353;
void* __right_value320 = (void*)0;
char* __dec_obj101;
void* __right_value321 = (void*)0;
char* __dec_obj102;
void* __right_value322 = (void*)0;
struct sType* __dec_obj103;
_Bool __result_obj__99;
struct sVar* var_;
_Bool _condtional_value_X354;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct CVALUE* come_value_82;
void* __right_value325 = (void*)0;
char* __dec_obj104;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sType* __dec_obj105;
_Bool __result_obj__100;
_Bool _condtional_value_X355;
_Bool _condtional_value_X356;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sFun* fun;
_Bool _condtional_value_X357;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct CVALUE* come_value_83;
void* __right_value334 = (void*)0;
char* __dec_obj106;
struct sType* __dec_obj107;
_Bool __result_obj__101;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_84;
void* __right_value337 = (void*)0;
char* __dec_obj108;
void* __right_value338 = (void*)0;
struct sType* __dec_obj109;
_Bool _condtional_value_X358;
void* __right_value339 = (void*)0;
struct sType* __dec_obj110;
_Bool _condtional_value_X360;
void* __right_value340 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var2 = (void*)0;
char* fun_name=0;
struct sFun* fun_85=0;
struct sGenericsFun* generics_fun=0;
_Bool _condtional_value_X362;
void* __right_value341 = (void*)0;
void* __right_value345 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct tuple2$2char$phsNode$ph* __list_values1__[1];
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sNode* _inf_value3;
struct sLoadNode* _inf_obj_value3;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X378;
_Bool __result_obj__108;
_Bool __result_obj__109;
    current_stack_frame_struct=info->current_stack_frame_struct;
    if(({    (_condtional_value_X350=(current_stack_frame_struct&&((struct sVar*)(__right_value317=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value316=__builtin_string(self->name))),((void*)0))))==((void*)0)));    (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sVar_finalize, __right_value317, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X350;    })) {
        parent_var=get_variable_from_table(info->lv_table->mParent,self->name);
        if(({        (_condtional_value_X351=(parent_var!=((void*)0)));        _condtional_value_X351;        })) {
            if(({            (_condtional_value_X352=(string_operator_not_equals(parent_var->mFunName,info->come_fun->mName)));            _condtional_value_X352;            })) {
                come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 893, "struct CVALUE*"))));
                type=parent_var->mType;
                if(({                (_condtional_value_X353=(parent_var->mType->mOriginIsArray));                _condtional_value_X353;                })) {
                    __dec_obj101=come_value->c_value,
                    come_value->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var->mCValueName));
                    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj102=come_value->c_value,
                    come_value->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var->mCValueName));
                    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
                }
                __dec_obj103=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type));
                come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                add_come_last_code(info,"%s",come_value->c_value);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
                __result_obj__99 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__99;
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    var_=get_variable_from_table(info->lv_table,self->name);
    if(({    (_condtional_value_X354=(var_==((void*)0)&&info->undefined_array_num_var));    _condtional_value_X354;    })) {
        come_value_82=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 919, "struct CVALUE*"))));
        __dec_obj104=come_value_82->c_value,
        come_value_82->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->name));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj105=come_value_82->type,
        come_value_82->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 922, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_82->type->mPointerNum=1;
        come_value_82->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_82));
        __result_obj__100 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__100;
        come_call_finalizer(CVALUE_finalize, come_value_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X355=(var_==((void*)0)));    _condtional_value_X355;    })) {
        var_=get_variable_from_table(info->gv_table,self->name);
        if(({        (_condtional_value_X356=(var_==((void*)0)));        _condtional_value_X356;        })) {
            fun=((struct sFun*)(__right_value331=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value330=__builtin_string(self->name))))));
            (__right_value329 = come_decrement_ref_count(__right_value329, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value331, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_condtional_value_X357=(fun));            _condtional_value_X357;            })) {
                come_value_83=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 938, "struct CVALUE*"))));
                __dec_obj106=come_value_83->c_value,
                come_value_83->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun->mName));
                __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj107=come_value_83->type,
                come_value_83->type=(struct sType*)come_increment_ref_count(fun->mLambdaType);
                come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_value_83->var=((void*)0);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_83));
                __result_obj__101 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__101;
                come_call_finalizer(CVALUE_finalize, come_value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                stackframe_v2();
                err_msg(info,"var not found(%s)(Z) at loading variable",self->name);
                return (_Bool)1;
            }
        }
    }
    come_value_84=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 956, "struct CVALUE*"))));
    __dec_obj108=come_value_84->c_value,
    come_value_84->c_value=(char*)come_increment_ref_count(xsprintf("%s",var_->mCValueName));
    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj109=come_value_84->type,
    come_value_84->type=(struct sType*)come_increment_ref_count(sType_clone(var_->mType));
    come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value_84->var=var_;
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_84));
    if(({    (_condtional_value_X358=(list$1sNode$ph_length(come_value_84->type->mArrayNum)==1));    _condtional_value_X358;    })) {
        __dec_obj110=come_value_84->type->mOriginalLoadVarType,
        come_value_84->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_84->type));
        come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        list$1sNode$ph_reset(come_value_84->type->mArrayNum);
        come_value_84->type->mPointerNum++;
        come_value_84->type->mOriginalTypeNamePointerNum=come_value_84->type->mPointerNum;
    }
    if(({    (_condtional_value_X360=(!self->on_load_calling&&string_operator_not_equals(self->name,"self")));    _condtional_value_X360;    })) {
        self->on_load_calling=(_Bool)1;
        multiple_assign_var2=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value340=get_method("on_load",(struct sType*)come_increment_ref_count(come_value_84->type),info)));
        fun_name=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        fun_85=multiple_assign_var2->v2;
        generics_fun=multiple_assign_var2->v3;
        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value340, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_condtional_value_X362=(fun_85));        _condtional_value_X362;        })) {
            ((struct CVALUE*)(__right_value341=get_value_from_stack(-1,info)));
            come_call_finalizer(CVALUE_finalize, __right_value341, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 979, "struct sNode");
            _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count((((struct sLoadNode*)(__right_value345=sLoadNode_clone(self)))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadNode_finalize;
            _inf_value2->clone=(void*)sLoadNode_clone;
            _inf_value2->compile=(void*)sLoadNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sLoadNode_terminated;
            _inf_value2->kind=(void*)sLoadNode_kind;
            _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
            params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((__list_values1__[0]=((struct tuple2$2char$phsNode$ph*)(__right_value348=tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 979, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(_inf_value2)))),
list$1tuple2$2char$phsNode$ph$ph_initialize_with_values((struct list$1tuple2$2char$phsNode$ph$ph**)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "07var.c", 979, "struct list$1tuple2$2char$phsNode$ph$ph")),1,__list_values1__)));
            come_call_finalizer(sLoadNode_finalize, __right_value345, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __right_value348, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 980, "struct sNode");
            _inf_obj_value3=(struct sLoadNode*)come_increment_ref_count((((struct sLoadNode*)(__right_value355=sLoadNode_clone(self)))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sLoadNode_finalize;
            _inf_value3->clone=(void*)sLoadNode_clone;
            _inf_value3->compile=(void*)sLoadNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sLoadNode_terminated;
            _inf_value3->kind=(void*)sLoadNode_kind;
            _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
            node=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value354=xsprintf("on_load"))),(struct sNode*)come_increment_ref_count(_inf_value3),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),((void*)0),0,((void*)0),info,(_Bool)0));
            (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sLoadNode_finalize, __right_value355, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            Value=node_compile(node,info);
            if(({            (_condtional_value_X378=(!Value));            _condtional_value_X378;            })) {
                __result_obj__108 = (_Bool)0;
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__108;
            }
            else {
            }
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__109 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__109;
}

static void sLoadNode_finalize(struct sLoadNode* self){
_Bool _condtional_value_X348;
_Bool _condtional_value_X349;
    if(({    (_condtional_value_X348=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X348;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X349=(self!=((void*)0)&&self->name!=((void*)0)));    _condtional_value_X349;    })) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X359;
struct list_item$1sNode$ph* prev_it;
struct list$1sNode$ph* __result_obj__102;
    it=self->head;
    while(({    (_condtional_value_X359=(it!=((void*)0)));    _condtional_value_X359;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__102 = self;
    return __result_obj__102;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
_Bool _condtional_value_X361;
    if(({    (_condtional_value_X361=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X361;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
_Bool _condtional_value_X363;
struct sLoadNode* __result_obj__103;
void* __right_value342 = (void*)0;
struct sLoadNode* result;
_Bool _condtional_value_X364;
_Bool _condtional_value_X365;
void* __right_value343 = (void*)0;
char* __dec_obj111;
_Bool _condtional_value_X366;
_Bool _condtional_value_X367;
void* __right_value344 = (void*)0;
char* __dec_obj112;
_Bool _condtional_value_X368;
struct sLoadNode* __result_obj__104;
    if(({    (_condtional_value_X363=(self==(void*)0));    _condtional_value_X363;    })) {
        __result_obj__103 = (void*)0;
        return __result_obj__103;
    }
    result=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*"));
    if(({    (_condtional_value_X364=(self!=((void*)0)));    _condtional_value_X364;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X365=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X365;    })) {
        __dec_obj111=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadNode_clone", 5, "char*"));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X366=(self!=((void*)0)));    _condtional_value_X366;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X367=(self!=((void*)0)&&self->name!=((void*)0)));    _condtional_value_X367;    })) {
        __dec_obj112=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sLoadNode_clone", 7, "char*"));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X368=(self!=((void*)0)));    _condtional_value_X368;    })) {
        result->on_load_calling=self->on_load_calling;
    }
    __result_obj__104 = result;
    come_call_finalizer(sLoadNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__104;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj113;
struct sNode* __dec_obj114;
struct tuple2$2char$phsNode$ph* __result_obj__105;
    __dec_obj113=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj114=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj114 ? __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__105 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__105, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__105;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
_Bool _condtional_value_X369;
_Bool _condtional_value_X370;
    if(({    (_condtional_value_X369=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X369;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X370=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X370;    })) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize_with_values(struct list$1tuple2$2char$phsNode$ph$ph* self, int num_value, struct tuple2$2char$phsNode$ph** values){
int i;
_Bool _condtional_value_X371;
_Bool _condtional_value_X372;
_Bool _condtional_value_X373;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    ({    (_condtional_value_X371=(i=0));    _condtional_value_X371;    });    ({    (_condtional_value_X372=(i<num_value));    _condtional_value_X372;    });    ({    (_condtional_value_X373=(i++));    _condtional_value_X373;    })    ){
        list$1tuple2$2char$phsNode$ph$ph_push_back(self,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(values[i]));
    }
    __result_obj__107 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__107, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__107;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
_Bool _condtional_value_X374;
void* __right_value349 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj115;
_Bool _condtional_value_X375;
void* __right_value350 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_86;
struct tuple2$2char$phsNode$ph* __dec_obj116;
void* __right_value351 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_87;
struct tuple2$2char$phsNode$ph* __dec_obj117;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__106;
    if(({    (_condtional_value_X374=(self->len==0));    _condtional_value_X374;    })) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value349=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj115=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X375=(self->len==1));    _condtional_value_X375;    })) {
        litem_86=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value350=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_86->prev=self->head;
        litem_86->next=((void*)0);
        __dec_obj116=litem_86->item,
        litem_86->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_86;
        self->head->next=litem_86;
    }
    else {
        litem_87=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value351=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_87->prev=self->tail;
        litem_87->next=((void*)0);
        __dec_obj117=litem_87->item,
        litem_87->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_87;
        self->tail=litem_87;
    }
    self->len++;
    __result_obj__106 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__106;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _condtional_value_X376;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X376=(it!=((void*)0)));    _condtional_value_X376;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X377;
    if(({    (_condtional_value_X377=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X377;    })) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sNode* _inf_value4;
struct sLoadNode* _inf_obj_value4;
void* __right_value361 = (void*)0;
struct sNode* node;
struct sNode* __result_obj__110;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 994, "struct sNode");
    _inf_obj_value4=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value360=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 994, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sLoadNode_finalize;
    _inf_value4->clone=(void*)sLoadNode_clone;
    _inf_value4->compile=(void*)sLoadNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sLoadNode_terminated;
    _inf_value4->kind=(void*)sLoadNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    node=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer(sLoadNode_finalize, __right_value360, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__110 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__110) ? __result_obj__110 = come_decrement_ref_count(__result_obj__110, ((struct sNode*)__result_obj__110)->finalize, ((struct sNode*)__result_obj__110)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__110;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
char* __dec_obj118;
struct sFunLoadNode* __result_obj__111;
    ((struct sNodeBase*)(__right_value362=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value362, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj118=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__111 = (struct sFunLoadNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunLoadNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sFunLoadNode_finalize, __result_obj__111, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__111;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __right_value364 = (void*)0;
char* __result_obj__112;
    __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value364=__builtin_string("sFunLoadNode"))));
    (__right_value364 = come_decrement_ref_count(__right_value364, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__112;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sFun* fun;
_Bool _condtional_value_X381;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct CVALUE* come_value;
void* __right_value370 = (void*)0;
char* __dec_obj119;
struct sType* __dec_obj120;
    fun=((struct sFun*)(__right_value367=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value366=__builtin_string(self->name))))));
    (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value367, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(({    (_condtional_value_X381=(fun==((void*)0)));    _condtional_value_X381;    })) {
        err_msg(info,"fun not found(%s) at loading variable",self->name);
        return (_Bool)1;
    }
    else {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 1022, "struct CVALUE*"))));
        __dec_obj119=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun->mName));
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj120=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(fun->mLambdaType);
        come_call_finalizer(sType_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
_Bool _condtional_value_X379;
_Bool _condtional_value_X380;
    if(({    (_condtional_value_X379=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X379;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X380=(self!=((void*)0)&&self->name!=((void*)0)));    _condtional_value_X380;    })) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value371 = (void*)0;
void* __right_value382 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj126;
struct sStructInitializer* __result_obj__119;
    ((struct sNodeBase*)(__right_value371=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value371, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj126=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(initializer));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__119 = (struct sStructInitializer*)come_increment_ref_count(self);
    come_call_finalizer(sStructInitializer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sStructInitializer_finalize, __result_obj__119, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__119;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __right_value383 = (void*)0;
char* __result_obj__120;
    __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value383=__builtin_string("sStructInitializer"))));
    (__right_value383 = come_decrement_ref_count(__right_value383, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__120;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* initializer;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct buffer* buf;
int i;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved;
struct tuple2$2char$phsNode$ph* it;
_Bool _condtional_value_X397;
_Bool _condtional_value_X398;
_Bool _condtional_value_X401;
struct tuple2$2char$phsNode$ph* multiple_assign_var3 = (void*)0;
char* name=0;
struct sNode* value=0;
_Bool Value;
_Bool _condtional_value_X402;
_Bool __result_obj__127;
void* __right_value386 = (void*)0;
struct CVALUE* come_value2;
_Bool _condtional_value_X403;
_Bool _condtional_value_X405;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct CVALUE* come_value;
void* __right_value389 = (void*)0;
char* __dec_obj127;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sType* __dec_obj128;
_Bool __result_obj__128;
    initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 1054, "struct buffer*"))));
    buffer_append_str(buf,"{");
    i=0;
    for(    ({    (_condtional_value_X397=(o2_saved=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer),it=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved)));    _condtional_value_X397;    });    ({    (_condtional_value_X398=(!list$1tuple2$2char$phsNode$ph$ph_end(o2_saved)));    _condtional_value_X398;    });    ({    (_condtional_value_X401=(it=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved)));    _condtional_value_X401;    })    ){
        multiple_assign_var3=it;
        name=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        value=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
        Value=node_compile(value,info);
        if(({        (_condtional_value_X402=(!Value));        _condtional_value_X402;        })) {
            __result_obj__127 = (_Bool)0;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__127;
        }
        else {
        }
        come_value2=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(({        (_condtional_value_X403=(name));        _condtional_value_X403;        })) {
            buffer_append_format(buf,".%s = %s",name,come_value2->c_value);
        }
        else {
            buffer_append_format(buf,"%s",come_value2->c_value);
        }
        i++;
        if(({        (_condtional_value_X405=(i!=list$1tuple2$2char$phsNode$ph$ph_length(initializer)));        _condtional_value_X405;        })) {
            buffer_append_str(buf,",");
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(buf,"}");
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 1080, "struct CVALUE*"))));
    __dec_obj127=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj128=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 1083, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__128 = (_Bool)1;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__128;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X382;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__113;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result;
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _condtional_value_X383;
_Bool _condtional_value_X384;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__118;
    if(({    (_condtional_value_X382=(self==((void*)0)));    _condtional_value_X382;    })) {
        __result_obj__113 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__113, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__113;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X383=(it!=((void*)0)));    _condtional_value_X383;    })) {
        if(({        (_condtional_value_X384=(1));        _condtional_value_X384;        })) {
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__118 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__118, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__118;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__114;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__114 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__114, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__114;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
_Bool _condtional_value_X385;
void* __right_value374 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj121;
_Bool _condtional_value_X386;
void* __right_value375 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_88;
struct tuple2$2char$phsNode$ph* __dec_obj122;
void* __right_value376 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_89;
struct tuple2$2char$phsNode$ph* __dec_obj123;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__115;
    if(({    (_condtional_value_X385=(self->len==0));    _condtional_value_X385;    })) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value374=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj121=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X386=(self->len==1));    _condtional_value_X386;    })) {
        litem_88=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value375=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_88->prev=self->head;
        litem_88->next=((void*)0);
        __dec_obj122=litem_88->item,
        litem_88->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_88;
        self->head->next=litem_88;
    }
    else {
        litem_89=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value376=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_89->prev=self->tail;
        litem_89->next=((void*)0);
        __dec_obj123=litem_89->item,
        litem_89->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_89;
        self->tail=litem_89;
    }
    self->len++;
    __result_obj__115 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__115;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
_Bool _condtional_value_X387;
struct tuple2$2char$phsNode$ph* __result_obj__116;
void* __right_value377 = (void*)0;
struct tuple2$2char$phsNode$ph* result;
_Bool _condtional_value_X388;
void* __right_value378 = (void*)0;
char* __dec_obj124;
_Bool _condtional_value_X389;
void* __right_value379 = (void*)0;
struct sNode* __dec_obj125;
struct tuple2$2char$phsNode$ph* __result_obj__117;
    if(({    (_condtional_value_X387=(self==(void*)0));    _condtional_value_X387;    })) {
        __result_obj__116 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__116, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__116;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(({    (_condtional_value_X388=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X388;    })) {
        __dec_obj124=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X389=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X389;    })) {
        __dec_obj125=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj125 ? __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__117 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__117, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__117;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
_Bool _condtional_value_X390;
_Bool _condtional_value_X391;
    if(({    (_condtional_value_X390=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X390;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X391=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X391;    })) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _condtional_value_X392;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X392=(it!=((void*)0)));    _condtional_value_X392;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sStructInitializer_finalize(struct sStructInitializer* self){
_Bool _condtional_value_X393;
_Bool _condtional_value_X394;
    if(({    (_condtional_value_X393=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X393;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X394=(self!=((void*)0)&&self->initializer!=((void*)0)));    _condtional_value_X394;    })) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X395;
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__121;
_Bool _condtional_value_X396;
struct tuple2$2char$phsNode$ph* __result_obj__122;
struct tuple2$2char$phsNode$ph* result_90;
struct tuple2$2char$phsNode$ph* __result_obj__123;
result = (void*)0;
result_90 = (void*)0;
    if(({    (_condtional_value_X395=(self==((void*)0)));    _condtional_value_X395;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__121 = result;
        return __result_obj__121;
    }
    self->it=self->head;
    if(({    (_condtional_value_X396=(self->it));    _condtional_value_X396;    })) {
        __result_obj__122 = self->it->item;
        return __result_obj__122;
    }
    memset(&result_90,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__123 = result_90;
    return __result_obj__123;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X399;
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__124;
_Bool _condtional_value_X400;
struct tuple2$2char$phsNode$ph* __result_obj__125;
struct tuple2$2char$phsNode$ph* result_91;
struct tuple2$2char$phsNode$ph* __result_obj__126;
result = (void*)0;
result_91 = (void*)0;
    if(({    (_condtional_value_X399=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X399;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__124 = result;
        return __result_obj__124;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X400=(self->it));    _condtional_value_X400;    })) {
        __result_obj__125 = self->it->item;
        return __result_obj__125;
    }
    memset(&result_91,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__126 = result_91;
    return __result_obj__126;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _condtional_value_X404;
    if(({    (_condtional_value_X404=(self==((void*)0)));    _condtional_value_X404;    })) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer;
_Bool _condtional_value_X406;
void* __right_value395 = (void*)0;
char* name;
_Bool _condtional_value_X407;
_Bool no_comma;
void* __right_value396 = (void*)0;
struct sNode* exp;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
_Bool no_comma_92;
void* __right_value399 = (void*)0;
struct sNode* exp_93;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
_Bool _condtional_value_X409;
_Bool _condtional_value_X410;
_Bool _condtional_value_X411;
void* __right_value402 = (void*)0;
char* name_94;
_Bool _condtional_value_X412;
_Bool no_comma_95;
void* __right_value403 = (void*)0;
struct sNode* exp_96;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
_Bool no_comma_97;
void* __right_value406 = (void*)0;
struct sNode* exp_98;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct sNode* _inf_value5;
struct sStructInitializer* _inf_obj_value5;
void* __right_value414 = (void*)0;
struct sNode* __result_obj__132;
    expected_next_character(123,info);
    initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "07var.c", 1096, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    if(({    (_condtional_value_X406=(*info->p==46));    _condtional_value_X406;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        name=(char*)come_increment_ref_count(parse_word(info));
        if(({        (_condtional_value_X407=(*info->p==61));        _condtional_value_X407;        })) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1114, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name),(struct sNode*)come_increment_ref_count(exp))));
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else {
        no_comma_92=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_93=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_92;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1122, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_93))));
        ((exp_93) ? exp_93 = come_decrement_ref_count(exp_93, ((struct sNode*)exp_93)->finalize, ((struct sNode*)exp_93)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    while(({    (_condtional_value_X409=(*info->p==44));    _condtional_value_X409;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(({        (_condtional_value_X410=(*info->p==125));        _condtional_value_X410;        })) {
            break;
        }
        if(({        (_condtional_value_X411=(*info->p==46));        _condtional_value_X411;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            name_94=(char*)come_increment_ref_count(parse_word(info));
            if(({            (_condtional_value_X412=(*info->p==61));            _condtional_value_X412;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            no_comma_95=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_96=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_95;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1151, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_94),(struct sNode*)come_increment_ref_count(exp_96))));
            (name_94 = come_decrement_ref_count(name_94, (void*)0, (void*)0, 0, 0, (void*)0));
            ((exp_96) ? exp_96 = come_decrement_ref_count(exp_96, ((struct sNode*)exp_96)->finalize, ((struct sNode*)exp_96)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            no_comma_97=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_98=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_97;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1159, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_98))));
            ((exp_98) ? exp_98 = come_decrement_ref_count(exp_98, ((struct sNode*)exp_98)->finalize, ((struct sNode*)exp_98)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1165, "struct sNode");
    _inf_obj_value5=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value410=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc_v2(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1165, "struct sStructInitializer*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sStructInitializer_finalize;
    _inf_value5->clone=(void*)sStructInitializer_clone;
    _inf_value5->compile=(void*)sStructInitializer_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sStructInitializer_kind;
    _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__132 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value414=_inf_value5)));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sStructInitializer_finalize, __right_value410, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value414) ? __right_value414 = come_decrement_ref_count(__right_value414, ((struct sNode*)__right_value414)->finalize, ((struct sNode*)__right_value414)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__132) ? __result_obj__132 = come_decrement_ref_count(__result_obj__132, ((struct sNode*)__result_obj__132)->finalize, ((struct sNode*)__result_obj__132)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__132;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj129;
struct tuple2$2void$psNode$ph* __result_obj__129;
    self->v1=v1;
    __dec_obj129=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__129 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, __result_obj__129, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__129;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
_Bool _condtional_value_X408;
    if(({    (_condtional_value_X408=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X408;    })) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
_Bool _condtional_value_X413;
struct sStructInitializer* __result_obj__130;
void* __right_value411 = (void*)0;
struct sStructInitializer* result;
_Bool _condtional_value_X414;
_Bool _condtional_value_X415;
void* __right_value412 = (void*)0;
char* __dec_obj130;
_Bool _condtional_value_X416;
_Bool _condtional_value_X417;
void* __right_value413 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj131;
struct sStructInitializer* __result_obj__131;
    if(({    (_condtional_value_X413=(self==(void*)0));    _condtional_value_X413;    })) {
        __result_obj__130 = (void*)0;
        return __result_obj__130;
    }
    result=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc_v2(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer*"));
    if(({    (_condtional_value_X414=(self!=((void*)0)));    _condtional_value_X414;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X415=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X415;    })) {
        __dec_obj130=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructInitializer_clone", 5, "char*"));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X416=(self!=((void*)0)));    _condtional_value_X416;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X417=(self!=((void*)0)&&self->initializer!=((void*)0)));    _condtional_value_X417;    })) {
        __dec_obj131=result->initializer,
        result->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__131 = result;
    come_call_finalizer(sStructInitializer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__131;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma){
void* __right_value415 = (void*)0;
struct sVar* self;
void* __right_value416 = (void*)0;
char* __dec_obj132;
void* __right_value417 = (void*)0;
struct sType* __dec_obj133;
_Bool same_name;
struct list$1sVar$ph* o2_saved;
struct sVar* it;
_Bool _condtional_value_X420;
_Bool _condtional_value_X421;
_Bool _condtional_value_X424;
_Bool _condtional_value_X425;
_Bool _condtional_value_X426;
void* __right_value418 = (void*)0;
char* __dec_obj134;
_Bool _condtional_value_X427;
void* __right_value419 = (void*)0;
char* __dec_obj135;
_Bool _condtional_value_X428;
void* __right_value420 = (void*)0;
char* __dec_obj136;
void* __right_value421 = (void*)0;
char* __dec_obj137;
_Bool _condtional_value_X429;
void* __right_value422 = (void*)0;
char* __dec_obj138;
char* __dec_obj139;
void* __right_value431 = (void*)0;
_Bool _condtional_value_X458;
    self=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1170, "struct sVar*"));
    __dec_obj132=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj133=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    same_name=(_Bool)0;
    for(    ({    (_condtional_value_X420=(o2_saved=(struct list$1sVar$ph*)come_increment_ref_count(info->come_fun->mAllVar),it=list$1sVar$ph_begin(o2_saved)));    _condtional_value_X420;    });    ({    (_condtional_value_X421=(!list$1sVar$ph_end(o2_saved)));    _condtional_value_X421;    });    ({    (_condtional_value_X424=(it=list$1sVar$ph_next(o2_saved)));    _condtional_value_X424;    })    ){
        if(({        (_condtional_value_X425=(string_operator_equals(it->mCValueName,name)));        _condtional_value_X425;        })) {
            same_name=(_Bool)1;
        }
    }
    come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(({    (_condtional_value_X426=(function_param));    _condtional_value_X426;    })) {
        __dec_obj134=self->mCValueName,
        self->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(({    (_condtional_value_X427=(type->mRegister));    _condtional_value_X427;    })) {
        __dec_obj135=self->mCValueName,
        self->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(({    (_condtional_value_X428=(!same_name));    _condtional_value_X428;    })) {
        __dec_obj136=self->mCValueName,
        self->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        static int n=0;
        __dec_obj137=self->mCValueName,
        self->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n++));
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0);
    }
    self->mAllocaValue=(_Bool)0;
    self->mNoFree=(_Bool)0;
    if(({    (_condtional_value_X429=(info->come_fun));    _condtional_value_X429;    })) {
        __dec_obj138=self->mFunName,
        self->mFunName=(char*)come_increment_ref_count((char*)come_memdup(info->come_fun->mName, "07var.c", 1201, "char*"));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj139=self->mFunName,
        self->mFunName=((void*)0);
        __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0);
    }
    self->mComma=comma;
    map$2char$phsVar$ph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self));
    if(({    (_condtional_value_X458=(info->come_fun));    _condtional_value_X458;    })) {
        list$1sVar$ph_add(info->come_fun->mAllVar,(struct sVar*)come_increment_ref_count(self));
    }
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
_Bool _condtional_value_X418;
struct sVar* result;
struct sVar* __result_obj__133;
_Bool _condtional_value_X419;
struct sVar* __result_obj__134;
struct sVar* result_99;
struct sVar* __result_obj__135;
result = (void*)0;
result_99 = (void*)0;
    if(({    (_condtional_value_X418=(self==((void*)0)));    _condtional_value_X418;    })) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__133 = result;
        return __result_obj__133;
    }
    self->it=self->head;
    if(({    (_condtional_value_X419=(self->it));    _condtional_value_X419;    })) {
        __result_obj__134 = self->it->item;
        return __result_obj__134;
    }
    memset(&result_99,0,sizeof(struct sVar*));
    __result_obj__135 = result_99;
    return __result_obj__135;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
_Bool _condtional_value_X422;
struct sVar* result;
struct sVar* __result_obj__136;
_Bool _condtional_value_X423;
struct sVar* __result_obj__137;
struct sVar* result_100;
struct sVar* __result_obj__138;
result = (void*)0;
result_100 = (void*)0;
    if(({    (_condtional_value_X422=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X422;    })) {
        memset(&result,0,sizeof(struct sVar*));
        __result_obj__136 = result;
        return __result_obj__136;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X423=(self->it));    _condtional_value_X423;    })) {
        __result_obj__137 = self->it->item;
        return __result_obj__137;
    }
    memset(&result_100,0,sizeof(struct sVar*));
    __result_obj__138 = result_100;
    return __result_obj__138;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
_Bool _condtional_value_X430;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X442;
_Bool _condtional_value_X443;
_Bool _condtional_value_X444;
_Bool _condtional_value_X445;
_Bool _condtional_value_X446;
_Bool _condtional_value_X447;
_Bool _condtional_value_X448;
_Bool _condtional_value_X449;
_Bool _condtional_value_X450;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X451;
_Bool _condtional_value_X452;
_Bool _condtional_value_X453;
_Bool _condtional_value_X454;
_Bool _condtional_value_X455;
struct map$2char$phsVar$ph* __result_obj__146;
    if(({    (_condtional_value_X430=(self->len*10>=self->size));    _condtional_value_X430;    })) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X442=((_Bool)1));    _condtional_value_X442;    })) {
        if(({        (_condtional_value_X443=(self->item_existance[it]));        _condtional_value_X443;        })) {
            if(({            (_condtional_value_X444=(string_equals(self->keys[it],key)));            _condtional_value_X444;            })) {
                if(({                (_condtional_value_X445=(1));                _condtional_value_X445;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X446=(1));                _condtional_value_X446;                })) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X447=(it>=self->size));            _condtional_value_X447;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X448=(it==hash));            _condtional_value_X448;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X449=(1));            _condtional_value_X449;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X450=(1));            _condtional_value_X450;            })) {
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
    for(    ({    (_condtional_value_X451=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X451;    });    ({    (_condtional_value_X452=(!list$1char$ph_end(self->key_list)));    _condtional_value_X452;    });    ({    (_condtional_value_X453=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X453;    })    ){
        if(({        (_condtional_value_X454=(string_equals(it2,key)));        _condtional_value_X454;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X455=(!same_key_exist));    _condtional_value_X455;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__146 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__146;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size;
void* __right_value423 = (void*)0;
char** keys;
void* __right_value424 = (void*)0;
struct sVar** items;
void* __right_value425 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X433;
_Bool _condtional_value_X434;
_Bool _condtional_value_X437;
struct sVar* default_value;
void* __right_value426 = (void*)0;
struct sVar* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X438;
_Bool _condtional_value_X439;
_Bool _condtional_value_X440;
_Bool _condtional_value_X441;
struct sVar* default_value_103;
void* __right_value427 = (void*)0;
default_value = (void*)0;
default_value_103 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value423=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2221, "char**"))));
    items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value424=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size)), "/usr/local/include/comelang.h", 2222, "struct sVar**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value425=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2223, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X433=(it=map$2char$phsVar$ph_begin(self)));    _condtional_value_X433;    });    ({    (_condtional_value_X434=(!map$2char$phsVar$ph_end(self)));    _condtional_value_X434;    });    ({    (_condtional_value_X437=(it=map$2char$phsVar$ph_next(self)));    _condtional_value_X437;    })    ){
        memset(&default_value,0,sizeof(struct sVar*));
        it2=((struct sVar*)(__right_value426=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value))));
        come_call_finalizer(sVar_finalize, __right_value426, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X438=((_Bool)1));        _condtional_value_X438;        })) {
            if(({            (_condtional_value_X439=(item_existance[n]));            _condtional_value_X439;            })) {
                n++;
                if(({                (_condtional_value_X440=(n>=size));                _condtional_value_X440;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X441=(n==hash));                _condtional_value_X441;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sVar*)(__right_value427=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value_103))));
                come_call_finalizer(sVar_finalize, __right_value427, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sVar_finalize, default_value_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X431;
char* result;
char* __result_obj__139;
_Bool _condtional_value_X432;
char* __result_obj__140;
char* result_101;
char* __result_obj__141;
result = (void*)0;
result_101 = (void*)0;
    if(({    (_condtional_value_X431=(self==((void*)0)));    _condtional_value_X431;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__139 = result;
        return __result_obj__139;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X432=(self->key_list->it));    _condtional_value_X432;    })) {
        __result_obj__140 = self->key_list->it->item;
        return __result_obj__140;
    }
    memset(&result_101,0,sizeof(char*));
    __result_obj__141 = result_101;
    return __result_obj__141;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
_Bool _condtional_value_X435;
char* result;
char* __result_obj__142;
_Bool _condtional_value_X436;
char* __result_obj__143;
char* result_102;
char* __result_obj__144;
result = (void*)0;
result_102 = (void*)0;
    if(({    (_condtional_value_X435=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X435;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__142 = result;
        return __result_obj__142;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X436=(self->key_list->it));    _condtional_value_X436;    })) {
        __result_obj__143 = self->key_list->it->item;
        return __result_obj__143;
    }
    memset(&result_102,0,sizeof(char*));
    __result_obj__144 = result_102;
    return __result_obj__144;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X456;
void* __right_value428 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj140;
_Bool _condtional_value_X457;
void* __right_value429 = (void*)0;
struct list_item$1char$ph* litem_104;
char* __dec_obj141;
void* __right_value430 = (void*)0;
struct list_item$1char$ph* litem_105;
char* __dec_obj142;
struct list$1char$ph* __result_obj__145;
    if(({    (_condtional_value_X456=(self->len==0));    _condtional_value_X456;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value428=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj140=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X457=(self->len==1));    _condtional_value_X457;    })) {
        litem_104=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value429=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1char$ph*"))));
        litem_104->prev=self->head;
        litem_104->next=((void*)0);
        __dec_obj141=litem_104->item,
        litem_104->item=(char*)come_increment_ref_count(item);
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_104;
        self->head->next=litem_104;
    }
    else {
        litem_105=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value430=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1char$ph*"))));
        litem_105->prev=self->tail;
        litem_105->next=((void*)0);
        __dec_obj142=litem_105->item,
        litem_105->item=(char*)come_increment_ref_count(item);
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_105;
        self->tail=litem_105;
    }
    self->len++;
    __result_obj__145 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__145;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item){
_Bool _condtional_value_X459;
void* __right_value432 = (void*)0;
struct list_item$1sVar$ph* litem;
struct sVar* __dec_obj143;
_Bool _condtional_value_X460;
void* __right_value433 = (void*)0;
struct list_item$1sVar$ph* litem_106;
struct sVar* __dec_obj144;
void* __right_value434 = (void*)0;
struct list_item$1sVar$ph* litem_107;
struct sVar* __dec_obj145;
struct list$1sVar$ph* __result_obj__147;
    if(({    (_condtional_value_X459=(self->len==0));    _condtional_value_X459;    })) {
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value432=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sVar$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj143=litem->item,
        litem->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X460=(self->len==1));    _condtional_value_X460;    })) {
        litem_106=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value433=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sVar$ph*"))));
        litem_106->prev=self->head;
        litem_106->next=((void*)0);
        __dec_obj144=litem_106->item,
        litem_106->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_106;
        self->head->next=litem_106;
    }
    else {
        litem_107=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value434=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sVar$ph*"))));
        litem_107->prev=self->tail;
        litem_107->next=((void*)0);
        __dec_obj145=litem_107->item,
        litem_107->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_107;
        self->tail=litem_107;
    }
    self->len++;
    __result_obj__147 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__147;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value435 = (void*)0;
struct sVar* self;
void* __right_value436 = (void*)0;
char* __dec_obj146;
void* __right_value437 = (void*)0;
struct sType* __dec_obj147;
void* __right_value438 = (void*)0;
char* __dec_obj148;
void* __right_value439 = (void*)0;
    self=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1218, "struct sVar*"));
    __dec_obj146=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj147=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj147,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mGlobal=(_Bool)1;
    __dec_obj148=self->mCValueName,
    self->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0);
    self->mAllocaValue=(_Bool)0;
    self->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value440 = (void*)0;
struct sVar* self;
void* __right_value441 = (void*)0;
char* __dec_obj149;
void* __right_value442 = (void*)0;
struct sType* __dec_obj150;
void* __right_value443 = (void*)0;
char* __dec_obj151;
void* __right_value444 = (void*)0;
    self=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1235, "struct sVar*"));
    __dec_obj149=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj150=self->mType,
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj150,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mGlobal=(_Bool)1;
    __dec_obj151=self->mCValueName,
    self->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0);
    self->mAllocaValue=(_Bool)0;
    self->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
int sline_real;
_Bool is_type_name_flag;
_Bool multiple_declare;
_Bool _condtional_value_X461;
char* p;
int sline;
_Bool _condtional_value_X462;
void* __right_value445 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* type=0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X465;
void* __right_value446 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var5 = (void*)0;
struct sType* type_108=0;
char* name_109=0;
_Bool _condtional_value_X468;
_Bool _condtional_value_X469;
void* __right_value447 = (void*)0;
_Bool no_output_err;
_Bool no_comma;
_Bool no_output_come_code;
void* __right_value448 = (void*)0;
struct sNode* exp;
_Bool _condtional_value_X470;
_Bool attr_define;
_Bool _condtional_value_X471;
char* p_110;
int sline_111;
void* __right_value449 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* type_112=0;
char* name_113=0;
_Bool err_114=0;
_Bool _condtional_value_X472;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sFun* fun;
_Bool _condtional_value_X473;
_Bool val_;
_Bool _condtional_value_X474;
void* __right_value453 = (void*)0;
char* buf2;
struct list$1char$ph* multiple_assign;
_Bool _condtional_value_X475;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct list$1char$ph* __dec_obj152;
void* __right_value456 = (void*)0;
_Bool _condtional_value_X476;
void* __right_value457 = (void*)0;
char* buf3;
void* __right_value458 = (void*)0;
_Bool _condtional_value_X477;
_Bool no_comma_115;
void* __right_value459 = (void*)0;
struct sNode* right_value;
void* __right_value460 = (void*)0;
struct sNode* __dec_obj153;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* __right_value465 = (void*)0;
struct sNode* node;
struct sNode* __result_obj__148;
_Bool _condtional_value_X478;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sNode* _inf_value7;
struct sNewChannel* _inf_obj_value7;
void* __right_value470 = (void*)0;
struct sNode* node_116;
struct sNode* __result_obj__151;
_Bool _condtional_value_X483;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_117;
void* __right_value473 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* base_type=0;
char* name_118=0;
_Bool err_119=0;
_Bool _condtional_value_X484;
void* __right_value474 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var8 = (void*)0;
struct sType* type2=0;
char* var_name=0;
_Bool _condtional_value_X485;
_Bool _condtional_value_X486;
_Bool no_comma_120;
void* __right_value475 = (void*)0;
struct sNode* exp_121;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
_Bool no_comma_124;
void* __right_value481 = (void*)0;
struct sNode* exp_125;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
_Bool _condtional_value_X491;
void* __right_value486 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var9 = (void*)0;
struct sType* type2_126=0;
char* var_name_127=0;
_Bool _condtional_value_X492;
_Bool _condtional_value_X493;
_Bool no_comma_128;
void* __right_value487 = (void*)0;
struct sNode* exp_129;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
_Bool no_comma_130;
void* __right_value490 = (void*)0;
struct sNode* exp_131;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sNode* right_node;
void* __right_value495 = (void*)0;
char* var_name2;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* __right_value500 = (void*)0;
struct sNode* node_132;
struct sNode* __result_obj__155;
_Bool _condtional_value_X494;
void* __right_value501 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var10 = (void*)0;
struct sType* type_133=0;
char* name_134=0;
_Bool err_135=0;
_Bool _condtional_value_X495;
void* __right_value502 = (void*)0;
char* __dec_obj163;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
_Bool _condtional_value_X500;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sNode* _inf_value9;
struct sLoadNode* _inf_obj_value9;
void* __right_value511 = (void*)0;
struct sNode* self_node;
void* __right_value512 = (void*)0;
struct sNode* right_node_138;
void* __right_value513 = (void*)0;
struct sNode* node_139;
struct sNode* __result_obj__158;
void* __right_value514 = (void*)0;
struct sNode* __result_obj__159;
_Bool _condtional_value_X501;
void* __right_value515 = (void*)0;
struct sNode* right_value_140;
void* __right_value516 = (void*)0;
struct sNode* __dec_obj169;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* __right_value521 = (void*)0;
struct sNode* node_141;
struct sNode* __result_obj__160;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
_Bool _condtional_value_X502;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value528 = (void*)0;
struct sNode* node_142;
void* __right_value529 = (void*)0;
struct sNode* __dec_obj170;
struct sNode* __result_obj__161;
_Bool _condtional_value_X503;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value533 = (void*)0;
struct sNode* node_143;
void* __right_value534 = (void*)0;
struct sNode* __dec_obj171;
struct sNode* __result_obj__162;
char* word;
_Bool _condtional_value_X504;
void* __right_value535 = (void*)0;
char* __dec_obj172;
void* __right_value536 = (void*)0;
char* __dec_obj173;
_Bool is_type_name_flag_144;
_Bool _condtional_value_X505;
void* __right_value537 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var11 = (void*)0;
struct sType* type_145=0;
char* name_146=0;
_Bool err_147=0;
_Bool _condtional_value_X506;
_Bool _condtional_value_X507;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sNode* _inf_value13;
struct sLoadNode* _inf_obj_value13;
void* __right_value540 = (void*)0;
struct sNode* node_148;
struct sNode* __result_obj__163;
_Bool _condtional_value_X508;
struct sNode* right_value_149;
_Bool _condtional_value_X509;
_Bool no_comma_150;
void* __right_value541 = (void*)0;
struct sNode* __dec_obj174;
_Bool _condtional_value_X510;
void* __right_value542 = (void*)0;
struct sNode* __dec_obj175;
void* __right_value543 = (void*)0;
struct sNode* __dec_obj176;
void* __right_value544 = (void*)0;
struct sNode* __dec_obj177;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value548 = (void*)0;
struct sNode* node_151;
struct sNode* __result_obj__164;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sNode* _inf_value15;
struct sStoreNode* _inf_obj_value15;
void* __right_value552 = (void*)0;
struct sNode* node_152;
struct sNode* __result_obj__165;
word = (void*)0;
    sline_real=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag=is_type_name(buf,info);
    multiple_declare=(_Bool)0;
    if(({    (_condtional_value_X461=(is_type_name_flag&&!info->in_offsetof));    _condtional_value_X461;    })) {
        p=info->p;
        sline=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(({        (_condtional_value_X462=(xisalpha(*info->p)||*info->p==95));        _condtional_value_X462;        })) {
            parse_sharp_v5(info);
            multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value445=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err=multiple_assign_var4->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value445, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            parse_sharp_v5(info);
            if(({            (_condtional_value_X465=(err));            _condtional_value_X465;            })) {
                parse_sharp_v5(info);
                multiple_assign_var5=((struct tuple2$2sType$phchar$ph*)(__right_value446=parse_variable_name((struct sType*)come_increment_ref_count(type),(_Bool)1,info)));
                type_108=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_109=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value446, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(({                (_condtional_value_X468=(*info->p==61&&*(info->p+1)!=62&&!info->no_assign));                _condtional_value_X468;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(({                    (_condtional_value_X469=(*info->p==123));                    _condtional_value_X469;                    })) {
                        ((char*)(__right_value447=skip_block(info,(_Bool)0)));
                        (__right_value447 = come_decrement_ref_count(__right_value447, (void*)0, (void*)0, 1, 0, (void*)0));
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
                if(({                (_condtional_value_X470=(!is_type_name(name_109,info)&&*info->p==44));                _condtional_value_X470;                })) {
                    multiple_declare=(_Bool)1;
                }
                come_call_finalizer(sType_finalize, type_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_109 = come_decrement_ref_count(name_109, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        info->p=p;
        info->sline=sline;
    }
    attr_define=(_Bool)0;
    if(({    (_condtional_value_X471=(is_type_name_flag&&info->defining_class&&!info->in_offsetof));    _condtional_value_X471;    })) {
        p_110=info->p;
        sline_111=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value449=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_112=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        name_113=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        err_114=multiple_assign_var6->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value449, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        parse_sharp_v5(info);
        if(({        (_condtional_value_X472=(err_114&&parsecmp("self",info)));        _condtional_value_X472;        })) {
            attr_define=(_Bool)1;
        }
        info->p=p_110;
        info->sline=sline_111;
        come_call_finalizer(sType_finalize, type_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_113 = come_decrement_ref_count(name_113, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    parse_sharp_v5(info);
    fun=((struct sFun*)(__right_value452=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value451=__builtin_string(buf))))));
    (__right_value450 = come_decrement_ref_count(__right_value450, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value451 = come_decrement_ref_count(__right_value451, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value452, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(({    (_condtional_value_X473=((!gComeC&&(charp_operator_equals(buf,"var")||charp_operator_equals(buf,"val")))||charp_operator_equals(buf,"auto")||charp_operator_equals(buf,"__auto_type")));    _condtional_value_X473;    })) {
        val_=(_Bool)0;
        if(({        (_condtional_value_X474=(charp_operator_equals(buf,"val")));        _condtional_value_X474;        })) {
            val_=(_Bool)1;
        }
        parse_sharp_v5(info);
        buf2=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign=((void*)0);
        if(({        (_condtional_value_X475=(*info->p==44));        _condtional_value_X475;        })) {
            __dec_obj152=multiple_assign,
            multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "07var.c", 1347, "struct list$1char$ph*"))));
            come_call_finalizer(list$1char$ph_finalize, __dec_obj152,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1char$ph_push_back(multiple_assign,(char*)come_increment_ref_count((char*)come_memdup(buf2, "07var.c", 1348, "char*")));
            while(({            (_condtional_value_X476=(*info->p==44));            _condtional_value_X476;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1char$ph_push_back(multiple_assign,(char*)come_increment_ref_count((char*)come_memdup(buf3, "07var.c", 1358, "char*")));
                (buf3 = come_decrement_ref_count(buf3, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        parse_sharp_v5(info);
        if(({        (_condtional_value_X477=(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign));        _condtional_value_X477;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_115=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_115;
            parse_sharp_v5(info);
            __dec_obj153=right_value,
            right_value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value),info));
            (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0, (void*)0) :0);
            parse_sharp_v5(info);
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1377, "struct sNode");
            _inf_obj_value6=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value464=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1377, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf2)),(struct list$1char$ph*)come_increment_ref_count(multiple_assign),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,val_))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStoreNode_finalize;
            _inf_value6->clone=(void*)sStoreNode_clone;
            _inf_value6->compile=(void*)sStoreNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sStoreNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            node=(struct sNode*)come_increment_ref_count(_inf_value6);
            come_call_finalizer(sStoreNode_finalize, __right_value464, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            info->sline_real=sline_real;
            __result_obj__148 = (struct sNode*)come_increment_ref_count(node);
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((__result_obj__148) ? __result_obj__148 = come_decrement_ref_count(__result_obj__148, ((struct sNode*)__result_obj__148)->finalize, ((struct sNode*)__result_obj__148)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__148;
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_condtional_value_X478=(gComePthread&&charp_operator_equals(buf,"__channel__")));    _condtional_value_X478;    })) {
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1387, "struct sNode");
        _inf_obj_value7=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value467=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc_v2(1, sizeof(struct sNewChannel)*(1), "07var.c", 1387, "struct sNewChannel*")),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sNewChannel_finalize;
        _inf_value7->clone=(void*)sNewChannel_clone;
        _inf_value7->compile=(void*)sNewChannel_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sNewChannel_kind;
        _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
        node_116=(struct sNode*)come_increment_ref_count(_inf_value7);
        come_call_finalizer(sNewChannel_finalize, __right_value467, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->sline_real=sline_real;
        __result_obj__151 = (struct sNode*)come_increment_ref_count(node_116);
        ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__151) ? __result_obj__151 = come_decrement_ref_count(__result_obj__151, ((struct sNode*)__result_obj__151)->finalize, ((struct sNode*)__result_obj__151)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__151;
        ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X483=(multiple_declare));    _condtional_value_X483;    })) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_117=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "07var.c", 1395, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        parse_sharp_v5(info);
        multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value473=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        name_118=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_119=multiple_assign_var7->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value473, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        parse_sharp_v5(info);
        if(({        (_condtional_value_X484=(!err_119));        _condtional_value_X484;        })) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var8=((struct tuple2$2sType$phchar$ph*)(__right_value474=parse_variable_name((struct sType*)come_increment_ref_count(base_type),(_Bool)1,info)));
        type2=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value474, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        parse_sharp_v5(info);
        if(({        (_condtional_value_X485=(*info->p==61));        _condtional_value_X485;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X486=(type2->mClass->mStruct&&list$1sNode$ph_length(type2->mArrayNum)==0));            _condtional_value_X486;            })) {
                info->struct_initializer=(_Bool)1;
                no_comma_120=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_121=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_120;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_117,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1422, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2),(char*)come_increment_ref_count(var_name),(struct sNode*)come_increment_ref_count(exp_121))));
                ((exp_121) ? exp_121 = come_decrement_ref_count(exp_121, ((struct sNode*)exp_121)->finalize, ((struct sNode*)exp_121)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_124=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_125=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_124;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_117,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1432, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2),(char*)come_increment_ref_count(var_name),(struct sNode*)come_increment_ref_count(exp_125))));
                ((exp_125) ? exp_125 = come_decrement_ref_count(exp_125, ((struct sNode*)exp_125)->finalize, ((struct sNode*)exp_125)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_117,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1436, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2),(char*)come_increment_ref_count(var_name),((void*)0))));
        }
        while(({        (_condtional_value_X491=(*info->p==44));        _condtional_value_X491;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var9=((struct tuple2$2sType$phchar$ph*)(__right_value486=parse_variable_name((struct sType*)come_increment_ref_count(base_type),(_Bool)0,info)));
            type2_126=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            var_name_127=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value486, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_condtional_value_X492=(*info->p==61));            _condtional_value_X492;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                if(({                (_condtional_value_X493=(type2_126->mClass->mStruct&&list$1sNode$ph_length(type2_126->mArrayNum)==0));                _condtional_value_X493;                })) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_128=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_129=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_128;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_117,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1458, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_126),(char*)come_increment_ref_count(var_name_127),(struct sNode*)come_increment_ref_count(exp_129))));
                    ((exp_129) ? exp_129 = come_decrement_ref_count(exp_129, ((struct sNode*)exp_129)->finalize, ((struct sNode*)exp_129)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    no_comma_130=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_131=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_130;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_117,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1470, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_126),(char*)come_increment_ref_count(var_name_127),(struct sNode*)come_increment_ref_count(exp_131))));
                    ((exp_131) ? exp_131 = come_decrement_ref_count(exp_131, ((struct sNode*)exp_131)->finalize, ((struct sNode*)exp_131)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
            }
            else {
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_117,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1474, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_126),(char*)come_increment_ref_count(var_name_127),((void*)0))));
            }
            come_call_finalizer(sType_finalize, type2_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name_127 = come_decrement_ref_count(var_name_127, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        right_node=((void*)0);
        var_name2=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1481, "struct sNode");
        _inf_obj_value8=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value499=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1481, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare_117),(struct sType*)come_increment_ref_count(base_type),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,(_Bool)0))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStoreNode_finalize;
        _inf_value8->clone=(void*)sStoreNode_clone;
        _inf_value8->compile=(void*)sStoreNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStoreNode_kind;
        _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
        node_132=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer(sStoreNode_finalize, __right_value499, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->sline_real=sline_real;
        __result_obj__155 = (struct sNode*)come_increment_ref_count(node_132);
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_118 = come_decrement_ref_count(name_118, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_132) ? node_132 = come_decrement_ref_count(node_132, ((struct sNode*)node_132)->finalize, ((struct sNode*)node_132)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__155) ? __result_obj__155 = come_decrement_ref_count(__result_obj__155, ((struct sNode*)__result_obj__155)->finalize, ((struct sNode*)__result_obj__155)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__155;
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_118 = come_decrement_ref_count(name_118, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_132) ? node_132 = come_decrement_ref_count(node_132, ((struct sNode*)node_132)->finalize, ((struct sNode*)node_132)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X494=(attr_define));    _condtional_value_X494;    })) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var10=((struct tuple3$3sType$phchar$phbool$*)(__right_value501=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_133=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        name_134=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_135=multiple_assign_var10->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value501, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        parse_sharp_v5(info);
        if(({        (_condtional_value_X495=(!err_135));        _condtional_value_X495;        })) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj163=name_134,
        name_134=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0);
        parse_sharp_v5(info);
        list$1tuple2$2char$phsType$ph$ph_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "07var.c", 1504, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_134),(struct sType*)come_increment_ref_count(type_133))));
        if(({        (_condtional_value_X500=(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62));        _condtional_value_X500;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1512, "struct sNode");
            _inf_obj_value9=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value510=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1512, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sLoadNode_finalize;
            _inf_value9->clone=(void*)sLoadNode_clone;
            _inf_value9->compile=(void*)sLoadNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sLoadNode_terminated;
            _inf_value9->kind=(void*)sLoadNode_kind;
            _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
            self_node=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer(sLoadNode_finalize, __right_value510, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            right_node_138=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_139=(struct sNode*)come_increment_ref_count(store_field(self_node,(struct sNode*)come_increment_ref_count(right_node_138),(char*)come_increment_ref_count(name_134),info));
            info->sline_real=sline_real;
            __result_obj__158 = (struct sNode*)come_increment_ref_count(node_139);
            ((self_node) ? self_node = come_decrement_ref_count(self_node, ((struct sNode*)self_node)->finalize, ((struct sNode*)self_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((right_node_138) ? right_node_138 = come_decrement_ref_count(right_node_138, ((struct sNode*)right_node_138)->finalize, ((struct sNode*)right_node_138)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            come_call_finalizer(sType_finalize, type_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_134 = come_decrement_ref_count(name_134, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__result_obj__158) ? __result_obj__158 = come_decrement_ref_count(__result_obj__158, ((struct sNode*)__result_obj__158)->finalize, ((struct sNode*)__result_obj__158)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__158;
            ((self_node) ? self_node = come_decrement_ref_count(self_node, ((struct sNode*)self_node)->finalize, ((struct sNode*)self_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((right_node_138) ? right_node_138 = come_decrement_ref_count(right_node_138, ((struct sNode*)right_node_138)->finalize, ((struct sNode*)right_node_138)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            info->sline_real=sline_real;
            __result_obj__159 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value514=create_null_node(info))));
            come_call_finalizer(sType_finalize, type_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_134 = come_decrement_ref_count(name_134, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__right_value514) ? __right_value514 = come_decrement_ref_count(__right_value514, ((struct sNode*)__right_value514)->finalize, ((struct sNode*)__right_value514)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__159) ? __result_obj__159 = come_decrement_ref_count(__result_obj__159, ((struct sNode*)__result_obj__159)->finalize, ((struct sNode*)__result_obj__159)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__159;
        }
        come_call_finalizer(sType_finalize, type_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_134 = come_decrement_ref_count(name_134, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(({    (_condtional_value_X501=(!is_type_name_flag&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign));    _condtional_value_X501;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_140=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj169=right_value_140,
        right_value_140=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_140),info));
        (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1537, "struct sNode");
        _inf_obj_value10=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value520=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1537, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_140),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,(_Bool)0))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sStoreNode_finalize;
        _inf_value10->clone=(void*)sStoreNode_clone;
        _inf_value10->compile=(void*)sStoreNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sStoreNode_kind;
        _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
        node_141=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer(sStoreNode_finalize, __right_value520, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->sline_real=sline_real;
        __result_obj__160 = (struct sNode*)come_increment_ref_count(node_141);
        ((right_value_140) ? right_value_140 = come_decrement_ref_count(right_value_140, ((struct sNode*)right_value_140)->finalize, ((struct sNode*)right_value_140)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node_141) ? node_141 = come_decrement_ref_count(node_141, ((struct sNode*)node_141)->finalize, ((struct sNode*)node_141)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__160) ? __result_obj__160 = come_decrement_ref_count(__result_obj__160, ((struct sNode*)__result_obj__160)->finalize, ((struct sNode*)__result_obj__160)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__160;
        ((right_value_140) ? right_value_140 = come_decrement_ref_count(right_value_140, ((struct sNode*)right_value_140)->finalize, ((struct sNode*)right_value_140)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node_141) ? node_141 = come_decrement_ref_count(node_141, ((struct sNode*)node_141)->finalize, ((struct sNode*)node_141)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X502=(!is_type_name_flag||((struct sFun*)(__right_value524=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value523=__builtin_string(buf))))))));    (__right_value522 = come_decrement_ref_count(__right_value522, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value523 = come_decrement_ref_count(__right_value523, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value524, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X502;    })) {
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1542, "struct sNode");
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value527=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1542, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
        node_142=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer(sLoadNode_finalize, __right_value527, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj170=node_142,
        node_142=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_142),info));
        (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0, (void*)0) :0);
        info->sline_real=sline_real;
        __result_obj__161 = (struct sNode*)come_increment_ref_count(node_142);
        ((node_142) ? node_142 = come_decrement_ref_count(node_142, ((struct sNode*)node_142)->finalize, ((struct sNode*)node_142)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__161) ? __result_obj__161 = come_decrement_ref_count(__result_obj__161, ((struct sNode*)__result_obj__161)->finalize, ((struct sNode*)__result_obj__161)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__161;
        ((node_142) ? node_142 = come_decrement_ref_count(node_142, ((struct sNode*)node_142)->finalize, ((struct sNode*)node_142)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_condtional_value_X503=(!is_type_name_flag));    _condtional_value_X503;    })) {
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1551, "struct sNode");
        _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value532=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1551, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sLoadNode_finalize;
        _inf_value12->clone=(void*)sLoadNode_clone;
        _inf_value12->compile=(void*)sLoadNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sLoadNode_terminated;
        _inf_value12->kind=(void*)sLoadNode_kind;
        _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
        node_143=(struct sNode*)come_increment_ref_count(_inf_value12);
        come_call_finalizer(sLoadNode_finalize, __right_value532, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj171=node_143,
        node_143=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_143),info));
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0, (void*)0) :0);
        info->sline_real=sline_real;
        __result_obj__162 = (struct sNode*)come_increment_ref_count(node_143);
        ((node_143) ? node_143 = come_decrement_ref_count(node_143, ((struct sNode*)node_143)->finalize, ((struct sNode*)node_143)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__162) ? __result_obj__162 = come_decrement_ref_count(__result_obj__162, ((struct sNode*)__result_obj__162)->finalize, ((struct sNode*)__result_obj__162)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__162;
        ((node_143) ? node_143 = come_decrement_ref_count(node_143, ((struct sNode*)node_143)->finalize, ((struct sNode*)node_143)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(({        (_condtional_value_X504=(xisalpha(*info->p)||*info->p==95));        _condtional_value_X504;        })) {
            __dec_obj172=word,
            word=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj173=word,
            word=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0, (void*)0);
        }
        is_type_name_flag_144=is_type_name(word,info);
        info->p=head;
        info->sline=head_sline;
        if(({        (_condtional_value_X505=(is_type_name_flag_144));        _condtional_value_X505;        })) {
            parse_sharp_v5(info);
            multiple_assign_var11=((struct tuple3$3sType$phchar$phbool$*)(__right_value537=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_145=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_146=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_147=multiple_assign_var11->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value537, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            parse_sharp_v5(info);
            if(({            (_condtional_value_X506=(!err_147));            _condtional_value_X506;            })) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(({            (_condtional_value_X507=(*info->p==61&&*(info->p+1)!=62&&info->no_assign));            _condtional_value_X507;            })) {
                _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1588, "struct sNode");
                _inf_obj_value13=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value539=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1588, "struct sLoadNode*")),(char*)come_increment_ref_count(name_146),info))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sLoadNode_finalize;
                _inf_value13->clone=(void*)sLoadNode_clone;
                _inf_value13->compile=(void*)sLoadNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sLoadNode_terminated;
                _inf_value13->kind=(void*)sLoadNode_kind;
                _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
                node_148=(struct sNode*)come_increment_ref_count(_inf_value13);
                come_call_finalizer(sLoadNode_finalize, __right_value539, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                info->sline_real=sline_real;
                __result_obj__163 = (struct sNode*)come_increment_ref_count(node_148);
                ((node_148) ? node_148 = come_decrement_ref_count(node_148, ((struct sNode*)node_148)->finalize, ((struct sNode*)node_148)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_146 = come_decrement_ref_count(name_146, (void*)0, (void*)0, 0, 0, (void*)0));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__result_obj__163) ? __result_obj__163 = come_decrement_ref_count(__result_obj__163, ((struct sNode*)__result_obj__163)->finalize, ((struct sNode*)__result_obj__163)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__163;
                ((node_148) ? node_148 = come_decrement_ref_count(node_148, ((struct sNode*)node_148)->finalize, ((struct sNode*)node_148)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else if(({            (_condtional_value_X508=(*info->p==61&&*(info->p+1)!=62&&!info->no_assign));            _condtional_value_X508;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_149=((void*)0);
                if(({                (_condtional_value_X509=(type_145->mClass->mStruct&&list$1sNode$ph_length(type_145->mArrayNum)==0));                _condtional_value_X509;                })) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_150=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj174=right_value_149,
                    right_value_149=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0, (void*)0) :0);
                    info->no_comma=no_comma_150;
                    info->struct_initializer=(_Bool)0;
                }
                else if(({                (_condtional_value_X510=(list$1sNode$ph_length(type_145->mArrayNum)>0||type_145->mArrayPointerType));                _condtional_value_X510;                })) {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj175=right_value_149,
                    right_value_149=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0) :0);
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                else {
                    parse_sharp_v5(info);
                    __dec_obj176=right_value_149,
                    right_value_149=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0, (void*)0) :0);
                    parse_sharp_v5(info);
                }
                __dec_obj177=right_value_149,
                right_value_149=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_149),info));
                (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0, (void*)0) :0);
                _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1623, "struct sNode");
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value547=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1623, "struct sStoreNode*")),(char*)come_increment_ref_count(name_146),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_145),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_149),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,(_Bool)0))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
                node_151=(struct sNode*)come_increment_ref_count(_inf_value14);
                come_call_finalizer(sStoreNode_finalize, __right_value547, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                info->sline_real=sline_real;
                __result_obj__164 = (struct sNode*)come_increment_ref_count(node_151);
                ((right_value_149) ? right_value_149 = come_decrement_ref_count(right_value_149, ((struct sNode*)right_value_149)->finalize, ((struct sNode*)right_value_149)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node_151) ? node_151 = come_decrement_ref_count(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_146 = come_decrement_ref_count(name_146, (void*)0, (void*)0, 0, 0, (void*)0));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__result_obj__164) ? __result_obj__164 = come_decrement_ref_count(__result_obj__164, ((struct sNode*)__result_obj__164)->finalize, ((struct sNode*)__result_obj__164)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__164;
                ((right_value_149) ? right_value_149 = come_decrement_ref_count(right_value_149, ((struct sNode*)right_value_149)->finalize, ((struct sNode*)right_value_149)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node_151) ? node_151 = come_decrement_ref_count(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1628, "struct sNode");
                _inf_obj_value15=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value551=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1628, "struct sStoreNode*")),(char*)come_increment_ref_count(name_146),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_145),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,(_Bool)0))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sStoreNode_finalize;
                _inf_value15->clone=(void*)sStoreNode_clone;
                _inf_value15->compile=(void*)sStoreNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sStoreNode_kind;
                _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
                node_152=(struct sNode*)come_increment_ref_count(_inf_value15);
                come_call_finalizer(sStoreNode_finalize, __right_value551, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                info->sline_real=sline_real;
                __result_obj__165 = (struct sNode*)come_increment_ref_count(node_152);
                ((node_152) ? node_152 = come_decrement_ref_count(node_152, ((struct sNode*)node_152)->finalize, ((struct sNode*)node_152)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_146 = come_decrement_ref_count(name_146, (void*)0, (void*)0, 0, 0, (void*)0));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__result_obj__165) ? __result_obj__165 = come_decrement_ref_count(__result_obj__165, ((struct sNode*)__result_obj__165)->finalize, ((struct sNode*)__result_obj__165)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__165;
                ((node_152) ? node_152 = come_decrement_ref_count(node_152, ((struct sNode*)node_152)->finalize, ((struct sNode*)node_152)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            come_call_finalizer(sType_finalize, type_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_146 = come_decrement_ref_count(name_146, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    err_msg(info,"unexpected word(%s)(1)",buf);
    exit(2);
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
_Bool _condtional_value_X463;
_Bool _condtional_value_X464;
    if(({    (_condtional_value_X463=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X463;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X464=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X464;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
_Bool _condtional_value_X466;
_Bool _condtional_value_X467;
    if(({    (_condtional_value_X466=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X466;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X467=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X467;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
_Bool _condtional_value_X479;
struct sNewChannel* __result_obj__149;
void* __right_value468 = (void*)0;
struct sNewChannel* result;
_Bool _condtional_value_X480;
_Bool _condtional_value_X481;
void* __right_value469 = (void*)0;
char* __dec_obj154;
_Bool _condtional_value_X482;
struct sNewChannel* __result_obj__150;
    if(({    (_condtional_value_X479=(self==(void*)0));    _condtional_value_X479;    })) {
        __result_obj__149 = (void*)0;
        return __result_obj__149;
    }
    result=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc_v2(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*"));
    if(({    (_condtional_value_X480=(self!=((void*)0)));    _condtional_value_X480;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X481=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X481;    })) {
        __dec_obj154=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewChannel_clone", 5, "char*"));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X482=(self!=((void*)0)));    _condtional_value_X482;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__150 = result;
    come_call_finalizer(sNewChannel_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__150;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
_Bool _condtional_value_X487;
void* __right_value476 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj155;
_Bool _condtional_value_X488;
void* __right_value477 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_122;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj156;
void* __right_value478 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_123;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj157;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__152;
    if(({    (_condtional_value_X487=(self->len==0));    _condtional_value_X487;    })) {
        litem=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value476=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj155=litem->item,
        litem->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj155,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X488=(self->len==1));    _condtional_value_X488;    })) {
        litem_122=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value477=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_122->prev=self->head;
        litem_122->next=((void*)0);
        __dec_obj156=litem_122->item,
        litem_122->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_122;
        self->head->next=litem_122;
    }
    else {
        litem_123=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value478=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_123->prev=self->tail;
        litem_123->next=((void*)0);
        __dec_obj157=litem_123->item,
        litem_123->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_123;
        self->tail=litem_123;
    }
    self->len++;
    __result_obj__152 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__152;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3){
struct sType* __dec_obj158;
char* __dec_obj159;
struct sNode* __dec_obj160;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__153;
    __dec_obj158=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj158,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj159=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj160=self->v3,
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__153 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v3) ? v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__153, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__153;
}

static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3){
struct sType* __dec_obj161;
char* __dec_obj162;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__154;
    __dec_obj161=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj162=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0, (void*)0);
    self->v3=v3;
    __result_obj__154 = (struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phvoid$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phvoid$p$p_finalize, __result_obj__154, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__154;
}

static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
_Bool _condtional_value_X489;
_Bool _condtional_value_X490;
    if(({    (_condtional_value_X489=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X489;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X490=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X490;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
_Bool _condtional_value_X496;
void* __right_value503 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem;
struct tuple2$2char$phsType$ph* __dec_obj164;
_Bool _condtional_value_X499;
void* __right_value504 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_136;
struct tuple2$2char$phsType$ph* __dec_obj165;
void* __right_value505 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_137;
struct tuple2$2char$phsType$ph* __dec_obj166;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__156;
    if(({    (_condtional_value_X496=(self->len==0));    _condtional_value_X496;    })) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value503=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj164=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj164,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X499=(self->len==1));    _condtional_value_X499;    })) {
        litem_136=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value504=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        __dec_obj165=litem_136->item,
        litem_136->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj165,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value505=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_137->prev=self->tail;
        litem_137->next=((void*)0);
        __dec_obj166=litem_137->item,
        litem_137->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_137;
        self->tail=litem_137;
    }
    self->len++;
    __result_obj__156 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__156;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X497;
_Bool _condtional_value_X498;
    if(({    (_condtional_value_X497=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X497;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X498=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X498;    })) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj167;
struct sType* __dec_obj168;
struct tuple2$2char$phsType$ph* __result_obj__157;
    __dec_obj167=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj168=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj168,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__157 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__157, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__157;
}

struct sNode* expression_node_v95(struct sInfo* info){
struct sNode* node;
_Bool _condtional_value_X511;
void* __right_value553 = (void*)0;
struct sNode* exp;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sNode* _inf_value16;
struct sReadChannelNode* _inf_obj_value16;
void* __right_value559 = (void*)0;
struct sNode* __result_obj__168;
void* __right_value560 = (void*)0;
struct sNode* __dec_obj180;
struct sNode* __result_obj__169;
node = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(({    (_condtional_value_X511=(strncmp(info->p,"<-",strlen("<-"))==0));    _condtional_value_X511;    })) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1654, "struct sNode");
        _inf_obj_value16=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value555=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc_v2(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1654, "struct sReadChannelNode*")),(struct sNode*)come_increment_ref_count(exp),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sReadChannelNode_finalize;
        _inf_value16->clone=(void*)sReadChannelNode_clone;
        _inf_value16->compile=(void*)sReadChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sReadChannelNode_kind;
        _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__168 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value559=_inf_value16)));
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sReadChannelNode_finalize, __right_value555, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value559) ? __right_value559 = come_decrement_ref_count(__right_value559, ((struct sNode*)__right_value559)->finalize, ((struct sNode*)__right_value559)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__168) ? __result_obj__168 = come_decrement_ref_count(__result_obj__168, ((struct sNode*)__result_obj__168)->finalize, ((struct sNode*)__result_obj__168)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__168;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else {
        __dec_obj180=node,
        node=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__169 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__169) ? __result_obj__169 = come_decrement_ref_count(__result_obj__169, ((struct sNode*)__result_obj__169)->finalize, ((struct sNode*)__result_obj__169)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__169;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
_Bool _condtional_value_X512;
struct sReadChannelNode* __result_obj__166;
void* __right_value556 = (void*)0;
struct sReadChannelNode* result;
_Bool _condtional_value_X513;
_Bool _condtional_value_X514;
void* __right_value557 = (void*)0;
char* __dec_obj178;
_Bool _condtional_value_X515;
_Bool _condtional_value_X516;
void* __right_value558 = (void*)0;
struct sNode* __dec_obj179;
struct sReadChannelNode* __result_obj__167;
    if(({    (_condtional_value_X512=(self==(void*)0));    _condtional_value_X512;    })) {
        __result_obj__166 = (void*)0;
        return __result_obj__166;
    }
    result=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc_v2(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*"));
    if(({    (_condtional_value_X513=(self!=((void*)0)));    _condtional_value_X513;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X514=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X514;    })) {
        __dec_obj178=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReadChannelNode_clone", 5, "char*"));
        __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X515=(self!=((void*)0)));    _condtional_value_X515;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X516=(self!=((void*)0)&&self->exp!=((void*)0)));    _condtional_value_X516;    })) {
        __dec_obj179=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__167 = result;
    come_call_finalizer(sReadChannelNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__167;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
_Bool _condtional_value_X517;
void* __right_value561 = (void*)0;
struct sNode* right_value;
void* __right_value562 = (void*)0;
struct sNode* __dec_obj181;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sNode* _inf_value17;
struct sWriteChannelNode* _inf_obj_value17;
void* __right_value569 = (void*)0;
struct sNode* __result_obj__172;
void* __right_value570 = (void*)0;
struct sNode* __result_obj__173;
    if(({    (_condtional_value_X517=(!node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0));    _condtional_value_X517;    })) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj181=right_value,
        right_value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value),info));
        (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1677, "struct sNode");
        _inf_obj_value17=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value564=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc_v2(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1677, "struct sWriteChannelNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value17->clone=(void*)sWriteChannelNode_clone;
        _inf_value17->compile=(void*)sWriteChannelNode_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sWriteChannelNode_kind;
        _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__172 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value569=_inf_value17)));
        ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sWriteChannelNode_finalize, __right_value564, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value569) ? __right_value569 = come_decrement_ref_count(__right_value569, ((struct sNode*)__right_value569)->finalize, ((struct sNode*)__right_value569)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__172) ? __result_obj__172 = come_decrement_ref_count(__result_obj__172, ((struct sNode*)__result_obj__172)->finalize, ((struct sNode*)__result_obj__172)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__172;
        ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __result_obj__173 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value570=post_position_operator((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((__right_value570) ? __right_value570 = come_decrement_ref_count(__right_value570, ((struct sNode*)__right_value570)->finalize, ((struct sNode*)__right_value570)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__173) ? __result_obj__173 = come_decrement_ref_count(__result_obj__173, ((struct sNode*)__result_obj__173)->finalize, ((struct sNode*)__result_obj__173)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__173;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
_Bool _condtional_value_X518;
struct sWriteChannelNode* __result_obj__170;
void* __right_value565 = (void*)0;
struct sWriteChannelNode* result;
_Bool _condtional_value_X519;
_Bool _condtional_value_X520;
void* __right_value566 = (void*)0;
char* __dec_obj182;
_Bool _condtional_value_X521;
_Bool _condtional_value_X522;
void* __right_value567 = (void*)0;
struct sNode* __dec_obj183;
_Bool _condtional_value_X523;
void* __right_value568 = (void*)0;
struct sNode* __dec_obj184;
struct sWriteChannelNode* __result_obj__171;
    if(({    (_condtional_value_X518=(self==(void*)0));    _condtional_value_X518;    })) {
        __result_obj__170 = (void*)0;
        return __result_obj__170;
    }
    result=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc_v2(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*"));
    if(({    (_condtional_value_X519=(self!=((void*)0)));    _condtional_value_X519;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X520=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X520;    })) {
        __dec_obj182=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWriteChannelNode_clone", 5, "char*"));
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X521=(self!=((void*)0)));    _condtional_value_X521;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X522=(self!=((void*)0)&&self->exp!=((void*)0)));    _condtional_value_X522;    })) {
        __dec_obj183=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X523=(self!=((void*)0)&&self->right_value!=((void*)0)));    _condtional_value_X523;    })) {
        __dec_obj184=result->right_value,
        result->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__171 = result;
    come_call_finalizer(sWriteChannelNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__171;
}

