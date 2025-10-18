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
    struct list$1sNode$ph* mMethods;
};

struct list_item$1sClass$p
{
    struct sClass* item;
    struct list_item$1sClass$p* prev;
    struct list_item$1sClass$p* next;
};

struct list$1sClass$p
{
    struct list_item$1sClass$p* head;
    struct list_item$1sClass$p* tail;
    int len;
    struct list_item$1sClass$p* it;
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
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
char* get_none_generics_name(char* class_name);
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
void output_struct(struct sClass* klass, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
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
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
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
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sStructNode_finalize(struct sStructNode* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sInfo* info);
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
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static void sClassNode_finalize(struct sClassNode* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self);
static void list$1sClass$p$p_finalize(struct list$1sClass$p* self);
static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass* item);
static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass* item);
static struct sClass* list$1sClass$p_begin(struct list$1sClass$p* self);
static _Bool list$1sClass$p_end(struct list$1sClass$p* self);
static struct sClass* list$1sClass$p_next(struct list$1sClass$p* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
// uniq global variable
// inline function

// body function
void output_struct(struct sClass* klass, struct sInfo* info){
_Bool _condtional_value_X1;
_Bool _condtional_value_X3;
char* name;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
_Bool existance_generics;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X6;
_Bool _condtional_value_X7;
_Bool _condtional_value_X10;
struct tuple2$2char$phsType$ph* multiple_assign_var1 = (void*)0;
char* name_2=0;
struct sType* type=0;
_Bool _condtional_value_X11;
void* __right_value2 = (void*)0;
_Bool _condtional_value_X38;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
_Bool _condtional_value_X49;
void* __right_value14 = (void*)0;
    if(({    (_condtional_value_X1=(info->no_output_come_code));    _condtional_value_X1;    })) {
        return;
    }
    if(({    (_condtional_value_X3=(list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0));    _condtional_value_X3;    })) {
        return;
    }
    name=(char*)come_increment_ref_count(klass->mName);
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 14, "struct buffer*"))));
    buffer_append_format(buf,"struct %s\n{\n",klass->mName);
    existance_generics=(_Bool)0;
    for(    ({    (_condtional_value_X6=(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved)));    _condtional_value_X6;    });    ({    (_condtional_value_X7=(!list$1tuple2$2char$phsType$ph$ph_end(o2_saved)));    _condtional_value_X7;    });    ({    (_condtional_value_X10=(it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)));    _condtional_value_X10;    })    ){
        multiple_assign_var1=it;
        name_2=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(({        (_condtional_value_X11=(is_contained_generics_class(type,info)));        _condtional_value_X11;        })) {
            existance_generics=(_Bool)1;
        }
        type->mStatic=(_Bool)0;
        buffer_append_str(buf,"    ");
        buffer_append_str(buf,((char*)(__right_value2=make_define_var(type,name_2,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0))));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
        buffer_append_str(buf,";\n");
        (name_2 = come_decrement_ref_count(name_2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(({    (_condtional_value_X38=(klass->mAttribute==((void*)0)));    _condtional_value_X38;    })) {
        buffer_append_str(buf,"};\n");
    }
    else {
        buffer_append_format(buf,"} %s;\n",klass->mAttribute);
    }
    if(({    (_condtional_value_X49=(((struct buffer*)(__right_value5=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char*)(__right_value4=__builtin_string(name))))))==((void*)0)&&!existance_generics));    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(buffer_finalize, __right_value5, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X49;    })) {
        map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name)),(struct buffer*)come_increment_ref_count(buf));
    }
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X2;
    if(({    (_condtional_value_X2=(self==((void*)0)));    _condtional_value_X2;    })) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X4;
struct tuple2$2char$phsType$ph* result;
struct tuple2$2char$phsType$ph* __result_obj__1;
_Bool _condtional_value_X5;
struct tuple2$2char$phsType$ph* __result_obj__2;
struct tuple2$2char$phsType$ph* result_0;
struct tuple2$2char$phsType$ph* __result_obj__3;
result = (void*)0;
result_0 = (void*)0;
    if(({    (_condtional_value_X4=(self==((void*)0)));    _condtional_value_X4;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__1 = result;
        return __result_obj__1;
    }
    self->it=self->head;
    if(({    (_condtional_value_X5=(self->it));    _condtional_value_X5;    })) {
        __result_obj__2 = self->it->item;
        return __result_obj__2;
    }
    memset(&result_0,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__3 = result_0;
    return __result_obj__3;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X8;
struct tuple2$2char$phsType$ph* result;
struct tuple2$2char$phsType$ph* __result_obj__4;
_Bool _condtional_value_X9;
struct tuple2$2char$phsType$ph* __result_obj__5;
struct tuple2$2char$phsType$ph* result_1;
struct tuple2$2char$phsType$ph* __result_obj__6;
result = (void*)0;
result_1 = (void*)0;
    if(({    (_condtional_value_X8=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X8;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__4 = result;
        return __result_obj__4;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X9=(self->it));    _condtional_value_X9;    })) {
        __result_obj__5 = self->it->item;
        return __result_obj__5;
    }
    memset(&result_1,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__6 = result_1;
    return __result_obj__6;
}

static void sType_finalize(struct sType* self){
_Bool _condtional_value_X12;
_Bool _condtional_value_X13;
_Bool _condtional_value_X14;
_Bool _condtional_value_X17;
_Bool _condtional_value_X18;
_Bool _condtional_value_X19;
_Bool _condtional_value_X20;
_Bool _condtional_value_X21;
_Bool _condtional_value_X22;
_Bool _condtional_value_X23;
_Bool _condtional_value_X24;
_Bool _condtional_value_X27;
_Bool _condtional_value_X28;
_Bool _condtional_value_X29;
_Bool _condtional_value_X32;
_Bool _condtional_value_X33;
    if(({    (_condtional_value_X12=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X12;    })) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X13=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X13;    })) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X14=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X14;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X17=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X17;    })) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X18=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X18;    })) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X19=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X19;    })) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_condtional_value_X20=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X20;    })) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X21=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X21;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X22=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X22;    })) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X23=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X23;    })) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X24=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X24;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X27=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X27;    })) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X28=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X28;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X29=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X29;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X32=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X32;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X33=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X33;    })) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X15;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X15=(it!=((void*)0)));    _condtional_value_X15;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
_Bool _condtional_value_X16;
    if(({    (_condtional_value_X16=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X16;    })) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X25;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X25=(it!=((void*)0)));    _condtional_value_X25;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
_Bool _condtional_value_X26;
    if(({    (_condtional_value_X26=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X26;    })) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X30;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X30=(it!=((void*)0)));    _condtional_value_X30;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
_Bool _condtional_value_X31;
    if(({    (_condtional_value_X31=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X31;    })) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _condtional_value_X34;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X34=(it!=((void*)0)));    _condtional_value_X34;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X35;
    if(({    (_condtional_value_X35=(self!=((void*)0)&&self->item!=((void*)0)));    _condtional_value_X35;    })) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X36;
_Bool _condtional_value_X37;
    if(({    (_condtional_value_X36=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X36;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X37=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X37;    })) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X39;
_Bool _condtional_value_X40;
_Bool _condtional_value_X41;
struct buffer* __result_obj__7;
_Bool _condtional_value_X42;
_Bool _condtional_value_X43;
struct buffer* __result_obj__8;
struct buffer* __result_obj__9;
struct buffer* __result_obj__10;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct buffer*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X39=((_Bool)1));    _condtional_value_X39;    })) {
        if(({        (_condtional_value_X40=(self->item_existance[it]));        _condtional_value_X40;        })) {
            if(({            (_condtional_value_X41=(string_equals(self->keys[it],key)));            _condtional_value_X41;            })) {
                __result_obj__7 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__7, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__7;
            }
            it++;
            if(({            (_condtional_value_X42=(it>=self->size));            _condtional_value_X42;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X43=(it==hash));            _condtional_value_X43;            })) {
                __result_obj__8 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__8, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__8;
            }
        }
        else {
            __result_obj__9 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__9, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__9;
        }
    }
    __result_obj__10 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__10, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__10;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X44;
_Bool _condtional_value_X45;
_Bool _condtional_value_X46;
struct buffer* __result_obj__11;
_Bool _condtional_value_X47;
_Bool _condtional_value_X48;
struct buffer* __result_obj__12;
struct buffer* __result_obj__13;
struct buffer* __result_obj__14;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct buffer*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X44=((_Bool)1));    _condtional_value_X44;    })) {
        if(({        (_condtional_value_X45=(self->item_existance[it]));        _condtional_value_X45;        })) {
            if(({            (_condtional_value_X46=(string_equals(self->keys[it],key)));            _condtional_value_X46;            })) {
                __result_obj__11 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__11, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__11;
            }
            it++;
            if(({            (_condtional_value_X47=(it>=self->size));            _condtional_value_X47;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X48=(it==hash));            _condtional_value_X48;            })) {
                __result_obj__12 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__12, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__12;
            }
        }
        else {
            __result_obj__13 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__13, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__13;
        }
    }
    __result_obj__14 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__14, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__14;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item){
_Bool _condtional_value_X50;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X67;
_Bool _condtional_value_X68;
_Bool _condtional_value_X69;
_Bool _condtional_value_X70;
_Bool _condtional_value_X95;
_Bool _condtional_value_X96;
_Bool _condtional_value_X97;
_Bool _condtional_value_X98;
_Bool _condtional_value_X99;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X102;
_Bool _condtional_value_X103;
_Bool _condtional_value_X106;
_Bool _condtional_value_X107;
_Bool _condtional_value_X108;
struct map$2char$phbuffer$ph* __result_obj__36;
    if(({    (_condtional_value_X50=(self->len*10>=self->size));    _condtional_value_X50;    })) {
        map$2char$phbuffer$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X67=((_Bool)1));    _condtional_value_X67;    })) {
        if(({        (_condtional_value_X68=(self->item_existance[it]));        _condtional_value_X68;        })) {
            if(({            (_condtional_value_X69=(string_equals(self->keys[it],key)));            _condtional_value_X69;            })) {
                if(({                (_condtional_value_X70=(1));                _condtional_value_X70;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X95=(1));                _condtional_value_X95;                })) {
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X96=(it>=self->size));            _condtional_value_X96;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X97=(it==hash));            _condtional_value_X97;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X98=(1));            _condtional_value_X98;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X99=(1));            _condtional_value_X99;            })) {
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
    for(    ({    (_condtional_value_X102=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X102;    });    ({    (_condtional_value_X103=(!list$1char$ph_end(self->key_list)));    _condtional_value_X103;    });    ({    (_condtional_value_X106=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X106;    })    ){
        if(({        (_condtional_value_X107=(string_equals(it2,key)));        _condtional_value_X107;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X108=(!same_key_exist));    _condtional_value_X108;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__36 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__36;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self){
int size;
void* __right_value6 = (void*)0;
char** keys;
void* __right_value7 = (void*)0;
struct buffer** items;
void* __right_value8 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X53;
_Bool _condtional_value_X54;
_Bool _condtional_value_X57;
struct buffer* default_value;
void* __right_value9 = (void*)0;
struct buffer* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X63;
_Bool _condtional_value_X64;
_Bool _condtional_value_X65;
_Bool _condtional_value_X66;
struct buffer* default_value_5;
void* __right_value10 = (void*)0;
default_value = (void*)0;
default_value_5 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value6=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2221, "char**"))));
    items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value7=(struct buffer**)come_calloc_v2(1, sizeof(struct buffer*)*(1*(size)), "/usr/local/include/comelang.h", 2222, "struct buffer**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value8=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2223, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X53=(it=map$2char$phbuffer$ph_begin(self)));    _condtional_value_X53;    });    ({    (_condtional_value_X54=(!map$2char$phbuffer$ph_end(self)));    _condtional_value_X54;    });    ({    (_condtional_value_X57=(it=map$2char$phbuffer$ph_next(self)));    _condtional_value_X57;    })    ){
        memset(&default_value,0,sizeof(struct buffer*));
        it2=((struct buffer*)(__right_value9=map$2char$phbuffer$ph_at(self,it,(struct buffer*)come_increment_ref_count(default_value))));
        come_call_finalizer(buffer_finalize, __right_value9, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X63=((_Bool)1));        _condtional_value_X63;        })) {
            if(({            (_condtional_value_X64=(item_existance[n]));            _condtional_value_X64;            })) {
                n++;
                if(({                (_condtional_value_X65=(n>=size));                _condtional_value_X65;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X66=(n==hash));                _condtional_value_X66;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct buffer*)(__right_value10=map$2char$phbuffer$ph_at(self,it,(struct buffer*)come_increment_ref_count(default_value_5))));
                come_call_finalizer(buffer_finalize, __right_value10, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(buffer_finalize, default_value_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(buffer_finalize, default_value_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
_Bool _condtional_value_X51;
char* result;
char* __result_obj__15;
_Bool _condtional_value_X52;
char* __result_obj__16;
char* result_3;
char* __result_obj__17;
result = (void*)0;
result_3 = (void*)0;
    if(({    (_condtional_value_X51=(self==((void*)0)));    _condtional_value_X51;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__15 = result;
        return __result_obj__15;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X52=(self->key_list->it));    _condtional_value_X52;    })) {
        __result_obj__16 = self->key_list->it->item;
        return __result_obj__16;
    }
    memset(&result_3,0,sizeof(char*));
    __result_obj__17 = result_3;
    return __result_obj__17;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
_Bool _condtional_value_X55;
char* result;
char* __result_obj__18;
_Bool _condtional_value_X56;
char* __result_obj__19;
char* result_4;
char* __result_obj__20;
result = (void*)0;
result_4 = (void*)0;
    if(({    (_condtional_value_X55=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X55;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__18 = result;
        return __result_obj__18;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X56=(self->key_list->it));    _condtional_value_X56;    })) {
        __result_obj__19 = self->key_list->it->item;
        return __result_obj__19;
    }
    memset(&result_4,0,sizeof(char*));
    __result_obj__20 = result_4;
    return __result_obj__20;
}

static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X58;
_Bool _condtional_value_X59;
_Bool _condtional_value_X60;
struct buffer* __result_obj__21;
_Bool _condtional_value_X61;
_Bool _condtional_value_X62;
struct buffer* __result_obj__22;
struct buffer* __result_obj__23;
struct buffer* __result_obj__24;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X58=((_Bool)1));    _condtional_value_X58;    })) {
        if(({        (_condtional_value_X59=(self->item_existance[it]));        _condtional_value_X59;        })) {
            if(({            (_condtional_value_X60=(string_equals(self->keys[it],key)));            _condtional_value_X60;            })) {
                __result_obj__21 = (struct buffer*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__21, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__21;
            }
            it++;
            if(({            (_condtional_value_X61=(it>=self->size));            _condtional_value_X61;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X62=(it==hash));            _condtional_value_X62;            })) {
                __result_obj__22 = (struct buffer*)come_increment_ref_count(default_value);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(buffer_finalize, __result_obj__22, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__22;
            }
        }
        else {
            __result_obj__23 = (struct buffer*)come_increment_ref_count(default_value);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(buffer_finalize, __result_obj__23, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__23;
        }
    }
    __result_obj__24 = (struct buffer*)come_increment_ref_count(default_value);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__24, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__24;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2;
struct list_item$1char$ph* it;
_Bool _condtional_value_X71;
_Bool _condtional_value_X72;
struct list$1char$ph* __result_obj__28;
    it2=0;
    it=self->head;
    while(({    (_condtional_value_X71=(it!=((void*)0)));    _condtional_value_X71;    })) {
        if(({        (_condtional_value_X72=(string_equals(it->item,item)));        _condtional_value_X72;        })) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
    __result_obj__28 = self;
    return __result_obj__28;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
_Bool _condtional_value_X73;
_Bool _condtional_value_X74;
_Bool _condtional_value_X75;
int tmp;
_Bool _condtional_value_X76;
_Bool _condtional_value_X77;
_Bool _condtional_value_X78;
struct list$1char$ph* __result_obj__25;
_Bool _condtional_value_X79;
_Bool _condtional_value_X81;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X82;
_Bool _condtional_value_X83;
struct list_item$1char$ph* prev_it;
_Bool _condtional_value_X84;
_Bool _condtional_value_X85;
struct list_item$1char$ph* it_6;
int i_7;
_Bool _condtional_value_X86;
_Bool _condtional_value_X87;
_Bool _condtional_value_X88;
struct list_item$1char$ph* prev_it_8;
struct list_item$1char$ph* it_9;
struct list_item$1char$ph* head_prev_it;
struct list_item$1char$ph* tail_it;
int i_10;
_Bool _condtional_value_X89;
_Bool _condtional_value_X90;
_Bool _condtional_value_X91;
_Bool _condtional_value_X92;
struct list_item$1char$ph* prev_it_11;
_Bool _condtional_value_X93;
_Bool _condtional_value_X94;
struct list$1char$ph* __result_obj__27;
    if(({    (_condtional_value_X73=(head<0));    _condtional_value_X73;    })) {
        head+=self->len;
    }
    if(({    (_condtional_value_X74=(tail<0));    _condtional_value_X74;    })) {
        tail+=self->len+1;
    }
    if(({    (_condtional_value_X75=(head>tail));    _condtional_value_X75;    })) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(({    (_condtional_value_X76=(head<0));    _condtional_value_X76;    })) {
        head=0;
    }
    if(({    (_condtional_value_X77=(tail>self->len));    _condtional_value_X77;    })) {
        tail=self->len;
    }
    if(({    (_condtional_value_X78=(head==tail));    _condtional_value_X78;    })) {
        __result_obj__25 = self;
        return __result_obj__25;
    }
    if(({    (_condtional_value_X79=(head==0&&tail==self->len));    _condtional_value_X79;    })) {
        list$1char$ph_reset(self);
    }
    else if(({    (_condtional_value_X81=(head==0));    _condtional_value_X81;    })) {
        it=self->head;
        i=0;
        while(({        (_condtional_value_X82=(it!=((void*)0)));        _condtional_value_X82;        })) {
            if(({            (_condtional_value_X83=(i<tail));            _condtional_value_X83;            })) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(({            (_condtional_value_X84=(i==tail));            _condtional_value_X84;            })) {
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
    else if(({    (_condtional_value_X85=(tail==self->len));    _condtional_value_X85;    })) {
        it_6=self->head;
        i_7=0;
        while(({        (_condtional_value_X86=(it_6!=((void*)0)));        _condtional_value_X86;        })) {
            if(({            (_condtional_value_X87=(i_7==head));            _condtional_value_X87;            })) {
                self->tail=it_6->prev;
                self->tail->next=((void*)0);
            }
            if(({            (_condtional_value_X88=(i_7>=head));            _condtional_value_X88;            })) {
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
        while(({        (_condtional_value_X89=(it_9!=((void*)0)));        _condtional_value_X89;        })) {
            if(({            (_condtional_value_X90=(i_10==head));            _condtional_value_X90;            })) {
                head_prev_it=it_9->prev;
            }
            if(({            (_condtional_value_X91=(i_10==tail));            _condtional_value_X91;            })) {
                tail_it=it_9;
            }
            if(({            (_condtional_value_X92=(i_10>=head&&i_10<tail));            _condtional_value_X92;            })) {
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
        if(({        (_condtional_value_X93=(head_prev_it!=((void*)0)));        _condtional_value_X93;        })) {
            head_prev_it->next=tail_it;
        }
        if(({        (_condtional_value_X94=(tail_it!=((void*)0)));        _condtional_value_X94;        })) {
            tail_it->prev=head_prev_it;
        }
    }
    __result_obj__27 = self;
    return __result_obj__27;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X80;
struct list_item$1char$ph* prev_it;
struct list$1char$ph* __result_obj__26;
    it=self->head;
    while(({    (_condtional_value_X80=(it!=((void*)0)));    _condtional_value_X80;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__26 = self;
    return __result_obj__26;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
_Bool _condtional_value_X100;
char* result;
char* __result_obj__29;
_Bool _condtional_value_X101;
char* __result_obj__30;
char* result_12;
char* __result_obj__31;
result = (void*)0;
result_12 = (void*)0;
    if(({    (_condtional_value_X100=(self==((void*)0)));    _condtional_value_X100;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__29 = result;
        return __result_obj__29;
    }
    self->it=self->head;
    if(({    (_condtional_value_X101=(self->it));    _condtional_value_X101;    })) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_12,0,sizeof(char*));
    __result_obj__31 = result_12;
    return __result_obj__31;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
_Bool _condtional_value_X104;
char* result;
char* __result_obj__32;
_Bool _condtional_value_X105;
char* __result_obj__33;
char* result_13;
char* __result_obj__34;
result = (void*)0;
result_13 = (void*)0;
    if(({    (_condtional_value_X104=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X104;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__32 = result;
        return __result_obj__32;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X105=(self->it));    _condtional_value_X105;    })) {
        __result_obj__33 = self->it->item;
        return __result_obj__33;
    }
    memset(&result_13,0,sizeof(char*));
    __result_obj__34 = result_13;
    return __result_obj__34;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X109;
void* __right_value11 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj1;
_Bool _condtional_value_X110;
void* __right_value12 = (void*)0;
struct list_item$1char$ph* litem_14;
char* __dec_obj2;
void* __right_value13 = (void*)0;
struct list_item$1char$ph* litem_15;
char* __dec_obj3;
struct list$1char$ph* __result_obj__35;
    if(({    (_condtional_value_X109=(self->len==0));    _condtional_value_X109;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value11=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj1=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X110=(self->len==1));    _condtional_value_X110;    })) {
        litem_14=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value12=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1char$ph*"))));
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        __dec_obj2=litem_14->item,
        litem_14->item=(char*)come_increment_ref_count(item);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        litem_15=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value13=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1char$ph*"))));
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        __dec_obj3=litem_15->item,
        litem_15->item=(char*)come_increment_ref_count(item);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
    __result_obj__35 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__35;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
_Bool _condtional_value_X111;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct buffer* buf;
_Bool _condtional_value_X112;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X113;
_Bool _condtional_value_X114;
_Bool _condtional_value_X115;
struct tuple2$2char$phsType$ph* multiple_assign_var2 = (void*)0;
char* name=0;
struct sType* type=0;
void* __right_value17 = (void*)0;
_Bool _condtional_value_X116;
void* __right_value18 = (void*)0;
char* id;
void* __right_value19 = (void*)0;
    if(({    (_condtional_value_X111=(info->no_output_come_code));    _condtional_value_X111;    })) {
        return;
    }
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 50, "struct buffer*"))));
    if(({    (_condtional_value_X112=(klass->mParentClassName));    _condtional_value_X112;    })) {
        buffer_append_format(buf,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
    }
    else {
        buffer_append_format(buf,"struct %s\n{\n",klass->mName);
    }
    for(    ({    (_condtional_value_X113=(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved)));    _condtional_value_X113;    });    ({    (_condtional_value_X114=(!list$1tuple2$2char$phsType$ph$ph_end(o2_saved)));    _condtional_value_X114;    });    ({    (_condtional_value_X115=(it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)));    _condtional_value_X115;    })    ){
        multiple_assign_var2=it;
        name=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        type=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        type->mStatic=(_Bool)0;
        buffer_append_str(buf,"    ");
        buffer_append_str(buf,((char*)(__right_value17=make_define_var(type,name,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0))));
        (__right_value17 = come_decrement_ref_count(__right_value17, (void*)0, (void*)0, 1, 0, (void*)0));
        buffer_append_str(buf,";\n");
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(({    (_condtional_value_X116=(klass->mAttribute==((void*)0)));    _condtional_value_X116;    })) {
        buffer_append_str(buf,"};\n");
    }
    else {
        buffer_append_format(buf,"} %s;\n",klass->mAttribute);
    }
    id=(char*)come_increment_ref_count(__builtin_string(klass->mName));
    add_come_code_at_come_struct_header(info,id,"%s",((char*)(__right_value19=buffer_to_string(buf))));
    (__right_value19 = come_decrement_ref_count(__right_value19, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0, 0, (void*)0));
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value20 = (void*)0;
char* new_name;
_Bool _condtional_value_X122;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
struct sClass* generics_class;
_Bool _condtional_value_X137;
_Bool __result_obj__45;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
void* __right_value33 = (void*)0;
struct sClass* new_class;
int i;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X169;
_Bool _condtional_value_X170;
_Bool _condtional_value_X171;
struct tuple2$2char$phsType$ph* multiple_assign_var3 = (void*)0;
char* name=0;
struct sType* type_19=0;
void* __right_value34 = (void*)0;
struct sType* new_type;
void* __right_value38 = (void*)0;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
struct sType* __dec_obj34;
_Bool _condtional_value_X261;
void* __right_value82 = (void*)0;
struct sType* __dec_obj35;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
_Bool __result_obj__76;
    new_name=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(({    (_condtional_value_X122=(!map$2char$phsClass$ph_find(info->classes,new_name)));    _condtional_value_X122;    })) {
        generics_class=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value22=__builtin_string(type->mClass->mName)))));
        (__right_value21 = come_decrement_ref_count(__right_value21, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value22 = come_decrement_ref_count(__right_value22, (void*)0, (void*)0, 1, 0, (void*)0));
        if(({        (_condtional_value_X137=(generics_class==((void*)0)));        _condtional_value_X137;        })) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result_obj__45 = (_Bool)0;
            come_call_finalizer(sClass_finalize, generics_class, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0));
            return __result_obj__45;
        }
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 92, "struct sClass*")),(char*)come_increment_ref_count(new_name),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
        new_class=((struct sClass*)(__right_value33=map$2char$phsClass$ph_at(info->classes,((char*)(__right_value32=__builtin_string(new_name))),((void*)0))));
        (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sClass_finalize, __right_value33, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        i=0;
        for(        ({        (_condtional_value_X169=(o2_saved=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(generics_class->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved)));        _condtional_value_X169;        });        ({        (_condtional_value_X170=(!list$1tuple2$2char$phsType$ph$ph_end(o2_saved)));        _condtional_value_X170;        });        ({        (_condtional_value_X171=(it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved)));        _condtional_value_X171;        })        ){
            multiple_assign_var3=it;
            name=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_19=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_19),(struct sType*)come_increment_ref_count(generics_type),info));
            list$1tuple2$2char$phsType$ph$ph_push_back(new_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 102, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count((char*)come_memdup(name, "14struct.c", 102, "char*")),(struct sType*)come_increment_ref_count(sType_clone(new_type)))));
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type_19, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, new_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj34=type->mNoSolvedGenericsType,
        type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        type->mClass=new_class;
        list$1sType$ph_reset(type->mGenericsTypes);
        output_struct(new_class,info);
        come_call_finalizer(sClass_finalize, generics_class, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(({        (_condtional_value_X261=(type->mNoSolvedGenericsType==((void*)0)&&list$1sType$ph_length(type->mGenericsTypes)>0));        _condtional_value_X261;        })) {
            __dec_obj35=type->mNoSolvedGenericsType,
            type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(type));
            come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)(__right_value85=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value84=__builtin_string(new_name))))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sClass_finalize, __right_value85, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        list$1sType$ph_reset(type->mGenericsTypes);
    }
    __result_obj__76 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__76;
}

static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char* key){
unsigned int hash;
int it;
_Bool _condtional_value_X117;
_Bool _condtional_value_X118;
_Bool _condtional_value_X119;
_Bool _condtional_value_X120;
_Bool _condtional_value_X121;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X117=((_Bool)1));    _condtional_value_X117;    })) {
        if(({        (_condtional_value_X118=(self->item_existance[it]));        _condtional_value_X118;        })) {
            if(({            (_condtional_value_X119=(string_equals(self->keys[it],key)));            _condtional_value_X119;            })) {
                return (_Bool)1;
            }
            it++;
            if(({            (_condtional_value_X120=(it>=self->size));            _condtional_value_X120;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X121=(it==hash));            _condtional_value_X121;            })) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X123;
_Bool _condtional_value_X124;
_Bool _condtional_value_X125;
struct sClass* __result_obj__37;
_Bool _condtional_value_X130;
_Bool _condtional_value_X131;
struct sClass* __result_obj__38;
struct sClass* __result_obj__39;
struct sClass* __result_obj__40;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X123=((_Bool)1));    _condtional_value_X123;    })) {
        if(({        (_condtional_value_X124=(self->item_existance[it]));        _condtional_value_X124;        })) {
            if(({            (_condtional_value_X125=(string_equals(self->keys[it],key)));            _condtional_value_X125;            })) {
                __result_obj__37 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__37, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__37;
            }
            it++;
            if(({            (_condtional_value_X130=(it>=self->size));            _condtional_value_X130;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X131=(it==hash));            _condtional_value_X131;            })) {
                __result_obj__38 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__38, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__38;
            }
        }
        else {
            __result_obj__39 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__39, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__39;
        }
    }
    __result_obj__40 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__40, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__40;
}

static void sClass_finalize(struct sClass* self){
_Bool _condtional_value_X126;
_Bool _condtional_value_X127;
_Bool _condtional_value_X128;
_Bool _condtional_value_X129;
    if(({    (_condtional_value_X126=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X126;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X127=(self!=((void*)0)&&self->mFields!=((void*)0)));    _condtional_value_X127;    })) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X128=(self!=((void*)0)&&self->mParentClassName!=((void*)0)));    _condtional_value_X128;    })) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X129=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X129;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X132;
_Bool _condtional_value_X133;
_Bool _condtional_value_X134;
struct sClass* __result_obj__41;
_Bool _condtional_value_X135;
_Bool _condtional_value_X136;
struct sClass* __result_obj__42;
struct sClass* __result_obj__43;
struct sClass* __result_obj__44;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X132=((_Bool)1));    _condtional_value_X132;    })) {
        if(({        (_condtional_value_X133=(self->item_existance[it]));        _condtional_value_X133;        })) {
            if(({            (_condtional_value_X134=(string_equals(self->keys[it],key)));            _condtional_value_X134;            })) {
                __result_obj__41 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__41, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__41;
            }
            it++;
            if(({            (_condtional_value_X135=(it>=self->size));            _condtional_value_X135;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X136=(it==hash));            _condtional_value_X136;            })) {
                __result_obj__42 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__42, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__42;
            }
        }
        else {
            __result_obj__43 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__43, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__43;
        }
    }
    __result_obj__44 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__44, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__44;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
_Bool _condtional_value_X138;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X155;
_Bool _condtional_value_X156;
_Bool _condtional_value_X157;
_Bool _condtional_value_X158;
_Bool _condtional_value_X159;
_Bool _condtional_value_X160;
_Bool _condtional_value_X161;
_Bool _condtional_value_X162;
_Bool _condtional_value_X163;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X164;
_Bool _condtional_value_X165;
_Bool _condtional_value_X166;
_Bool _condtional_value_X167;
_Bool _condtional_value_X168;
struct map$2char$phsClass$ph* __result_obj__56;
    if(({    (_condtional_value_X138=(self->len*10>=self->size));    _condtional_value_X138;    })) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X155=((_Bool)1));    _condtional_value_X155;    })) {
        if(({        (_condtional_value_X156=(self->item_existance[it]));        _condtional_value_X156;        })) {
            if(({            (_condtional_value_X157=(string_equals(self->keys[it],key)));            _condtional_value_X157;            })) {
                if(({                (_condtional_value_X158=(1));                _condtional_value_X158;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X159=(1));                _condtional_value_X159;                })) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X160=(it>=self->size));            _condtional_value_X160;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X161=(it==hash));            _condtional_value_X161;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X162=(1));            _condtional_value_X162;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X163=(1));            _condtional_value_X163;            })) {
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
    for(    ({    (_condtional_value_X164=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X164;    });    ({    (_condtional_value_X165=(!list$1char$ph_end(self->key_list)));    _condtional_value_X165;    });    ({    (_condtional_value_X166=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X166;    })    ){
        if(({        (_condtional_value_X167=(string_equals(it2,key)));        _condtional_value_X167;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X168=(!same_key_exist));    _condtional_value_X168;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__56 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__56;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size;
void* __right_value24 = (void*)0;
char** keys;
void* __right_value25 = (void*)0;
struct sClass** items;
void* __right_value26 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X141;
_Bool _condtional_value_X142;
_Bool _condtional_value_X145;
struct sClass* default_value;
void* __right_value27 = (void*)0;
struct sClass* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X151;
_Bool _condtional_value_X152;
_Bool _condtional_value_X153;
_Bool _condtional_value_X154;
struct sClass* default_value_18;
void* __right_value28 = (void*)0;
default_value = (void*)0;
default_value_18 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value24=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2221, "char**"))));
    items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value25=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size)), "/usr/local/include/comelang.h", 2222, "struct sClass**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value26=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2223, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X141=(it=map$2char$phsClass$ph_begin(self)));    _condtional_value_X141;    });    ({    (_condtional_value_X142=(!map$2char$phsClass$ph_end(self)));    _condtional_value_X142;    });    ({    (_condtional_value_X145=(it=map$2char$phsClass$ph_next(self)));    _condtional_value_X145;    })    ){
        memset(&default_value,0,sizeof(struct sClass*));
        it2=((struct sClass*)(__right_value27=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value))));
        come_call_finalizer(sClass_finalize, __right_value27, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X151=((_Bool)1));        _condtional_value_X151;        })) {
            if(({            (_condtional_value_X152=(item_existance[n]));            _condtional_value_X152;            })) {
                n++;
                if(({                (_condtional_value_X153=(n>=size));                _condtional_value_X153;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X154=(n==hash));                _condtional_value_X154;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sClass*)(__right_value28=map$2char$phsClass$ph_at(self,it,(struct sClass*)come_increment_ref_count(default_value_18))));
                come_call_finalizer(sClass_finalize, __right_value28, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sClass_finalize, default_value_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
_Bool _condtional_value_X139;
char* result;
char* __result_obj__46;
_Bool _condtional_value_X140;
char* __result_obj__47;
char* result_16;
char* __result_obj__48;
result = (void*)0;
result_16 = (void*)0;
    if(({    (_condtional_value_X139=(self==((void*)0)));    _condtional_value_X139;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__46 = result;
        return __result_obj__46;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X140=(self->key_list->it));    _condtional_value_X140;    })) {
        __result_obj__47 = self->key_list->it->item;
        return __result_obj__47;
    }
    memset(&result_16,0,sizeof(char*));
    __result_obj__48 = result_16;
    return __result_obj__48;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
_Bool _condtional_value_X143;
char* result;
char* __result_obj__49;
_Bool _condtional_value_X144;
char* __result_obj__50;
char* result_17;
char* __result_obj__51;
result = (void*)0;
result_17 = (void*)0;
    if(({    (_condtional_value_X143=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X143;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__49 = result;
        return __result_obj__49;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X144=(self->key_list->it));    _condtional_value_X144;    })) {
        __result_obj__50 = self->key_list->it->item;
        return __result_obj__50;
    }
    memset(&result_17,0,sizeof(char*));
    __result_obj__51 = result_17;
    return __result_obj__51;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X146;
_Bool _condtional_value_X147;
_Bool _condtional_value_X148;
struct sClass* __result_obj__52;
_Bool _condtional_value_X149;
_Bool _condtional_value_X150;
struct sClass* __result_obj__53;
struct sClass* __result_obj__54;
struct sClass* __result_obj__55;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X146=((_Bool)1));    _condtional_value_X146;    })) {
        if(({        (_condtional_value_X147=(self->item_existance[it]));        _condtional_value_X147;        })) {
            if(({            (_condtional_value_X148=(string_equals(self->keys[it],key)));            _condtional_value_X148;            })) {
                __result_obj__52 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__52, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__52;
            }
            it++;
            if(({            (_condtional_value_X149=(it>=self->size));            _condtional_value_X149;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X150=(it==hash));            _condtional_value_X150;            })) {
                __result_obj__53 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__53, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__53;
            }
        }
        else {
            __result_obj__54 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__54, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__54;
        }
    }
    __result_obj__55 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__55, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__55;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
_Bool _condtional_value_X172;
void* __right_value35 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem;
struct tuple2$2char$phsType$ph* __dec_obj4;
_Bool _condtional_value_X173;
void* __right_value36 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_20;
struct tuple2$2char$phsType$ph* __dec_obj5;
void* __right_value37 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_21;
struct tuple2$2char$phsType$ph* __dec_obj6;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__57;
    if(({    (_condtional_value_X172=(self->len==0));    _condtional_value_X172;    })) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value35=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X173=(self->len==1));    _condtional_value_X173;    })) {
        litem_20=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value36=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        __dec_obj5=litem_20->item,
        litem_20->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        litem_21=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value37=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        __dec_obj6=litem_21->item,
        litem_21->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
    __result_obj__57 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__57;
}

static struct sType* sType_clone(struct sType* self){
_Bool _condtional_value_X174;
struct sType* __result_obj__58;
void* __right_value39 = (void*)0;
struct sType* result;
_Bool _condtional_value_X175;
_Bool _condtional_value_X176;
void* __right_value40 = (void*)0;
struct sType* __dec_obj7;
_Bool _condtional_value_X177;
void* __right_value41 = (void*)0;
struct sType* __dec_obj8;
_Bool _condtional_value_X178;
void* __right_value49 = (void*)0;
struct list$1sType$ph* __dec_obj12;
_Bool _condtional_value_X185;
void* __right_value50 = (void*)0;
struct sType* __dec_obj13;
_Bool _condtional_value_X186;
void* __right_value52 = (void*)0;
struct sNode* __dec_obj14;
_Bool _condtional_value_X198;
void* __right_value53 = (void*)0;
struct sNode* __dec_obj15;
_Bool _condtional_value_X199;
void* __right_value54 = (void*)0;
char* __dec_obj16;
_Bool _condtional_value_X200;
void* __right_value55 = (void*)0;
char* __dec_obj17;
_Bool _condtional_value_X201;
void* __right_value56 = (void*)0;
char* __dec_obj18;
_Bool _condtional_value_X202;
_Bool _condtional_value_X203;
_Bool _condtional_value_X204;
_Bool _condtional_value_X205;
_Bool _condtional_value_X206;
_Bool _condtional_value_X207;
_Bool _condtional_value_X208;
_Bool _condtional_value_X209;
_Bool _condtional_value_X210;
_Bool _condtional_value_X211;
_Bool _condtional_value_X212;
_Bool _condtional_value_X213;
_Bool _condtional_value_X214;
_Bool _condtional_value_X215;
_Bool _condtional_value_X216;
_Bool _condtional_value_X217;
_Bool _condtional_value_X218;
_Bool _condtional_value_X219;
_Bool _condtional_value_X220;
_Bool _condtional_value_X221;
_Bool _condtional_value_X222;
_Bool _condtional_value_X223;
_Bool _condtional_value_X224;
_Bool _condtional_value_X225;
_Bool _condtional_value_X226;
_Bool _condtional_value_X227;
void* __right_value57 = (void*)0;
char* __dec_obj19;
_Bool _condtional_value_X228;
_Bool _condtional_value_X229;
_Bool _condtional_value_X230;
_Bool _condtional_value_X231;
void* __right_value65 = (void*)0;
struct list$1sNode$ph* __dec_obj23;
_Bool _condtional_value_X238;
_Bool _condtional_value_X239;
_Bool _condtional_value_X240;
_Bool _condtional_value_X241;
_Bool _condtional_value_X242;
_Bool _condtional_value_X243;
_Bool _condtional_value_X244;
void* __right_value66 = (void*)0;
char* __dec_obj24;
_Bool _condtional_value_X245;
_Bool _condtional_value_X246;
_Bool _condtional_value_X247;
void* __right_value67 = (void*)0;
struct list$1sType$ph* __dec_obj25;
_Bool _condtional_value_X248;
void* __right_value75 = (void*)0;
struct list$1char$ph* __dec_obj29;
_Bool _condtional_value_X255;
void* __right_value76 = (void*)0;
struct sType* __dec_obj30;
_Bool _condtional_value_X256;
_Bool _condtional_value_X257;
_Bool _condtional_value_X258;
void* __right_value77 = (void*)0;
struct sNode* __dec_obj31;
struct sType* __result_obj__73;
    if(({    (_condtional_value_X174=(self==(void*)0));    _condtional_value_X174;    })) {
        __result_obj__58 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__58, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__58;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_condtional_value_X175=(self!=((void*)0)));    _condtional_value_X175;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_condtional_value_X176=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _condtional_value_X176;    })) {
        __dec_obj7=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X177=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _condtional_value_X177;    })) {
        __dec_obj8=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X178=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _condtional_value_X178;    })) {
        __dec_obj12=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X185=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _condtional_value_X185;    })) {
        __dec_obj13=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X186=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _condtional_value_X186;    })) {
        __dec_obj14=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X198=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _condtional_value_X198;    })) {
        __dec_obj15=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_condtional_value_X199=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _condtional_value_X199;    })) {
        __dec_obj16=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X200=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X200;    })) {
        __dec_obj17=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X201=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _condtional_value_X201;    })) {
        __dec_obj18=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X202=(self!=((void*)0)));    _condtional_value_X202;    })) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(({    (_condtional_value_X203=(self!=((void*)0)));    _condtional_value_X203;    })) {
        result->mUnsigned=self->mUnsigned;
    }
    if(({    (_condtional_value_X204=(self!=((void*)0)));    _condtional_value_X204;    })) {
        result->mShort=self->mShort;
    }
    if(({    (_condtional_value_X205=(self!=((void*)0)));    _condtional_value_X205;    })) {
        result->mLong=self->mLong;
    }
    if(({    (_condtional_value_X206=(self!=((void*)0)));    _condtional_value_X206;    })) {
        result->mLongLong=self->mLongLong;
    }
    if(({    (_condtional_value_X207=(self!=((void*)0)));    _condtional_value_X207;    })) {
        result->mConstant=self->mConstant;
    }
    if(({    (_condtional_value_X208=(self!=((void*)0)));    _condtional_value_X208;    })) {
        result->mAtomic=self->mAtomic;
    }
    if(({    (_condtional_value_X209=(self!=((void*)0)));    _condtional_value_X209;    })) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(({    (_condtional_value_X210=(self!=((void*)0)));    _condtional_value_X210;    })) {
        result->mRegister=self->mRegister;
    }
    if(({    (_condtional_value_X211=(self!=((void*)0)));    _condtional_value_X211;    })) {
        result->mVolatile=self->mVolatile;
    }
    if(({    (_condtional_value_X212=(self!=((void*)0)));    _condtional_value_X212;    })) {
        result->mStatic=self->mStatic;
    }
    if(({    (_condtional_value_X213=(self!=((void*)0)));    _condtional_value_X213;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_condtional_value_X214=(self!=((void*)0)));    _condtional_value_X214;    })) {
        result->mRecord=self->mRecord;
    }
    if(({    (_condtional_value_X215=(self!=((void*)0)));    _condtional_value_X215;    })) {
        result->mExtern=self->mExtern;
    }
    if(({    (_condtional_value_X216=(self!=((void*)0)));    _condtional_value_X216;    })) {
        result->mRestrict=self->mRestrict;
    }
    if(({    (_condtional_value_X217=(self!=((void*)0)));    _condtional_value_X217;    })) {
        result->mImmutable=self->mImmutable;
    }
    if(({    (_condtional_value_X218=(self!=((void*)0)));    _condtional_value_X218;    })) {
        result->mTask=self->mTask;
    }
    if(({    (_condtional_value_X219=(self!=((void*)0)));    _condtional_value_X219;    })) {
        result->mHeap=self->mHeap;
    }
    if(({    (_condtional_value_X220=(self!=((void*)0)));    _condtional_value_X220;    })) {
        result->mChannel=self->mChannel;
    }
    if(({    (_condtional_value_X221=(self!=((void*)0)));    _condtional_value_X221;    })) {
        result->mNoHeap=self->mNoHeap;
    }
    if(({    (_condtional_value_X222=(self!=((void*)0)));    _condtional_value_X222;    })) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(({    (_condtional_value_X223=(self!=((void*)0)));    _condtional_value_X223;    })) {
        result->mException=self->mException;
    }
    if(({    (_condtional_value_X224=(self!=((void*)0)));    _condtional_value_X224;    })) {
        result->mInline=self->mInline;
    }
    if(({    (_condtional_value_X225=(self!=((void*)0)));    _condtional_value_X225;    })) {
        result->mNullValue=self->mNullValue;
    }
    if(({    (_condtional_value_X226=(self!=((void*)0)));    _condtional_value_X226;    })) {
        result->mGuardValue=self->mGuardValue;
    }
    if(({    (_condtional_value_X227=(self!=((void*)0)&&self->mAsmName!=((void*)0)));    _condtional_value_X227;    })) {
        __dec_obj19=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X228=(self!=((void*)0)));    _condtional_value_X228;    })) {
        result->mTypedef=self->mTypedef;
    }
    if(({    (_condtional_value_X229=(self!=((void*)0)));    _condtional_value_X229;    })) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(({    (_condtional_value_X230=(self!=((void*)0)));    _condtional_value_X230;    })) {
        result->mOriginIsArray=self->mOriginIsArray;
    }
    if(({    (_condtional_value_X231=(self!=((void*)0)&&self->mArrayNum!=((void*)0)));    _condtional_value_X231;    })) {
        __dec_obj23=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X238=(self!=((void*)0)));    _condtional_value_X238;    })) {
        result->mPointerNum=self->mPointerNum;
    }
    if(({    (_condtional_value_X239=(self!=((void*)0)));    _condtional_value_X239;    })) {
        result->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(({    (_condtional_value_X240=(self!=((void*)0)));    _condtional_value_X240;    })) {
        result->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(({    (_condtional_value_X241=(self!=((void*)0)));    _condtional_value_X241;    })) {
        result->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(({    (_condtional_value_X242=(self!=((void*)0)));    _condtional_value_X242;    })) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(({    (_condtional_value_X243=(self!=((void*)0)));    _condtional_value_X243;    })) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(({    (_condtional_value_X244=(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)));    _condtional_value_X244;    })) {
        __dec_obj24=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X245=(self!=((void*)0)));    _condtional_value_X245;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_condtional_value_X246=(self!=((void*)0)));    _condtional_value_X246;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_condtional_value_X247=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _condtional_value_X247;    })) {
        __dec_obj25=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X248=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _condtional_value_X248;    })) {
        __dec_obj29=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X255=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _condtional_value_X255;    })) {
        __dec_obj30=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X256=(self!=((void*)0)));    _condtional_value_X256;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_condtional_value_X257=(self!=((void*)0)));    _condtional_value_X257;    })) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(({    (_condtional_value_X258=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _condtional_value_X258;    })) {
        __dec_obj31=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__73 = (struct sType*)come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__73, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__73;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
_Bool _condtional_value_X179;
struct list$1sType$ph* __result_obj__59;
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _condtional_value_X180;
_Bool _condtional_value_X181;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct list$1sType$ph* __result_obj__62;
    if(({    (_condtional_value_X179=(self==((void*)0)));    _condtional_value_X179;    })) {
        __result_obj__59 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__59, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__59;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1sType$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X180=(it!=((void*)0)));    _condtional_value_X180;    })) {
        if(({        (_condtional_value_X181=(1));        _condtional_value_X181;        })) {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        else {
            list$1sType$ph_add(result,(struct sType*)come_increment_ref_count(sType_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__62 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__62, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__62;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__60;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__60 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__60, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__60;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
_Bool _condtional_value_X182;
void* __right_value44 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj9;
_Bool _condtional_value_X183;
void* __right_value45 = (void*)0;
struct list_item$1sType$ph* litem_22;
struct sType* __dec_obj10;
void* __right_value46 = (void*)0;
struct list_item$1sType$ph* litem_23;
struct sType* __dec_obj11;
struct list$1sType$ph* __result_obj__61;
    if(({    (_condtional_value_X182=(self->len==0));    _condtional_value_X182;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value44=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj9=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X183=(self->len==1));    _condtional_value_X183;    })) {
        litem_22=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value45=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sType$ph*"))));
        litem_22->prev=self->head;
        litem_22->next=((void*)0);
        __dec_obj10=litem_22->item,
        litem_22->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_22;
        self->head->next=litem_22;
    }
    else {
        litem_23=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value46=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sType$ph*"))));
        litem_23->prev=self->tail;
        litem_23->next=((void*)0);
        __dec_obj11=litem_23->item,
        litem_23->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_23;
        self->tail=litem_23;
    }
    self->len++;
    __result_obj__61 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__61;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X184;
struct list_item$1sType$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X184=(it!=((void*)0)));    _condtional_value_X184;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
_Bool _condtional_value_X187;
struct sNode* __result_obj__63;
void* __right_value51 = (void*)0;
struct sNode* result;
_Bool _condtional_value_X188;
_Bool _condtional_value_X189;
_Bool _condtional_value_X190;
_Bool _condtional_value_X191;
_Bool _condtional_value_X192;
_Bool _condtional_value_X193;
_Bool _condtional_value_X194;
_Bool _condtional_value_X195;
_Bool _condtional_value_X196;
_Bool _condtional_value_X197;
struct sNode* __result_obj__64;
    if(({    (_condtional_value_X187=(self==(void*)0));    _condtional_value_X187;    })) {
        __result_obj__63 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__63) ? __result_obj__63 = come_decrement_ref_count(__result_obj__63, ((struct sNode*)__result_obj__63)->finalize, ((struct sNode*)__result_obj__63)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__63;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(({    (_condtional_value_X188=(self!=((void*)0)&&self->clone!=((void*)0)));    _condtional_value_X188;    })) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(({    (_condtional_value_X189=(self!=((void*)0)));    _condtional_value_X189;    })) {
        result->finalize=self->finalize;
    }
    if(({    (_condtional_value_X190=(self!=((void*)0)));    _condtional_value_X190;    })) {
        result->clone=self->clone;
    }
    if(({    (_condtional_value_X191=(self!=((void*)0)));    _condtional_value_X191;    })) {
        result->compile=self->compile;
    }
    if(({    (_condtional_value_X192=(self!=((void*)0)));    _condtional_value_X192;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X193=(self!=((void*)0)));    _condtional_value_X193;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X194=(self!=((void*)0)));    _condtional_value_X194;    })) {
        result->sname=self->sname;
    }
    if(({    (_condtional_value_X195=(self!=((void*)0)));    _condtional_value_X195;    })) {
        result->terminated=self->terminated;
    }
    if(({    (_condtional_value_X196=(self!=((void*)0)));    _condtional_value_X196;    })) {
        result->kind=self->kind;
    }
    if(({    (_condtional_value_X197=(self!=((void*)0)));    _condtional_value_X197;    })) {
        result->no_mutex=self->no_mutex;
    }
    __result_obj__64 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__64) ? __result_obj__64 = come_decrement_ref_count(__result_obj__64, ((struct sNode*)__result_obj__64)->finalize, ((struct sNode*)__result_obj__64)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__64;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
_Bool _condtional_value_X232;
struct list$1sNode$ph* __result_obj__65;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X233;
_Bool _condtional_value_X234;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct list$1sNode$ph* __result_obj__68;
    if(({    (_condtional_value_X232=(self==((void*)0)));    _condtional_value_X232;    })) {
        __result_obj__65 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__65, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__65;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1sNode$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X233=(it!=((void*)0)));    _condtional_value_X233;    })) {
        if(({        (_condtional_value_X234=(1));        _condtional_value_X234;        })) {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        else {
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__68 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__68, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__68;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__66;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__66 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__66, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__66;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
_Bool _condtional_value_X235;
void* __right_value60 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj20;
_Bool _condtional_value_X236;
void* __right_value61 = (void*)0;
struct list_item$1sNode$ph* litem_24;
struct sNode* __dec_obj21;
void* __right_value62 = (void*)0;
struct list_item$1sNode$ph* litem_25;
struct sNode* __dec_obj22;
struct list$1sNode$ph* __result_obj__67;
    if(({    (_condtional_value_X235=(self->len==0));    _condtional_value_X235;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value60=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj20=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X236=(self->len==1));    _condtional_value_X236;    })) {
        litem_24=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value61=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sNode$ph*"))));
        litem_24->prev=self->head;
        litem_24->next=((void*)0);
        __dec_obj21=litem_24->item,
        litem_24->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_24;
        self->head->next=litem_24;
    }
    else {
        litem_25=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value62=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sNode$ph*"))));
        litem_25->prev=self->tail;
        litem_25->next=((void*)0);
        __dec_obj22=litem_25->item,
        litem_25->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_25;
        self->tail=litem_25;
    }
    self->len++;
    __result_obj__67 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__67;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _condtional_value_X237;
struct list_item$1sNode$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X237=(it!=((void*)0)));    _condtional_value_X237;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
_Bool _condtional_value_X249;
struct list$1char$ph* __result_obj__69;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _condtional_value_X250;
_Bool _condtional_value_X251;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct list$1char$ph* __result_obj__72;
    if(({    (_condtional_value_X249=(self==((void*)0)));    _condtional_value_X249;    })) {
        __result_obj__69 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__69, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__69;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1char$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X250=(it!=((void*)0)));    _condtional_value_X250;    })) {
        if(({        (_condtional_value_X251=(1));        _condtional_value_X251;        })) {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1022, "char*")));
        }
        else {
            list$1char$ph_add(result,(char*)come_increment_ref_count((char*)come_memdup(it->item, "/usr/local/include/comelang.h", 1025, "char*")));
        }
        it=it->next;
    }
    __result_obj__72 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__72, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__72;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__70;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__70, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__70;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
_Bool _condtional_value_X252;
void* __right_value70 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj26;
_Bool _condtional_value_X253;
void* __right_value71 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj27;
void* __right_value72 = (void*)0;
struct list_item$1char$ph* litem_27;
char* __dec_obj28;
struct list$1char$ph* __result_obj__71;
    if(({    (_condtional_value_X252=(self->len==0));    _condtional_value_X252;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value70=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj26=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X253=(self->len==1));    _condtional_value_X253;    })) {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value71=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1char$ph*"))));
        litem_26->prev=self->head;
        litem_26->next=((void*)0);
        __dec_obj27=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_26;
        self->head->next=litem_26;
    }
    else {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value72=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1char$ph*"))));
        litem_27->prev=self->tail;
        litem_27->next=((void*)0);
        __dec_obj28=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_27;
        self->tail=litem_27;
    }
    self->len++;
    __result_obj__71 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__71;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it;
_Bool _condtional_value_X254;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X254=(it!=((void*)0)));    _condtional_value_X254;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj32;
struct sType* __dec_obj33;
struct tuple2$2char$phsType$ph* __result_obj__74;
    __dec_obj32=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj33=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__74 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__74;
}

static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self){
struct list_item$1sType$ph* it;
_Bool _condtional_value_X259;
struct list_item$1sType$ph* prev_it;
struct list$1sType$ph* __result_obj__75;
    it=self->head;
    while(({    (_condtional_value_X259=(it!=((void*)0)));    _condtional_value_X259;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__75 = self;
    return __result_obj__75;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
_Bool _condtional_value_X260;
    if(({    (_condtional_value_X260=(self==((void*)0)));    _condtional_value_X260;    })) {
        return 0;
    }
    return self->len;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
char* __dec_obj36;
void* __right_value103 = (void*)0;
struct sClass* __dec_obj46;
struct sStructNode* __result_obj__85;
    ((struct sNodeBase*)(__right_value86=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value86, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj36=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj46=self->mClass,
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer(sClass_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__85 = (struct sStructNode*)come_increment_ref_count(self);
    come_call_finalizer(sStructNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sStructNode_finalize, __result_obj__85, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__85;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __right_value104 = (void*)0;
char* __result_obj__86;
    __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string("sStructNode"))));
    (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__86;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass;
void* __right_value105 = (void*)0;
char* name;
_Bool __result_obj__87;
    klass=(struct sClass*)come_increment_ref_count(self->mClass);
    name=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass,info);
    __result_obj__87 = (_Bool)1;
    come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__87;
}

static void sNodeBase_finalize(struct sNodeBase* self){
_Bool _condtional_value_X262;
    if(({    (_condtional_value_X262=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X262;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sClass* sClass_clone(struct sClass* self){
_Bool _condtional_value_X263;
struct sClass* __result_obj__77;
void* __right_value88 = (void*)0;
struct sClass* result;
_Bool _condtional_value_X264;
_Bool _condtional_value_X265;
_Bool _condtional_value_X266;
_Bool _condtional_value_X267;
_Bool _condtional_value_X268;
_Bool _condtional_value_X269;
_Bool _condtional_value_X270;
_Bool _condtional_value_X271;
_Bool _condtional_value_X272;
_Bool _condtional_value_X273;
void* __right_value89 = (void*)0;
char* __dec_obj37;
_Bool _condtional_value_X274;
_Bool _condtional_value_X275;
_Bool _condtional_value_X276;
void* __right_value100 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj43;
_Bool _condtional_value_X288;
void* __right_value101 = (void*)0;
char* __dec_obj44;
_Bool _condtional_value_X289;
void* __right_value102 = (void*)0;
char* __dec_obj45;
struct sClass* __result_obj__84;
    if(({    (_condtional_value_X263=(self==(void*)0));    _condtional_value_X263;    })) {
        __result_obj__77 = (void*)0;
        return __result_obj__77;
    }
    result=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass*"));
    if(({    (_condtional_value_X264=(self!=((void*)0)));    _condtional_value_X264;    })) {
        result->mStruct=self->mStruct;
    }
    if(({    (_condtional_value_X265=(self!=((void*)0)));    _condtional_value_X265;    })) {
        result->mFloat=self->mFloat;
    }
    if(({    (_condtional_value_X266=(self!=((void*)0)));    _condtional_value_X266;    })) {
        result->mUnion=self->mUnion;
    }
    if(({    (_condtional_value_X267=(self!=((void*)0)));    _condtional_value_X267;    })) {
        result->mGenerics=self->mGenerics;
    }
    if(({    (_condtional_value_X268=(self!=((void*)0)));    _condtional_value_X268;    })) {
        result->mMethodGenerics=self->mMethodGenerics;
    }
    if(({    (_condtional_value_X269=(self!=((void*)0)));    _condtional_value_X269;    })) {
        result->mEnum=self->mEnum;
    }
    if(({    (_condtional_value_X270=(self!=((void*)0)));    _condtional_value_X270;    })) {
        result->mProtocol=self->mProtocol;
    }
    if(({    (_condtional_value_X271=(self!=((void*)0)));    _condtional_value_X271;    })) {
        result->mNumber=self->mNumber;
    }
    if(({    (_condtional_value_X272=(self!=((void*)0)));    _condtional_value_X272;    })) {
        result->mUniq=self->mUniq;
    }
    if(({    (_condtional_value_X273=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X273;    })) {
        __dec_obj37=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sClass_clone", 13, "char*"));
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X274=(self!=((void*)0)));    _condtional_value_X274;    })) {
        result->mGenericsNum=self->mGenericsNum;
    }
    if(({    (_condtional_value_X275=(self!=((void*)0)));    _condtional_value_X275;    })) {
        result->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(({    (_condtional_value_X276=(self!=((void*)0)&&self->mFields!=((void*)0)));    _condtional_value_X276;    })) {
        __dec_obj43=result->mFields,
        result->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_clone(self->mFields));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X288=(self!=((void*)0)&&self->mParentClassName!=((void*)0)));    _condtional_value_X288;    })) {
        __dec_obj44=result->mParentClassName,
        result->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(self->mParentClassName, "sClass_clone", 17, "char*"));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X289=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _condtional_value_X289;    })) {
        __dec_obj45=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sClass_clone", 18, "char*"));
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__84 = result;
    come_call_finalizer(sClass_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__84;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _condtional_value_X277;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__78;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* result;
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _condtional_value_X278;
_Bool _condtional_value_X279;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__83;
    if(({    (_condtional_value_X277=(self==((void*)0)));    _condtional_value_X277;    })) {
        __result_obj__78 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__78, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__78;
    }
    result=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1017, "struct list$1tuple2$2char$phsType$ph$ph*"))));
    it=self->head;
    while(({    (_condtional_value_X278=(it!=((void*)0)));    _condtional_value_X278;    })) {
        if(({        (_condtional_value_X279=(1));        _condtional_value_X279;        })) {
            list$1tuple2$2char$phsType$ph$ph_add(result,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it->item)));
        }
        else {
            list$1tuple2$2char$phsType$ph$ph_add(result,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__83 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__83, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__83;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__79;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__79 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__79, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__79;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
_Bool _condtional_value_X280;
void* __right_value92 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem;
struct tuple2$2char$phsType$ph* __dec_obj38;
_Bool _condtional_value_X281;
void* __right_value93 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_28;
struct tuple2$2char$phsType$ph* __dec_obj39;
void* __right_value94 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_29;
struct tuple2$2char$phsType$ph* __dec_obj40;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__80;
    if(({    (_condtional_value_X280=(self->len==0));    _condtional_value_X280;    })) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value92=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj38=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X281=(self->len==1));    _condtional_value_X281;    })) {
        litem_28=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value93=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj39=litem_28->item,
        litem_28->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value94=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj40=litem_29->item,
        litem_29->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__80 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__80;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X282;
struct tuple2$2char$phsType$ph* __result_obj__81;
void* __right_value95 = (void*)0;
struct tuple2$2char$phsType$ph* result;
_Bool _condtional_value_X283;
void* __right_value96 = (void*)0;
char* __dec_obj41;
_Bool _condtional_value_X284;
void* __right_value97 = (void*)0;
struct sType* __dec_obj42;
struct tuple2$2char$phsType$ph* __result_obj__82;
    if(({    (_condtional_value_X282=(self==(void*)0));    _condtional_value_X282;    })) {
        __result_obj__81 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__81, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__81;
    }
    result=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(({    (_condtional_value_X283=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X283;    })) {
        __dec_obj41=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X284=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X284;    })) {
        __dec_obj42=result->v2,
        result->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__82 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsType$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__82, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__82;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
_Bool _condtional_value_X285;
_Bool _condtional_value_X286;
    if(({    (_condtional_value_X285=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X285;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X286=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X286;    })) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _condtional_value_X287;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    it=self->head;
    while(({    (_condtional_value_X287=(it!=((void*)0)));    _condtional_value_X287;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sStructNode_finalize(struct sStructNode* self){
_Bool _condtional_value_X290;
_Bool _condtional_value_X291;
_Bool _condtional_value_X292;
    if(({    (_condtional_value_X290=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X290;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X291=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X291;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X292=(self!=((void*)0)&&self->mClass!=((void*)0)));    _condtional_value_X292;    })) {
        come_call_finalizer(sClass_finalize, self->mClass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sInfo* info){
void* __right_value106 = (void*)0;
char* __dec_obj47;
struct sStructNobodyNode* __result_obj__88;
    ((struct sNodeBase*)(__right_value106=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value106, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj47=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__88 = (struct sStructNobodyNode*)come_increment_ref_count(self);
    come_call_finalizer(sStructNobodyNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sStructNobodyNode_finalize, __result_obj__88, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__88;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __right_value107 = (void*)0;
char* __result_obj__89;
    __result_obj__89 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string("sStructNobodyNode"))));
    (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__89 = come_decrement_ref_count(__result_obj__89, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__89;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
char* name;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
_Bool __result_obj__90;
    name=(char*)come_increment_ref_count(self->mName);
    map$2char$phbuffer$ph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(__builtin_string(name)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value109=xsprintf("struct %s;\n",name))))));
    (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1, 0, (void*)0));
    __result_obj__90 = (_Bool)1;
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__90;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
_Bool _condtional_value_X293;
_Bool _condtional_value_X294;
    if(({    (_condtional_value_X293=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X293;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X294=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X294;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __right_value111 = (void*)0;
struct sNothingNode* __result_obj__91;
    ((struct sNodeBase*)(__right_value111=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value111, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__91 = (struct sNothingNode*)come_increment_ref_count(self);
    come_call_finalizer(sNothingNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sNothingNode_finalize, __result_obj__91, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__91;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __right_value112 = (void*)0;
char* __result_obj__92;
    __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string("sNothingNode"))));
    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__92;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNothingNode_finalize(struct sNothingNode* self){
_Bool _condtional_value_X295;
    if(({    (_condtional_value_X295=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X295;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNode* create_nothing_node(struct sInfo* info){
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value117 = (void*)0;
struct sNode* __result_obj__95;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 211, "struct sNode");
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value114=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "14struct.c", 211, "struct sNothingNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__95 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value117=_inf_value1)));
    come_call_finalizer(sNothingNode_finalize, __right_value114, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value117) ? __right_value117 = come_decrement_ref_count(__right_value117, ((struct sNode*)__right_value117)->finalize, ((struct sNode*)__right_value117)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__95) ? __result_obj__95 = come_decrement_ref_count(__result_obj__95, ((struct sNode*)__result_obj__95)->finalize, ((struct sNode*)__result_obj__95)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__95;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
_Bool _condtional_value_X296;
struct sNothingNode* __result_obj__93;
void* __right_value115 = (void*)0;
struct sNothingNode* result;
_Bool _condtional_value_X297;
_Bool _condtional_value_X298;
void* __right_value116 = (void*)0;
char* __dec_obj48;
_Bool _condtional_value_X299;
struct sNothingNode* __result_obj__94;
    if(({    (_condtional_value_X296=(self==(void*)0));    _condtional_value_X296;    })) {
        __result_obj__93 = (void*)0;
        return __result_obj__93;
    }
    result=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode*"));
    if(({    (_condtional_value_X297=(self!=((void*)0)));    _condtional_value_X297;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X298=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X298;    })) {
        __dec_obj48=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNothingNode_clone", 5, "char*"));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X299=(self!=((void*)0)));    _condtional_value_X299;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__94 = result;
    come_call_finalizer(sNothingNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__94;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info){
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
char* __dec_obj49;
void* __right_value120 = (void*)0;
struct sClass* __dec_obj50;
struct list$1sNode$ph* __dec_obj51;
struct sClassNode* __result_obj__96;
    ((struct sNodeBase*)(__right_value118=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value118, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj49=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj50=self->mClass,
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer(sClass_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj51=self->mMethods,
    self->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(methods);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__96 = (struct sClassNode*)come_increment_ref_count(self);
    come_call_finalizer(sClassNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, methods, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sClassNode_finalize, __result_obj__96, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__96;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __right_value121 = (void*)0;
char* __result_obj__97;
    __result_obj__97 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string("sClassNode"))));
    (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__97 = come_decrement_ref_count(__result_obj__97, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__97;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
struct sClass* klass;
void* __right_value122 = (void*)0;
char* name;
void* __right_value123 = (void*)0;
_Bool _condtional_value_X304;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
_Bool _condtional_value_X305;
void* __right_value127 = (void*)0;
struct sClass* klass2;
void* __right_value128 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj52;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct sType* type;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct sType* override_;
_Bool _condtional_value_X311;
_Bool _condtional_value_X312;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct list$1sNode$ph* o2_saved;
struct sNode* it;
_Bool _condtional_value_X341;
_Bool _condtional_value_X342;
_Bool _condtional_value_X345;
_Bool Value;
_Bool _condtional_value_X346;
_Bool __result_obj__115;
_Bool _condtional_value_X347;
_Bool __result_obj__116;
    klass=(struct sClass*)come_increment_ref_count(self->mClass);
    name=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(({    (_condtional_value_X304=(((struct sClass*)(__right_value123=map$2char$phsClass$ph_at(info->classes,name,((void*)0))))==((void*)0)));    come_call_finalizer(sClass_finalize, __right_value123, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X304;    })) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(name),(struct sClass*)come_increment_ref_count(sClass_clone(klass)));
    }
    if(({    (_condtional_value_X305=(((struct sClass*)(__right_value125=map$2char$phsClass$ph_at(info->classes,name,((void*)0))))&&list$1tuple2$2char$phsType$ph$ph_length(((struct sClass*)(__right_value126=map$2char$phsClass$ph_at(info->classes,name,((void*)0))))->mFields)==0));    come_call_finalizer(sClass_finalize, __right_value125, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sClass_finalize, __right_value126, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X305;    })) {
        klass2=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,name,((void*)0)));
        __dec_obj52=klass2->mFields,
        klass2->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph$p_clone(klass->mFields));
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClass_finalize, klass2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 250, "struct sType*")),(char*)come_increment_ref_count(name),(_Bool)0,info));
    override_=((struct sType*)(__right_value132=map$2char$phsType$ph_at(info->types,((char*)(__right_value131=__builtin_string(name))),((void*)0))));
    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sType_finalize, __right_value132, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(({    (_condtional_value_X311=(override_));    _condtional_value_X311;    })) {
        if(({        (_condtional_value_X312=(override_->mTypedef));        _condtional_value_X312;        })) {
            type->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(name)),(struct sType*)come_increment_ref_count(sType_clone(type)));
    output_struct(klass,info);
    for(    ({    (_condtional_value_X341=(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(self->mMethods),it=list$1sNode$ph_begin(o2_saved)));    _condtional_value_X341;    });    ({    (_condtional_value_X342=(!list$1sNode$ph_end(o2_saved)));    _condtional_value_X342;    });    ({    (_condtional_value_X345=(it=list$1sNode$ph_next(o2_saved)));    _condtional_value_X345;    })    ){
        Value=node_compile(it,info);
        if(({        (_condtional_value_X346=(!Value));        _condtional_value_X346;        })) {
            __result_obj__115 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__115;
        }
        else {
        }
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(({    (_condtional_value_X347=(info->output_header_file));    _condtional_value_X347;    })) {
        output_struct_come_header(klass,info);
    }
    __result_obj__116 = (_Bool)1;
    come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__116;
}

static void sClassNode_finalize(struct sClassNode* self){
_Bool _condtional_value_X300;
_Bool _condtional_value_X301;
_Bool _condtional_value_X302;
_Bool _condtional_value_X303;
    if(({    (_condtional_value_X300=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X300;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X301=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X301;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X302=(self!=((void*)0)&&self->mClass!=((void*)0)));    _condtional_value_X302;    })) {
        come_call_finalizer(sClass_finalize, self->mClass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X303=(self!=((void*)0)&&self->mMethods!=((void*)0)));    _condtional_value_X303;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mMethods, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X306;
_Bool _condtional_value_X307;
_Bool _condtional_value_X308;
struct sType* __result_obj__98;
_Bool _condtional_value_X309;
_Bool _condtional_value_X310;
struct sType* __result_obj__99;
struct sType* __result_obj__100;
struct sType* __result_obj__101;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X306=((_Bool)1));    _condtional_value_X306;    })) {
        if(({        (_condtional_value_X307=(self->item_existance[it]));        _condtional_value_X307;        })) {
            if(({            (_condtional_value_X308=(string_equals(self->keys[it],key)));            _condtional_value_X308;            })) {
                __result_obj__98 = (struct sType*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__98, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__98;
            }
            it++;
            if(({            (_condtional_value_X309=(it>=self->size));            _condtional_value_X309;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X310=(it==hash));            _condtional_value_X310;            })) {
                __result_obj__99 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__99, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__99;
            }
        }
        else {
            __result_obj__100 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__100, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__100;
        }
    }
    __result_obj__101 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__101, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__101;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
_Bool _condtional_value_X313;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X325;
_Bool _condtional_value_X326;
_Bool _condtional_value_X327;
_Bool _condtional_value_X328;
_Bool _condtional_value_X329;
_Bool _condtional_value_X330;
_Bool _condtional_value_X331;
_Bool _condtional_value_X332;
_Bool _condtional_value_X333;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X334;
_Bool _condtional_value_X335;
_Bool _condtional_value_X336;
_Bool _condtional_value_X337;
_Bool _condtional_value_X338;
struct map$2char$phsType$ph* __result_obj__108;
    if(({    (_condtional_value_X313=(self->len*10>=self->size));    _condtional_value_X313;    })) {
        map$2char$phsType$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X325=((_Bool)1));    _condtional_value_X325;    })) {
        if(({        (_condtional_value_X326=(self->item_existance[it]));        _condtional_value_X326;        })) {
            if(({            (_condtional_value_X327=(string_equals(self->keys[it],key)));            _condtional_value_X327;            })) {
                if(({                (_condtional_value_X328=(1));                _condtional_value_X328;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X329=(1));                _condtional_value_X329;                })) {
                    come_call_finalizer(sType_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X330=(it>=self->size));            _condtional_value_X330;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X331=(it==hash));            _condtional_value_X331;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X332=(1));            _condtional_value_X332;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X333=(1));            _condtional_value_X333;            })) {
                self->items[it]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(    ({    (_condtional_value_X334=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X334;    });    ({    (_condtional_value_X335=(!list$1char$ph_end(self->key_list)));    _condtional_value_X335;    });    ({    (_condtional_value_X336=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X336;    })    ){
        if(({        (_condtional_value_X337=(string_equals(it2,key)));        _condtional_value_X337;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X338=(!same_key_exist));    _condtional_value_X338;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__108 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__108;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self){
int size;
void* __right_value133 = (void*)0;
char** keys;
void* __right_value134 = (void*)0;
struct sType** items;
void* __right_value135 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X316;
_Bool _condtional_value_X317;
_Bool _condtional_value_X320;
struct sType* default_value;
void* __right_value136 = (void*)0;
struct sType* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X321;
_Bool _condtional_value_X322;
_Bool _condtional_value_X323;
_Bool _condtional_value_X324;
struct sType* default_value_32;
void* __right_value137 = (void*)0;
default_value = (void*)0;
default_value_32 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value133=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2221, "char**"))));
    items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value134=(struct sType**)come_calloc_v2(1, sizeof(struct sType*)*(1*(size)), "/usr/local/include/comelang.h", 2222, "struct sType**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value135=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2223, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X316=(it=map$2char$phsType$ph_begin(self)));    _condtional_value_X316;    });    ({    (_condtional_value_X317=(!map$2char$phsType$ph_end(self)));    _condtional_value_X317;    });    ({    (_condtional_value_X320=(it=map$2char$phsType$ph_next(self)));    _condtional_value_X320;    })    ){
        memset(&default_value,0,sizeof(struct sType*));
        it2=((struct sType*)(__right_value136=map$2char$phsType$ph_at(self,it,(struct sType*)come_increment_ref_count(default_value))));
        come_call_finalizer(sType_finalize, __right_value136, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X321=((_Bool)1));        _condtional_value_X321;        })) {
            if(({            (_condtional_value_X322=(item_existance[n]));            _condtional_value_X322;            })) {
                n++;
                if(({                (_condtional_value_X323=(n>=size));                _condtional_value_X323;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X324=(n==hash));                _condtional_value_X324;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((struct sType*)(__right_value137=map$2char$phsType$ph_at(self,it,(struct sType*)come_increment_ref_count(default_value_32))));
                come_call_finalizer(sType_finalize, __right_value137, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len++;
                come_call_finalizer(sType_finalize, default_value_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sType_finalize, default_value_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self){
_Bool _condtional_value_X314;
char* result;
char* __result_obj__102;
_Bool _condtional_value_X315;
char* __result_obj__103;
char* result_30;
char* __result_obj__104;
result = (void*)0;
result_30 = (void*)0;
    if(({    (_condtional_value_X314=(self==((void*)0)));    _condtional_value_X314;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__102 = result;
        return __result_obj__102;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X315=(self->key_list->it));    _condtional_value_X315;    })) {
        __result_obj__103 = self->key_list->it->item;
        return __result_obj__103;
    }
    memset(&result_30,0,sizeof(char*));
    __result_obj__104 = result_30;
    return __result_obj__104;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self){
_Bool _condtional_value_X318;
char* result;
char* __result_obj__105;
_Bool _condtional_value_X319;
char* __result_obj__106;
char* result_31;
char* __result_obj__107;
result = (void*)0;
result_31 = (void*)0;
    if(({    (_condtional_value_X318=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X318;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__105 = result;
        return __result_obj__105;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X319=(self->key_list->it));    _condtional_value_X319;    })) {
        __result_obj__106 = self->key_list->it->item;
        return __result_obj__106;
    }
    memset(&result_31,0,sizeof(char*));
    __result_obj__107 = result_31;
    return __result_obj__107;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
_Bool _condtional_value_X339;
struct sNode* result;
struct sNode* __result_obj__109;
_Bool _condtional_value_X340;
struct sNode* __result_obj__110;
struct sNode* result_33;
struct sNode* __result_obj__111;
result = (void*)0;
result_33 = (void*)0;
    if(({    (_condtional_value_X339=(self==((void*)0)));    _condtional_value_X339;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__109 = result;
        return __result_obj__109;
    }
    self->it=self->head;
    if(({    (_condtional_value_X340=(self->it));    _condtional_value_X340;    })) {
        __result_obj__110 = self->it->item;
        return __result_obj__110;
    }
    memset(&result_33,0,sizeof(struct sNode*));
    __result_obj__111 = result_33;
    return __result_obj__111;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
_Bool _condtional_value_X343;
struct sNode* result;
struct sNode* __result_obj__112;
_Bool _condtional_value_X344;
struct sNode* __result_obj__113;
struct sNode* result_34;
struct sNode* __result_obj__114;
result = (void*)0;
result_34 = (void*)0;
    if(({    (_condtional_value_X343=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X343;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__112 = result;
        return __result_obj__112;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X344=(self->it));    _condtional_value_X344;    })) {
        __result_obj__113 = self->it->item;
        return __result_obj__113;
    }
    memset(&result_34,0,sizeof(struct sNode*));
    __result_obj__114 = result_34;
    return __result_obj__114;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
struct sClass* klass;
void* __right_value140 = (void*)0;
_Bool _condtional_value_X348;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct sClass* __dec_obj53;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct sClass* __dec_obj54;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct sType* type;
void* __right_value148 = (void*)0;
struct sType* override_;
_Bool _condtional_value_X350;
_Bool _condtional_value_X351;
void* __right_value149 = (void*)0;
struct sClass* parent_class;
_Bool _condtional_value_X352;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
char* parent_class_name;
void* __right_value152 = (void*)0;
_Bool _condtional_value_X353;
_Bool _condtional_value_X354;
_Bool _condtional_value_X355;
_Bool multiple_declare;
char* p;
int sline;
void* __right_value153 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* type_35=0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X358;
_Bool _condtional_value_X359;
void* __right_value154 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* base_type=0;
char* name_36=0;
_Bool err_37=0;
void* __right_value155 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var6 = (void*)0;
struct sType* type2=0;
char* name2=0;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
_Bool _condtional_value_X362;
void* __right_value158 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var7 = (void*)0;
struct sType* type2_38=0;
char* name2_39=0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type2_40=0;
char* name_41=0;
_Bool err_42=0;
_Bool _condtional_value_X363;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
_Bool _condtional_value_X364;
_Bool _condtional_value_X365;
void* __right_value164 = (void*)0;
char* struct_attribute2;
_Bool _condtional_value_X366;
void* __right_value165 = (void*)0;
char* __dec_obj55;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
_Bool _condtional_value_X367;
_Bool _condtional_value_X368;
char* __dec_obj56;
_Bool _condtional_value_X369;
char* __dec_obj57;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
char* __dec_obj58;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value178 = (void*)0;
struct sNode* node;
_Bool Value;
_Bool _condtional_value_X376;
struct sNode* __result_obj__120;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value181 = (void*)0;
struct sNode* __result_obj__121;
klass = (void*)0;
    if(({    (_condtional_value_X348=(((struct sClass*)(__right_value140=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))))==((void*)0)));    come_call_finalizer(sClass_finalize, __right_value140, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _condtional_value_X348;    })) {
        __dec_obj53=klass,
        klass=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 279, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
        come_call_finalizer(sClass_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass));
    }
    else {
        __dec_obj54=klass,
        klass=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name,((void*)0)));
        come_call_finalizer(sClass_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        list$1tuple2$2char$phsType$ph$ph_reset(klass->mFields);
    }
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 287, "struct sType*")),(char*)come_increment_ref_count(type_name),(_Bool)0,info));
    override_=((struct sType*)(__right_value148=map$2char$phsType$ph_at(info->types,type_name,((void*)0))));
    come_call_finalizer(sType_finalize, __right_value148, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(({    (_condtional_value_X350=(override_));    _condtional_value_X350;    })) {
        if(({        (_condtional_value_X351=(override_->mTypedef));        _condtional_value_X351;        })) {
            type->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type)));
    parent_class=((void*)0);
    if(({    (_condtional_value_X352=(parsecmp("extends",info)));    _condtional_value_X352;    })) {
        ((char*)(__right_value150=parse_word(info)));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1, 0, (void*)0));
        parent_class_name=(char*)come_increment_ref_count(parse_word(info));
        parent_class=((struct sClass*)(__right_value152=map$2char$phsClass$ph_operator_load_element(info->classes,parent_class_name)));
        come_call_finalizer(sClass_finalize, __right_value152, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_condtional_value_X353=(parent_class==((void*)0)));        _condtional_value_X353;        })) {
            err_msg(info,"invalid class name(%s)",parent_class_name);
            exit(1);
        }
        (parent_class_name = come_decrement_ref_count(parent_class_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    expected_next_character(123,info);
    while(({    (_condtional_value_X354=((_Bool)1));    _condtional_value_X354;    })) {
        parse_sharp_v5(info);
        if(({        (_condtional_value_X355=(*info->p==125));        _condtional_value_X355;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        multiple_declare=(_Bool)0;
        {
            p=info->p;
            sline=info->sline;
            multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value153=backtrace_parse_type((_Bool)1,info)));
            type_35=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err=multiple_assign_var4->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value153, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_condtional_value_X358=(err&&*info->p==44));            _condtional_value_X358;            })) {
                multiple_declare=(_Bool)1;
            }
            info->p=p;
            info->sline=sline;
            come_call_finalizer(sType_finalize, type_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(({        (_condtional_value_X359=(multiple_declare));        _condtional_value_X359;        })) {
            multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value154=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_36=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_37=multiple_assign_var5->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value154, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value155=parse_variable_name((struct sType*)come_increment_ref_count(base_type),(_Bool)1,info)));
            type2=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value155, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 343, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2),(struct sType*)come_increment_ref_count(type2))));
            while(({            (_condtional_value_X362=(*info->p==44));            _condtional_value_X362;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value158=parse_variable_name((struct sType*)come_increment_ref_count(base_type),(_Bool)0,info)));
                type2_38=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_39=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value158, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 351, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_39),(struct sType*)come_increment_ref_count(type2_38))));
                come_call_finalizer(sType_finalize, type2_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name2_39 = come_decrement_ref_count(name2_39, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_36 = come_decrement_ref_count(name_36, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value161=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_40=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_41=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_42=multiple_assign_var8->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value161, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_condtional_value_X363=(!err_42));            _condtional_value_X363;            })) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 362, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_41),(struct sType*)come_increment_ref_count(type2_40))));
            come_call_finalizer(sType_finalize, type2_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_41 = come_decrement_ref_count(name_41, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(({        (_condtional_value_X364=(*info->p==59));        _condtional_value_X364;        })) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(({        (_condtional_value_X365=(*info->p==125));        _condtional_value_X365;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    struct_attribute2=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(({    (_condtional_value_X366=(parent_class));    _condtional_value_X366;    })) {
        __dec_obj55=klass->mParentClassName,
        klass->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(parent_class->mName, "14struct.c", 382, "char*"));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(klass->mName)),(struct sClass*)come_increment_ref_count(sClass_clone(klass)));
    }
    if(({    (_condtional_value_X367=(string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2,"")));    _condtional_value_X367;    })) {
    }
    else if(({    (_condtional_value_X368=(string_operator_equals(struct_attribute,"")));    _condtional_value_X368;    })) {
        __dec_obj56=klass->mAttribute,
        klass->mAttribute=(char*)come_increment_ref_count(struct_attribute2);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(({    (_condtional_value_X369=(string_operator_equals(struct_attribute2,"")));    _condtional_value_X369;    })) {
        __dec_obj57=klass->mAttribute,
        klass->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj58=klass->mAttribute,
        klass->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value169=string_operator_add(struct_attribute," "))),struct_attribute2));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 398, "struct sNode");
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value173=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc_v2(1, sizeof(struct sStructNode)*(1), "14struct.c", 398, "struct sStructNode*")),(char*)come_increment_ref_count(__builtin_string(type_name)),klass,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    node=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer(sStructNode_finalize, __right_value173, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value=node_compile(node,info);
    if(({    (_condtional_value_X376=(!Value));    _condtional_value_X376;    })) {
        __result_obj__120 = (void*)come_increment_ref_count(((void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (struct_attribute2 = come_decrement_ref_count(struct_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((__result_obj__120) ? __result_obj__120 = come_decrement_ref_count(__result_obj__120, ((struct sNode*)__result_obj__120)->finalize, ((struct sNode*)__result_obj__120)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__120;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 404, "struct sNode");
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value180=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "14struct.c", 404, "struct sNothingNode*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__121 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value181=_inf_value3)));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (struct_attribute2 = come_decrement_ref_count(struct_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sNothingNode_finalize, __right_value180, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value181) ? __right_value181 = come_decrement_ref_count(__right_value181, ((struct sNode*)__right_value181)->finalize, ((struct sNode*)__right_value181)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__121) ? __result_obj__121 = come_decrement_ref_count(__result_obj__121, ((struct sNode*)__result_obj__121)->finalize, ((struct sNode*)__result_obj__121)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__121;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it;
_Bool _condtional_value_X349;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__117;
    it=self->head;
    while(({    (_condtional_value_X349=(it!=((void*)0)));    _condtional_value_X349;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__117 = self;
    return __result_obj__117;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
_Bool _condtional_value_X356;
_Bool _condtional_value_X357;
    if(({    (_condtional_value_X356=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X356;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X357=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X357;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
_Bool _condtional_value_X360;
_Bool _condtional_value_X361;
    if(({    (_condtional_value_X360=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X360;    })) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X361=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X361;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
_Bool _condtional_value_X370;
struct sStructNode* __result_obj__118;
void* __right_value174 = (void*)0;
struct sStructNode* result;
_Bool _condtional_value_X371;
_Bool _condtional_value_X372;
void* __right_value175 = (void*)0;
char* __dec_obj59;
_Bool _condtional_value_X373;
_Bool _condtional_value_X374;
void* __right_value176 = (void*)0;
char* __dec_obj60;
_Bool _condtional_value_X375;
void* __right_value177 = (void*)0;
struct sClass* __dec_obj61;
struct sStructNode* __result_obj__119;
    if(({    (_condtional_value_X370=(self==(void*)0));    _condtional_value_X370;    })) {
        __result_obj__118 = (void*)0;
        return __result_obj__118;
    }
    result=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc_v2(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode*"));
    if(({    (_condtional_value_X371=(self!=((void*)0)));    _condtional_value_X371;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X372=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X372;    })) {
        __dec_obj59=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructNode_clone", 5, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X373=(self!=((void*)0)));    _condtional_value_X373;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X374=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X374;    })) {
        __dec_obj60=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStructNode_clone", 7, "char*"));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X375=(self!=((void*)0)&&self->mClass!=((void*)0)));    _condtional_value_X375;    })) {
        __dec_obj61=result->mClass,
        result->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer(sClass_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__119 = result;
    come_call_finalizer(sStructNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__119;
}

char* parse_struct_attribute(struct sInfo* info){
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct buffer* result;
_Bool _condtional_value_X377;
_Bool _condtional_value_X378;
char* p;
int sline;
void* __right_value184 = (void*)0;
char* buf;
_Bool _condtional_value_X379;
char* head;
char* tail;
_Bool _condtional_value_X380;
char* head_43;
char* tail_44;
void* __right_value185 = (void*)0;
char* __result_obj__122;
    parse_sharp_v5(info);
    result=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 410, "struct buffer*"))));
    while(({    (_condtional_value_X377=(1));    _condtional_value_X377;    })) {
        if(({        (_condtional_value_X378=(xisalnum(*info->p)||*info->p==95));        _condtional_value_X378;        })) {
        }
        else {
            break;
        }
        p=info->p;
        sline=info->sline;
        buf=(char*)come_increment_ref_count(parse_word(info));
        info->p=p;
        info->sline=sline;
        if(({        (_condtional_value_X379=(memcmp(info->p,"__attribute__",strlen("__attribute__"))==0));        _condtional_value_X379;        })) {
            head=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail=info->p;
            buffer_append(result,head,tail-head);
        }
        else if(({        (_condtional_value_X380=(string_operator_equals(buf,"asm")));        _condtional_value_X380;        })) {
            head_43=info->p;
            info->p+=strlen("asm");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_44=info->p;
            buffer_append(result,head_43,tail_44-head_43);
        }
        else {
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    parse_sharp_v5(info);
    __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value185=buffer_to_string(result))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__122;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool _condtional_value_X381;
char* source_head;
void* __right_value186 = (void*)0;
char* struct_attribute;
void* __right_value187 = (void*)0;
char* type_name;
_Bool _condtional_value_X382;
struct sClass* struct_class;
void* __right_value188 = (void*)0;
_Bool _condtional_value_X383;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct sClass* __dec_obj62;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct sClass* __dec_obj63;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct sType* type;
void* __right_value197 = (void*)0;
struct sType* override_;
_Bool _condtional_value_X384;
_Bool _condtional_value_X385;
char* source_tail;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct buffer* header;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
char* id;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value210 = (void*)0;
struct sNode* __result_obj__125;
_Bool _condtional_value_X391;
_Bool _condtional_value_X392;
void* __right_value211 = (void*)0;
char* T;
void* __right_value212 = (void*)0;
_Bool _condtional_value_X393;
_Bool _condtional_value_X394;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
_Bool _condtional_value_X395;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct sClass* generics_class;
void* __right_value217 = (void*)0;
_Bool _condtional_value_X396;
_Bool _condtional_value_X397;
void* __right_value218 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var9 = (void*)0;
struct sType* type2=0;
char* name=0;
_Bool err=0;
_Bool _condtional_value_X398;
_Bool _condtional_value_X399;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
_Bool _condtional_value_X400;
void* __right_value221 = (void*)0;
char* name2;
void* __right_value222 = (void*)0;
struct sType* type3;
_Bool _condtional_value_X401;
_Bool no_comma;
void* __right_value223 = (void*)0;
struct sNode* node;
struct sNode* __dec_obj66;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
_Bool _condtional_value_X402;
_Bool _condtional_value_X403;
void* __right_value228 = (void*)0;
char* source_tail_45;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct buffer* header_46;
void* __right_value231 = (void*)0;
char* id_47;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value235 = (void*)0;
struct sNode* __result_obj__126;
struct sClass* struct_class_48;
void* __right_value236 = (void*)0;
_Bool _condtional_value_X406;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct sClass* __dec_obj67;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct sClass* __dec_obj68;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sType* type_49;
void* __right_value244 = (void*)0;
struct sType* override__50;
_Bool _condtional_value_X407;
_Bool _condtional_value_X408;
struct sClass* parent_class;
_Bool _condtional_value_X409;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
char* parent_class_name;
void* __right_value247 = (void*)0;
_Bool _condtional_value_X410;
_Bool _condtional_value_X411;
_Bool _condtional_value_X412;
_Bool multiple_declare;
char* p;
int sline;
void* __right_value248 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var10 = (void*)0;
struct sType* type_51=0;
char* name_52=0;
_Bool err_53=0;
_Bool _condtional_value_X413;
_Bool _condtional_value_X414;
void* __right_value249 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var11 = (void*)0;
struct sType* base_type=0;
char* name_54=0;
_Bool err_55=0;
void* __right_value250 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var12 = (void*)0;
struct sType* type2_56=0;
char* name2_57=0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
_Bool _condtional_value_X415;
void* __right_value253 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var13 = (void*)0;
struct sType* type2_58=0;
char* name2_59=0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* type2_60=0;
char* name_61=0;
_Bool err_62=0;
_Bool _condtional_value_X416;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
_Bool _condtional_value_X417;
_Bool _condtional_value_X418;
void* __right_value259 = (void*)0;
char* struct_attribute2;
char* source_tail_63;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct buffer* header_64;
void* __right_value262 = (void*)0;
char* id_65;
void* __right_value263 = (void*)0;
_Bool _condtional_value_X419;
_Bool _condtional_value_X420;
char* __dec_obj69;
_Bool _condtional_value_X421;
char* __dec_obj70;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
char* __dec_obj71;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value270 = (void*)0;
struct sNode* __result_obj__127;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
_Bool _condtional_value_X422;
_Bool uniq_class;
_Bool _condtional_value_X423;
void* __right_value273 = (void*)0;
char* source_head_66;
void* __right_value274 = (void*)0;
char* type_name_67;
void* __right_value275 = (void*)0;
char* id_68;
struct sClass* parent_class_69;
_Bool _condtional_value_X424;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
char* parent_class_name_70;
void* __right_value278 = (void*)0;
_Bool _condtional_value_X425;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1sClass$p* parent_classes;
struct sClass* parent_class2;
_Bool _condtional_value_X427;
_Bool _condtional_value_X430;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sClass* struct_class_73;
_Bool _condtional_value_X431;
void* __right_value289 = (void*)0;
char* __dec_obj72;
struct sClass* defining_class;
void* __right_value290 = (void*)0;
_Bool _condtional_value_X432;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value298 = (void*)0;
struct list$1sClass$p* o2_saved;
struct sClass* parent;
_Bool _condtional_value_X438;
_Bool _condtional_value_X439;
_Bool _condtional_value_X442;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_78;
struct tuple2$2char$phsType$ph* it;
_Bool _condtional_value_X443;
_Bool _condtional_value_X444;
_Bool _condtional_value_X445;
void* __right_value299 = (void*)0;
char* head_79;
char* p_saved;
int sline_saved;
char* sname_saved;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1sNode$ph* methods;
_Bool _condtional_value_X446;
_Bool _condtional_value_X447;
_Bool _condtional_value_X448;
void* __right_value302 = (void*)0;
char* __dec_obj73;
char* __dec_obj74;
struct map$2char$phchar$ph* __dec_obj75;
_Bool _condtional_value_X459;
_Bool include_;
_Bool multiple_declare_81;
_Bool _condtional_value_X460;
char* p_82;
int sline_83;
_Bool _condtional_value_X461;
void* __right_value303 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_84=0;
char* name_85=0;
_Bool err_86=0;
_Bool _condtional_value_X462;
_Bool define_function_flag;
_Bool _condtional_value_X463;
char* p_87;
int sline_88;
_Bool _condtional_value_X464;
_Bool invalid_type;
_Bool _condtional_value_X465;
void* __right_value304 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* result_type=0;
char* fun_name=0;
_Bool err_89=0;
char* word;
_Bool _condtional_value_X466;
void* __right_value305 = (void*)0;
char* __dec_obj76;
_Bool _condtional_value_X467;
void* __right_value306 = (void*)0;
char* __dec_obj77;
char* __dec_obj78;
_Bool _condtional_value_X468;
_Bool _condtional_value_X469;
_Bool _condtional_value_X470;
_Bool _condtional_value_X471;
_Bool _condtional_value_X472;
_Bool _condtional_value_X473;
_Bool _condtional_value_X474;
void* __right_value307 = (void*)0;
char* __dec_obj79;
_Bool _condtional_value_X475;
_Bool _condtional_value_X476;
char* tail;
int pointer_num;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj80;
void* __right_value310 = (void*)0;
struct sNode* method;
struct sType* __dec_obj81;
_Bool _condtional_value_X479;
void* __right_value314 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* base_type_92=0;
char* name_93=0;
_Bool err_94=0;
void* __right_value315 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var18 = (void*)0;
struct sType* type2_95=0;
char* name2_96=0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
_Bool _condtional_value_X480;
void* __right_value318 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var19 = (void*)0;
struct sType* type2_97=0;
char* name2_98=0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
_Bool _condtional_value_X481;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
char* module_name;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1char$ph* params;
_Bool _condtional_value_X482;
_Bool _condtional_value_X483;
void* __right_value325 = (void*)0;
char* word_99;
_Bool _condtional_value_X484;
_Bool _condtional_value_X485;
_Bool _condtional_value_X486;
_Bool _condtional_value_X487;
void* __right_value326 = (void*)0;
char* __dec_obj85;
void* __right_value327 = (void*)0;
char* __dec_obj86;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
_Bool _condtional_value_X502;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sClassModule* module;
_Bool _condtional_value_X504;
void* __right_value334 = (void*)0;
void* __right_value340 = (void*)0;
struct map$2char$phchar$ph* __dec_obj88;
int i;
struct list$1char$ph* o2_saved_101;
char* it_102;
_Bool _condtional_value_X519;
_Bool _condtional_value_X520;
_Bool _condtional_value_X521;
void* __right_value341 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
char* __dec_obj89;
void* __right_value353 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var20 = (void*)0;
struct sType* type2_106=0;
char* name_107=0;
_Bool err_108=0;
_Bool _condtional_value_X559;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
_Bool _condtional_value_X560;
_Bool _condtional_value_X561;
_Bool _condtional_value_X562;
_Bool _condtional_value_X563;
void* __right_value356 = (void*)0;
char* __dec_obj90;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value365 = (void*)0;
struct sNode* __result_obj__166;
void* __right_value366 = (void*)0;
struct sNode* __result_obj__167;
struct_class = (void*)0;
struct_class_48 = (void*)0;
    if(({    (_condtional_value_X381=(charp_operator_equals(buf,"struct")));    _condtional_value_X381;    })) {
        source_head=head;
        struct_attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name=(char*)come_increment_ref_count(parse_word(info));
        if(({        (_condtional_value_X382=(*info->p==59));        _condtional_value_X382;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            if(({            (_condtional_value_X383=(((struct sClass*)(__right_value188=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))))==((void*)0)));            come_call_finalizer(sClass_finalize, __right_value188, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _condtional_value_X383;            })) {
                __dec_obj62=struct_class,
                struct_class=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 472, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
                come_call_finalizer(sClass_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 474, "struct sClass*")),(char*)come_increment_ref_count(type_name),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
            }
            else {
                __dec_obj63=struct_class,
                struct_class=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name,((void*)0)));
                come_call_finalizer(sClass_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 479, "struct sType*")),(char*)come_increment_ref_count(type_name),(_Bool)0,info));
            override_=((struct sType*)(__right_value197=map$2char$phsType$ph_at(info->types,type_name,((void*)0))));
            come_call_finalizer(sType_finalize, __right_value197, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_condtional_value_X384=(override_));            _condtional_value_X384;            })) {
                if(({                (_condtional_value_X385=(override_->mTypedef));                _condtional_value_X385;                })) {
                    type->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(type));
            source_tail=info->p;
            header=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 490, "struct buffer*"))));
            buffer_append(header,source_head,source_tail-source_head);
            id=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value201=__builtin_string(type_name))),";"));
            (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1, 0, (void*)0));
            add_come_code_at_come_struct_header(info,id,"%s",((char*)(__right_value203=buffer_to_string(header))));
            (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1, 0, (void*)0));
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 496, "struct sNode");
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value206=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc_v2(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 496, "struct sStructNobodyNode*")),(char*)come_increment_ref_count(__builtin_string(type_name)),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__125 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value210=_inf_value4)));
            come_call_finalizer(sClass_finalize, struct_class, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0, 0, (void*)0));
            (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sStructNobodyNode_finalize, __right_value206, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value210) ? __right_value210 = come_decrement_ref_count(__right_value210, ((struct sNode*)__right_value210)->finalize, ((struct sNode*)__right_value210)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__125) ? __result_obj__125 = come_decrement_ref_count(__result_obj__125, ((struct sNode*)__result_obj__125)->finalize, ((struct sNode*)__result_obj__125)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__125;
            come_call_finalizer(sClass_finalize, struct_class, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(({        (_condtional_value_X391=(*info->p==60));        _condtional_value_X391;        })) {
            list$1char$ph_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while(({            (_condtional_value_X392=((_Bool)1));            _condtional_value_X392;            })) {
                T=(char*)come_increment_ref_count(parse_word(info));
                list$1char$ph_push_back(info->generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(T, "14struct.c", 506, "char*")));
                if(({                (_condtional_value_X393=(*info->p==62));                _condtional_value_X393;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (T = come_decrement_ref_count(T, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                else if(({                (_condtional_value_X394=(*info->p==44));                _condtional_value_X394;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    err_msg(info,"invalid generics struct definition");
                    exit(2);
                }
                (T = come_decrement_ref_count(T, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(({            (_condtional_value_X395=(((struct sClass*)(__right_value214=map$2char$phsClass$ph_at(info->generics_classes,((char*)(__right_value213=__builtin_string(type_name))),((void*)0))))!=((void*)0)));            (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sClass_finalize, __right_value214, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _condtional_value_X395;            })) {
                err_msg(info,"redefined generics struct(%s)",type_name);
                exit(2);
            }
            generics_class=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 528, "struct sClass*")),(char*)come_increment_ref_count(type_name),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
            map$2char$phsClass$ph_insert(info->generics_classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(generics_class));
            expected_next_character(123,info);
            while(({            (_condtional_value_X396=((_Bool)1));            _condtional_value_X396;            })) {
                parse_sharp_v5(info);
                if(({                (_condtional_value_X397=(*info->p==125));                _condtional_value_X397;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sType$phchar$phbool$*)(__right_value218=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err=multiple_assign_var9->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value218, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(({                (_condtional_value_X398=(!err));                _condtional_value_X398;                })) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(({                (_condtional_value_X399=(*info->p==44));                _condtional_value_X399;                })) {
                    list$1tuple2$2char$phsType$ph$ph_push_back(generics_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 553, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name),(struct sType*)come_increment_ref_count(type2))));
                    while(({                    (_condtional_value_X400=(*info->p==44));                    _condtional_value_X400;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2=(char*)come_increment_ref_count(parse_word(info));
                        type3=(struct sType*)come_increment_ref_count(sType_clone(type2));
                        if(({                        (_condtional_value_X401=(*info->p==58));                        _condtional_value_X401;                        })) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma;
                            __dec_obj66=type3->mSizeNum,
                            type3->mSizeNum=(struct sNode*)come_increment_ref_count(node);
                            (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0, (void*)0) :0);
                            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        }
                        list$1tuple2$2char$phsType$ph$ph_push_back(generics_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 575, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2),(struct sType*)come_increment_ref_count(type3))));
                        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(generics_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 579, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name),(struct sType*)come_increment_ref_count(type2))));
                }
                if(({                (_condtional_value_X402=(*info->p==59));                _condtional_value_X402;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(({                (_condtional_value_X403=(*info->p==125));                _condtional_value_X403;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                parse_sharp_v5(info);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            ((struct tuple2$2char$phchar$ph*)(__right_value228=parse_attribute(info,(_Bool)0)));
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value228, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            list$1char$ph_reset(info->generics_type_names);
            source_tail_45=info->p;
            header_46=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 603, "struct buffer*"))));
            buffer_append_str(header_46,"struct ");
            buffer_append(header_46,source_head,source_tail_45-source_head);
            id_47=(char*)come_increment_ref_count(__builtin_string(type_name));
            add_come_code_at_come_struct_header(info,id_47,"%s;\n",((char*)(__right_value232=buffer_to_string(header_46))));
            (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1, 0, (void*)0));
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 610, "struct sNode");
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value234=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc_v2(1, sizeof(struct sNothingNode)*(1), "14struct.c", 610, "struct sNothingNode*")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__126 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value235=_inf_value5)));
            come_call_finalizer(sClass_finalize, generics_class, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, header_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (id_47 = come_decrement_ref_count(id_47, (void*)0, (void*)0, 0, 0, (void*)0));
            (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sNothingNode_finalize, __right_value234, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value235) ? __right_value235 = come_decrement_ref_count(__right_value235, ((struct sNode*)__right_value235)->finalize, ((struct sNode*)__right_value235)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__126) ? __result_obj__126 = come_decrement_ref_count(__result_obj__126, ((struct sNode*)__result_obj__126)->finalize, ((struct sNode*)__result_obj__126)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__126;
            come_call_finalizer(sClass_finalize, generics_class, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, header_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (id_47 = come_decrement_ref_count(id_47, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(({            (_condtional_value_X406=(((struct sClass*)(__right_value236=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))))==((void*)0)));            come_call_finalizer(sClass_finalize, __right_value236, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _condtional_value_X406;            })) {
                __dec_obj67=struct_class_48,
                struct_class_48=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 615, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info));
                come_call_finalizer(sClass_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(struct_class_48));
            }
            else {
                __dec_obj68=struct_class_48,
                struct_class_48=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name,((void*)0)));
                come_call_finalizer(sClass_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_reset(struct_class_48->mFields);
            }
            type_49=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 623, "struct sType*")),(char*)come_increment_ref_count(type_name),(_Bool)0,info));
            override__50=((struct sType*)(__right_value244=map$2char$phsType$ph_at(info->types,type_name,((void*)0))));
            come_call_finalizer(sType_finalize, __right_value244, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_condtional_value_X407=(override__50));            _condtional_value_X407;            })) {
                if(({                (_condtional_value_X408=(override__50->mTypedef));                _condtional_value_X408;                })) {
                    type_49->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(type_49));
            parent_class=((void*)0);
            if(({            (_condtional_value_X409=(parsecmp("extends",info)));            _condtional_value_X409;            })) {
                ((char*)(__right_value245=parse_word(info)));
                (__right_value245 = come_decrement_ref_count(__right_value245, (void*)0, (void*)0, 1, 0, (void*)0));
                parent_class_name=(char*)come_increment_ref_count(parse_word(info));
                parent_class=((struct sClass*)(__right_value247=map$2char$phsClass$ph_operator_load_element(info->classes,parent_class_name)));
                come_call_finalizer(sClass_finalize, __right_value247, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(({                (_condtional_value_X410=(parent_class==((void*)0)));                _condtional_value_X410;                })) {
                    err_msg(info,"invalid class name(%s)",parent_class_name);
                    exit(1);
                }
                (parent_class_name = come_decrement_ref_count(parent_class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            expected_next_character(123,info);
            while(({            (_condtional_value_X411=((_Bool)1));            _condtional_value_X411;            })) {
                parse_sharp_v5(info);
                if(({                (_condtional_value_X412=(*info->p==125));                _condtional_value_X412;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_declare=(_Bool)0;
                {
                    p=info->p;
                    sline=info->sline;
                    multiple_assign_var10=((struct tuple3$3sType$phchar$phbool$*)(__right_value248=backtrace_parse_type((_Bool)1,info)));
                    type_51=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_52=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_53=multiple_assign_var10->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value248, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(({                    (_condtional_value_X413=(err_53&&*info->p==44));                    _condtional_value_X413;                    })) {
                        multiple_declare=(_Bool)1;
                    }
                    info->p=p;
                    info->sline=sline;
                    come_call_finalizer(sType_finalize, type_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_52 = come_decrement_ref_count(name_52, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                if(({                (_condtional_value_X414=(multiple_declare));                _condtional_value_X414;                })) {
                    multiple_assign_var11=((struct tuple3$3sType$phchar$phbool$*)(__right_value249=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                    name_54=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    err_55=multiple_assign_var11->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value249, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    multiple_assign_var12=((struct tuple2$2sType$phchar$ph*)(__right_value250=parse_variable_name((struct sType*)come_increment_ref_count(base_type),(_Bool)1,info)));
                    type2_56=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                    name2_57=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value250, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_48->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 677, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_57),(struct sType*)come_increment_ref_count(type2_56))));
                    while(({                    (_condtional_value_X415=(*info->p==44));                    _condtional_value_X415;                    })) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var13=((struct tuple2$2sType$phchar$ph*)(__right_value253=parse_variable_name((struct sType*)come_increment_ref_count(base_type),(_Bool)0,info)));
                        type2_58=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_59=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value253, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_48->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 685, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_59),(struct sType*)come_increment_ref_count(type2_58))));
                        come_call_finalizer(sType_finalize, type2_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (name2_59 = come_decrement_ref_count(name2_59, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_54 = come_decrement_ref_count(name_54, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type2_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name2_57 = come_decrement_ref_count(name2_57, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                else {
                    multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value256=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_60=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                    name_61=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    err_62=multiple_assign_var14->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value256, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(({                    (_condtional_value_X416=(!err_62));                    _condtional_value_X416;                    })) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_48->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 695, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_61),(struct sType*)come_increment_ref_count(type2_60))));
                    come_call_finalizer(sType_finalize, type2_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_61 = come_decrement_ref_count(name_61, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                if(({                (_condtional_value_X417=(*info->p==59));                _condtional_value_X417;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(({                (_condtional_value_X418=(*info->p==125));                _condtional_value_X418;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            struct_attribute2=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1char$ph_reset(info->generics_type_names);
            source_tail_63=info->p;
            header_64=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "14struct.c", 720, "struct buffer*"))));
            buffer_append(header_64,source_head,source_tail_63-source_head);
            id_65=(char*)come_increment_ref_count(__builtin_string(type_name));
            add_come_code_at_come_struct_header(info,id_65,"%s;\n",((char*)(__right_value263=buffer_to_string(header_64))));
            (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1, 0, (void*)0));
            if(({            (_condtional_value_X419=(string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2,"")));            _condtional_value_X419;            })) {
            }
            else if(({            (_condtional_value_X420=(string_operator_equals(struct_attribute,"")));            _condtional_value_X420;            })) {
                __dec_obj69=struct_class_48->mAttribute,
                struct_class_48->mAttribute=(char*)come_increment_ref_count(struct_attribute2);
                __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else if(({            (_condtional_value_X421=(string_operator_equals(struct_attribute2,"")));            _condtional_value_X421;            })) {
                __dec_obj70=struct_class_48->mAttribute,
                struct_class_48->mAttribute=(char*)come_increment_ref_count(struct_attribute);
                __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                __dec_obj71=struct_class_48->mAttribute,
                struct_class_48->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value265=string_operator_add(struct_attribute," "))),struct_attribute2));
                __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value264 = come_decrement_ref_count(__right_value264, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value265 = come_decrement_ref_count(__right_value265, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 738, "struct sNode");
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value269=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc_v2(1, sizeof(struct sStructNode)*(1), "14struct.c", 738, "struct sStructNode*")),(char*)come_increment_ref_count(__builtin_string(type_name)),struct_class_48,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__127 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value270=_inf_value6)));
            come_call_finalizer(sClass_finalize, struct_class_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (struct_attribute2 = come_decrement_ref_count(struct_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, header_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (id_65 = come_decrement_ref_count(id_65, (void*)0, (void*)0, 0, 0, (void*)0));
            (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sStructNode_finalize, __right_value269, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value270) ? __right_value270 = come_decrement_ref_count(__right_value270, ((struct sNode*)__right_value270)->finalize, ((struct sNode*)__right_value270)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__127) ? __result_obj__127 = come_decrement_ref_count(__result_obj__127, ((struct sNode*)__result_obj__127)->finalize, ((struct sNode*)__result_obj__127)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__127;
            come_call_finalizer(sClass_finalize, struct_class_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (struct_attribute2 = come_decrement_ref_count(struct_attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, header_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (id_65 = come_decrement_ref_count(id_65, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(({    (_condtional_value_X422=(!gComeC&&((charp_operator_equals(buf,"uniq")&&string_operator_equals(((char*)(__right_value272=charp_substring(info->p,0,strlen("class")))),"class"))||charp_operator_equals(buf,"class"))));    (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1, 0, (void*)0));
    _condtional_value_X422;    })) {
        uniq_class=(_Bool)0;
        if(({        (_condtional_value_X423=(charp_operator_equals(buf,"uniq")));        _condtional_value_X423;        })) {
            ((char*)(__right_value273=parse_word(info)));
            (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1, 0, (void*)0));
            uniq_class=(_Bool)1;
        }
        source_head_66=head;
        type_name_67=(char*)come_increment_ref_count(parse_word(info));
        id_68=(char*)come_increment_ref_count(__builtin_string(type_name_67));
        add_come_code_at_come_struct_header(info,id_68,"struct %s;\n",type_name_67);
        parent_class_69=((void*)0);
        if(({        (_condtional_value_X424=(parsecmp("extends",info)));        _condtional_value_X424;        })) {
            ((char*)(__right_value276=parse_word(info)));
            (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1, 0, (void*)0));
            parent_class_name_70=(char*)come_increment_ref_count(parse_word(info));
            parent_class_69=((struct sClass*)(__right_value278=map$2char$phsClass$ph_operator_load_element(info->classes,parent_class_name_70)));
            come_call_finalizer(sClass_finalize, __right_value278, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_condtional_value_X425=(parent_class_69==((void*)0)));            _condtional_value_X425;            })) {
                err_msg(info,"invalid class name(%s)",parent_class_name_70);
                exit(1);
            }
            (parent_class_name_70 = come_decrement_ref_count(parent_class_name_70, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        parent_classes=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc_v2(1, sizeof(struct list$1sClass$p)*(1), "14struct.c", 771, "struct list$1sClass$p*"))));
        parent_class2=parent_class_69;
        while(({        (_condtional_value_X427=(parent_class2));        _condtional_value_X427;        })) {
            list$1sClass$p_add(parent_classes,parent_class2);
            if(({            (_condtional_value_X430=(parent_class_69->mParentClassName));            _condtional_value_X430;            })) {
                parent_class2=((struct sClass*)(__right_value286=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value285=__builtin_string(parent_class_69->mParentClassName))))));
                (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sClass_finalize, __right_value286, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            else {
                parent_class2=((void*)0);
            }
        }
        struct_class_73=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "14struct.c", 784, "struct sClass*")),(char*)come_increment_ref_count(type_name_67),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,uniq_class,info));
        if(({        (_condtional_value_X431=(parent_class_69));        _condtional_value_X431;        })) {
            __dec_obj72=struct_class_73->mParentClassName,
            struct_class_73->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(parent_class_69->mName, "14struct.c", 787, "char*"));
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
        }
        defining_class=info->defining_class;
        info->defining_class=struct_class_73;
        if(({        (_condtional_value_X432=(((struct sClass*)(__right_value290=map$2char$phsClass$ph_at(info->classes,type_name_67,((void*)0))))==((void*)0)));        come_call_finalizer(sClass_finalize, __right_value290, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _condtional_value_X432;        })) {
            map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(type_name_67),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_73)));
        }
        else {
            ((struct sClass*)(__right_value292=map$2char$phsClass$ph_operator_load_element(info->classes,type_name_67)))->mUniq=uniq_class;
            come_call_finalizer(sClass_finalize, __right_value292, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        for(        ({        (_condtional_value_X438=(o2_saved=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_reverse(parent_classes)),parent=list$1sClass$p_begin(o2_saved)));        _condtional_value_X438;        });        ({        (_condtional_value_X439=(!list$1sClass$p_end(o2_saved)));        _condtional_value_X439;        });        ({        (_condtional_value_X442=(parent=list$1sClass$p_next(o2_saved)));        _condtional_value_X442;        })        ){
            for(            ({            (_condtional_value_X443=(o2_saved_78=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(parent->mFields),it=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved_78)));            _condtional_value_X443;            });            ({            (_condtional_value_X444=(!list$1tuple2$2char$phsType$ph$ph_end(o2_saved_78)));            _condtional_value_X444;            });            ({            (_condtional_value_X445=(it=list$1tuple2$2char$phsType$ph$ph_next(o2_saved_78)));            _condtional_value_X445;            })            ){
                list$1tuple2$2char$phsType$ph$ph_add(struct_class_73->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(it)));
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sClass$p$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        expected_next_character(123,info);
        head_79=info->p;
        p_saved=((void*)0);
        sline_saved=0;
        sname_saved=((void*)0);
        methods=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "14struct.c", 813, "struct list$1sNode$ph*"))));
        while(({        (_condtional_value_X446=((_Bool)1));        _condtional_value_X446;        })) {
            if(({            (_condtional_value_X447=(p_saved));            _condtional_value_X447;            })) {
                if(({                (_condtional_value_X448=(*info->p==0));                _condtional_value_X448;                })) {
                    info->p=p_saved;
                    info->sline=sline_saved;
                    __dec_obj73=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved));
                    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0);
                    p_saved=((void*)0);
                    sline_saved=0;
                    __dec_obj74=sname_saved,
                    sname_saved=((void*)0);
                    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0);
                    __dec_obj75=info->module_params,
                    info->module_params=((void*)0);
                    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(({            (_condtional_value_X459=(*info->p==125));            _condtional_value_X459;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include_=parsecmp("include",info);
            multiple_declare_81=(_Bool)0;
            if(({            (_condtional_value_X460=(include_==(_Bool)0));            _condtional_value_X460;            })) {
                p_82=info->p;
                sline_83=info->sline;
                if(({                (_condtional_value_X461=(memcmp(info->p,"new(",4)!=0));                _condtional_value_X461;                })) {
                    multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value303=backtrace_parse_type((_Bool)1,info)));
                    type_84=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_85=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_86=multiple_assign_var15->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value303, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(({                    (_condtional_value_X462=(err_86&&*info->p==44));                    _condtional_value_X462;                    })) {
                        multiple_declare_81=(_Bool)1;
                    }
                    come_call_finalizer(sType_finalize, type_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_85 = come_decrement_ref_count(name_85, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                info->p=p_82;
                info->sline=sline_83;
            }
            define_function_flag=(_Bool)0;
            if(({            (_condtional_value_X463=(include_==(_Bool)0));            _condtional_value_X463;            })) {
                p_87=info->p;
                sline_88=info->sline;
                if(({                (_condtional_value_X464=(memcmp(info->p,"new(",4)==0));                _condtional_value_X464;                })) {
                    define_function_flag=(_Bool)1;
                }
                else {
                    invalid_type=(_Bool)0;
                    if(({                    (_condtional_value_X465=(xisalpha(*info->p)||*info->p==95));                    _condtional_value_X465;                    })) {
                        multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value304=backtrace_parse_type((_Bool)0,info)));
                        result_type=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        fun_name=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_89=multiple_assign_var16->v3;
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value304, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                    word=((void*)0);
                    if(({                    (_condtional_value_X466=(xisalnum(*info->p)||*info->p==95));                    _condtional_value_X466;                    })) {
                        __dec_obj76=word,
                        word=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
                        if(({                        (_condtional_value_X467=(string_operator_equals(word,"extern")));                        _condtional_value_X467;                        })) {
                            __dec_obj77=word,
                            word=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                    }
                    else {
                        __dec_obj78=word,
                        word=((void*)0);
                        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(({                    (_condtional_value_X468=(word));                    _condtional_value_X468;                    })) {
                        if(({                        (_condtional_value_X469=(is_type_name(word,info)));                        _condtional_value_X469;                        })) {
                            while(({                            (_condtional_value_X470=(*info->p==42));                            _condtional_value_X470;                            })) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(({                            (_condtional_value_X471=(*info->p==91&&*(info->p+1)==93));                            _condtional_value_X471;                            })) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(({                            (_condtional_value_X472=(*info->p==58));                            _condtional_value_X472;                            })) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(({                            (_condtional_value_X473=(*info->p==58));                            _condtional_value_X473;                            })) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(({                            (_condtional_value_X474=(xisalnum(*info->p)||*info->p==95));                            _condtional_value_X474;                            })) {
                                __dec_obj79=word,
                                word=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
                            }
                        }
                        if(({                        (_condtional_value_X475=(strlen(word)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))));                        _condtional_value_X475;                        })) {
                            define_function_flag=(_Bool)1;
                        }
                    }
                    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                info->p=p_87;
                info->sline=sline_88;
            }
            if(({            (_condtional_value_X476=(define_function_flag));            _condtional_value_X476;            })) {
                tail=info->p;
                pointer_num=1;
                __dec_obj80=info->class_type,
                info->class_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "14struct.c", 923, "struct sType*")),(char*)come_increment_ref_count(type_name_67),(_Bool)0,info));
                come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                info->class_type->mPointerNum=pointer_num;
                info->in_class=(_Bool)1;
                method=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj81=info->class_type,
                info->class_type=((void*)0);
                come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNode$ph_push_back(methods,(struct sNode*)come_increment_ref_count(method));
                ((method) ? method = come_decrement_ref_count(method, ((struct sNode*)method)->finalize, ((struct sNode*)method)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else if(({            (_condtional_value_X479=(multiple_declare_81));            _condtional_value_X479;            })) {
                multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value314=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_92=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                name_93=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                err_94=multiple_assign_var17->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value314, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                multiple_assign_var18=((struct tuple2$2sType$phchar$ph*)(__right_value315=parse_variable_name((struct sType*)come_increment_ref_count(base_type_92),(_Bool)1,info)));
                type2_95=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name2_96=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value315, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_73->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 940, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_96),(struct sType*)come_increment_ref_count(type2_95))));
                while(({                (_condtional_value_X480=(*info->p==44));                _condtional_value_X480;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var19=((struct tuple2$2sType$phchar$ph*)(__right_value318=parse_variable_name((struct sType*)come_increment_ref_count(base_type_92),(_Bool)0,info)));
                    type2_97=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name2_98=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value318, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_73->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 948, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_98),(struct sType*)come_increment_ref_count(type2_97))));
                    come_call_finalizer(sType_finalize, type2_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name2_98 = come_decrement_ref_count(name2_98, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                expected_next_character(59,info);
                come_call_finalizer(sType_finalize, base_type_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_93 = come_decrement_ref_count(name_93, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type2_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name2_96 = come_decrement_ref_count(name2_96, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(({            (_condtional_value_X481=(parsecmp("include",info)));            _condtional_value_X481;            })) {
                ((char*)(__right_value321=parse_word(info)));
                (__right_value321 = come_decrement_ref_count(__right_value321, (void*)0, (void*)0, 1, 0, (void*)0));
                module_name=(char*)come_increment_ref_count(parse_word(info));
                params=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "14struct.c", 957, "struct list$1char$ph*"))));
                if(({                (_condtional_value_X482=(*info->p==60));                _condtional_value_X482;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(({                    (_condtional_value_X483=((_Bool)1));                    _condtional_value_X483;                    })) {
                        word_99=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params,(char*)come_increment_ref_count(word_99));
                        if(({                        (_condtional_value_X484=(*info->p==44));                        _condtional_value_X484;                        })) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(({                        (_condtional_value_X485=(*info->p==0));                        _condtional_value_X485;                        })) {
                            err_msg(info,"invalid source end");
                            exit(2);
                        }
                        else if(({                        (_condtional_value_X486=(*info->p==62));                        _condtional_value_X486;                        })) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_99 = come_decrement_ref_count(word_99, (void*)0, (void*)0, 0, 0, (void*)0));
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        (word_99 = come_decrement_ref_count(word_99, (void*)0, (void*)0, 0, 0, (void*)0));
                    }
                }
                if(({                (_condtional_value_X487=(*info->p==59));                _condtional_value_X487;                })) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved=info->p;
                sline_saved=info->sline;
                __dec_obj85=sname_saved,
                sname_saved=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj86=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name));
                __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
                info->sline=0;
                if(({                (_condtional_value_X502=(((struct sClassModule*)(__right_value330=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value329=__builtin_string(module_name))))))==((void*)0)));                (__right_value328 = come_decrement_ref_count(__right_value328, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value329 = come_decrement_ref_count(__right_value329, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sClassModule_finalize, __right_value330, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                _condtional_value_X502;                })) {
                    err_msg(info,"module not found");
                    exit(1);
                }
                module=((struct sClassModule*)(__right_value333=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value332=__builtin_string(module_name))))));
                (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sClassModule_finalize, __right_value333, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(({                (_condtional_value_X504=(list$1char$ph_length(module->mParams)!=list$1char$ph_length(params)));                _condtional_value_X504;                })) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj88=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "14struct.c", 1011, "struct map$2char$phchar$ph*"))));
                come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                i=0;
                for(                ({                (_condtional_value_X519=(o2_saved_101=(struct list$1char$ph*)come_increment_ref_count(module->mParams),it_102=list$1char$ph_begin(o2_saved_101)));                _condtional_value_X519;                });                ({                (_condtional_value_X520=(!list$1char$ph_end(o2_saved_101)));                _condtional_value_X520;                });                ({                (_condtional_value_X521=(it_102=list$1char$ph_next(o2_saved_101)));                _condtional_value_X521;                })                ){
                    map$2char$phchar$ph_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_102)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value350=list$1char$ph_operator_load_element(params,i))))));
                    (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value347 = come_decrement_ref_count(__right_value347, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value348 = come_decrement_ref_count(__right_value348, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1, 0, (void*)0));
                    i++;
                }
                come_call_finalizer(list$1char$ph$p_finalize, o2_saved_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                info->p=module->mText;
                info->sline=module->mSLine;
                __dec_obj89=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module->mSName));
                __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
                (module_name = come_decrement_ref_count(module_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var20=((struct tuple3$3sType$phchar$phbool$*)(__right_value353=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_106=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                name_107=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                err_108=multiple_assign_var20->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value353, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(({                (_condtional_value_X559=(!err_108));                _condtional_value_X559;                })) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_73->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 1030, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_107),(struct sType*)come_increment_ref_count(type2_106))));
                if(({                (_condtional_value_X560=(*info->p==59));                _condtional_value_X560;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                come_call_finalizer(sType_finalize, type2_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            parse_sharp_v5(info);
            if(({            (_condtional_value_X561=(*info->p==125));            _condtional_value_X561;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(({        (_condtional_value_X562=(p_saved));        _condtional_value_X562;        })) {
            if(({            (_condtional_value_X563=(info->p==0));            _condtional_value_X563;            })) {
                info->p=p_saved;
                info->sline=sline_saved;
                __dec_obj90=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved));
                __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
                p_saved=((void*)0);
                sline_saved=0;
            }
        }
        list$1char$ph_reset(info->generics_type_names);
        info->defining_class=defining_class;
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "14struct.c", 1064, "struct sNode");
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value359=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc_v2(1, sizeof(struct sClassNode)*(1), "14struct.c", 1064, "struct sClassNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_67)),(struct sClass*)come_increment_ref_count(struct_class_73),(struct list$1sNode$ph*)come_increment_ref_count(methods),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__166 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value365=_inf_value7)));
        (type_name_67 = come_decrement_ref_count(type_name_67, (void*)0, (void*)0, 0, 0, (void*)0));
        (id_68 = come_decrement_ref_count(id_68, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(list$1sClass$p$p_finalize, parent_classes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClass_finalize, struct_class_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, methods, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClassNode_finalize, __right_value359, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value365) ? __right_value365 = come_decrement_ref_count(__right_value365, ((struct sNode*)__right_value365)->finalize, ((struct sNode*)__right_value365)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__166) ? __result_obj__166 = come_decrement_ref_count(__result_obj__166, ((struct sNode*)__result_obj__166)->finalize, ((struct sNode*)__result_obj__166)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__166;
        (type_name_67 = come_decrement_ref_count(type_name_67, (void*)0, (void*)0, 0, 0, (void*)0));
        (id_68 = come_decrement_ref_count(id_68, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(list$1sClass$p$p_finalize, parent_classes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sClass_finalize, struct_class_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, methods, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__167 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value366=top_level_v97(buf,head,head_sline,info))));
    ((__right_value366) ? __right_value366 = come_decrement_ref_count(__right_value366, ((struct sNode*)__right_value366)->finalize, ((struct sNode*)__right_value366)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__167) ? __result_obj__167 = come_decrement_ref_count(__result_obj__167, ((struct sNode*)__result_obj__167)->finalize, ((struct sNode*)__result_obj__167)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__167;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
_Bool _condtional_value_X386;
struct sStructNobodyNode* __result_obj__123;
void* __right_value207 = (void*)0;
struct sStructNobodyNode* result;
_Bool _condtional_value_X387;
_Bool _condtional_value_X388;
void* __right_value208 = (void*)0;
char* __dec_obj64;
_Bool _condtional_value_X389;
_Bool _condtional_value_X390;
void* __right_value209 = (void*)0;
char* __dec_obj65;
struct sStructNobodyNode* __result_obj__124;
    if(({    (_condtional_value_X386=(self==(void*)0));    _condtional_value_X386;    })) {
        __result_obj__123 = (void*)0;
        return __result_obj__123;
    }
    result=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc_v2(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode*"));
    if(({    (_condtional_value_X387=(self!=((void*)0)));    _condtional_value_X387;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X388=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X388;    })) {
        __dec_obj64=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructNobodyNode_clone", 5, "char*"));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X389=(self!=((void*)0)));    _condtional_value_X389;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X390=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X390;    })) {
        __dec_obj65=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStructNobodyNode_clone", 7, "char*"));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__124 = result;
    come_call_finalizer(sStructNobodyNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__124;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
_Bool _condtional_value_X404;
_Bool _condtional_value_X405;
    if(({    (_condtional_value_X404=(self!=((void*)0)&&self->v1!=((void*)0)));    _condtional_value_X404;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X405=(self!=((void*)0)&&self->v2!=((void*)0)));    _condtional_value_X405;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self){
struct list$1sClass$p* __result_obj__128;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__128 = (struct list$1sClass$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1sClass$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sClass$p$p_finalize, __result_obj__128, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__128;
}

static void list$1sClass$p$p_finalize(struct list$1sClass$p* self){
struct list_item$1sClass$p* it;
_Bool _condtional_value_X426;
struct list_item$1sClass$p* prev_it;
    it=self->head;
    while(({    (_condtional_value_X426=(it!=((void*)0)));    _condtional_value_X426;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sClass$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self){
}

static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass* item){
_Bool _condtional_value_X428;
void* __right_value281 = (void*)0;
struct list_item$1sClass$p* litem;
_Bool _condtional_value_X429;
void* __right_value282 = (void*)0;
struct list_item$1sClass$p* litem_71;
void* __right_value283 = (void*)0;
struct list_item$1sClass$p* litem_72;
struct list$1sClass$p* __result_obj__129;
    if(({    (_condtional_value_X428=(self->len==0));    _condtional_value_X428;    })) {
        litem=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value281=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "/usr/local/include/comelang.h", 1036, "struct list_item$1sClass$p*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X429=(self->len==1));    _condtional_value_X429;    })) {
        litem_71=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value282=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "/usr/local/include/comelang.h", 1046, "struct list_item$1sClass$p*"))));
        litem_71->prev=self->head;
        litem_71->next=((void*)0);
        litem_71->item=item;
        self->tail=litem_71;
        self->head->next=litem_71;
    }
    else {
        litem_72=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value283=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "/usr/local/include/comelang.h", 1056, "struct list_item$1sClass$p*"))));
        litem_72->prev=self->tail;
        litem_72->next=((void*)0);
        litem_72->item=item;
        self->tail->next=litem_72;
        self->tail=litem_72;
    }
    self->len++;
    __result_obj__129 = self;
    return __result_obj__129;
}

static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self){
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1sClass$p* result;
struct list_item$1sClass$p* it;
_Bool _condtional_value_X433;
struct list$1sClass$p* __result_obj__131;
    result=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc_v2(1, sizeof(struct list$1sClass$p)*(1), "/usr/local/include/comelang.h", 1820, "struct list$1sClass$p*"))));
    it=self->tail;
    while(({    (_condtional_value_X433=(it!=((void*)0)));    _condtional_value_X433;    })) {
        list$1sClass$p_push_back(result,it->item);
        it=it->prev;
    }
    __result_obj__131 = (struct list$1sClass$p*)come_increment_ref_count(result);
    come_call_finalizer(list$1sClass$p$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sClass$p$p_finalize, __result_obj__131, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__131;
}

static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass* item){
_Bool _condtional_value_X434;
void* __right_value295 = (void*)0;
struct list_item$1sClass$p* litem;
_Bool _condtional_value_X435;
void* __right_value296 = (void*)0;
struct list_item$1sClass$p* litem_74;
void* __right_value297 = (void*)0;
struct list_item$1sClass$p* litem_75;
struct list$1sClass$p* __result_obj__130;
    if(({    (_condtional_value_X434=(self->len==0));    _condtional_value_X434;    })) {
        litem=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value295=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1sClass$p*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X435=(self->len==1));    _condtional_value_X435;    })) {
        litem_74=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value296=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1sClass$p*"))));
        litem_74->prev=self->head;
        litem_74->next=((void*)0);
        litem_74->item=item;
        self->tail=litem_74;
        self->head->next=litem_74;
    }
    else {
        litem_75=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value297=(struct list_item$1sClass$p*)come_calloc_v2(1, sizeof(struct list_item$1sClass$p)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1sClass$p*"))));
        litem_75->prev=self->tail;
        litem_75->next=((void*)0);
        litem_75->item=item;
        self->tail->next=litem_75;
        self->tail=litem_75;
    }
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static struct sClass* list$1sClass$p_begin(struct list$1sClass$p* self){
_Bool _condtional_value_X436;
struct sClass* result;
struct sClass* __result_obj__132;
_Bool _condtional_value_X437;
struct sClass* __result_obj__133;
struct sClass* result_76;
struct sClass* __result_obj__134;
result = (void*)0;
result_76 = (void*)0;
    if(({    (_condtional_value_X436=(self==((void*)0)));    _condtional_value_X436;    })) {
        memset(&result,0,sizeof(struct sClass*));
        __result_obj__132 = result;
        return __result_obj__132;
    }
    self->it=self->head;
    if(({    (_condtional_value_X437=(self->it));    _condtional_value_X437;    })) {
        __result_obj__133 = self->it->item;
        return __result_obj__133;
    }
    memset(&result_76,0,sizeof(struct sClass*));
    __result_obj__134 = result_76;
    return __result_obj__134;
}

static _Bool list$1sClass$p_end(struct list$1sClass$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClass$p_next(struct list$1sClass$p* self){
_Bool _condtional_value_X440;
struct sClass* result;
struct sClass* __result_obj__135;
_Bool _condtional_value_X441;
struct sClass* __result_obj__136;
struct sClass* result_77;
struct sClass* __result_obj__137;
result = (void*)0;
result_77 = (void*)0;
    if(({    (_condtional_value_X440=(self==((void*)0)||self->it==((void*)0)));    _condtional_value_X440;    })) {
        memset(&result,0,sizeof(struct sClass*));
        __result_obj__135 = result;
        return __result_obj__135;
    }
    self->it=self->it->next;
    if(({    (_condtional_value_X441=(self->it));    _condtional_value_X441;    })) {
        __result_obj__136 = self->it->item;
        return __result_obj__136;
    }
    memset(&result_77,0,sizeof(struct sClass*));
    __result_obj__137 = result_77;
    return __result_obj__137;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i;
_Bool _condtional_value_X449;
_Bool _condtional_value_X450;
_Bool _condtional_value_X451;
_Bool _condtional_value_X452;
_Bool _condtional_value_X453;
int i_80;
_Bool _condtional_value_X454;
_Bool _condtional_value_X455;
_Bool _condtional_value_X456;
_Bool _condtional_value_X457;
_Bool _condtional_value_X458;
    for(    ({    (_condtional_value_X449=(i=0));    _condtional_value_X449;    });    ({    (_condtional_value_X450=(i<self->size));    _condtional_value_X450;    });    ({    (_condtional_value_X451=(i++));    _condtional_value_X451;    })    ){
        if(({        (_condtional_value_X452=(self->item_existance[i]));        _condtional_value_X452;        })) {
            if(({            (_condtional_value_X453=(1));            _condtional_value_X453;            })) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X454=(i_80=0));    _condtional_value_X454;    });    ({    (_condtional_value_X455=(i_80<self->size));    _condtional_value_X455;    });    ({    (_condtional_value_X456=(i_80++));    _condtional_value_X456;    })    ){
        if(({        (_condtional_value_X457=(self->item_existance[i_80]));        _condtional_value_X457;        })) {
            if(({            (_condtional_value_X458=(1));            _condtional_value_X458;            })) {
                (self->keys[i_80] = come_decrement_ref_count(self->keys[i_80], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
_Bool _condtional_value_X477;
void* __right_value311 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj82;
_Bool _condtional_value_X478;
void* __right_value312 = (void*)0;
struct list_item$1sNode$ph* litem_90;
struct sNode* __dec_obj83;
void* __right_value313 = (void*)0;
struct list_item$1sNode$ph* litem_91;
struct sNode* __dec_obj84;
struct list$1sNode$ph* __result_obj__138;
    if(({    (_condtional_value_X477=(self->len==0));    _condtional_value_X477;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value311=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1114, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj82=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_condtional_value_X478=(self->len==1));    _condtional_value_X478;    })) {
        litem_90=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value312=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1124, "struct list_item$1sNode$ph*"))));
        litem_90->prev=self->head;
        litem_90->next=((void*)0);
        __dec_obj83=litem_90->item,
        litem_90->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_90;
        self->head->next=litem_90;
    }
    else {
        litem_91=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value313=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1134, "struct list_item$1sNode$ph*"))));
        litem_91->prev=self->tail;
        litem_91->next=((void*)0);
        __dec_obj84=litem_91->item,
        litem_91->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_91;
        self->tail=litem_91;
    }
    self->len++;
    __result_obj__138 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    return __result_obj__138;
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X488;
_Bool _condtional_value_X489;
_Bool _condtional_value_X490;
struct sClassModule* __result_obj__139;
_Bool _condtional_value_X495;
_Bool _condtional_value_X496;
struct sClassModule* __result_obj__140;
struct sClassModule* __result_obj__141;
struct sClassModule* __result_obj__142;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClassModule*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X488=((_Bool)1));    _condtional_value_X488;    })) {
        if(({        (_condtional_value_X489=(self->item_existance[it]));        _condtional_value_X489;        })) {
            if(({            (_condtional_value_X490=(string_equals(self->keys[it],key)));            _condtional_value_X490;            })) {
                __result_obj__139 = (struct sClassModule*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__139, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__139;
            }
            it++;
            if(({            (_condtional_value_X495=(it>=self->size));            _condtional_value_X495;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X496=(it==hash));            _condtional_value_X496;            })) {
                __result_obj__140 = (struct sClassModule*)come_increment_ref_count(default_value);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__140, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__140;
            }
        }
        else {
            __result_obj__141 = (struct sClassModule*)come_increment_ref_count(default_value);
            come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__141, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__141;
        }
    }
    __result_obj__142 = (struct sClassModule*)come_increment_ref_count(default_value);
    come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__142, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__142;
}

static void sClassModule_finalize(struct sClassModule* self){
_Bool _condtional_value_X491;
_Bool _condtional_value_X492;
_Bool _condtional_value_X493;
_Bool _condtional_value_X494;
    if(({    (_condtional_value_X491=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X491;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X492=(self!=((void*)0)&&self->mText!=((void*)0)));    _condtional_value_X492;    })) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_condtional_value_X493=(self!=((void*)0)&&self->mParams!=((void*)0)));    _condtional_value_X493;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParams, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X494=(self!=((void*)0)&&self->mSName!=((void*)0)));    _condtional_value_X494;    })) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X497;
_Bool _condtional_value_X498;
_Bool _condtional_value_X499;
struct sClassModule* __result_obj__143;
_Bool _condtional_value_X500;
_Bool _condtional_value_X501;
struct sClassModule* __result_obj__144;
struct sClassModule* __result_obj__145;
struct sClassModule* __result_obj__146;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClassModule*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X497=((_Bool)1));    _condtional_value_X497;    })) {
        if(({        (_condtional_value_X498=(self->item_existance[it]));        _condtional_value_X498;        })) {
            if(({            (_condtional_value_X499=(string_equals(self->keys[it],key)));            _condtional_value_X499;            })) {
                __result_obj__143 = (struct sClassModule*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__143, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__143;
            }
            it++;
            if(({            (_condtional_value_X500=(it>=self->size));            _condtional_value_X500;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X501=(it==hash));            _condtional_value_X501;            })) {
                __result_obj__144 = (struct sClassModule*)come_increment_ref_count(default_value);
                come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__144, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__144;
            }
        }
        else {
            __result_obj__145 = (struct sClassModule*)come_increment_ref_count(default_value);
            come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__145, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__145;
        }
    }
    __result_obj__146 = (struct sClassModule*)come_increment_ref_count(default_value);
    come_call_finalizer(sClassModule_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__146, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__146;
}

static int list$1char$ph_length(struct list$1char$ph* self){
_Bool _condtional_value_X503;
    if(({    (_condtional_value_X503=(self==((void*)0)));    _condtional_value_X503;    })) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
int i;
_Bool _condtional_value_X505;
_Bool _condtional_value_X506;
_Bool _condtional_value_X507;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct list$1char$ph* __dec_obj87;
struct map$2char$phchar$ph* __result_obj__148;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value335=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1941, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value336=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1942, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value337=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1943, "_Bool*"))));
    for(    ({    (_condtional_value_X505=(i=0));    _condtional_value_X505;    });    ({    (_condtional_value_X506=(i<128));    _condtional_value_X506;    });    ({    (_condtional_value_X507=(i++));    _condtional_value_X507;    })    ){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj87=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1953, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    self->it=0;
    __result_obj__148 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__148, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__148;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__147;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__147 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__147, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__147;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it;
_Bool _condtional_value_X508;
struct list_item$1char$p* prev_it;
    it=self->head;
    while(({    (_condtional_value_X508=(it!=((void*)0)));    _condtional_value_X508;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i;
_Bool _condtional_value_X509;
_Bool _condtional_value_X510;
_Bool _condtional_value_X511;
_Bool _condtional_value_X512;
_Bool _condtional_value_X513;
int i_100;
_Bool _condtional_value_X514;
_Bool _condtional_value_X515;
_Bool _condtional_value_X516;
_Bool _condtional_value_X517;
_Bool _condtional_value_X518;
    for(    ({    (_condtional_value_X509=(i=0));    _condtional_value_X509;    });    ({    (_condtional_value_X510=(i<self->size));    _condtional_value_X510;    });    ({    (_condtional_value_X511=(i++));    _condtional_value_X511;    })    ){
        if(({        (_condtional_value_X512=(self->item_existance[i]));        _condtional_value_X512;        })) {
            if(({            (_condtional_value_X513=(1));            _condtional_value_X513;            })) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    ({    (_condtional_value_X514=(i_100=0));    _condtional_value_X514;    });    ({    (_condtional_value_X515=(i_100<self->size));    _condtional_value_X515;    });    ({    (_condtional_value_X516=(i_100++));    _condtional_value_X516;    })    ){
        if(({        (_condtional_value_X517=(self->item_existance[i_100]));        _condtional_value_X517;        })) {
            if(({            (_condtional_value_X518=(1));            _condtional_value_X518;            })) {
                (self->keys[i_100] = come_decrement_ref_count(self->keys[i_100], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
_Bool _condtional_value_X522;
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X539;
_Bool _condtional_value_X540;
_Bool _condtional_value_X541;
_Bool _condtional_value_X542;
_Bool _condtional_value_X543;
_Bool _condtional_value_X544;
_Bool _condtional_value_X545;
_Bool _condtional_value_X546;
_Bool _condtional_value_X547;
_Bool same_key_exist;
char* it2;
_Bool _condtional_value_X548;
_Bool _condtional_value_X549;
_Bool _condtional_value_X550;
_Bool _condtional_value_X551;
_Bool _condtional_value_X552;
struct map$2char$phchar$ph* __result_obj__159;
    if(({    (_condtional_value_X522=(self->len*10>=self->size));    _condtional_value_X522;    })) {
        map$2char$phchar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X539=((_Bool)1));    _condtional_value_X539;    })) {
        if(({        (_condtional_value_X540=(self->item_existance[it]));        _condtional_value_X540;        })) {
            if(({            (_condtional_value_X541=(string_equals(self->keys[it],key)));            _condtional_value_X541;            })) {
                if(({                (_condtional_value_X542=(1));                _condtional_value_X542;                })) {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->keys[it]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it]);
                    self->keys[it]=key;
                }
                if(({                (_condtional_value_X543=(1));                _condtional_value_X543;                })) {
                    (self->items[it] = come_decrement_ref_count(self->items[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    self->items[it]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(({            (_condtional_value_X544=(it>=self->size));            _condtional_value_X544;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X545=(it==hash));            _condtional_value_X545;            })) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(({            (_condtional_value_X546=(1));            _condtional_value_X546;            })) {
                self->keys[it]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it]=key;
            }
            if(({            (_condtional_value_X547=(1));            _condtional_value_X547;            })) {
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
    for(    ({    (_condtional_value_X548=(it2=list$1char$ph_begin(self->key_list)));    _condtional_value_X548;    });    ({    (_condtional_value_X549=(!list$1char$ph_end(self->key_list)));    _condtional_value_X549;    });    ({    (_condtional_value_X550=(it2=list$1char$ph_next(self->key_list)));    _condtional_value_X550;    })    ){
        if(({        (_condtional_value_X551=(string_equals(it2,key)));        _condtional_value_X551;        })) {
            same_key_exist=(_Bool)1;
        }
    }
    if(({    (_condtional_value_X552=(!same_key_exist));    _condtional_value_X552;    })) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__159 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__159;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size;
void* __right_value342 = (void*)0;
char** keys;
void* __right_value343 = (void*)0;
char** items;
void* __right_value344 = (void*)0;
_Bool* item_existance;
int len;
char* it;
_Bool _condtional_value_X525;
_Bool _condtional_value_X526;
_Bool _condtional_value_X529;
char* default_value;
void* __right_value345 = (void*)0;
char* it2;
unsigned int hash;
int n;
_Bool _condtional_value_X535;
_Bool _condtional_value_X536;
_Bool _condtional_value_X537;
_Bool _condtional_value_X538;
char* default_value_105;
void* __right_value346 = (void*)0;
default_value = (void*)0;
default_value_105 = (void*)0;
    size=self->size*10;
    keys=(char**)come_increment_ref_count(((char**)(__right_value342=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2221, "char**"))));
    items=(char**)come_increment_ref_count(((char**)(__right_value343=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size)), "/usr/local/include/comelang.h", 2222, "char**"))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value344=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/comelang.h", 2223, "_Bool*"))));
    len=0;
    for(    ({    (_condtional_value_X525=(it=map$2char$phchar$ph_begin(self)));    _condtional_value_X525;    });    ({    (_condtional_value_X526=(!map$2char$phchar$ph_end(self)));    _condtional_value_X526;    });    ({    (_condtional_value_X529=(it=map$2char$phchar$ph_next(self)));    _condtional_value_X529;    })    ){
        memset(&default_value,0,sizeof(char*));
        it2=((char*)(__right_value345=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value))));
        (__right_value345 = come_decrement_ref_count(__right_value345, (void*)0, (void*)0, 1, 0, (void*)0));
        hash=string_get_hash_key(((char*)it))%size;
        n=hash;
        while(({        (_condtional_value_X535=((_Bool)1));        _condtional_value_X535;        })) {
            if(({            (_condtional_value_X536=(item_existance[n]));            _condtional_value_X536;            })) {
                n++;
                if(({                (_condtional_value_X537=(n>=size));                _condtional_value_X537;                })) {
                    n=0;
                }
                else if(({                (_condtional_value_X538=(n==hash));                _condtional_value_X538;                })) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                items[n]=((char*)(__right_value346=map$2char$phchar$ph_at(self,it,(char*)come_increment_ref_count(default_value_105))));
                (__right_value346 = come_decrement_ref_count(__right_value346, (void*)0, (void*)0, 1, 0, (void*)0));
                len++;
                (default_value_105 = come_decrement_ref_count(default_value_105, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (default_value_105 = come_decrement_ref_count(default_value_105, (void*)0, (void*)0, 0, 0, (void*)0));
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
_Bool _condtional_value_X523;
char* result;
char* __result_obj__149;
_Bool _condtional_value_X524;
char* __result_obj__150;
char* result_103;
char* __result_obj__151;
result = (void*)0;
result_103 = (void*)0;
    if(({    (_condtional_value_X523=(self==((void*)0)));    _condtional_value_X523;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__149 = result;
        return __result_obj__149;
    }
    self->key_list->it=self->key_list->head;
    if(({    (_condtional_value_X524=(self->key_list->it));    _condtional_value_X524;    })) {
        __result_obj__150 = self->key_list->it->item;
        return __result_obj__150;
    }
    memset(&result_103,0,sizeof(char*));
    __result_obj__151 = result_103;
    return __result_obj__151;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
_Bool _condtional_value_X527;
char* result;
char* __result_obj__152;
_Bool _condtional_value_X528;
char* __result_obj__153;
char* result_104;
char* __result_obj__154;
result = (void*)0;
result_104 = (void*)0;
    if(({    (_condtional_value_X527=(self==((void*)0)||self->key_list->it==((void*)0)));    _condtional_value_X527;    })) {
        memset(&result,0,sizeof(char*));
        __result_obj__152 = result;
        return __result_obj__152;
    }
    self->key_list->it=self->key_list->it->next;
    if(({    (_condtional_value_X528=(self->key_list->it));    _condtional_value_X528;    })) {
        __result_obj__153 = self->key_list->it->item;
        return __result_obj__153;
    }
    memset(&result_104,0,sizeof(char*));
    __result_obj__154 = result_104;
    return __result_obj__154;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash;
unsigned int it;
_Bool _condtional_value_X530;
_Bool _condtional_value_X531;
_Bool _condtional_value_X532;
char* __result_obj__155;
_Bool _condtional_value_X533;
_Bool _condtional_value_X534;
char* __result_obj__156;
char* __result_obj__157;
char* __result_obj__158;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_condtional_value_X530=((_Bool)1));    _condtional_value_X530;    })) {
        if(({        (_condtional_value_X531=(self->item_existance[it]));        _condtional_value_X531;        })) {
            if(({            (_condtional_value_X532=(string_equals(self->keys[it],key)));            _condtional_value_X532;            })) {
                __result_obj__155 = (char*)come_increment_ref_count(self->items[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
                (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__155;
            }
            it++;
            if(({            (_condtional_value_X533=(it>=self->size));            _condtional_value_X533;            })) {
                it=0;
            }
            else if(({            (_condtional_value_X534=(it==hash));            _condtional_value_X534;            })) {
                __result_obj__156 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
                (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__156;
            }
        }
        else {
            __result_obj__157 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
            (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__157;
        }
    }
    __result_obj__158 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__158;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
_Bool _condtional_value_X553;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X554;
_Bool _condtional_value_X555;
char* __result_obj__160;
char* default_value;
char* __result_obj__161;
default_value = (void*)0;
    if(({    (_condtional_value_X553=(position<0));    _condtional_value_X553;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X554=(it!=((void*)0)));    _condtional_value_X554;    })) {
        if(({        (_condtional_value_X555=(position==i));        _condtional_value_X555;        })) {
            __result_obj__160 = (char*)come_increment_ref_count(it->item);
            (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__160;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__161 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__161;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
_Bool _condtional_value_X556;
struct list_item$1char$ph* it;
int i;
_Bool _condtional_value_X557;
_Bool _condtional_value_X558;
char* __result_obj__162;
char* default_value;
char* __result_obj__163;
default_value = (void*)0;
    if(({    (_condtional_value_X556=(position<0));    _condtional_value_X556;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_condtional_value_X557=(it!=((void*)0)));    _condtional_value_X557;    })) {
        if(({        (_condtional_value_X558=(position==i));        _condtional_value_X558;        })) {
            __result_obj__162 = (char*)come_increment_ref_count(it->item);
            (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__162;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(char*));
    __result_obj__163 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__163;
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
_Bool _condtional_value_X564;
struct sClassNode* __result_obj__164;
void* __right_value360 = (void*)0;
struct sClassNode* result;
_Bool _condtional_value_X565;
_Bool _condtional_value_X566;
void* __right_value361 = (void*)0;
char* __dec_obj91;
_Bool _condtional_value_X567;
_Bool _condtional_value_X568;
void* __right_value362 = (void*)0;
char* __dec_obj92;
_Bool _condtional_value_X569;
void* __right_value363 = (void*)0;
struct sClass* __dec_obj93;
_Bool _condtional_value_X570;
void* __right_value364 = (void*)0;
struct list$1sNode$ph* __dec_obj94;
struct sClassNode* __result_obj__165;
    if(({    (_condtional_value_X564=(self==(void*)0));    _condtional_value_X564;    })) {
        __result_obj__164 = (void*)0;
        return __result_obj__164;
    }
    result=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc_v2(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "struct sClassNode*"));
    if(({    (_condtional_value_X565=(self!=((void*)0)));    _condtional_value_X565;    })) {
        result->sline=self->sline;
    }
    if(({    (_condtional_value_X566=(self!=((void*)0)&&self->sname!=((void*)0)));    _condtional_value_X566;    })) {
        __dec_obj91=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sClassNode_clone", 5, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X567=(self!=((void*)0)));    _condtional_value_X567;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_condtional_value_X568=(self!=((void*)0)&&self->mName!=((void*)0)));    _condtional_value_X568;    })) {
        __dec_obj92=result->mName,
        result->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sClassNode_clone", 7, "char*"));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_condtional_value_X569=(self!=((void*)0)&&self->mClass!=((void*)0)));    _condtional_value_X569;    })) {
        __dec_obj93=result->mClass,
        result->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer(sClass_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_condtional_value_X570=(self!=((void*)0)&&self->mMethods!=((void*)0)));    _condtional_value_X570;    })) {
        __dec_obj94=result->mMethods,
        result->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mMethods));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__165 = result;
    come_call_finalizer(sClassNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__165;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool define_struct;
char* p;
int sline;
_Bool _condtional_value_X571;
_Bool _condtional_value_X572;
void* __right_value367 = (void*)0;
char* type_name;
_Bool _condtional_value_X573;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
_Bool _condtional_value_X574;
void* __right_value370 = (void*)0;
_Bool _condtional_value_X575;
_Bool _condtional_value_X576;
void* __right_value371 = (void*)0;
char* struct_attribute;
void* __right_value372 = (void*)0;
char* type_name_109;
void* __right_value373 = (void*)0;
struct sNode* __result_obj__168;
void* __right_value374 = (void*)0;
struct sNode* __result_obj__169;
    define_struct=(_Bool)0;
    {
        p=info->p;
        sline=info->sline;
        if(({        (_condtional_value_X571=(charp_operator_equals(buf,"struct")));        _condtional_value_X571;        })) {
            if(({            (_condtional_value_X572=(xisalpha(*info->p)||*info->p==95));            _condtional_value_X572;            })) {
                type_name=(char*)come_increment_ref_count(parse_word(info));
                if(({                (_condtional_value_X573=(parsecmp("extends",info)));                _condtional_value_X573;                })) {
                    ((char*)(__right_value368=parse_word(info)));
                    (__right_value368 = come_decrement_ref_count(__right_value368, (void*)0, (void*)0, 1, 0, (void*)0));
                    ((char*)(__right_value369=parse_word(info)));
                    (__right_value369 = come_decrement_ref_count(__right_value369, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                if(({                (_condtional_value_X574=(*info->p==123));                _condtional_value_X574;                })) {
                    ((char*)(__right_value370=skip_block(info,(_Bool)0)));
                    (__right_value370 = come_decrement_ref_count(__right_value370, (void*)0, (void*)0, 1, 0, (void*)0));
                    if(({                    (_condtional_value_X575=(*info->p==59));                    _condtional_value_X575;                    })) {
                        define_struct=(_Bool)1;
                    }
                }
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        info->p=p;
        info->sline=sline;
    }
    if(({    (_condtional_value_X576=(define_struct));    _condtional_value_X576;    })) {
        struct_attribute=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_109=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__168 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value373=parse_struct((char*)come_increment_ref_count(type_name_109),(char*)come_increment_ref_count(struct_attribute),info))));
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, (void*)0));
        ((__right_value373) ? __right_value373 = come_decrement_ref_count(__right_value373, ((struct sNode*)__right_value373)->finalize, ((struct sNode*)__right_value373)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__168) ? __result_obj__168 = come_decrement_ref_count(__result_obj__168, ((struct sNode*)__result_obj__168)->finalize, ((struct sNode*)__result_obj__168)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__168;
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name_109 = come_decrement_ref_count(type_name_109, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__169 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value374=string_node_v13(buf,head,head_sline,info))));
    ((__right_value374) ? __right_value374 = come_decrement_ref_count(__right_value374, ((struct sNode*)__right_value374)->finalize, ((struct sNode*)__right_value374)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__169) ? __result_obj__169 = come_decrement_ref_count(__result_obj__169, ((struct sNode*)__result_obj__169)->finalize, ((struct sNode*)__result_obj__169)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__169;
}

