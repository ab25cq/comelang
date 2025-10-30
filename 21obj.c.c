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

struct sNewNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
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

struct sOffsetOf
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    char* name;
};

struct sGeneric
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct list$1sType$ph* types;
    struct list$1sNode$ph* exps;
    struct sNode* default_exp;
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
void FILE_on_drop(struct __sFILE* self);
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
struct sNode* create_object(struct sType* type, struct sInfo* info);
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
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info);
char* sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);
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
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static void sNewNode_finalize(struct sNewNode* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);
char* sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);
static void sImplementsNode_finalize(struct sImplementsNode* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);
char* sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);
static void sTrueNode_finalize(struct sTrueNode* self);
struct sNode* create_true_object(struct sInfo* info);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);
char* sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);
static void sFalseNode_finalize(struct sFalseNode* self);
struct sNode* create_false_object(struct sInfo* info);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);
char* sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
struct sOffsetOf* sOffsetOf_initialize(struct sOffsetOf* self, struct sType* type, char* name, struct sInfo* info);
char* sOffsetOf_kind(struct sOffsetOf* self);
_Bool sOffsetOf_compile(struct sOffsetOf* self, struct sInfo* info);
static void sOffsetOf_finalize(struct sOffsetOf* self);
struct sGeneric* sGeneric_initialize(struct sGeneric* self, struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo* info);
char* sGeneric_kind(struct sGeneric* self);
_Bool sGeneric_compile(struct sGeneric* self, struct sInfo* info);
static void sGeneric_finalize(struct sGeneric* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
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
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
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
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static struct sGeneric* sGeneric_clone(struct sGeneric* self);
static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
// uniq global variable
// inline function

// body function
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* __dec_obj26;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj27;
struct sNewNode* __result_obj__17;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj26=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj27=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__17 = (struct sNewNode*)come_increment_ref_count(self);
    come_call_finalizer(sNewNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sNewNode_finalize, __result_obj__17, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__17;
}

char* sNewNode_kind(struct sNewNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__18;
    __result_obj__18 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sNewNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__18 = come_decrement_ref_count(__result_obj__18, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__18;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type;
struct list$1tuple2$2char$phsNode$ph$ph* initializer;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
struct buffer* num_string;
struct list$1sNode$ph* o2_saved;
struct sNode* it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
_Bool Value;
_Bool _conditional_value_X3;
_Bool __result_obj__25;
struct CVALUE* cvalue;
struct sType* type2;
char* type_name;
char* type_name2;
char* var_name;
struct sType* type3;
char* type_name3;
struct buffer* buf;
char* obj;
char* __dec_obj28;
char* __dec_obj29;
struct sClass* klass;
int i;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_8;
struct tuple2$2char$phsNode$ph* it_10;
_Bool _conditional_value_X4;
_Bool _conditional_value_X5;
struct tuple2$2char$phsNode$ph* multiple_assign_var1 = (void*)0;
char* name=0;
struct sNode* exp=0;
_Bool Value_12;
_Bool _conditional_value_X6;
_Bool __result_obj__41;
struct CVALUE* come_value2;
struct sType* left_type;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_13;
struct tuple2$2char$phsType$ph* it2;
_Bool _conditional_value_X7;
_Bool _conditional_value_X8;
_Bool _conditional_value_X9;
struct tuple2$2char$phsType$ph* multiple_assign_var2 = (void*)0;
char* field_name=0;
struct sType* field_type=0;
_Bool _conditional_value_X10;
struct sType* __dec_obj30;
_Bool _conditional_value_X11;
_Bool __result_obj__48;
struct sType* right_type;
struct sType* __dec_obj31;
_Bool _conditional_value_X12;
char* c_value;
char* __dec_obj32;
_Bool _conditional_value_X13;
struct sType* __dec_obj33;
struct sType* type3_18;
_Bool _conditional_value_X14;
char* type_name3_19;
_Bool _conditional_value_X15;
char* __dec_obj37;
char* __dec_obj38;
_Bool _conditional_value_X16;
struct sType* __dec_obj39;
_Bool __result_obj__50;
obj = (void*)0;
    type=(struct sType*)come_increment_ref_count(self->type);
    initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 23, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    num_string=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 25, "struct buffer*"))));
    buffer_append_str(num_string,"1");
    for(    ({    (_conditional_value_X0=(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum),it=list$1sNode$ph_begin(o2_saved)));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(!list$1sNode$ph_end(o2_saved)));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(it=list$1sNode$ph_next(o2_saved)));    _conditional_value_X2;    })    ){
        Value=node_compile(it,info);
        if(({        (_conditional_value_X3=(!Value));        _conditional_value_X3;        })) {
            __result_obj__25 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__25;
        }
        else {
        }
        __right_value0 = (void*)0;
        cvalue=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(num_string,"*(%s)",cvalue->c_value);
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    list$1sNode$ph_reset(type2->mArrayNum);
    __right_value0 = (void*)0;
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    type_name2=(char*)come_increment_ref_count(make_come_type_name_string(type2,info,(_Bool)0,(_Bool)0));
    if(({    (_conditional_value_X0=(initializer));    _conditional_value_X0;    })) {
        static int var_num=1;
        var_num++;
        __right_value0 = (void*)0;
        var_name=(char*)come_increment_ref_count(xsprintf("__new_obj__%d",var_num));
        __right_value0 = (void*)0;
        type3=(struct sType*)come_increment_ref_count(sType_clone(type2));
        type3->mPointerNum++;
        if(({        (_conditional_value_X1=(type3->mNoSolvedGenericsType));        _conditional_value_X1;        })) {
            type3->mNoSolvedGenericsType->mPointerNum++;
        }
        __right_value0 = (void*)0;
        type_name3=(char*)come_increment_ref_count(make_type_name_string(type3,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
        __right_value0 = (void*)0;
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value0=make_define_var(type3,var_name,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 68, "struct buffer*"))));
        buffer_append_str(buf,"(");
        if(({        __right_value0 = (void*)0,         (_conditional_value_X2=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X2;        })) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj28=obj,
            obj=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name,type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name3));
            __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj29=obj,
            obj=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name,type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name3));
            __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        buffer_append_str(buf,obj);
        buffer_append_str(buf,",");
        klass=type3->mClass;
        i=0;
        for(        ({        (_conditional_value_X3=(o2_saved_8=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer),it_10=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_8)));        _conditional_value_X3;        });        ({        (_conditional_value_X4=(!list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_8)));        _conditional_value_X4;        });        ({        (_conditional_value_X5=(it_10=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_8)));        _conditional_value_X5;        })        ){
            multiple_assign_var1=it_10;
            name=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            exp=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_12=node_compile(exp,info);
            if(({            (_conditional_value_X6=(!Value_12));            _conditional_value_X6;            })) {
                __result_obj__41 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name3 = come_decrement_ref_count(type_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__41;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value2=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            left_type=((void*)0);
            for(            ({            (_conditional_value_X7=(o2_saved_13=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields),it2=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved_13)));            _conditional_value_X7;            });            ({            (_conditional_value_X8=(!list$1tuple2$2char$phsType$ph$ph_end(o2_saved_13)));            _conditional_value_X8;            });            ({            (_conditional_value_X9=(it2=list$1tuple2$2char$phsType$ph$ph_next(o2_saved_13)));            _conditional_value_X9;            })            ){
                multiple_assign_var2=it2;
                field_name=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                field_type=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
                if(({                (_conditional_value_X10=(string_operator_equals(name,field_name)));                _conditional_value_X10;                })) {
                    __right_value0 = (void*)0;
                    __dec_obj30=left_type,
                    left_type=(struct sType*)come_increment_ref_count(sType_clone(field_type));
                    come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_13, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(({            (_conditional_value_X11=(left_type==((void*)0)));            _conditional_value_X11;            })) {
                err_msg(info,"field %s is not defined",name);
                __result_obj__48 = (_Bool)1;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name3 = come_decrement_ref_count(type_name3, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                return __result_obj__48;
            }
            right_type=(struct sType*)come_increment_ref_count(come_value2->type);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assining to",((char*)(__right_value0=string_to_string(name)))))),left_type,right_type,come_value2,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            __dec_obj31=right_type,
            right_type=(struct sType*)come_increment_ref_count(come_value2->type);
            come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(({            (_conditional_value_X12=(left_type->mHeap&&right_type->mHeap&&left_type->mPointerNum>0&&right_type->mPointerNum>0));            _conditional_value_X12;            })) {
                __right_value0 = (void*)0;
                c_value=(char*)come_increment_ref_count(increment_ref_count_object(left_type,come_value2->c_value,info));
                buffer_append_format(buf,"%s->%s = %s",var_name,name,c_value);
                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                buffer_append_format(buf,"%s->%s = %s",var_name,name,come_value2->c_value);
            }
            buffer_append_str(buf,",");
            i++;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf,var_name);
        buffer_append_str(buf,")");
        __right_value0 = (void*)0;
        __dec_obj32=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0);
        type2->mHeap=(_Bool)1;
        type2->mPointerNum++;
        if(({        (_conditional_value_X13=(type2->mNoSolvedGenericsType));        _conditional_value_X13;        })) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __right_value0 = (void*)0;
        __dec_obj33=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,(struct sType*)come_increment_ref_count(type2),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type_name3 = come_decrement_ref_count(type_name3, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __right_value0 = (void*)0;
        type3_18=(struct sType*)come_increment_ref_count(sType_clone(type2));
        type3_18->mPointerNum++;
        type3_18->mHeap=(_Bool)1;
        if(({        (_conditional_value_X14=(type3_18->mNoSolvedGenericsType));        _conditional_value_X14;        })) {
            type3_18->mNoSolvedGenericsType->mPointerNum++;
            type3_18->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __right_value0 = (void*)0;
        type_name3_19=(char*)come_increment_ref_count(make_type_name_string(type3_18,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
        if(({        __right_value0 = (void*)0,         (_conditional_value_X15=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        _conditional_value_X15;        })) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj37=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name3_19));
            __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj38=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char*)(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,type_name3_19));
            __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        type2->mHeap=(_Bool)1;
        type2->mPointerNum++;
        if(({        (_conditional_value_X16=(type2->mNoSolvedGenericsType));        _conditional_value_X16;        })) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __right_value0 = (void*)0;
        __dec_obj39=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,(struct sType*)come_increment_ref_count(type2),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        come_call_finalizer(sType_finalize, type3_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type_name3_19 = come_decrement_ref_count(type_name3_19, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__50 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__50;
}

static void sNodeBase_finalize(struct sNodeBase* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
_Bool _conditional_value_X0;
struct sType* __result_obj__1;
void* __right_value0 = (void*)0;
struct sType* result;
struct sType* __dec_obj1;
struct sType* __dec_obj2;
struct list$1sType$ph* __dec_obj6;
struct sType* __dec_obj7;
struct sNode* __dec_obj8;
struct sNode* __dec_obj9;
char* __dec_obj10;
char* __dec_obj11;
char* __dec_obj12;
char* __dec_obj13;
struct list$1sNode$ph* __dec_obj17;
char* __dec_obj18;
struct list$1sType$ph* __dec_obj19;
struct list$1char$ph* __dec_obj23;
struct sType* __dec_obj24;
struct sNode* __dec_obj25;
struct sType* __result_obj__16;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__1, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__1;
    }
    result=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mClass=self->mClass;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mChannelType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mSizeNum!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAlignas!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mTupleName!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mVarAttribute!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj13=result->mAsmName,
        result->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj17=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj18=result->mOriginalTypeName,
        result->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 50, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj19=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mResultType,
        result->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->mVarArgs=self->mVarArgs;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
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

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
_Bool _conditional_value_X0;
struct list$1sType$ph* __result_obj__2;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sType$ph* result;
struct list_item$1sType$ph* it;
_Bool _conditional_value_X1;
struct list$1sType$ph* __result_obj__5;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__2;
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
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1sType$ph* litem;
struct sType* __dec_obj3;
_Bool _conditional_value_X1;
struct list_item$1sType$ph* litem_0;
struct sType* __dec_obj4;
struct list_item$1sType$ph* litem_1;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__4;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 6383, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 6393, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj4=litem_0->item,
        litem_0->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 6403, "struct list_item$1sType$ph*"))));
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
struct sNode* __result_obj__6;
void* __right_value0 = (void*)0;
struct sNode* result;
struct sNode* __result_obj__7;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__6;
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
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
_Bool _conditional_value_X0;
struct list$1sNode$ph* __result_obj__8;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1sNode$ph* result;
struct list_item$1sNode$ph* it;
_Bool _conditional_value_X1;
struct list$1sNode$ph* __result_obj__11;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__8;
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
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1sNode$ph* litem;
struct sNode* __dec_obj14;
_Bool _conditional_value_X1;
struct list_item$1sNode$ph* litem_2;
struct sNode* __dec_obj15;
struct list_item$1sNode$ph* litem_3;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__10;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6383, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj14=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6393, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj15=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 6403, "struct list_item$1sNode$ph*"))));
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
struct list$1char$ph* __result_obj__12;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1char$ph* result;
struct list_item$1char$ph* it;
_Bool _conditional_value_X1;
struct list$1char$ph* __result_obj__15;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__12;
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
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1char$ph* litem;
char* __dec_obj20;
_Bool _conditional_value_X1;
struct list_item$1char$ph* litem_4;
char* __dec_obj21;
struct list_item$1char$ph* litem_5;
char* __dec_obj22;
struct list$1char$ph* __result_obj__14;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6383, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj20=litem->item,
        litem->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6393, "struct list_item$1char$ph*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj21=litem_4->item,
        litem_4->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 6403, "struct list_item$1char$ph*"))));
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
_Bool _conditional_value_X0;
struct list_item$1char$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _conditional_value_X0;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->item!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v1!=((void*)0)));    _conditional_value_X0;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v2!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static void sNewNode_finalize(struct sNewNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->initializer!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _conditional_value_X0;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
_Bool _conditional_value_X0;
struct sNode* result;
struct sNode* __result_obj__19;
struct sNode* __result_obj__20;
struct sNode* result_6;
struct sNode* __result_obj__21;
result = (void*)0;
result_6 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__19 = result;
        return __result_obj__19;
    }
    self->it=self->head;
    if(({    (_conditional_value_X0=(self->it));    _conditional_value_X0;    })) {
        __result_obj__20 = self->it->item;
        return __result_obj__20;
    }
    memset(&result_6,0,sizeof(struct sNode*));
    __result_obj__21 = result_6;
    return __result_obj__21;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
_Bool _conditional_value_X0;
struct sNode* result;
struct sNode* __result_obj__22;
struct sNode* __result_obj__23;
struct sNode* result_7;
struct sNode* __result_obj__24;
result = (void*)0;
result_7 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)||self->it==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__22 = result;
        return __result_obj__22;
    }
    self->it=self->it->next;
    if(({    (_conditional_value_X0=(self->it));    _conditional_value_X0;    })) {
        __result_obj__23 = self->it->item;
        return __result_obj__23;
    }
    memset(&result_7,0,sizeof(struct sNode*));
    __result_obj__24 = result_7;
    return __result_obj__24;
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

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it;
_Bool _conditional_value_X0;
struct list_item$1sNode$ph* prev_it;
struct list$1sNode$ph* __result_obj__26;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__26 = self;
    return __result_obj__26;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sFun* __result_obj__27;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sFun* __result_obj__28;
struct sFun* __result_obj__29;
struct sFun* __result_obj__30;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                __result_obj__27 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__27, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__27;
            }
            it++;
            if(({            (_conditional_value_X3=(it>=self->size));            _conditional_value_X3;            })) {
                it=0;
            }
            else if(({            (_conditional_value_X4=(it==hash));            _conditional_value_X4;            })) {
                __result_obj__28 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__28, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__28;
            }
        }
        else {
            __result_obj__29 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__29, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__29;
        }
    }
    __result_obj__30 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__30, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__30;
}

static void sFun_finalize(struct sFun* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mName!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mResultType!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mParamTypes!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mParamNames!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mLambdaType!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAllVar!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mBlock!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mTextBlock!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mSource!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mSourceHead!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mSourceHead2!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mSourceDefer!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mAttribute!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mFunAttribute!=((void*)0)));    _conditional_value_X0;    })) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it;
_Bool _conditional_value_X0;
struct list_item$1sVar$ph* prev_it;
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->item!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
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

static void sBlock_finalize(struct sBlock* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mNodes!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->mVarTable!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value;
unsigned int hash;
unsigned int it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sFun* __result_obj__31;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sFun* __result_obj__32;
struct sFun* __result_obj__33;
struct sFun* __result_obj__34;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sFun*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                __result_obj__31 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__31, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__31;
            }
            it++;
            if(({            (_conditional_value_X3=(it>=self->size));            _conditional_value_X3;            })) {
                it=0;
            }
            else if(({            (_conditional_value_X4=(it==hash));            _conditional_value_X4;            })) {
                __result_obj__32 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__32, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__32;
            }
        }
        else {
            __result_obj__33 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__33, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__33;
        }
    }
    __result_obj__34 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__34, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__34;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _conditional_value_X0;
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__35;
struct tuple2$2char$phsNode$ph* __result_obj__36;
struct tuple2$2char$phsNode$ph* result_9;
struct tuple2$2char$phsNode$ph* __result_obj__37;
result = (void*)0;
result_9 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__35 = result;
        return __result_obj__35;
    }
    self->it=self->head;
    if(({    (_conditional_value_X0=(self->it));    _conditional_value_X0;    })) {
        __result_obj__36 = self->it->item;
        return __result_obj__36;
    }
    memset(&result_9,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__37 = result_9;
    return __result_obj__37;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _conditional_value_X0;
struct tuple2$2char$phsNode$ph* result;
struct tuple2$2char$phsNode$ph* __result_obj__38;
struct tuple2$2char$phsNode$ph* __result_obj__39;
struct tuple2$2char$phsNode$ph* result_11;
struct tuple2$2char$phsNode$ph* __result_obj__40;
result = (void*)0;
result_11 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)||self->it==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__38 = result;
        return __result_obj__38;
    }
    self->it=self->it->next;
    if(({    (_conditional_value_X0=(self->it));    _conditional_value_X0;    })) {
        __result_obj__39 = self->it->item;
        return __result_obj__39;
    }
    memset(&result_11,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__40 = result_11;
    return __result_obj__40;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _conditional_value_X0;
struct tuple2$2char$phsType$ph* result;
struct tuple2$2char$phsType$ph* __result_obj__42;
struct tuple2$2char$phsType$ph* __result_obj__43;
struct tuple2$2char$phsType$ph* result_14;
struct tuple2$2char$phsType$ph* __result_obj__44;
result = (void*)0;
result_14 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__42 = result;
        return __result_obj__42;
    }
    self->it=self->head;
    if(({    (_conditional_value_X0=(self->it));    _conditional_value_X0;    })) {
        __result_obj__43 = self->it->item;
        return __result_obj__43;
    }
    memset(&result_14,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__44 = result_14;
    return __result_obj__44;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _conditional_value_X0;
struct tuple2$2char$phsType$ph* result;
struct tuple2$2char$phsType$ph* __result_obj__45;
struct tuple2$2char$phsType$ph* __result_obj__46;
struct tuple2$2char$phsType$ph* result_15;
struct tuple2$2char$phsType$ph* __result_obj__47;
result = (void*)0;
result_15 = (void*)0;
    if(({    (_conditional_value_X0=(self==((void*)0)||self->it==((void*)0)));    _conditional_value_X0;    })) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__45 = result;
        return __result_obj__45;
    }
    self->it=self->it->next;
    if(({    (_conditional_value_X0=(self->it));    _conditional_value_X0;    })) {
        __result_obj__46 = self->it->item;
        return __result_obj__46;
    }
    memset(&result_15,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__47 = result_15;
    return __result_obj__47;
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1CVALUE$ph* litem;
struct CVALUE* __dec_obj34;
_Bool _conditional_value_X1;
struct list_item$1CVALUE$ph* litem_16;
struct CVALUE* __dec_obj35;
struct list_item$1CVALUE$ph* litem_17;
struct CVALUE* __dec_obj36;
struct list$1CVALUE$ph* __result_obj__49;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 6461, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj34=litem->item,
        litem->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 6471, "struct list_item$1CVALUE$ph*"))));
        litem_16->prev=self->head;
        litem_16->next=((void*)0);
        __dec_obj35=litem_16->item,
        litem_16->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_16;
        self->head->next=litem_16;
    }
    else {
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 6481, "struct list_item$1CVALUE$ph*"))));
        litem_17->prev=self->tail;
        litem_17->next=((void*)0);
        __dec_obj36=litem_17->item,
        litem_17->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_17;
        self->tail=litem_17;
    }
    self->len++;
    __result_obj__49 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__49;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj40;
struct sType* __dec_obj41;
struct sImplementsNode* __result_obj__51;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj40=self->obj_exp,
    self->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp));
    (__dec_obj40 ? __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0, (void*)0) :0);
    __right_value0 = (void*)0;
    __dec_obj41=self->inf_type,
    self->inf_type=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__51 = (struct sImplementsNode*)come_increment_ref_count(self);
    come_call_finalizer(sImplementsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sImplementsNode_finalize, __result_obj__51, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__51;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__52;
    __result_obj__52 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sImplementsNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__52;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* obj_exp;
struct sType* inf_type;
_Bool Value;
_Bool _conditional_value_X0;
_Bool __result_obj__53;
struct CVALUE* come_value;
struct sType* type;
struct sClass* klass;
void* __right_value1 = (void*)0;
struct CVALUE* come_value2;
struct sType* type2;
char* type_name;
char* type_name2;
int inf_num_stack;
char* buf;
char* buf2;
char* c_value;
struct sType* typeX;
int i;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct tuple2$2char$phsType$ph* multiple_assign_var3 = (void*)0;
char* name=0;
struct sType* field_type=0;
char* method_name;
struct sFun* fun;
_Bool _conditional_value_X3;
struct sType* type2_20;
struct tuple2$2sFun$pchar$ph* multiple_assign_var4 = (void*)0;
struct sFun* fun2=0;
char* real_fun_name=0;
char* __dec_obj42;
_Bool _conditional_value_X4;
struct sType* type2_21;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_22=0;
char* real_fun_name_23=0;
char* __dec_obj43;
_Bool _conditional_value_X5;
struct sClass* klass2;
_Bool _conditional_value_X6;
char* __dec_obj44;
_Bool _conditional_value_X7;
char* __dec_obj45;
struct sType* type3;
struct sType* __dec_obj46;
_Bool __result_obj__70;
    obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
    __right_value0 = (void*)0;
    inf_type=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
    Value=node_compile(obj_exp,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        __result_obj__53 = (_Bool)0;
        ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__53;
    }
    else {
    }
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    type->mPointerNum--;
    type->mHeap=(_Bool)0;
    klass=inf_type->mClass;
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 224, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    __right_value0 = (void*)0;
    type_name=(char*)come_increment_ref_count(make_type_name_string(inf_type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    type_name2=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
    static int inf_num=0;
    ++inf_num;
    inf_num_stack=inf_num;
    __right_value0 = (void*)0;
    buf=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name,inf_num_stack));
    add_come_code_at_function_head(info,buf);
    __right_value0 = (void*)0;
    buf2=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2,inf_num_stack));
    add_come_code_at_function_head(info,buf2);
    if(({    __right_value0 = (void*)0,     (_conditional_value_X0=(((struct sFun*)(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2")))));    come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _conditional_value_X0;    })) {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc_v2(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_stack,type_name,type_name,info->sname,info->sline,type_name);
    }
    else {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_stack,type_name,type_name,info->sname,info->sline,type_name);
    }
    __right_value0 = (void*)0;
    c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value->type,come_value->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack,c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack,inf_num_stack);
    __right_value0 = (void*)0;
    typeX=(struct sType*)come_increment_ref_count(sType_clone(type));
    typeX->mPointerNum++;
    __right_value0 = (void*)0;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_finalizer_automatically((struct sType*)come_increment_ref_count(typeX),"finalize",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_cloner_automatically((struct sType*)come_increment_ref_count(typeX),"clone",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(    ({    (_conditional_value_X0=(i=1));    _conditional_value_X0;    });    ({    (_conditional_value_X1=(i<list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)));    _conditional_value_X1;    });    ({    (_conditional_value_X2=(i++));    _conditional_value_X2;    })    ){
        __right_value0 = (void*)0;
        multiple_assign_var3=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(klass->mFields,i)));
        name=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __right_value0 = (void*)0;
        method_name=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,name,info,(_Bool)1));
        __right_value0 = (void*)0;
        fun=((struct sFun*)(__right_value0=map$2char$phsFun$ph_at(info->funcs,method_name,((void*)0))));
        come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_conditional_value_X3=(fun==((void*)0)&&string_operator_equals(name,"to_string")));        _conditional_value_X3;        })) {
            __right_value0 = (void*)0;
            type2_20=(struct sType*)come_increment_ref_count(sType_clone(type));
            type2_20->mPointerNum++;
            __right_value0 = (void*)0;
            multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_to_string_automatically((struct sType*)come_increment_ref_count(type2_20),name,info)));
            fun2=multiple_assign_var4->v1;
            real_fun_name=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            fun=fun2;
            __dec_obj42=method_name,
            method_name=(char*)come_increment_ref_count(real_fun_name);
            __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(sType_finalize, type2_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(({        (_conditional_value_X4=(fun==((void*)0)&&string_operator_equals(name,"equals")));        _conditional_value_X4;        })) {
            __right_value0 = (void*)0;
            type2_21=(struct sType*)come_increment_ref_count(sType_clone(type));
            type2_21->mPointerNum++;
            __right_value0 = (void*)0;
            multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_equals_automatically((struct sType*)come_increment_ref_count(type2_21),name,info)));
            fun2_22=multiple_assign_var5->v1;
            real_fun_name_23=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            fun=fun2_22;
            __dec_obj43=method_name,
            method_name=(char*)come_increment_ref_count(real_fun_name_23);
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(sType_finalize, type2_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (real_fun_name_23 = come_decrement_ref_count(real_fun_name_23, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(({        (_conditional_value_X5=(fun==((void*)0)));        _conditional_value_X5;        })) {
            __right_value0 = (void*)0;
            klass2=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            while(({            __right_value0 = (void*)0,             (_conditional_value_X6=(((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass2->mParentClassName)))));            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            _conditional_value_X6;            })) {
                __right_value0 = (void*)0;
                klass2=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass2->mParentClassName)));
                come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                __right_value0 = (void*)0;
                __dec_obj44=method_name,
                method_name=(char*)come_increment_ref_count(create_method_name_using_class(klass2,(_Bool)0,name,info,(_Bool)1));
                __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                fun=((struct sFun*)(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value0=__builtin_string(method_name))),((void*)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sFun_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(({                (_conditional_value_X7=(fun));                _conditional_value_X7;                })) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack,name,method_name);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack,name,method_name);
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (method_name = come_decrement_ref_count(method_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __right_value0 = (void*)0;
    __dec_obj45=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack));
    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    type3=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    type3->mPointerNum++;
    type3->mHeap=(_Bool)1;
    type2->mHeap=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj46=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mPointerNum++;
    come_value2->var=((void*)0);
    append_object_to_right_values(come_value2,(struct sType*)come_increment_ref_count(type3),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__70 = (_Bool)1;
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
    (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0));
    (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, typeX, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__70;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->obj_exp!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->obj_exp) ? self->obj_exp = come_decrement_ref_count(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->inf_type!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v2!=((void*)0)));    _conditional_value_X0;    })) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position){
_Bool _conditional_value_X0;
struct list_item$1tuple2$2char$phsType$ph$ph* it;
int i;
_Bool _conditional_value_X1;
struct tuple2$2char$phsType$ph* __result_obj__54;
struct tuple2$2char$phsType$ph* default_value;
struct tuple2$2char$phsType$ph* __result_obj__55;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(position<0));    _conditional_value_X0;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(position==i));        _conditional_value_X1;        })) {
            __result_obj__54 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__54, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__54;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__55 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__55, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__55;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position){
_Bool _conditional_value_X0;
struct list_item$1tuple2$2char$phsType$ph$ph* it;
int i;
_Bool _conditional_value_X1;
struct tuple2$2char$phsType$ph* __result_obj__56;
struct tuple2$2char$phsType$ph* default_value;
struct tuple2$2char$phsType$ph* __result_obj__57;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(position<0));    _conditional_value_X0;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(position==i));        _conditional_value_X1;        })) {
            __result_obj__56 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__56, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__56;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__57 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__57, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__57;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash;
unsigned int it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sFun* __result_obj__58;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sFun* __result_obj__59;
struct sFun* __result_obj__60;
struct sFun* __result_obj__61;
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                __result_obj__58 = (struct sFun*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__58, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__58;
            }
            it++;
            if(({            (_conditional_value_X3=(it>=self->size));            _conditional_value_X3;            })) {
                it=0;
            }
            else if(({            (_conditional_value_X4=(it==hash));            _conditional_value_X4;            })) {
                __result_obj__59 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__59, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__59;
            }
        }
        else {
            __result_obj__60 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__60, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__60;
        }
    }
    __result_obj__61 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__61, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__61;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sClass* __result_obj__62;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sClass* __result_obj__63;
struct sClass* __result_obj__64;
struct sClass* __result_obj__65;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                __result_obj__62 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__62, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__62;
            }
            it++;
            if(({            (_conditional_value_X3=(it>=self->size));            _conditional_value_X3;            })) {
                it=0;
            }
            else if(({            (_conditional_value_X4=(it==hash));            _conditional_value_X4;            })) {
                __result_obj__63 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__63, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__63;
            }
        }
        else {
            __result_obj__64 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__64, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__64;
        }
    }
    __result_obj__65 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__65, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__65;
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

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value;
unsigned int hash;
unsigned int it;
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
struct sClass* __result_obj__66;
_Bool _conditional_value_X3;
_Bool _conditional_value_X4;
struct sClass* __result_obj__67;
struct sClass* __result_obj__68;
struct sClass* __result_obj__69;
default_value = (void*)0;
    memset(&default_value,0,sizeof(struct sClass*));
    hash=string_get_hash_key(((char*)key))%self->size;
    it=hash;
    while(({    (_conditional_value_X0=((_Bool)1));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(self->item_existance[it]));        _conditional_value_X1;        })) {
            if(({            (_conditional_value_X2=(string_equals(self->keys[it],key)));            _conditional_value_X2;            })) {
                __result_obj__66 = (struct sClass*)come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__66, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__66;
            }
            it++;
            if(({            (_conditional_value_X3=(it>=self->size));            _conditional_value_X3;            })) {
                it=0;
            }
            else if(({            (_conditional_value_X4=(it==hash));            _conditional_value_X4;            })) {
                __result_obj__67 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__67, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__67;
            }
        }
        else {
            __result_obj__68 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__68, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__68;
        }
    }
    __result_obj__69 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__69, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__69;
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sTrueNode* __result_obj__71;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__71 = (struct sTrueNode*)come_increment_ref_count(self);
    come_call_finalizer(sTrueNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sTrueNode_finalize, __result_obj__71, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__71;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__72;
    __result_obj__72 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sTrueNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__72;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj47;
void* __right_value2 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__73;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 339, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj47=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj48=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 342, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__73 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__73;
}

static void sTrueNode_finalize(struct sTrueNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNode* create_true_object(struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__76;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 355, "struct sNode");
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "21obj.c", 355, "struct sTrueNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__76 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__76) ? __result_obj__76 = come_decrement_ref_count(__result_obj__76, ((struct sNode*)__result_obj__76)->finalize, ((struct sNode*)__result_obj__76)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__76;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
_Bool _conditional_value_X0;
struct sTrueNode* __result_obj__74;
void* __right_value0 = (void*)0;
struct sTrueNode* result;
char* __dec_obj49;
struct sTrueNode* __result_obj__75;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__74 = (void*)0;
        return __result_obj__74;
    }
    result=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj49=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTrueNode_clone", 5, "char*"));
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__75 = result;
    come_call_finalizer(sTrueNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__75;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sFalseNode* __result_obj__77;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__77 = (struct sFalseNode*)come_increment_ref_count(self);
    come_call_finalizer(sFalseNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sFalseNode_finalize, __result_obj__77, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__77;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__78;
    __result_obj__78 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sFalseNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__78;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj50;
void* __right_value2 = (void*)0;
struct sType* __dec_obj51;
_Bool __result_obj__79;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 372, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj50=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj51=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 375, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__79 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__79;
}

static void sFalseNode_finalize(struct sFalseNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sNode* create_false_object(struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__82;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 388, "struct sNode");
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "21obj.c", 388, "struct sFalseNode*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__82 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)));
    come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__82) ? __result_obj__82 = come_decrement_ref_count(__result_obj__82, ((struct sNode*)__result_obj__82)->finalize, ((struct sNode*)__result_obj__82)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__82;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
_Bool _conditional_value_X0;
struct sFalseNode* __result_obj__80;
void* __right_value0 = (void*)0;
struct sFalseNode* result;
char* __dec_obj52;
struct sFalseNode* __result_obj__81;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__80 = (void*)0;
        return __result_obj__80;
    }
    result=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj52=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFalseNode_clone", 5, "char*"));
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    __result_obj__81 = result;
    come_call_finalizer(sFalseNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__81;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* __dec_obj53;
struct sSizeOfNode* __result_obj__83;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj53=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__83 = (struct sSizeOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sSizeOfNode_finalize, __result_obj__83, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__83;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__84;
    __result_obj__84 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sSizeOfNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__84 = come_decrement_ref_count(__result_obj__84, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__84;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
struct sType* type2;
char* type_name;
char* __dec_obj54;
void* __right_value2 = (void*)0;
struct sType* __dec_obj55;
_Bool __result_obj__85;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 409, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    __right_value0 = (void*)0;
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)1));
    __right_value0 = (void*)0;
    __dec_obj54=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name));
    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj55=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 416, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__85 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__85;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sOffsetOf* sOffsetOf_initialize(struct sOffsetOf* self, struct sType* type, char* name, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* __dec_obj56;
char* __dec_obj57;
struct sOffsetOf* __result_obj__86;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj56=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj57=self->name,
    self->name=(char*)come_increment_ref_count((char*)come_memdup(name, "21obj.c", 435, "char*"));
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__86 = (struct sOffsetOf*)come_increment_ref_count(self);
    come_call_finalizer(sOffsetOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sOffsetOf_finalize, __result_obj__86, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__86;
}

char* sOffsetOf_kind(struct sOffsetOf* self){
void* __right_value0 = (void*)0;
char* __result_obj__87;
    __result_obj__87 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sOffsetOf"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__87 = come_decrement_ref_count(__result_obj__87, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__87;
}

_Bool sOffsetOf_compile(struct sOffsetOf* self, struct sInfo* info){
struct sType* type;
char* name;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
struct sType* type2;
char* type_name;
char* __dec_obj58;
struct sType* __dec_obj59;
_Bool __result_obj__88;
    type=(struct sType*)come_increment_ref_count(self->type);
    name=(char*)come_increment_ref_count(self->name);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 448, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    __right_value0 = (void*)0;
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    __dec_obj58=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("__builtin_offsetof(%s, %s)",type_name,name));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj59=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__88 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__88;
}

static void sOffsetOf_finalize(struct sOffsetOf* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->name!=((void*)0)));    _conditional_value_X0;    })) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
}

struct sGeneric* sGeneric_initialize(struct sGeneric* self, struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj60;
struct list$1sType$ph* __dec_obj61;
struct list$1sNode$ph* __dec_obj62;
struct sNode* __dec_obj63;
struct sGeneric* __result_obj__89;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj60=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj61=self->types,
    self->types=(struct list$1sType$ph*)come_increment_ref_count(types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj62=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj63=self->default_exp,
    self->default_exp=(struct sNode*)come_increment_ref_count(default_exp);
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__89 = (struct sGeneric*)come_increment_ref_count(self);
    come_call_finalizer(sGeneric_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sGeneric_finalize, __result_obj__89, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__89;
}

char* sGeneric_kind(struct sGeneric* self){
void* __right_value0 = (void*)0;
char* __result_obj__90;
    __result_obj__90 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sGeneric"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__90;
}

_Bool sGeneric_compile(struct sGeneric* self, struct sInfo* info){
struct sNode* exp;
struct list$1sNode$ph* exps;
struct list$1sType$ph* types;
struct sNode* default_exp;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf;
_Bool Value;
_Bool _conditional_value_X0;
_Bool __result_obj__91;
struct CVALUE* come_value;
struct sType* result_type;
int n;
struct list$1sNode$ph* o2_saved;
struct sNode* it;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
struct sType* type;
_Bool Value_24;
_Bool _conditional_value_X4;
_Bool __result_obj__96;
struct CVALUE* come_value_25;
struct sType* __dec_obj64;
_Bool Value_26;
_Bool _conditional_value_X5;
_Bool __result_obj__97;
struct CVALUE* come_value_27;
int n_28;
struct list$1sNode$ph* o2_saved_29;
struct sNode* it_30;
_Bool _conditional_value_X6;
_Bool _conditional_value_X7;
_Bool _conditional_value_X8;
struct sType* type_31;
_Bool Value_32;
_Bool _conditional_value_X9;
_Bool __result_obj__98;
struct CVALUE* come_value_33;
struct sType* __dec_obj65;
_Bool _conditional_value_X10;
struct CVALUE* come_value2;
char* __dec_obj66;
struct sType* __dec_obj67;
_Bool __result_obj__99;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    exps=(struct list$1sNode$ph*)come_increment_ref_count(self->exps);
    types=(struct list$1sType$ph*)come_increment_ref_count(self->types);
    default_exp=(struct sNode*)come_increment_ref_count(self->default_exp);
    buf=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 490, "struct buffer*"))));
    Value=node_compile(exp,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        __result_obj__91 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result_obj__91;
    }
    else {
    }
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buffer_append_format(buf,"_Generic((%s), ",come_value->c_value);
    result_type=((void*)0);
    if(({    (_conditional_value_X0=(default_exp));    _conditional_value_X0;    })) {
        n=0;
        for(        ({        (_conditional_value_X1=(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(exps),it=list$1sNode$ph_begin(o2_saved)));        _conditional_value_X1;        });        ({        (_conditional_value_X2=(!list$1sNode$ph_end(o2_saved)));        _conditional_value_X2;        });        ({        (_conditional_value_X3=(it=list$1sNode$ph_next(o2_saved)));        _conditional_value_X3;        })        ){
            __right_value0 = (void*)0;
            type=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(types,n));
            Value_24=node_compile(it,info);
            if(({            (_conditional_value_X4=(!Value_24));            _conditional_value_X4;            })) {
                __result_obj__96 = (_Bool)0;
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__96;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_25=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj64=result_type,
            result_type=(struct sType*)come_increment_ref_count(come_value_25->type);
            come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            __right_value0 = (void*)0;
            buffer_append_format(buf,"%s: %s",((char*)(__right_value0=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0))),come_value_25->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_format(buf,",");
            n++;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        Value_26=node_compile(default_exp,info);
        if(({        (_conditional_value_X5=(!Value_26));        _conditional_value_X5;        })) {
            __result_obj__97 = (_Bool)0;
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result_obj__97;
        }
        else {
        }
        __right_value0 = (void*)0;
        come_value_27=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(buf,"default: %s",come_value_27->c_value);
        buffer_append_format(buf,")");
        come_call_finalizer(CVALUE_finalize, come_value_27, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        n_28=0;
        for(        ({        (_conditional_value_X6=(o2_saved_29=(struct list$1sNode$ph*)come_increment_ref_count(exps),it_30=list$1sNode$ph_begin(o2_saved_29)));        _conditional_value_X6;        });        ({        (_conditional_value_X7=(!list$1sNode$ph_end(o2_saved_29)));        _conditional_value_X7;        });        ({        (_conditional_value_X8=(it_30=list$1sNode$ph_next(o2_saved_29)));        _conditional_value_X8;        })        ){
            __right_value0 = (void*)0;
            type_31=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(types,n_28));
            Value_32=node_compile(it_30,info);
            if(({            (_conditional_value_X9=(!Value_32));            _conditional_value_X9;            })) {
                __result_obj__98 = (_Bool)0;
                come_call_finalizer(sType_finalize, type_31, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result_obj__98;
            }
            else {
            }
            __right_value0 = (void*)0;
            come_value_33=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj65=result_type,
            result_type=(struct sType*)come_increment_ref_count(come_value_33->type);
            come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            __right_value0 = (void*)0;
            buffer_append_format(buf,"%s: %s",((char*)(__right_value0=make_type_name_string(type_31,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0))),come_value_33->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(({            (_conditional_value_X10=(n_28==list$1sNode$ph_length(exps)-1));            _conditional_value_X10;            })) {
                buffer_append_format(buf,")");
            }
            else {
                buffer_append_format(buf,",");
            }
            n_28++;
            come_call_finalizer(sType_finalize, type_31, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 557, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj66=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(buffer_to_string(buf));
    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj67=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__99 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__99;
}

static void sGeneric_finalize(struct sGeneric* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->types!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exps!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->default_exp!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->default_exp) ? self->default_exp = come_decrement_ref_count(self->default_exp, ((struct sNode*)self->default_exp)->finalize, ((struct sNode*)self->default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _conditional_value_X0;
struct list_item$1sType$ph* it;
int i;
_Bool _conditional_value_X1;
struct sType* __result_obj__92;
struct sType* default_value;
struct sType* __result_obj__93;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(position<0));    _conditional_value_X0;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(position==i));        _conditional_value_X1;        })) {
            __result_obj__92 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__92, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__92;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__93 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__93, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__93;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
_Bool _conditional_value_X0;
struct list_item$1sType$ph* it;
int i;
_Bool _conditional_value_X1;
struct sType* __result_obj__94;
struct sType* default_value;
struct sType* __result_obj__95;
default_value = (void*)0;
    if(({    (_conditional_value_X0=(position<0));    _conditional_value_X0;    })) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(position==i));        _conditional_value_X1;        })) {
            __result_obj__94 = (struct sType*)come_increment_ref_count(it->item);
            come_call_finalizer(sType_finalize, __result_obj__94, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__94;
        }
        it=it->next;
        i++;
    }
    memset(&default_value,0,sizeof(struct sType*));
    __result_obj__95 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__95, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__95;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        return 0;
    }
    return self->len;
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj68;
struct sSizeOfExpNode* __result_obj__100;
struct sSizeOfExpNode* __result_obj__101;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj68=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj68 ? __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__100 = (struct sSizeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__100, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__100;
    __result_obj__101 = (struct sSizeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__101, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__101;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__102;
    __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sSizeOfExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__102;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp;
_Bool Value;
_Bool _conditional_value_X0;
_Bool __result_obj__103;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
void* __right_value1 = (void*)0;
struct CVALUE* come_value2;
char* __dec_obj69;
void* __right_value2 = (void*)0;
struct sType* __dec_obj70;
_Bool __result_obj__104;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        __result_obj__103 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__103;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 597, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj69=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value->c_value));
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj70=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 600, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__104 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__104;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* __dec_obj71;
struct sTypeOfNode* __result_obj__105;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj71=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__105 = (struct sTypeOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sTypeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sTypeOfNode_finalize, __result_obj__105, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__105;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__106;
    __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sTypeOfNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__106;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
struct sType* type2;
char* type_name;
char* __dec_obj72;
void* __right_value2 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__107;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 630, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    __right_value0 = (void*)0;
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    __dec_obj72=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj73=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 637, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__107 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__107;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj74;
struct sTypeOfExpNode* __result_obj__108;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj74=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj74 ? __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__108 = (struct sTypeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sTypeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sTypeOfExpNode_finalize, __result_obj__108, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__108;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__109;
    __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sTypeOfExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__109;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp;
_Bool Value;
_Bool _conditional_value_X0;
_Bool __result_obj__110;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
struct sType* type;
struct sType* type2;
char* type_name;
char* __dec_obj75;
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct sType* __dec_obj76;
_Bool __result_obj__111;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        __result_obj__110 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__110;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_clone(come_value->type));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    __right_value0 = (void*)0;
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    __dec_obj75=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name));
    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj76=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 679, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__111 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__111;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj77;
struct sDynamicTypeOf* __result_obj__112;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj77=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj77 ? __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__112 = (struct sDynamicTypeOf*)come_increment_ref_count(self);
    come_call_finalizer(sDynamicTypeOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sDynamicTypeOf_finalize, __result_obj__112, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__112;
}

char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self){
void* __right_value0 = (void*)0;
char* __result_obj__113;
    __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sDynamicTypeOf"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__113;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info){
struct sNode* exp;
_Bool Value;
_Bool _conditional_value_X0;
_Bool __result_obj__114;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
void* __right_value1 = (void*)0;
struct CVALUE* come_value2;
char* __dec_obj78;
void* __right_value2 = (void*)0;
struct sType* __dec_obj79;
struct CVALUE* come_value2_34;
char* __dec_obj80;
struct sType* __dec_obj81;
_Bool __result_obj__115;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        __result_obj__114 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__114;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(({    (_conditional_value_X0=(come_value->type->mPointerNum>0&&come_value->type->mHeap));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 715, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj78=come_value2->c_value,
        come_value2->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value->c_value));
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj79=come_value2->type,
        come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 718, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value2->var=((void*)0);
        add_come_last_code(info,"%s",come_value2->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2_34=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 726, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj80=come_value2_34->c_value,
        come_value2_34->c_value=(char*)come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj81=come_value2_34->type,
        come_value2_34->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 729, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value2_34->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_34->c_value);
        append_object_to_right_values(come_value2_34,(struct sType*)come_increment_ref_count(come_value2_34->type),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_34));
        come_call_finalizer(CVALUE_finalize, come_value2_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__115 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__115;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* __dec_obj82;
struct sAlignOfNode* __result_obj__116;
struct sAlignOfNode* __result_obj__117;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj82=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__116 = (struct sAlignOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__116, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__116;
    __result_obj__117 = (struct sAlignOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__117, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__117;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__118;
    __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAlignOfNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__118;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
struct sType* type2;
char* type_name;
char* __dec_obj83;
void* __right_value2 = (void*)0;
struct sType* __dec_obj84;
_Bool __result_obj__119;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 763, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    __right_value0 = (void*)0;
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    __dec_obj83=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name));
    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj84=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 770, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__119 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__119;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj85;
struct sAlignOfExpNode* __result_obj__120;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj85=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj85 ? __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__120 = (struct sAlignOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sAlignOfExpNode_finalize, __result_obj__120, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__120;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__121;
    __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAlignOfExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__121;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp;
_Bool Value;
_Bool _conditional_value_X0;
_Bool __result_obj__122;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
void* __right_value1 = (void*)0;
struct CVALUE* come_value2;
char* __dec_obj86;
void* __right_value2 = (void*)0;
struct sType* __dec_obj87;
_Bool __result_obj__123;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        __result_obj__122 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__122;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 806, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj86=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value->c_value));
    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj87=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 809, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__123 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__123;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* __dec_obj88;
struct sAlignOfNode2* __result_obj__124;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj88=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__124 = (struct sAlignOfNode2*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sAlignOfNode2_finalize, __result_obj__124, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__124;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __right_value0 = (void*)0;
char* __result_obj__125;
    __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAlignOfNode2"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__125;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
struct sType* type2;
char* type_name;
char* __dec_obj89;
void* __right_value2 = (void*)0;
struct sType* __dec_obj90;
_Bool __result_obj__126;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 839, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    __right_value0 = (void*)0;
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    __dec_obj89=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name));
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj90=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 846, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__126 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__126;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj91;
struct sAlignOfExpNode2* __result_obj__127;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj91=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__127 = (struct sAlignOfExpNode2*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfExpNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sAlignOfExpNode2_finalize, __result_obj__127, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__127;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __right_value0 = (void*)0;
char* __result_obj__128;
    __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAlignOfExpNode2"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__128;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp;
_Bool Value;
_Bool _conditional_value_X0;
_Bool __result_obj__129;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
void* __right_value1 = (void*)0;
struct CVALUE* come_value2;
char* __dec_obj92;
void* __right_value2 = (void*)0;
struct sType* __dec_obj93;
_Bool __result_obj__130;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        __result_obj__129 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__129;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 882, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj92=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value->c_value));
    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj93=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 885, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__130 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__130;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* __dec_obj94;
struct sAlignAsNode* __result_obj__131;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj94=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__131 = (struct sAlignAsNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignAsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sAlignAsNode_finalize, __result_obj__131, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__131;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__132;
    __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAlignAsNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__132;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
struct sType* type2;
char* type_name;
char* __dec_obj95;
void* __right_value2 = (void*)0;
struct sType* __dec_obj96;
_Bool __result_obj__133;
    type=(struct sType*)come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 915, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    __right_value0 = (void*)0;
    type_name=(char*)come_increment_ref_count(make_type_name_string(type2,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __right_value0 = (void*)0;
    __dec_obj95=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name));
    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj96=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 922, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__133 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    return __result_obj__133;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj97;
struct sAlignAsExpNode* __result_obj__134;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj97=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj97 ? __dec_obj97 = come_decrement_ref_count(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__134 = (struct sAlignAsExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignAsExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sAlignAsExpNode_finalize, __result_obj__134, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__134;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__135;
    __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sAlignAsExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__135;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp;
_Bool Value;
_Bool _conditional_value_X0;
_Bool __result_obj__136;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
void* __right_value1 = (void*)0;
struct CVALUE* come_value2;
char* __dec_obj98;
void* __right_value2 = (void*)0;
struct sType* __dec_obj99;
_Bool __result_obj__137;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        __result_obj__136 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        return __result_obj__136;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 958, "struct CVALUE*"))));
    __right_value0 = (void*)0;
    __dec_obj98=come_value2->c_value,
    come_value2->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value->c_value));
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj99=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 961, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2));
    __result_obj__137 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__137;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj100;
struct sDeleteNode* __result_obj__138;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj100=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__138 = (struct sDeleteNode*)come_increment_ref_count(self);
    come_call_finalizer(sDeleteNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sDeleteNode_finalize, __result_obj__138, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__138;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__139;
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sDeleteNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__139;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node;
_Bool Value;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
_Bool __result_obj__140;
    node=self->node;
    Value=node_compile(node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        return (_Bool)0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(({    (_conditional_value_X0=(come_value->type->mPointerNum>0));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        free_object((struct sType*)come_increment_ref_count(sType_clone(come_value->type)),come_value->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
    }
    __result_obj__140 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__140;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj101;
struct sBorrowNode* __result_obj__141;
struct sBorrowNode* __result_obj__142;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj101=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj101 ? __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__141 = (struct sBorrowNode*)come_increment_ref_count(self);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sBorrowNode_finalize, __result_obj__141, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__141;
    __result_obj__142 = (struct sBorrowNode*)come_increment_ref_count(self);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sBorrowNode_finalize, __result_obj__142, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__142;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__143;
    __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sBorrowNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__143;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node;
_Bool Value;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
struct sRightValueObject* right_value_objects;
_Bool _conditional_value_X1;
int right_value_id;
_Bool _conditional_value_X2;
_Bool __result_obj__144;
    node=self->node;
    Value=node_compile(node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        return (_Bool)0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(({    (_conditional_value_X0=(come_value->type->mPointerNum>0));    _conditional_value_X0;    })) {
        come_value->type->mHeap=(_Bool)0;
        right_value_objects=come_value->right_value_objects;
        if(({        (_conditional_value_X1=(right_value_objects));        _conditional_value_X1;        })) {
            right_value_id=right_value_objects->mID;
            if(({            (_conditional_value_X2=(right_value_id!=-1));            _conditional_value_X2;            })) {
                remove_object_from_right_values(right_value_id,info);
            }
        }
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__144 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__144;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj102;
struct sCloneNode* __result_obj__145;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj102=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__145 = (struct sCloneNode*)come_increment_ref_count(self);
    come_call_finalizer(sCloneNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sCloneNode_finalize, __result_obj__145, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__145;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__146;
    __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sCloneNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__146;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node;
_Bool Value;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct CVALUE* left_value;
struct sType* left_type;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
struct tuple2$2sType$phchar$ph* multiple_assign_var6 = (void*)0;
struct sType* result_type=0;
char* c_value=0;
char* __dec_obj103;
struct sType* __dec_obj104;
_Bool __result_obj__147;
    node=self->node;
    Value=node_compile(node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        return (_Bool)0;
    }
    else {
    }
    left_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    left_type=(struct sType*)come_increment_ref_count(sType_clone(left_value->type));
    if(({    (_conditional_value_X0=(left_type->mPointerNum==1&&string_operator_equals(left_type->mClass->mName,"void")&&left_type->mHeap==(_Bool)0));    _conditional_value_X0;    })) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value));
    }
    else if(({    (_conditional_value_X1=(left_type->mPointerNum==0));    _conditional_value_X1;    })) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value));
    }
    else if(({    (_conditional_value_X2=(left_type->mPointerNum>0));    _conditional_value_X2;    })) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1083, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)((struct sType*)come_increment_ref_count(left_type),left_value->c_value,info)));
        result_type=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        c_value=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj103=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(c_value);
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj104=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->type->mHeap=(_Bool)1;
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,(struct sType*)come_increment_ref_count(left_type),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__147 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__147;
}

static void sCloneNode_finalize(struct sCloneNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
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

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj105;
struct sDupeNode* __result_obj__148;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj105=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj105 ? __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__148 = (struct sDupeNode*)come_increment_ref_count(self);
    come_call_finalizer(sDupeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sDupeNode_finalize, __result_obj__148, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__148;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__149;
    __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sDupeNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__149;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node;
_Bool Value;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct CVALUE* left_value;
struct sType* left_type;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
struct tuple2$2sType$phchar$ph* multiple_assign_var7 = (void*)0;
struct sType* result_type=0;
char* c_value=0;
char* __dec_obj106;
struct sType* __dec_obj107;
_Bool __result_obj__150;
    node=self->node;
    Value=node_compile(node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        return (_Bool)0;
    }
    else {
    }
    left_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    __right_value0 = (void*)0;
    left_type=(struct sType*)come_increment_ref_count(sType_clone(left_value->type));
    if(({    (_conditional_value_X0=(left_type->mPointerNum==0));    _conditional_value_X0;    })) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value));
    }
    else if(({    (_conditional_value_X1=(left_type->mPointerNum>0&&left_type->mHeap==(_Bool)0));    _conditional_value_X1;    })) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value));
    }
    else if(({    (_conditional_value_X2=(left_type->mPointerNum>0));    _conditional_value_X2;    })) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1133, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)((struct sType*)come_increment_ref_count(left_type),left_value->c_value,info)));
        result_type=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        c_value=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj106=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(c_value);
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __dec_obj107=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->type->mHeap=(_Bool)1;
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,(struct sType*)come_increment_ref_count(left_type),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__150 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__150;
}

static void sDupeNode_finalize(struct sDupeNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj108;
struct sDummyHeapNode* __result_obj__151;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj108=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__151 = (struct sDummyHeapNode*)come_increment_ref_count(self);
    come_call_finalizer(sDummyHeapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sDummyHeapNode_finalize, __result_obj__151, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__151;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__152;
    __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sDummyHeapNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__152;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node;
_Bool Value;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
_Bool __result_obj__153;
    node=self->node;
    Value=node_compile(node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        return (_Bool)0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(({    (_conditional_value_X0=(come_value->type->mPointerNum>0));    _conditional_value_X0;    })) {
        come_value->type->mHeap=(_Bool)1;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__153 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__153;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj109;
struct sGCIncNode* __result_obj__154;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj109=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj109 ? __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__154 = (struct sGCIncNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCIncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sGCIncNode_finalize, __result_obj__154, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__154;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__155;
    __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sGCIncNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__155;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node;
_Bool Value;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
struct sType* type;
char* type_name;
char* __dec_obj110;
_Bool __result_obj__156;
    node=self->node;
    Value=node_compile(node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        return (_Bool)0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type=come_value->type;
    if(({    (_conditional_value_X0=(come_value->type->mHeap&&come_value->type->mPointerNum>0));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        type_name=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0));
        __right_value0 = (void*)0;
        __dec_obj110=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value->type,come_value->c_value,info));
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__156 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__156;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj111;
struct sGCDecNode* __result_obj__157;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj111=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__157 = (struct sGCDecNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCDecNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sGCDecNode_finalize, __result_obj__157, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__157;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__158;
    __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sGCDecNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__158;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node;
_Bool Value;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
struct sType* type;
_Bool __result_obj__159;
    node=self->node;
    Value=node_compile(node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        return (_Bool)0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType*)come_increment_ref_count(come_value->type);
    if(({    (_conditional_value_X0=(come_value->type->mHeap&&come_value->type->mPointerNum>0));    _conditional_value_X0;    })) {
        decrement_ref_count_object((struct sType*)come_increment_ref_count(type),come_value->c_value,info,(_Bool)0);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__159 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__159;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* __dec_obj112;
struct sIsHeap* __result_obj__160;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj112=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__160 = (struct sIsHeap*)come_increment_ref_count(self);
    come_call_finalizer(sIsHeap_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sIsHeap_finalize, __result_obj__160, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__160;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __right_value0 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sIsHeap"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__161;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj113;
void* __right_value2 = (void*)0;
struct sType* __dec_obj114;
struct CVALUE* come_value_35;
char* __dec_obj115;
struct sType* __dec_obj116;
    node=self->type;
    if(({    (_conditional_value_X0=(self->type->mHeap));    _conditional_value_X0;    })) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1276, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj113=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj114=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1279, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_35=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1287, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj115=come_value_35->c_value,
        come_value_35->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj116=come_value_35->type,
        come_value_35->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1290, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_35->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_35));
        add_come_last_code(info,"%s",come_value_35->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sIsHeap_finalize(struct sIsHeap* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sType* __dec_obj117;
struct sIsPointer* __result_obj__162;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj117=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__162 = (struct sIsPointer*)come_increment_ref_count(self);
    come_call_finalizer(sIsPointer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sIsPointer_finalize, __result_obj__162, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__162;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __right_value0 = (void*)0;
char* __result_obj__163;
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sIsPointer"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__163;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct CVALUE* come_value;
char* __dec_obj118;
void* __right_value2 = (void*)0;
struct sType* __dec_obj119;
struct CVALUE* come_value_36;
char* __dec_obj120;
struct sType* __dec_obj121;
    node=self->type;
    if(({    (_conditional_value_X0=(self->type->mPointerNum>0));    _conditional_value_X0;    })) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1322, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj118=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj119=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1325, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_36=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1333, "struct CVALUE*"))));
        __right_value0 = (void*)0;
        __dec_obj120=come_value_36->c_value,
        come_value_36->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj121=come_value_36->type,
        come_value_36->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1336, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_36->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_36));
        add_come_last_code(info,"%s",come_value_36->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sIsPointer_finalize(struct sIsPointer* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj122;
struct sGCDecNoFreeNode* __result_obj__164;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __right_value0 = (void*)0;
    __dec_obj122=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__164 = (struct sGCDecNoFreeNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCDecNoFreeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sGCDecNoFreeNode_finalize, __result_obj__164, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__164;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __right_value0 = (void*)0;
char* __result_obj__165;
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string("sGCDecNoFreeNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__165;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node;
_Bool Value;
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct CVALUE* come_value;
struct sType* type;
_Bool __result_obj__166;
    node=self->node;
    Value=node_compile(node,info);
    if(({    (_conditional_value_X0=(!Value));    _conditional_value_X0;    })) {
        return (_Bool)0;
    }
    else {
    }
    come_value=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType*)come_increment_ref_count(come_value->type);
    if(({    (_conditional_value_X0=(type->mHeap&&type->mPointerNum>0));    _conditional_value_X0;    })) {
        decrement_ref_count_object((struct sType*)come_increment_ref_count(type),come_value->c_value,info,(_Bool)1);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value));
    __result_obj__166 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__166;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type=0;
char* name=0;
_Bool err=0;
_Bool _conditional_value_X1;
_Bool _conditional_value_X2;
void* __right_value1 = (void*)0;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* __right_value2 = (void*)0;
struct sNode* obj;
char* fun_name;
struct sNode* __result_obj__175;
_Bool _conditional_value_X3;
struct list$1tuple2$2char$phsNode$ph$ph* initializer;
_Bool _conditional_value_X4;
char* word;
_Bool _conditional_value_X5;
_Bool no_comma;
struct sNode* exp;
_Bool _conditional_value_X6;
struct sNode* value_node;
struct sNode* __dec_obj131;
_Bool _conditional_value_X7;
struct sNode* exp_39;
_Bool _conditional_value_X8;
_Bool _conditional_value_X9;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
struct sNode* __result_obj__177;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
struct sNode* __result_obj__178;
_Bool _conditional_value_X10;
struct sNode* _inf_value6;
struct sTrueNode* _inf_obj_value6;
struct sNode* __result_obj__179;
_Bool _conditional_value_X11;
struct sNode* _inf_value7;
struct sFalseNode* _inf_obj_value7;
struct sNode* __result_obj__180;
_Bool _conditional_value_X12;
struct sNode* node;
struct sNode* _inf_value8;
struct sDeleteNode* _inf_obj_value8;
struct sNode* __result_obj__183;
_Bool _conditional_value_X13;
struct sNode* node_40;
struct sNode* _inf_value9;
struct sBorrowNode* _inf_obj_value9;
struct sNode* __result_obj__186;
_Bool _conditional_value_X14;
struct sNode* node_41;
struct sNode* _inf_value10;
struct sCloneNode* _inf_obj_value10;
struct sNode* __result_obj__189;
_Bool _conditional_value_X15;
struct sNode* node_42;
struct sNode* _inf_value11;
struct sDupeNode* _inf_obj_value11;
struct sNode* __result_obj__192;
_Bool _conditional_value_X16;
struct sNode* node_43;
struct sNode* _inf_value12;
struct sDummyHeapNode* _inf_obj_value12;
struct sNode* __result_obj__195;
_Bool _conditional_value_X17;
struct sNode* node_44;
struct sNode* _inf_value13;
struct sGCIncNode* _inf_obj_value13;
struct sNode* __result_obj__198;
_Bool _conditional_value_X18;
struct sNode* node_45;
struct sNode* _inf_value14;
struct sGCDecNode* _inf_obj_value14;
struct sNode* __result_obj__201;
_Bool _conditional_value_X19;
struct sNode* node_46;
struct sNode* _inf_value15;
struct sGCDecNoFreeNode* _inf_obj_value15;
struct sNode* __result_obj__204;
_Bool _conditional_value_X20;
struct sNode* node_47;
struct sNode* _inf_value16;
struct sGCDecNoFreeNode* _inf_obj_value16;
struct sNode* __result_obj__205;
_Bool _conditional_value_X21;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var9 = (void*)0;
struct sType* param_type=0;
char* param_name=0;
_Bool err_48=0;
_Bool _conditional_value_X22;
struct sType* type2;
struct sNode* _inf_value17;
struct sIsHeap* _inf_obj_value17;
struct sNode* __result_obj__208;
_Bool _conditional_value_X23;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var10 = (void*)0;
struct sType* param_type_49=0;
char* param_name_50=0;
_Bool err_51=0;
_Bool _conditional_value_X24;
struct sType* type2_52;
struct sNode* _inf_value18;
struct sIsPointer* _inf_obj_value18;
struct sNode* __result_obj__211;
_Bool _conditional_value_X25;
_Bool _conditional_value_X26;
struct sNode* __result_obj__212;
_Bool _conditional_value_X27;
struct sNode* __result_obj__213;
_Bool _conditional_value_X28;
struct sNode* __result_obj__214;
_Bool _conditional_value_X29;
struct sNode* __result_obj__215;
_Bool _conditional_value_X30;
_Bool come_c;
_Bool _conditional_value_X31;
struct sNode* node_53;
struct sNode* __result_obj__216;
struct sNode* __result_obj__217;
_Bool _conditional_value_X32;
struct sNode* __result_obj__218;
_Bool _conditional_value_X33;
struct sNode* __result_obj__219;
_Bool _conditional_value_X34;
struct sNode* __result_obj__220;
_Bool _conditional_value_X35;
struct sNode* __result_obj__221;
_Bool _conditional_value_X36;
_Bool no_comma_54;
struct sNode* exp_55;
struct list$1sType$ph* types;
struct list$1sNode$ph* exps;
struct sNode* default_exp;
_Bool _conditional_value_X37;
_Bool _conditional_value_X38;
_Bool no_comma_56;
struct sNode* __dec_obj154;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var11 = (void*)0;
struct sType* type_57=0;
char* name_58=0;
_Bool err_59=0;
_Bool no_comma_60;
struct sNode* node_61;
_Bool _conditional_value_X39;
_Bool _conditional_value_X40;
_Bool _conditional_value_X41;
struct sNode* _inf_value19;
struct sGeneric* _inf_obj_value19;
struct sNode* __result_obj__224;
_Bool _conditional_value_X42;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var12 = (void*)0;
struct sType* type_62=0;
char* name_63=0;
_Bool err_64=0;
_Bool _conditional_value_X43;
char* word_65;
struct sNode* _inf_value20;
struct sOffsetOf* _inf_obj_value20;
struct sNode* __result_obj__227;
_Bool _conditional_value_X44;
_Bool paren;
_Bool _conditional_value_X45;
_Bool is_type_name_flag;
char* p;
int sline;
_Bool _conditional_value_X46;
char* word_66;
_Bool _conditional_value_X47;
_Bool _conditional_value_X48;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type_67=0;
char* name_68=0;
_Bool err_69=0;
_Bool _conditional_value_X49;
_Bool _conditional_value_X50;
struct sNode* _inf_value21;
struct sSizeOfNode* _inf_obj_value21;
struct sNode* __result_obj__230;
struct sNode* exp_70;
_Bool _conditional_value_X51;
_Bool no_comma_71;
struct sNode* __dec_obj165;
struct sNode* __dec_obj166;
_Bool _conditional_value_X52;
struct sNode* _inf_value22;
struct sSizeOfExpNode* _inf_obj_value22;
struct sNode* __result_obj__233;
_Bool _conditional_value_X53;
_Bool paren_72;
_Bool _conditional_value_X54;
_Bool is_type_name_flag_73;
char* p_74;
int sline_75;
_Bool _conditional_value_X55;
char* word_76;
_Bool _conditional_value_X56;
_Bool _conditional_value_X57;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* type_77=0;
char* name_78=0;
_Bool err_79=0;
_Bool _conditional_value_X58;
_Bool _conditional_value_X59;
struct sNode* _inf_value23;
struct sTypeOfNode* _inf_obj_value23;
struct sNode* __result_obj__236;
struct sNode* exp_80;
_Bool _conditional_value_X60;
_Bool no_comma_81;
struct sNode* __dec_obj171;
struct sNode* __dec_obj172;
_Bool _conditional_value_X61;
struct sNode* _inf_value24;
struct sTypeOfExpNode* _inf_obj_value24;
struct sNode* __result_obj__239;
_Bool _conditional_value_X62;
_Bool paren_82;
_Bool _conditional_value_X63;
struct sNode* exp_83;
_Bool _conditional_value_X64;
_Bool no_comma_84;
struct sNode* __dec_obj175;
struct sNode* __dec_obj176;
_Bool _conditional_value_X65;
struct sNode* _inf_value25;
struct sDynamicTypeOf* _inf_obj_value25;
struct sNode* __result_obj__242;
_Bool _conditional_value_X66;
_Bool paren_85;
_Bool _conditional_value_X67;
_Bool is_type_name_flag_86;
char* p_87;
int sline_88;
_Bool _conditional_value_X68;
char* word_89;
_Bool _conditional_value_X69;
_Bool _conditional_value_X70;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_90=0;
char* name_91=0;
_Bool err_92=0;
_Bool _conditional_value_X71;
_Bool _conditional_value_X72;
struct sNode* _inf_value26;
struct sAlignOfNode* _inf_obj_value26;
struct sNode* __result_obj__245;
struct sNode* exp_93;
_Bool _conditional_value_X73;
_Bool no_comma_94;
struct sNode* __dec_obj181;
struct sNode* __dec_obj182;
struct sNode* _inf_value27;
struct sAlignOfExpNode* _inf_obj_value27;
struct sNode* __result_obj__248;
_Bool _conditional_value_X74;
_Bool paren_95;
_Bool _conditional_value_X75;
_Bool is_type_name_flag_96;
char* p_97;
int sline_98;
_Bool _conditional_value_X76;
char* word_99;
_Bool _conditional_value_X77;
_Bool _conditional_value_X78;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* type_100=0;
char* name_101=0;
_Bool err_102=0;
_Bool _conditional_value_X79;
_Bool _conditional_value_X80;
struct sNode* _inf_value28;
struct sAlignOfNode2* _inf_obj_value28;
struct sNode* __result_obj__251;
struct sNode* exp_103;
_Bool _conditional_value_X81;
_Bool no_comma_104;
struct sNode* __dec_obj187;
struct sNode* __dec_obj188;
struct sNode* _inf_value29;
struct sAlignOfExpNode2* _inf_obj_value29;
struct sNode* __result_obj__254;
_Bool _conditional_value_X82;
_Bool is_type_name_flag_105;
char* p_106;
int sline_107;
_Bool _conditional_value_X83;
char* word_108;
_Bool _conditional_value_X84;
_Bool _conditional_value_X85;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* type_109=0;
char* name_110=0;
_Bool err_111=0;
_Bool _conditional_value_X86;
struct sNode* _inf_value30;
struct sAlignAsNode* _inf_obj_value30;
struct sNode* __result_obj__257;
struct sNode* exp_112;
struct sNode* _inf_value31;
struct sAlignAsExpNode* _inf_obj_value31;
struct sNode* __result_obj__260;
struct sNode* __result_obj__261;
exp_70 = (void*)0;
exp_80 = (void*)0;
exp_83 = (void*)0;
exp_93 = (void*)0;
exp_103 = (void*)0;
    if(({    (_conditional_value_X0=(!gComeC&&charp_operator_equals(buf,"new")));    _conditional_value_X0;    })) {
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_conditional_value_X1=(!err));        _conditional_value_X1;        })) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(({        (_conditional_value_X2=(*info->p==40));        _conditional_value_X2;        })) {
            __right_value0 = (void*)0;
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1394, "struct sNode");
            _inf_obj_value3=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1394, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
            obj=(struct sNode*)come_increment_ref_count(_inf_value3);
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __right_value0 = (void*)0;
            fun_name=(char*)come_increment_ref_count(__builtin_string("initialize"));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__175 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(obj)),(char*)come_increment_ref_count(fun_name),info))));
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__175) ? __result_obj__175 = come_decrement_ref_count(__result_obj__175, ((struct sNode*)__result_obj__175)->finalize, ((struct sNode*)__result_obj__175)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__175;
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(({        (_conditional_value_X3=(*info->p==123));        _conditional_value_X3;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "21obj.c", 1403, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            while(({            (_conditional_value_X4=((_Bool)1));            _conditional_value_X4;            })) {
                __right_value0 = (void*)0;
                word=(char*)come_increment_ref_count(parse_word(info));
                if(({                (_conditional_value_X5=(*info->p==58));                _conditional_value_X5;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    exp=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma;
                    if(({                    __right_value0 = (void*)0,                     __right_value1 = (void*)0,                     (_conditional_value_X6=(string_operator_equals(((char*)(__right_value1=exp->kind(exp->_protocol_obj))),"sWildCard")));                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    _conditional_value_X6;                    })) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        value_node=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value0=xsprintf("Value"))),info));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        __right_value0 = (void*)0;
                        __dec_obj131=exp,
                        exp=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node),(char*)come_increment_ref_count(word),info));
                        (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0, (void*)0) :0);
                        ((value_node) ? value_node = come_decrement_ref_count(value_node, ((struct sNode*)value_node)->finalize, ((struct sNode*)value_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "21obj.c", 1422, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(word),(struct sNode*)come_increment_ref_count(exp))));
                    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else if(({                (_conditional_value_X7=(*info->p==44));                _conditional_value_X7;                })) {
                    __right_value0 = (void*)0;
                    exp_39=(struct sNode*)come_increment_ref_count(create_load_var(word,info));
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "21obj.c", 1427, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(word),(struct sNode*)come_increment_ref_count(exp_39))));
                    ((exp_39) ? exp_39 = come_decrement_ref_count(exp_39, ((struct sNode*)exp_39)->finalize, ((struct sNode*)exp_39)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    err_msg(info,"invalid character(21) %c",*info->p);
                    exit(2);
                }
                if(({                (_conditional_value_X8=(*info->p==44));                _conditional_value_X8;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(({                (_conditional_value_X9=(*info->p==125));                _conditional_value_X9;                })) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",*info->p);
                    exit(2);
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1448, "struct sNode");
            _inf_obj_value4=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1448, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sNewNode_finalize;
            _inf_value4->clone=(void*)sNewNode_clone;
            _inf_value4->compile=(void*)sNewNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sNewNode_kind;
            _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__177 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value4)));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__177) ? __result_obj__177 = come_decrement_ref_count(__result_obj__177, ((struct sNode*)__result_obj__177)->finalize, ((struct sNode*)__result_obj__177)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__177;
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1451, "struct sNode");
            _inf_obj_value5=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1451, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type),((void*)0),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__178 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__178) ? __result_obj__178 = come_decrement_ref_count(__result_obj__178, ((struct sNode*)__result_obj__178)->finalize, ((struct sNode*)__result_obj__178)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__178;
        }
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(({    (_conditional_value_X10=(!gComeC&&charp_operator_equals(buf,"true")));    _conditional_value_X10;    })) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1455, "struct sNode");
        _inf_obj_value6=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1455, "struct sTrueNode*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sTrueNode_finalize;
        _inf_value6->clone=(void*)sTrueNode_clone;
        _inf_value6->compile=(void*)sTrueNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sTrueNode_kind;
        _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__179 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)));
        come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__179) ? __result_obj__179 = come_decrement_ref_count(__result_obj__179, ((struct sNode*)__result_obj__179)->finalize, ((struct sNode*)__result_obj__179)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__179;
    }
    else if(({    (_conditional_value_X11=(!gComeC&&charp_operator_equals(buf,"false")));    _conditional_value_X11;    })) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1458, "struct sNode");
        _inf_obj_value7=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1458, "struct sFalseNode*")),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFalseNode_finalize;
        _inf_value7->clone=(void*)sFalseNode_clone;
        _inf_value7->compile=(void*)sFalseNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sFalseNode_kind;
        _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__180 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)));
        come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__180) ? __result_obj__180 = come_decrement_ref_count(__result_obj__180, ((struct sNode*)__result_obj__180)->finalize, ((struct sNode*)__result_obj__180)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__180;
    }
    else if(({    (_conditional_value_X12=(!gComeC&&charp_operator_equals(buf,"delete")));    _conditional_value_X12;    })) {
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1463, "struct sNode");
        _inf_obj_value8=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value1=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc_v2(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1463, "struct sDeleteNode*")),(struct sNode*)come_increment_ref_count(node),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sDeleteNode_finalize;
        _inf_value8->clone=(void*)sDeleteNode_clone;
        _inf_value8->compile=(void*)sDeleteNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sDeleteNode_kind;
        _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__183 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDeleteNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__183) ? __result_obj__183 = come_decrement_ref_count(__result_obj__183, ((struct sNode*)__result_obj__183)->finalize, ((struct sNode*)__result_obj__183)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__183;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_conditional_value_X13=(!gComeC&&charp_operator_equals(buf,"borrow")));    _conditional_value_X13;    })) {
        __right_value0 = (void*)0;
        node_40=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1468, "struct sNode");
        _inf_obj_value9=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value1=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc_v2(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1468, "struct sBorrowNode*")),(struct sNode*)come_increment_ref_count(node_40),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sBorrowNode_finalize;
        _inf_value9->clone=(void*)sBorrowNode_clone;
        _inf_value9->compile=(void*)sBorrowNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sBorrowNode_kind;
        _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__186 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)));
        ((node_40) ? node_40 = come_decrement_ref_count(node_40, ((struct sNode*)node_40)->finalize, ((struct sNode*)node_40)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sBorrowNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__186) ? __result_obj__186 = come_decrement_ref_count(__result_obj__186, ((struct sNode*)__result_obj__186)->finalize, ((struct sNode*)__result_obj__186)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__186;
        ((node_40) ? node_40 = come_decrement_ref_count(node_40, ((struct sNode*)node_40)->finalize, ((struct sNode*)node_40)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_conditional_value_X14=(!gComeC&&charp_operator_equals(buf,"clone")));    _conditional_value_X14;    })) {
        __right_value0 = (void*)0;
        node_41=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1473, "struct sNode");
        _inf_obj_value10=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value1=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc_v2(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1473, "struct sCloneNode*")),(struct sNode*)come_increment_ref_count(node_41),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sCloneNode_finalize;
        _inf_value10->clone=(void*)sCloneNode_clone;
        _inf_value10->compile=(void*)sCloneNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sCloneNode_kind;
        _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__189 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)));
        ((node_41) ? node_41 = come_decrement_ref_count(node_41, ((struct sNode*)node_41)->finalize, ((struct sNode*)node_41)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sCloneNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__189) ? __result_obj__189 = come_decrement_ref_count(__result_obj__189, ((struct sNode*)__result_obj__189)->finalize, ((struct sNode*)__result_obj__189)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__189;
        ((node_41) ? node_41 = come_decrement_ref_count(node_41, ((struct sNode*)node_41)->finalize, ((struct sNode*)node_41)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_conditional_value_X15=(!gComeC&&charp_operator_equals(buf,"dupe")));    _conditional_value_X15;    })) {
        __right_value0 = (void*)0;
        node_42=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1478, "struct sNode");
        _inf_obj_value11=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value1=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc_v2(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1478, "struct sDupeNode*")),(struct sNode*)come_increment_ref_count(node_42),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDupeNode_finalize;
        _inf_value11->clone=(void*)sDupeNode_clone;
        _inf_value11->compile=(void*)sDupeNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDupeNode_kind;
        _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__192 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)));
        ((node_42) ? node_42 = come_decrement_ref_count(node_42, ((struct sNode*)node_42)->finalize, ((struct sNode*)node_42)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDupeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__192) ? __result_obj__192 = come_decrement_ref_count(__result_obj__192, ((struct sNode*)__result_obj__192)->finalize, ((struct sNode*)__result_obj__192)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__192;
        ((node_42) ? node_42 = come_decrement_ref_count(node_42, ((struct sNode*)node_42)->finalize, ((struct sNode*)node_42)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_conditional_value_X16=(!gComeC&&charp_operator_equals(buf,"dummy_heap")));    _conditional_value_X16;    })) {
        __right_value0 = (void*)0;
        node_43=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1483, "struct sNode");
        _inf_obj_value12=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value1=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc_v2(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1483, "struct sDummyHeapNode*")),(struct sNode*)come_increment_ref_count(node_43),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value12->clone=(void*)sDummyHeapNode_clone;
        _inf_value12->compile=(void*)sDummyHeapNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDummyHeapNode_kind;
        _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__195 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)));
        ((node_43) ? node_43 = come_decrement_ref_count(node_43, ((struct sNode*)node_43)->finalize, ((struct sNode*)node_43)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDummyHeapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__195) ? __result_obj__195 = come_decrement_ref_count(__result_obj__195, ((struct sNode*)__result_obj__195)->finalize, ((struct sNode*)__result_obj__195)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__195;
        ((node_43) ? node_43 = come_decrement_ref_count(node_43, ((struct sNode*)node_43)->finalize, ((struct sNode*)node_43)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_conditional_value_X17=(!gComeC&&charp_operator_equals(buf,"gc_inc")&&*info->p==40));    _conditional_value_X17;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_44=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1493, "struct sNode");
        _inf_obj_value13=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value1=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc_v2(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1493, "struct sGCIncNode*")),(struct sNode*)come_increment_ref_count(node_44),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sGCIncNode_finalize;
        _inf_value13->clone=(void*)sGCIncNode_clone;
        _inf_value13->compile=(void*)sGCIncNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sGCIncNode_kind;
        _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__198 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)));
        ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCIncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__198) ? __result_obj__198 = come_decrement_ref_count(__result_obj__198, ((struct sNode*)__result_obj__198)->finalize, ((struct sNode*)__result_obj__198)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__198;
        ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_conditional_value_X18=(!gComeC&&charp_operator_equals(buf,"gc_dec")&&*info->p==40));    _conditional_value_X18;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_45=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1503, "struct sNode");
        _inf_obj_value14=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value1=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc_v2(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1503, "struct sGCDecNode*")),(struct sNode*)come_increment_ref_count(node_45),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sGCDecNode_finalize;
        _inf_value14->clone=(void*)sGCDecNode_clone;
        _inf_value14->compile=(void*)sGCDecNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sGCDecNode_kind;
        _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__201 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)));
        ((node_45) ? node_45 = come_decrement_ref_count(node_45, ((struct sNode*)node_45)->finalize, ((struct sNode*)node_45)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__201) ? __result_obj__201 = come_decrement_ref_count(__result_obj__201, ((struct sNode*)__result_obj__201)->finalize, ((struct sNode*)__result_obj__201)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__201;
        ((node_45) ? node_45 = come_decrement_ref_count(node_45, ((struct sNode*)node_45)->finalize, ((struct sNode*)node_45)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_conditional_value_X19=(!gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40));    _conditional_value_X19;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_46=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1513, "struct sNode");
        _inf_obj_value15=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1513, "struct sGCDecNoFreeNode*")),(struct sNode*)come_increment_ref_count(node_46),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value15->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value15->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sGCDecNoFreeNode_kind;
        _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__204 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)));
        ((node_46) ? node_46 = come_decrement_ref_count(node_46, ((struct sNode*)node_46)->finalize, ((struct sNode*)node_46)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__204) ? __result_obj__204 = come_decrement_ref_count(__result_obj__204, ((struct sNode*)__result_obj__204)->finalize, ((struct sNode*)__result_obj__204)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__204;
        ((node_46) ? node_46 = come_decrement_ref_count(node_46, ((struct sNode*)node_46)->finalize, ((struct sNode*)node_46)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_conditional_value_X20=(!gComeC&&charp_operator_equals(buf,"lock")&&*info->p==40));    _conditional_value_X20;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_47=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1523, "struct sNode");
        _inf_obj_value16=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1523, "struct sGCDecNoFreeNode*")),(struct sNode*)come_increment_ref_count(node_47),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value16->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value16->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sGCDecNoFreeNode_kind;
        _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__205 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)));
        ((node_47) ? node_47 = come_decrement_ref_count(node_47, ((struct sNode*)node_47)->finalize, ((struct sNode*)node_47)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__205) ? __result_obj__205 = come_decrement_ref_count(__result_obj__205, ((struct sNode*)__result_obj__205)->finalize, ((struct sNode*)__result_obj__205)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__205;
        ((node_47) ? node_47 = come_decrement_ref_count(node_47, ((struct sNode*)node_47)->finalize, ((struct sNode*)node_47)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_conditional_value_X21=(!gComeC&&charp_operator_equals(buf,"isheap")&&*info->p==40));    _conditional_value_X21;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        multiple_assign_var9=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
        param_name=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        err_48=multiple_assign_var9->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_conditional_value_X22=(!err_48));        _conditional_value_X22;        })) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        __right_value0 = (void*)0;
        type2=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1539, "struct sNode");
        _inf_obj_value17=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value1=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc_v2(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1539, "struct sIsHeap*")),(struct sType*)come_increment_ref_count(type2),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sIsHeap_finalize;
        _inf_value17->clone=(void*)sIsHeap_clone;
        _inf_value17->compile=(void*)sIsHeap_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sIsHeap_kind;
        _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__208 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value17)));
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sIsHeap_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__208) ? __result_obj__208 = come_decrement_ref_count(__result_obj__208, ((struct sNode*)__result_obj__208)->finalize, ((struct sNode*)__result_obj__208)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__208;
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_conditional_value_X23=(charp_operator_equals(buf,"ispointer")&&*info->p==40));    _conditional_value_X23;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        multiple_assign_var10=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_49=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        param_name_50=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_51=multiple_assign_var10->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_conditional_value_X24=(!err_51));        _conditional_value_X24;        })) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        __right_value0 = (void*)0;
        type2_52=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_49),(struct sType*)come_increment_ref_count(info->generics_type),info));
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1555, "struct sNode");
        _inf_obj_value18=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value1=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc_v2(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1555, "struct sIsPointer*")),(struct sType*)come_increment_ref_count(type2_52),info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sIsPointer_finalize;
        _inf_value18->clone=(void*)sIsPointer_clone;
        _inf_value18->compile=(void*)sIsPointer_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sline_real=(void*)sNodeBase_sline_real;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sIsPointer_kind;
        _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__211 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value18)));
        come_call_finalizer(sType_finalize, param_type_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name_50 = come_decrement_ref_count(param_name_50, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sIsPointer_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__211) ? __result_obj__211 = come_decrement_ref_count(__result_obj__211, ((struct sNode*)__result_obj__211)->finalize, ((struct sNode*)__result_obj__211)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__211;
        come_call_finalizer(sType_finalize, param_type_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name_50 = come_decrement_ref_count(param_name_50, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_conditional_value_X25=(charp_operator_equals(buf,"using")));    _conditional_value_X25;    })) {
        if(({        (_conditional_value_X26=(parsecmp("comelang_str",info)));        _conditional_value_X26;        })) {
            info->p+=strlen("comelang_str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __right_value0 = (void*)0;
            __result_obj__212 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__212) ? __result_obj__212 = come_decrement_ref_count(__result_obj__212, ((struct sNode*)__result_obj__212)->finalize, ((struct sNode*)__result_obj__212)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__212;
        }
        else if(({        (_conditional_value_X27=(parsecmp("comelang_pthread",info)));        _conditional_value_X27;        })) {
            info->p+=strlen("comelang_pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __right_value0 = (void*)0;
            __result_obj__213 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__213) ? __result_obj__213 = come_decrement_ref_count(__result_obj__213, ((struct sNode*)__result_obj__213)->finalize, ((struct sNode*)__result_obj__213)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__213;
        }
        else if(({        (_conditional_value_X28=(parsecmp("comelang_net",info)));        _conditional_value_X28;        })) {
            info->p+=strlen("comelang_net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __right_value0 = (void*)0;
            __result_obj__214 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__214) ? __result_obj__214 = come_decrement_ref_count(__result_obj__214, ((struct sNode*)__result_obj__214)->finalize, ((struct sNode*)__result_obj__214)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__214;
        }
        else if(({        (_conditional_value_X29=(parsecmp("comelang",info)));        _conditional_value_X29;        })) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __right_value0 = (void*)0;
            __result_obj__215 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__215) ? __result_obj__215 = come_decrement_ref_count(__result_obj__215, ((struct sNode*)__result_obj__215)->finalize, ((struct sNode*)__result_obj__215)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__215;
        }
        else if(({        (_conditional_value_X30=(parsecmp("c",info)||parsecmp("C",info)));        _conditional_value_X30;        })) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c=gComeC;
            gComeC=(_Bool)1;
            if(({            (_conditional_value_X31=(*info->p==123));            _conditional_value_X31;            })) {
                __right_value0 = (void*)0;
                node_53=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info,(_Bool)0));
                gComeC=come_c;
                __result_obj__216 = (struct sNode*)come_increment_ref_count(node_53);
                ((node_53) ? node_53 = come_decrement_ref_count(node_53, ((struct sNode*)node_53)->finalize, ((struct sNode*)node_53)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                ((__result_obj__216) ? __result_obj__216 = come_decrement_ref_count(__result_obj__216, ((struct sNode*)__result_obj__216)->finalize, ((struct sNode*)__result_obj__216)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__216;
                ((node_53) ? node_53 = come_decrement_ref_count(node_53, ((struct sNode*)node_53)->finalize, ((struct sNode*)node_53)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                __right_value0 = (void*)0;
                __result_obj__217 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                ((__result_obj__217) ? __result_obj__217 = come_decrement_ref_count(__result_obj__217, ((struct sNode*)__result_obj__217)->finalize, ((struct sNode*)__result_obj__217)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__217;
            }
        }
        else if(({        (_conditional_value_X32=(parsecmp("gc",info)));        _conditional_value_X32;        })) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __result_obj__218 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__218) ? __result_obj__218 = come_decrement_ref_count(__result_obj__218, ((struct sNode*)__result_obj__218)->finalize, ((struct sNode*)__result_obj__218)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__218;
        }
        else if(({        (_conditional_value_X33=(parsecmp("no-gc",info)));        _conditional_value_X33;        })) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __result_obj__219 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__219) ? __result_obj__219 = come_decrement_ref_count(__result_obj__219, ((struct sNode*)__result_obj__219)->finalize, ((struct sNode*)__result_obj__219)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__219;
        }
        else if(({        (_conditional_value_X34=(parsecmp("unsafe",info)));        _conditional_value_X34;        })) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __result_obj__220 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__220) ? __result_obj__220 = come_decrement_ref_count(__result_obj__220, ((struct sNode*)__result_obj__220)->finalize, ((struct sNode*)__result_obj__220)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__220;
        }
        else if(({        (_conditional_value_X35=(parsecmp("no-null-check",info)));        _conditional_value_X35;        })) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __result_obj__221 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__221) ? __result_obj__221 = come_decrement_ref_count(__result_obj__221, ((struct sNode*)__result_obj__221)->finalize, ((struct sNode*)__result_obj__221)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__221;
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(({    (_conditional_value_X36=(charp_operator_equals(buf,"_Generic")&&*info->p==40));    _conditional_value_X36;    })) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_54=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        exp_55=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_54;
        expected_next_character(44,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "21obj.c", 1649, "struct list$1sType$ph*"))));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "21obj.c", 1650, "struct list$1sNode$ph*"))));
        default_exp=((void*)0);
        while(({        (_conditional_value_X37=(1));        _conditional_value_X37;        })) {
            if(({            (_conditional_value_X38=(strncmp(info->p,"default",strlen("default"))==0));            _conditional_value_X38;            })) {
                info->p+=strlen("default");
                skip_spaces_and_lf(info);
                expected_next_character(58,info);
                no_comma_56=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj154=default_exp,
                default_exp=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_56;
            }
            else {
                __right_value0 = (void*)0;
                multiple_assign_var11=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_57=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                name_58=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                err_59=multiple_assign_var11->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                list$1sType$ph_add(types,(struct sType*)come_increment_ref_count(type_57));
                expected_next_character(58,info);
                no_comma_60=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                node_61=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_60;
                list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(node_61));
                come_call_finalizer(sType_finalize, type_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            if(({            (_conditional_value_X39=(*info->p==44));            _conditional_value_X39;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(({            (_conditional_value_X40=(*info->p==0));            _conditional_value_X40;            })) {
                err_msg(info,"invalid source end");
                exit(2);
            }
            else if(({            (_conditional_value_X41=(*info->p==41));            _conditional_value_X41;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1695, "struct sNode");
        _inf_obj_value19=(struct sGeneric*)come_increment_ref_count(((struct sGeneric*)(__right_value1=sGeneric_initialize((struct sGeneric*)come_increment_ref_count((struct sGeneric*)come_calloc_v2(1, sizeof(struct sGeneric)*(1), "21obj.c", 1695, "struct sGeneric*")),(struct sNode*)come_increment_ref_count(exp_55),(struct list$1sType$ph*)come_increment_ref_count(types),(struct list$1sNode$ph*)come_increment_ref_count(exps),(struct sNode*)come_increment_ref_count(default_exp),info))));
        _inf_value19->_protocol_obj=_inf_obj_value19;
        _inf_value19->finalize=(void*)sGeneric_finalize;
        _inf_value19->clone=(void*)sGeneric_clone;
        _inf_value19->compile=(void*)sGeneric_compile;
        _inf_value19->sline=(void*)sNodeBase_sline;
        _inf_value19->sline_real=(void*)sNodeBase_sline_real;
        _inf_value19->sname=(void*)sNodeBase_sname;
        _inf_value19->terminated=(void*)sNodeBase_terminated;
        _inf_value19->kind=(void*)sGeneric_kind;
        _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__224 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value19)));
        ((exp_55) ? exp_55 = come_decrement_ref_count(exp_55, ((struct sNode*)exp_55)->finalize, ((struct sNode*)exp_55)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGeneric_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__224) ? __result_obj__224 = come_decrement_ref_count(__result_obj__224, ((struct sNode*)__result_obj__224)->finalize, ((struct sNode*)__result_obj__224)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__224;
        ((exp_55) ? exp_55 = come_decrement_ref_count(exp_55, ((struct sNode*)exp_55)->finalize, ((struct sNode*)exp_55)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_conditional_value_X42=(charp_operator_equals(buf,"offsetof")||charp_operator_equals(buf,"__builtin_offsetof")));    _conditional_value_X42;    })) {
        expected_next_character(40,info);
        info->in_offsetof=(_Bool)1;
        __right_value0 = (void*)0;
        multiple_assign_var12=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type_62=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
        name_63=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        err_64=multiple_assign_var12->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->in_offsetof=(_Bool)0;
        if(({        (_conditional_value_X43=(!err_64));        _conditional_value_X43;        })) {
            err_msg(info,"parse type");
            exit(2);
        }
        expected_next_character(44,info);
        __right_value0 = (void*)0;
        word_65=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1715, "struct sNode");
        _inf_obj_value20=(struct sOffsetOf*)come_increment_ref_count(((struct sOffsetOf*)(__right_value1=sOffsetOf_initialize((struct sOffsetOf*)come_increment_ref_count((struct sOffsetOf*)come_calloc_v2(1, sizeof(struct sOffsetOf)*(1), "21obj.c", 1715, "struct sOffsetOf*")),(struct sType*)come_increment_ref_count(type_62),(char*)come_increment_ref_count(word_65),info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sOffsetOf_finalize;
        _inf_value20->clone=(void*)sOffsetOf_clone;
        _inf_value20->compile=(void*)sOffsetOf_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sOffsetOf_kind;
        _inf_value20->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__227 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value20)));
        come_call_finalizer(sType_finalize, type_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, (void*)0));
        (word_65 = come_decrement_ref_count(word_65, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sOffsetOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__227) ? __result_obj__227 = come_decrement_ref_count(__result_obj__227, ((struct sNode*)__result_obj__227)->finalize, ((struct sNode*)__result_obj__227)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__227;
        come_call_finalizer(sType_finalize, type_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, (void*)0));
        (word_65 = come_decrement_ref_count(word_65, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(({    (_conditional_value_X44=(charp_operator_equals(buf,"sizeof")));    _conditional_value_X44;    })) {
        paren=(_Bool)0;
        if(({        (_conditional_value_X45=(*info->p==40));        _conditional_value_X45;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            paren=(_Bool)1;
        }
        is_type_name_flag=(_Bool)0;
        {
            p=info->p;
            sline=info->sline;
            if(({            (_conditional_value_X46=(xisalpha(*info->p)||*info->p==95));            _conditional_value_X46;            })) {
                __right_value0 = (void*)0;
                word_66=(char*)come_increment_ref_count(parse_word(info));
                if(({                (_conditional_value_X47=(is_type_name(word_66,info)));                _conditional_value_X47;                })) {
                    is_type_name_flag=(_Bool)1;
                }
                (word_66 = come_decrement_ref_count(word_66, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            info->p=p;
            info->sline=sline;
        }
        if(({        (_conditional_value_X48=(is_type_name_flag));        _conditional_value_X48;        })) {
            __right_value0 = (void*)0;
            multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_67=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_68=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_69=multiple_assign_var13->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_conditional_value_X49=(!err_69));            _conditional_value_X49;            })) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(({            (_conditional_value_X50=(paren&&*info->p==41));            _conditional_value_X50;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1758, "struct sNode");
            _inf_obj_value21=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value1=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc_v2(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1758, "struct sSizeOfNode*")),(struct sType*)come_increment_ref_count(type_67),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sSizeOfNode_finalize;
            _inf_value21->clone=(void*)sSizeOfNode_clone;
            _inf_value21->compile=(void*)sSizeOfNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sSizeOfNode_kind;
            _inf_value21->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__230 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value21)));
            come_call_finalizer(sType_finalize, type_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_68 = come_decrement_ref_count(name_68, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sSizeOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__230) ? __result_obj__230 = come_decrement_ref_count(__result_obj__230, ((struct sNode*)__result_obj__230)->finalize, ((struct sNode*)__result_obj__230)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__230;
            come_call_finalizer(sType_finalize, type_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_68 = come_decrement_ref_count(name_68, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(({            (_conditional_value_X51=(!paren));            _conditional_value_X51;            })) {
                no_comma_71=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj165=exp_70,
                exp_70=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_71;
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj166=exp_70,
                exp_70=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj166 ? __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0, (void*)0) :0);
            }
            if(({            (_conditional_value_X52=(paren&&*info->p==41));            _conditional_value_X52;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1779, "struct sNode");
            _inf_obj_value22=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc_v2(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1779, "struct sSizeOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_70),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value22->clone=(void*)sSizeOfExpNode_clone;
            _inf_value22->compile=(void*)sSizeOfExpNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sSizeOfExpNode_kind;
            _inf_value22->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__233 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value22)));
            ((exp_70) ? exp_70 = come_decrement_ref_count(exp_70, ((struct sNode*)exp_70)->finalize, ((struct sNode*)exp_70)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__233) ? __result_obj__233 = come_decrement_ref_count(__result_obj__233, ((struct sNode*)__result_obj__233)->finalize, ((struct sNode*)__result_obj__233)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__233;
            ((exp_70) ? exp_70 = come_decrement_ref_count(exp_70, ((struct sNode*)exp_70)->finalize, ((struct sNode*)exp_70)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(({    (_conditional_value_X53=(charp_operator_equals(buf,"typeof")));    _conditional_value_X53;    })) {
        paren_72=(_Bool)0;
        if(({        (_conditional_value_X54=(*info->p==40));        _conditional_value_X54;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_72=(_Bool)1;
        }
        is_type_name_flag_73=(_Bool)0;
        {
            p_74=info->p;
            sline_75=info->sline;
            if(({            (_conditional_value_X55=(xisalpha(*info->p)||*info->p==95));            _conditional_value_X55;            })) {
                __right_value0 = (void*)0;
                word_76=(char*)come_increment_ref_count(parse_word(info));
                if(({                (_conditional_value_X56=(is_type_name(word_76,info)));                _conditional_value_X56;                })) {
                    is_type_name_flag_73=(_Bool)1;
                }
                (word_76 = come_decrement_ref_count(word_76, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            info->p=p_74;
            info->sline=sline_75;
        }
        if(({        (_conditional_value_X57=(is_type_name_flag_73));        _conditional_value_X57;        })) {
            __right_value0 = (void*)0;
            multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_77=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
            name_78=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            err_79=multiple_assign_var14->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_conditional_value_X58=(!err_79));            _conditional_value_X58;            })) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(({            (_conditional_value_X59=(paren_72&&*info->p==41));            _conditional_value_X59;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1824, "struct sNode");
            _inf_obj_value23=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(__right_value1=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc_v2(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1824, "struct sTypeOfNode*")),(struct sType*)come_increment_ref_count(type_77),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sTypeOfNode_finalize;
            _inf_value23->clone=(void*)sTypeOfNode_clone;
            _inf_value23->compile=(void*)sTypeOfNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sTypeOfNode_kind;
            _inf_value23->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__236 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value23)));
            come_call_finalizer(sType_finalize, type_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_78 = come_decrement_ref_count(name_78, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sTypeOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__236) ? __result_obj__236 = come_decrement_ref_count(__result_obj__236, ((struct sNode*)__result_obj__236)->finalize, ((struct sNode*)__result_obj__236)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__236;
            come_call_finalizer(sType_finalize, type_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_78 = come_decrement_ref_count(name_78, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(({            (_conditional_value_X60=(!paren_72));            _conditional_value_X60;            })) {
                no_comma_81=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj171=exp_80,
                exp_80=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_81;
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj172=exp_80,
                exp_80=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0) :0);
            }
            if(({            (_conditional_value_X61=(paren_72&&*info->p==41));            _conditional_value_X61;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value24=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1845, "struct sNode");
            _inf_obj_value24=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value1=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc_v2(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1845, "struct sTypeOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_80),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sTypeOfExpNode_finalize;
            _inf_value24->clone=(void*)sTypeOfExpNode_clone;
            _inf_value24->compile=(void*)sTypeOfExpNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sTypeOfExpNode_kind;
            _inf_value24->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__239 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value24)));
            ((exp_80) ? exp_80 = come_decrement_ref_count(exp_80, ((struct sNode*)exp_80)->finalize, ((struct sNode*)exp_80)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sTypeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__239) ? __result_obj__239 = come_decrement_ref_count(__result_obj__239, ((struct sNode*)__result_obj__239)->finalize, ((struct sNode*)__result_obj__239)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__239;
            ((exp_80) ? exp_80 = come_decrement_ref_count(exp_80, ((struct sNode*)exp_80)->finalize, ((struct sNode*)exp_80)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(({    (_conditional_value_X62=(charp_operator_equals(buf,"dynamic_typeof")));    _conditional_value_X62;    })) {
        paren_82=(_Bool)0;
        if(({        (_conditional_value_X63=(*info->p==40));        _conditional_value_X63;        })) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_82=(_Bool)1;
        }
        if(({        (_conditional_value_X64=(!paren_82));        _conditional_value_X64;        })) {
            no_comma_84=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj175=exp_83,
            exp_83=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0) :0);
            info->no_comma=no_comma_84;
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj176=exp_83,
            exp_83=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0, (void*)0) :0);
        }
        if(({        (_conditional_value_X65=(paren_82&&*info->p==41));        _conditional_value_X65;        })) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value25=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1876, "struct sNode");
        _inf_obj_value25=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value1=sDynamicTypeOf_initialize((struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc_v2(1, sizeof(struct sDynamicTypeOf)*(1), "21obj.c", 1876, "struct sDynamicTypeOf*")),(struct sNode*)come_increment_ref_count(exp_83),info))));
        _inf_value25->_protocol_obj=_inf_obj_value25;
        _inf_value25->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value25->clone=(void*)sDynamicTypeOf_clone;
        _inf_value25->compile=(void*)sDynamicTypeOf_compile;
        _inf_value25->sline=(void*)sNodeBase_sline;
        _inf_value25->sline_real=(void*)sNodeBase_sline_real;
        _inf_value25->sname=(void*)sNodeBase_sname;
        _inf_value25->terminated=(void*)sNodeBase_terminated;
        _inf_value25->kind=(void*)sDynamicTypeOf_kind;
        _inf_value25->no_mutex=(void*)sNodeBase_no_mutex;
        __right_value2 = (void*)0;
        __result_obj__242 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value25)));
        ((exp_83) ? exp_83 = come_decrement_ref_count(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDynamicTypeOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__242) ? __result_obj__242 = come_decrement_ref_count(__result_obj__242, ((struct sNode*)__result_obj__242)->finalize, ((struct sNode*)__result_obj__242)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__242;
        ((exp_83) ? exp_83 = come_decrement_ref_count(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(({    (_conditional_value_X66=(charp_operator_equals(buf,"_Alignof")));    _conditional_value_X66;    })) {
        paren_85=(_Bool)0;
        if(({        (_conditional_value_X67=(*info->p==40));        _conditional_value_X67;        })) {
            paren_85=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_86=(_Bool)0;
        {
            p_87=info->p;
            sline_88=info->sline;
            if(({            (_conditional_value_X68=(xisalpha(*info->p)||*info->p==95));            _conditional_value_X68;            })) {
                __right_value0 = (void*)0;
                word_89=(char*)come_increment_ref_count(parse_word(info));
                if(({                (_conditional_value_X69=(is_type_name(word_89,info)));                _conditional_value_X69;                })) {
                    is_type_name_flag_86=(_Bool)1;
                }
                (word_89 = come_decrement_ref_count(word_89, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            info->p=p_87;
            info->sline=sline_88;
        }
        if(({        (_conditional_value_X70=(is_type_name_flag_86));        _conditional_value_X70;        })) {
            __right_value0 = (void*)0;
            multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_90=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            name_91=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            err_92=multiple_assign_var15->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_conditional_value_X71=(!err_92));            _conditional_value_X71;            })) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(({            (_conditional_value_X72=(paren_85&&*info->p==41));            _conditional_value_X72;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value26=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1916, "struct sNode");
            _inf_obj_value26=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value1=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc_v2(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1916, "struct sAlignOfNode*")),(struct sType*)come_increment_ref_count(type_90),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfNode_finalize;
            _inf_value26->clone=(void*)sAlignOfNode_clone;
            _inf_value26->compile=(void*)sAlignOfNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfNode_kind;
            _inf_value26->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__245 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value26)));
            come_call_finalizer(sType_finalize, type_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_91 = come_decrement_ref_count(name_91, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sAlignOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__245) ? __result_obj__245 = come_decrement_ref_count(__result_obj__245, ((struct sNode*)__result_obj__245)->finalize, ((struct sNode*)__result_obj__245)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__245;
            come_call_finalizer(sType_finalize, type_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_91 = come_decrement_ref_count(name_91, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(({            (_conditional_value_X73=(!paren_85));            _conditional_value_X73;            })) {
                no_comma_94=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj181=exp_93,
                exp_93=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_94;
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj182=exp_93,
                exp_93=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0) :0);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value27=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1930, "struct sNode");
            _inf_obj_value27=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value1=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1930, "struct sAlignOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_93),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value27->clone=(void*)sAlignOfExpNode_clone;
            _inf_value27->compile=(void*)sAlignOfExpNode_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignOfExpNode_kind;
            _inf_value27->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__248 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value27)));
            ((exp_93) ? exp_93 = come_decrement_ref_count(exp_93, ((struct sNode*)exp_93)->finalize, ((struct sNode*)exp_93)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sAlignOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__248) ? __result_obj__248 = come_decrement_ref_count(__result_obj__248, ((struct sNode*)__result_obj__248)->finalize, ((struct sNode*)__result_obj__248)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__248;
            ((exp_93) ? exp_93 = come_decrement_ref_count(exp_93, ((struct sNode*)exp_93)->finalize, ((struct sNode*)exp_93)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(({    (_conditional_value_X74=(charp_operator_equals(buf,"__alignof__")));    _conditional_value_X74;    })) {
        paren_95=(_Bool)0;
        if(({        (_conditional_value_X75=(*info->p==40));        _conditional_value_X75;        })) {
            paren_95=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_96=(_Bool)0;
        {
            p_97=info->p;
            sline_98=info->sline;
            if(({            (_conditional_value_X76=(xisalpha(*info->p)||*info->p==95));            _conditional_value_X76;            })) {
                __right_value0 = (void*)0;
                word_99=(char*)come_increment_ref_count(parse_word(info));
                if(({                (_conditional_value_X77=(is_type_name(word_99,info)));                _conditional_value_X77;                })) {
                    is_type_name_flag_96=(_Bool)1;
                }
                (word_99 = come_decrement_ref_count(word_99, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            info->p=p_97;
            info->sline=sline_98;
        }
        if(({        (_conditional_value_X78=(is_type_name_flag_96));        _conditional_value_X78;        })) {
            __right_value0 = (void*)0;
            multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_100=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
            name_101=(char*)come_increment_ref_count(multiple_assign_var16->v2);
            err_102=multiple_assign_var16->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_conditional_value_X79=(!err_102));            _conditional_value_X79;            })) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(({            (_conditional_value_X80=(paren_95&&*info->p==41));            _conditional_value_X80;            })) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value28=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1971, "struct sNode");
            _inf_obj_value28=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value1=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc_v2(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1971, "struct sAlignOfNode2*")),(struct sType*)come_increment_ref_count(type_100),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value28->clone=(void*)sAlignOfNode2_clone;
            _inf_value28->compile=(void*)sAlignOfNode2_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignOfNode2_kind;
            _inf_value28->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__251 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value28)));
            come_call_finalizer(sType_finalize, type_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_101 = come_decrement_ref_count(name_101, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sAlignOfNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__251) ? __result_obj__251 = come_decrement_ref_count(__result_obj__251, ((struct sNode*)__result_obj__251)->finalize, ((struct sNode*)__result_obj__251)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__251;
            come_call_finalizer(sType_finalize, type_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_101 = come_decrement_ref_count(name_101, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(({            (_conditional_value_X81=(!paren_95));            _conditional_value_X81;            })) {
                no_comma_104=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj187=exp_103,
                exp_103=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_104;
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj188=exp_103,
                exp_103=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0, (void*)0) :0);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value29=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1985, "struct sNode");
            _inf_obj_value29=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value1=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1985, "struct sAlignOfExpNode2*")),(struct sNode*)come_increment_ref_count(exp_103),info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value29->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value29->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sAlignOfExpNode2_kind;
            _inf_value29->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__254 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value29)));
            ((exp_103) ? exp_103 = come_decrement_ref_count(exp_103, ((struct sNode*)exp_103)->finalize, ((struct sNode*)exp_103)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sAlignOfExpNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__254) ? __result_obj__254 = come_decrement_ref_count(__result_obj__254, ((struct sNode*)__result_obj__254)->finalize, ((struct sNode*)__result_obj__254)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__254;
            ((exp_103) ? exp_103 = come_decrement_ref_count(exp_103, ((struct sNode*)exp_103)->finalize, ((struct sNode*)exp_103)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(({    (_conditional_value_X82=(charp_operator_equals(buf,"_Alignas")));    _conditional_value_X82;    })) {
        expected_next_character(40,info);
        is_type_name_flag_105=(_Bool)0;
        {
            p_106=info->p;
            sline_107=info->sline;
            if(({            (_conditional_value_X83=(xisalpha(*info->p)||*info->p==95));            _conditional_value_X83;            })) {
                __right_value0 = (void*)0;
                word_108=(char*)come_increment_ref_count(parse_word(info));
                if(({                (_conditional_value_X84=(is_type_name(word_108,info)));                _conditional_value_X84;                })) {
                    is_type_name_flag_105=(_Bool)1;
                }
                (word_108 = come_decrement_ref_count(word_108, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            info->p=p_106;
            info->sline=sline_107;
        }
        if(({        (_conditional_value_X85=(is_type_name_flag_105));        _conditional_value_X85;        })) {
            __right_value0 = (void*)0;
            multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_109=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
            name_110=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            err_111=multiple_assign_var17->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({            (_conditional_value_X86=(!err_111));            _conditional_value_X86;            })) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value30=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 2018, "struct sNode");
            _inf_obj_value30=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(__right_value1=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc_v2(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 2018, "struct sAlignAsNode*")),(struct sType*)come_increment_ref_count(type_109),info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sAlignAsNode_finalize;
            _inf_value30->clone=(void*)sAlignAsNode_clone;
            _inf_value30->compile=(void*)sAlignAsNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sAlignAsNode_kind;
            _inf_value30->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__257 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value30)));
            come_call_finalizer(sType_finalize, type_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_110 = come_decrement_ref_count(name_110, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sAlignAsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__257) ? __result_obj__257 = come_decrement_ref_count(__result_obj__257, ((struct sNode*)__result_obj__257)->finalize, ((struct sNode*)__result_obj__257)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__257;
            come_call_finalizer(sType_finalize, type_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_110 = come_decrement_ref_count(name_110, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            __right_value0 = (void*)0;
            exp_112=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value31=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 2025, "struct sNode");
            _inf_obj_value31=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value1=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc_v2(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 2025, "struct sAlignAsExpNode*")),(struct sNode*)come_increment_ref_count(exp_112),info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sAlignAsExpNode_finalize;
            _inf_value31->clone=(void*)sAlignAsExpNode_clone;
            _inf_value31->compile=(void*)sAlignAsExpNode_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sAlignAsExpNode_kind;
            _inf_value31->no_mutex=(void*)sNodeBase_no_mutex;
            __right_value2 = (void*)0;
            __result_obj__260 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value31)));
            ((exp_112) ? exp_112 = come_decrement_ref_count(exp_112, ((struct sNode*)exp_112)->finalize, ((struct sNode*)exp_112)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sAlignAsExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__260) ? __result_obj__260 = come_decrement_ref_count(__result_obj__260, ((struct sNode*)__result_obj__260)->finalize, ((struct sNode*)__result_obj__260)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__260;
            ((exp_112) ? exp_112 = come_decrement_ref_count(exp_112, ((struct sNode*)exp_112)->finalize, ((struct sNode*)exp_112)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    __right_value0 = (void*)0;
    __result_obj__261 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v20(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__261) ? __result_obj__261 = come_decrement_ref_count(__result_obj__261, ((struct sNode*)__result_obj__261)->finalize, ((struct sNode*)__result_obj__261)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__261;
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

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
_Bool _conditional_value_X0;
struct sNewNode* __result_obj__167;
void* __right_value0 = (void*)0;
struct sNewNode* result;
char* __dec_obj123;
struct sType* __dec_obj124;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj130;
struct sNewNode* __result_obj__174;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__167 = (void*)0;
        return __result_obj__167;
    }
    result=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj123=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewNode_clone", 5, "char*"));
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj124=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->initializer!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj130=result->initializer,
        result->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__174 = result;
    come_call_finalizer(sNewNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__174;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
_Bool _conditional_value_X0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__168;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result;
struct list_item$1tuple2$2char$phsNode$ph$ph* it;
_Bool _conditional_value_X1;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__173;
    if(({    (_conditional_value_X0=(self==((void*)0)));    _conditional_value_X0;    })) {
        __result_obj__168 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__168, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__168;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 6364, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it=self->head;
    while(({    (_conditional_value_X0=(it!=((void*)0)));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(1));        _conditional_value_X1;        })) {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__173 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__173, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__173;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__169;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__169 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__169, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__169;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
struct tuple2$2char$phsNode$ph* __dec_obj125;
_Bool _conditional_value_X1;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_37;
struct tuple2$2char$phsNode$ph* __dec_obj126;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_38;
struct tuple2$2char$phsNode$ph* __dec_obj127;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__170;
    if(({    (_conditional_value_X0=(self->len==0));    _conditional_value_X0;    })) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 6383, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj125=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(({    (_conditional_value_X1=(self->len==1));    _conditional_value_X1;    })) {
        __right_value0 = (void*)0;
        litem_37=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 6393, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        __dec_obj126=litem_37->item,
        litem_37->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 6403, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        __dec_obj127=litem_38->item,
        litem_38->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
    __result_obj__170 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result_obj__170;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
_Bool _conditional_value_X0;
struct tuple2$2char$phsNode$ph* __result_obj__171;
void* __right_value0 = (void*)0;
struct tuple2$2char$phsNode$ph* result;
char* __dec_obj128;
struct sNode* __dec_obj129;
struct tuple2$2char$phsNode$ph* __result_obj__172;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__171 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__171, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__171;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v1!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj128=result->v1,
        result->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v2!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj129=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__172 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__172, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__172;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
_Bool _conditional_value_X0;
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v1!=((void*)0)));    _conditional_value_X0;    })) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->v2!=((void*)0)));    _conditional_value_X0;    })) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj132;
struct sNode* __dec_obj133;
struct tuple2$2char$phsNode$ph* __result_obj__176;
    __dec_obj132=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj133=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__176 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__176, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__176;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
_Bool _conditional_value_X0;
struct sDeleteNode* __result_obj__181;
void* __right_value0 = (void*)0;
struct sDeleteNode* result;
char* __dec_obj134;
struct sNode* __dec_obj135;
struct sDeleteNode* __result_obj__182;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__181 = (void*)0;
        return __result_obj__181;
    }
    result=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc_v2(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj134=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDeleteNode_clone", 5, "char*"));
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj135=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__182 = result;
    come_call_finalizer(sDeleteNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__182;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
_Bool _conditional_value_X0;
struct sBorrowNode* __result_obj__184;
void* __right_value0 = (void*)0;
struct sBorrowNode* result;
char* __dec_obj136;
struct sNode* __dec_obj137;
struct sBorrowNode* __result_obj__185;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__184 = (void*)0;
        return __result_obj__184;
    }
    result=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc_v2(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj136=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBorrowNode_clone", 5, "char*"));
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj137=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__185 = result;
    come_call_finalizer(sBorrowNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__185;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
_Bool _conditional_value_X0;
struct sCloneNode* __result_obj__187;
void* __right_value0 = (void*)0;
struct sCloneNode* result;
char* __dec_obj138;
struct sNode* __dec_obj139;
struct sCloneNode* __result_obj__188;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__187 = (void*)0;
        return __result_obj__187;
    }
    result=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc_v2(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj138=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCloneNode_clone", 5, "char*"));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj139=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__188 = result;
    come_call_finalizer(sCloneNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__188;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
_Bool _conditional_value_X0;
struct sDupeNode* __result_obj__190;
void* __right_value0 = (void*)0;
struct sDupeNode* result;
char* __dec_obj140;
struct sNode* __dec_obj141;
struct sDupeNode* __result_obj__191;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__190 = (void*)0;
        return __result_obj__190;
    }
    result=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc_v2(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj140=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDupeNode_clone", 5, "char*"));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj141=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__191 = result;
    come_call_finalizer(sDupeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__191;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
_Bool _conditional_value_X0;
struct sDummyHeapNode* __result_obj__193;
void* __right_value0 = (void*)0;
struct sDummyHeapNode* result;
char* __dec_obj142;
struct sNode* __dec_obj143;
struct sDummyHeapNode* __result_obj__194;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__193 = (void*)0;
        return __result_obj__193;
    }
    result=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc_v2(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj142=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDummyHeapNode_clone", 5, "char*"));
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj143=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__194 = result;
    come_call_finalizer(sDummyHeapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__194;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
_Bool _conditional_value_X0;
struct sGCIncNode* __result_obj__196;
void* __right_value0 = (void*)0;
struct sGCIncNode* result;
char* __dec_obj144;
struct sNode* __dec_obj145;
struct sGCIncNode* __result_obj__197;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__196 = (void*)0;
        return __result_obj__196;
    }
    result=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc_v2(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj144=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCIncNode_clone", 5, "char*"));
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj145=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__197 = result;
    come_call_finalizer(sGCIncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__197;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
_Bool _conditional_value_X0;
struct sGCDecNode* __result_obj__199;
void* __right_value0 = (void*)0;
struct sGCDecNode* result;
char* __dec_obj146;
struct sNode* __dec_obj147;
struct sGCDecNode* __result_obj__200;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__199 = (void*)0;
        return __result_obj__199;
    }
    result=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc_v2(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj146=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCDecNode_clone", 5, "char*"));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj147=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__200 = result;
    come_call_finalizer(sGCDecNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__200;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
_Bool _conditional_value_X0;
struct sGCDecNoFreeNode* __result_obj__202;
void* __right_value0 = (void*)0;
struct sGCDecNoFreeNode* result;
char* __dec_obj148;
struct sNode* __dec_obj149;
struct sGCDecNoFreeNode* __result_obj__203;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__202 = (void*)0;
        return __result_obj__202;
    }
    result=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "struct sGCDecNoFreeNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj148=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCDecNoFreeNode_clone", 5, "char*"));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->node!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj149=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__203 = result;
    come_call_finalizer(sGCDecNoFreeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__203;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
_Bool _conditional_value_X0;
struct sIsHeap* __result_obj__206;
void* __right_value0 = (void*)0;
struct sIsHeap* result;
char* __dec_obj150;
struct sType* __dec_obj151;
struct sIsHeap* __result_obj__207;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__206 = (void*)0;
        return __result_obj__206;
    }
    result=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc_v2(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj150=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIsHeap_clone", 5, "char*"));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj151=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj151,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__207 = result;
    come_call_finalizer(sIsHeap_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__207;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
_Bool _conditional_value_X0;
struct sIsPointer* __result_obj__209;
void* __right_value0 = (void*)0;
struct sIsPointer* result;
char* __dec_obj152;
struct sType* __dec_obj153;
struct sIsPointer* __result_obj__210;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__209 = (void*)0;
        return __result_obj__209;
    }
    result=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc_v2(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "struct sIsPointer*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj152=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIsPointer_clone", 5, "char*"));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj153=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__210 = result;
    come_call_finalizer(sIsPointer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__210;
}

static struct sGeneric* sGeneric_clone(struct sGeneric* self){
_Bool _conditional_value_X0;
struct sGeneric* __result_obj__222;
void* __right_value0 = (void*)0;
struct sGeneric* result;
char* __dec_obj155;
struct sNode* __dec_obj156;
struct list$1sType$ph* __dec_obj157;
struct list$1sNode$ph* __dec_obj158;
struct sNode* __dec_obj159;
struct sGeneric* __result_obj__223;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__222 = (void*)0;
        return __result_obj__222;
    }
    result=(struct sGeneric*)come_increment_ref_count((struct sGeneric*)come_calloc_v2(1, sizeof(struct sGeneric)*(1), "sGeneric_clone", 3, "struct sGeneric*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj155=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGeneric_clone", 5, "char*"));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj156=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->types!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj157=result->types,
        result->types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exps!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj158=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj158,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->default_exp!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj159=result->default_exp,
        result->default_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->default_exp));
        (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__223 = result;
    come_call_finalizer(sGeneric_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__223;
}

static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self){
_Bool _conditional_value_X0;
struct sOffsetOf* __result_obj__225;
void* __right_value0 = (void*)0;
struct sOffsetOf* result;
char* __dec_obj160;
struct sType* __dec_obj161;
char* __dec_obj162;
struct sOffsetOf* __result_obj__226;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__225 = (void*)0;
        return __result_obj__225;
    }
    result=(struct sOffsetOf*)come_increment_ref_count((struct sOffsetOf*)come_calloc_v2(1, sizeof(struct sOffsetOf)*(1), "sOffsetOf_clone", 3, "struct sOffsetOf*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj160=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOffsetOf_clone", 5, "char*"));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj161=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->name!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj162=result->name,
        result->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sOffsetOf_clone", 8, "char*"));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__226 = result;
    come_call_finalizer(sOffsetOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__226;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
_Bool _conditional_value_X0;
struct sSizeOfNode* __result_obj__228;
void* __right_value0 = (void*)0;
struct sSizeOfNode* result;
char* __dec_obj163;
struct sType* __dec_obj164;
struct sSizeOfNode* __result_obj__229;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__228 = (void*)0;
        return __result_obj__228;
    }
    result=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc_v2(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj163=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSizeOfNode_clone", 5, "char*"));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj164=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj164,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__229 = result;
    come_call_finalizer(sSizeOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__229;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
_Bool _conditional_value_X0;
struct sSizeOfExpNode* __result_obj__231;
void* __right_value0 = (void*)0;
struct sSizeOfExpNode* result;
char* __dec_obj167;
struct sNode* __dec_obj168;
struct sSizeOfExpNode* __result_obj__232;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__231 = (void*)0;
        return __result_obj__231;
    }
    result=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc_v2(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj167=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSizeOfExpNode_clone", 5, "char*"));
        __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj168=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__232 = result;
    come_call_finalizer(sSizeOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__232;
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
_Bool _conditional_value_X0;
struct sTypeOfNode* __result_obj__234;
void* __right_value0 = (void*)0;
struct sTypeOfNode* result;
char* __dec_obj169;
struct sType* __dec_obj170;
struct sTypeOfNode* __result_obj__235;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__234 = (void*)0;
        return __result_obj__234;
    }
    result=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc_v2(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "struct sTypeOfNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj169=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTypeOfNode_clone", 5, "char*"));
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj170=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj170,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__235 = result;
    come_call_finalizer(sTypeOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__235;
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
_Bool _conditional_value_X0;
struct sTypeOfExpNode* __result_obj__237;
void* __right_value0 = (void*)0;
struct sTypeOfExpNode* result;
char* __dec_obj173;
struct sNode* __dec_obj174;
struct sTypeOfExpNode* __result_obj__238;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__237 = (void*)0;
        return __result_obj__237;
    }
    result=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc_v2(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "struct sTypeOfExpNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj173=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTypeOfExpNode_clone", 5, "char*"));
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj174=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__238 = result;
    come_call_finalizer(sTypeOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__238;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self){
_Bool _conditional_value_X0;
struct sDynamicTypeOf* __result_obj__240;
void* __right_value0 = (void*)0;
struct sDynamicTypeOf* result;
char* __dec_obj177;
struct sNode* __dec_obj178;
struct sDynamicTypeOf* __result_obj__241;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__240 = (void*)0;
        return __result_obj__240;
    }
    result=(struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc_v2(1, sizeof(struct sDynamicTypeOf)*(1), "sDynamicTypeOf_clone", 3, "struct sDynamicTypeOf*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj177=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDynamicTypeOf_clone", 5, "char*"));
        __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj178=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__241 = result;
    come_call_finalizer(sDynamicTypeOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__241;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
_Bool _conditional_value_X0;
struct sAlignOfNode* __result_obj__243;
void* __right_value0 = (void*)0;
struct sAlignOfNode* result;
char* __dec_obj179;
struct sType* __dec_obj180;
struct sAlignOfNode* __result_obj__244;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__243 = (void*)0;
        return __result_obj__243;
    }
    result=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc_v2(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj179=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfNode_clone", 5, "char*"));
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj180=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj180,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__244 = result;
    come_call_finalizer(sAlignOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__244;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
_Bool _conditional_value_X0;
struct sAlignOfExpNode* __result_obj__246;
void* __right_value0 = (void*)0;
struct sAlignOfExpNode* result;
char* __dec_obj183;
struct sNode* __dec_obj184;
struct sAlignOfExpNode* __result_obj__247;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__246 = (void*)0;
        return __result_obj__246;
    }
    result=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj183=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfExpNode_clone", 5, "char*"));
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj184=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__247 = result;
    come_call_finalizer(sAlignOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__247;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
_Bool _conditional_value_X0;
struct sAlignOfNode2* __result_obj__249;
void* __right_value0 = (void*)0;
struct sAlignOfNode2* result;
char* __dec_obj185;
struct sType* __dec_obj186;
struct sAlignOfNode2* __result_obj__250;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__249 = (void*)0;
        return __result_obj__249;
    }
    result=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc_v2(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj185=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfNode2_clone", 5, "char*"));
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj186=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj186,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__250 = result;
    come_call_finalizer(sAlignOfNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__250;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
_Bool _conditional_value_X0;
struct sAlignOfExpNode2* __result_obj__252;
void* __right_value0 = (void*)0;
struct sAlignOfExpNode2* result;
char* __dec_obj189;
struct sNode* __dec_obj190;
struct sAlignOfExpNode2* __result_obj__253;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__252 = (void*)0;
        return __result_obj__252;
    }
    result=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj189=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfExpNode2_clone", 5, "char*"));
        __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj190=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__253 = result;
    come_call_finalizer(sAlignOfExpNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__253;
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
_Bool _conditional_value_X0;
struct sAlignAsNode* __result_obj__255;
void* __right_value0 = (void*)0;
struct sAlignAsNode* result;
char* __dec_obj191;
struct sType* __dec_obj192;
struct sAlignAsNode* __result_obj__256;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__255 = (void*)0;
        return __result_obj__255;
    }
    result=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc_v2(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj191=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignAsNode_clone", 5, "char*"));
        __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->type!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj192=result->type,
        result->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj192,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__256 = result;
    come_call_finalizer(sAlignAsNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__256;
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
_Bool _conditional_value_X0;
struct sAlignAsExpNode* __result_obj__258;
void* __right_value0 = (void*)0;
struct sAlignAsExpNode* result;
char* __dec_obj193;
struct sNode* __dec_obj194;
struct sAlignAsExpNode* __result_obj__259;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__258 = (void*)0;
        return __result_obj__258;
    }
    result=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc_v2(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj193=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignAsExpNode_clone", 5, "char*"));
        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->exp!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj194=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__259 = result;
    come_call_finalizer(sAlignAsExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__259;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool _conditional_value_X0;
_Bool _conditional_value_X1;
void* __right_value0 = (void*)0;
struct sNode* __result_obj__262;
_Bool _conditional_value_X2;
struct sNode* __result_obj__263;
_Bool _conditional_value_X3;
struct sNode* __result_obj__264;
_Bool _conditional_value_X4;
_Bool _conditional_value_X5;
_Bool _conditional_value_X6;
_Bool come_c;
_Bool _conditional_value_X7;
_Bool _conditional_value_X8;
_Bool _conditional_value_X9;
struct sNode* __result_obj__265;
struct sNode* __result_obj__266;
    if(({    (_conditional_value_X0=(charp_operator_equals(buf,"using")));    _conditional_value_X0;    })) {
        if(({        (_conditional_value_X1=(parsecmp("comelang_str",info)));        _conditional_value_X1;        })) {
            info->p+=strlen("comelang_str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result_obj__262 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__262) ? __result_obj__262 = come_decrement_ref_count(__result_obj__262, ((struct sNode*)__result_obj__262)->finalize, ((struct sNode*)__result_obj__262)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__262;
        }
        else if(({        (_conditional_value_X2=(parsecmp("comelang_pthread",info)));        _conditional_value_X2;        })) {
            info->p+=strlen("comelang_pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __right_value0 = (void*)0;
            __result_obj__263 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__263) ? __result_obj__263 = come_decrement_ref_count(__result_obj__263, ((struct sNode*)__result_obj__263)->finalize, ((struct sNode*)__result_obj__263)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__263;
        }
        else if(({        (_conditional_value_X3=(parsecmp("comelang_net",info)));        _conditional_value_X3;        })) {
            info->p+=strlen("comelang_net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __right_value0 = (void*)0;
            __result_obj__264 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            ((__result_obj__264) ? __result_obj__264 = come_decrement_ref_count(__result_obj__264, ((struct sNode*)__result_obj__264)->finalize, ((struct sNode*)__result_obj__264)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__264;
        }
        else if(({        (_conditional_value_X4=(parsecmp("comelang",info)));        _conditional_value_X4;        })) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else if(({        (_conditional_value_X5=(parsecmp("c",info)||parsecmp("C",info)));        _conditional_value_X5;        })) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(({            (_conditional_value_X6=(*info->p==123));            _conditional_value_X6;            })) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c;
            }
            else {
                gComeC=(_Bool)1;
            }
        }
        else if(({        (_conditional_value_X7=(parsecmp("gc",info)));        _conditional_value_X7;        })) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
        }
        else if(({        (_conditional_value_X8=(parsecmp("no-gc",info)));        _conditional_value_X8;        })) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
        }
        else if(({        (_conditional_value_X9=(parsecmp("unsafe",info)));        _conditional_value_X9;        })) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
        __right_value0 = (void*)0;
        __result_obj__265 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__265) ? __result_obj__265 = come_decrement_ref_count(__result_obj__265, ((struct sNode*)__result_obj__265)->finalize, ((struct sNode*)__result_obj__265)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__265;
    }
    __right_value0 = (void*)0;
    __result_obj__266 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v93(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__266) ? __result_obj__266 = come_decrement_ref_count(__result_obj__266, ((struct sNode*)__result_obj__266)->finalize, ((struct sNode*)__result_obj__266)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__266;
}

struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct sNode* _inf_value32;
struct sImplementsNode* _inf_obj_value32;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__269;
    _inf_value32=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 2109, "struct sNode");
    _inf_obj_value32=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value1=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2109, "struct sImplementsNode*")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
    _inf_value32->_protocol_obj=_inf_obj_value32;
    _inf_value32->finalize=(void*)sImplementsNode_finalize;
    _inf_value32->clone=(void*)sImplementsNode_clone;
    _inf_value32->compile=(void*)sImplementsNode_compile;
    _inf_value32->sline=(void*)sNodeBase_sline;
    _inf_value32->sline_real=(void*)sNodeBase_sline_real;
    _inf_value32->sname=(void*)sNodeBase_sname;
    _inf_value32->terminated=(void*)sNodeBase_terminated;
    _inf_value32->kind=(void*)sImplementsNode_kind;
    _inf_value32->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__269 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value32)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sImplementsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__269) ? __result_obj__269 = come_decrement_ref_count(__result_obj__269, ((struct sNode*)__result_obj__269)->finalize, ((struct sNode*)__result_obj__269)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__269;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
_Bool _conditional_value_X0;
struct sImplementsNode* __result_obj__267;
void* __right_value0 = (void*)0;
struct sImplementsNode* result;
char* __dec_obj195;
struct sNode* __dec_obj196;
struct sType* __dec_obj197;
struct sImplementsNode* __result_obj__268;
    if(({    (_conditional_value_X0=(self==(void*)0));    _conditional_value_X0;    })) {
        __result_obj__267 = (void*)0;
        return __result_obj__267;
    }
    result=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode*"));
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline=self->sline;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->sname!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj195=result->sname,
        result->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sImplementsNode_clone", 5, "char*"));
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)));    _conditional_value_X0;    })) {
        result->sline_real=self->sline_real;
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->obj_exp!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj196=result->obj_exp,
        result->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(({    (_conditional_value_X0=(self!=((void*)0)&&self->inf_type!=((void*)0)));    _conditional_value_X0;    })) {
        __right_value0 = (void*)0;
        __dec_obj197=result->inf_type,
        result->inf_type=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
        come_call_finalizer(sType_finalize, __dec_obj197,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__268 = result;
    come_call_finalizer(sImplementsNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__268;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
_Bool _conditional_value_X0;
void* __right_value0 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* type3=0;
char* name2=0;
_Bool err=0;
_Bool _conditional_value_X1;
struct sType* inf_type;
void* __right_value1 = (void*)0;
struct sNode* _inf_value33;
struct sImplementsNode* _inf_obj_value33;
void* __right_value2 = (void*)0;
struct sNode* __result_obj__270;
_Bool _conditional_value_X2;
_Bool _conditional_value_X3;
struct sNode* __result_obj__271;
    if(({    (_conditional_value_X0=(!node->terminated(node->_protocol_obj)&&!gComeC&&parsecmp("implements",info)));    _conditional_value_X0;    })) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
        name2=(char*)come_increment_ref_count(multiple_assign_var18->v2);
        err=multiple_assign_var18->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(({        (_conditional_value_X1=(!err));        _conditional_value_X1;        })) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        __right_value0 = (void*)0;
        inf_type=(struct sType*)come_increment_ref_count(sType_clone(type3));
        __right_value0 = (void*)0;
        _inf_value33=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 2126, "struct sNode");
        _inf_obj_value33=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value1=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2126, "struct sImplementsNode*")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
        _inf_value33->_protocol_obj=_inf_obj_value33;
        _inf_value33->finalize=(void*)sImplementsNode_finalize;
        _inf_value33->clone=(void*)sImplementsNode_clone;
        _inf_value33->compile=(void*)sImplementsNode_compile;
        _inf_value33->sline=(void*)sNodeBase_sline;
        _inf_value33->sline_real=(void*)sNodeBase_sline_real;
        _inf_value33->sname=(void*)sNodeBase_sname;
        _inf_value33->terminated=(void*)sNodeBase_terminated;
        _inf_value33->kind=(void*)sImplementsNode_kind;
        _inf_value33->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__270 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value33)));
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sImplementsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__result_obj__270) ? __result_obj__270 = come_decrement_ref_count(__result_obj__270, ((struct sNode*)__result_obj__270)->finalize, ((struct sNode*)__result_obj__270)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__270;
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(({    (_conditional_value_X2=(*info->p==64));    _conditional_value_X2;    })) {
        info->p++;
        while(({        (_conditional_value_X3=(xisalnum(*info->p)||*info->p==95));        _conditional_value_X3;        })) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __right_value0 = (void*)0;
    __result_obj__271 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__result_obj__271) ? __result_obj__271 = come_decrement_ref_count(__result_obj__271, ((struct sNode*)__result_obj__271)->finalize, ((struct sNode*)__result_obj__271)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__271;
}

