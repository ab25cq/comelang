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

struct list_item$1sBlock$ph
{
    struct sBlock* item;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sIfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNode$ph* mElifExpressionNodes;
    struct list$1sBlock$ph* mElifBlocks;
    int mElifNum;
    _Bool mGuard;
    struct sBlock* mElseBlock;
};

struct sMatchNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sIfMethodNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sOrStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
};

struct sAndStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info);
_Bool sIfNode_no_mutex(struct sIfNode* self);
_Bool sIfNode_terminated(struct sIfNode* self);
char* sIfNode_kind(struct sIfNode* self);
_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
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
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void sIfNode_finalize(struct sIfNode* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sMatchNode_no_mutex(struct sMatchNode* self);
_Bool sMatchNode_terminated(struct sMatchNode* self);
char* sMatchNode_kind(struct sMatchNode* self);
_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info);
static void sMatchNode_finalize(struct sMatchNode* self);
struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sIfMethodNode_no_mutex(struct sIfMethodNode* self);
_Bool sIfMethodNode_terminated(struct sIfMethodNode* self);
char* sIfMethodNode_kind(struct sIfMethodNode* self);
_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info);
static void sIfMethodNode_finalize(struct sIfMethodNode* self);
struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self);
_Bool sOrStatmentNode_no_mutex(struct sOrStatmentNode* self);
char* sOrStatmentNode_kind(struct sOrStatmentNode* self);
_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);
static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self);
_Bool sAndStatmentNode_no_mutex(struct sAndStatmentNode* self);
char* sAndStatmentNode_kind(struct sAndStatmentNode* self);
_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);
static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sBlock$ph* list$1sBlock$ph_push_back(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
// uniq global variable
// inline function

// body function
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj1;
struct sBlock* __dec_obj39;
struct list$1sNode$ph* __dec_obj40;
struct list$1sBlock$ph* __dec_obj44;
_Bool _conditional_value_X0;
struct sBlock* __dec_obj45;
struct sBlock* __dec_obj46;
struct sIfNode* __result_obj__55;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj1=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0) :0);
    __right_value0 = (void*)0;
    __dec_obj39=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer(sBlock_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj40=self->mElifExpressionNodes,
    self->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(elif_expression_nodes));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj44=self->mElifBlocks,
    self->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(elif_blocks));
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->mElifNum=elif_num;
    self->mGuard=guard_;
    ((void*)0);
    if(({    (_conditional_value_X0=(else_block));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj45=self->mElseBlock,
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(else_block));
        come_call_finalizer(sBlock_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj46=self->mElseBlock,
        self->mElseBlock=((void*)0);
        come_call_finalizer(sBlock_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__55 = (struct sIfNode*)come_increment_ref_count(self);
    come_call_finalizer(sIfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sIfNode_finalize, __result_obj__55, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__55;
}

_Bool sIfNode_no_mutex(struct sIfNode* self){
    return (_Bool)1;
}

_Bool sIfNode_terminated(struct sIfNode* self){
    return (_Bool)1;
}

char* sIfNode_kind(struct sIfNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__56;
    __result_obj__56 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sIfNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__56;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
_Bool existance_of_result_value;
struct sBlock* else_block;
int elif_num;
_Bool guard_;
struct sNode* expression_node;
int sline;
char* sname;
_Bool Value;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct CVALUE* conditional_value;
struct sBlock* if_block;
int i;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
struct sNode* expression_node2;
_Bool Value_23;
_Bool _conditional_value_X4;
_Bool __result_obj__61;
struct CVALUE* conditional_value_24;
struct sBlock* elif_node_block;
_Bool __result_obj__66;
    existance_of_result_value=(_Bool)0;
    else_block=self->mElseBlock;
    elif_num=self->mElifNum;
    guard_=self->mGuard;
    expression_node=self->mExpressionNode;
    sline=info->sline;
    sname=info->sname;
    add_come_code(info,"if(({");
    Value=node_conditional_compile(expression_node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        return (_Bool)0;
    }
    else {
    }
    conditional_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    transpile_conditional_with_free_right_object_value((struct CVALUE*)come_increment_ref_count(conditional_value),info);
    add_come_code(info,"})) {\n");
    if_block=self->mIfBlock;
    transpile_block(if_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value);
    add_come_code(info,"}\n");
    if(({    (_conditional_value_X0=(elif_num>0));    _conditional_value_X0;    })) {
        for(        ({        (_conditional_value_X1=(i=0));        _conditional_value_X1;        });        ({        (_conditional_value_X2=(i<elif_num));        _conditional_value_X2;        });        ({        (_conditional_value_X3=(i++));        _conditional_value_X3;        })        ){
            __right_value0 = (void*)0;
            expression_node2=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(self->mElifExpressionNodes,i)));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            add_come_code(info,"else if(({");
            Value_23=node_conditional_compile(expression_node2,info);
            if(({            (_conditional_value_X4=(!Value_23));            _conditional_value_X4;            })) {
                __result_obj__61 = (_Bool)0;
                come_call_finalizer(CVALUE_finalize, conditional_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__61;
            }
            else {
            }
            __right_value0 = (void*)0;
            conditional_value_24=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            transpile_conditional_with_free_right_object_value((struct CVALUE*)come_increment_ref_count(conditional_value_24),info);
            add_come_code(info,"})) {\n");
            __right_value0 = (void*)0;
            elif_node_block=((struct sBlock*)(__right_value0=list$1sBlock$ph_operator_load_element(self->mElifBlocks,i)));
            come_call_finalizer(sBlock_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            transpile_block(elif_node_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value);
            add_come_code(info,"}\n");
            come_call_finalizer(CVALUE_finalize, conditional_value_24, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(({    (_conditional_value_X0=(else_block));    _conditional_value_X0;    })) {
        add_come_code(info,"else {\n");
        transpile_block(else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    __result_obj__66 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, conditional_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__66;
}

static void sNodeBase_finalize(struct sNodeBase* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sNode* sNode_clone(struct sNode* self){
_Bool _conditional_value_X0;
struct sNode* __result_obj__1;
void* __right_value0 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__2;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__1) ? __result_obj__1 = come_decrement_ref_count(__result_obj__1, ((struct sNode*)__result_obj__1)->finalize, ((struct sNode*)__result_obj__1)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__1;
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
    __result_obj__2 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__2) ? __result_obj__2 = come_decrement_ref_count(__result_obj__2, ((struct sNode*)__result_obj__2)->finalize, ((struct sNode*)__result_obj__2)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__2;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
_Bool _conditional_value_X0;
struct sBlock* __result_obj__3;
void* __right_value0 = (void*)0;
struct sBlock* result;
struct list$1sNode$ph* __dec_obj5;
struct sVarTable* __dec_obj38;
struct sBlock* __result_obj__50;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__3 = (void*)0;
        return __result_obj__3;
    }
    result=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj5=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj38=result->mVarTable,
        result->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__50 = result;
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__50;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
_Bool _conditional_value_X0;
struct list$1sNode$ph* __result_obj__4;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _conditional_value_X1;
struct list$1sNode$ph* __result_obj__7;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__4 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__4, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__4;
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
    __result_obj__7 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__7;
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

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__5;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__5 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__5;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj2;
_Bool _conditional_value_X1;
struct list_item$1sNode$ph* litem_0;
struct sNode* __dec_obj3;
struct list_item$1sNode$ph* litem_1;
struct sNode* __dec_obj4;
struct list$1sNode$ph* __result_obj__6;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6383, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj2=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj2 ? __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6393, "struct list_item$1sNode$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj3=litem_0->item,
        litem_0->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj3 ? __dec_obj3 = come_decrement_ref_count(__dec_obj3, ((struct sNode*)__dec_obj3)->finalize, ((struct sNode*)__dec_obj3)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6403, "struct list_item$1sNode$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj4=litem_1->item,
        litem_1->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj4 ? __dec_obj4 = come_decrement_ref_count(__dec_obj4, ((struct sNode*)__dec_obj4)->finalize, ((struct sNode*)__dec_obj4)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__6 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__6;
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

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
_Bool _conditional_value_X0;
struct sVarTable* __result_obj__8;
void* __right_value0 = (void*)0;
struct sVarTable* result;
struct map$2char$phsVar$ph* __dec_obj37;
struct sVarTable* __result_obj__49;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__8 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__8, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__8;
    }
    result=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mVars!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj37=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mGlobal=self->mGlobal;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mParent=self->mParent;
    }
    __result_obj__49 = (struct sVarTable*)come_increment_ref_count(result);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__49, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__49;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
_Bool _conditional_value_X0;
struct map$2char$phsVar$ph* __result_obj__9;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct map$2char$phsVar$ph* result;
struct list$1char$ph* __dec_obj7;
char* it;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sVar* default_value;
struct sVar* it2;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
_Bool _conditional_value_X5;
struct map$2char$phsVar$ph* __result_obj__48;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__9 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__9;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/comelang.h", 7359, "struct map$2char$phsVar$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj7=result->key_list,
    result->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 7361, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(    ({    (_conditional_value_X0=(it=map$2char$phsVar$ph_begin(self)));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(!map$2char$phsVar$ph_end(self)));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(it=map$2char$phsVar$ph_next(self)));    _conditional_value_X2;    })    ){
        memset(&default_value,0,sizeof(struct sVar*));
        __right_value0 = (void*)0;
        it2=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value)));
        if(({        (_conditional_value_X3=(1&&1));        _conditional_value_X3;        })) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/comelang.h", 7370, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(({        (_conditional_value_X4=(1));        _conditional_value_X4;        })) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count((char*)come_memdup(it, "/usr/local/include/comelang.h", 7373, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else if(({        (_conditional_value_X5=(1));        _conditional_value_X5;        })) {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char*)come_increment_ref_count(it),(struct sVar*)come_increment_ref_count(sVar_clone(it2)));
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__48 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__48, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__48;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
int i_2;
    for(    ({    (_conditional_value_X0=(i=0));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(i<self->size));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(i++));    _conditional_value_X2;    })    ){
        if(({        (_conditional_value_X3=(self->item_existance[i]));        _conditional_value_X3;        })) {
            if(({            (_conditional_value_X4=(1));            _conditional_value_X4;            })) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_conditional_value_X0=(i_2=0));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(i_2<self->size));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(i_2++));    _conditional_value_X2;    })    ){
        if(({        (_conditional_value_X3=(self->item_existance[i_2]));        _conditional_value_X3;        })) {
            if(({            (_conditional_value_X4=(1));            _conditional_value_X4;            })) {
                (self->keys[i_2] = come_decrement_ref_count(self->keys[i_2], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void sVar_finalize(struct sVar* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mName!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mType!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
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

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value0 = (void*)0;
int i;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
void* __right_value1 = (void*)0;
struct list$1char$ph* __dec_obj6;
struct map$2char$phsVar$ph* __result_obj__11;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 7288, "char**"))));
    __right_value0 = (void*)0;
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value0=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 7289, "struct sVar**"))));
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 7290, "_Bool*"))));
    for(    ({    (_conditional_value_X0=(i=0));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(i<128));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(i++));    _conditional_value_X2;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj6=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 7300, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__11 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__11;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__10;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__10 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__10, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__10;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it;
_Bool _conditional_value_X0;
struct list_item$1char$p* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
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

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
_Bool _conditional_value_X0;
char* result;
char* __result_obj__12;
char* __result_obj__13;
char* result_3;
char* __result_obj__14;
result = (void*)0;
result_3 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__12 = result;
        return __result_obj__12;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_conditional_value_X0=(self->key_list->it));    _conditional_value_X0;    })) {
        __result_obj__13 = self->key_list->it->item;
        return __result_obj__13;
    }
    memset(&result_3,0,sizeof(char*));
    __result_obj__14 = result_3;
    return __result_obj__14;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
_Bool _conditional_value_X0;
char* result;
char* __result_obj__15;
char* __result_obj__16;
char* result_4;
char* __result_obj__17;
result = (void*)0;
result_4 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)||self->key_list->it==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__15 = result;
        return __result_obj__15;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_conditional_value_X0=(self->key_list->it));    _conditional_value_X0;    })) {
        __result_obj__16 = self->key_list->it->item;
        return __result_obj__16;
    }
    memset(&result_4,0,sizeof(char*));
    __result_obj__17 = result_4;
    return __result_obj__17;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash;
unsigned int it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sVar* __result_obj__18;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sVar* __result_obj__19;
struct sVar* __result_obj__20;
struct sVar* __result_obj__21;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                __result_obj__18 = (struct sVar*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__18, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__18;
            }
            it++;
            if(({            (_conditional_value_X3=(it>=self->size));            _conditional_value_X3;            })) {
                it=0;
            }
            else if(({            (_conditional_value_X4=(it==hash));            _conditional_value_X4;            })) {
                __result_obj__19 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__19, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__19;
            }
        }
        else {
            __result_obj__20 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__20, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__20;
        }
    }
    __result_obj__21 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__21, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__21;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
_Bool _conditional_value_X0;
unsigned int hash;
int it;
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
struct map$2char$phsVar$ph* __result_obj__33;
    if(({    (_conditional_value_X0=(self->len*2>=self->size));    _conditional_value_X0;    })) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                if(({                (_conditional_value_X3=(1));                _conditional_value_X3;                })) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_conditional_value_X4=(1));                _conditional_value_X4;                })) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sVar*)come_increment_ref_count(item);
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
    for(    ({    (_conditional_value_X0=(it2=list$1char$ph_begin(self->key_list)));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(!list$1char$ph_end(self->key_list)));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(it2=list$1char$ph_next(self->key_list)));    _conditional_value_X2;    })    ){
        if(({        (_conditional_value_X3=(string_equals(it2,key)));        _conditional_value_X3;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_conditional_value_X0=(!same_key_exist));    _conditional_value_X0;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__33 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__33;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size;
void* __right_value0 = (void*)0;
char** keys;
struct sVar** items;
_Bool* item_existance;
int len;
char* it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sVar* default_value;
struct sVar* it2;
unsigned int hash;
int n;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
_Bool _conditional_value_X5;
_Bool _conditional_value_X6;
struct sVar* default_value_5;
default_value = (void*)0;
default_value_5 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value0=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 7568, "char**"))));
    __right_value0 = (void*)0;
    items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value0=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size)), "/usr/local/include/comelang.h", 7569, "struct sVar**"))));
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 7570, "_Bool*"))));
    len=0;
    for(    ({    (_conditional_value_X0=(it=map$2char$phsVar$ph_begin(self)));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(!map$2char$phsVar$ph_end(self)));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(it=map$2char$phsVar$ph_next(self)));    _conditional_value_X2;    })    ){
        memset(&default_value,0,sizeof(struct sVar*));
        __right_value0 = (void*)0;
        it2=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value))));
        come_call_finalizer(sVar_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
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
                items[n]=((struct sVar*)(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar*)come_increment_ref_count(default_value_5))));
                come_call_finalizer(sVar_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sVar_finalize, default_value_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
struct list$1char$ph* __result_obj__25;
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
    __result_obj__25 = self;
    return __result_obj__25;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
_Bool _conditional_value_X0;
int tmp;
struct list$1char$ph* __result_obj__22;
_Bool _conditional_value_X1;
struct list_item$1char$ph* it;
int i;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
struct list_item$1char$ph* prev_it;
_Bool _conditional_value_X4;
_Bool _conditional_value_X5;
struct list_item$1char$ph* it_6;
int i_7;
_Bool _conditional_value_X6;
_Bool _conditional_value_X7;
_Bool _conditional_value_X8;
struct list_item$1char$ph* prev_it_8;
struct list_item$1char$ph* it_9;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_10;
_Bool _conditional_value_X9;
_Bool _conditional_value_X10;
_Bool _conditional_value_X11;
_Bool _conditional_value_X12;
struct list_item$1char$ph* prev_it_11;
_Bool _conditional_value_X13;
_Bool _conditional_value_X14;
struct list$1char$ph* __result_obj__24;
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
        __result_obj__22 = self;
        return __result_obj__22;
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
        it_6=self->head;
        i_7=0;
        while(({        (_conditional_value_X6=(it_6!=((void*)0)));        _conditional_value_X6;        })) {
            if(({            (_conditional_value_X7=(i_7==head));            _conditional_value_X7;            })) {
                self->tail=it_6->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_conditional_value_X8=(i_7>=head));            _conditional_value_X8;            })) {
                prev_it_8=it_6;
                it_6=it_6->next;
                i_7++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_6=it_6->next;
                i_7++;
            }
        }
    }
    else {
        it_9=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_10=0;
        while(({        (_conditional_value_X9=(it_9!=((void*)0)));        _conditional_value_X9;        })) {
            if(({            (_conditional_value_X10=(i_10==head));            _conditional_value_X10;            })) {
                head_prev_it=it_9->prev;
            }
            if(({            (_conditional_value_X11=(i_10==tail));            _conditional_value_X11;            })) {
                tail_it=it_9;
            }
            if(({            (_conditional_value_X12=(i_10>=head&&i_10<tail));            _conditional_value_X12;            })) {
                prev_it_11=it_9;
                it_9=it_9->next;
                i_10++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_9=it_9->next;
                i_10++;
            }
        }
        if(({        (_conditional_value_X13=(head_prev_it!=((void*)0)));        _conditional_value_X13;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_conditional_value_X14=(tail_it!=((void*)0)));        _conditional_value_X14;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__24 = self;
    return __result_obj__24;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _conditional_value_X0;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__23;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__23 = self;
    return __result_obj__23;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
_Bool _conditional_value_X0;
char* result;
char* __result_obj__26;
char* __result_obj__27;
char* result_12;
char* __result_obj__28;
result = (void*)0;
result_12 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__26 = result;
        return __result_obj__26;
    }
    self->it=self->head;
    if(({    (_conditional_value_X0=(self->it));    _conditional_value_X0;    })) {
        __result_obj__27 = self->it->item;
        return __result_obj__27;
    }
    memset(&result_12,0,sizeof(char*));
    __result_obj__28 = result_12;
    return __result_obj__28;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
_Bool _conditional_value_X0;
char* result;
char* __result_obj__29;
char* __result_obj__30;
char* result_13;
char* __result_obj__31;
result = (void*)0;
result_13 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)||self->it==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__29 = result;
        return __result_obj__29;
    }
    self->it=self->it->next;
    if(({    (_conditional_value_X0=(self->it));    _conditional_value_X0;    })) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_13,0,sizeof(char*));
    __result_obj__31 = result_13;
    return __result_obj__31;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj8;
_Bool _conditional_value_X1;
struct list_item$1char$ph* litem_14;
char* __dec_obj9;
struct list_item$1char$ph* litem_15;
char* __dec_obj10;
struct list$1char$ph* __result_obj__32;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6461, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj8=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6471, "struct list_item$1char$ph*"))));
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        __dec_obj9=litem_14->item,
        litem_14->item=(char*)come_increment_ref_count(item);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6481, "struct list_item$1char$ph*"))));
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        __dec_obj10=litem_15->item,
        litem_15->item=(char*)come_increment_ref_count(item);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
    __result_obj__32 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__32;
}

static struct sVar* sVar_clone(struct sVar* self){
_Bool _conditional_value_X0;
struct sVar* __result_obj__34;
void* __right_value0 = (void*)0;
struct sVar* result;
char* __dec_obj11;
char* __dec_obj12;
struct sType* __dec_obj35;
char* __dec_obj36;
struct sVar* __result_obj__47;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__34 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__34, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__34;
    }
    result=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mName!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mCValueName!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mCValueName,
        result->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mType,
        result->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mGlobal=self->mGlobal;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mNoFree=self->mNoFree;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mComma=self->mComma;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mFunName!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj36=result->mFunName,
        result->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__47 = (struct sVar*)come_increment_ref_count(result);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__47, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__47;
}

static struct sType* sType_clone(struct sType* self){
_Bool _conditional_value_X0;
struct sType* __result_obj__35;
void* __right_value0 = (void*)0;
struct sType* result;
struct sType* __dec_obj13;
struct sType* __dec_obj14;
struct list$1sType$ph* __dec_obj18;
struct sType* __dec_obj19;
struct sNode* __dec_obj20;
struct sNode* __dec_obj21;
char* __dec_obj22;
char* __dec_obj23;
char* __dec_obj24;
char* __dec_obj25;
struct list$1sNode$ph* __dec_obj26;
char* __dec_obj27;
struct list$1sType$ph* __dec_obj28;
struct list$1char$ph* __dec_obj32;
struct sType* __dec_obj33;
struct sNode* __dec_obj34;
struct sType* __result_obj__46;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__35 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__35, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__35;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj19=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj25=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj26=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj27=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj28=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__46 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__46, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__46;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
_Bool _conditional_value_X0;
struct list$1sType$ph* __result_obj__36;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _conditional_value_X1;
struct list$1sType$ph* __result_obj__39;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__36 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__36, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__36;
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
    __result_obj__39 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__39, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__39;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__37;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__37 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__37, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__37;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj15;
_Bool _conditional_value_X1;
struct list_item$1sType$ph* litem_16;
struct sType* __dec_obj16;
struct list_item$1sType$ph* litem_17;
struct sType* __dec_obj17;
struct list$1sType$ph* __result_obj__38;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 6383, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj15=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 6393, "struct list_item$1sType$ph*"))));
        litem_16->prev=self->head;
        litem_16->next=((void*)0);
        __dec_obj16=litem_16->item,
        litem_16->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_16;
        self->head->next=litem_16;
    }
    else {
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 6403, "struct list_item$1sType$ph*"))));
        litem_17->prev=self->tail;
        litem_17->next=((void*)0);
        __dec_obj17=litem_17->item,
        litem_17->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_17;
        self->tail=litem_17;
    }
    self->len++;
    __result_obj__38 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__38;
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

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
_Bool _conditional_value_X0;
struct list$1sNode$ph* __result_obj__40;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _conditional_value_X1;
struct list$1sNode$ph* __result_obj__41;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__40 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__40, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__40;
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
    __result_obj__41 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__41, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__41;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
_Bool _conditional_value_X0;
struct list$1char$ph* __result_obj__42;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _conditional_value_X1;
struct list$1char$ph* __result_obj__45;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__42 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__42, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__42;
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
    __result_obj__45 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__45, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__45;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__43;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__43 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__43, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__43;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj29;
_Bool _conditional_value_X1;
struct list_item$1char$ph* litem_18;
char* __dec_obj30;
struct list_item$1char$ph* litem_19;
char* __dec_obj31;
struct list$1char$ph* __result_obj__44;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6383, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj29=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6393, "struct list_item$1char$ph*"))));
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        __dec_obj30=litem_18->item,
        litem_18->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        __right_value0 = (void*)0;
        litem_19=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6403, "struct list_item$1char$ph*"))));
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        __dec_obj31=litem_19->item,
        litem_19->item=(char*)come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_19;
        self->tail=litem_19;
    }
    self->len++;
    __result_obj__44 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__44;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
int i_20;
    for(    ({    (_conditional_value_X0=(i=0));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(i<self->size));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(i++));    _conditional_value_X2;    })    ){
        if(({        (_conditional_value_X3=(self->item_existance[i]));        _conditional_value_X3;        })) {
            if(({            (_conditional_value_X4=(1));            _conditional_value_X4;            })) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_conditional_value_X0=(i_20=0));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(i_20<self->size));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(i_20++));    _conditional_value_X2;    })    ){
        if(({        (_conditional_value_X3=(self->item_existance[i_20]));        _conditional_value_X3;        })) {
            if(({            (_conditional_value_X4=(1));            _conditional_value_X4;            })) {
                (self->keys[i_20] = come_decrement_ref_count(self->keys[i_20], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void sBlock_finalize(struct sBlock* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
_Bool _conditional_value_X0;
struct list$1sBlock$ph* __result_obj__51;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sBlock$ph* result;
struct list_item$1sBlock$ph* it;
_Bool _conditional_value_X1;
struct list$1sBlock$ph* __result_obj__54;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__51 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__51, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__51;
    }
    result=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 6364, "struct list$1sBlock$ph*"))));
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(1));        _conditional_value_X1;        })) {
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock*)come_increment_ref_count(sBlock_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock*)come_increment_ref_count(sBlock_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__54 = (struct list$1sBlock$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__54, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__54;
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it;
_Bool _conditional_value_X0;
struct list_item$1sBlock$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->item!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__52;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__52 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__52, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__52;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1sBlock$ph* litem;
struct sBlock* __dec_obj41;
_Bool _conditional_value_X1;
struct list_item$1sBlock$ph* litem_21;
struct sBlock* __dec_obj42;
struct list_item$1sBlock$ph* litem_22;
struct sBlock* __dec_obj43;
struct list$1sBlock$ph* __result_obj__53;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 6383, "struct list_item$1sBlock$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj41=litem->item,
        litem->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 6393, "struct list_item$1sBlock$ph*"))));
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        __dec_obj42=litem_21->item,
        litem_21->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 6403, "struct list_item$1sBlock$ph*"))));
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        __dec_obj43=litem_22->item,
        litem_22->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result_obj__53 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__53;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it;
_Bool _conditional_value_X0;
struct list_item$1sBlock$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sIfNode_finalize(struct sIfNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mExpressionNode!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mIfBlock!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sBlock_finalize, self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mElifExpressionNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mElifBlocks!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->mElifBlocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mElseBlock!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sBlock_finalize, self->mElseBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
_Bool _conditional_value_X0;
struct list_item$1sNode$ph* it;
int i;
_Bool _conditional_value_X1;
struct sNode* __result_obj__57;
struct sNode* default_value;
struct sNode* __result_obj__58;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(position<0));    _conditional_value_X0;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(position==i));        _conditional_value_X1;        })) {
            __result_obj__57 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__57) ? __result_obj__57 = come_decrement_ref_count(__result_obj__57, ((struct sNode*)__result_obj__57)->finalize, ((struct sNode*)__result_obj__57)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__57;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sNode*));
    __result_obj__58 = (struct sNode*)come_increment_ref_count(default_value);
    ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__58) ? __result_obj__58 = come_decrement_ref_count(__result_obj__58, ((struct sNode*)__result_obj__58)->finalize, ((struct sNode*)__result_obj__58)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__58;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
_Bool _conditional_value_X0;
struct list_item$1sNode$ph* it;
int i;
_Bool _conditional_value_X1;
struct sNode* __result_obj__59;
struct sNode* default_value;
struct sNode* __result_obj__60;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(position<0));    _conditional_value_X0;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(position==i));        _conditional_value_X1;        })) {
            __result_obj__59 = (struct sNode*)come_increment_ref_count(it->item);
            ((__result_obj__59) ? __result_obj__59 = come_decrement_ref_count(__result_obj__59, ((struct sNode*)__result_obj__59)->finalize, ((struct sNode*)__result_obj__59)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__59;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sNode*));
    __result_obj__60 = (struct sNode*)come_increment_ref_count(default_value);
    ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__60) ? __result_obj__60 = come_decrement_ref_count(__result_obj__60, ((struct sNode*)__result_obj__60)->finalize, ((struct sNode*)__result_obj__60)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__60;
}

static void CVALUE_finalize(struct CVALUE* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->c_value!=((void*)0)));    _conditional_value_X0;    })) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)));    _conditional_value_X0;    })) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)));    _conditional_value_X0;    })) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
_Bool _conditional_value_X0;
struct list_item$1sBlock$ph* it;
int i;
_Bool _conditional_value_X1;
struct sBlock* __result_obj__62;
struct sBlock* default_value;
struct sBlock* __result_obj__63;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(position<0));    _conditional_value_X0;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(position==i));        _conditional_value_X1;        })) {
            __result_obj__62 = (struct sBlock*)come_increment_ref_count(it->item);
            come_call_finalizer(sBlock_finalize, __result_obj__62, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__62;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sBlock*));
    __result_obj__63 = (struct sBlock*)come_increment_ref_count(default_value);
    come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__63, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__63;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
_Bool _conditional_value_X0;
struct list_item$1sBlock$ph* it;
int i;
_Bool _conditional_value_X1;
struct sBlock* __result_obj__64;
struct sBlock* default_value;
struct sBlock* __result_obj__65;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(position<0));    _conditional_value_X0;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(position==i));        _conditional_value_X1;        })) {
            __result_obj__64 = (struct sBlock*)come_increment_ref_count(it->item);
            come_call_finalizer(sBlock_finalize, __result_obj__64, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__64;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sBlock*));
    __result_obj__65 = (struct sBlock*)come_increment_ref_count(default_value);
    come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__65, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__65;
}

struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj47;
struct sNode* __dec_obj48;
struct sMatchNode* __result_obj__67;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj47=self->it_node,
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node));
    (__dec_obj47 ? __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0, (void*)0) :0);
    __right_value0 = (void*)0;
    __dec_obj48=self->match_node,
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node));
    (__dec_obj48 ? __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__67 = (struct sMatchNode*)come_increment_ref_count(self);
    come_call_finalizer(sMatchNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sMatchNode_finalize, __result_obj__67, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__67;
}

_Bool sMatchNode_no_mutex(struct sMatchNode* self){
    return (_Bool)1;
}

_Bool sMatchNode_terminated(struct sMatchNode* self){
    return (_Bool)1;
}

char* sMatchNode_kind(struct sMatchNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__68;
    __result_obj__68 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sMatch"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__68 = come_decrement_ref_count(__result_obj__68, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__68;
}

_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info){
struct sNode* it_node;
struct sNode* match_node;
_Bool Value;
_Bool _conditional_value_X0;
_Bool __result_obj__69;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
_Bool Value_25;
_Bool __result_obj__70;
_Bool __result_obj__71;
    it_node=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node=(struct sNode*)come_increment_ref_count(self->match_node);
    Value=node_compile(it_node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        __result_obj__69 = (_Bool)0;
        ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__69;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value->c_value);
    Value_25=node_compile(match_node,info);
    if(({    (_conditional_value_X0=(!Value_25));    _conditional_value_X0;    })) {
        __result_obj__70 = (_Bool)0;
        ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__70;
    }
    else {
    }
    __result_obj__71 = (_Bool)1;
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__71;
}

static void sMatchNode_finalize(struct sMatchNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->it_node!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->it_node) ? self->it_node = come_decrement_ref_count(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->match_node!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->match_node) ? self->match_node = come_decrement_ref_count(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj49;
struct sNode* __dec_obj50;
struct sIfMethodNode* __result_obj__72;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj49=self->it_node,
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node));
    (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0, (void*)0) :0);
    __right_value0 = (void*)0;
    __dec_obj50=self->match_node,
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node));
    (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__72 = (struct sIfMethodNode*)come_increment_ref_count(self);
    come_call_finalizer(sIfMethodNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __result_obj__72, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__72;
}

_Bool sIfMethodNode_no_mutex(struct sIfMethodNode* self){
    return (_Bool)1;
}

_Bool sIfMethodNode_terminated(struct sIfMethodNode* self){
    return (_Bool)1;
}

char* sIfMethodNode_kind(struct sIfMethodNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__73;
    __result_obj__73 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sMatch"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__73 = come_decrement_ref_count(__result_obj__73, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__73;
}

_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info){
struct sNode* it_node;
struct sNode* match_node;
_Bool Value;
_Bool _conditional_value_X0;
_Bool __result_obj__74;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
_Bool Value_26;
_Bool __result_obj__75;
_Bool __result_obj__76;
    it_node=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node=(struct sNode*)come_increment_ref_count(self->match_node);
    Value=node_compile(it_node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        __result_obj__74 = (_Bool)0;
        ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__74;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value->c_value);
    Value_26=node_compile(match_node,info);
    if(({    (_conditional_value_X0=(!Value_26));    _conditional_value_X0;    })) {
        __result_obj__75 = (_Bool)0;
        ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__75;
    }
    else {
    }
    __result_obj__76 = (_Bool)1;
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__76;
}

static void sIfMethodNode_finalize(struct sIfMethodNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->it_node!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->it_node) ? self->it_node = come_decrement_ref_count(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->match_node!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->match_node) ? self->match_node = come_decrement_ref_count(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj51;
struct sBlock* __dec_obj52;
struct sOrStatmentNode* __result_obj__77;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj51=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    (__dec_obj51 ? __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0, (void*)0) :0);
    __right_value0 = (void*)0;
    __dec_obj52=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer(sBlock_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__77 = (struct sOrStatmentNode*)come_increment_ref_count(self);
    come_call_finalizer(sOrStatmentNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sOrStatmentNode_finalize, __result_obj__77, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__77;
}

_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self){
    return (_Bool)1;
}

_Bool sOrStatmentNode_no_mutex(struct sOrStatmentNode* self){
    return (_Bool)1;
}

char* sOrStatmentNode_kind(struct sOrStatmentNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__78;
    __result_obj__78 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sOrStatmentNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__78;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
struct sNode* expression_node;
_Bool Value;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct CVALUE* conditional_value;
struct sBlock* if_block;
_Bool __result_obj__79;
    expression_node=self->mExpressionNode;
    add_come_code(info,"if(!({");
    Value=node_conditional_compile(expression_node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        return (_Bool)0;
    }
    else {
    }
    conditional_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    transpile_conditional_with_free_right_object_value((struct CVALUE*)come_increment_ref_count(conditional_value),info);
    add_come_code(info,"})) {\n");
    if_block=self->mIfBlock;
    transpile_block(if_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result_obj__79 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, conditional_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__79;
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mExpressionNode!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mIfBlock!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sBlock_finalize, self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj53;
struct sBlock* __dec_obj54;
struct sAndStatmentNode* __result_obj__80;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj53=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0, (void*)0) :0);
    __right_value0 = (void*)0;
    __dec_obj54=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer(sBlock_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__80 = (struct sAndStatmentNode*)come_increment_ref_count(self);
    come_call_finalizer(sAndStatmentNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sAndStatmentNode_finalize, __result_obj__80, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__80;
}

_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self){
    return (_Bool)1;
}

_Bool sAndStatmentNode_no_mutex(struct sAndStatmentNode* self){
    return (_Bool)1;
}

char* sAndStatmentNode_kind(struct sAndStatmentNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__81;
    __result_obj__81 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAndStatmentNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__81;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
struct sNode* expression_node;
_Bool Value;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct CVALUE* conditional_value;
struct sBlock* if_block;
_Bool __result_obj__82;
    expression_node=self->mExpressionNode;
    add_come_code(info,"if(({");
    Value=node_conditional_compile(expression_node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        return (_Bool)0;
    }
    else {
    }
    conditional_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    transpile_conditional_with_free_right_object_value((struct CVALUE*)come_increment_ref_count(conditional_value),info);
    add_come_code(info,"})) {\n");
    if_block=self->mIfBlock;
    transpile_block(if_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result_obj__82 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, conditional_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__82;
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mExpressionNode!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mIfBlock!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sBlock_finalize, self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
char* sname;
int sline;
int sline_real;
struct sNode* expression_node;
struct sBlock* if_block;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes;
struct list$1sBlock$ph* elif_blocks;
int elif_num;
struct sBlock* else_block;
_Bool _conditional_value_X1;
char* saved_p;
int saved_sline;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
char* buf_27;
_Bool _conditional_value_X4;
int sline_real_28;
_Bool _conditional_value_X5;
struct sNode* expression_node_29;
struct sBlock* elif_block;
struct sBlock* __dec_obj61;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* __right_value2 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__87;
struct sNode* __result_obj__88;
    if(({    (_conditional_value_X0=(charp_operator_equals(buf,"if")));    _conditional_value_X0;    })) {
        sname=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 299, "char*"));
        sline=info->sline;
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        __right_value0 = (void*)0;
        expression_node=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        if_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        __right_value0 = (void*)0;
        elif_expression_nodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 323, "struct list$1sNode$ph*"))));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        elif_blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 325, "struct list$1sBlock$ph*"))));
        elif_num=0;
        else_block=((void*)0);
        while(({        (_conditional_value_X1=(1));        _conditional_value_X1;        })) {
            saved_p=info->p;
            saved_sline=info->sline;
            parse_sharp_v5(info);
            if(({            (_conditional_value_X2=(*info->p==59));            _conditional_value_X2;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(({            (_conditional_value_X3=(!(xisalpha(*info->p)||*info->p==95)));            _conditional_value_X3;            })) {
                break;
            }
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            buf_27=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            if(({            (_conditional_value_X4=(string_operator_equals(buf_27,"else")));            _conditional_value_X4;            })) {
                sline_real_28=info->sline_real;
                info->sline_real=info->sline;
                if(({                (_conditional_value_X5=(parsecmp("if",info)));                _conditional_value_X5;                })) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    __right_value0 = (void*)0;
                    expression_node_29=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_push_back(elif_expression_nodes,(struct sNode*)come_increment_ref_count(expression_node_29));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    __right_value0 = (void*)0;
                    elif_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sBlock$ph_push_back(elif_blocks,(struct sBlock*)come_increment_ref_count(elif_block));
                    elif_num++;
                    ((expression_node_29) ? expression_node_29 = come_decrement_ref_count(expression_node_29, ((struct sNode*)expression_node_29)->finalize, ((struct sNode*)expression_node_29)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(sBlock_finalize, elif_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj61=else_block,
                    else_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer(sBlock_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (buf_27 = come_decrement_ref_count(buf_27, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                info->sline_real=sline_real_28;
            }
            else {
                info->p=saved_p;
                info->sline=saved_sline;
                (buf_27 = come_decrement_ref_count(buf_27, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (buf_27 = come_decrement_ref_count(buf_27, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 400, "struct sNode");
        _inf_obj_value1=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value1=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 400, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(expression_node),if_block,elif_expression_nodes,elif_blocks,elif_num,else_block,(_Bool)0,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sIfNode_finalize;
        _inf_value1->clone=(void*)sIfNode_clone;
        _inf_value1->compile=(void*)sIfNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sIfNode_terminated;
        _inf_value1->kind=(void*)sIfNode_kind;
        _inf_value1->no_mutex=(void*)sIfNode_no_mutex;
        result=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer(sIfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->sline_real=sline_real;
        __result_obj__87 = (struct sNode*)come_increment_ref_count(result);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        ((__result_obj__87) ? __result_obj__87 = come_decrement_ref_count(__result_obj__87, ((struct sNode*)__result_obj__87)->finalize, ((struct sNode*)__result_obj__87)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__87;
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
        ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __right_value0 = (void*)0;
    __result_obj__88 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v7(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__88) ? __result_obj__88 = come_decrement_ref_count(__result_obj__88, ((struct sNode*)__result_obj__88)->finalize, ((struct sNode*)__result_obj__88)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__88;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj55;
_Bool _conditional_value_X1;
struct list_item$1sNode$ph* litem_30;
struct sNode* __dec_obj56;
struct list_item$1sNode$ph* litem_31;
struct sNode* __dec_obj57;
struct list$1sNode$ph* __result_obj__83;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6461, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj55=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_30=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6471, "struct list_item$1sNode$ph*"))));
        litem_30->prev=self->head;
        litem_30->next=((void*)0);
        __dec_obj56=litem_30->item,
        litem_30->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_30;
        self->head->next=litem_30;
    }
    else {
        __right_value0 = (void*)0;
        litem_31=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6481, "struct list_item$1sNode$ph*"))));
        litem_31->prev=self->tail;
        litem_31->next=((void*)0);
        __dec_obj57=litem_31->item,
        litem_31->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_31;
        self->tail=litem_31;
    }
    self->len++;
    __result_obj__83 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__83;
}

static struct list$1sBlock$ph* list$1sBlock$ph_push_back(struct list$1sBlock$ph* self, struct sBlock* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1sBlock$ph* litem;
struct sBlock* __dec_obj58;
_Bool _conditional_value_X1;
struct list_item$1sBlock$ph* litem_32;
struct sBlock* __dec_obj59;
struct list_item$1sBlock$ph* litem_33;
struct sBlock* __dec_obj60;
struct list$1sBlock$ph* __result_obj__84;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 6461, "struct list_item$1sBlock$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj58=litem->item,
        litem->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_32=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 6471, "struct list_item$1sBlock$ph*"))));
        litem_32->prev=self->head;
        litem_32->next=((void*)0);
        __dec_obj59=litem_32->item,
        litem_32->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_32;
        self->head->next=litem_32;
    }
    else {
        __right_value0 = (void*)0;
        litem_33=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 6481, "struct list_item$1sBlock$ph*"))));
        litem_33->prev=self->tail;
        litem_33->next=((void*)0);
        __dec_obj60=litem_33->item,
        litem_33->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_33;
        self->tail=litem_33;
    }
    self->len++;
    __result_obj__84 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__84;
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
_Bool _conditional_value_X0;
struct sIfNode* __result_obj__85;
void* __right_value0 = (void*)0;
struct sIfNode* result;
char* __dec_obj62;
struct sNode* __dec_obj63;
struct sBlock* __dec_obj64;
struct list$1sNode$ph* __dec_obj65;
struct list$1sBlock$ph* __dec_obj66;
struct sBlock* __dec_obj67;
struct sIfNode* __result_obj__86;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__85 = (void*)0;
        return __result_obj__85;
    }
    result=(struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "struct sIfNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj62=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIfNode_clone", 5, "char*"));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mExpressionNode!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj63=result->mExpressionNode,
        result->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mIfBlock!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj64=result->mIfBlock,
        result->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj65=result->mElifExpressionNodes,
        result->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mElifExpressionNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mElifBlocks!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj66=result->mElifBlocks,
        result->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->mElifBlocks));
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mElifNum=self->mElifNum;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mGuard=self->mGuard;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mElseBlock!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj67=result->mElseBlock,
        result->mElseBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mElseBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__86 = result;
    come_call_finalizer(sIfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__86;
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __right_value0 = (void*)0;
char* sname;
int sline;
struct sBlock* if_block;
void* __right_value1 = (void*)0;
struct sNode* _inf_value2;
struct sOrStatmentNode* _inf_obj_value2;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__91;
    sname=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 411, "char*"));
    sline=info->sline;
    parse_sharp_v5(info);
    __right_value0 = (void*)0;
    if_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 418, "struct sNode");
    _inf_obj_value2=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(__right_value1=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc_v2(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 418, "struct sOrStatmentNode*")),(struct sNode*)come_increment_ref_count(expression_node),if_block,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value2->clone=(void*)sOrStatmentNode_clone;
    _inf_value2->compile=(void*)sOrStatmentNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value2->kind=(void*)sOrStatmentNode_kind;
    _inf_value2->no_mutex=(void*)sOrStatmentNode_no_mutex;
    __result_obj__91 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sOrStatmentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__91) ? __result_obj__91 = come_decrement_ref_count(__result_obj__91, ((struct sNode*)__result_obj__91)->finalize, ((struct sNode*)__result_obj__91)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__91;
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
_Bool _conditional_value_X0;
struct sOrStatmentNode* __result_obj__89;
void* __right_value0 = (void*)0;
struct sOrStatmentNode* result;
char* __dec_obj68;
struct sNode* __dec_obj69;
struct sBlock* __dec_obj70;
struct sOrStatmentNode* __result_obj__90;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__89 = (void*)0;
        return __result_obj__89;
    }
    result=(struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc_v2(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "struct sOrStatmentNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj68=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOrStatmentNode_clone", 5, "char*"));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mExpressionNode!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj69=result->mExpressionNode,
        result->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mIfBlock!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj70=result->mIfBlock,
        result->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__90 = result;
    come_call_finalizer(sOrStatmentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__90;
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __right_value0 = (void*)0;
char* sname;
int sline;
struct sBlock* if_block;
void* __right_value1 = (void*)0;
struct sNode* _inf_value3;
struct sAndStatmentNode* _inf_obj_value3;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__94;
    sname=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 423, "char*"));
    sline=info->sline;
    parse_sharp_v5(info);
    __right_value0 = (void*)0;
    if_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 430, "struct sNode");
    _inf_obj_value3=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(__right_value1=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc_v2(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 430, "struct sAndStatmentNode*")),(struct sNode*)come_increment_ref_count(expression_node),if_block,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value3->clone=(void*)sAndStatmentNode_clone;
    _inf_value3->compile=(void*)sAndStatmentNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value3->kind=(void*)sAndStatmentNode_kind;
    _inf_value3->no_mutex=(void*)sAndStatmentNode_no_mutex;
    __result_obj__94 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sAndStatmentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__94) ? __result_obj__94 = come_decrement_ref_count(__result_obj__94, ((struct sNode*)__result_obj__94)->finalize, ((struct sNode*)__result_obj__94)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__94;
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
_Bool _conditional_value_X0;
struct sAndStatmentNode* __result_obj__92;
void* __right_value0 = (void*)0;
struct sAndStatmentNode* result;
char* __dec_obj71;
struct sNode* __dec_obj72;
struct sBlock* __dec_obj73;
struct sAndStatmentNode* __result_obj__93;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__92 = (void*)0;
        return __result_obj__92;
    }
    result=(struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc_v2(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "struct sAndStatmentNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj71=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAndStatmentNode_clone", 5, "char*"));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mExpressionNode!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj72=result->mExpressionNode,
        result->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mIfBlock!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj73=result->mIfBlock,
        result->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__93 = result;
    come_call_finalizer(sAndStatmentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__93;
}

struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info){
void* __right_value0 = (void*)0;
char* sname;
int sline;
void* __right_value1 = (void*)0;
struct sNode* it_node;
struct sNode* conditional_value;
struct sBlock* if_block;
struct list$1sNode$ph* elif_expression_nodes;
struct list$1sBlock$ph* elif_blocks;
int elif_num;
struct sBlock* else_block;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
struct sBlock* __dec_obj74;
struct sNode* conditional_value_34;
struct sBlock* elif_block;
_Bool _conditional_value_X2;
struct sBlock* __dec_obj75;
void* __right_value2 = (void*)0;
struct sNode* _inf_value4;
struct sIfNode* _inf_obj_value4;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct sNode* _inf_value5;
struct sMatchNode* _inf_obj_value5;
void* __right_value5 = (void*)0;
struct sNode* __result_obj__97;
    sname=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 435, "char*"));
    sline=info->sline;
    expected_next_character(123,info);
    __right_value0 = (void*)0;
    it_node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    expected_next_character(40,info);
    __right_value0 = (void*)0;
    conditional_value=(struct sNode*)come_increment_ref_count(expression_v13(info));
    expected_next_character(41,info);
    parse_sharp_v5(info);
    __right_value0 = (void*)0;
    if_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_expression_nodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 457, "struct list$1sNode$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 458, "struct list$1sBlock$ph*"))));
    elif_num=0;
    else_block=((void*)0);
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        parse_sharp_v5(info);
        if(({        (_conditional_value_X1=(strncmp(info->p,"else",strlen("else"))==0));        _conditional_value_X1;        })) {
            info->p+=strlen("else");
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj74=else_block,
            else_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            come_call_finalizer(sBlock_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            expected_next_character(40,info);
            __right_value0 = (void*)0;
            conditional_value_34=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_add(elif_expression_nodes,(struct sNode*)come_increment_ref_count(conditional_value_34));
            expected_next_character(41,info);
            parse_sharp_v5(info);
            __right_value0 = (void*)0;
            elif_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            list$1sBlock$ph_add(elif_blocks,(struct sBlock*)come_increment_ref_count(elif_block));
            elif_num++;
            ((conditional_value_34) ? conditional_value_34 = come_decrement_ref_count(conditional_value_34, ((struct sNode*)conditional_value_34)->finalize, ((struct sNode*)conditional_value_34)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sBlock_finalize, elif_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(({        (_conditional_value_X2=(*info->p==125));        _conditional_value_X2;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    if(({    (_conditional_value_X0=(else_block==((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj75=else_block,
        else_block=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 508, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        else_block->mOmitSemicolon=(_Bool)1;
        __right_value0 = (void*)0;
        list$1sNode$ph_push_back(else_block->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 514, "struct sNode");
    _inf_obj_value4=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value2=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 514, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_value),if_block,elif_expression_nodes,elif_blocks,elif_num,else_block,(_Bool)0,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sIfNode_finalize;
    _inf_value4->clone=(void*)sIfNode_clone;
    _inf_value4->compile=(void*)sIfNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sIfNode_terminated;
    _inf_value4->kind=(void*)sIfNode_kind;
    _inf_value4->no_mutex=(void*)sIfNode_no_mutex;
    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 514, "struct sNode");
    _inf_obj_value5=(struct sMatchNode*)come_increment_ref_count(((struct sMatchNode*)(__right_value4=sMatchNode_initialize((struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc_v2(1, sizeof(struct sMatchNode)*(1), "08if.c", 514, "struct sMatchNode*")),(struct sNode*)come_increment_ref_count(it_node),(struct sNode*)come_increment_ref_count(_inf_value4),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMatchNode_finalize;
    _inf_value5->clone=(void*)sMatchNode_clone;
    _inf_value5->compile=(void*)sMatchNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMatchNode_terminated;
    _inf_value5->kind=(void*)sMatchNode_kind;
    _inf_value5->no_mutex=(void*)sMatchNode_no_mutex;
    __result_obj__97 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value5=_inf_value5)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((conditional_value) ? conditional_value = come_decrement_ref_count(conditional_value, ((struct sNode*)conditional_value)->finalize, ((struct sNode*)conditional_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sIfNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sMatchNode_finalize, __right_value4, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value5) ? __right_value5 = come_decrement_ref_count(__right_value5, ((struct sNode*)__right_value5)->finalize, ((struct sNode*)__right_value5)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__97) ? __result_obj__97 = come_decrement_ref_count(__result_obj__97, ((struct sNode*)__result_obj__97)->finalize, ((struct sNode*)__result_obj__97)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__97;
}

static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self){
_Bool _conditional_value_X0;
struct sMatchNode* __result_obj__95;
void* __right_value0 = (void*)0;
struct sMatchNode* result;
char* __dec_obj76;
struct sNode* __dec_obj77;
struct sNode* __dec_obj78;
struct sMatchNode* __result_obj__96;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__95 = (void*)0;
        return __result_obj__95;
    }
    result=(struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc_v2(1, sizeof(struct sMatchNode)*(1), "sMatchNode_clone", 3, "struct sMatchNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj76=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMatchNode_clone", 5, "char*"));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->it_node!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj77=result->it_node,
        result->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node));
        (__dec_obj77 ? __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->match_node!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj78=result->match_node,
        result->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node));
        (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__96 = result;
    come_call_finalizer(sMatchNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__96;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value0 = (void*)0;
char* sname;
int sline;
void* __right_value1 = (void*)0;
struct sNode* it_node;
struct sNode* conditional_node;
struct sBlock* if_block;
struct list$1sNode$ph* elif_expression_nodes;
struct list$1sBlock$ph* elif_blocks;
int elif_num;
struct sBlock* else_block;
_Bool _conditional_value_X0;
char* saved_p;
int saved_sline;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
char* buf;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sNode* expression_node_35;
struct sBlock* elif_block;
struct sBlock* __dec_obj79;
struct sBlock* __dec_obj80;
void* __right_value2 = (void*)0;
struct sNode* _inf_value6;
struct sIfNode* _inf_obj_value6;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct sNode* _inf_value7;
struct sIfMethodNode* _inf_obj_value7;
void* __right_value5 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__100;
    sname=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 519, "char*"));
    sline=info->sline;
    __right_value0 = (void*)0;
    it_node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    __right_value0 = (void*)0;
    conditional_node=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    parse_sharp_v5(info);
    __right_value0 = (void*)0;
    if_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_expression_nodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 536, "struct list$1sNode$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 538, "struct list$1sBlock$ph*"))));
    elif_num=0;
    else_block=((void*)0);
    while(({    (_conditional_value_X0=(1));    _conditional_value_X0;    })) {
        saved_p=info->p;
        saved_sline=info->sline;
        parse_sharp_v5(info);
        if(({        (_conditional_value_X1=(*info->p==59));        _conditional_value_X1;        })) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(({        (_conditional_value_X2=(!(xisalpha(*info->p)||*info->p==95)));        _conditional_value_X2;        })) {
            break;
        }
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        buf=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(({        (_conditional_value_X3=(string_operator_equals(buf,"else")));        _conditional_value_X3;        })) {
            if(({            (_conditional_value_X4=(parsecmp("if",info)));            _conditional_value_X4;            })) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                __right_value0 = (void*)0;
                expression_node_35=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes,(struct sNode*)come_increment_ref_count(expression_node_35));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                __right_value0 = (void*)0;
                elif_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks,(struct sBlock*)come_increment_ref_count(elif_block));
                elif_num++;
                ((expression_node_35) ? expression_node_35 = come_decrement_ref_count(expression_node_35, ((struct sNode*)expression_node_35)->finalize, ((struct sNode*)expression_node_35)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj79=else_block,
                else_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p;
            info->sline=saved_sline;
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(else_block==((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj80=else_block,
        else_block=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 611, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        else_block->mOmitSemicolon=(_Bool)1;
        __right_value0 = (void*)0;
        list$1sNode$ph_push_back(else_block->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 617, "struct sNode");
    _inf_obj_value6=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value2=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 617, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node),if_block,elif_expression_nodes,elif_blocks,elif_num,else_block,(_Bool)0,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sIfNode_finalize;
    _inf_value6->clone=(void*)sIfNode_clone;
    _inf_value6->compile=(void*)sIfNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sIfNode_terminated;
    _inf_value6->kind=(void*)sIfNode_kind;
    _inf_value6->no_mutex=(void*)sIfNode_no_mutex;
    _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 617, "struct sNode");
    _inf_obj_value7=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value4=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 617, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node),(struct sNode*)come_increment_ref_count(_inf_value6),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sIfMethodNode_finalize;
    _inf_value7->clone=(void*)sIfMethodNode_clone;
    _inf_value7->compile=(void*)sIfMethodNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sIfMethodNode_terminated;
    _inf_value7->kind=(void*)sIfMethodNode_kind;
    _inf_value7->no_mutex=(void*)sIfMethodNode_no_mutex;
    result=(struct sNode*)come_increment_ref_count(_inf_value7);
    come_call_finalizer(sIfNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value4, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__100 = (struct sNode*)come_increment_ref_count(result);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((conditional_node) ? conditional_node = come_decrement_ref_count(conditional_node, ((struct sNode*)conditional_node)->finalize, ((struct sNode*)conditional_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__100) ? __result_obj__100 = come_decrement_ref_count(__result_obj__100, ((struct sNode*)__result_obj__100)->finalize, ((struct sNode*)__result_obj__100)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__100;
}

static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self){
_Bool _conditional_value_X0;
struct sIfMethodNode* __result_obj__98;
void* __right_value0 = (void*)0;
struct sIfMethodNode* result;
char* __dec_obj81;
struct sNode* __dec_obj82;
struct sNode* __dec_obj83;
struct sIfMethodNode* __result_obj__99;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__98 = (void*)0;
        return __result_obj__98;
    }
    result=(struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "sIfMethodNode_clone", 3, "struct sIfMethodNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj81=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIfMethodNode_clone", 5, "char*"));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->it_node!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj82=result->it_node,
        result->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node));
        (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->match_node!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj83=result->match_node,
        result->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node));
        (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__99 = result;
    come_call_finalizer(sIfMethodNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__99;
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value0 = (void*)0;
char* sname;
int sline;
void* __right_value1 = (void*)0;
struct sNode* it_node;
struct sNode* conditional_node;
struct sNode* conditional_node2;
struct sBlock* if_block;
struct list$1sNode$ph* elif_expression_nodes;
struct list$1sBlock$ph* elif_blocks;
int elif_num;
struct sBlock* else_block;
_Bool _conditional_value_X0;
char* saved_p;
int saved_sline;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
char* buf;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sNode* expression_node_36;
struct sBlock* elif_block;
struct sBlock* __dec_obj84;
struct sBlock* __dec_obj85;
void* __right_value2 = (void*)0;
struct sNode* _inf_value8;
struct sIfNode* _inf_obj_value8;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct sNode* _inf_value9;
struct sIfMethodNode* _inf_obj_value9;
void* __right_value5 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__101;
    sname=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 624, "char*"));
    sline=info->sline;
    __right_value0 = (void*)0;
    it_node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    __right_value0 = (void*)0;
    conditional_node=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    __right_value0 = (void*)0;
    conditional_node2=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node),info));
    parse_sharp_v5(info);
    __right_value0 = (void*)0;
    if_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_expression_nodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 642, "struct list$1sNode$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 644, "struct list$1sBlock$ph*"))));
    elif_num=0;
    else_block=((void*)0);
    while(({    (_conditional_value_X0=(1));    _conditional_value_X0;    })) {
        saved_p=info->p;
        saved_sline=info->sline;
        parse_sharp_v5(info);
        if(({        (_conditional_value_X1=(*info->p==59));        _conditional_value_X1;        })) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(({        (_conditional_value_X2=(!(xisalpha(*info->p)||*info->p==95)));        _conditional_value_X2;        })) {
            break;
        }
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        buf=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(({        (_conditional_value_X3=(string_operator_equals(buf,"else")));        _conditional_value_X3;        })) {
            if(({            (_conditional_value_X4=(parsecmp("if",info)));            _conditional_value_X4;            })) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                __right_value0 = (void*)0;
                expression_node_36=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes,(struct sNode*)come_increment_ref_count(expression_node_36));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                __right_value0 = (void*)0;
                elif_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks,(struct sBlock*)come_increment_ref_count(elif_block));
                elif_num++;
                ((expression_node_36) ? expression_node_36 = come_decrement_ref_count(expression_node_36, ((struct sNode*)expression_node_36)->finalize, ((struct sNode*)expression_node_36)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj84=else_block,
                else_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p;
            info->sline=saved_sline;
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(else_block==((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj85=else_block,
        else_block=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 717, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        else_block->mOmitSemicolon=(_Bool)1;
        __right_value0 = (void*)0;
        list$1sNode$ph_push_back(else_block->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 723, "struct sNode");
    _inf_obj_value8=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value2=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 723, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2),if_block,elif_expression_nodes,elif_blocks,elif_num,else_block,(_Bool)0,info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sIfNode_finalize;
    _inf_value8->clone=(void*)sIfNode_clone;
    _inf_value8->compile=(void*)sIfNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sIfNode_terminated;
    _inf_value8->kind=(void*)sIfNode_kind;
    _inf_value8->no_mutex=(void*)sIfNode_no_mutex;
    _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 723, "struct sNode");
    _inf_obj_value9=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value4=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 723, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node),(struct sNode*)come_increment_ref_count(_inf_value8),info))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sIfMethodNode_finalize;
    _inf_value9->clone=(void*)sIfMethodNode_clone;
    _inf_value9->compile=(void*)sIfMethodNode_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sIfMethodNode_terminated;
    _inf_value9->kind=(void*)sIfMethodNode_kind;
    _inf_value9->no_mutex=(void*)sIfMethodNode_no_mutex;
    result=(struct sNode*)come_increment_ref_count(_inf_value9);
    come_call_finalizer(sIfNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value4, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__101 = (struct sNode*)come_increment_ref_count(result);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((conditional_node) ? conditional_node = come_decrement_ref_count(conditional_node, ((struct sNode*)conditional_node)->finalize, ((struct sNode*)conditional_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((conditional_node2) ? conditional_node2 = come_decrement_ref_count(conditional_node2, ((struct sNode*)conditional_node2)->finalize, ((struct sNode*)conditional_node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__101) ? __result_obj__101 = come_decrement_ref_count(__result_obj__101, ((struct sNode*)__result_obj__101)->finalize, ((struct sNode*)__result_obj__101)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__101;
}

struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value0 = (void*)0;
char* sname;
int sline;
void* __right_value1 = (void*)0;
struct sNode* it_node;
struct sNode* conditional_node;
void* __right_value2 = (void*)0;
struct sNode* conditional_node2;
struct sBlock* if_block;
struct list$1sNode$ph* elif_expression_nodes;
struct list$1sBlock$ph* elif_blocks;
int elif_num;
struct sBlock* else_block;
_Bool _conditional_value_X0;
char* saved_p;
int saved_sline;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
char* buf;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sNode* expression_node_37;
struct sBlock* elif_block;
struct sBlock* __dec_obj86;
struct sBlock* __dec_obj87;
struct sNode* _inf_value10;
struct sIfNode* _inf_obj_value10;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct sNode* _inf_value11;
struct sIfMethodNode* _inf_obj_value11;
void* __right_value5 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__102;
    sname=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 730, "char*"));
    sline=info->sline;
    __right_value0 = (void*)0;
    it_node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    __right_value0 = (void*)0;
    conditional_node=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    conditional_node2=(struct sNode*)come_increment_ref_count(create_less((struct sNode*)come_increment_ref_count(conditional_node),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(int_to_string(0)),info)),info));
    parse_sharp_v5(info);
    __right_value0 = (void*)0;
    if_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_expression_nodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 748, "struct list$1sNode$ph*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 750, "struct list$1sBlock$ph*"))));
    elif_num=0;
    else_block=((void*)0);
    while(({    (_conditional_value_X0=(1));    _conditional_value_X0;    })) {
        saved_p=info->p;
        saved_sline=info->sline;
        parse_sharp_v5(info);
        if(({        (_conditional_value_X1=(*info->p==59));        _conditional_value_X1;        })) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(({        (_conditional_value_X2=(!(xisalpha(*info->p)||*info->p==95)));        _conditional_value_X2;        })) {
            break;
        }
        parse_sharp_v5(info);
        __right_value0 = (void*)0;
        buf=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(({        (_conditional_value_X3=(string_operator_equals(buf,"else")));        _conditional_value_X3;        })) {
            if(({            (_conditional_value_X4=(parsecmp("if",info)));            _conditional_value_X4;            })) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                __right_value0 = (void*)0;
                expression_node_37=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes,(struct sNode*)come_increment_ref_count(expression_node_37));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                __right_value0 = (void*)0;
                elif_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks,(struct sBlock*)come_increment_ref_count(elif_block));
                elif_num++;
                ((expression_node_37) ? expression_node_37 = come_decrement_ref_count(expression_node_37, ((struct sNode*)expression_node_37)->finalize, ((struct sNode*)expression_node_37)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj86=else_block,
                else_block=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p;
            info->sline=saved_sline;
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(else_block==((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj87=else_block,
        else_block=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 823, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        else_block->mOmitSemicolon=(_Bool)1;
        __right_value0 = (void*)0;
        list$1sNode$ph_push_back(else_block->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 829, "struct sNode");
    _inf_obj_value10=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value2=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 829, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2),if_block,elif_expression_nodes,elif_blocks,elif_num,else_block,(_Bool)0,info))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sIfNode_finalize;
    _inf_value10->clone=(void*)sIfNode_clone;
    _inf_value10->compile=(void*)sIfNode_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sIfNode_terminated;
    _inf_value10->kind=(void*)sIfNode_kind;
    _inf_value10->no_mutex=(void*)sIfNode_no_mutex;
    _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 829, "struct sNode");
    _inf_obj_value11=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value4=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 829, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node),(struct sNode*)come_increment_ref_count(_inf_value10),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sIfMethodNode_finalize;
    _inf_value11->clone=(void*)sIfMethodNode_clone;
    _inf_value11->compile=(void*)sIfMethodNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sIfMethodNode_terminated;
    _inf_value11->kind=(void*)sIfMethodNode_kind;
    _inf_value11->no_mutex=(void*)sIfMethodNode_no_mutex;
    result=(struct sNode*)come_increment_ref_count(_inf_value11);
    come_call_finalizer(sIfNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value4, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__102 = (struct sNode*)come_increment_ref_count(result);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0));
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((conditional_node) ? conditional_node = come_decrement_ref_count(conditional_node, ((struct sNode*)conditional_node)->finalize, ((struct sNode*)conditional_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((conditional_node2) ? conditional_node2 = come_decrement_ref_count(conditional_node2, ((struct sNode*)conditional_node2)->finalize, ((struct sNode*)conditional_node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__102) ? __result_obj__102 = come_decrement_ref_count(__result_obj__102, ((struct sNode*)__result_obj__102)->finalize, ((struct sNode*)__result_obj__102)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__102;
}

